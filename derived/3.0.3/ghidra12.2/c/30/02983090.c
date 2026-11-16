
undefined8 FUN_02983090(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ushort uVar13;
  uint *puVar14;
  ushort *puVar15;
  uint *puVar16;
  undefined1 uVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined *local_e8;
  char *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined1 local_75;
  undefined4 local_70;
  
  puVar4 = PTR_DAT_04bb2698;
  plVar22 = (long *)*param_2;
  lVar20 = *(long *)PTR_DAT_04bb2698;
  if (lVar20 == 0) {
    plVar9 = malloc(0x1d8);
  }
  else {
    plVar9 = plVar22;
    if (plVar22 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar20 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_02983120;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1d8,8);
  }
LAB_02983120:
  puVar1 = PTR_DAT_04bcb440;
  puVar12 = (undefined8 *)((long)plVar9 + 0x1c);
  *(undefined1 *)((long)plVar9 + 0x9b) = 0;
  plVar9[2] = (long)puVar12;
  *(undefined4 *)(plVar9 + 3) = 0x80;
  *plVar9 = (long)(puVar1 + 0x10);
  if (puVar12 != &DAT_0407ebb1) {
    *(undefined1 *)puVar12 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar9[1] = (long)puVar1;
  uVar6 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar9 + 0x14) = uVar6;
  *plVar9 = (long)&PTR_LAB_04a97368;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = (long)&PTR_LAB_04a973c0;
  plVar9[0x17] = 0;
  *(undefined8 *)((long)plVar9 + 0xbd) = 0;
  *(undefined4 *)(plVar9 + 0x19) = 0;
  plVar9[0x1f] = (long)&PTR_LAB_04a973e8;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar9 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar9 + 0x18b) = 0;
  plVar9[0x23] = (long)puVar2;
  puVar12 = (undefined8 *)((long)plVar9 + 0x14c);
  plVar9[0x28] = (long)puVar12;
  if (puVar12 != &DAT_0407ebb1) {
    *(undefined1 *)puVar12 = 0;
  }
  plVar9[0x37] = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar9 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x38) = 0xffffffff;
  plVar9[0x33] = 0;
  plVar9[0x34] = 0;
  plVar9[0x35] = 0;
  *(undefined4 *)(plVar9 + 0x36) = 0;
  *(undefined4 *)(plVar9 + 0x39) = 0;
  plVar9[0x3a] = 0;
  local_75 = 0;
  plVar9[0x27] = (long)(puVar2 + 0x10);
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  DAT_055dd8b4 = 1;
  DAT_055dd8c8 = 0xffffffff;
  DAT_055dd8b8 = 0xffffffffffffffff;
  DAT_055dd8c0 = 0xffffffffffffffff;
  local_f8._0_4_ = 0x80;
  local_f8._4_4_ = s_invalid_name_040e8f53._0_4_;
  uStack_f0 = s_invalid_name_040e8f53._4_4_;
  local_ec._0_1_ = s_invalid_name_040e8f53[8];
  local_ec._1_1_ = s_invalid_name_040e8f53[9];
  local_ec._2_1_ = s_invalid_name_040e8f53[10];
  local_ec._3_1_ = s_invalid_name_040e8f53[0xb];
  local_100 = (undefined **)((long)&local_f8 + 4);
  local_108 = puVar1;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar10 = FUN_03853d00(plVar9,&local_108);
  if ((uVar10 & 1) != 0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_108,plVar22);
  }
  *param_1 = plVar9;
  uVar23 = *(uint *)(plVar9 + 0x38);
  if ((int)uVar23 < 1) {
    if ((plVar9[0x16] == 0) || (puVar16 = *(uint **)(plVar9[0x16] + 8), puVar16 == (uint *)0x0))
    goto LAB_029837a8;
    uVar23 = *puVar16;
    if (0 < (int)uVar23) goto LAB_029832bc;
joined_r0x02983344:
    if (uVar23 == 0) goto LAB_029837a8;
  }
  else {
LAB_029832bc:
    lVar20 = *(long *)puVar4;
    if (lVar20 == 0) {
      pvVar11 = malloc((long)(int)(uVar23 * 0x30));
joined_r0x02983358:
      if (pvVar11 != (void *)0x0) {
        uVar21 = uVar23 - 1;
        *(uint *)((long)param_1 + 0x3c) = uVar23;
        param_1[5] = pvVar11;
        if (1 < uVar23) {
          if (uVar21 == 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            plVar22 = (long *)((long)pvVar11 + 0x30);
            do {
              uVar10 = uVar10 + 2;
              plVar22[-6] = (long)plVar22;
              *plVar22 = (long)(plVar22 + 6);
              plVar22 = plVar22 + 0xc;
            } while (((ulong)uVar21 & 0xfffffffe) != uVar10);
          }
          if ((uVar21 & 1) != 0) {
            plVar22 = (long *)((long)pvVar11 + uVar10 * 0x30);
            *plVar22 = (long)(plVar22 + 6);
          }
        }
        *(undefined8 *)((long)pvVar11 + (long)(int)(uVar21 * 6) * 8) = 0;
        param_1[6] = pvVar11;
        goto joined_r0x02983344;
      }
    }
    else {
      if (plVar22 != (long *)0x0) {
LAB_02983300:
        pvVar11 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(long)(int)(uVar23 * 0x30),8);
        goto joined_r0x02983358;
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar20 + 8);
      if (lVar8 != 0) {
        puVar12 = (undefined8 *)(lVar8 + 0xa8);
      }
      plVar22 = (long *)*puVar12;
      if (plVar22 != (long *)0x0) goto LAB_02983300;
    }
  }
  plVar22 = param_1 + 4;
  uVar21 = 0;
  do {
    if ((int)*(uint *)(plVar9 + 0x38) < 1) {
      if ((((plVar9[0x16] != 0) && (puVar16 = *(uint **)(plVar9[0x16] + 8), puVar16 != (uint *)0x0))
          && ((*(uint *)(plVar9 + 0x19) <= uVar21 ||
              (*(char *)(plVar9[0x1a] + (long)(int)uVar21) != '\0')))) &&
         (((uVar21 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar16 = (uint *)((ulong)(puVar16[1] * uVar21 + (uint)(ushort)puVar16[2] * 8 + iVar7) +
                          (long)puVar16);
        goto joined_r0x02983508;
      }
    }
    else if (uVar21 < *(uint *)(plVar9 + 0x38)) {
      uVar3 = uVar21;
      if (*(uint *)(plVar9 + 0x36) <= uVar21) {
        uVar3 = 0;
      }
      puVar16 = *(uint **)(plVar9[0x37] + (ulong)uVar3 * 8);
joined_r0x02983508:
      if (puVar16 != (uint *)0x0) {
        puVar14 = (uint *)(ulong)*puVar16;
        if (*puVar16 == 0) {
          uVar17 = 0;
          uVar13 = 0;
LAB_02983638:
          bVar5 = false;
        }
        else {
          if ((DAT_055dd8b4 & 1) == 0) {
            DAT_055dd8b4 = 1;
            DAT_055dd8c8 = 0xffffffff;
            DAT_055dd8b8 = 0xffffffffffffffff;
            DAT_055dd8c0 = 0xffffffffffffffff;
            uVar10 = 0xffffffff;
LAB_02983538:
            if (puVar16 == puVar14) {
LAB_02983540:
              uVar13 = 0;
            }
            else {
              do {
                if (uVar10 != 0xffffffff) goto LAB_02983540;
                lVar20 = 0xc;
                if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar16 + (lVar20 - (long)puVar14);
                if (lVar20 == 0) goto LAB_02983540;
                uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
                DAT_055dd8b8 = CONCAT44(0xfffffffe,(undefined4)DAT_055dd8b8);
                if (uVar10 == 0) goto LAB_02983540;
                puVar18 = (uint *)(lVar20 + 4);
                while (puVar18[-1] != 0x54706054) {
                  puVar18 = puVar18 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_02983540;
                }
                uVar10 = (ulong)*puVar18;
                uVar19 = 0;
                if (*puVar18 != 0xffffffff) {
                  uVar19 = uVar10;
                }
                DAT_055dd8b8 = CONCAT44((int)uVar19,(undefined4)DAT_055dd8b8);
              } while ((int)uVar19 < 0);
              puVar15 = (ushort *)(uVar19 + (long)puVar16);
              if (puVar15 != (ushort *)0x0) goto LAB_02983498;
              uVar13 = 0;
            }
          }
          else {
            uVar10 = DAT_055dd8b8 >> 0x20;
            if ((long)DAT_055dd8b8 < 0) goto LAB_02983538;
            puVar15 = (ushort *)(uVar10 + (long)puVar16);
            uVar13 = 0;
            if (puVar15 != (ushort *)0x0) {
LAB_02983498:
              uVar13 = *puVar15;
            }
          }
          puVar14 = (uint *)(ulong)*puVar16;
          uVar17 = 0;
          if (*puVar16 == 0) goto LAB_02983638;
          uVar10 = (ulong)DAT_055dd8c8;
          if ((int)DAT_055dd8c8 < 0) {
            if (puVar16 != puVar14) {
              do {
                if (uVar10 != 0xffffffff) goto LAB_029835fc;
                lVar20 = 0xc;
                if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar16 + (lVar20 - (long)puVar14);
                if (lVar20 == 0) goto LAB_029835fc;
                uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
                DAT_055dd8c8 = 0xfffffffe;
                if (uVar10 == 0) goto LAB_029835fc;
                puVar18 = (uint *)(lVar20 + 4);
                while (puVar18[-1] != 0x947670d3) {
                  puVar18 = puVar18 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_029835fc;
                }
                uVar10 = (ulong)*puVar18;
                uVar19 = 0;
                if (*puVar18 != 0xffffffff) {
                  uVar19 = uVar10;
                }
                DAT_055dd8c8 = (uint)uVar19;
              } while ((int)DAT_055dd8c8 < 0);
              goto LAB_0298355c;
            }
LAB_029835fc:
            uVar17 = 0;
            uVar3 = *puVar16;
          }
          else {
            uVar19 = uVar10;
LAB_0298355c:
            uVar17 = 0;
            if ((undefined1 *)(uVar19 + (long)puVar16) != (undefined1 *)0x0) {
              uVar17 = *(undefined1 *)(uVar19 + (long)puVar16);
            }
            uVar3 = *puVar16;
          }
          if (uVar3 == 0) goto LAB_02983638;
          puVar14 = (uint *)(ulong)uVar3;
          uVar10 = DAT_055dd8c0 >> 0x20;
          if ((long)DAT_055dd8c0 < 0) {
            if (puVar16 == puVar14) goto LAB_02983638;
            do {
              if (uVar10 != 0xffffffff) goto LAB_02983638;
              lVar20 = 0xc;
              if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar16 + (lVar20 - (long)puVar14);
              if (lVar20 == 0) goto LAB_02983638;
              uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
              DAT_055dd8c0 = CONCAT44(0xfffffffe,(undefined4)DAT_055dd8c0);
              if (uVar10 == 0) goto LAB_02983638;
              puVar18 = (uint *)(lVar20 + 4);
              while (puVar18[-1] != 0x53d9c19f) {
                puVar18 = puVar18 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto LAB_02983638;
              }
              uVar10 = (ulong)*puVar18;
              uVar19 = 0;
              if (*puVar18 != 0xffffffff) {
                uVar19 = uVar10;
              }
              DAT_055dd8c0 = CONCAT44((int)uVar19,(undefined4)DAT_055dd8c0);
            } while ((int)uVar19 < 0);
          }
          else {
            uVar19 = uVar10;
          }
          bVar5 = false;
          if ((char *)(uVar19 + (long)puVar16) != (char *)0x0) {
            bVar5 = *(char *)(uVar19 + (long)puVar16) != '\0';
          }
        }
        if (*(int *)(param_1 + 7) < *(int *)((long)param_1 + 0x3c)) {
          puVar12 = (undefined8 *)param_1[5];
          if (puVar12 != (undefined8 *)0x0) {
            param_1[5] = *puVar12;
          }
          *(bool *)((long)puVar12 + 0x22) = bVar5;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *(undefined1 *)((long)puVar12 + 0x23) = uVar17;
          puVar12[5] = plVar22;
          *(ushort *)(puVar12 + 4) = uVar13;
          *puVar12 = &DAT_04a97410;
          puVar12[1] = 0;
          *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
          lVar20 = FUN_016c3b64(plVar22,*plVar22);
          *plVar22 = lVar20;
          *(undefined8 *)(lVar20 + 0x18) = 1;
        }
        else {
          for (lVar20 = *plVar22; lVar20 != 0; lVar20 = *(long *)(lVar20 + 8)) {
            while (*(ushort *)(lVar20 + 0x20) <= uVar13) {
              if (uVar13 <= *(ushort *)(lVar20 + 0x20)) {
                *(bool *)(lVar20 + 0x22) = bVar5;
                *(undefined1 *)(lVar20 + 0x23) = uVar17;
                goto LAB_02983440;
              }
              lVar20 = *(long *)(lVar20 + 0x10);
              if (lVar20 == 0) goto LAB_02983440;
            }
          }
        }
      }
    }
LAB_02983440:
    uVar21 = uVar21 + 1;
  } while (uVar21 != uVar23);
LAB_029837a8:
  FUN_02986730(param_1 + 1,&local_108);
  local_118 = 1;
  local_128 = PTR_DAT_04bb2120;
  uStack_120 = 0;
  puStack_140 = PTR_DAT_04bb2020 + 0x10;
  local_138 = PTR_DAT_04bb2120;
  uStack_f0 = SUB84(PTR_DAT_04bb2120,0);
  local_ec = (undefined4)((ulong)PTR_DAT_04bb2120 >> 0x20);
  local_110 = 0;
  local_148 = PTR_DAT_04bb3cd8 + 0x10;
  local_d0 = PTR_DAT_04bb2120;
  local_100 = &local_148;
  local_108 = (undefined *)((ulong)local_108 & 0xffffffffffff0000);
  local_e0 = "AmbientPlacement_Default";
  local_c0 = "SimpleObject";
  uStack_b8 = 0;
  puStack_130 = puStack_140;
  local_e8 = puStack_140;
  puStack_d8 = puStack_140;
  puStack_c8 = puStack_140;
  local_f8 = puStack_140;
  FUN_038387b8(param_1 + 8,&local_108);
  if ((*PTR_DAT_04bbde00 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04bbde00);
    if (iVar7 != 0) {
      FUN_016cb6ac(PTR_DAT_04bbddf8);
      __cxa_guard_release(PTR_DAT_04bbde00);
    }
  }
  if (0 < (int)*(uint *)PTR_DAT_04bbddf8) {
    uVar10 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bbddf8 + 8) + uVar10 * 4) == 0) goto LAB_02983868;
      uVar10 = uVar10 + 1;
    } while (*(uint *)PTR_DAT_04bbddf8 != uVar10);
  }
  uVar10 = 0;
LAB_02983868:
  *(int *)(param_1 + 0x12) = (int)uVar10;
  *(undefined4 *)((long)param_1 + 0x94) = 1;
  return 1;
}

