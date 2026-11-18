
undefined8 FUN_03784ec0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  undefined **local_138;
  undefined8 *puStack_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_36;
  
  if (DAT_0538adc8 == 0) {
    return 0;
  }
  local_150 = **(undefined8 **)(DAT_0538adc8 + 0x2a8);
  uStack_148 = (*(undefined8 **)(DAT_0538adc8 + 0x2a8))[1];
  local_128 = 0xb;
  local_120 = 0xffffffff;
  uStack_118 = 0xffffffff00000000;
  local_124 = 0;
  local_110 = 0xffffffff;
  local_f8 = 0x40;
  puStack_100 = local_f4;
  puStack_130 = &local_58;
  local_b5 = 0;
  local_f4[0] = 0;
  puStack_a8 = local_9c;
  local_108 = PTR_DAT_04bb2bc0 + 0x10;
  local_a0 = 0x40;
  local_5d = 0;
  local_9c[0] = 0;
  local_138 = &PTR_LAB_04917d78;
  uStack_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_4a = 0;
  puVar1 = auStack_42;
  if (auStack_42 <= (undefined1 *)((long)&local_58 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_58 + 2U);
  }
  local_b0 = local_108;
  memset(puStack_130,0,(ulong)(puVar1 + (-0xe1 - (long)&local_138)) & 0xfffffffffffffffc | 2);
  local_40 = 0;
  local_38 = 0;
  local_36 = *(undefined2 *)PTR_DAT_04bb3170;
  iVar2 = FUN_01d778dc(&local_150,&local_140);
  if (((iVar2 == 0) && (local_140 != 0)) && (lVar4 = FUN_02658b70(), local_140 == lVar4)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

