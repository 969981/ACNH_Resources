
void FUN_0075bd1c(long param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_174 [8];
  undefined1 auStack_16c [8];
  undefined1 auStack_164 [8];
  undefined1 auStack_15c [8];
  undefined1 auStack_154 [8];
  undefined1 auStack_14c [8];
  undefined1 auStack_144 [24];
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined8 local_58;
  
  if (*param_2 != -2) {
    FUN_007608f8(auStack_174);
    puVar1 = PTR_DAT_04bb43c0;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(auStack_174);
    lVar4 = *(long *)puVar1;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0075bbbc(param_1,PTR_DAT_04bb37e0,1);
        lVar4 = *(long *)puVar1;
      }
    }
    uVar2 = FUN_0277d6c4(auStack_16c);
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0075c1e4(param_1,PTR_DAT_04bb37e0,1);
        lVar5 = *(long *)puVar1;
      }
    }
    uVar2 = FUN_0277d6c4(auStack_164);
    lVar4 = *(long *)puVar1;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
         (*(long *)(param_1 + 0x3b0) != 0)) {
        FUN_0075bd1c(param_1,PTR_DAT_04bb37e0);
        local_118 = 0;
        local_65 = 0;
        local_e4[0] = 0;
        local_128 = 0xffffffff00000000;
        uStack_120 = 0;
        local_114 = 0x3f800000;
        local_f0 = local_e4;
        local_e8 = 0x80;
        local_58 = 0;
        local_5b = 0;
        local_104 = 0;
        local_10c = 0;
        local_f8 = &DAT_048fc708;
        local_60 = 7;
        local_5c = *(undefined1 *)(param_1 + 0x224);
        lVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x398))();
        if (lVar4 != 0) {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x398))();
          local_12c = 0;
          FUN_017327f0(uVar3,PTR_DAT_04bb37e0,&local_12c,&local_128,0xffffffff);
        }
        lVar4 = *(long *)puVar1;
      }
    }
    uVar2 = FUN_0277d6c4(auStack_15c);
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0075c420(param_1,PTR_DAT_04bb37e0,1,0);
        lVar5 = *(long *)puVar1;
      }
    }
    uVar2 = FUN_0277d6c4(auStack_154);
    lVar4 = *(long *)puVar1;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0075ca70(param_1,PTR_DAT_04bb37e0,1,0);
        lVar4 = *(long *)puVar1;
      }
    }
    uVar2 = FUN_0277d6c4(auStack_14c);
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if (((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
         (*(long *)(param_1 + 0x3b0) != 0)) {
        FUN_0075bd1c(param_1,PTR_DAT_04bb37e0);
        local_118 = 0;
        local_65 = 0;
        local_e4[0] = 0;
        local_128 = 0xffffffff00000000;
        uStack_120 = 0;
        local_114 = 0x3f800000;
        local_f0 = local_e4;
        local_e8 = 0x80;
        local_58 = 0;
        local_5b = 0;
        local_104 = 0;
        local_10c = 0;
        local_f8 = &DAT_048fc708;
        local_60 = 7;
        local_5c = *(undefined1 *)(param_1 + 0x224);
        lVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b0))();
        if (lVar4 != 0) {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b0))();
          local_12c = 0;
          FUN_017327f0(uVar3,PTR_DAT_04bb37e0,&local_12c,&local_128,0xffffffff);
        }
        lVar5 = *(long *)puVar1;
      }
    }
    uVar2 = FUN_0277d6c4(auStack_144);
    if (*(long *)puVar1 != 0) {
      lVar4 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if (((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
         (*(long *)(param_1 + 0x3b0) != 0)) {
        FUN_0075bd1c(param_1,PTR_DAT_04bb37e0);
        local_118 = 0;
        local_65 = 0;
        local_e4[0] = 0;
        local_128 = 0xffffffff00000000;
        uStack_120 = 0;
        local_114 = 0x3f800000;
        local_f0 = local_e4;
        local_e8 = 0x80;
        local_58 = 0;
        local_5b = 0;
        local_104 = 0;
        local_10c = 0;
        local_f8 = &DAT_048fc708;
        local_60 = 7;
        local_5c = *(undefined1 *)(param_1 + 0x224);
        lVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b8))();
        if (lVar4 != 0) {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b8))();
          local_12c = 0;
          FUN_017327f0(uVar3,PTR_DAT_04bb37e0,&local_12c,&local_128,0xffffffff);
        }
      }
    }
  }
  return;
}

