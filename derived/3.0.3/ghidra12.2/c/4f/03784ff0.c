
undefined8 FUN_03784ff0(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  undefined8 *puVar36;
  int iVar37;
  uint *puVar38;
  uint *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined *local_a8;
  undefined2 local_a0;
  undefined *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  int iStack_74;
  
  lVar28 = *(long *)PTR_DAT_04bb2720;
  if (lVar28 == 0) {
    puVar36 = &DAT_055c04a0;
  }
  else {
    puVar36 = &DAT_055c04a0;
    if (*(long *)(lVar28 + 0x330) != 0) {
      puVar36 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar28 + 0x338));
      iVar19 = FUN_006bd550(*puVar36,0);
      puVar36 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar19 != 0x758f7eaf) {
        puVar36 = &DAT_055c04a0;
      }
    }
  }
  puVar17 = PTR_DAT_04bb59d8;
  if (*(int *)(puVar36 + 7) == -0x17df00c3) {
    lVar28 = *(long *)PTR_DAT_04bb59d8;
    fVar41 = (float)*(int *)(lVar28 + 0x2c) * 0.5;
    fVar40 = (float)*(int *)(lVar28 + 0x28) * 0.5;
    uVar20 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar20 = (uint)(fVar40 < 0.0);
    }
    local_78 = (int)fVar40 - uVar20;
    uVar20 = 0;
    if (fVar41 != (float)(int)fVar41) {
      uVar20 = (uint)(fVar41 < 0.0);
    }
    puVar1 = PTR_DAT_04bbc5d8 + 0x10;
    iStack_74 = (int)fVar41 - uVar20;
    fVar40 = (float)*(int *)(lVar28 + 0x38) * 0.5;
    puVar36 = (undefined8 *)(PTR_DAT_04bb2018 + 0x10);
    uVar20 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar20 = (uint)(fVar40 < 0.0);
    }
    iVar19 = (int)fVar40 - uVar20;
    fVar40 = (float)*(int *)(lVar28 + 0x3c) * 0.5;
    uVar20 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar20 = (uint)(fVar40 < 0.0);
    }
    iVar13 = (int)fVar40 - uVar20;
    iVar30 = local_78;
    if (iVar19 <= local_78) {
      iVar30 = iVar19;
    }
    if (local_78 <= iVar19) {
      local_78 = iVar19;
    }
    iVar19 = iStack_74;
    if (iVar13 <= iStack_74) {
      iVar19 = iVar13;
    }
    if (iStack_74 <= iVar13) {
      iStack_74 = iVar13;
    }
    local_88 = (undefined *)CONCAT44(iVar19,iVar30);
    local_98 = puVar1;
    local_90 = puVar36;
    local_80 = puVar36;
    uVar24 = FUN_037857b0(&local_98);
    if ((uVar24 & 1) == 0) {
      lVar28 = *(long *)puVar17;
      fVar41 = (float)*(int *)(lVar28 + 0x54) * 0.5;
      fVar40 = (float)*(int *)(lVar28 + 0x50) * 0.5;
      fVar42 = (float)*(int *)(lVar28 + 0x60) * 0.5;
      fVar43 = (float)*(int *)(lVar28 + 100) * 0.5;
      uVar20 = 0;
      if (fVar40 != (float)(int)fVar40) {
        uVar20 = (uint)(fVar40 < 0.0);
      }
      local_78 = (int)fVar40 - uVar20;
      uVar20 = 0;
      if (fVar41 != (float)(int)fVar41) {
        uVar20 = (uint)(fVar41 < 0.0);
      }
      iStack_74 = (int)fVar41 - uVar20;
      uVar20 = 0;
      if (fVar42 != (float)(int)fVar42) {
        uVar20 = (uint)(fVar42 < 0.0);
      }
      iVar19 = (int)fVar42 - uVar20;
      uVar20 = 0;
      if (fVar43 != (float)(int)fVar43) {
        uVar20 = (uint)(fVar43 < 0.0);
      }
      iVar13 = (int)fVar43 - uVar20;
      iVar30 = local_78;
      if (iVar19 <= local_78) {
        iVar30 = iVar19;
      }
      if (local_78 <= iVar19) {
        local_78 = iVar19;
      }
      iVar19 = iStack_74;
      if (iVar13 <= iStack_74) {
        iVar19 = iVar13;
      }
      if (iStack_74 <= iVar13) {
        iStack_74 = iVar13;
      }
      local_88 = (undefined *)CONCAT44(iVar19,iVar30);
      local_98 = puVar1;
      local_90 = puVar36;
      local_80 = puVar36;
      uVar24 = FUN_037857b0(&local_98);
      if ((uVar24 & 1) == 0) goto LAB_03785780;
    }
