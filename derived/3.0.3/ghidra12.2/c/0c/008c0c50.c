
undefined8 FUN_008c0c50(long *param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  void *pvVar8;
  uint *puVar9;
  char cVar10;
  undefined *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  uint uStack_16c;
  undefined4 local_168;
  float fStack_164;
  float local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined1 local_6d;
  
  plVar22 = param_1 + 0x5ffe;
  if (*(char *)((long)param_1 + 0x37fb2) != '\0') goto LAB_008c0c88;
  uVar14 = FUN_008a8310();
  puVar11 = PTR_DAT_04bb21f8;
  if ((int)uVar14 != 0) {
    return uVar14;
  }
  local_6d = 0;
  plVar4 = param_1 + 0x4c6b;
  local_170 = 0x100;
  plVar5 = param_1 + 0x45e6;
  plVar6 = param_1 + 0x8a;
  uStack_16c = uStack_16c & 0xffffff00;
  puVar7 = PTR_DAT_04bb21f8 + 0x10;
  local_180 = (undefined **)puVar7;
  local_178 = &uStack_16c;
  uVar13 = (**(code **)(param_1[0x8a] + 0xf0))(plVar6,&local_180,1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*plVar6 + 0x108))(plVar6,&local_180);
  }
  local_6d = 0;
  plVar6 = param_1 + 22999;
  local_170 = 0x100;
  uStack_16c = uStack_16c & 0xffffff00;
  local_180 = (undefined **)puVar7;
  local_178 = &uStack_16c;
  uVar13 = (**(code **)(*plVar5 + 0xf0))(plVar5,&local_180,1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*plVar5 + 0x108))(plVar5,&local_180);
  }
  local_6d = 0;
  local_170 = 0x100;
  uStack_16c = uStack_16c & 0xffffff00;
  local_180 = (undefined **)(puVar11 + 0x10);
  local_178 = &uStack_16c;
  uVar13 = (**(code **)(*plVar4 + 0xf0))(plVar4,&local_180,1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*plVar4 + 0x108))(plVar4,&local_180);
  }
  local_6d = 0;
  local_170 = 0x100;
  uStack_16c = uStack_16c & 0xffffff00;
  local_180 = (undefined **)(puVar11 + 0x10);
  local_178 = &uStack_16c;
  uVar13 = (**(code **)(*plVar6 + 0xf0))(plVar6,&local_180,1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*plVar6 + 0x108))(plVar6,&local_180);
  }
  local_6d = 0;
  local_170 = 0x100;
  uStack_16c = uStack_16c & 0xffffff00;
  local_180 = (undefined **)(puVar11 + 0x10);
  local_178 = &uStack_16c;
  uVar13 = (**(code **)(*plVar22 + 0xf0))(plVar22,&local_180,1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*plVar22 + 0x108))(plVar22,&local_180);
  }
  plVar22 = (long *)param_1[0x60bc];
  local_170 = 0x100;
  local_6d = 0;
  uStack_16c = uStack_16c & 0xffffff00;
  local_180 = (undefined **)(puVar11 + 0x10);
  local_178 = &uStack_16c;
  uVar13 = (**(code **)(*plVar22 + 0xf0))(plVar22,&local_180,1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*plVar22 + 0x108))(plVar22,&local_180);
  }
  lVar23 = DAT_05ae7600;
  lVar24 = param_1[0x60bc];
  uVar17 = *(uint *)(lVar24 + 0x138);
  uVar13 = (ulong)uVar17;
  if (uVar17 != 0) {
    if ((int)uVar17 < 1) {
      uVar17 = *(uint *)(param_1 + 0x60b6);
      *(undefined1 *)(param_1 + 0x60ba) = 1;
    }
    else {
      if (DAT_05ae7600 == 0) {
        pvVar16 = malloc(uVar13 * 0x28);
LAB_008c15a4:
        if (pvVar16 != (void *)0x0) {
          uVar21 = uVar17 - 1;
          param_1[0x60b8] = (long)pvVar16;
          if (1 < uVar17) {
            if (uVar21 == 1) {
              uVar18 = 0;
            }
            else {
              uVar18 = 0;
              plVar22 = (long *)((long)pvVar16 + 0x20);
              do {
                uVar18 = uVar18 + 2;
                plVar22[-4] = (long)plVar22;
                *plVar22 = (long)(plVar22 + 4);
                plVar22 = plVar22 + 8;
              } while (((ulong)uVar21 & 0xfffffffe) != uVar18);
            }
            if ((uVar21 & 1) != 0) {
              plVar22 = (long *)((long)pvVar16 + uVar18 * 0x20);
              *plVar22 = (long)(plVar22 + 4);
            }
          }
          *(undefined8 *)((long)pvVar16 + (long)(int)(uVar21 * 4) * 8) = 0;
          pvVar8 = (void *)((long)pvVar16 + uVar13 * 0x20);
          param_1[0x60b9] = (long)pvVar16;
          if (pvVar8 != (void *)0x0) {
            param_1[0x60b7] = (long)pvVar8;
            *(undefined4 *)(param_1 + 0x60b6) = 0;
            *(uint *)((long)param_1 + 0x305b4) = uVar17;
          }
        }
      }
      else {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar22 = (long *)(lVar23 + 8);
        if (lVar15 != 0) {
          plVar22 = (long *)(lVar15 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 != (long *)0x0) {
          pvVar16 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar13 * 0x28,8);
          goto LAB_008c15a4;
        }
      }
      uVar18 = 0;
      *(undefined1 *)(param_1 + 0x60ba) = 1;
      do {
        if (uVar18 < *(uint *)(lVar24 + 0x118)) {
          lVar23 = *(long *)(*(long *)(lVar24 + 0x120) + uVar18 * 8);
        }
        else {
          lVar23 = 0;
        }
        plVar22 = (long *)(**(code **)(*(long *)(lVar23 + 0x590) + 0xf0))(lVar23 + 0x590);
        (**(code **)(*plVar22 + 0x18))();
        uVar17 = *(uint *)(param_1 + 0x60b6);
        if ((int)uVar17 < *(int *)((long)param_1 + 0x305b4)) {
          local_178 = (uint *)plVar22[1];
          plVar22 = (long *)param_1[0x60b8];
          if (plVar22 != (long *)0x0) {
            param_1[0x60b8] = *plVar22;
          }
          local_180 = &PTR_LAB_048f9770;
          *plVar22 = lVar23;
          plVar22[1] = (long)&PTR_LAB_048f9770;
          plVar22[2] = (long)local_178;
          (*(code *)PTR_FUN_048f9788)(&local_180);
          uVar12 = FUN_006bd550(local_178,0);
          *(undefined4 *)(plVar22 + 3) = uVar12;
          uVar17 = *(uint *)(param_1 + 0x60b6);
          if ((int)uVar17 < *(int *)((long)param_1 + 0x305b4)) {
            *(long **)(param_1[0x60b7] + (long)(int)uVar17 * 8) = plVar22;
            uVar17 = (int)param_1[0x60b6] + 1;
            *(uint *)(param_1 + 0x60b6) = uVar17;
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar13 != uVar18);
    }
    if (1 < (int)uVar17) {
      plVar22 = (long *)param_1[0x60b7];
      uVar13 = (ulong)(uVar17 >> 1);
      do {
        uVar21 = (uint)uVar13 * 2;
        lVar23 = plVar22[uVar13 - 1 & 0xffffffff];
        if ((int)uVar17 < (int)uVar21) {
          uVar19 = (uint)uVar13;
        }
        else {
          uVar18 = uVar13 & 0xffffffff;
          do {
            if ((int)uVar21 < (int)uVar17) {
              uVar20 = uVar21 | *(uint *)((plVar22 + (int)uVar21)[-1] + 0x18) <
                                *(uint *)(plVar22[(int)uVar21] + 0x18);
            }
            else {
              uVar20 = uVar21;
            }
            uVar19 = (uint)uVar18;
            if (*(uint *)(plVar22[(int)(uVar20 - 1)] + 0x18) <= *(uint *)(lVar23 + 0x18)) break;
            plVar22[(int)((uint)uVar18 - 1)] = plVar22[(int)(uVar20 - 1)];
            uVar21 = uVar20 * 2;
            uVar18 = (ulong)uVar20;
            uVar19 = uVar20;
          } while ((int)uVar21 <= (int)uVar17);
        }
        plVar22[(int)(uVar19 - 1)] = lVar23;
        bVar1 = 1 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar1);
      uVar18 = (ulong)uVar17 - 1;
      uVar13 = uVar18 & 0xffffffff;
      lVar23 = plVar22[uVar13];
      plVar22[uVar13] = *plVar22;
      uVar13 = (ulong)uVar17;
      if (2 < uVar17) {
        do {
          uVar17 = 2;
          uVar21 = 1;
          do {
            if ((int)uVar17 < (int)uVar18) {
              uVar19 = uVar17 | *(uint *)((plVar22 + (int)uVar17)[-1] + 0x18) <
                                *(uint *)(plVar22[(int)uVar17] + 0x18);
            }
            else {
              uVar19 = uVar17;
            }
            lVar24 = (long)(int)(uVar21 - 1);
            if (*(uint *)(plVar22[(int)(uVar19 - 1)] + 0x18) <= *(uint *)(lVar23 + 0x18))
            goto LAB_008c1140;
            plVar22[lVar24] = plVar22[(int)(uVar19 - 1)];
            uVar17 = uVar19 << 1;
            uVar21 = uVar19;
          } while ((long)(int)uVar17 < (long)uVar13);
          lVar24 = (long)(int)(uVar19 - 1);
LAB_008c1140:
          plVar22[lVar24] = lVar23;
          uVar13 = uVar18 - 1 & 0xffffffff;
          lVar23 = plVar22[uVar13];
          plVar22[uVar13] = *plVar22;
          bVar1 = 2 < uVar18;
          uVar13 = uVar18;
          uVar18 = uVar18 - 1;
        } while (bVar1);
      }
      *plVar22 = lVar23;
    }
  }
  plVar22 = (long *)param_1[0x60c4];
  local_170 = 0x100;
  local_178 = &uStack_16c;
  local_180 = (undefined **)(puVar11 + 0x10);
  local_6d = 0;
  uStack_16c = uStack_16c & 0xffffff00;
  uVar13 = (**(code **)(*plVar22 + 0xf0))(plVar22,&local_180,1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*plVar22 + 0x108))(plVar22,&local_180);
  }
  lVar23 = DAT_05ae7600;
  lVar24 = param_1[0x60c4];
  uVar17 = *(uint *)(lVar24 + 0x138);
  uVar13 = (ulong)uVar17;
  if (uVar17 != 0) {
    if ((int)uVar17 < 1) {
      uVar17 = *(uint *)(param_1 + 0x60be);
      *(undefined1 *)(param_1 + 0x60c2) = 1;
    }
    else {
      if (DAT_05ae7600 == 0) {
        pvVar16 = malloc(uVar13 * 0x28);
LAB_008c15d0:
        if (pvVar16 != (void *)0x0) {
          uVar21 = uVar17 - 1;
          param_1[0x60c0] = (long)pvVar16;
          if (1 < uVar17) {
            if (uVar21 == 1) {
              uVar18 = 0;
            }
            else {
              uVar18 = 0;
              plVar22 = (long *)((long)pvVar16 + 0x20);
              do {
                uVar18 = uVar18 + 2;
                plVar22[-4] = (long)plVar22;
                *plVar22 = (long)(plVar22 + 4);
                plVar22 = plVar22 + 8;
              } while (((ulong)uVar21 & 0xfffffffe) != uVar18);
            }
            if ((uVar21 & 1) != 0) {
              plVar22 = (long *)((long)pvVar16 + uVar18 * 0x20);
              *plVar22 = (long)(plVar22 + 4);
            }
          }
          *(undefined8 *)((long)pvVar16 + (long)(int)(uVar21 * 4) * 8) = 0;
          pvVar8 = (void *)((long)pvVar16 + uVar13 * 0x20);
          param_1[0x60c1] = (long)pvVar16;
          if (pvVar8 != (void *)0x0) {
            param_1[0x60bf] = (long)pvVar8;
            *(undefined4 *)(param_1 + 0x60be) = 0;
            *(uint *)((long)param_1 + 0x305f4) = uVar17;
          }
        }
      }
      else {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar22 = (long *)(lVar23 + 8);
        if (lVar15 != 0) {
          plVar22 = (long *)(lVar15 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 != (long *)0x0) {
          pvVar16 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar13 * 0x28,8);
          goto LAB_008c15d0;
        }
      }
      uVar18 = 0;
      *(undefined1 *)(param_1 + 0x60c2) = 1;
      do {
        if (uVar18 < *(uint *)(lVar24 + 0x118)) {
          lVar23 = *(long *)(*(long *)(lVar24 + 0x120) + uVar18 * 8);
        }
        else {
          lVar23 = 0;
        }
        plVar22 = (long *)(**(code **)(*(long *)(lVar23 + 0x128) + 0xf0))(lVar23 + 0x128);
        (**(code **)(*plVar22 + 0x18))();
        uVar17 = *(uint *)(param_1 + 0x60be);
        if ((int)uVar17 < *(int *)((long)param_1 + 0x305f4)) {
          local_178 = (uint *)plVar22[1];
          plVar22 = (long *)param_1[0x60c0];
          if (plVar22 != (long *)0x0) {
            param_1[0x60c0] = *plVar22;
          }
          local_180 = &PTR_LAB_048f9770;
          *plVar22 = lVar23;
          plVar22[1] = (long)&PTR_LAB_048f9770;
          plVar22[2] = (long)local_178;
          (*(code *)PTR_FUN_048f9788)(&local_180);
          uVar12 = FUN_006bd550(local_178,0);
          *(undefined4 *)(plVar22 + 3) = uVar12;
          uVar17 = *(uint *)(param_1 + 0x60be);
          if ((int)uVar17 < *(int *)((long)param_1 + 0x305f4)) {
            *(long **)(param_1[0x60bf] + (long)(int)uVar17 * 8) = plVar22;
            uVar17 = (int)param_1[0x60be] + 1;
            *(uint *)(param_1 + 0x60be) = uVar17;
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar13 != uVar18);
    }
    if (1 < (int)uVar17) {
      plVar22 = (long *)param_1[0x60bf];
      uVar13 = (ulong)(uVar17 >> 1);
      do {
        uVar21 = (uint)uVar13 * 2;
        lVar23 = plVar22[uVar13 - 1 & 0xffffffff];
        if ((int)uVar17 < (int)uVar21) {
          uVar19 = (uint)uVar13;
        }
        else {
          uVar18 = uVar13 & 0xffffffff;
          do {
            if ((int)uVar21 < (int)uVar17) {
              uVar20 = uVar21 | *(uint *)((plVar22 + (int)uVar21)[-1] + 0x18) <
                                *(uint *)(plVar22[(int)uVar21] + 0x18);
            }
            else {
              uVar20 = uVar21;
            }
            uVar19 = (uint)uVar18;
            if (*(uint *)(plVar22[(int)(uVar20 - 1)] + 0x18) <= *(uint *)(lVar23 + 0x18)) break;
            plVar22[(int)((uint)uVar18 - 1)] = plVar22[(int)(uVar20 - 1)];
            uVar21 = uVar20 * 2;
            uVar18 = (ulong)uVar20;
            uVar19 = uVar20;
          } while ((int)uVar21 <= (int)uVar17);
        }
        plVar22[(int)(uVar19 - 1)] = lVar23;
        bVar1 = 1 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar1);
      uVar18 = (ulong)uVar17 - 1;
      uVar13 = uVar18 & 0xffffffff;
      lVar23 = plVar22[uVar13];
      plVar22[uVar13] = *plVar22;
      uVar13 = (ulong)uVar17;
      if (2 < uVar17) {
        do {
          uVar17 = 2;
          uVar21 = 1;
          do {
            if ((int)uVar17 < (int)uVar18) {
              uVar19 = uVar17 | *(uint *)((plVar22 + (int)uVar17)[-1] + 0x18) <
                                *(uint *)(plVar22[(int)uVar17] + 0x18);
            }
            else {
              uVar19 = uVar17;
            }
            lVar24 = (long)(int)(uVar21 - 1);
            if (*(uint *)(plVar22[(int)(uVar19 - 1)] + 0x18) <= *(uint *)(lVar23 + 0x18))
            goto LAB_008c1344;
            plVar22[lVar24] = plVar22[(int)(uVar19 - 1)];
            uVar17 = uVar19 << 1;
            uVar21 = uVar19;
          } while ((long)(int)uVar17 < (long)uVar13);
          lVar24 = (long)(int)(uVar19 - 1);
LAB_008c1344:
          plVar22[lVar24] = lVar23;
          uVar13 = uVar18 - 1 & 0xffffffff;
          lVar23 = plVar22[uVar13];
          plVar22[uVar13] = *plVar22;
          bVar1 = 2 < uVar18;
          uVar13 = uVar18;
          uVar18 = uVar18 - 1;
        } while (bVar1);
      }
      *plVar22 = lVar23;
    }
  }
  *(undefined8 *)((long)param_1 + 0x30854) = 0;
  *(undefined4 *)((long)param_1 + 0x3085c) = 0;
  cVar10 = *(char *)param_1[0x60c6];
  if (cVar10 == '\0') {
    local_180 = (undefined **)((ulong)local_180 & 0xffffffff00000000);
    FUN_008c0a74(&local_180,*(undefined8 *)param_1[0xaa]);
    *(float *)((long)param_1 + 0x308ac) = fStack_164;
    param_1[0x6114] = CONCAT44(uStack_16c,local_170);
    *(uint *)(param_1 + 0x6112) = (uint)local_180;
    *(uint *)((long)param_1 + 0x30894) = local_180._4_4_;
    *(undefined4 *)(param_1 + 0x6113) = (undefined4)local_178;
    *(undefined4 *)(param_1 + 0x6115) = local_168;
    *(undefined8 *)((long)param_1 + 0x308c4) = local_14c;
    *(undefined4 *)((long)param_1 + 0x308b4) = uStack_15c;
    *(float *)(param_1 + 0x6116) = local_160;
    *(undefined4 *)((long)param_1 + 0x308bc) = uStack_154;
    *(undefined4 *)(param_1 + 0x6117) = local_158;
    *(undefined4 *)(param_1 + 0x6118) = local_150;
    *(float *)((long)param_1 + 0x3089c) = local_178._4_4_;
    *(undefined4 *)((long)param_1 + 0x308cc) = local_144;
    fVar25 = local_178._4_4_;
    uVar17 = (uint)local_180;
    uVar21 = local_180._4_4_;
    uVar12 = (undefined4)local_178;
  }
  else {
    plVar22 = param_1 + 0x60c5;
    local_180 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_178 = (uint *)&DAT_0407ebb1;
    lVar23 = FUN_008c1870(param_1,plVar22);
    if (lVar23 == 0) {
      if (*(char *)param_1[0x60cd] != '\0') {
        plVar22 = param_1 + 0x60cc;
        lVar23 = FUN_008c1870(param_1,plVar22);
        if (lVar23 != 0) goto LAB_008c1314;
      }
    }
    else {
LAB_008c1314:
      local_178 = (uint *)plVar22[1];
    }
    FUN_008bf770(param_1,&local_180,PTR_PTR_04bb2238);
    fStack_164 = *(float *)((long)param_1 + 0x308ac);
    local_160 = *(float *)(param_1 + 0x6116);
    fVar25 = *(float *)((long)param_1 + 0x3089c);
    uVar17 = *(uint *)(param_1 + 0x6112);
    uVar21 = *(uint *)((long)param_1 + 0x30894);
    uVar12 = (int)param_1[0x6113];
  }
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar17 >> 0x18) * 0x10);
  pfVar3 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar21 >> 0x18) * 0x10);
  fVar27 = pfVar2[2];
  fVar28 = pfVar2[3];
  fVar31 = *pfVar2;
  fVar33 = pfVar2[1];
  fVar29 = *pfVar3;
  fVar30 = pfVar3[1];
  fVar34 = pfVar3[2];
  fVar35 = pfVar3[3];
  *(undefined4 *)((long)param_1 + 0x2d4) = uVar12;
  fVar26 = *(float *)((long)param_1 + 0x2ac);
  fVar32 = fVar25 * (fVar27 + fVar28 * (float)(uVar17 & 0xffffff) * 5.9604645e-08);
  fVar28 = *(float *)(param_1 + 0x56);
  fVar27 = 1.0;
  if (1.0 <= fStack_164) {
    fVar27 = fStack_164;
  }
  *(float *)(param_1 + 0x5a) = fVar27;
  *(float *)((long)param_1 + 0x294) =
       fVar25 * (fVar31 + fVar33 * (float)(uVar17 & 0xffffff) * 5.9604645e-08) + fVar26;
  *(float *)(param_1 + 0x52) =
       fVar32 * (fVar29 + fVar30 * (float)(uVar21 & 0xffffff) * 5.9604645e-08) +
       *(float *)(param_1 + 0x55);
  *(float *)(param_1 + 0x53) =
       fVar32 * (fVar34 + fVar35 * (float)(uVar21 & 0xffffff) * 5.9604645e-08) + fVar28;
  *(float *)((long)param_1 + 0x2cc) = local_160 * 0.017453292;
  puVar11 = PTR_DAT_04bb39d0;
  if (cVar10 != '\0') {
    fVar25 = *(float *)((long)param_1 + 0x30924);
    fVar27 = *(float *)(param_1 + 0x6125);
    *(float *)PTR_DAT_04bb39d0 = *(float *)(param_1 + 0x55) + *(float *)(param_1 + 0x6124);
    *(float *)(puVar11 + 4) = fVar26 + fVar25;
    *(float *)(puVar11 + 8) = fVar28 + fVar27;
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  *(char *)((long)param_1 + 0x37fb2) = '\x01';
LAB_008c0c88:
  if (DAT_04c487d4 != -1) {
    local_180 = (undefined **)CONCAT44(local_180._4_4_,0xe);
    puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar9 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar9 >> 0xe & 1) != 0) {
      uVar13 = FUN_020b5408(DAT_053e0208);
      if ((uVar13 & 1) == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x60f6) = *(undefined4 *)(DAT_053e0208 + 0xcf0);
      return 0;
    }
  }
  return 0;
}

