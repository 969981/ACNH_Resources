
void FUN_00467740(long *param_1)

{
  char cVar1;
  long *local_38;
  long lStack_30;
  ulong local_28;
  
  cVar1 = (char)param_1[1];
  if (cVar1 == '\0') goto LAB_004677e4;
  if (cVar1 == '\x02') {
    local_38 = (long *)param_1[2];
    lStack_30 = *param_1;
    local_28 = 0;
    if (lStack_30 != 0) goto LAB_00467790;
  }
  else if (cVar1 == '\x01') {
    local_38 = param_1 + 2;
    lStack_30 = *param_1;
    if (lStack_30 == 0) {
      local_28 = 0;
    }
    else {
LAB_00467790:
      local_28 = FUN_00428370();
    }
  }
  else {
    lStack_30 = *param_1;
    local_38 = (long *)0x0;
    if (lStack_30 != 0) goto LAB_00467790;
    local_28 = 0;
  }
  if ((local_28 & 1) != 0) {
    FUN_0043dd30(local_28 & 0xfffffffffffffffe);
  }
  FUN_00440b30(&local_38,1,1);
  if ((local_28 & 1) != 0) {
    FUN_0043dd50(local_28 & 0xfffffffffffffffe);
  }
  if (((char)param_1[1] == '\x02') && (param_1[3] != 0)) {
    FUN_0044e230(param_1[2],*param_1);
  }
LAB_004677e4:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

