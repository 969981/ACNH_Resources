
void FUN_03a76ac0(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  uint *puVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  undefined8 uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  ushort *puVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  int local_194;
  undefined4 *local_190;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined2 local_8c;
  int local_7c;
  
  if (*(int *)(param_1 + 0x218) == 0) {
    return;
  }
  lVar27 = *(long *)(param_1 + 0x238);
  uVar18 = param_3;
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    uVar18 = 0;
  }
  lVar19 = *(long *)(*(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x5e0) + 8);
  lVar28 = lVar27 + (long)(int)uVar18 * 0x6d0;
  uVar23 = 0;
  if (*(int *)(lVar28 + 0x1c0) != 0) {
    uVar23 = (uint)*(ushort *)
                    (*(long *)(lVar19 + 0x38) + (ulong)(1 < *(uint *)(lVar19 + 0x30)) * 0x38 + 0x30)
    ;
  }
  iVar11 = uVar23 + (uint)*(byte *)(param_1 + 0x21d) *
                    (uint)*(ushort *)(*(long *)(lVar19 + 0x38) + 0x30);
  if (iVar11 == 0) {
    lVar19 = *(long *)(lVar19 + 0x18);
  }
  else {
    uVar23 = iVar11 - 1;
    if (*(uint *)(lVar19 + 0x20) <= uVar23) {
      uVar23 = 0;
    }
    lVar19 = *(long *)(lVar19 + 0x28) + (ulong)uVar23 * 0x150;
  }
  FUN_038e4cec(&local_f0);
  uVar31 = local_f0;
  local_f0 = (undefined **)CONCAT53(local_f0._3_5_,0x101);
  uVar16 = local_f0;
  local_8c = 8;
  local_f0._4_4_ = SUB84(uVar31,4);
  local_f0._0_4_ = (undefined4)uVar16;
  local_f0 = (undefined **)(CONCAT44(local_f0._4_4_,(undefined4)local_f0) & 0xfffffffeffffffff);
  FUN_038e4d90(&local_f0,param_2);
  FUN_03907810(lVar19,param_2);
  uVar31 = *(undefined8 *)(param_2 + 0xb8);
  lVar34 = *(long *)PTR_DAT_04bbd7e0;
  (*DAT_04c62868)(uVar31,0x10,lVar34 + 0x1024);
  (*DAT_04c62870)(uVar31,0x10,lVar34 + 0x1068);
  puVar15 = PTR_DAT_04bcf1e8;
  iVar11 = *(int *)(lVar34 + 0x1010);
  if (iVar11 != 0) {
    lVar34 = *(long *)(lVar34 + 0x1018);
    uVar32 = 0;
    uVar29 = 0;
    do {
      lVar36 = *(long *)(lVar34 + (-(uVar29 >> 0x1f) & 0xfffffff800000000 | uVar29 << 3));
      if (lVar36 != 0) {
        uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar36 + 8);
        (**(code **)puVar15)(uVar31,uVar32 & 0xffffffff,uVar16,*(undefined4 *)(lVar36 + 0x118));
      }
      uVar32 = uVar29 + 1;
      uVar29 = uVar32 & 0xffffffff;
    } while (iVar11 != (int)uVar32);
  }
  puVar1 = (uint *)(lVar28 + 0x1c0);
  lVar34 = lVar27 + (long)(int)uVar18 * 0x6d0;
  lVar28 = *(long *)(lVar34 + 0x2e0);
  puVar26 = *(undefined4 **)(lVar34 + 0xa8);
  puVar2 = (uint *)(lVar34 + 0x6c4);
  sVar7 = *(short *)(lVar28 + 0x3a);
  uVar8 = *(ushort *)(lVar28 + 0x32);
  uVar9 = *(ushort *)(lVar28 + 0x30);
  *(undefined2 *)(lVar34 + 0x6b4) = 0;
  *(undefined1 *)(lVar34 + 0x6b6) = 1;
  uVar23 = (uint)uVar8;
  if (sVar7 != 3) {
    uVar23 = 1;
  }
  do {
    cVar12 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar14) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  local_194 = 0;
  uVar21 = (uint)uVar9;
  if (uVar9 < 2) {
    uVar21 = 1;
  }
  if (uVar23 == uVar8 || uVar23 < uVar8) {
    uVar23 = (uint)uVar8;
  }
  puVar35 = (ushort *)(puVar26 + 0xc);
  puVar3 = (uint *)(lVar19 + 0x14);
  lVar27 = lVar27 + (long)(int)uVar18 * 0x6d0;
  uVar8 = *(ushort *)((long)puVar26 + 0x32);
  uVar18 = (uint)*puVar35;
  if (*puVar35 < 2) {
    uVar18 = 1;
  }
  puVar4 = (undefined4 *)(lVar27 + 0x5f0);
  uVar30 = (uint)uVar8;
  if (*(short *)((long)puVar26 + 0x3a) != 3) {
    uVar30 = 1;
  }
  if (uVar30 == uVar8 || uVar30 < uVar8) {
    uVar30 = (uint)uVar8;
  }
  lVar28 = *(long *)PTR_DAT_04bb29d0 / 1000000;
  if ((uVar21 * 2 < uVar18) && (uVar23 * 2 < uVar30)) {
    local_194 = 0;
    local_190 = puVar26;
    do {
      lVar36 = *(long *)PTR_DAT_04bbd510;
      if (*puVar1 == 0) {
        local_f0 = &PTR_LAB_048f9770;
        local_e8 = "volume mask - temp shadow";
        lVar17 = nn::os::GetTlsValue(DAT_05ae7898);
        if (lVar17 == 0) {
          local_7c = nn::os::GetCurrentCoreNumber();
        }
        else {
          local_7c = (int)lVar17 + -1;
        }
        uVar31 = 1;
        uVar42 = 1;
      }
      else {
        local_f0 = &PTR_LAB_048f9770;
        local_e8 = "volume mask - temp shadow";
        uVar42 = *puVar1;
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar17 == 0) {
          local_7c = nn::os::GetCurrentCoreNumber();
        }
        else {
          local_7c = (int)lVar17 + -1;
        }
        uVar31 = 4;
      }
      puVar26 = (undefined4 *)
                FUN_03948e10(lVar36,param_2,lVar36 + (long)local_7c * 0x290 + 0x10,&local_f0,0x5a,
                             uVar31,uVar18 >> 1,uVar30 >> 1,1,0,uVar42,0,1,0,0,0);
      *puVar4 = *local_190;
      *(undefined4 *)(lVar27 + 0x5f4) = local_190[1];
      *(undefined8 *)(lVar27 + 0x5f8) = *(undefined8 *)(local_190 + 2);
      *(undefined8 *)(lVar27 + 0x600) = *(undefined8 *)(local_190 + 4);
      *(undefined4 *)(lVar27 + 0x608) = local_190[6];
      *(undefined4 *)(lVar27 + 0x60c) = local_190[7];
      *(undefined8 *)(lVar27 + 0x610) = *(undefined8 *)(local_190 + 8);
      *(undefined8 *)(lVar27 + 0x618) = *(undefined8 *)(local_190 + 10);
      uVar31 = *(undefined8 *)puVar35;
      uVar16 = *(undefined8 *)(puVar35 + 4);
      uVar25 = *(undefined8 *)(puVar35 + 8);
      *(undefined8 *)(lVar27 + 0x637) = *(undefined8 *)((long)puVar35 + 0x17);
      *(undefined8 *)(lVar27 + 0x628) = uVar16;
      *(undefined8 *)(lVar27 + 0x630) = uVar25;
      *(undefined8 *)(lVar27 + 0x620) = uVar31;
      FUN_038fd1e0(lVar27 + 0x640);
      FUN_038fd2f0(lVar27 + 0x640,local_190 + 0x14);
      uVar31 = *(undefined8 *)(local_190 + 0x24);
      *(undefined4 *)(lVar27 + 0x688) = local_190[0x26];
      *(undefined8 *)(lVar27 + 0x680) = uVar31;
      do {
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar14) {
          *puVar2 = *puVar2 | 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      local_f0 = (undefined **)CONCAT44(1.0 / (float)uVar30,1.0 / (float)uVar18);
      do {
        uVar18 = *puVar3;
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar14) {
          *puVar3 = uVar18 | 0x80000000;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if ((uVar18 & 0x7fffffff) != 0) {
        if ((int)uVar18 < 0) {
          while ((int)*puVar3 < 0) {
            nn::os::ConvertToTimeSpan(lVar28);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar19);
        }
      }
      do {
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar14) {
          *puVar3 = 0;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      lVar36 = 0xd8;
      if (*(uint *)(lVar19 + 0x30) < 10) {
        lVar36 = 0;
      }
      iVar11 = *(int *)(*(long *)(lVar19 + 0x38) + lVar36);
      if (iVar11 != -1) {
        (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar11,8,&local_f0);
      }
      do {
        uVar18 = *puVar3;
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar14) {
          *puVar3 = uVar18 | 0x80000000;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if ((uVar18 & 0x7fffffff) != 0) {
        if ((int)uVar18 < 0) {
          while ((int)*puVar3 < 0) {
            nn::os::ConvertToTimeSpan(lVar28);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar19);
        }
      }
      do {
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar14) {
          *puVar3 = 0;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      FUN_0390d290(puVar4,param_2,*(undefined8 *)(lVar19 + 0x68),0xffffffff,0);
      if (*puVar1 != 0) {
        uVar18 = 0;
        do {
          lVar36 = *(long *)(param_1 + 0x238);
          uVar30 = param_3;
          if (*(uint *)(param_1 + 0x230) <= param_3) {
            uVar30 = 0;
          }
          lVar17 = lVar36 + (long)(int)uVar30 * 0x6d0;
          *(undefined8 *)(lVar17 + 0x428) = 0;
          *(undefined8 *)(lVar17 + 0x420) = 0;
          *(undefined8 *)(lVar17 + 0x418) = 0;
          *(undefined8 *)(lVar17 + 0x410) = 0;
          *(undefined8 *)(lVar17 + 0x408) = 0;
          *(undefined8 *)(lVar17 + 0x400) = 0;
          *(undefined8 *)(lVar17 + 0x3f8) = 0;
          *(undefined8 *)(lVar17 + 0x3f0) = 0;
          *(undefined8 *)(lVar17 + 1000) = 0;
          if (puVar26 == (undefined4 *)0x0) {
            fVar37 = 0.0;
            fVar38 = 0.0;
          }
          else {
            lVar33 = lVar36 + (long)(int)uVar30 * 0x6d0;
            uVar9 = *(ushort *)(puVar26 + 0xc);
            sVar7 = *(short *)((long)puVar26 + 0x3a);
            uVar10 = *(ushort *)((long)puVar26 + 0x32);
            *(undefined4 *)(lVar33 + 0x518) = *puVar26;
            plVar5 = (long *)(lVar33 + 0x510);
            uVar8 = uVar10;
            if (sVar7 != 3) {
              uVar8 = 1;
            }
            cVar12 = *(char *)(lVar33 + 0x5ce);
            *(undefined4 *)(lVar33 + 0x51c) = puVar26[1];
            sVar7 = *(short *)(lVar33 + 0x5cc);
            *(undefined8 *)(lVar33 + 0x520) = *(undefined8 *)(puVar26 + 2);
            *(undefined8 *)(lVar33 + 0x528) = *(undefined8 *)(puVar26 + 4);
            *(undefined4 *)(lVar33 + 0x530) = puVar26[6];
            *(undefined4 *)(lVar33 + 0x534) = puVar26[7];
            *(undefined8 *)(lVar33 + 0x538) = *(undefined8 *)(puVar26 + 8);
            *(undefined8 *)(lVar33 + 0x540) = *(undefined8 *)(puVar26 + 10);
            uVar25 = *(undefined8 *)(puVar26 + 0x10);
            uVar31 = *(undefined8 *)(puVar26 + 0xc);
            uVar16 = *(undefined8 *)(puVar26 + 0xe);
            *(undefined8 *)(lVar33 + 0x55f) = *(undefined8 *)((long)puVar26 + 0x47);
            *(undefined8 *)(lVar33 + 0x558) = uVar25;
            *(undefined8 *)(lVar33 + 0x550) = uVar16;
            *(undefined8 *)(lVar33 + 0x548) = uVar31;
            FUN_038fd1e0(lVar33 + 0x568);
            FUN_038fd2f0(lVar33 + 0x568,puVar26 + 0x14);
            puVar6 = (uint *)(lVar33 + 0x5c8);
            uVar31 = *(undefined8 *)(puVar26 + 0x24);
            *(undefined4 *)(lVar33 + 0x5b0) = puVar26[0x26];
            *(undefined8 *)(lVar33 + 0x5a8) = uVar31;
            do {
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar14) {
                *puVar6 = *puVar6 & 0xfffffffb | 4;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (uVar9 < 2) {
              uVar9 = 1;
            }
            if (uVar8 <= uVar10) {
              uVar8 = uVar10;
            }
            if (*(short *)(lVar33 + 0x5cc) != sVar7) {
              do {
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar14) {
                  *puVar6 = *puVar6 & 0xfffffffd | 2;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              *(short *)(lVar33 + 0x5cc) = sVar7;
            }
            if (*(char *)(lVar33 + 0x5ce) != cVar12) {
              do {
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar14) {
                  *puVar6 = *puVar6 | 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              *(char *)(lVar33 + 0x5ce) = cVar12;
            }
            (**(code **)(*plVar5 + 0x10))(plVar5);
            lVar20 = lVar36 + (long)(int)uVar30 * 0x6d0;
            if ((*(long *)(lVar20 + 0x5e0) != 0 || *(int *)(lVar20 + 0x5d8) != 0) ||
               (*(int *)(lVar36 + (long)(int)uVar30 * 0x6d0 + 0x5dc) != 0)) {
              *(undefined8 *)(lVar20 + 0x5e0) = 0;
              *(undefined8 *)(lVar20 + 0x5e8) = 0;
              *(undefined8 *)(lVar20 + 0x5d8) = 0;
              do {
                cVar12 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar14) {
                  *puVar6 = *puVar6 & 0xfffffff7 | 8;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            if (uVar18 != *(ushort *)(lVar33 + 0x5cc)) {
              do {
                cVar12 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar14) {
                  *puVar6 = *puVar6 & 0xfffffffd | 2;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              *(short *)(lVar33 + 0x5cc) = (short)uVar18;
            }
            fVar37 = (float)uVar9;
            *(long **)(lVar17 + 0x428) = plVar5;
            fVar38 = (float)uVar8;
          }
          fVar41 = fVar37;
          if (fVar37 <= 0.0) {
            fVar41 = 0.0;
          }
          plVar5 = (long *)(lVar17 + 0x3c8);
          fVar40 = fVar38;
          if (fVar38 <= 0.0) {
            fVar40 = 0.0;
          }
          *(float *)(lVar17 + 0x3d0) = fVar37;
          *(float *)(lVar17 + 0x3d4) = fVar38;
          fVar39 = 0.0;
          if (fVar37 <= 0.0) {
            fVar39 = fVar37;
          }
          *(float *)(lVar17 + 0x3e0) = fVar41;
          *(float *)(lVar17 + 0x3e4) = fVar40;
          fVar37 = 0.0;
          if (fVar38 <= 0.0) {
            fVar37 = fVar38;
          }
          *(float *)(lVar17 + 0x3d8) = fVar39;
          *(float *)(lVar17 + 0x3dc) = fVar37;
          (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
          if (uVar18 == 0) {
            local_e8 = (char *)0x7f7fffff7f7fffff;
            local_e0 = 0xff7fffffff7fffff;
            local_f0 = &PTR_LAB_04b65888;
            local_d4 = 0x3f80000000000000;
            local_d8 = DAT_05ae77d0;
            if (DAT_05ae77d0 < 6) {
              if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
                fVar38 = *(float *)(lVar17 + 0x3d0);
                fVar37 = *(float *)(lVar17 + 0x3d4);
              }
              else {
                fVar37 = *(float *)(lVar17 + 0x3d0);
                fVar38 = *(float *)(lVar17 + 0x3d4);
              }
              fVar41 = fVar37;
              if (fVar37 <= 0.0) {
                fVar41 = 0.0;
              }
              fVar40 = 0.0;
              if (fVar37 <= 0.0) {
                fVar40 = fVar37;
              }
              fVar39 = fVar38;
              fVar37 = 0.0;
              if (fVar38 <= 0.0) {
                fVar39 = 0.0;
                fVar37 = fVar38;
              }
              local_e8 = (char *)CONCAT44(fVar37,fVar40);
              local_e0 = CONCAT44(fVar39,fVar41);
            }
            FUN_038e77e4(&local_f0,param_2,plVar5);
          }
          do {
            uVar30 = *puVar3;
            cVar12 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar14) {
              *puVar3 = uVar30 | 0x80000000;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((uVar30 & 0x7fffffff) != 0) {
            if ((int)uVar30 < 0) {
              while ((int)*puVar3 < 0) {
                nn::os::ConvertToTimeSpan(lVar28);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar19);
            }
          }
          do {
            cVar12 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar14) {
              *puVar3 = 0;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          local_f0 = (undefined **)CONCAT44(local_f0._4_4_,(float)uVar18);
          if (**(int **)(lVar19 + 0x38) != -1) {
            (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                            *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                            *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                            (long)**(int **)(lVar19 + 0x38),4,&local_f0);
          }
          lVar36 = DAT_05ae9100;
          iVar11 = *(int *)(DAT_05ae9100 + 0x480);
          if (iVar11 != 0) {
            uVar24 = *(undefined4 *)(DAT_05ae9100 + 0x464);
            uVar16 = *(undefined8 *)(param_2 + 0xb8);
            uVar31 = (**(code **)PTR_DAT_04bbd560)(DAT_05ae9100 + 0x488);
            (**(code **)PTR_DAT_04bbd568)
                      (uVar16,uVar24,*(undefined4 *)(lVar36 + 0x460),iVar11,uVar31);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *puVar1);
      }
      if (local_194 != 0) {
        FUN_039499cc(DAT_05ae90c0,local_190);
      }
      if (*(int *)(lVar27 + 0x568) == -1) {
        if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
          uVar18 = 0;
          if (~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da) < *(uint *)(DAT_05ae78f0 + 0x368)) {
            uVar18 = ~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
          }
          if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar18 * 0x20 + 4) >> 2 & 1)
              != 0) goto LAB_03a775e0;
          uVar32 = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        }
        else {
LAB_03a775e0:
          if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
            uVar22 = 0x112;
            uVar24 = 0x12;
          }
          else {
            uVar22 = 0x111;
            uVar24 = 0x11;
          }
          if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
            uVar24 = uVar22;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar24);
          uVar32 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar32;
      }
      local_194 = local_194 + 1;
      puVar35 = (ushort *)(puVar26 + 0xc);
      uVar8 = *(ushort *)((long)puVar26 + 0x32);
      uVar18 = (uint)*puVar35;
      if (*puVar35 < 2) {
        uVar18 = 1;
      }
      uVar30 = (uint)uVar8;
      if (*(short *)((long)puVar26 + 0x3a) != 3) {
        uVar30 = 1;
      }
      if (uVar30 == uVar8 || uVar30 < uVar8) {
        uVar30 = (uint)uVar8;
      }
    } while ((uVar21 * 2 < uVar18) && (local_190 = puVar26, uVar23 * 2 < uVar30));
  }
  *puVar4 = *puVar26;
  *(undefined4 *)(lVar27 + 0x5f4) = puVar26[1];
  *(undefined8 *)(lVar27 + 0x5f8) = *(undefined8 *)(puVar26 + 2);
  *(undefined8 *)(lVar27 + 0x600) = *(undefined8 *)(puVar26 + 4);
  *(undefined4 *)(lVar27 + 0x608) = puVar26[6];
  *(undefined4 *)(lVar27 + 0x60c) = puVar26[7];
  *(undefined8 *)(lVar27 + 0x610) = *(undefined8 *)(puVar26 + 8);
  *(undefined8 *)(lVar27 + 0x618) = *(undefined8 *)(puVar26 + 10);
  uVar31 = *(undefined8 *)puVar35;
  uVar16 = *(undefined8 *)(puVar35 + 4);
  uVar25 = *(undefined8 *)(puVar35 + 8);
  *(undefined8 *)(lVar27 + 0x637) = *(undefined8 *)((long)puVar35 + 0x17);
  *(undefined8 *)(lVar27 + 0x628) = uVar16;
  *(undefined8 *)(lVar27 + 0x630) = uVar25;
  *(undefined8 *)(lVar27 + 0x620) = uVar31;
  FUN_038fd1e0(lVar27 + 0x640);
  FUN_038fd2f0(lVar27 + 0x640,puVar26 + 0x14);
  uVar31 = *(undefined8 *)(puVar26 + 0x24);
  *(undefined4 *)(lVar27 + 0x688) = puVar26[0x26];
  *(undefined8 *)(lVar27 + 0x680) = uVar31;
  do {
    cVar12 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar14) {
      *puVar2 = *puVar2 | 1;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  local_f0 = (undefined **)CONCAT44(1.0 / (float)uVar30,1.0 / (float)uVar18);
  do {
    uVar18 = *puVar3;
    cVar12 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = uVar18 | 0x80000000;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      while ((int)*puVar3 < 0) {
        nn::os::ConvertToTimeSpan(lVar28);
        nn::os::SleepThread();
      }
    }
    else {
      FUN_03907b80(lVar19);
    }
  }
  do {
    cVar12 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = 0;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  lVar36 = 0xd8;
  if (*(uint *)(lVar19 + 0x30) < 10) {
    lVar36 = 0;
  }
  iVar11 = *(int *)(*(long *)(lVar19 + 0x38) + lVar36);
  if (iVar11 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar11,8,&local_f0);
  }
  do {
    uVar18 = *puVar3;
    cVar12 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = uVar18 | 0x80000000;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  if ((uVar18 & 0x7fffffff) != 0) {
    if ((int)uVar18 < 0) {
      while ((int)*puVar3 < 0) {
        nn::os::ConvertToTimeSpan(lVar28);
        nn::os::SleepThread();
      }
    }
    else {
      FUN_03907b80(lVar19);
    }
  }
  do {
    cVar12 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = 0;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  FUN_0390d290(puVar4,param_2,*(undefined8 *)(lVar19 + 0x68),0xffffffff,0);
  if (*puVar1 != 0) {
    uVar18 = 0;
    do {
      local_f8 = 0;
      local_108 = 0;
      uStack_100 = 0;
      FUN_03a75a00(param_1,param_2,param_3,0,*(undefined8 *)(lVar34 + 0x2e0),&local_108,uVar18,
                   uVar18 == 0);
      do {
        uVar23 = *puVar3;
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar14) {
          *puVar3 = uVar23 | 0x80000000;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if ((uVar23 & 0x7fffffff) != 0) {
        if ((int)uVar23 < 0) {
          while ((int)*puVar3 < 0) {
            nn::os::ConvertToTimeSpan(lVar28);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar19);
        }
      }
      do {
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar14) {
          *puVar3 = 0;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      local_f0 = (undefined **)CONCAT44(local_f0._4_4_,(float)uVar18);
      if (**(int **)(lVar19 + 0x38) != -1) {
        (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                        (long)**(int **)(lVar19 + 0x38),4,&local_f0);
      }
      lVar36 = DAT_05ae9100;
      iVar11 = *(int *)(DAT_05ae9100 + 0x480);
      if (iVar11 != 0) {
        uVar24 = *(undefined4 *)(DAT_05ae9100 + 0x464);
        uVar16 = *(undefined8 *)(param_2 + 0xb8);
        uVar31 = (**(code **)PTR_DAT_04bbd560)(DAT_05ae9100 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar16,uVar24,*(undefined4 *)(lVar36 + 0x460),iVar11,uVar31);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *puVar1);
  }
  if (*(int *)(lVar27 + 0x568) == -1) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar18 = 0;
      if (~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da) < *(uint *)(DAT_05ae78f0 + 0x368)) {
        uVar18 = ~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar18 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        goto LAB_03a77a44;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar22 = 0x112;
      uVar24 = 0x12;
    }
    else {
      uVar22 = 0x111;
      uVar24 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar24 = uVar22;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar24);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a77a44:
  if (local_194 != 0) {
    FUN_039499cc(DAT_05ae90c0,puVar26);
  }
  return;
}

