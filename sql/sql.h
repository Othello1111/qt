// +build !minimal

#pragma once

#ifndef GO_QTSQL_H
#define GO_QTSQL_H

#include <stdint.h>

#ifdef __cplusplus
int QSqlDriver_QSqlDriver_QRegisterMetaType();
int QSqlDriverCreatorBase_QSqlDriverCreatorBase_QRegisterMetaType();
int QSqlDriverPlugin_QSqlDriverPlugin_QRegisterMetaType();
int QSqlQueryModel_QSqlQueryModel_QRegisterMetaType();
int QSqlRelationalDelegate_QSqlRelationalDelegate_QRegisterMetaType();
int QSqlRelationalTableModel_QSqlRelationalTableModel_QRegisterMetaType();
int QSqlResult_QSqlResult_QRegisterMetaType();
int QSqlTableModel_QSqlTableModel_QRegisterMetaType();
extern "C" {
#endif

struct QtSql_PackedString { char* data; long long len; };
struct QtSql_PackedList { void* data; long long len; };
void* QSqlDatabase_NewQSqlDatabase();
void* QSqlDatabase_NewQSqlDatabase2(void* other);
void* QSqlDatabase_NewQSqlDatabase3(struct QtSql_PackedString ty);
void* QSqlDatabase_NewQSqlDatabase4(void* driver);
void* QSqlDatabase_QSqlDatabase_AddDatabase(struct QtSql_PackedString ty, struct QtSql_PackedString connectionName);
void* QSqlDatabase_QSqlDatabase_AddDatabase2(void* driver, struct QtSql_PackedString connectionName);
void* QSqlDatabase_QSqlDatabase_CloneDatabase(void* other, struct QtSql_PackedString connectionName);
void* QSqlDatabase_QSqlDatabase_CloneDatabase2(struct QtSql_PackedString other, struct QtSql_PackedString connectionName);
void QSqlDatabase_Close(void* ptr);
char QSqlDatabase_Commit(void* ptr);
struct QtSql_PackedString QSqlDatabase_ConnectOptions(void* ptr);
struct QtSql_PackedString QSqlDatabase_ConnectionName(void* ptr);
struct QtSql_PackedString QSqlDatabase_QSqlDatabase_ConnectionNames();
char QSqlDatabase_QSqlDatabase_Contains(struct QtSql_PackedString connectionName);
void* QSqlDatabase_QSqlDatabase_Database(struct QtSql_PackedString connectionName, char open);
struct QtSql_PackedString QSqlDatabase_DatabaseName(void* ptr);
void* QSqlDatabase_Driver(void* ptr);
struct QtSql_PackedString QSqlDatabase_DriverName(void* ptr);
struct QtSql_PackedString QSqlDatabase_QSqlDatabase_Drivers();
void* QSqlDatabase_Exec(void* ptr, struct QtSql_PackedString query);
struct QtSql_PackedString QSqlDatabase_HostName(void* ptr);
char QSqlDatabase_QSqlDatabase_IsDriverAvailable(struct QtSql_PackedString name);
char QSqlDatabase_IsOpen(void* ptr);
char QSqlDatabase_IsOpenError(void* ptr);
char QSqlDatabase_IsValid(void* ptr);
void* QSqlDatabase_LastError(void* ptr);
long long QSqlDatabase_NumericalPrecisionPolicy(void* ptr);
char QSqlDatabase_Open(void* ptr);
char QSqlDatabase_Open2(void* ptr, struct QtSql_PackedString user, struct QtSql_PackedString password);
struct QtSql_PackedString QSqlDatabase_Password(void* ptr);
int QSqlDatabase_Port(void* ptr);
void* QSqlDatabase_PrimaryIndex(void* ptr, struct QtSql_PackedString tablename);
void* QSqlDatabase_Record(void* ptr, struct QtSql_PackedString tablename);
void QSqlDatabase_QSqlDatabase_RegisterSqlDriver(struct QtSql_PackedString name, void* creator);
void QSqlDatabase_QSqlDatabase_RemoveDatabase(struct QtSql_PackedString connectionName);
char QSqlDatabase_Rollback(void* ptr);
void QSqlDatabase_SetConnectOptions(void* ptr, struct QtSql_PackedString options);
void QSqlDatabase_SetDatabaseName(void* ptr, struct QtSql_PackedString name);
void QSqlDatabase_SetHostName(void* ptr, struct QtSql_PackedString host);
void QSqlDatabase_SetNumericalPrecisionPolicy(void* ptr, long long precisionPolicy);
void QSqlDatabase_SetPassword(void* ptr, struct QtSql_PackedString password);
void QSqlDatabase_SetPort(void* ptr, int port);
void QSqlDatabase_SetUserName(void* ptr, struct QtSql_PackedString name);
struct QtSql_PackedString QSqlDatabase_Tables(void* ptr, long long ty);
char QSqlDatabase_Transaction(void* ptr);
struct QtSql_PackedString QSqlDatabase_UserName(void* ptr);
void QSqlDatabase_DestroyQSqlDatabase(void* ptr);
void* QSqlDriver_NewQSqlDriver(void* parent);
char QSqlDriver_BeginTransaction(void* ptr);
char QSqlDriver_BeginTransactionDefault(void* ptr);
void QSqlDriver_Close(void* ptr);
char QSqlDriver_CommitTransaction(void* ptr);
char QSqlDriver_CommitTransactionDefault(void* ptr);
void* QSqlDriver_CreateResult(void* ptr);
struct QtSql_PackedString QSqlDriver_EscapeIdentifier(void* ptr, struct QtSql_PackedString identifier, long long ty);
struct QtSql_PackedString QSqlDriver_EscapeIdentifierDefault(void* ptr, struct QtSql_PackedString identifier, long long ty);
struct QtSql_PackedString QSqlDriver_FormatValue(void* ptr, void* field, char trimStrings);
struct QtSql_PackedString QSqlDriver_FormatValueDefault(void* ptr, void* field, char trimStrings);
void* QSqlDriver_Handle(void* ptr);
void* QSqlDriver_HandleDefault(void* ptr);
char QSqlDriver_HasFeature(void* ptr, long long feature);
char QSqlDriver_IsIdentifierEscaped(void* ptr, struct QtSql_PackedString identifier, long long ty);
char QSqlDriver_IsIdentifierEscapedDefault(void* ptr, struct QtSql_PackedString identifier, long long ty);
char QSqlDriver_IsOpen(void* ptr);
char QSqlDriver_IsOpenDefault(void* ptr);
char QSqlDriver_IsOpenError(void* ptr);
void* QSqlDriver_LastError(void* ptr);
void QSqlDriver_ConnectNotification(void* ptr, long long t);
void QSqlDriver_DisconnectNotification(void* ptr);
void QSqlDriver_Notification(void* ptr, struct QtSql_PackedString name);
void QSqlDriver_ConnectNotification2(void* ptr, long long t);
void QSqlDriver_DisconnectNotification2(void* ptr);
void QSqlDriver_Notification2(void* ptr, struct QtSql_PackedString name, long long source, void* payload);
long long QSqlDriver_NumericalPrecisionPolicy(void* ptr);
char QSqlDriver_Open(void* ptr, struct QtSql_PackedString db, struct QtSql_PackedString user, struct QtSql_PackedString password, struct QtSql_PackedString host, int port, struct QtSql_PackedString options);
void* QSqlDriver_PrimaryIndex(void* ptr, struct QtSql_PackedString tableName);
void* QSqlDriver_PrimaryIndexDefault(void* ptr, struct QtSql_PackedString tableName);
void* QSqlDriver_Record(void* ptr, struct QtSql_PackedString tableName);
void* QSqlDriver_RecordDefault(void* ptr, struct QtSql_PackedString tableName);
char QSqlDriver_RollbackTransaction(void* ptr);
char QSqlDriver_RollbackTransactionDefault(void* ptr);
void QSqlDriver_SetLastError(void* ptr, void* error);
void QSqlDriver_SetLastErrorDefault(void* ptr, void* error);
void QSqlDriver_SetNumericalPrecisionPolicy(void* ptr, long long precisionPolicy);
void QSqlDriver_SetOpen(void* ptr, char open);
void QSqlDriver_SetOpenDefault(void* ptr, char open);
void QSqlDriver_SetOpenError(void* ptr, char error);
void QSqlDriver_SetOpenErrorDefault(void* ptr, char error);
struct QtSql_PackedString QSqlDriver_SqlStatement(void* ptr, long long ty, struct QtSql_PackedString tableName, void* rec, char preparedStatement);
struct QtSql_PackedString QSqlDriver_SqlStatementDefault(void* ptr, long long ty, struct QtSql_PackedString tableName, void* rec, char preparedStatement);
struct QtSql_PackedString QSqlDriver_StripDelimiters(void* ptr, struct QtSql_PackedString identifier, long long ty);
struct QtSql_PackedString QSqlDriver_StripDelimitersDefault(void* ptr, struct QtSql_PackedString identifier, long long ty);
char QSqlDriver_SubscribeToNotification(void* ptr, struct QtSql_PackedString name);
char QSqlDriver_SubscribeToNotificationDefault(void* ptr, struct QtSql_PackedString name);
struct QtSql_PackedString QSqlDriver_SubscribedToNotifications(void* ptr);
struct QtSql_PackedString QSqlDriver_SubscribedToNotificationsDefault(void* ptr);
struct QtSql_PackedString QSqlDriver_Tables(void* ptr, long long tableType);
struct QtSql_PackedString QSqlDriver_TablesDefault(void* ptr, long long tableType);
char QSqlDriver_UnsubscribeFromNotification(void* ptr, struct QtSql_PackedString name);
char QSqlDriver_UnsubscribeFromNotificationDefault(void* ptr, struct QtSql_PackedString name);
void QSqlDriver_DestroyQSqlDriver(void* ptr);
void QSqlDriver_DestroyQSqlDriverDefault(void* ptr);
void* QSqlDriver___children_atList(void* ptr, int i);
void QSqlDriver___children_setList(void* ptr, void* i);
void* QSqlDriver___children_newList(void* ptr);
void* QSqlDriver___dynamicPropertyNames_atList(void* ptr, int i);
void QSqlDriver___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSqlDriver___dynamicPropertyNames_newList(void* ptr);
void* QSqlDriver___findChildren_atList(void* ptr, int i);
void QSqlDriver___findChildren_setList(void* ptr, void* i);
void* QSqlDriver___findChildren_newList(void* ptr);
void* QSqlDriver___findChildren_atList3(void* ptr, int i);
void QSqlDriver___findChildren_setList3(void* ptr, void* i);
void* QSqlDriver___findChildren_newList3(void* ptr);
void* QSqlDriver___qFindChildren_atList2(void* ptr, int i);
void QSqlDriver___qFindChildren_setList2(void* ptr, void* i);
void* QSqlDriver___qFindChildren_newList2(void* ptr);
void QSqlDriver_ChildEventDefault(void* ptr, void* event);
void QSqlDriver_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlDriver_CustomEventDefault(void* ptr, void* event);
void QSqlDriver_DeleteLaterDefault(void* ptr);
void QSqlDriver_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlDriver_EventDefault(void* ptr, void* e);
char QSqlDriver_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlDriver_MetaObjectDefault(void* ptr);
void QSqlDriver_TimerEventDefault(void* ptr, void* event);
void* QSqlDriverCreatorBase_CreateObject(void* ptr);
void QSqlDriverCreatorBase_DestroyQSqlDriverCreatorBase(void* ptr);
void QSqlDriverCreatorBase_DestroyQSqlDriverCreatorBaseDefault(void* ptr);
void* QSqlDriverPlugin_NewQSqlDriverPlugin(void* parent);
void* QSqlDriverPlugin_Create(void* ptr, struct QtSql_PackedString key);
void QSqlDriverPlugin_DestroyQSqlDriverPlugin(void* ptr);
void QSqlDriverPlugin_DestroyQSqlDriverPluginDefault(void* ptr);
void* QSqlDriverPlugin___children_atList(void* ptr, int i);
void QSqlDriverPlugin___children_setList(void* ptr, void* i);
void* QSqlDriverPlugin___children_newList(void* ptr);
void* QSqlDriverPlugin___dynamicPropertyNames_atList(void* ptr, int i);
void QSqlDriverPlugin___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSqlDriverPlugin___dynamicPropertyNames_newList(void* ptr);
void* QSqlDriverPlugin___findChildren_atList(void* ptr, int i);
void QSqlDriverPlugin___findChildren_setList(void* ptr, void* i);
void* QSqlDriverPlugin___findChildren_newList(void* ptr);
void* QSqlDriverPlugin___findChildren_atList3(void* ptr, int i);
void QSqlDriverPlugin___findChildren_setList3(void* ptr, void* i);
void* QSqlDriverPlugin___findChildren_newList3(void* ptr);
void* QSqlDriverPlugin___qFindChildren_atList2(void* ptr, int i);
void QSqlDriverPlugin___qFindChildren_setList2(void* ptr, void* i);
void* QSqlDriverPlugin___qFindChildren_newList2(void* ptr);
void QSqlDriverPlugin_ChildEventDefault(void* ptr, void* event);
void QSqlDriverPlugin_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlDriverPlugin_CustomEventDefault(void* ptr, void* event);
void QSqlDriverPlugin_DeleteLaterDefault(void* ptr);
void QSqlDriverPlugin_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlDriverPlugin_EventDefault(void* ptr, void* e);
char QSqlDriverPlugin_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlDriverPlugin_MetaObjectDefault(void* ptr);
void QSqlDriverPlugin_TimerEventDefault(void* ptr, void* event);
void* QSqlError_NewQSqlError2(struct QtSql_PackedString driverText, struct QtSql_PackedString databaseText, long long ty, struct QtSql_PackedString code);
void* QSqlError_NewQSqlError3(void* other);
void* QSqlError_NewQSqlError4(void* other);
struct QtSql_PackedString QSqlError_DatabaseText(void* ptr);
struct QtSql_PackedString QSqlError_DriverText(void* ptr);
char QSqlError_IsValid(void* ptr);
struct QtSql_PackedString QSqlError_NativeErrorCode(void* ptr);
void QSqlError_Swap(void* ptr, void* other);
struct QtSql_PackedString QSqlError_Text(void* ptr);
long long QSqlError_Type(void* ptr);
void QSqlError_DestroyQSqlError(void* ptr);
void* QSqlField_NewQSqlField(struct QtSql_PackedString fieldName, long long ty);
void* QSqlField_NewQSqlField2(struct QtSql_PackedString fieldName, long long ty, struct QtSql_PackedString table);
void* QSqlField_NewQSqlField3(void* other);
void QSqlField_Clear(void* ptr);
void* QSqlField_DefaultValue(void* ptr);
char QSqlField_IsAutoValue(void* ptr);
char QSqlField_IsGenerated(void* ptr);
char QSqlField_IsNull(void* ptr);
char QSqlField_IsReadOnly(void* ptr);
char QSqlField_IsValid(void* ptr);
int QSqlField_Length(void* ptr);
struct QtSql_PackedString QSqlField_Name(void* ptr);
int QSqlField_Precision(void* ptr);
long long QSqlField_RequiredStatus(void* ptr);
void QSqlField_SetAutoValue(void* ptr, char autoVal);
void QSqlField_SetDefaultValue(void* ptr, void* value);
void QSqlField_SetGenerated(void* ptr, char gen);
void QSqlField_SetLength(void* ptr, int fieldLength);
void QSqlField_SetName(void* ptr, struct QtSql_PackedString name);
void QSqlField_SetPrecision(void* ptr, int precision);
void QSqlField_SetReadOnly(void* ptr, char readOnly);
void QSqlField_SetRequired(void* ptr, char required);
void QSqlField_SetRequiredStatus(void* ptr, long long required);
void QSqlField_SetTableName(void* ptr, struct QtSql_PackedString table);
void QSqlField_SetType(void* ptr, long long ty);
void QSqlField_SetValue(void* ptr, void* value);
struct QtSql_PackedString QSqlField_TableName(void* ptr);
long long QSqlField_Type(void* ptr);
void* QSqlField_Value(void* ptr);
void QSqlField_DestroyQSqlField(void* ptr);
void* QSqlIndex_NewQSqlIndex(struct QtSql_PackedString cursorname, struct QtSql_PackedString name);
void* QSqlIndex_NewQSqlIndex2(void* other);
void QSqlIndex_Append2(void* ptr, void* field, char desc);
struct QtSql_PackedString QSqlIndex_CursorName(void* ptr);
char QSqlIndex_IsDescending(void* ptr, int i);
struct QtSql_PackedString QSqlIndex_Name(void* ptr);
void QSqlIndex_SetCursorName(void* ptr, struct QtSql_PackedString cursorName);
void QSqlIndex_SetDescending(void* ptr, int i, char desc);
void QSqlIndex_SetName(void* ptr, struct QtSql_PackedString name);
void QSqlIndex_DestroyQSqlIndex(void* ptr);
char QSqlIndex___sorts_atList(void* ptr, int i);
void QSqlIndex___sorts_setList(void* ptr, char i);
void* QSqlIndex___sorts_newList(void* ptr);
char QSqlIndex___setSorts__atList(void* ptr, int i);
void QSqlIndex___setSorts__setList(void* ptr, char i);
void* QSqlIndex___setSorts__newList(void* ptr);
void* QSqlQuery_NewQSqlQuery(void* result);
void* QSqlQuery_NewQSqlQuery2(struct QtSql_PackedString query, void* db);
void* QSqlQuery_NewQSqlQuery3(void* db);
void* QSqlQuery_NewQSqlQuery4(void* other);
void QSqlQuery_AddBindValue(void* ptr, void* val, long long paramType);
int QSqlQuery_At(void* ptr);
void QSqlQuery_BindValue(void* ptr, struct QtSql_PackedString placeholder, void* val, long long paramType);
void QSqlQuery_BindValue2(void* ptr, int pos, void* val, long long paramType);
void* QSqlQuery_BoundValue(void* ptr, struct QtSql_PackedString placeholder);
void* QSqlQuery_BoundValue2(void* ptr, int pos);
struct QtSql_PackedList QSqlQuery_BoundValues(void* ptr);
void QSqlQuery_Clear(void* ptr);
void* QSqlQuery_Driver(void* ptr);
char QSqlQuery_Exec(void* ptr, struct QtSql_PackedString query);
char QSqlQuery_Exec2(void* ptr);
char QSqlQuery_ExecBatch(void* ptr, long long mode);
struct QtSql_PackedString QSqlQuery_ExecutedQuery(void* ptr);
void QSqlQuery_Finish(void* ptr);
char QSqlQuery_First(void* ptr);
char QSqlQuery_IsActive(void* ptr);
char QSqlQuery_IsForwardOnly(void* ptr);
char QSqlQuery_IsNull(void* ptr, int field);
char QSqlQuery_IsNull2(void* ptr, struct QtSql_PackedString name);
char QSqlQuery_IsSelect(void* ptr);
char QSqlQuery_IsValid(void* ptr);
char QSqlQuery_Last(void* ptr);
void* QSqlQuery_LastError(void* ptr);
void* QSqlQuery_LastInsertId(void* ptr);
struct QtSql_PackedString QSqlQuery_LastQuery(void* ptr);
char QSqlQuery_Next(void* ptr);
char QSqlQuery_NextResult(void* ptr);
int QSqlQuery_NumRowsAffected(void* ptr);
long long QSqlQuery_NumericalPrecisionPolicy(void* ptr);
char QSqlQuery_Prepare(void* ptr, struct QtSql_PackedString query);
char QSqlQuery_Previous(void* ptr);
void* QSqlQuery_Record(void* ptr);
void* QSqlQuery_Result(void* ptr);
char QSqlQuery_Seek(void* ptr, int index, char relative);
void QSqlQuery_SetForwardOnly(void* ptr, char forward);
void QSqlQuery_SetNumericalPrecisionPolicy(void* ptr, long long precisionPolicy);
int QSqlQuery_Size(void* ptr);
void* QSqlQuery_Value(void* ptr, int index);
void* QSqlQuery_Value2(void* ptr, struct QtSql_PackedString name);
void QSqlQuery_DestroyQSqlQuery(void* ptr);
void* QSqlQuery___boundValues_atList(void* ptr, struct QtSql_PackedString v, int i);
void QSqlQuery___boundValues_setList(void* ptr, struct QtSql_PackedString key, void* i);
void* QSqlQuery___boundValues_newList(void* ptr);
struct QtSql_PackedList QSqlQuery___boundValues_keyList(void* ptr);
struct QtSql_PackedString QSqlQuery_____boundValues_keyList_atList(void* ptr, int i);
void QSqlQuery_____boundValues_keyList_setList(void* ptr, struct QtSql_PackedString i);
void* QSqlQuery_____boundValues_keyList_newList(void* ptr);
void* QSqlQueryModel_NewQSqlQueryModel(void* parent);
char QSqlQueryModel_CanFetchMoreDefault(void* ptr, void* parent);
void QSqlQueryModel_Clear(void* ptr);
void QSqlQueryModel_ClearDefault(void* ptr);
int QSqlQueryModel_ColumnCount(void* ptr, void* index);
int QSqlQueryModel_ColumnCountDefault(void* ptr, void* index);
void* QSqlQueryModel_Data(void* ptr, void* item, int role);
void* QSqlQueryModel_DataDefault(void* ptr, void* item, int role);
void QSqlQueryModel_FetchMoreDefault(void* ptr, void* parent);
void* QSqlQueryModel_HeaderDataDefault(void* ptr, int section, long long orientation, int role);
void* QSqlQueryModel_IndexInQuery(void* ptr, void* item);
void* QSqlQueryModel_IndexInQueryDefault(void* ptr, void* item);
char QSqlQueryModel_InsertColumnsDefault(void* ptr, int column, int count, void* parent);
void* QSqlQueryModel_LastError(void* ptr);
void* QSqlQueryModel_Query(void* ptr);
void QSqlQueryModel_QueryChange(void* ptr);
void QSqlQueryModel_QueryChangeDefault(void* ptr);
void* QSqlQueryModel_Record(void* ptr, int row);
void* QSqlQueryModel_Record2(void* ptr);
char QSqlQueryModel_RemoveColumnsDefault(void* ptr, int column, int count, void* parent);
struct QtSql_PackedList QSqlQueryModel_RoleNamesDefault(void* ptr);
int QSqlQueryModel_RowCount(void* ptr, void* parent);
int QSqlQueryModel_RowCountDefault(void* ptr, void* parent);
char QSqlQueryModel_SetHeaderDataDefault(void* ptr, int section, long long orientation, void* value, int role);
void QSqlQueryModel_SetLastError(void* ptr, void* error);
void QSqlQueryModel_SetQuery(void* ptr, void* query);
void QSqlQueryModel_SetQuery2(void* ptr, struct QtSql_PackedString query, void* db);
void QSqlQueryModel_DestroyQSqlQueryModel(void* ptr);
void QSqlQueryModel_DestroyQSqlQueryModelDefault(void* ptr);
void* QSqlQueryModel___roleNames_atList(void* ptr, int v, int i);
void QSqlQueryModel___roleNames_setList(void* ptr, int key, void* i);
void* QSqlQueryModel___roleNames_newList(void* ptr);
struct QtSql_PackedList QSqlQueryModel___roleNames_keyList(void* ptr);
int QSqlQueryModel_____roleNames_keyList_atList(void* ptr, int i);
void QSqlQueryModel_____roleNames_keyList_setList(void* ptr, int i);
void* QSqlQueryModel_____roleNames_keyList_newList(void* ptr);
int QSqlQueryModel_____itemData_keyList_atList(void* ptr, int i);
void QSqlQueryModel_____itemData_keyList_setList(void* ptr, int i);
void* QSqlQueryModel_____itemData_keyList_newList(void* ptr);
int QSqlQueryModel_____setItemData_roles_keyList_atList(void* ptr, int i);
void QSqlQueryModel_____setItemData_roles_keyList_setList(void* ptr, int i);
void* QSqlQueryModel_____setItemData_roles_keyList_newList(void* ptr);
void* QSqlQueryModel___changePersistentIndexList_from_atList(void* ptr, int i);
void QSqlQueryModel___changePersistentIndexList_from_setList(void* ptr, void* i);
void* QSqlQueryModel___changePersistentIndexList_from_newList(void* ptr);
void* QSqlQueryModel___changePersistentIndexList_to_atList(void* ptr, int i);
void QSqlQueryModel___changePersistentIndexList_to_setList(void* ptr, void* i);
void* QSqlQueryModel___changePersistentIndexList_to_newList(void* ptr);
int QSqlQueryModel___dataChanged_roles_atList(void* ptr, int i);
void QSqlQueryModel___dataChanged_roles_setList(void* ptr, int i);
void* QSqlQueryModel___dataChanged_roles_newList(void* ptr);
void* QSqlQueryModel___itemData_atList(void* ptr, int v, int i);
void QSqlQueryModel___itemData_setList(void* ptr, int key, void* i);
void* QSqlQueryModel___itemData_newList(void* ptr);
struct QtSql_PackedList QSqlQueryModel___itemData_keyList(void* ptr);
void* QSqlQueryModel___layoutAboutToBeChanged_parents_atList(void* ptr, int i);
void QSqlQueryModel___layoutAboutToBeChanged_parents_setList(void* ptr, void* i);
void* QSqlQueryModel___layoutAboutToBeChanged_parents_newList(void* ptr);
void* QSqlQueryModel___layoutChanged_parents_atList(void* ptr, int i);
void QSqlQueryModel___layoutChanged_parents_setList(void* ptr, void* i);
void* QSqlQueryModel___layoutChanged_parents_newList(void* ptr);
void* QSqlQueryModel___match_atList(void* ptr, int i);
void QSqlQueryModel___match_setList(void* ptr, void* i);
void* QSqlQueryModel___match_newList(void* ptr);
void* QSqlQueryModel___mimeData_indexes_atList(void* ptr, int i);
void QSqlQueryModel___mimeData_indexes_setList(void* ptr, void* i);
void* QSqlQueryModel___mimeData_indexes_newList(void* ptr);
void* QSqlQueryModel___persistentIndexList_atList(void* ptr, int i);
void QSqlQueryModel___persistentIndexList_setList(void* ptr, void* i);
void* QSqlQueryModel___persistentIndexList_newList(void* ptr);
void* QSqlQueryModel___setItemData_roles_atList(void* ptr, int v, int i);
void QSqlQueryModel___setItemData_roles_setList(void* ptr, int key, void* i);
void* QSqlQueryModel___setItemData_roles_newList(void* ptr);
struct QtSql_PackedList QSqlQueryModel___setItemData_roles_keyList(void* ptr);
int QSqlQueryModel_____doSetRoleNames_roleNames_keyList_atList(void* ptr, int i);
void QSqlQueryModel_____doSetRoleNames_roleNames_keyList_setList(void* ptr, int i);
void* QSqlQueryModel_____doSetRoleNames_roleNames_keyList_newList(void* ptr);
int QSqlQueryModel_____setRoleNames_roleNames_keyList_atList(void* ptr, int i);
void QSqlQueryModel_____setRoleNames_roleNames_keyList_setList(void* ptr, int i);
void* QSqlQueryModel_____setRoleNames_roleNames_keyList_newList(void* ptr);
void* QSqlQueryModel___children_atList(void* ptr, int i);
void QSqlQueryModel___children_setList(void* ptr, void* i);
void* QSqlQueryModel___children_newList(void* ptr);
void* QSqlQueryModel___dynamicPropertyNames_atList(void* ptr, int i);
void QSqlQueryModel___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSqlQueryModel___dynamicPropertyNames_newList(void* ptr);
void* QSqlQueryModel___findChildren_atList(void* ptr, int i);
void QSqlQueryModel___findChildren_setList(void* ptr, void* i);
void* QSqlQueryModel___findChildren_newList(void* ptr);
void* QSqlQueryModel___findChildren_atList3(void* ptr, int i);
void QSqlQueryModel___findChildren_setList3(void* ptr, void* i);
void* QSqlQueryModel___findChildren_newList3(void* ptr);
void* QSqlQueryModel___qFindChildren_atList2(void* ptr, int i);
void QSqlQueryModel___qFindChildren_setList2(void* ptr, void* i);
void* QSqlQueryModel___qFindChildren_newList2(void* ptr);
char QSqlQueryModel_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
long long QSqlQueryModel_FlagsDefault(void* ptr, void* index);
void* QSqlQueryModel_IndexDefault(void* ptr, int row, int column, void* parent);
void* QSqlQueryModel_SiblingDefault(void* ptr, int row, int column, void* idx);
void* QSqlQueryModel_BuddyDefault(void* ptr, void* index);
char QSqlQueryModel_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlQueryModel_HasChildrenDefault(void* ptr, void* parent);
char QSqlQueryModel_InsertRowsDefault(void* ptr, int row, int count, void* parent);
struct QtSql_PackedList QSqlQueryModel_ItemDataDefault(void* ptr, void* index);
struct QtSql_PackedList QSqlQueryModel_MatchDefault(void* ptr, void* start, int role, void* value, int hits, long long flags);
void* QSqlQueryModel_MimeDataDefault(void* ptr, void* indexes);
struct QtSql_PackedString QSqlQueryModel_MimeTypesDefault(void* ptr);
char QSqlQueryModel_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char QSqlQueryModel_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void* QSqlQueryModel_ParentDefault(void* ptr, void* index);
char QSqlQueryModel_RemoveRowsDefault(void* ptr, int row, int count, void* parent);
void QSqlQueryModel_ResetInternalDataDefault(void* ptr);
void QSqlQueryModel_RevertDefault(void* ptr);
char QSqlQueryModel_SetDataDefault(void* ptr, void* index, void* value, int role);
char QSqlQueryModel_SetItemDataDefault(void* ptr, void* index, void* roles);
void QSqlQueryModel_SortDefault(void* ptr, int column, long long order);
void* QSqlQueryModel_SpanDefault(void* ptr, void* index);
char QSqlQueryModel_SubmitDefault(void* ptr);
long long QSqlQueryModel_SupportedDragActionsDefault(void* ptr);
long long QSqlQueryModel_SupportedDropActionsDefault(void* ptr);
void QSqlQueryModel_ChildEventDefault(void* ptr, void* event);
void QSqlQueryModel_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlQueryModel_CustomEventDefault(void* ptr, void* event);
void QSqlQueryModel_DeleteLaterDefault(void* ptr);
void QSqlQueryModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlQueryModel_EventDefault(void* ptr, void* e);
char QSqlQueryModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlQueryModel_MetaObjectDefault(void* ptr);
void QSqlQueryModel_TimerEventDefault(void* ptr, void* event);
void* QSqlRecord_NewQSqlRecord();
void* QSqlRecord_NewQSqlRecord2(void* other);
void QSqlRecord_Append(void* ptr, void* field);
void QSqlRecord_Clear(void* ptr);
void QSqlRecord_ClearValues(void* ptr);
char QSqlRecord_Contains(void* ptr, struct QtSql_PackedString name);
int QSqlRecord_Count(void* ptr);
void* QSqlRecord_Field(void* ptr, int index);
void* QSqlRecord_Field2(void* ptr, struct QtSql_PackedString name);
struct QtSql_PackedString QSqlRecord_FieldName(void* ptr, int index);
int QSqlRecord_IndexOf(void* ptr, struct QtSql_PackedString name);
void QSqlRecord_Insert(void* ptr, int pos, void* field);
char QSqlRecord_IsEmpty(void* ptr);
char QSqlRecord_IsGenerated(void* ptr, struct QtSql_PackedString name);
char QSqlRecord_IsGenerated2(void* ptr, int index);
char QSqlRecord_IsNull(void* ptr, struct QtSql_PackedString name);
char QSqlRecord_IsNull2(void* ptr, int index);
void* QSqlRecord_KeyValues(void* ptr, void* keyFields);
void QSqlRecord_Remove(void* ptr, int pos);
void QSqlRecord_Replace(void* ptr, int pos, void* field);
void QSqlRecord_SetGenerated(void* ptr, struct QtSql_PackedString name, char generated);
void QSqlRecord_SetGenerated2(void* ptr, int index, char generated);
void QSqlRecord_SetNull(void* ptr, int index);
void QSqlRecord_SetNull2(void* ptr, struct QtSql_PackedString name);
void QSqlRecord_SetValue(void* ptr, int index, void* val);
void QSqlRecord_SetValue2(void* ptr, struct QtSql_PackedString name, void* val);
void* QSqlRecord_Value(void* ptr, int index);
void* QSqlRecord_Value2(void* ptr, struct QtSql_PackedString name);
void QSqlRecord_DestroyQSqlRecord(void* ptr);
void* QSqlRelation_NewQSqlRelation();
void* QSqlRelation_NewQSqlRelation2(struct QtSql_PackedString tableName, struct QtSql_PackedString indexColumn, struct QtSql_PackedString displayColumn);
struct QtSql_PackedString QSqlRelation_DisplayColumn(void* ptr);
struct QtSql_PackedString QSqlRelation_IndexColumn(void* ptr);
char QSqlRelation_IsValid(void* ptr);
void QSqlRelation_Swap(void* ptr, void* other);
struct QtSql_PackedString QSqlRelation_TableName(void* ptr);
void* QSqlRelationalDelegate_NewQSqlRelationalDelegate(void* parent);
void* QSqlRelationalDelegate_CreateEditorDefault(void* ptr, void* parent, void* option, void* index);
void QSqlRelationalDelegate_SetModelDataDefault(void* ptr, void* editor, void* model, void* index);
void QSqlRelationalDelegate_DestroyQSqlRelationalDelegate(void* ptr);
void QSqlRelationalDelegate_DestroyQSqlRelationalDelegateDefault(void* ptr);
void* QSqlRelationalDelegate___children_atList(void* ptr, int i);
void QSqlRelationalDelegate___children_setList(void* ptr, void* i);
void* QSqlRelationalDelegate___children_newList(void* ptr);
void* QSqlRelationalDelegate___dynamicPropertyNames_atList(void* ptr, int i);
void QSqlRelationalDelegate___dynamicPropertyNames_setList(void* ptr, void* i);
void* QSqlRelationalDelegate___dynamicPropertyNames_newList(void* ptr);
void* QSqlRelationalDelegate___findChildren_atList(void* ptr, int i);
void QSqlRelationalDelegate___findChildren_setList(void* ptr, void* i);
void* QSqlRelationalDelegate___findChildren_newList(void* ptr);
void* QSqlRelationalDelegate___findChildren_atList3(void* ptr, int i);
void QSqlRelationalDelegate___findChildren_setList3(void* ptr, void* i);
void* QSqlRelationalDelegate___findChildren_newList3(void* ptr);
void* QSqlRelationalDelegate___qFindChildren_atList2(void* ptr, int i);
void QSqlRelationalDelegate___qFindChildren_setList2(void* ptr, void* i);
void* QSqlRelationalDelegate___qFindChildren_newList2(void* ptr);
void QSqlRelationalDelegate_DrawCheckDefault(void* ptr, void* painter, void* option, void* rect, long long state);
void QSqlRelationalDelegate_DrawDecorationDefault(void* ptr, void* painter, void* option, void* rect, void* pixmap);
void QSqlRelationalDelegate_DrawDisplayDefault(void* ptr, void* painter, void* option, void* rect, struct QtSql_PackedString text);
void QSqlRelationalDelegate_DrawFocusDefault(void* ptr, void* painter, void* option, void* rect);
char QSqlRelationalDelegate_EditorEventDefault(void* ptr, void* event, void* model, void* option, void* index);
char QSqlRelationalDelegate_EventFilterDefault(void* ptr, void* editor, void* event);
void QSqlRelationalDelegate_PaintDefault(void* ptr, void* painter, void* option, void* index);
void QSqlRelationalDelegate_SetEditorDataDefault(void* ptr, void* editor, void* index);
void* QSqlRelationalDelegate_SizeHintDefault(void* ptr, void* option, void* index);
void QSqlRelationalDelegate_UpdateEditorGeometryDefault(void* ptr, void* editor, void* option, void* index);
void QSqlRelationalDelegate_DestroyEditorDefault(void* ptr, void* editor, void* index);
char QSqlRelationalDelegate_HelpEventDefault(void* ptr, void* event, void* view, void* option, void* index);
void QSqlRelationalDelegate_ChildEventDefault(void* ptr, void* event);
void QSqlRelationalDelegate_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlRelationalDelegate_CustomEventDefault(void* ptr, void* event);
void QSqlRelationalDelegate_DeleteLaterDefault(void* ptr);
void QSqlRelationalDelegate_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlRelationalDelegate_EventDefault(void* ptr, void* e);
void* QSqlRelationalDelegate_MetaObjectDefault(void* ptr);
void QSqlRelationalDelegate_TimerEventDefault(void* ptr, void* event);
void* QSqlRelationalTableModel_NewQSqlRelationalTableModel(void* parent, void* db);
void* QSqlRelationalTableModel_Relation(void* ptr, int column);
void* QSqlRelationalTableModel_RelationModel(void* ptr, int column);
void* QSqlRelationalTableModel_RelationModelDefault(void* ptr, int column);
void QSqlRelationalTableModel_RevertRow(void* ptr, int row);
void QSqlRelationalTableModel_RevertRowDefault(void* ptr, int row);
char QSqlRelationalTableModel_Select(void* ptr);
char QSqlRelationalTableModel_SelectDefault(void* ptr);
void QSqlRelationalTableModel_SetJoinMode(void* ptr, long long joinMode);
void QSqlRelationalTableModel_SetRelation(void* ptr, int column, void* relation);
void QSqlRelationalTableModel_SetRelationDefault(void* ptr, int column, void* relation);
void QSqlRelationalTableModel_DestroyQSqlRelationalTableModel(void* ptr);
void QSqlRelationalTableModel_DestroyQSqlRelationalTableModelDefault(void* ptr);
void* QSqlResult_NewQSqlResult(void* db);
void QSqlResult_AddBindValue(void* ptr, void* val, long long paramType);
int QSqlResult_At(void* ptr);
void QSqlResult_BindValue(void* ptr, int index, void* val, long long paramType);
void QSqlResult_BindValueDefault(void* ptr, int index, void* val, long long paramType);
void QSqlResult_BindValue2(void* ptr, struct QtSql_PackedString placeholder, void* val, long long paramType);
void QSqlResult_BindValue2Default(void* ptr, struct QtSql_PackedString placeholder, void* val, long long paramType);
long long QSqlResult_BindValueType(void* ptr, int index);
long long QSqlResult_BindValueType2(void* ptr, struct QtSql_PackedString placeholder);
long long QSqlResult_BindingSyntax(void* ptr);
void* QSqlResult_BoundValue(void* ptr, int index);
void* QSqlResult_BoundValue2(void* ptr, struct QtSql_PackedString placeholder);
int QSqlResult_BoundValueCount(void* ptr);
struct QtSql_PackedString QSqlResult_BoundValueName(void* ptr, int index);
struct QtSql_PackedList QSqlResult_BoundValues(void* ptr);
void QSqlResult_Clear(void* ptr);
void* QSqlResult_Data(void* ptr, int index);
void* QSqlResult_Driver(void* ptr);
char QSqlResult_Exec(void* ptr);
char QSqlResult_ExecDefault(void* ptr);
struct QtSql_PackedString QSqlResult_ExecutedQuery(void* ptr);
char QSqlResult_Fetch(void* ptr, int index);
char QSqlResult_FetchFirst(void* ptr);
char QSqlResult_FetchLast(void* ptr);
char QSqlResult_FetchNext(void* ptr);
char QSqlResult_FetchNextDefault(void* ptr);
char QSqlResult_FetchPrevious(void* ptr);
char QSqlResult_FetchPreviousDefault(void* ptr);
void* QSqlResult_Handle(void* ptr);
void* QSqlResult_HandleDefault(void* ptr);
char QSqlResult_HasOutValues(void* ptr);
char QSqlResult_IsActive(void* ptr);
char QSqlResult_IsForwardOnly(void* ptr);
char QSqlResult_IsNull(void* ptr, int index);
char QSqlResult_IsSelect(void* ptr);
char QSqlResult_IsValid(void* ptr);
void* QSqlResult_LastError(void* ptr);
void* QSqlResult_LastInsertId(void* ptr);
void* QSqlResult_LastInsertIdDefault(void* ptr);
struct QtSql_PackedString QSqlResult_LastQuery(void* ptr);
int QSqlResult_NumRowsAffected(void* ptr);
char QSqlResult_Prepare(void* ptr, struct QtSql_PackedString query);
char QSqlResult_PrepareDefault(void* ptr, struct QtSql_PackedString query);
void* QSqlResult_Record(void* ptr);
void* QSqlResult_RecordDefault(void* ptr);
char QSqlResult_Reset(void* ptr, struct QtSql_PackedString query);
void QSqlResult_ResetBindCount(void* ptr);
char QSqlResult_SavePrepare(void* ptr, struct QtSql_PackedString query);
char QSqlResult_SavePrepareDefault(void* ptr, struct QtSql_PackedString query);
void QSqlResult_SetActive(void* ptr, char active);
void QSqlResult_SetActiveDefault(void* ptr, char active);
void QSqlResult_SetAt(void* ptr, int index);
void QSqlResult_SetAtDefault(void* ptr, int index);
void QSqlResult_SetForwardOnly(void* ptr, char forward);
void QSqlResult_SetForwardOnlyDefault(void* ptr, char forward);
void QSqlResult_SetLastError(void* ptr, void* error);
void QSqlResult_SetLastErrorDefault(void* ptr, void* error);
void QSqlResult_SetQuery(void* ptr, struct QtSql_PackedString query);
void QSqlResult_SetQueryDefault(void* ptr, struct QtSql_PackedString query);
void QSqlResult_SetSelect(void* ptr, char sele);
void QSqlResult_SetSelectDefault(void* ptr, char sele);
int QSqlResult_Size(void* ptr);
void QSqlResult_DestroyQSqlResult(void* ptr);
void QSqlResult_DestroyQSqlResultDefault(void* ptr);
void* QSqlResult___boundValues_atList(void* ptr, int i);
void QSqlResult___boundValues_setList(void* ptr, void* i);
void* QSqlResult___boundValues_newList(void* ptr);
void* QSqlTableModel_NewQSqlTableModel(void* parent, void* db);
void QSqlTableModel_ConnectBeforeDelete(void* ptr, long long t);
void QSqlTableModel_DisconnectBeforeDelete(void* ptr);
void QSqlTableModel_BeforeDelete(void* ptr, int row);
void QSqlTableModel_ConnectBeforeInsert(void* ptr, long long t);
void QSqlTableModel_DisconnectBeforeInsert(void* ptr);
void QSqlTableModel_BeforeInsert(void* ptr, void* record);
void QSqlTableModel_ConnectBeforeUpdate(void* ptr, long long t);
void QSqlTableModel_DisconnectBeforeUpdate(void* ptr);
void QSqlTableModel_BeforeUpdate(void* ptr, int row, void* record);
void* QSqlTableModel_Database(void* ptr);
char QSqlTableModel_DeleteRowFromTable(void* ptr, int row);
char QSqlTableModel_DeleteRowFromTableDefault(void* ptr, int row);
long long QSqlTableModel_EditStrategy(void* ptr);
int QSqlTableModel_FieldIndex(void* ptr, struct QtSql_PackedString fieldName);
struct QtSql_PackedString QSqlTableModel_Filter(void* ptr);
char QSqlTableModel_InsertRecord(void* ptr, int row, void* record);
char QSqlTableModel_InsertRowIntoTable(void* ptr, void* values);
char QSqlTableModel_InsertRowIntoTableDefault(void* ptr, void* values);
char QSqlTableModel_IsDirty(void* ptr, void* index);
char QSqlTableModel_IsDirty2(void* ptr);
struct QtSql_PackedString QSqlTableModel_OrderByClause(void* ptr);
struct QtSql_PackedString QSqlTableModel_OrderByClauseDefault(void* ptr);
void* QSqlTableModel_PrimaryKey(void* ptr);
void* QSqlTableModel_PrimaryValues(void* ptr, int row);
void QSqlTableModel_ConnectPrimeInsert(void* ptr, long long t);
void QSqlTableModel_DisconnectPrimeInsert(void* ptr);
void QSqlTableModel_PrimeInsert(void* ptr, int row, void* record);
void QSqlTableModel_RevertAll(void* ptr);
void QSqlTableModel_RevertAllDefault(void* ptr);
void QSqlTableModel_RevertRow(void* ptr, int row);
void QSqlTableModel_RevertRowDefault(void* ptr, int row);
char QSqlTableModel_Select(void* ptr);
char QSqlTableModel_SelectDefault(void* ptr);
char QSqlTableModel_SelectRow(void* ptr, int row);
char QSqlTableModel_SelectRowDefault(void* ptr, int row);
struct QtSql_PackedString QSqlTableModel_SelectStatement(void* ptr);
struct QtSql_PackedString QSqlTableModel_SelectStatementDefault(void* ptr);
void QSqlTableModel_SetEditStrategy(void* ptr, long long strategy);
void QSqlTableModel_SetEditStrategyDefault(void* ptr, long long strategy);
void QSqlTableModel_SetFilter(void* ptr, struct QtSql_PackedString filter);
void QSqlTableModel_SetFilterDefault(void* ptr, struct QtSql_PackedString filter);
void QSqlTableModel_SetPrimaryKey(void* ptr, void* key);
char QSqlTableModel_SetRecord(void* ptr, int row, void* values);
void QSqlTableModel_SetSort(void* ptr, int column, long long order);
void QSqlTableModel_SetSortDefault(void* ptr, int column, long long order);
void QSqlTableModel_SetTable(void* ptr, struct QtSql_PackedString tableName);
void QSqlTableModel_SetTableDefault(void* ptr, struct QtSql_PackedString tableName);
char QSqlTableModel_SubmitAll(void* ptr);
char QSqlTableModel_SubmitAllDefault(void* ptr);
struct QtSql_PackedString QSqlTableModel_TableName(void* ptr);
char QSqlTableModel_UpdateRowInTable(void* ptr, int row, void* values);
char QSqlTableModel_UpdateRowInTableDefault(void* ptr, int row, void* values);
void QSqlTableModel_DestroyQSqlTableModel(void* ptr);
void QSqlTableModel_DestroyQSqlTableModelDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif