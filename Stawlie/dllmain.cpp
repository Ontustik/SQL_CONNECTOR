
#include "pch.h"
#include <sql.h>
#include <cstring>
#include <sqlext.h>

#define SQL_API_ODBC3_ALL_FUNCTIONS_SIZE    250 

extern "C" {
	SQLRETURN  SQL_API SQLAllocConnect(SQLHENV EnvironmentHandle,
		_Out_ SQLHDBC* ConnectionHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLAllocEnv(_Out_ SQLHENV* EnvironmentHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLAllocHandle(SQLSMALLINT HandleType,
		SQLHANDLE InputHandle, _Out_ SQLHANDLE* OutputHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLAllocStmt(SQLHDBC ConnectionHandle,
		_Out_ SQLHSTMT* StatementHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLBindCol(SQLHSTMT StatementHandle,
		SQLUSMALLINT ColumnNumber, SQLSMALLINT TargetType,
		_Inout_updates_opt_(_Inexpressible_(BufferLength)) SQLPOINTER TargetValue,
		SQLLEN BufferLength, _Inout_opt_ SQLLEN* StrLen_or_Ind)
	{
		return SQL_SUCCESS;
	}

	__declspec(deprecated("ODBC API: SQLBindParam is deprecated. Please use SQLBindParameter instead."))
		SQLRETURN  SQL_API SQLBindParam(SQLHSTMT StatementHandle,
			SQLUSMALLINT ParameterNumber, SQLSMALLINT ValueType,
			SQLSMALLINT ParameterType, SQLULEN LengthPrecision,
			SQLSMALLINT ParameterScale, SQLPOINTER ParameterValue,
			SQLLEN* StrLen_or_Ind)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLCancel(SQLHSTMT StatementHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLCancelHandle(SQLSMALLINT HandleType, SQLHANDLE InputHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLCloseCursor(SQLHSTMT StatementHandle)
	{
		return SQL_SUCCESS;
	}

#ifdef _WIN64
	SQLRETURN  SQL_API SQLColAttribute(SQLHSTMT StatementHandle,
		SQLUSMALLINT ColumnNumber, SQLUSMALLINT FieldIdentifier,
		_Out_writes_bytes_opt_(BufferLength) SQLPOINTER CharacterAttribute, SQLSMALLINT BufferLength,
		_Out_opt_ SQLSMALLINT* StringLength, _Out_opt_ SQLLEN* NumericAttribute)
	{
		return SQL_SUCCESS;
	}
#else
	SQLRETURN  SQL_API SQLColAttribute(SQLHSTMT StatementHandle,
		SQLUSMALLINT ColumnNumber, SQLUSMALLINT FieldIdentifier,
		_Out_writes_bytes_opt_(BufferLength) SQLPOINTER CharacterAttribute, SQLSMALLINT BufferLength,
		_Out_opt_ SQLSMALLINT* StringLength, _Out_opt_ SQLPOINTER NumericAttribute)
	{
		return SQL_SUCCESS;
	}
#endif


	SQLRETURN  SQL_API SQLColumns(SQLHSTMT StatementHandle,
		_In_reads_opt_(NameLength1) SQLCHAR* CatalogName, SQLSMALLINT NameLength1,
		_In_reads_opt_(NameLength2) SQLCHAR* SchemaName, SQLSMALLINT NameLength2,
		_In_reads_opt_(NameLength3) SQLCHAR* TableName, SQLSMALLINT NameLength3,
		_In_reads_opt_(NameLength4) SQLCHAR* ColumnName, SQLSMALLINT NameLength4)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN SQL_API SQLCompleteAsync(SQLSMALLINT    HandleType,
		SQLHANDLE      Handle,
		_Out_ RETCODE* AsyncRetCodePtr)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLConnect(SQLHDBC ConnectionHandle,
		_In_reads_(NameLength1) SQLCHAR* ServerName, SQLSMALLINT NameLength1,
		_In_reads_(NameLength2) SQLCHAR* UserName, SQLSMALLINT NameLength2,
		_In_reads_(NameLength3) SQLCHAR* Authentication, SQLSMALLINT NameLength3)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLCopyDesc(SQLHDESC SourceDescHandle,
		SQLHDESC TargetDescHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLDataSources(SQLHENV EnvironmentHandle,
		SQLUSMALLINT Direction, _Out_writes_opt_(BufferLength1) SQLCHAR* ServerName,
		SQLSMALLINT BufferLength1, _Out_opt_ SQLSMALLINT* NameLength1Ptr,
		_Out_writes_opt_(BufferLength2) SQLCHAR* Description, SQLSMALLINT BufferLength2,
		_Out_opt_ SQLSMALLINT* NameLength2Ptr)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLDescribeCol(SQLHSTMT StatementHandle,
		SQLUSMALLINT ColumnNumber, _Out_writes_opt_(BufferLength) SQLCHAR* ColumnName,
		SQLSMALLINT BufferLength, _Out_opt_ SQLSMALLINT* NameLength,
		_Out_opt_ SQLSMALLINT* DataType, _Out_opt_ SQLULEN* ColumnSize,
		_Out_opt_ SQLSMALLINT* DecimalDigits, _Out_opt_ SQLSMALLINT* Nullable)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLDisconnect(SQLHDBC ConnectionHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLEndTran(SQLSMALLINT HandleType, SQLHANDLE Handle,
		SQLSMALLINT CompletionType)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLError(SQLHENV EnvironmentHandle,
		SQLHDBC ConnectionHandle, SQLHSTMT StatementHandle,
		_Out_writes_(6) SQLCHAR* Sqlstate, _Out_opt_ SQLINTEGER* NativeError,
		_Out_writes_opt_(BufferLength) SQLCHAR* MessageText, SQLSMALLINT BufferLength,
		_Out_opt_ SQLSMALLINT* TextLength)
	{
		return SQL_NO_DATA;
	}

	SQLRETURN  SQL_API SQLExecDirect
	(
		SQLHSTMT StatementHandle,
		_In_reads_opt_(TextLength) SQLCHAR* StatementText,
		SQLINTEGER TextLength
	)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLExecute(SQLHSTMT StatementHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLFetch(SQLHSTMT StatementHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLFetchScroll(SQLHSTMT StatementHandle,
		SQLSMALLINT FetchOrientation, SQLLEN FetchOffset)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLFreeConnect(SQLHDBC ConnectionHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLFreeEnv(SQLHENV EnvironmentHandle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLFreeHandle(SQLSMALLINT HandleType, SQLHANDLE Handle)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLFreeStmt(SQLHSTMT StatementHandle,
		SQLUSMALLINT Option)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetConnectAttr(SQLHDBC ConnectionHandle,
		SQLINTEGER Attribute, _Out_writes_opt_(_Inexpressible_(BufferLength)) SQLPOINTER Value,
		SQLINTEGER BufferLength, _Out_opt_ SQLINTEGER* StringLengthPtr)
	{
		return SQL_SUCCESS;
	}
	__declspec(deprecated("ODBC API: SQLGetConnectOption is deprecated. Please use SQLGetConnectAttr instead."))

		SQLRETURN  SQL_API SQLGetConnectOption(SQLHDBC ConnectionHandle,
			SQLUSMALLINT Option, SQLPOINTER Value)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetCursorName
	(
		SQLHSTMT StatementHandle,
		_Out_writes_opt_(BufferLength) SQLCHAR* CursorName,
		SQLSMALLINT BufferLength,
		_Out_opt_
		SQLSMALLINT* NameLengthPtr
	)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetData(SQLHSTMT StatementHandle,
		SQLUSMALLINT ColumnNumber, SQLSMALLINT TargetType,
		_Out_writes_opt_(_Inexpressible_(BufferLength)) SQLPOINTER TargetValue, SQLLEN BufferLength,
		_Out_opt_ SQLLEN* StrLen_or_IndPtr)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetDescField(SQLHDESC DescriptorHandle,
		SQLSMALLINT RecNumber, SQLSMALLINT FieldIdentifier,
		_Out_writes_opt_(_Inexpressible_(BufferLength)) SQLPOINTER Value, SQLINTEGER BufferLength,
		_Out_opt_ SQLINTEGER* StringLength)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetDescRec(SQLHDESC DescriptorHandle,
		SQLSMALLINT RecNumber, _Out_writes_opt_(BufferLength) SQLCHAR* Name,
		SQLSMALLINT BufferLength, _Out_opt_ SQLSMALLINT* StringLengthPtr,
		_Out_opt_ SQLSMALLINT* TypePtr, _Out_opt_ SQLSMALLINT* SubTypePtr,
		_Out_opt_ SQLLEN* LengthPtr, _Out_opt_ SQLSMALLINT* PrecisionPtr,
		_Out_opt_ SQLSMALLINT* ScalePtr, _Out_opt_ SQLSMALLINT* NullablePtr)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetDiagField(SQLSMALLINT HandleType, SQLHANDLE Handle,
		SQLSMALLINT RecNumber, SQLSMALLINT DiagIdentifier,
		_Out_writes_opt_(_Inexpressible_(BufferLength)) SQLPOINTER DiagInfo, SQLSMALLINT BufferLength,
		_Out_opt_ SQLSMALLINT* StringLength)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetDiagRec
	(
		SQLSMALLINT HandleType,
		SQLHANDLE Handle,
		SQLSMALLINT RecNumber,
		_Out_writes_opt_(6) SQLCHAR* Sqlstate,
		SQLINTEGER* NativeError,
		_Out_writes_opt_(BufferLength) SQLCHAR* MessageText,
		SQLSMALLINT BufferLength,
		_Out_opt_
		SQLSMALLINT* TextLength
	)
	{
		return SQL_NO_DATA;
	}

	SQLRETURN  SQL_API SQLGetEnvAttr(SQLHENV EnvironmentHandle,
		SQLINTEGER Attribute, _Out_writes_(_Inexpressible_(BufferLength)) SQLPOINTER Value,
		SQLINTEGER BufferLength, _Out_opt_ SQLINTEGER* StringLength)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetFunctions(SQLHDBC ConnectionHandle,
		SQLUSMALLINT FunctionId,
		_Out_writes_opt_(_Inexpressible_("Buffer length pfExists points to depends on fFunction value."))
		SQLUSMALLINT* Supported)
	{
		std::memset(Supported, SQL_TRUE, SQL_API_ODBC3_ALL_FUNCTIONS_SIZE * sizeof(SQLUSMALLINT));
		return SQL_SUCCESS;
	}

	_Success_(return == SQL_SUCCESS)
		SQLRETURN  SQL_API SQLGetInfo(SQLHDBC ConnectionHandle,
			SQLUSMALLINT InfoType, _Out_writes_bytes_opt_(BufferLength) SQLPOINTER InfoValue,
			SQLSMALLINT BufferLength, _Out_opt_ SQLSMALLINT* StringLengthPtr)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetStmtAttr(SQLHSTMT StatementHandle,
		SQLINTEGER Attribute, _Out_writes_opt_(_Inexpressible_(BufferLength)) SQLPOINTER Value,
		SQLINTEGER BufferLength, _Out_opt_ SQLINTEGER* StringLength)
	{
		return SQL_SUCCESS;
	}
	__declspec(deprecated("ODBC API: SQLGetStmtOption is deprecated. Please use SQLGetStmtAttr instead."))

		SQLRETURN  SQL_API SQLGetStmtOption(SQLHSTMT StatementHandle,
			SQLUSMALLINT Option, SQLPOINTER Value)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLGetTypeInfo(SQLHSTMT StatementHandle,
		SQLSMALLINT DataType)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLNumResultCols(SQLHSTMT StatementHandle,
		_Out_ SQLSMALLINT* ColumnCount)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLParamData(SQLHSTMT StatementHandle,
		_Out_opt_ SQLPOINTER* Value)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLPrepare
	(
		SQLHSTMT StatementHandle,
		_In_reads_(TextLength) SQLCHAR* StatementText,
		SQLINTEGER TextLength
	)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLPutData(SQLHSTMT StatementHandle,
		_In_reads_(_Inexpressible_(StrLen_or_Ind)) SQLPOINTER Data, SQLLEN StrLen_or_Ind)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLRowCount(_In_ SQLHSTMT StatementHandle,
		_Out_ SQLLEN* RowCount)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLSetConnectAttr(SQLHDBC ConnectionHandle,
		SQLINTEGER Attribute, _In_reads_bytes_opt_(StringLength) SQLPOINTER Value,
		SQLINTEGER StringLength)
	{
		return SQL_SUCCESS;
	}
	__declspec(deprecated("ODBC API: SQLSetConnectOption is deprecated. Please use SQLSetConnectAttr instead."))

		SQLRETURN  SQL_API SQLSetConnectOption(SQLHDBC ConnectionHandle,
			SQLUSMALLINT Option, SQLULEN Value)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLSetCursorName
	(
		SQLHSTMT StatementHandle,
		_In_reads_(NameLength) SQLCHAR* CursorName,
		SQLSMALLINT NameLength
	)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLSetDescField(SQLHDESC DescriptorHandle,
		SQLSMALLINT RecNumber, SQLSMALLINT FieldIdentifier,
		_In_reads_(_Inexpressible_(BufferLength)) SQLPOINTER Value, SQLINTEGER BufferLength)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLSetDescRec(SQLHDESC DescriptorHandle,
		SQLSMALLINT RecNumber, SQLSMALLINT Type,
		SQLSMALLINT SubType, SQLLEN Length,
		SQLSMALLINT Precision, SQLSMALLINT Scale,
		_Inout_updates_bytes_opt_(Length) SQLPOINTER Data, _Inout_opt_ SQLLEN* StringLength,
		_Inout_opt_ SQLLEN* Indicator)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLSetEnvAttr(SQLHENV EnvironmentHandle,
		SQLINTEGER Attribute, _In_reads_bytes_opt_(StringLength) SQLPOINTER Value,
		SQLINTEGER StringLength)
	{
		return SQL_SUCCESS;
	}

	__declspec(deprecated("ODBC API: SQLSetParam is deprecated. Please use SQLBindParameter instead."))
		SQLRETURN  SQL_API SQLSetParam(SQLHSTMT StatementHandle,
			SQLUSMALLINT ParameterNumber, SQLSMALLINT ValueType,
			SQLSMALLINT ParameterType, SQLULEN LengthPrecision,
			SQLSMALLINT ParameterScale, _In_reads_(_Inexpressible_(*StrLen_or_Ind)) SQLPOINTER ParameterValue,
			_Inout_ SQLLEN* StrLen_or_Ind)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLSetStmtAttr(SQLHSTMT StatementHandle,
		SQLINTEGER Attribute, _In_reads_(_Inexpressible_(StringLength)) SQLPOINTER Value,
		SQLINTEGER StringLength)
	{
		return SQL_SUCCESS;
	}
	__declspec(deprecated("ODBC API: SQLSetStmtOption is deprecated. Please use SQLSetStmtAttr instead."))

		SQLRETURN  SQL_API SQLSetStmtOption(SQLHSTMT StatementHandle,
			SQLUSMALLINT Option, SQLULEN Value)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLSpecialColumns(SQLHSTMT StatementHandle,
		SQLUSMALLINT IdentifierType,
		_In_reads_opt_(NameLength1) SQLCHAR* CatalogName, SQLSMALLINT NameLength1,
		_In_reads_opt_(NameLength2) SQLCHAR* SchemaName, SQLSMALLINT NameLength2,
		_In_reads_opt_(NameLength3) SQLCHAR* TableName, SQLSMALLINT NameLength3,
		SQLUSMALLINT Scope, SQLUSMALLINT Nullable)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLStatistics(SQLHSTMT StatementHandle,
		_In_reads_opt_(NameLength1) SQLCHAR* CatalogName, SQLSMALLINT NameLength1,
		_In_reads_opt_(NameLength2) SQLCHAR* SchemaName, SQLSMALLINT NameLength2,
		_In_reads_opt_(NameLength3) SQLCHAR* TableName, SQLSMALLINT NameLength3,
		SQLUSMALLINT Unique, SQLUSMALLINT Reserved)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLTables(SQLHSTMT StatementHandle,
		_In_reads_opt_(NameLength1) SQLCHAR* CatalogName, SQLSMALLINT NameLength1,
		_In_reads_opt_(NameLength2) SQLCHAR* SchemaName, SQLSMALLINT NameLength2,
		_In_reads_opt_(NameLength3) SQLCHAR* TableName, SQLSMALLINT NameLength3,
		_In_reads_opt_(NameLength4) SQLCHAR* TableType, SQLSMALLINT NameLength4)
	{
		return SQL_SUCCESS;
	}

	SQLRETURN  SQL_API SQLTransact(SQLHENV EnvironmentHandle,
		SQLHDBC ConnectionHandle, SQLUSMALLINT CompletionType)
	{
		return SQL_SUCCESS;


	}}

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpReserved)  // reserved
{
    // Perform actions based on the reason for calling.
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        // Initialize once for each new process.
        // Return FALSE to fail DLL load.
        break;

    case DLL_THREAD_ATTACH:
        // Do thread-specific initialization.
        break;

    case DLL_THREAD_DETACH:
        // Do thread-specific cleanup.
        break;

    case DLL_PROCESS_DETACH:
        // Perform any necessary cleanup.
        break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}