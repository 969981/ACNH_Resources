
void FUN_03918b10(long param_1,long param_2,long *param_3,long *param_4,long param_5,uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  short sVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined *local_298;
  undefined8 local_290;
  undefined8 local_288;
  uint local_280;
  undefined8 local_27c;
  undefined1 auStack_270 [4];
  uint local_26c;
  undefined1 local_20b;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined7 uStack_168;
  undefined1 local_161;
  undefined7 uStack_160;
  undefined1 auStack_158 [64];
  undefined8 local_118;
  undefined4 local_110;
  uint local_d4;
  short local_ce;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  uint local_94 [5];
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return;
  }
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x70) {
    lVar12 = 0;
    if ((*(uint *)(param_1 + 0x450) >> 0x10 & 1) != 0) goto LAB_03918b80;
LAB_03918b98:
    uVar42 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x378);
    if ((*(uint *)(param_1 + 0x450) >> 0x10 & 1) == 0) goto LAB_03918b98;
LAB_03918b80:
    uVar42 = (uint)*(ushort *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x30);
  }
  iVar3 = *(int *)(param_1 + 0x424) + uVar42;
  FUN_0390cee0(&local_1a8);
  FUN_038e4cec(auStack_270);
  local_288 = 0xff7fffffff7fffff;
  local_298 = PTR_DAT_04bd0f08 + 0x10;
  local_290 = 0x7f7fffff7f7fffff;
  local_280 = *(uint *)PTR_DAT_04bd0ea8;
  local_27c = 0x3f80000000000000;
  if (local_280 < 6) {
    if ((1 << (ulong)(local_280 & 0x1f) & 0x39U) == 0) {
      fVar22 = *(float *)(param_3 + 1);
      fVar19 = *(float *)((long)param_3 + 0xc);
    }
    else {
      fVar19 = *(float *)(param_3 + 1);
      fVar22 = *(float *)((long)param_3 + 0xc);
    }
    fVar23 = fVar19;
    fVar21 = 0.0;
    if (fVar19 <= 0.0) {
      fVar23 = 0.0;
      fVar21 = fVar19;
    }
    fVar24 = fVar22;
    fVar19 = 0.0;
    if (fVar22 <= 0.0) {
      fVar24 = 0.0;
      fVar19 = fVar22;
    }
    local_290 = CONCAT44(fVar19,fVar21);
    local_288 = CONCAT44(fVar24,fVar23);
  }
  lVar12 = *(long *)(lVar12 + 8);
  if (iVar3 < 1) {
    lVar12 = *(long *)(lVar12 + 0x18);
  }
  else {
    uVar42 = iVar3 - 1;
    if (*(uint *)(lVar12 + 0x20) <= uVar42) {
      uVar42 = 0;
    }
    lVar12 = *(long *)(lVar12 + 0x28) + (ulong)uVar42 * 0x150;
  }
  if ((char)param_4[1] == '\0') {
    if (*(char *)((long)param_4 + 9) == '\0') goto LAB_03918cc4;
  }
  else {
    (**(code **)(*param_4 + 0x58))(param_4,(long)param_4 + 0xc);
    *(undefined2 *)(param_4 + 1) = 0x100;
  }
  (**(code **)(*param_4 + 0x60))
            (param_4,(long)param_4 + 0x4c,(long)param_4 + 0xc,*(undefined4 *)((long)param_4 + 0x8c))
  ;
  *(undefined1 *)((long)param_4 + 9) = 0;
