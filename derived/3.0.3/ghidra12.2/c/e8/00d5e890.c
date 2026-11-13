
void FUN_00d5e890(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_150;
  undefined8 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_18;
  undefined4 local_14;
  
  local_13c = 0;
  local_138 = 0xffffffff;
  uStack_130 = 0xffffffff00000000;
  local_128 = 0xffffffff;
  local_140 = 0x20;
  puStack_118 = local_10c;
  local_110 = 0x40;
  puStack_148 = &local_70;
  local_cd = 0;
  local_10c[0] = 0;
  local_120 = PTR_DAT_04bb2bc0 + 0x10;
  local_b8 = 0x40;
  local_75 = 0;
  local_b4[0] = 0;
  puStack_c0 = local_b4;
  local_150 = PTR_DAT_04bb4e10 + 0x10;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  puVar1 = local_b4 + 0x84;
  if (local_b4 + 0x84 <= (undefined1 *)((long)&local_70 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_70 + 2U);
  }
  local_c8 = local_120;
  memset(puStack_148,0,(size_t)(puVar1 + (-0xe0 - (long)&local_150)));
  FUN_01c15750(&local_150,&DAT_04169568);
  local_14 = 0x11;
  if (((DAT_0533a3c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0533a3c0), iVar2 != 0)) {
    FUN_01bb25c8(&DAT_0533a3b0);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar3 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar3 * 4) == 0x8c) goto LAB_00d5e9b0;
      uVar3 = uVar3 + 1;
    } while (DAT_0533a3b0 != uVar3);
  }
  uVar3 = 0;
LAB_00d5e9b0:
  local_18 = (undefined4)uVar3;
  FUN_01bae480(param_1,&local_150,param_2,&local_18,local_14);
  return;
}

