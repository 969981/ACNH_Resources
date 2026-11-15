
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0226d950(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_18;
  
  plVar8 = *(long **)(param_1 + 0x68);
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2f68);
    }
    uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb2f60);
    if ((uVar5 & 1) != 0) {
      local_80 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_90 = *(undefined8 *)PTR_DAT_04bb2f80;
      uStack_88 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      lVar7 = 0x46c;
      lVar1 = param_1 + 0x46c;
      if (1 < *(uint *)(param_1 + 0x178) || *(int *)(param_1 + 0x440) != 0) {
        lVar7 = 0x468;
        lVar1 = param_1 + 0x468;
      }
      if (((long)*(short *)(param_1 + lVar7) == -1) || (*(short *)(lVar1 + 2) == -1)) {
        local_90 = _DAT_04102200;
        uStack_88 = _UNK_04102208;
        local_70 = _DAT_041023d0;
        uStack_68 = _UNK_041023d8;
        local_80 = _DAT_04102880;
        uStack_78 = _UNK_04102888;
        if ((*(uint *)(param_1 + 0x178) == 5) && (*(int *)(param_1 + 0x440) != 2)) {
          local_90 = 0x8000000080000000;
          uStack_88 = 0xbf800000;
          local_80 = 0xbf80000000000000;
          uStack_78 = 0;
          local_18 = 0x38cd;
          local_70 = 0xbf800000;
          uStack_68 = 0;
          uVar19 = _DAT_041023d0;
          uVar21 = _DAT_04102880;
          FUN_0277d4ac(&local_18);
          puVar2 = PTR_DAT_04bb43c0;
          fVar16 = (float)uVar21;
          fVar15 = (float)uVar19;
          local_98 = 0;
          local_a8 = PTR_DAT_04bc0510 + 0x10;
          local_a0 = (undefined4)local_18;
          uStack_9c = local_18._4_4_;
          lVar7 = *(long *)PTR_DAT_04bb43c0;
          uVar3 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar2 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(&local_18);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
                 (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
                local_98 = lVar7;
              }
            }
          }
          fVar9 = (float)FUN_01adb220(&local_a8);
          fVar20 = fVar16;
          fVar17 = fVar15;
          fVar10 = (float)FUN_01adadf0(&local_a8);
          fVar11 = sinf(fVar9 * 0.017453292);
          fVar12 = sinf(fVar15 * 0.017453292);
          fVar13 = sinf(fVar16 * 0.017453292);
          fVar14 = cosf(fVar9 * 0.017453292);
          fVar15 = cosf(fVar15 * 0.017453292);
          fVar16 = cosf(fVar16 * 0.017453292);
          fVar26 = fVar13 * fVar15;
          fVar27 = fVar15 * fVar16;
          fVar28 = fVar11 * fVar15;
          fVar25 = fVar14 * fVar16 + fVar13 * fVar11 * fVar12;
          fVar24 = fVar11 * fVar12 * fVar16 - fVar13 * fVar14;
          fVar9 = -(fVar11 * fVar16) + fVar12 * fVar13 * fVar14;
          fVar18 = -fVar12;
          fVar23 = fVar11 * fVar13 + fVar12 * fVar14 * fVar16;
          fVar14 = fVar14 * fVar15;
          fVar12 = (float)local_80;
          fVar13 = (float)((ulong)local_80 >> 0x20);
          fVar22 = (float)uStack_78;
          fVar15 = (float)local_90;
          fVar16 = (float)((ulong)local_90 >> 0x20);
          fVar11 = (float)uStack_88;
          local_90 = CONCAT44(fVar24 * fVar15 + fVar25 * fVar16 + fVar28 * fVar11 + 0.0,
                              fVar27 * fVar15 + fVar26 * fVar16 + fVar18 * fVar11 + 0.0);
          uStack_88 = CONCAT44((float)((ulong)uStack_88 >> 0x20) +
                               fVar10 * fVar15 + fVar17 * fVar16 + fVar20 * fVar11,
                               fVar23 * fVar15 + fVar9 * fVar16 + fVar14 * fVar11 + 0.0);
          local_80 = CONCAT44(fVar24 * fVar12 + fVar25 * fVar13 + fVar28 * fVar22 + 0.0,
                              fVar27 * fVar12 + fVar26 * fVar13 + fVar18 * fVar22 + 0.0);
          uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) +
                               fVar10 * fVar12 + fVar17 * fVar13 + fVar20 * fVar22,
                               fVar23 * fVar12 + fVar9 * fVar13 + fVar14 * fVar22 + 0.0);
          fVar15 = (float)local_70;
          fVar16 = (float)((ulong)local_70 >> 0x20);
          fVar11 = (float)uStack_68;
          local_70 = CONCAT44(fVar24 * fVar15 + fVar25 * fVar16 + fVar28 * fVar11 + 0.0,
                              fVar27 * fVar15 + fVar26 * fVar16 + fVar18 * fVar11 + 0.0);
          uStack_68 = CONCAT44((float)((ulong)uStack_68 >> 0x20) +
                               fVar10 * fVar15 + fVar17 * fVar16 + fVar20 * fVar11,
                               fVar23 * fVar15 + fVar9 * fVar16 + fVar14 * fVar11 + 0.0);
        }
      }
      else {
        plVar6 = (long *)**(undefined8 **)
                           (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1150) + 0x38) +
                           (long)*(short *)(param_1 + lVar7) * 8);
        (**(code **)(*plVar6 + 0x60))(plVar6,&local_90,&local_a8,(int)*(short *)(lVar1 + 2));
        FUN_007535b4(&local_90,&local_90);
      }
      *(undefined8 *)((long)plVar8 + 0x34c) = uStack_88;
      *(undefined8 *)((long)plVar8 + 0x344) = local_90;
      *(undefined8 *)((long)plVar8 + 0x35c) = uStack_78;
      *(undefined8 *)((long)plVar8 + 0x354) = local_80;
      *(undefined8 *)((long)plVar8 + 0x36c) = uStack_68;
      *(undefined8 *)((long)plVar8 + 0x364) = local_70;
    }
  }
  return;
}

