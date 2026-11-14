
void FUN_01c0fd9c(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x17;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[6] = puVar2 + 0x10;
  param_1[7] = (undefined1 *)((long)param_1 + 0x44);
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  param_1[0x1c] = 0;
  *param_1 = &DAT_04a3fa18;
  param_1[1] = param_1 + 0x1c;
  uVar1 = (long)param_1 + 0x10eU;
  if ((long)param_1 + 0x10eU <= (long)param_1 + 0xe2U) {
    uVar1 = (long)param_1 + 0xe2U;
  }
  param_1[0x11] = puVar2 + 0x10;
  param_1[0x12] = (undefined1 *)((long)param_1 + 0x9c);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  memset(param_1 + 0x1c,0,((uVar1 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  uVar5 = *(undefined8 *)PTR_DAT_04bb4138;
  uVar3 = FUN_006bd550(param_2,0);
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar3);
  lVar4 = FUN_0079e770(uVar5,&local_40);
  if (lVar4 != 0) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "STR_NNpcPhrase";
    uStack_48 = param_2;
    local_40 = local_50;
    FUN_006f50a0(param_1,&local_40,&local_50,0);
  }
  return;
}

