
undefined8
FUN_0068e610(long param_1,undefined4 *param_2,long *param_3,long param_4,long *param_5,
            undefined8 *param_6,undefined8 *param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  bool bVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  undefined8 *puVar21;
  ushort *puVar22;
  ulong uVar23;
  int iVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long local_c0;
  long *plStack_b8;
  long *local_a8;
  int local_a0;
  undefined *local_98;
  code *pcStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long lStack_68;
  
  plVar25 = param_5 + 7;
  lVar15 = *plVar25;
  *plVar25 = 0;
  param_5[8] = 0;
  local_70 = param_3;
  lStack_68 = param_4;
  if (lVar15 != 0) {
    (**(code **)(*(long *)param_5[9] + 0x18))();
  }
  param_5[9] = 0;
  local_98 = PTR_DAT_04bdf388;
  uVar26 = param_4 - (long)param_3;
  pcStack_90 = (code *)*param_6;
  local_88 = param_6[1];
  lStack_80 = param_6[2];
  local_78 = param_6[3];
  param_5[1] = (long)pcStack_90;
  param_5[2] = local_88;
  iVar24 = (int)(uVar26 >> 3);
  param_5[3] = lStack_80;
  param_5[4] = local_78;
  local_98 = local_98 + 0x10;
  plVar11 = (long *)(*pcStack_90)((long)(iVar24 << 4),0x10);
  lVar15 = (long)(uVar26 * 0x20000000) >> 0x20;
  local_a8 = plVar11;
  local_a0 = iVar24;
  if (iVar24 != 0) {
    uVar23 = (uVar26 & 0x7ffffffff) >> 3 & 3;
    plVar18 = plVar11;
    if (uVar23 != 0) {
      do {
        *plVar18 = 0;
        uVar23 = uVar23 - 1;
        *(undefined4 *)(plVar18 + 1) = 0;
        plVar18 = plVar18 + 2;
      } while (uVar23 != 0);
    }
    if (2 < (lVar15 - 1U & 0xfffffffffffffff)) {
      do {
        *plVar18 = 0;
        *(undefined4 *)(plVar18 + 1) = 0;
        plVar18[2] = 0;
        *(undefined4 *)(plVar18 + 3) = 0;
        plVar18[4] = 0;
        *(undefined4 *)(plVar18 + 5) = 0;
        plVar18[6] = 0;
        *(undefined4 *)(plVar18 + 7) = 0;
        plVar18 = plVar18 + 8;
      } while (plVar18 != plVar11 + (long)iVar24 * 2);
    }
    if (0 < iVar24) {
      uVar23 = uVar26 >> 3 & 0xffffffff;
      plVar28 = param_3;
      plVar18 = plVar11;
      do {
        uVar5 = *(ushort *)(*plVar28 + 0x18);
        lVar12 = (**(code **)(local_98 + 0x10))(&local_98,uVar5 + 0x3f >> 3 & 0x3ff8,0x10);
        *plVar18 = lVar12;
        *(uint *)(plVar18 + 1) = (uint)uVar5;
        FUN_00690e74(plVar18);
        plVar18 = plVar18 + 2;
        uVar23 = uVar23 - 1;
        plVar28 = plVar28 + 1;
      } while (uVar23 != 0);
    }
  }
  uVar23 = FUN_0068edd0(param_2,&local_70,&local_a8,*(undefined4 *)(param_1 + 0x10),
                        *(undefined4 *)(param_1 + 0x14));
  if ((uVar23 & 1) == 0) {
    if (plVar11 != (long *)0x0) {
      if (iVar24 != 0) {
        lVar15 = lVar15 << 4;
        plVar25 = plVar11;
        do {
          if (*plVar25 != 0) {
            (**(code **)(local_98 + 0x18))(&local_98);
          }
          plVar25 = plVar25 + 2;
          lVar15 = lVar15 + -0x10;
        } while (lVar15 != 0);
      }
      (**(code **)(local_98 + 0x18))(&local_98,plVar11);
    }
LAB_0068eda4:
    uVar14 = 0;
  }
  else {
    if ((int)param_5[6] != 0) {
      lVar27 = (long)(int)param_5[6] * 0x30;
      lVar12 = param_5[5] + 8;
      do {
        FUN_01184030(lVar12);
        lVar27 = lVar27 + -0x30;
        lVar12 = lVar12 + 0x30;
      } while (lVar27 != 0);
    }
    param_5[5] = (long)param_7;
    iVar9 = param_8 / 0x30;
    *(int *)(param_5 + 6) = iVar9;
    if (0x5e < param_8 + 0x2fU) {
      uVar23 = (long)iVar9 * 0x30 - 0x30;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar23;
      puVar13 = param_7;
      if ((SUB164(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 1) == 0) {
        puVar13 = param_7 + 6;
        *param_7 = 0;
        *(undefined4 *)(param_7 + 1) = 0;
        *(undefined4 *)(param_7 + 4) = 0;
        *(undefined1 *)(param_7 + 5) = 0;
        param_7[2] = 0;
        param_7[3] = 0;
      }
      if (0x2f < uVar23) {
        do {
          *puVar13 = 0;
          *(undefined4 *)(puVar13 + 1) = 0;
          *(undefined4 *)(puVar13 + 4) = 0;
          *(undefined1 *)(puVar13 + 5) = 0;
          puVar13[6] = 0;
          *(undefined4 *)(puVar13 + 7) = 0;
          *(undefined4 *)(puVar13 + 10) = 0;
          *(undefined1 *)(puVar13 + 0xb) = 0;
          puVar13[2] = 0;
          puVar13[3] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          puVar13 = puVar13 + 0xc;
        } while (puVar13 != param_7 + (long)iVar9 * 6);
      }
    }
    if (0 < iVar24) {
      lVar12 = 0;
      plVar28 = plVar11;
      plVar18 = param_3;
      do {
        local_c0 = *plVar18;
        plStack_b8 = plVar28;
        uVar23 = FUN_0068ffe0(&local_c0,param_5[5] + lVar12,param_5,param_3,param_4);
        if ((uVar23 & 1) == 0) {
          if (plVar11 != (long *)0x0) {
            lVar12 = 0;
            do {
              if (*(long *)((long)plVar11 + lVar12) != 0) {
                (**(code **)(local_98 + 0x18))(&local_98);
              }
              lVar12 = lVar12 + 0x10;
            } while (lVar15 * 0x10 != lVar12);
            (**(code **)(local_98 + 0x18))(&local_98,plVar11);
          }
          if ((int)param_5[6] != 0) {
            lVar15 = param_5[5];
            lVar12 = lVar15 + (long)(int)param_5[6] * 0x30;
            do {
              lVar27 = *(long *)(lVar15 + 0x18);
              *(undefined4 *)(lVar15 + 8) = 0;
              if (lVar27 == 0) {
                lVar27 = 0;
                iVar24 = *(int *)(lVar15 + 0x20);
                *(undefined8 *)(lVar15 + 0x10) = 0;
              }
              else {
                if (*(int *)(lVar15 + 0x20) != 0) {
                  plVar25 = (long *)(lVar27 + 0x18);
                  lVar29 = (long)*(int *)(lVar15 + 0x20) * 0x48;
                  do {
                    lVar17 = *plVar25;
                    *plVar25 = 0;
                    plVar25[1] = 0;
                    if (lVar17 != 0) {
                      (**(code **)(*(long *)plVar25[2] + 0x18))();
                    }
                    lVar17 = plVar25[-3];
                    plVar25[2] = 0;
                    *(undefined4 *)(plVar25 + 1) = 0;
                    plVar25[-3] = 0;
                    plVar25[-2] = 0;
                    if (lVar17 != 0) {
                      (**(code **)(*(long *)plVar25[-1] + 0x18))();
                    }
                    plVar25[-1] = 0;
                    lVar29 = lVar29 + -0x48;
                    *(undefined4 *)(plVar25 + -2) = 0;
                    plVar25 = plVar25 + 9;
                  } while (lVar29 != 0);
                }
                *(undefined8 *)(lVar15 + 0x18) = 0;
                *(undefined4 *)(lVar15 + 0x20) = 0;
                (**(code **)(**(long **)(lVar15 + 0x10) + 0x18))(*(long **)(lVar15 + 0x10),lVar27);
                lVar27 = *(long *)(lVar15 + 0x18);
                iVar24 = *(int *)(lVar15 + 0x20);
                *(undefined8 *)(lVar15 + 0x10) = 0;
              }
              if (iVar24 != 0) {
                plVar25 = (long *)(lVar27 + 0x18);
                lVar27 = (long)iVar24 * 0x48;
                do {
                  lVar29 = *plVar25;
                  *plVar25 = 0;
                  plVar25[1] = 0;
                  if (lVar29 != 0) {
                    (**(code **)(*(long *)plVar25[2] + 0x18))();
                  }
                  lVar29 = plVar25[-3];
                  plVar25[2] = 0;
                  *(undefined4 *)(plVar25 + 1) = 0;
                  plVar25[-3] = 0;
                  plVar25[-2] = 0;
                  if (lVar29 != 0) {
                    (**(code **)(*(long *)plVar25[-1] + 0x18))();
                  }
                  plVar25[-1] = 0;
                  lVar27 = lVar27 + -0x48;
                  *(undefined4 *)(plVar25 + -2) = 0;
                  plVar25 = plVar25 + 9;
                } while (lVar27 != 0);
              }
              lVar15 = lVar15 + 0x30;
            } while (lVar15 != lVar12);
          }
          param_5[5] = 0;
          *(undefined4 *)(param_5 + 6) = 0;
          if (param_2 != (undefined4 *)0x0) {
            puVar20 = *(ushort **)(param_3[*(int *)(param_1 + 0x10)] + 0x20);
            uVar5 = *puVar20;
            puVar22 = *(ushort **)
                       (*(long *)(param_3[*(int *)(param_1 + 0x10)] + 0x38) +
                        (long)*(int *)(param_1 + 0x14) * 0x10 + 0x20);
            uVar6 = *puVar22;
            *param_2 = 1;
            *(ushort **)(param_2 + 2) = puVar20 + 1;
            param_2[4] = (uint)uVar5;
            *(ushort **)(param_2 + 6) = puVar22 + 1;
            param_2[8] = (uint)uVar6;
          }
          goto LAB_0068eda4;
        }
        lVar12 = lVar12 + 0x30;
        plVar18 = plVar18 + 1;
        plVar28 = plVar28 + 2;
      } while (((uVar26 >> 3 & 0xffffffff) + (uVar26 >> 3 & 0xffffffff) * 2) * 0x10 != lVar12);
    }
    lVar12 = param_5[7];
    *(undefined4 *)(param_5 + 0x11) = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    *plVar25 = 0;
    param_5[8] = 0;
    *(undefined4 *)((long)param_5 + 0x8c) = uVar4;
    if (lVar12 != 0) {
      (**(code **)(*(long *)param_5[9] + 0x18))();
    }
    param_5[9] = (long)param_5;
    puVar13 = (undefined8 *)(**(code **)(*param_5 + 0x10))(param_5,0x200,0x10);
    puVar16 = (undefined8 *)param_5[7];
    uVar7 = *(uint *)(param_5 + 8);
    if (uVar7 != 0) {
      puVar19 = puVar16;
      puVar21 = puVar13;
      if ((uVar7 & 1) != 0) {
        uVar2 = puVar16[1];
        uVar14 = puVar16[2];
        uVar3 = puVar16[3];
        *puVar13 = *puVar16;
        puVar13[1] = uVar2;
        puVar19 = puVar16 + 4;
        puVar21 = puVar13 + 4;
        puVar13[2] = uVar14;
        puVar13[3] = uVar3;
      }
      if (((long)(int)uVar7 - 1U & 0x7ffffffffffffff) != 0) {
        do {
          uVar14 = *puVar19;
          uVar2 = puVar19[1];
          uVar3 = puVar19[3];
          puVar21[2] = puVar19[2];
          puVar21[3] = uVar3;
          *puVar21 = uVar14;
          puVar21[1] = uVar2;
          uVar14 = puVar19[4];
          uVar2 = puVar19[5];
          puVar1 = puVar19 + 6;
          uVar3 = puVar19[7];
          puVar19 = puVar19 + 8;
          puVar21[6] = *puVar1;
          puVar21[7] = uVar3;
          puVar21[4] = uVar14;
          puVar21[5] = uVar2;
          puVar21 = puVar21 + 8;
        } while (puVar19 != puVar16 + (long)(int)uVar7 * 4);
      }
    }
    param_5[7] = (long)puVar13;
    *(undefined4 *)((long)param_5 + 0x44) = 0x10;
    if ((puVar16 != (undefined8 *)0x0) &&
       ((**(code **)(*(long *)param_5[9] + 0x18))(), *(int *)((long)param_5 + 0x44) < 0x10)) {
      puVar13 = (undefined8 *)
                (**(code **)(*(long *)param_5[9] + 0x10))((long *)param_5[9],0x200,0x10);
      puVar16 = (undefined8 *)param_5[7];
      uVar7 = *(uint *)(param_5 + 8);
      if (uVar7 != 0) {
        puVar19 = puVar16;
        puVar21 = puVar13;
        if ((uVar7 & 1) != 0) {
          uVar2 = puVar16[1];
          uVar14 = puVar16[2];
          uVar3 = puVar16[3];
          *puVar13 = *puVar16;
          puVar13[1] = uVar2;
          puVar19 = puVar16 + 4;
          puVar21 = puVar13 + 4;
          puVar13[2] = uVar14;
          puVar13[3] = uVar3;
        }
        if (((long)(int)uVar7 - 1U & 0x7ffffffffffffff) != 0) {
          do {
            uVar14 = *puVar19;
            uVar2 = puVar19[1];
            uVar3 = puVar19[3];
            puVar21[2] = puVar19[2];
            puVar21[3] = uVar3;
            *puVar21 = uVar14;
            puVar21[1] = uVar2;
            uVar14 = puVar19[4];
            uVar2 = puVar19[5];
            puVar1 = puVar19 + 6;
            uVar3 = puVar19[7];
            puVar19 = puVar19 + 8;
            puVar21[6] = *puVar1;
            puVar21[7] = uVar3;
            puVar21[4] = uVar14;
            puVar21[5] = uVar2;
            puVar21 = puVar21 + 8;
          } while (puVar19 != puVar16 + (long)(int)uVar7 * 4);
        }
      }
      param_5[7] = (long)puVar13;
      *(undefined4 *)((long)param_5 + 0x44) = 0x10;
      if (puVar16 != (undefined8 *)0x0) {
        (**(code **)(*(long *)param_5[9] + 0x18))();
      }
    }
    iVar9 = (int)param_5[8];
    if (iVar9 < 0x10) {
      lVar27 = (long)iVar9 + -0x10;
      lVar12 = *plVar25 + (long)iVar9 * 0x20 + 0x1b;
      do {
        *(undefined4 *)(lVar12 + -0xb) = 0xffffffff;
        bVar10 = lVar27 != -1;
        lVar27 = lVar27 + 1;
        *(undefined8 *)(lVar12 + -0x1b) = 0;
        *(undefined8 *)(lVar12 + -7) = 0xffffffffffff;
        *(undefined8 *)(lVar12 + -0x13) = 0;
        lVar12 = lVar12 + 0x20;
      } while (bVar10);
    }
    *(undefined4 *)(param_5 + 8) = 0x10;
    FUN_0068d2d0(param_5);
    if (plVar11 != (long *)0x0) {
      if (iVar24 != 0) {
        lVar15 = lVar15 << 4;
        plVar25 = plVar11;
        do {
          if (*plVar25 != 0) {
            (**(code **)(local_98 + 0x18))(&local_98);
          }
          plVar25 = plVar25 + 2;
          lVar15 = lVar15 + -0x10;
        } while (lVar15 != 0);
      }
      (**(code **)(local_98 + 0x18))(&local_98,plVar11);
    }
    if (param_2 == (undefined4 *)0x0) {
      uVar14 = 1;
    }
    else {
      uVar14 = 1;
      *param_2 = 0;
      *(undefined8 *)(param_2 + 2) = 0;
      param_2[4] = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      param_2[8] = 0;
    }
  }
  return uVar14;
}

