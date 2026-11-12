
void FUN_0075d11c(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined *local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined1 uStack_116;
  undefined1 uStack_115;
  uint uStack_114;
  undefined2 local_110;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined8 local_10c;
  undefined8 local_104;
  uint local_fc;
  undefined *local_f8;
  uint *local_f0;
  undefined4 local_e8;
  uint local_e4 [31];
  undefined1 local_65;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined8 local_58;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x3b0) != 0) {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_2);
    lVar10 = *(long *)puVar5;
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_118 = 0;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        local_120 = *param_2;
        local_128 = PTR_DAT_04bc0510 + 0x10;
        uVar6 = FUN_0277d6c4(&local_120);
        if (*(long *)puVar5 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(param_2);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0))
            {
              local_118 = (undefined2)lVar10;
              uStack_116 = (undefined1)((ulong)lVar10 >> 0x10);
              uStack_115 = (undefined1)((ulong)lVar10 >> 0x18);
              uStack_114 = (uint)((ulong)lVar10 >> 0x20);
            }
          }
        }
        uVar8 = FUN_01adc790(&local_128);
        if ((uVar8 & 1) != 0) {
          uVar8 = FUN_0075c824(param_1);
          if ((uVar8 & 1) == 0) {
            plVar11 = *(long **)(param_1 + 0x3b0);
            local_118 = *(undefined2 *)PTR_DAT_04bb37e0;
            uStack_116 = PTR_DAT_04bb37e0[2];
            uStack_115 = PTR_DAT_04bb37e0[3];
            local_e8 = *(undefined4 *)PTR_DAT_04bb37e0;
            uStack_114 = *(uint *)(PTR_DAT_04bb37e0 + 4);
            local_f0 = *(uint **)PTR_DAT_04bb37e0;
            local_f8 = *(undefined **)PTR_DAT_04bb37e0;
            local_120 = *(undefined8 *)PTR_DAT_04bb37e0;
            local_128 = *(undefined **)PTR_DAT_04bb37e0;
            local_10c = CONCAT17(uStack_115,CONCAT16(uStack_116,CONCAT24(local_118,uStack_114)));
            local_104 = CONCAT17(uStack_115,CONCAT16(uStack_116,CONCAT24(local_118,uStack_114)));
            local_110 = local_118;
            uStack_10e = uStack_116;
            uStack_10d = uStack_115;
            local_fc = uStack_114;
            local_e4[0] = uStack_114;
            if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar7 != 0)) {
              *(undefined ***)PTR_DAT_04bb3798 = &PTR_LAB_04908e00;
              __cxa_guard_release(PTR_DAT_04bb37a0);
            }
            if ((plVar11 != (long *)0x0) &&
               (uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb3798), (uVar8 & 1) != 0))
            {
              FUN_0233e334(plVar11,&local_128,1);
              *(uint *)(param_1 + 0x474) = CONCAT13(uStack_10d,CONCAT12(uStack_10e,local_110));
              *(undefined8 *)(param_1 + 0x478) = local_10c;
              *(undefined4 *)(param_1 + 0x480) = (undefined4)local_104;
            }
          }
          FUN_0075c420(param_1,param_2,param_3 & 1,0);
          return;
        }
      }
    }
    local_118 = 0;
    uStack_116 = 0;
    uStack_115 = 0;
    local_128 = (undefined *)0xffffffff00000000;
    local_120 = 0;
    uStack_114 = 0x3f800000;
    local_110 = 0;
    uStack_10e = 0;
    uStack_10d = 0;
    local_f0 = local_e4;
    local_e8 = 0x80;
    local_65 = 0;
    local_f8 = PTR_DAT_04bb2d88 + 0x10;
    local_e4[0] = local_e4[0] & 0xffffff00;
    local_58 = 0;
    local_5b = 0;
    local_104 = 0;
    local_10c = 0;
    local_60 = 7;
    local_5c = *(undefined1 *)(param_1 + 0x224);
    lVar10 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
    if (lVar10 != 0) {
      uVar9 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
      local_34 = 0;
      FUN_017327f0(uVar9,param_1 + 0x474,&local_34,&local_128,0xffffffff);
    }
    lVar10 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a8))();
    if (lVar10 != 0) {
      uVar9 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a8))();
      local_34 = 0;
      FUN_017327f0(uVar9,param_1 + 0x47c,&local_34,&local_128,0xffffffff);
    }
    uVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
    uVar2 = PTR_DAT_04bb37e0[2];
    uVar3 = PTR_DAT_04bb37e0[3];
    uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined2 *)(param_1 + 0x474) = uVar4;
    *(undefined1 *)(param_1 + 0x476) = uVar2;
    *(undefined1 *)(param_1 + 0x477) = uVar3;
    *(undefined4 *)(param_1 + 0x478) = uVar1;
    *(undefined2 *)(param_1 + 0x47c) = uVar4;
    *(undefined1 *)(param_1 + 0x47e) = uVar2;
    *(undefined1 *)(param_1 + 0x47f) = uVar3;
    *(undefined4 *)(param_1 + 0x480) = uVar1;
  }
  return;
}

