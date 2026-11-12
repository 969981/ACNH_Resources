
void FUN_007a8da0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  char *__dest;
  
  FUN_00705c50();
  puVar1 = PTR_DAT_04bdf1d8;
  __dest = (char *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = puVar1 + 0x10;
  if (__dest != "XLink") {
    iVar3 = 5;
    if (*(int *)(param_1 + 0xd) < 6) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"XLink",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  param_1[0x5e] = 0;
  *param_1 = &PTR_LAB_04910ec0;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x65] = 0;
  param_1[0x5b] = &PTR_LAB_04911028;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x5f] = puVar1;
  puVar2 = PTR_DAT_04bb2120;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  param_1[0x62] = puVar1;
  param_1[0x60] = puVar2;
  puVar1 = PTR_DAT_04bb4270;
  param_1[99] = puVar2;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar3 != 0)) {
    FUN_007a9614(PTR_DAT_04bb4268);
    __cxa_guard_release(PTR_DAT_04bb4270);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb4268) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb4268 + 8) + uVar4 * 4) == 0) goto LAB_007a8ecc;
      uVar4 = uVar4 + 1;
    } while (*(uint *)PTR_DAT_04bb4268 != uVar4);
  }
  uVar4 = 0;
LAB_007a8ecc:
  *(int *)(param_1 + 0x65) = (int)uVar4;
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  return;
}

