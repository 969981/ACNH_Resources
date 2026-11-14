
void FUN_01bafd70(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_148;
  undefined8 *puStack_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  undefined1 auStack_42 [2];
  undefined4 local_40;
  undefined4 local_34;
  
  local_134 = 0;
  local_130 = 0xffffffff;
  uStack_128 = 0xffffffff00000000;
  local_120 = 0xffffffff;
  local_138 = 0x13;
  puStack_110 = local_104;
  local_108 = 0x40;
  puStack_140 = &local_68;
  local_c5 = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_b0 = 0x40;
  local_6d = 0;
  local_ac[0] = 0;
  puStack_b8 = local_ac;
  local_148 = PTR_DAT_04bc0bc0 + 0x10;
  local_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  puVar1 = auStack_42;
  if (auStack_42 <= (undefined1 *)((long)&local_68 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_68 + 2U);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_4a = 0;
  local_c0 = local_118;
  memset(puStack_140,0,(ulong)(puVar1 + (-0xe1 - (long)&local_148)) & 0xfffffffffffffffc | 2);
  local_40 = 0;
  uVar2 = 3;
  if (**(int **)PTR_DAT_04bb3448 != 8) {
    uVar2 = 0;
  }
  FUN_01be4af0(&local_148,**(int **)PTR_DAT_04bb3448,param_2,10,uVar2,0);
  local_40 = param_2;
  if (((DAT_0533a3c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0533a3c0), iVar3 != 0)) {
    FUN_01bb25c8(&DAT_0533a3b0);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar4 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar4 * 4) == 0x5a) goto LAB_01bafebc;
      uVar4 = uVar4 + 1;
    } while (DAT_0533a3b0 != uVar4);
  }
  uVar4 = 0;
LAB_01bafebc:
  local_34 = (undefined4)uVar4;
  FUN_01bafc20(param_1,&local_148,param_3,&local_34,9);
  return;
}

