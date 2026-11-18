
void FUN_0337f180(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined8 local_158;
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
  undefined6 uStack_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined1 auStack_4a [2];
  undefined4 local_48;
  
  if (param_1 != 0) {
    local_13c = 0;
    local_140 = 0x13;
    local_138 = 0xffffffff;
    uStack_130 = 0xffffffff00000000;
    puStack_118 = local_10c;
    puStack_148 = &local_70;
    local_128 = 0xffffffff;
    local_110 = 0x40;
    local_cd = 0;
    local_10c[0] = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_b8 = 0x40;
    local_75 = 0;
    local_b4[0] = 0;
    puStack_c0 = local_b4;
    local_150 = PTR_DAT_04bc0bc0 + 0x10;
    local_70 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    puVar2 = auStack_4a;
    if (auStack_4a <= (undefined1 *)((long)&local_70 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_70 + 2U);
    }
    local_60 = 0;
    uStack_58 = 0;
    local_52 = 0;
    local_120 = puVar1;
    local_c8 = puVar1;
    memset(puStack_148,0,(ulong)(puVar2 + (-0xe1 - (long)&local_150)) & 0xfffffffffffffffc | 2);
    local_48 = 0;
    uVar3 = 3;
    if (**(int **)PTR_DAT_04bb3448 != 8) {
      uVar3 = 0;
    }
    FUN_01be4af0(&local_150,**(int **)PTR_DAT_04bb3448,param_2,10,uVar3,0);
    puVar7 = (undefined8 *)**(long **)(param_1 + 0x3f8);
    local_48 = param_2;
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
    if ((uVar6 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    lVar4 = 0x30;
    if (*(uint *)(puVar7 + 0x42) < 7) {
      lVar4 = 0;
    }
    local_158 = *(undefined8 *)(puVar7[0x43] + lVar4);
    local_1a0 = 0x40;
    local_15d = 0;
    local_19c[0] = 0;
    puStack_1a8 = local_19c;
    local_1b0 = puVar1;
    FUN_034632e0(&local_1b0,&local_150);
  }
  return;
}

