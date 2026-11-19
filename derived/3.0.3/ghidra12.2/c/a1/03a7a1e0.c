
void FUN_03a7a1e0(long param_1,long param_2,uint param_3,uint param_4,undefined8 *param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  ushort *puVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  float *pfVar26;
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
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_ac;
  
  if (*(char *)(param_1 + 0x4d0) != '\0') {
    lVar25 = *(long *)(param_1 + 0x238);
    uVar3 = param_3;
    if (*(uint *)(param_1 + 0x230) <= param_3) {
      uVar3 = 0;
    }
    if (*(char *)(lVar25 + (long)(int)uVar3 * 0x6d0) != '\0') {
      lVar19 = *(long *)(param_1 + 0x228);
      if (*(uint *)(param_1 + 0x220) <= param_4) {
        param_4 = 0;
      }
      if (*(char *)(lVar19 + (long)(int)param_4 * 0x2c) != '\0' &&
          *(char *)(param_1 + 0x248) != '\0') {
        lVar18 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x600) + 8);
        lVar15 = lVar25 + (long)(int)uVar3 * 0x6d0;
        iVar9 = *(int *)(lVar15 + 0x1c0) * (uint)*(ushort *)(*(long *)(lVar18 + 0x38) + 0x30);
        if (iVar9 < 1) {
          lVar18 = *(long *)(lVar18 + 0x18);
        }
        else {
          uVar23 = iVar9 - 1;
          if (*(uint *)(lVar18 + 0x20) <= uVar23) {
            uVar23 = 0;
          }
          lVar18 = *(long *)(lVar18 + 0x28) + (ulong)uVar23 * 0x150;
        }
        piVar1 = (int *)(lVar15 + 0x1c0);
        FUN_038e4cec(&local_110);
        uStack_e8 = CONCAT44(uStack_e8._4_4_,0x2020505);
        local_ac = 2;
        uVar5 = local_110._4_4_;
        local_110 = CONCAT53(local_110._3_5_,1);
        local_110 = CONCAT44(uVar5,(undefined4)local_110) | 0x100000000;
        FUN_038e4d90(&local_110,param_2);
        lVar15 = lVar25 + (long)(int)uVar3 * 0x6d0;
        fVar42 = (float)*(undefined8 *)(lVar15 + 0x40);
        fVar27 = (float)*param_5;
        fVar30 = (float)((ulong)*param_5 >> 0x20);
        fVar31 = (float)param_5[1];
        fVar28 = (float)((ulong)param_5[1] >> 0x20);
        fVar43 = (float)((ulong)*(undefined8 *)(lVar15 + 0x40) >> 0x20);
        fVar32 = (float)param_5[2];
        fVar33 = (float)((ulong)param_5[2] >> 0x20);
        fVar35 = (float)param_5[3];
        fVar37 = (float)((ulong)param_5[3] >> 0x20);
        fVar39 = (float)*(undefined8 *)(lVar15 + 0x30);
        fVar40 = (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
        fVar45 = (float)*(undefined8 *)(lVar15 + 0x50);
        fVar46 = (float)((ulong)*(undefined8 *)(lVar15 + 0x50) >> 0x20);
        fVar48 = (float)*(undefined8 *)(lVar15 + 0x60);
        fVar49 = (float)((ulong)*(undefined8 *)(lVar15 + 0x60) >> 0x20);
        fVar41 = (float)*(undefined8 *)(lVar15 + 0x38);
        fVar29 = (float)param_5[4];
        fVar34 = (float)((ulong)param_5[4] >> 0x20);
        fVar36 = (float)param_5[5];
        fVar38 = (float)((ulong)param_5[5] >> 0x20);
        fVar44 = (float)*(undefined8 *)(lVar15 + 0x48);
        fVar47 = (float)*(undefined8 *)(lVar15 + 0x58);
        fVar50 = (float)*(undefined8 *)(lVar15 + 0x68);
        local_110 = CONCAT44(fVar30 * fVar39 + fVar33 * fVar40 + fVar34 * fVar41 + 0.0,
                             fVar27 * fVar39 + fVar32 * fVar40 + fVar29 * fVar41 + 0.0);
        uStack_108 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x38) >> 0x20) +
                              fVar28 * fVar39 + fVar37 * fVar40 + fVar38 * fVar41,
                              fVar31 * fVar39 + fVar35 * fVar40 + fVar36 * fVar41 + 0.0);
        uStack_100 = CONCAT44(fVar30 * fVar42 + fVar33 * fVar43 + fVar34 * fVar44 + 0.0,
                              fVar27 * fVar42 + fVar32 * fVar43 + fVar29 * fVar44 + 0.0);
        uStack_f8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x48) >> 0x20) +
                             fVar28 * fVar42 + fVar37 * fVar43 + fVar38 * fVar44,
                             fVar31 * fVar42 + fVar35 * fVar43 + fVar36 * fVar44 + 0.0);
        local_f0 = CONCAT44(fVar30 * fVar45 + fVar33 * fVar46 + fVar34 * fVar47 + 0.0,
                            fVar27 * fVar45 + fVar32 * fVar46 + fVar29 * fVar47 + 0.0);
        uStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x58) >> 0x20) +
                             fVar28 * fVar45 + fVar37 * fVar46 + fVar38 * fVar47,
                             fVar31 * fVar45 + fVar35 * fVar46 + fVar36 * fVar47 + 0.0);
        uStack_e0 = CONCAT44(fVar30 * fVar48 + fVar33 * fVar49 + fVar34 * fVar50 + 0.0,
                             fVar27 * fVar48 + fVar32 * fVar49 + fVar29 * fVar50 + 0.0);
        uStack_d8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 0x20) +
                             fVar28 * fVar48 + fVar37 * fVar49 + fVar38 * fVar50,
                             fVar31 * fVar48 + fVar35 * fVar49 + fVar36 * fVar50 + 0.0);
        FUN_03907810(lVar18,param_2);
        puVar2 = (uint *)(lVar18 + 0x14);
        do {
          uVar23 = *puVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = uVar23 | 0x80000000;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar23 & 0x7fffffff) != 0) {
          if ((int)uVar23 < 0) {
            if ((int)*puVar2 < 0) {
              lVar15 = *(long *)PTR_DAT_04bb29d0;
              do {
                nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                nn::os::SleepThread();
              } while ((int)*puVar2 < 0);
            }
          }
          else {
            FUN_03907b80(lVar18);
          }
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = 0;
            cVar10 = ExclusiveMonitorsStatus();
          }
          puVar13 = PTR_DAT_04bd0fc8;
          puVar12 = PTR_DAT_04bcf2e0;
        } while (cVar10 != '\0');
        lVar15 = 0xf0;
        if (*(uint *)(lVar18 + 0x30) < 0xb) {
          lVar15 = 0;
        }
        iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
        if (iVar9 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar9,0x40,&local_110);
        }
        do {
          uVar23 = *puVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = uVar23 | 0x80000000;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar23 & 0x7fffffff) != 0) {
          if ((int)uVar23 < 0) {
            if ((int)*puVar2 < 0) {
              lVar15 = *(long *)PTR_DAT_04bb29d0;
              do {
                nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                nn::os::SleepThread();
              } while ((int)*puVar2 < 0);
            }
          }
          else {
            FUN_03907b80(lVar18);
          }
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = 0;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + (ulong)(1 < *(uint *)(lVar18 + 0x30)) * 0x18);
        if (iVar9 != -1) {
          (**(code **)puVar12)
                    (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
                     *(undefined8 *)(*(long *)puVar13 + 0x18),(long)iVar9,0x30,
                     lVar25 + (long)(int)uVar3 * 0x6d0 + 0x1cc);
        }
        puVar16 = (ushort *)(lVar19 + (long)(int)param_4 * 0x2c + 2);
        uVar7 = *puVar16;
        do {
          uVar23 = *puVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = uVar23 | 0x80000000;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar23 & 0x7fffffff) != 0) {
          if ((int)uVar23 < 0) {
            if ((int)*puVar2 < 0) {
              lVar15 = *(long *)PTR_DAT_04bb29d0;
              do {
                nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                nn::os::SleepThread();
              } while ((int)*puVar2 < 0);
            }
          }
          else {
            FUN_03907b80(lVar18);
          }
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = 0;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        local_120 = (float)(uint)uVar7;
        lVar15 = 0x60;
        if (*(uint *)(lVar18 + 0x30) < 5) {
          lVar15 = 0;
        }
        iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
        if (iVar9 != -1) {
          (**(code **)puVar12)
                    (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
                     *(undefined8 *)(*(long *)puVar13 + 0x18),(long)iVar9,4,&local_120);
        }
        lVar15 = *(long *)(lVar25 + (long)(int)uVar3 * 0x6d0 + 0xa8);
        uVar7 = *(ushort *)(lVar15 + 0x30);
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        uVar6 = *(ushort *)(lVar15 + 0x32);
        uVar4 = uVar6;
        if (*(short *)(lVar15 + 0x3a) != 3) {
          uVar4 = 1;
        }
        if (uVar4 <= uVar6) {
          uVar4 = uVar6;
        }
        local_120 = 1.0 / (float)uVar7;
        fStack_11c = 1.0 / (float)uVar4;
        do {
          uVar23 = *puVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = uVar23 | 0x80000000;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar23 & 0x7fffffff) != 0) {
          if ((int)uVar23 < 0) {
            if ((int)*puVar2 < 0) {
              lVar15 = *(long *)PTR_DAT_04bb29d0;
              do {
                nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                nn::os::SleepThread();
              } while ((int)*puVar2 < 0);
            }
          }
          else {
            FUN_03907b80(lVar18);
          }
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = 0;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar15 = 0xd8;
        if (*(uint *)(lVar18 + 0x30) < 10) {
          lVar15 = 0;
        }
        iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
        if (iVar9 != -1) {
          (**(code **)puVar12)
                    (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
                     *(undefined8 *)(*(long *)puVar13 + 0x18),(long)iVar9,8,&local_120);
        }
        lVar15 = lVar19 + (long)(int)param_4 * 0x2c;
        fStack_11c = *(float *)(lVar15 + 0x14);
        local_120 = *(float *)(lVar15 + 0x18) - fStack_11c;
        do {
          uVar23 = *puVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = uVar23 | 0x80000000;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar23 & 0x7fffffff) != 0) {
          if ((int)uVar23 < 0) {
            if ((int)*puVar2 < 0) {
              lVar15 = *(long *)PTR_DAT_04bb29d0;
              do {
                nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                nn::os::SleepThread();
              } while ((int)*puVar2 < 0);
            }
          }
          else {
            FUN_03907b80(lVar18);
          }
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = 0;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar15 = 0xc0;
        if (*(uint *)(lVar18 + 0x30) < 9) {
          lVar15 = 0;
        }
        iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
        if (iVar9 != -1) {
          (**(code **)puVar12)
                    (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
                     *(undefined8 *)(*(long *)puVar13 + 0x18),(long)iVar9,8,&local_120);
        }
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          do {
            uVar23 = *puVar2;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar11) {
              *puVar2 = uVar23 | 0x80000000;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar23 & 0x7fffffff) != 0) {
            if ((int)uVar23 < 0) {
              if ((int)*puVar2 < 0) {
                lVar15 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar18);
            }
          }
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar11) {
              *puVar2 = 0;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          lVar15 = 0x90;
          if (*(uint *)(lVar18 + 0x30) < 7) {
            lVar15 = 0;
          }
          iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
          if (iVar9 != -1) {
            (**(code **)puVar12)
                      (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
                       *(undefined8 *)(*(long *)puVar13 + 0x18),(long)iVar9,0x40,
                       lVar25 + (long)(int)uVar3 * 0x6d0 + 0xb0);
          }
        }
        else {
          do {
            uVar23 = *puVar2;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar11) {
              *puVar2 = uVar23 | 0x80000000;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar23 & 0x7fffffff) != 0) {
            if ((int)uVar23 < 0) {
              if ((int)*puVar2 < 0) {
                lVar15 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar2 < 0);
              }
            }
            else {
              FUN_03907b80(lVar18);
            }
          }
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar11) {
              *puVar2 = 0;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          lVar15 = 0x90;
          if (*(uint *)(lVar18 + 0x30) < 7) {
            lVar15 = 0;
          }
          iVar8 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
          if (iVar8 != -1) {
            (**(code **)puVar12)
                      (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
                       *(undefined8 *)(*(long *)puVar13 + 0x18),(long)iVar8,
                       (ulong)(uint)(iVar9 << 4) << 2,lVar25 + (long)(int)uVar3 * 0x6d0 + 0xb0);
          }
          FUN_01673550(lVar18,param_2,7,lVar25 + (long)(int)uVar3 * 0x6d0 + 0x1b0,*piVar1);
        }
        do {
          uVar23 = *puVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = uVar23 | 0x80000000;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar23 & 0x7fffffff) != 0) {
          if ((int)uVar23 < 0) {
            if ((int)*puVar2 < 0) {
              lVar15 = *(long *)PTR_DAT_04bb29d0;
              do {
                nn::os::ConvertToTimeSpan(lVar15 / 1000000);
                nn::os::SleepThread();
              } while ((int)*puVar2 < 0);
            }
          }
          else {
            FUN_03907b80(lVar18);
          }
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *puVar2 = 0;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        FUN_0390d290(lVar25 + (long)(int)uVar3 * 0x6d0 + 0x2e8,param_2,
                     *(long *)(lVar18 + 0x68) + (ulong)(1 < *(uint *)(lVar18 + 0x60)) * 0x18,
                     0xffffffff,0);
        lVar15 = lVar25 + (long)(int)uVar3 * 0x6d0;
        pfVar17 = (float *)(lVar15 + 0xa0);
        fVar27 = *pfVar17;
        fVar30 = *(float *)(lVar15 + 0xa4);
        lVar15 = lVar19 + (long)(int)param_4 * 0x2c;
        local_110 = CONCAT44(fVar27,(undefined4)local_110);
        uStack_108 = CONCAT44(1.0 - fVar27 / fVar30,fVar30);
        uVar7 = *puVar16;
        if (fVar27 <= 0.0 || *(char *)(lVar15 + 1) == '\0') {
          fVar27 = *(float *)(lVar15 + 0xc);
        }
        fVar30 = *(float *)(lVar15 + 0x10) - fVar27;
        uVar22 = *(undefined8 *)(param_2 + 0xb8);
        fVar31 = (*(float *)(lVar15 + 0x10) - *(float *)(lVar15 + 0xc)) * 0.5;
        lVar15 = *(long *)PTR_DAT_04bbd7e0;
        if (fVar30 <= fVar31) {
          fVar30 = fVar31;
        }
        (**(code **)PTR_DAT_04bcf1a8)(uVar22,0x10,lVar15 + 0xe44);
        (**(code **)PTR_DAT_04bcf1b0)(uVar22,0x10,lVar15 + 0xe88);
        puVar12 = PTR_DAT_04bcf1e8;
        iVar9 = *(int *)(lVar15 + 0xe30);
        if (iVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0xe38);
          uVar24 = 0;
          uVar21 = 0;
          do {
            lVar20 = *(long *)(lVar15 + (-(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3));
            if (lVar20 != 0) {
              uVar14 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 8);
              (**(code **)puVar12)
                        (uVar22,uVar24 & 0xffffffff,uVar14,*(undefined4 *)(lVar20 + 0x118));
            }
            uVar24 = uVar21 + 1;
            uVar21 = uVar24 & 0xffffffff;
          } while (iVar9 != (int)uVar24);
        }
        fVar31 = 1.0 / (float)(int)(uVar7 - 1);
        pfVar26 = (float *)(lVar19 + (long)(int)param_4 * 0x2c + 8);
        uVar23 = (uint)*puVar16;
        if (*pfVar26 == 1.0) {
          if (uVar23 != 0) {
            lVar25 = lVar25 + (long)(int)uVar3 * 0x6d0;
            lVar19 = *(long *)PTR_DAT_04bb29d0;
            do {
              uVar3 = uVar23 - 1;
              uVar7 = *puVar16;
              fVar28 = (float)uVar3;
              fVar32 = fVar27 + (fVar28 / (float)(int)(uVar7 - 1)) * fVar30;
              if (fVar32 <= *pfVar17) break;
              local_118 = fVar32 + 7.6293945e-06;
              local_120 = local_118 * *(float *)(lVar25 + 0x1c4);
              fStack_11c = local_118 * *(float *)(lVar25 + 0x1c8);
              if ((*(char *)(param_1 + 0x249) == '\0') ||
                 (((fVar32 = 1.0, uVar3 != 0 && (fVar32 = 1.0, uVar23 != uVar7)) &&
                  (fVar32 = 1.0, uVar3 != uVar7 >> 1)))) {
                fVar32 = fVar31;
              }
              local_110 = CONCAT44(local_110._4_4_,fVar32);
              do {
                uVar23 = *puVar2;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = uVar23 | 0x80000000;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              fStack_114 = fVar28;
              if ((uVar23 & 0x7fffffff) != 0) {
                if ((int)uVar23 < 0) {
                  while ((int)*puVar2 < 0) {
                    nn::os::ConvertToTimeSpan(lVar19 / 1000000);
                    nn::os::SleepThread();
                  }
                }
                else {
                  FUN_03907b80(lVar18);
                }
              }
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = 0;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              lVar15 = 0x48;
              if (*(uint *)(lVar18 + 0x30) < 4) {
                lVar15 = 0;
              }
              iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
              if (iVar9 != -1) {
                (**(code **)PTR_DAT_04bcf2e0)
                          (*(undefined8 *)(param_2 + 0xb8),
                           *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                           *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar9,0x10,
                           &local_110);
              }
              do {
                uVar23 = *puVar2;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = uVar23 | 0x80000000;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if ((uVar23 & 0x7fffffff) != 0) {
                if ((int)uVar23 < 0) {
                  while ((int)*puVar2 < 0) {
                    nn::os::ConvertToTimeSpan(lVar19 / 1000000);
                    nn::os::SleepThread();
                  }
                }
                else {
                  FUN_03907b80(lVar18);
                }
              }
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = 0;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              lVar15 = 0x30;
              if (*(uint *)(lVar18 + 0x30) < 3) {
                lVar15 = 0;
              }
              iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
              if (iVar9 != -1) {
                (**(code **)PTR_DAT_04bcf2e0)
                          (*(undefined8 *)(param_2 + 0xb8),
                           *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                           *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar9,0x10,
                           &local_120);
              }
              lVar15 = *(long *)PTR_DAT_04bbd7e8;
              iVar9 = *(int *)(lVar15 + 0x1f8);
              if (iVar9 != 0) {
                uVar5 = *(undefined4 *)(lVar15 + 0x1dc);
                uVar14 = *(undefined8 *)(param_2 + 0xb8);
                uVar22 = (**(code **)PTR_DAT_04bbd560)(lVar15 + 0x200);
                (**(code **)PTR_DAT_04bbd568)
                          (uVar14,uVar5,*(undefined4 *)(lVar15 + 0x1d8),iVar9,uVar22);
              }
              uVar23 = uVar3;
            } while (uVar3 != 0);
          }
        }
        else if (uVar23 != 0) {
          lVar25 = lVar25 + (long)(int)uVar3 * 0x6d0;
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            uVar3 = uVar23 - 1;
            fVar32 = (float)uVar3;
            fVar28 = powf(fVar31 * fVar32,*pfVar26);
            fVar28 = fVar27 + fVar28 * fVar30;
            if (fVar28 <= *pfVar17) break;
            local_118 = fVar28 + 7.6293945e-06;
            local_120 = local_118 * *(float *)(lVar25 + 0x1c4);
            fStack_11c = local_118 * *(float *)(lVar25 + 0x1c8);
            if (*(char *)(param_1 + 0x249) == '\0') {
LAB_03a7aecc:
              fVar28 = fVar31;
            }
            else {
              fVar28 = 1.0;
              if (uVar3 != 0) {
                fVar28 = 1.0;
                if ((uVar23 != *puVar16) && (fVar28 = 1.0, uVar3 != *puVar16 >> 1))
                goto LAB_03a7aecc;
              }
            }
            local_110 = CONCAT44(local_110._4_4_,fVar28);
            do {
              uVar23 = *puVar2;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar11) {
                *puVar2 = uVar23 | 0x80000000;
                cVar10 = ExclusiveMonitorsStatus();
              }
              puVar13 = PTR_DAT_04bd0fc8;
              puVar12 = PTR_DAT_04bcf2e0;
            } while (cVar10 != '\0');
            fStack_114 = fVar32;
            if ((uVar23 & 0x7fffffff) != 0) {
              if ((int)uVar23 < 0) {
                while ((int)*puVar2 < 0) {
                  nn::os::ConvertToTimeSpan(lVar19 / 1000000);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar18);
              }
            }
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar11) {
                *puVar2 = 0;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            lVar15 = 0x48;
            if (*(uint *)(lVar18 + 0x30) < 4) {
              lVar15 = 0;
            }
            iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
            if (iVar9 != -1) {
              lVar15 = *(long *)puVar13;
              (**(code **)puVar12)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar15 + 0x70),
                         *(undefined8 *)(lVar15 + 0x18),(long)iVar9,0x10,&local_110);
            }
            do {
              uVar23 = *puVar2;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar11) {
                *puVar2 = uVar23 | 0x80000000;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if ((uVar23 & 0x7fffffff) != 0) {
              if ((int)uVar23 < 0) {
                while ((int)*puVar2 < 0) {
                  nn::os::ConvertToTimeSpan(lVar19 / 1000000);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar18);
              }
            }
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar11) {
                *puVar2 = 0;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            lVar15 = 0x30;
            if (*(uint *)(lVar18 + 0x30) < 3) {
              lVar15 = 0;
            }
            iVar9 = *(int *)(*(long *)(lVar18 + 0x38) + lVar15);
            if (iVar9 != -1) {
              lVar15 = *(long *)puVar13;
              (**(code **)puVar12)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar15 + 0x70),
                         *(undefined8 *)(lVar15 + 0x18),(long)iVar9,0x10,&local_120);
            }
            lVar15 = *(long *)PTR_DAT_04bbd7e8;
            iVar9 = *(int *)(lVar15 + 0x1f8);
            if (iVar9 != 0) {
              uVar5 = *(undefined4 *)(lVar15 + 0x1dc);
              uVar14 = *(undefined8 *)(param_2 + 0xb8);
              uVar22 = (**(code **)PTR_DAT_04bbd560)(lVar15 + 0x200);
              (**(code **)PTR_DAT_04bbd568)
                        (uVar14,uVar5,*(undefined4 *)(lVar15 + 0x1d8),iVar9,uVar22);
            }
            uVar23 = uVar3;
          } while (uVar3 != 0);
        }
        FUN_03a758b0(param_1,param_3);
      }
    }
  }
  return;
}

