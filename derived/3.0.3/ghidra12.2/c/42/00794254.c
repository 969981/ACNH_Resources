
void FUN_00794254(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
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
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *param_1 = &PTR_LAB_0490dfd0;
  bVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x61) = 0x20;
  *(undefined1 *)((long)param_1 + 0x30c) = 0;
  param_1[0x60] = (undefined1 *)((long)param_1 + 0x30c);
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  *(undefined1 *)((long)param_1 + 0x32b) = 0;
  *(byte *)((long)param_1 + 0x2f4) = bVar2;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x5f] = &PTR_LAB_048f9700;
  return;
}