LAB_03918cc4:
  uVar13 = *(undefined8 *)(param_5 + 8);
  puVar11 = (undefined8 *)((long)param_4 + 0xc);
  fVar29 = (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20);
  fVar19 = (float)*puVar11;
  fVar23 = (float)uVar13;
  fVar25 = (float)((ulong)uVar13 >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_5 + 0x10);
  fVar30 = (float)*(undefined8 *)(param_5 + 0x18);
  fVar32 = (float)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20);
  fVar22 = (float)((ulong)*puVar11 >> 0x20);
  fVar34 = (float)*(undefined8 *)(param_5 + 0x20);
  fVar36 = (float)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x20);
  fVar46 = (float)*(undefined8 *)((long)param_4 + 0x3c);
  fVar47 = (float)((ulong)*(undefined8 *)((long)param_4 + 0x3c) >> 0x20);
  fVar38 = (float)*(undefined8 *)((long)param_4 + 0x1c);
  fVar39 = (float)((ulong)*(undefined8 *)((long)param_4 + 0x1c) >> 0x20);
  fVar43 = (float)*(undefined8 *)((long)param_4 + 0x2c);
  fVar44 = (float)((ulong)*(undefined8 *)((long)param_4 + 0x2c) >> 0x20);
  fVar21 = (float)*(undefined8 *)((long)param_4 + 0x14);
  fVar31 = (float)*(undefined8 *)(param_5 + 0x28);
  fVar33 = (float)((ulong)*(undefined8 *)(param_5 + 0x28) >> 0x20);
  fVar35 = (float)*(undefined8 *)(param_5 + 0x30);
  fVar37 = (float)((ulong)*(undefined8 *)(param_5 + 0x30) >> 0x20);
  fVar40 = (float)*(undefined8 *)((long)param_4 + 0x24);
  fVar45 = (float)*(undefined8 *)((long)param_4 + 0x34);
  fVar48 = (float)*(undefined8 *)((long)param_4 + 0x44);
  fVar24 = fVar23 * fVar19 + fVar30 * fVar22 + fVar31 * fVar21 + 0.0;
  fVar26 = fVar25 * fVar19 + fVar32 * fVar22 + fVar33 * fVar21 + 0.0;
  local_1f0 = CONCAT44(fVar26,fVar24);
  fVar28 = fVar27 * fVar19 + fVar34 * fVar22 + fVar35 * fVar21 + 0.0;
  uStack_1e8 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_4 + 0x14) >> 0x20) +
                        fVar29 * fVar19 + fVar36 * fVar22 + fVar37 * fVar21,fVar28);
  fVar19 = fVar23 * fVar38 + fVar30 * fVar39 + fVar31 * fVar40 + 0.0;
  fVar22 = fVar25 * fVar38 + fVar32 * fVar39 + fVar33 * fVar40 + 0.0;
  uStack_1e0 = CONCAT44(fVar22,fVar19);
  fVar21 = fVar27 * fVar38 + fVar34 * fVar39 + fVar35 * fVar40 + 0.0;
  uStack_1d8 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_4 + 0x24) >> 0x20) +
                        fVar29 * fVar38 + fVar36 * fVar39 + fVar37 * fVar40,fVar21);
  local_1f4 = (-*(float *)(param_5 + 0x20) * fVar36 - *(float *)(param_5 + 0x10) * fVar29) -
              *(float *)(param_5 + 0x30) * fVar37;
  local_1fc = (-fVar30 * fVar36 - fVar29 * fVar23) - fVar37 * fVar31;
  local_1f8 = (-fVar32 * fVar36 - fVar29 * fVar25) - fVar37 * fVar33;
  uStack_1c8 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_4 + 0x34) >> 0x20) +
                        fVar29 * fVar43 + fVar36 * fVar44 + fVar37 * fVar45,
                        fVar27 * fVar43 + fVar34 * fVar44 + fVar35 * fVar45 + 0.0);
  uStack_1c0 = CONCAT44(fVar25 * fVar46 + fVar32 * fVar47 + fVar33 * fVar48 + 0.0,
                        fVar23 * fVar46 + fVar30 * fVar47 + fVar31 * fVar48 + 0.0);
  uStack_1b8 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_4 + 0x44) >> 0x20) +
                        fVar29 * fVar46 + fVar36 * fVar47 + fVar37 * fVar48,
                        fVar27 * fVar46 + fVar34 * fVar47 + fVar35 * fVar48 + 0.0);
  local_1d0 = CONCAT44(fVar25 * fVar43 + fVar32 * fVar44 + fVar33 * fVar45 + 0.0,
                       fVar23 * fVar43 + fVar30 * fVar44 + fVar31 * fVar45 + 0.0);
  if (*(long *)(param_1 + 0x218) != param_1 + 0x210) {
    iVar3 = *(int *)(param_1 + 0x224);
    puVar1 = (uint *)(lVar12 + 0x14);
    lVar18 = *(long *)(param_1 + 0x218) - (long)iVar3;
    lVar4 = *(long *)PTR_DAT_04bb29d0 / 1000000;
    do {
      if ((*(byte *)(lVar18 + 0x2a38) & 0x60) != 0) {
        (**(code **)(*param_3 + 0x38))(param_3,param_2);
        FUN_038e77e4(&local_298,param_2,param_3);
        local_26c = local_26c & 0xfffffffe;
        local_20b = 2;
        FUN_038e4d90(auStack_270,param_2);
        FUN_03907810(lVar12,param_2);
        local_1a8 = *(undefined4 *)(lVar18 + 0x18);
        local_1a4 = *(undefined4 *)(lVar18 + 0x1c);
        local_1a0 = *(undefined8 *)(lVar18 + 0x20);
        uStack_198 = *(undefined8 *)(lVar18 + 0x28);
        local_190 = *(undefined4 *)(lVar18 + 0x30);
        local_18c = *(undefined4 *)(lVar18 + 0x34);
        local_188 = *(undefined8 *)(lVar18 + 0x38);
        uStack_180 = *(undefined8 *)(lVar18 + 0x40);
        local_178 = *(undefined8 *)(lVar18 + 0x48);
        local_170 = *(undefined8 *)(lVar18 + 0x50);
        uStack_160 = (undefined7)((ulong)*(undefined8 *)(lVar18 + 0x5f) >> 8);
        uStack_168 = (undefined7)*(undefined8 *)(lVar18 + 0x58);
        local_161 = (undefined1)((ulong)*(undefined8 *)(lVar18 + 0x58) >> 0x38);
        FUN_038fd1e0(auStack_158);
        FUN_038fd2f0(auStack_158,lVar18 + 0x68);
        local_118 = *(undefined8 *)(lVar18 + 0xa8);
        local_110 = *(undefined4 *)(lVar18 + 0xb0);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(&local_d4,0x10);
          if (bVar8) {
            cVar7 = ExclusiveMonitorsStatus();
            local_d4 = local_d4 | 1;
          }
        } while (cVar7 != '\0');
        do {
          uVar42 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar42 | 0x80000000;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar42 & 0x7fffffff) != 0) {
          if ((int)uVar42 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar4);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar12);
          }
        }
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_0390d290(&local_1a8,param_2,
                     *(long *)(lVar12 + 0x68) + (ulong)(1 < *(uint *)(lVar12 + 0x60)) * 0x18,
                     0xffffffff,0);
        do {
          uVar42 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar42 | 0x80000000;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar42 & 0x7fffffff) != 0) {
          if ((int)uVar42 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar4);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar12);
          }
        }
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (**(int **)(lVar12 + 0x38) != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                     (long)**(int **)(lVar12 + 0x38),0x40,&local_1f0);
        }
        do {
          uVar42 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar42 | 0x80000000;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar42 & 0x7fffffff) != 0) {
          if ((int)uVar42 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar4);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar12);
          }
        }
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar15 = 0x30;
        if (*(uint *)(lVar12 + 0x30) < 3) {
          lVar15 = 0;
        }
        iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + lVar15);
        if (iVar5 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,0xc,&local_1fc);
        }
        uVar20 = *(undefined4 *)(param_1 + 0x428);
        uVar42 = *(uint *)(param_1 + 0x450);
        do {
          uVar6 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar6 | 0x80000000;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar42 & 0x40000000) != 0) {
          uVar20 = 0x3f800000;
        }
        if ((uVar6 & 0x7fffffff) != 0) {
          if ((int)uVar6 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar4);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar12);
          }
        }
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar15 = 0x78;
        if (*(uint *)(lVar12 + 0x30) < 6) {
          lVar15 = 0;
        }
        iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + lVar15);
        local_c4 = uVar20;
        if (iVar5 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,4,&local_c4);
        }
        uVar20 = *(undefined4 *)(param_1 + 0x42c);
        uVar42 = *(uint *)(param_1 + 0x450);
        do {
          uVar6 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar6 | 0x80000000;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar42 & 0x40000000) != 0) {
          uVar20 = 0x3f800000;
        }
        if ((uVar6 & 0x7fffffff) != 0) {
          if ((int)uVar6 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar4);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar12);
          }
        }
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar15 = 0x90;
        if (*(uint *)(lVar12 + 0x30) < 7) {
          lVar15 = 0;
        }
        iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + lVar15);
        local_c4 = uVar20;
        if (iVar5 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,4,&local_c4);
        }
        uVar13 = *(undefined8 *)(param_2 + 0xb8);
        (**(code **)PTR_DAT_04bcf1a8)(uVar13,0x10,param_1 + 0x574);
        (**(code **)PTR_DAT_04bcf1b0)(uVar13,0x10,param_1 + 0x5b8);
        iVar5 = *(int *)(param_1 + 0x560);
        if (iVar5 != 0) {
          uVar17 = 0;
          uVar14 = 0;
          lVar15 = *(long *)(param_1 + 0x568);
          do {
            lVar16 = *(long *)(lVar15 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
            if (lVar16 != 0) {
              uVar10 = (**(code **)PTR_DAT_04bbd560)(lVar16 + 8);
              (**(code **)PTR_DAT_04bcf1e8)
                        (uVar13,uVar17 & 0xffffffff,uVar10,*(undefined4 *)(lVar16 + 0x118));
            }
            uVar17 = uVar14 + 1;
            uVar14 = uVar17 & 0xffffffff;
          } while (iVar5 != (int)uVar17);
        }
        uVar42 = *(uint *)(lVar18 + 0x2a38);
        if ((uVar42 >> 6 & 1) == 0) {
          *(undefined4 *)(lVar18 + 0x2604) = 0;
        }
        else {
          if (*(int *)(lVar18 + 0x2604) != 0) {
            uVar6 = *(int *)(lVar18 + 0x2604) - 1;
            *(uint *)(lVar18 + 0x2604) = uVar6;
            if ((uVar6 != 0) && (((ulong)uVar6 / 10 & 1) == 0)) goto LAB_039199f4;
          }
          lVar15 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x378) + 8);
          if ((*(byte *)(*(long *)(lVar18 + 8) + 0x452) & 1) == 0) {
            uVar42 = 0;
          }
          else {
            uVar42 = (uint)*(ushort *)(*(long *)(lVar15 + 0x38) + 0x30);
          }
          iVar5 = *(int *)(lVar18 + 0x2608) + uVar42;
          if (iVar5 == 0 || iVar5 < 0 != SCARRY4(*(int *)(lVar18 + 0x2608),uVar42)) {
            lVar15 = *(long *)(lVar15 + 0x18);
          }
          else {
            uVar42 = iVar5 - 1;
            if (*(uint *)(lVar15 + 0x20) <= uVar42) {
              uVar42 = 0;
            }
            lVar15 = *(long *)(lVar15 + 0x28) + (ulong)uVar42 * 0x150;
          }
          local_b8 = *(undefined4 *)(lVar18 + 0x228);
          puVar2 = (uint *)(lVar15 + 0x14);
          local_c4 = *(undefined4 *)(lVar18 + 0x25dc);
          local_b4 = 0;
          local_a4 = 0;
          uStack_98 = *(undefined4 *)(lVar18 + 0x230);
          local_c0 = 0;
          local_ac = 0;
          uVar13 = *(undefined8 *)(lVar18 + 0x10);
          local_a8 = *(undefined4 *)(lVar18 + 0x22c);
          do {
            uVar42 = *puVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar42 | 0x80000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          local_b0 = local_c4;
          local_9c = local_c4;
          if ((uVar42 & 0x7fffffff) != 0) {
            if ((int)uVar42 < 0) {
              if ((int)*puVar2 < 0) {
                lVar16 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar16 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar15);
            }
          }
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          FUN_0390d290(uVar13,param_2,*(undefined8 *)(lVar15 + 0x68),0xffffffff,0);
          do {
            uVar42 = *puVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar42 | 0x80000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar42 & 0x7fffffff) != 0) {
            if ((int)uVar42 < 0) {
              if ((int)*puVar2 < 0) {
                lVar16 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar16 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar15);
            }
          }
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          iVar5 = *(int *)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18);
          if (iVar5 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,0x30,&local_c4)
            ;
          }
          uVar42 = *(uint *)(lVar18 + 0x2a38);
          do {
            uVar6 = *puVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar6 | 0x80000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar6 & 0x7fffffff) != 0) {
            if ((int)uVar6 < 0) {
              if ((int)*puVar2 < 0) {
                lVar16 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar16 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar15);
            }
          }
          local_94[0] = uVar42 >> 7 & 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar16 = 0x48;
          if (*(uint *)(lVar15 + 0x30) < 4) {
            lVar16 = 0;
          }
          iVar5 = *(int *)(*(long *)(lVar15 + 0x38) + lVar16);
          if (iVar5 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,4,local_94);
          }
          uVar42 = *(uint *)(lVar18 + 0x2a38);
          do {
            uVar6 = *puVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar6 | 0x80000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar6 & 0x7fffffff) != 0) {
            if ((int)uVar6 < 0) {
              if ((int)*puVar2 < 0) {
                lVar16 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar16 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar15);
            }
          }
          local_94[0] = uVar42 >> 8 & 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar16 = 0x60;
          if (*(uint *)(lVar15 + 0x30) < 5) {
            lVar16 = 0;
          }
          iVar5 = *(int *)(*(long *)(lVar15 + 0x38) + lVar16);
          if (iVar5 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,4,local_94);
          }
          uVar42 = *(uint *)(lVar18 + 0x2a38);
          do {
            uVar6 = *puVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar6 | 0x80000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          uVar41 = 0x3f800000;
          if ((uVar42 & 0x200) != 0) {
            uVar41 = 0;
          }
          if ((uVar6 & 0x7fffffff) != 0) {
            if ((int)uVar6 < 0) {
              if ((int)*puVar2 < 0) {
                lVar16 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar16 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar15);
            }
          }
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar16 = 0xa8;
          if (*(uint *)(lVar15 + 0x30) < 8) {
            lVar16 = 0;
          }
          iVar5 = *(int *)(*(long *)(lVar15 + 0x38) + lVar16);
          local_94[0] = uVar41;
          if (iVar5 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,4,local_94);
          }
          uVar42 = *(uint *)(lVar18 + 0x25d8);
          do {
            uVar6 = *puVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar6 | 0x80000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar6 & 0x7fffffff) != 0) {
            if ((int)uVar6 < 0) {
              if ((int)*puVar2 < 0) {
                lVar16 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar16 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar15);
            }
          }
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar16 = 0xc0;
          if (*(uint *)(lVar15 + 0x30) < 9) {
            lVar16 = 0;
          }
          iVar5 = *(int *)(*(long *)(lVar15 + 0x38) + lVar16);
          local_94[0] = uVar42;
          if (iVar5 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,4,local_94);
          }
          uVar42 = *(uint *)(lVar18 + 0x100);
          do {
            uVar6 = *puVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar6 | 0x80000000;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar6 & 0x7fffffff) != 0) {
            if ((int)uVar6 < 0) {
              if ((int)*puVar2 < 0) {
                lVar16 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar16 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar15);
            }
          }
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar16 = 0xd8;
          if (*(uint *)(lVar15 + 0x30) < 10) {
            lVar16 = 0;
          }
          iVar5 = *(int *)(*(long *)(lVar15 + 0x38) + lVar16);
          local_94[0] = uVar42;
          if (iVar5 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,4,local_94);
          }
          lVar15 = *(long *)PTR_DAT_04bbd7e8;
          iVar5 = *(int *)(lVar15 + 0x1450);
          if (iVar5 != 0) {
            uVar20 = *(undefined4 *)(lVar15 + 0x1434);
            uVar10 = *(undefined8 *)(param_2 + 0xb8);
            uVar13 = (**(code **)PTR_DAT_04bbd560)(lVar15 + 0x1458);
            (**(code **)PTR_DAT_04bbd568)
                      (uVar10,uVar20,*(undefined4 *)(lVar15 + 0x1430),iVar5,uVar13);
          }
          uVar42 = *(uint *)(lVar18 + 0x2a38);
        }