LAB_03785278:
    uVar25 = 1;
  }
  else {
    local_a8 = PTR_DAT_04bb7648 + 0x10;
    local_a0 = **(undefined2 **)PTR_DAT_04bb27f8;
    lVar28 = FUN_03775b80(&local_a8);
    puVar17 = PTR_DAT_04bb59d8;
    if (lVar28 == 0) {
      return 0;
    }
    local_90 = (undefined8 *)(lVar28 + 0xe0);
    lVar29 = *(long *)PTR_DAT_04bb59d8;
    iVar19 = *(int *)(lVar29 + 0x28);
    iVar30 = *(int *)(lVar29 + 0x2c);
    fVar40 = (float)iVar19 * 0.5;
    fVar41 = (float)iVar30 * 0.5;
    uVar20 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar20 = (uint)(fVar40 < 0.0);
    }
    fVar43 = (float)*(int *)(lVar29 + 0x38) * 0.5;
    fVar42 = (float)*(int *)(lVar29 + 0x3c) * 0.5;
    uVar21 = 0;
    if (fVar41 != (float)(int)fVar41) {
      uVar21 = (uint)(fVar41 < 0.0);
    }
    uVar33 = 0;
    if (fVar43 != (float)(int)fVar43) {
      uVar33 = (uint)(fVar43 < 0.0);
    }
    uVar34 = 0;
    if (fVar42 != (float)(int)fVar42) {
      uVar34 = (uint)(fVar42 < 0.0);
    }
    iVar13 = (int)fVar40 - uVar20;
    if ((int)((int)fVar43 - uVar33) <= (int)((int)fVar40 - uVar20)) {
      iVar13 = (int)fVar43 - uVar33;
    }
    local_88 = (undefined *)CONCAT71(local_88._1_7_,1);
    iVar2 = (int)fVar41 - uVar21;
    if ((int)((int)fVar42 - uVar34) <= (int)((int)fVar41 - uVar21)) {
      iVar2 = (int)fVar42 - uVar34;
    }
    if (*(long **)(lVar28 + 0x108) == (long *)0x0) {
      bVar18 = 0;
    }
    else {
      puVar36 = (undefined8 *)**(long **)(lVar28 + 0x108);
      bVar18 = 0;
      if (puVar36 != (undefined8 *)0x0) {
        bVar18 = (**(code **)*puVar36)();
        lVar29 = *(long *)puVar17;
        iVar19 = *(int *)(lVar29 + 0x28);
        iVar30 = *(int *)(lVar29 + 0x2c);
      }
    }
    iVar10 = *(int *)(lVar29 + 0x50);
    local_88 = (undefined *)
               (CONCAT62(local_88._2_6_,CONCAT11(bVar18,(undefined1)local_88)) & 0xffffffffffff01ff)
    ;
    iVar8 = *(int *)(lVar29 + 0x60);
    iVar9 = *(int *)(lVar29 + 100);
    local_98 = PTR_DAT_04bbc598 + 0x10;
    iVar3 = iVar10;
    if (iVar8 <= iVar10) {
      iVar3 = iVar8;
    }
    if (iVar10 <= iVar8) {
      iVar10 = iVar8;
    }
    lVar32 = *(long *)(lVar28 + 0xf0) + *(long *)(lVar28 + 0xe8) + 0x4240;
    iVar8 = iVar30;
    if (iVar9 <= iVar30) {
      iVar8 = iVar9;
    }
    iVar4 = iVar30;
    if (iVar30 <= iVar9) {
      iVar4 = iVar9;
    }
    lVar31 = 0;
    lVar35 = *(long *)PTR_DAT_04bb27a8;
    do {
      lVar27 = 0;
      fVar40 = (float)(iVar2 + -3 + (int)lVar31) * 10.0;
      fVar41 = fVar40 + 2.5;
      fVar40 = fVar40 + 10.0 + -2.5;
      iVar14 = (int)((float)(int)fVar41 / 5.0) - (uint)(fVar41 < 0.0);
      iVar37 = (int)((float)(int)fVar40 / 5.0) - (uint)(fVar40 < 0.0);
      iVar9 = iVar14;
      if (iVar37 <= iVar14) {
        iVar9 = iVar37;
      }
      if (iVar14 <= iVar37) {
        iVar14 = iVar37;
      }
      iVar37 = iVar13 + -1;
      do {
        fVar41 = (float)iVar37 * 10.0 + 2.5;
        fVar40 = (float)iVar37 * 10.0 + 10.0 + -2.5;
        iVar15 = (int)((float)(int)fVar41 / 5.0) - (uint)(fVar41 < 0.0);
        iVar16 = (int)((float)(int)fVar40 / 5.0) - (uint)(fVar40 < 0.0);
        iVar5 = iVar15;
        if (iVar16 <= iVar15) {
          iVar5 = iVar16;
        }
        if (iVar15 <= iVar16) {
          iVar15 = iVar16;
        }
        if (((((iVar19 <= iVar5) && (iVar15 <= *(int *)(lVar29 + 0x38) && iVar30 <= iVar9)) &&
             (iVar14 <= *(int *)(lVar29 + 0x3c))) ||
            (((iVar3 <= iVar5 && iVar15 <= iVar10) && iVar8 <= iVar9) && iVar14 == iVar4 ||
             (((iVar3 <= iVar5 && iVar15 <= iVar10) && iVar8 <= iVar9) && iVar14 - iVar4 < 0) !=
             (((iVar3 <= iVar5 && iVar15 <= iVar10) && iVar8 <= iVar9) && SBORROW4(iVar14,iVar4))))
           && (((uVar20 = (uint)*(ushort *)(lVar32 + lVar27) - (uint)*(ushort *)(lVar35 + 0x408),
                uVar20 < *(uint *)(lVar35 + 1000) &&
                (puVar38 = *(uint **)(*(long *)(lVar35 + 0x3f0) + (long)(int)uVar20 * 8),
                puVar38 != (uint *)0x0)) &&
               ((uVar20 = *puVar38, uVar20 != 0 && (puVar38 != (uint *)(ulong)uVar20)))))) {
          puVar39 = (uint *)((long)puVar38 - (long)(ulong)uVar20);
          if (((*puVar39 != 0) && (uVar20 = puVar39[1], uVar20 != 0)) &&
             ((ulong)(ushort)puVar39[2] != 0)) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar39 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar39 + lVar7 + (ulong)(ushort)puVar39[2] * 8;
            if (lVar7 != 0) {
              uVar21 = 0;
              if ((ulong)uVar20 != 0) {
                uVar21 = (uint)((ulong)((long)puVar38 - lVar7) / (ulong)uVar20);
              }
              if (*puVar39 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if ((uVar21 < *(uint *)PTR_DAT_04bbbe48) &&
                 (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar21 * 2) == 2)) {
                if (((bVar18 & 1) != 0) &&
                   ((*(long *)(lVar28 + 0x108) != 0 &&
                    (puVar36 = *(undefined8 **)(*(long *)(lVar28 + 0x108) + 8),
                    puVar36 != (undefined8 *)0x0)))) {
                  (**(code **)*puVar36)();
                  return 1;
                }
                goto LAB_03785278;
              }
            }
          }
        }
        lVar27 = lVar27 + 6;
        iVar37 = iVar37 + 1;
      } while (lVar27 != 0x60);
      lVar31 = lVar31 + 1;
      lVar32 = lVar32 + 0x60;
    } while (lVar31 != 0x10);
    FUN_02640184(&local_98);
    local_88 = PTR_FUN_04bbc158;
    local_98 = PTR_DAT_04bbc378 + 0x10;
    local_90 = (undefined8 *)(PTR_DAT_04bbc008 + 0x10);
    plVar26 = (long *)FUN_01367570();
    uVar20 = (**(code **)(*plVar26 + 0x18))();
    plVar26 = (long *)FUN_01367570();
    uVar21 = (**(code **)(*plVar26 + 0x20))();
    puVar17 = PTR_DAT_04bb3170;
    if ((0 < (int)uVar20) && (0 < (int)uVar21)) {
      uVar33 = 0;
      do {
        uVar34 = 0;
        do {
          plVar26 = (long *)(*(code *)*local_90)(&local_90);
          uVar22 = (**(code **)(*plVar26 + 0x18))();
          uVar23 = (**(code **)(*plVar26 + 0x20))(plVar26);
          uVar6 = uVar34;
          if (uVar22 <= uVar34) {
            uVar6 = 0;
          }
          uVar22 = uVar33;
          if (uVar23 <= uVar33) {
            uVar22 = 0;
          }
          if (((long *)plVar26[5] == (long *)0x0) ||
             (puVar36 = *(undefined8 **)plVar26[5], puVar36 == (undefined8 *)0x0)) {
            uVar24 = 0;
          }
          else {
            uVar24 = (**(code **)*puVar36)();
            uVar24 = uVar24 & 0xffffffff;
          }
          lVar28 = (**(code **)(*plVar26 + 0x28))(plVar26,uVar6,uVar22);
          sVar11 = *(short *)puVar17;
          sVar12 = *(short *)(lVar28 + plVar26[1]);
          if ((((uVar24 & 1) != 0) && (plVar26[5] != 0)) &&
             (puVar36 = *(undefined8 **)(plVar26[5] + 8), puVar36 != (undefined8 *)0x0)) {
            (**(code **)*puVar36)();
          }
          if (sVar12 != sVar11) goto LAB_03785278;
          uVar34 = uVar34 + 1;
        } while (uVar20 != uVar34);
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar21);
    }
LAB_03785780:
    uVar25 = 0;
  }
  return uVar25;
}

