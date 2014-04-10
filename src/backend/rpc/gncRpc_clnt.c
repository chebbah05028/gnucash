/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "gncRpc.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

enum clnt_stat 
gncrpc_version_1(void *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_version,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_book_begin_1(gncrpc_book_begin_args *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_book_begin,
		(xdrproc_t) xdr_gncrpc_book_begin_args, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_book_load_1(char *argp, gncrpc_book_load_ret *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_book_load,
		(xdrproc_t) xdr_gncrpc_ptr, (caddr_t) argp,
		(xdrproc_t) xdr_gncrpc_book_load_ret, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_book_end_1(char *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_book_end,
		(xdrproc_t) xdr_gncrpc_ptr, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_account_begin_edit_1(gncrpc_backend_guid *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_account_begin_edit,
		(xdrproc_t) xdr_gncrpc_backend_guid, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_account_commit_edit_1(gncrpc_commit_acct_args *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_account_commit_edit,
		(xdrproc_t) xdr_gncrpc_commit_acct_args, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_account_rollback_edit_1(gncrpc_backend_guid *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_account_rollback_edit,
		(xdrproc_t) xdr_gncrpc_backend_guid, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_txn_begin_edit_1(gncrpc_backend_guid *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_txn_begin_edit,
		(xdrproc_t) xdr_gncrpc_backend_guid, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_txn_commit_edit_1(gncrpc_commit_txn_args *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_txn_commit_edit,
		(xdrproc_t) xdr_gncrpc_commit_txn_args, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_txn_rollback_edit_1(gncrpc_backend_guid *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_txn_rollback_edit,
		(xdrproc_t) xdr_gncrpc_backend_guid, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_run_query_1(gncrpc_query_args *argp, gncrpc_query_ret *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_run_query,
		(xdrproc_t) xdr_gncrpc_query_args, (caddr_t) argp,
		(xdrproc_t) xdr_gncrpc_query_ret, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_sync1_1(gncrpc_sync1_args *argp, gncrpc_sync1_ret *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_sync1,
		(xdrproc_t) xdr_gncrpc_sync1_args, (caddr_t) argp,
		(xdrproc_t) xdr_gncrpc_sync1_ret, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_sync2_1(gncrpc_sync2_args *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_sync2,
		(xdrproc_t) xdr_gncrpc_sync2_args, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
gncrpc_get_txns_1(gncrpc_get_txns_args *argp, gncrpc_get_txns_ret *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, gncrpc_get_txns,
		(xdrproc_t) xdr_gncrpc_get_txns_args, (caddr_t) argp,
		(xdrproc_t) xdr_gncrpc_get_txns_ret, (caddr_t) clnt_res,
		TIMEOUT));
}