LAB_039199f4:
        if ((uVar42 >> 5 & 1) != 0) {
          local_c4 = 0xffffffff;
          if ((char)param_4[1] == '\0') {
            if (*(char *)((long)param_4 + 9) != '\0') goto LAB_03919a3c;
          }
          else {
            (**(code **)(*param_4 + 0x58))(param_4,puVar11);
            *(undefined2 *)(param_4 + 1) = 0x100;
LAB_03919a3c:
            (**(code **)(*param_4 + 0x60))
                      (param_4,(long)param_4 + 0x4c,puVar11,*(undefined4 *)((long)param_4 + 0x8c));
            *(undefined1 *)((long)param_4 + 9) = 0;
          }
          FUN_03912de0(SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar21 * fVar21) /
                       SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar28 * fVar28),lVar18,param_2,
                       puVar11,(undefined8 *)(param_5 + 8),&local_c4);
        }
      }
      if ((((param_6 & 1) != 0) && ((*(byte *)(param_1 + 0x452) & 1) == 0)) &&
         ((*(byte *)(lVar18 + 0x2a38) >> 4 & 1) != 0)) {
        (**(code **)(*(long *)(lVar18 + 0x1b8) + 0x18))(lVar18 + 0x1b8);
      }
      lVar18 = *(long *)(lVar18 + *(int *)(param_1 + 0x224) + 8) - (long)*(int *)(param_1 + 0x224);
    } while (lVar18 != (param_1 + 0x210) - (long)iVar3);
  }
  if (local_ce != -1) {
    lVar12 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar12 + 0x580));
    uVar42 = (int)local_ce - (uint)*(ushort *)(lVar12 + 0x5c0);
    if (*(uint *)(lVar12 + 0x5a0) <= uVar42) {
      uVar42 = 0;
    }
    lVar4 = *(long *)(lVar12 + 0x5a8) + (long)(int)uVar42 * 0x80;
    sVar9 = *(short *)(lVar4 + 0x76) + -1;
    *(short *)(lVar4 + 0x76) = sVar9;
    if (sVar9 == 0) {
      *(short *)(lVar12 + 0x5c4) = *(short *)(lVar12 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar12 + 0x580));
    local_ce = -1;
  }
  FUN_038fd0e0(auStack_158);
  return;
}

