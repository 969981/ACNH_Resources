
undefined8
FUN_001ff430(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            long param_6,long param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  char cVar7;
  undefined *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined **local_c8;
  uint local_c0;
  undefined1 local_bc;
  uint *local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  long local_80;
  long lStack_78;
  long *local_70;
  long lStack_68;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar8 = PTR_DAT_04bcb900;
  plVar23 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar6 = *puVar9;
    if (uVar6 != 0) {
      lVar15 = **(long **)(puVar8 + 0xa0);
      if ((ulong)((*(long **)(puVar8 + 0xa0))[1] - lVar15 >> 3) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar23 = (long *)(*(long *)(lVar15 + (ulong)uVar6 * 8) + 0x20);
    }
  }
  if ((*plVar23 == 0) || (lVar15 = *(long *)(*plVar23 + 0x10), lVar15 == 0)) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x10);
  }
  plVar23 = (long *)(lVar15 + 0x78);
  (**(code **)(*plVar23 + 0x10))(plVar23);
  uVar10 = FUN_00194070(param_1);
  if ((uVar10 & 1) != 0) {
    local_58 = *(undefined4 *)(param_1 + 0x18);
    FUN_00197478(param_2,&local_58,4);
    local_54 = 3;
    FUN_00197478(param_2,&local_54,4);
    FUN_00197478(param_2,param_4,8);
    if ((*(char *)(param_2 + 8) == '\0') &&
       (FUN_00197478(param_2,param_5,8), *(char *)(param_2 + 8) == '\0')) {
      puVar21 = *(undefined8 **)(param_1 + 0x98);
      plVar1 = (long *)(param_1 + 0x90);
      if (puVar21 != *(undefined8 **)(param_1 + 0xa0)) {
        plVar16 = puVar21 + 1;
        *puVar21 = param_3;
        *(long **)(param_1 + 0x98) = plVar16;
LAB_001ff648:
        if (plVar16 == *(long **)(param_1 + 0xa0)) {
          uVar18 = (long)plVar16 - *plVar1;
          uVar10 = ((long)uVar18 >> 3) + 1;
          if (uVar10 >> 0x3d != 0) goto LAB_001ff7b0;
          uVar3 = (long)uVar18 >> 2;
          if ((ulong)((long)uVar18 >> 2) <= uVar10) {
            uVar3 = uVar10;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar3 = 0x1fffffffffffffff;
          }
          if (uVar3 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = FUN_00187df4(uVar3 << 3);
          }
          plVar16 = (long *)(lVar15 + ((long)uVar18 >> 3) * 8);
          plVar17 = plVar16 + 1;
          *plVar16 = param_6;
          plVar5 = *(long **)(param_1 + 0x90);
          plVar12 = *(long **)(param_1 + 0x98);
          if (plVar12 != plVar5) {
            do {
              plVar12 = plVar12 + -1;
              plVar16 = plVar16 + -1;
              *plVar16 = *plVar12;
            } while (plVar12 != plVar5);
            plVar12 = (long *)*plVar1;
          }
          *(long **)(param_1 + 0x90) = plVar16;
          *(long **)(param_1 + 0x98) = plVar17;
          *(ulong *)(param_1 + 0xa0) = lVar15 + uVar3 * 8;
          if (plVar12 != (long *)0x0) {
            FUN_00187e4c();
            plVar17 = *(long **)(param_1 + 0x98);
          }
        }
        else {
          plVar17 = plVar16 + 1;
          *plVar16 = param_6;
          *(long **)(param_1 + 0x98) = plVar17;
        }
        if (plVar17 == *(long **)(param_1 + 0xa0)) {
          uVar18 = (long)plVar17 - *plVar1;
          param_6 = (long)uVar18 >> 3;
          uVar10 = param_6 + 1;
          if (uVar10 >> 0x3d != 0) goto LAB_001ff7b0;
          uVar3 = (long)uVar18 >> 2;
          if ((ulong)((long)uVar18 >> 2) <= uVar10) {
            uVar3 = uVar10;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar3 = 0x1fffffffffffffff;
          }
          if (uVar3 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = FUN_00187df4(uVar3 << 3);
          }
          plVar16 = (long *)(lVar15 + param_6 * 8);
          plVar17 = plVar16 + 1;
          *plVar16 = param_7;
          plVar5 = *(long **)(param_1 + 0x90);
          plVar12 = *(long **)(param_1 + 0x98);
          if (plVar12 != plVar5) {
            do {
              plVar12 = plVar12 + -1;
              plVar16 = plVar16 + -1;
              *plVar16 = *plVar12;
            } while (plVar12 != plVar5);
            plVar12 = (long *)*plVar1;
          }
          *(long **)(param_1 + 0x90) = plVar16;
          *(long **)(param_1 + 0x98) = plVar17;
          *(ulong *)(param_1 + 0xa0) = lVar15 + uVar3 * 8;
          if (plVar12 != (long *)0x0) {
            FUN_00187e4c();
          }
        }
        else {
          *plVar17 = param_7;
          *(long **)(param_1 + 0x98) = plVar17 + 1;
        }
        uVar22 = 1;
        *(undefined8 *)(PTR_DAT_04bcca98 + 0x10) = DAT_04bccab0;
        goto LAB_001ff568;
      }
      uVar18 = (long)puVar21 - *plVar1;
      uVar10 = ((long)uVar18 >> 3) + 1;
      if (uVar10 >> 0x3d == 0) {
        uVar3 = (long)uVar18 >> 2;
        if ((ulong)((long)uVar18 >> 2) <= uVar10) {
          uVar3 = uVar10;
        }
        if (0x7ffffffffffffff7 < uVar18) {
          uVar3 = 0x1fffffffffffffff;
        }
        if (uVar3 == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = FUN_00187df4(uVar3 << 3);
        }
        puVar21 = (undefined8 *)(lVar15 + ((long)uVar18 >> 3) * 8);
        plVar16 = puVar21 + 1;
        *puVar21 = param_3;
        puVar4 = *(undefined8 **)(param_1 + 0x90);
        puVar11 = *(undefined8 **)(param_1 + 0x98);
        if (puVar11 != puVar4) {
          do {
            puVar11 = puVar11 + -1;
            puVar21 = puVar21 + -1;
            *puVar21 = *puVar11;
          } while (puVar11 != puVar4);
          puVar11 = (undefined8 *)*plVar1;
        }
        *(undefined8 **)(param_1 + 0x90) = puVar21;
        *(long **)(param_1 + 0x98) = plVar16;
        *(ulong *)(param_1 + 0xa0) = lVar15 + uVar3 * 8;
        if (puVar11 != (undefined8 *)0x0) {
          FUN_00187e4c();
          plVar16 = *(long **)(param_1 + 0x98);
        }
        goto LAB_001ff648;
      }
LAB_001ff7b0:
      auVar25 = FUN_001f4808(plVar1);
      lVar14 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      local_90 = 0x1ff7b8;
      local_80 = param_6;
      lStack_78 = param_7;
      local_70 = plVar23;
      lStack_68 = param_1;
      if (**(long **)(lVar14 + 0x90) == 0) {
        FUN_0018aa4c(&local_c8);
        uVar22 = FUN_001f72d0(lVar15,&local_c8);
        cVar7 = *(char *)(lVar15 + 8);
      }
      else {
        uVar22 = FUN_001f72d0(lVar15);
        cVar7 = *(char *)(lVar15 + 8);
      }
      if (cVar7 != '\0') {
        return uVar22;
      }
      lVar24 = *(long *)(*(long *)(lVar14 + 0x90) + 8);
      if (lVar24 == 0) {
        local_c0 = 1;
        local_bc = 0;
        local_c8 = &PTR_FUN_048393d8;
        uVar22 = FUN_00196a18();
        FUN_00196a24(&local_c8,uVar22,0);
        lVar24 = *(long *)(lVar15 + 0x10);
        lVar13 = *(long *)(lVar15 + 0x18);
        lVar20 = *(long *)(lVar24 + 0x18);
        if ((ulong)(lVar20 - lVar13) < 4) {
LAB_001ff918:
          *(undefined1 *)(lVar15 + 8) = 1;
          uVar22 = FUN_00196ce0(&local_c8);
          return uVar22;
        }
        uVar10 = (ulong)*(uint *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 0x28) + lVar13);
        *(long *)(lVar15 + 0x18) = lVar13 + 4;
        if ((ulong)(lVar20 - (lVar13 + 4)) < uVar10) goto LAB_001ff918;
        lVar24 = FUN_001abe40(lVar15);
        FUN_00193030(&local_c8,
                     *(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 0x28) + *(long *)(lVar15 + 0x18),
                     uVar10,0xffffffffffffffff);
        uVar10 = *(long *)(lVar15 + 0x18) + uVar10;
        if (uVar10 <= *(ulong *)(*(long *)(lVar15 + 0x10) + 0x18)) {
          *(ulong *)(lVar15 + 0x18) = uVar10;
        }
        cVar7 = *(char *)(lVar15 + 8);
        uVar22 = FUN_00196ce0(&local_c8);
        if (cVar7 != '\0') {
          return uVar22;
        }
        goto LAB_001ff870;
      }
      lVar13 = *(long *)(lVar15 + 0x10);
      lVar20 = *(long *)(lVar15 + 0x18);
      lVar19 = *(long *)(lVar13 + 0x18);
      if ((ulong)(lVar19 - lVar20) < 4) {
LAB_001ff860:
        *(undefined1 *)(lVar15 + 8) = 1;
      }
      else {
        uVar10 = (ulong)*(uint *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 0x28) + lVar20);
        *(long *)(lVar15 + 0x18) = lVar20 + 4;
        if ((ulong)(lVar19 - (lVar20 + 4)) < uVar10) goto LAB_001ff860;
        lVar13 = FUN_001abe40(lVar15);
        uVar22 = FUN_00193030(lVar24,*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 0x28) +
                                     *(long *)(lVar15 + 0x18),uVar10,0xffffffffffffffff);
        uVar10 = *(long *)(lVar15 + 0x18) + uVar10;
        if (uVar10 <= *(ulong *)(*(long *)(lVar15 + 0x10) + 0x18)) {
          *(ulong *)(lVar15 + 0x18) = uVar10;
        }
      }
      if (*(char *)(lVar15 + 8) != '\0') {
        return uVar22;
      }
LAB_001ff870:
      if (*(long *)(*(long *)(lVar14 + 0x90) + 0x10) == 0) {
        local_c0 = local_c0 & 0xffffff00;
        ppuVar2 = (undefined **)(PTR_DAT_04bc0ec8 + 0x10);
        local_b0 = &local_c0;
        uStack_a8 = 0x10;
        local_c8 = ppuVar2;
        FUN_001f719c(lVar15,&local_c8);
        local_c8 = ppuVar2;
        uVar22 = FUN_0018b1a0(&local_c8);
        return uVar22;
      }
      uVar22 = FUN_001f719c(lVar15);
      return uVar22;
    }
  }
  uVar22 = 0;
LAB_001ff568:
  (**(code **)(*plVar23 + 0x20))(plVar23);
  return uVar22;
}

