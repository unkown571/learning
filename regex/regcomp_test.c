/*
 * =====================================================================================
 *
 *       Filename:  regcomp_test.c
 *
 *    Description:  This is a demo for POSIX regex functions.
 *    		    Such as regcomp, regexec, regerror and regfree. It also 
 *    		    shows the differece between using POSIX Basic Regular 
 *    		    Expression syntax and POSIX Extended Regular Expression 
 *    		    syntax.
 *
 *        Version:  1.0
 *        Created:  03/04/2012 12:35:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://www.zhangliancheng.com
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <regex.h>

#define	MAXLINE 1024

int main(void)
{
	int ret;
	char buf[] = "abb";
	char regex[MAXLINE];
	char errorbuf[MAXLINE];
	regex_t reg;
	size_t nmatch = 100;
	regmatch_t pm[nmatch];

	/**
	 * Two matching methods:
	 * 1) "ab+" with REG_EXTENDED (POSIX Extended Regular Expression syntax)
	 * 2) "ab\\+" with 0 (POSIX BASIC Regular Expression syntax)
	 */
	/*snprintf(regex, sizeof(regex), "%s", "ab+");*/
	snprintf(regex, sizeof(regex), "%s", "ab\\+");
	printf("regex=%sok\n", regex);

	/*ret = regcomp(&reg, regex, REG_EXTENDED);*/
	ret = regcomp(&reg, regex, 0);
	printf("regcomp ret = %d\n", ret);
	if (ret != 0)
	{
		regerror(ret, &reg, errorbuf, sizeof(errorbuf));
		fprintf(stderr, "error: %s\n", errorbuf);
		exit(EXIT_FAILURE);
	}

	ret = regexec(&reg, buf, nmatch, pm, 0);
	printf("regexec ret = %d\n", ret);
	if (ret == REG_NOMATCH)
	{
		printf("no match\n");
	}

	printf("pm[0].rm_so = %zd\n", (size_t)pm[0].rm_so);
	printf("pm[0].rm_eo = %zd\n", (size_t)pm[0].rm_eo);
	printf("pm[1].rm_so = %zd\n", (size_t)pm[1].rm_so);
	printf("pm[1].rm_eo = %zd\n", (size_t)pm[1].rm_eo);

	regfree(&reg);

	return 0;
}
