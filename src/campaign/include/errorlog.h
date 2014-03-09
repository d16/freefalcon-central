// ======================
// Error Reporting System
// ======================

// -----------------
// User Descriptions
// -----------------

/*���������������������������������������������������������������������ͻ
  � void InitSystemErrors (char* LogFileName, Boolean ImmediateReports) �
  ���������������������������������������������������������������������Ķ
  � Initializes the Error Reporting System. Errors can be directed to   �
  � either a file or the screen by specifying either the file name or   �
  � the defined value "LogErrorsToScreen" as the "LogFileName" parameter�
  � (repectively). The "ImmediateReports" parameter determines whether  �
  � Errors are immediately reported to file/screen upon receipt (i.e.   �
  � ImmediateReports = TRUE) or whether they are queued until a call to �
  � "ProcessSystemErrors" is made (i.e. ImmediateReports = FALSE). The  �
  � mnemonics "ImmediateErrors" (equal to TRUE) and "QueueErrors"       �
  � (equal to FALSE) are provided for code readability.                 �
  �                                                                     �
  � Example calls:                                                      �
  �           InitSystemErrors(LogErrorsToScreen,QueueErrors)           �
  �           InitSystemErrors("ErrorLog.Dmp",ImmediateErrors)          �
  ���������������������������������������������������������������������Ķ
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  ���������������������������������������������������������������������ͼ*/

/*���������������������������������������������������������������������ͻ
  � void ReportSystemError (SystemErrorCode C, char* ErrorText)         �
  ���������������������������������������������������������������������Ķ
  � Allows an Error Code to be reported, along with a text information  �
  � string. The SystemErrorCode type is enumerated and redefinable on a �
  � project by project basis. However, many of the more generically     �
  � defined codes are required by existing library routines.            �
  ���������������������������������������������������������������������Ķ
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  ���������������������������������������������������������������������ͼ*/

/*���������������������������������������������������������������������ͻ
  � void ProcessSystemErrors (void)                                     �
  ���������������������������������������������������������������������Ķ
  � If System Errors are being queued (see InitSystemErrors) then a     �
  � call to ProcessSystemErrors will cause all queued Error Reports to  �
  � be processed and sent to File/Screen. If System Errors are not      �
  � being queued (i.e. they are being reported immediately) then a call �
  � to this routine accomplishes nothing.                               �
  ���������������������������������������������������������������������Ķ
  � Author: Gary L. Stottlemyer      � Inquiries: Gary L. Stottlemyer   �
  � Project: Falcon 4.0              � Current Project: Falcon 4.0      �
  ���������������������������������������������������������������������ͼ*/

// ---------------------------------------
// Type and External Function Declarations
// ---------------------------------------

#define LogErrorsToScreen "ScreenErrors"
#define ImmediateErrors   TRUE
#define QueueErrors       FALSE

typedef enum {ErrorReportingError,
              ProgramInitFailure,
              SystemInitFailure,
              ModuleInitFailure,
              FileOpenFailure,
              ADTUseageError,
              SystemLevelFailure,
              SystemUseageError,
              ModuleLevelFailure,
              ModuleUseageError
             }
SystemErrorCode;

extern void InitSystemErrors(char* LogFileName, unsigned char ImmediateReports);

extern void ReportSystemError(SystemErrorCode C, char* ErrorText);

extern void ProcessSystemErrors(void);
