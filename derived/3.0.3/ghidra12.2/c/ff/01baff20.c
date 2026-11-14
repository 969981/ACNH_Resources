
void FUN_01baff20(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_144;
  undefined *local_140;
  undefined8 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined6 uStack_40;
  undefined1 auStack_3a [2];
  int local_38;
  
  local_12c = 0;
  local_128 = 0xffffffff;
  uStack_120 = 0xffffffff00000000;
  local_118 = 0xffffffff;
  local_130 = 0x13;
  puStack_108 = local_fc;
  local_100 = 0x40;
  puStack_138 = &local_60;
  local_bd = 0;
  local_fc[0] = 0;
  local_110 = PTR_DAT_04bb2bc0 + 0x10;
  local_a8 = 0x40;
  local_65 = 0;
  local_a4[0] = 0;
  puStack_b0 = local_a4;
  local_140 = PTR_DAT_04bc0bc0 + 0x10;
  uStack_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_42 = 0;
  local_60 = 0;
  uStack_58 = 0;
  puVar1 = auStack_3a;
  if (auStack_3a <= (undefined1 *)((long)&local_60 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_60 + 2U);
  }
  local_b8 = local_110;
  memset(puStack_138,0,(ulong)(puVar1 + (-0xe1 - (long)&local_140)) & 0xfffffffffffffffc | 2);
  local_38 = 0;
  if (param_2 < 0x3e9) {
    param_2 = 1000;
  }
  if (0x270e < param_2) {
    param_2 = 9999;
  }
  FUN_01be4af0(&local_140,**(undefined4 **)PTR_DAT_04bb3448,param_2,4,1,0);
  local_38 = param_2;
  if (((DAT_0533a3c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0533a3c0), iVar2 != 0)) {
    FUN_01bb25c8(&DAT_0533a3b0);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar3 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar3 * 4) == 0x5a) goto LAB_01bb0070;
      uVar3 = uVar3 + 1;
    } while (DAT_0533a3b0 != uVar3);
  }
  uVar3 = 0;
LAB_01bb0070:
  local_144 = (undefined4)uVar3;
  FUN_01bafc20(param_1,&local_140,param_3,&local_144,0x22);
  return;
}

