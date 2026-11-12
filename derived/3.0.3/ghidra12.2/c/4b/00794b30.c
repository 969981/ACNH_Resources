
void FUN_00794b30(undefined8 *param_1)

{
  int iVar1;
  char *__dest;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = &PTR_FUN_04ba93e0;
  if (__dest != "XLink") {
    iVar1 = 5;
    if (*(int *)(param_1 + 0xd) < 6) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"XLink",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *param_1 = &PTR_LAB_0490e190;
  return;
}

