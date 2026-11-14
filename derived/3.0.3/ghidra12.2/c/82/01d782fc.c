
void FUN_01d782fc(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_150 [8];
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
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined1 auStack_52 [2];
  undefined1 local_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined2 local_46;
  
  local_134 = 0;
  local_130 = 0xffffffff;
  uStack_128 = 0xffffffff00000000;
  local_138 = 0xb;
  puStack_140 = &local_68;
  local_120 = 0xffffffff;
  puStack_110 = local_104;
  local_108 = 0x40;
  local_c5 = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_b0 = 0x40;
  local_6d = 0;
  local_ac[0] = 0;
  puStack_b8 = local_ac;
  uStack_58 = 0;
  local_148 = PTR_DAT_04bb5128 + 0x10;
  local_68 = 0;
  uStack_60 = 0;
  local_5a = 0;
  puVar1 = auStack_52;
  if (auStack_52 <= (undefined1 *)((long)&local_68 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_68 + 2U);
  }
  local_c0 = local_118;
  memset(puStack_140,0,(ulong)(puVar1 + (-0xe1 - (long)&local_148)) & 0xfffffffffffffffc | 2);
  local_50 = 0;
  uStack_4f = 0;
  uStack_4b = 0;
  local_46 = *(undefined2 *)PTR_DAT_04bb3170;
  iVar2 = FUN_01d778dc(param_1,auStack_150);
  if (iVar2 == 0) {
    *param_2 = local_50;
    *(undefined4 *)(param_2 + 5) = uStack_4b;
    *(undefined4 *)(param_2 + 1) = uStack_4f;
    *(undefined2 *)(param_2 + 10) = local_46;
  }
  return;
}

