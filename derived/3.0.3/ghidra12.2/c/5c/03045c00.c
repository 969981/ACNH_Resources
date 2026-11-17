
void FUN_03045c00(long param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined8 local_168;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined6 uStack_60;
  undefined1 auStack_5a [2];
  int local_58;
  
  puVar2 = PTR_DAT_04bb2bc0;
  if (param_1 != 0) {
    local_14c = 0;
    local_150 = 0x13;
    local_148 = 0xffffffff;
    uStack_140 = 0xffffffff00000000;
    puStack_158 = &local_80;
    local_138 = 0xffffffff;
    puStack_128 = local_11c;
    local_120 = 0x40;
    local_dd = 0;
    local_11c[0] = 0;
    local_130 = PTR_DAT_04bb2bc0 + 0x10;
    local_c8 = 0x40;
    local_85 = 0;
    local_c4[0] = 0;
    puStack_d0 = local_c4;
    local_160 = PTR_DAT_04bc0bc0 + 0x10;
    local_80 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    puVar1 = auStack_5a;
    if (auStack_5a <= (undefined1 *)((long)&local_80 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_80 + 2U);
    }
    local_70 = 0;
    uStack_68 = 0;
    local_62 = 0;
    local_d8 = local_130;
    memset(puStack_158,0,(ulong)(puVar1 + (-0xe1 - (long)&local_160)) & 0xfffffffffffffffc | 2);
    puVar3 = PTR_DAT_04bb3448;
    local_58 = 0;
    FUN_01be4af0(&local_160,**(undefined4 **)PTR_DAT_04bb3448,param_2,3,1,0);
    puVar4 = PTR_DAT_04bc4e60;
    puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    local_58 = param_2;
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
      if ((uVar6 & 1) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
    }
    local_1c0 = puVar2 + 0x10;
    local_16d = 0;
    local_1b0 = 0x40;
    local_1b8 = local_1ac;
    local_1ac[0] = 0;
    local_168 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      local_168 = *(undefined8 *)puVar8[0x43];
    }
    FUN_034632e0(&local_1c0,&local_160);
    FUN_01be4af0(&local_160,**(undefined4 **)puVar3,param_3,3,1,0);
    puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    local_58 = param_3;
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
      if ((uVar6 & 1) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
    }
    local_1c0 = puVar2 + 0x10;
    local_16d = 0;
    local_1b0 = 0x40;
    local_1b8 = local_1ac;
    local_1ac[0] = 0;
    local_168 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      local_168 = *(undefined8 *)(puVar8[0x43] + (ulong)(1 < *(uint *)(puVar8 + 0x42)) * 8);
    }
    FUN_034632e0(&local_1c0,&local_160);
    puVar8 = (undefined8 *)**(long **)(param_1 + 0x3f8);
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
    if ((uVar6 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    plVar7 = *(long **)puVar8[0x45];
    if (plVar7 != (long *)0x0) {
      uVar9 = 0x3f800000;
      if (param_3 < 100) {
        uVar9 = 0;
      }
      local_1c0 = PTR_DAT_04bc4f00 + 0x10;
      local_1b8 = (undefined1 *)CONCAT44(local_1b8._4_4_,0x14);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_1c0);
      (**(code **)(plVar7[3] + 0x158))(uVar9,plVar7[1]);
    }
  }
  return;
}

