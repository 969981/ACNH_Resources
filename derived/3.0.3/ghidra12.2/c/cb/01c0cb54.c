
void FUN_01c0cb54(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x80;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  param_1[0x11] = (long)(puVar1 + 0x10);
  param_1[0x12] = (long)param_1 + 0x9c;
  puVar1 = PTR_DAT_04bb6b38 + 0x10;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 0x1c);
  plVar2 = param_1 + 0x3c;
  if (param_1 + 0x3c <= (long *)((long)param_1 + 0xe2U)) {
    plVar2 = (long *)((long)param_1 + 0xe2U);
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  memset(param_1 + 0x1c,0,((long)plVar2 + (-0xe1 - (long)param_1) & 0xfffffffffffffffeU) + 2);
  lVar4 = *(long *)PTR_DAT_04bb4788;
  uVar3 = (uint)*(ushort *)(param_2 + 1) - (uint)*(ushort *)(lVar4 + 0x1f8);
  if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
    uStack_28 = (**(code **)(*param_2 + 0x10))(param_2);
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "STR_MailDesign";
    local_30 = local_40;
    FUN_006f50a0(param_1,&local_40,&local_30,0);
  }
  return;
}

