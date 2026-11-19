
void FUN_03912de0(float param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 int *param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  uint uVar21;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  undefined2 local_f0 [2];
  uint local_ec;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_8b;
  uint local_7c [3];
  
  FUN_038e4cec(local_f0);
  local_8b = 0;
  param_2 = param_2 + 0x2730;
  lVar13 = 0;
  local_ec = local_ec | 1;
  lVar16 = 0;
  local_f0[0] = 1;
  lVar8 = *(long *)PTR_DAT_04bb29d0 / 1000000;
  do {
    if ((*(char *)(param_2 + lVar13 * 0x60) != '\0') &&
       (plVar15 = (long *)(param_2 + lVar13 * 0x60 + 0x18), *plVar15 != 0)) {
      plVar10 = (long *)(param_2 + lVar13 * 0x60 + 0x58);
      iVar3 = *(int *)plVar10;
      if (*param_6 != iVar3) {
        *param_6 = iVar3;
        lVar11 = *plVar10;
        if (lVar11 == 0) {
          local_c6 = 2;
LAB_03912edc:
          local_c8 = 0x505;
          local_c5 = local_c6;
        }
        else if (lVar11 == 1) {
          local_c6 = 6;
          goto LAB_03912edc;
        }
        FUN_038e4d90(local_f0,param_3);
      }
      plVar10 = (long *)(param_2 + lVar13 * 0x60 + 0x30);
      lVar11 = 0x18;
      if (*plVar10 != 0) {
        lVar11 = 0x28;
      }
      lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x360) +
                                  8) + lVar11);
      if (lVar16 != lVar11) {
        FUN_03907810(lVar11,param_3);
        puVar1 = (uint *)(lVar11 + 0x14);
        do {
          uVar21 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar21 | 0x80000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar8);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar11);
          }
        }
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (**(int **)(lVar11 + 0x38) != -1) {
          (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                          (long)**(int **)(lVar11 + 0x38),0x40,param_4);
        }
        do {
          uVar21 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar21 | 0x80000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar8);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar11);
          }
        }
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + (ulong)(1 < *(uint *)(lVar11 + 0x30)) * 0x18);
        if (iVar3 != -1) {
          (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,0x30,param_5
                         );
        }
        do {
          uVar21 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar21 | 0x80000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar8);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar11);
          }
        }
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar16 = 0x48;
        if (*(uint *)(lVar11 + 0x30) < 4) {
          lVar16 = 0;
        }
        iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + lVar16);
        local_100 = param_1;
        if (iVar3 != -1) {
          (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,4,&local_100
                         );
        }
        uVar17 = *(undefined8 *)(param_3 + 0xb8);
        lVar14 = *(long *)PTR_DAT_04bbd7e0;
        (*DAT_04c62868)(uVar17,0x10,lVar14 + 0xe44);
        (**(code **)PTR_DAT_04bcf1b0)(uVar17,0x10,lVar14 + 0xe88);
        iVar3 = *(int *)(lVar14 + 0xe30);
        lVar16 = lVar11;
        if (iVar3 != 0) {
          lVar11 = *(long *)(lVar14 + 0xe38);
          uVar18 = 0;
          uVar19 = 0;
          do {
            lVar14 = *(long *)(lVar11 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
            if (lVar14 != 0) {
              uVar9 = (**(code **)PTR_DAT_04bbd560)(lVar14 + 8);
              (**(code **)PTR_DAT_04bcf1e8)
                        (uVar17,uVar18 & 0xffffffff,uVar9,*(undefined4 *)(lVar14 + 0x118));
            }
            uVar18 = uVar19 + 1;
            uVar19 = uVar18 & 0xffffffff;
          } while (iVar3 != (int)uVar18);
        }
      }
      puVar1 = (uint *)(lVar16 + 0x14);
      pfVar12 = *(float **)(*plVar15 + 0x10);
      fVar20 = *(float *)(param_2 + lVar13 * 0x60 + 0x50);
      local_f4 = 0x3f800000;
      fStack_fc = -(pfVar12[1] * fVar20);
      local_100 = -(*pfVar12 * fVar20);
      local_f8 = -(pfVar12[2] * fVar20);
      do {
        uVar21 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar21 | 0x80000000;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar21 & 0x7fffffff) != 0) {
        if ((int)uVar21 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar8);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar16);
        }
      }
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar11 = 0x30;
      if (*(uint *)(lVar16 + 0x30) < 3) {
        lVar11 = 0;
      }
      iVar3 = *(int *)(*(long *)(lVar16 + 0x38) + lVar11);
      if (iVar3 != -1) {
        (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,0x10,
                        &local_100);
      }
      uVar21 = *(uint *)(param_2 + lVar13 * 0x60 + 0x3c);
      do {
        uVar5 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar5 | 0x80000000;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar5 & 0x7fffffff) != 0) {
        if ((int)uVar5 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar8);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar16);
        }
      }
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar11 = 0x60;
      if (*(uint *)(lVar16 + 0x30) < 5) {
        lVar11 = 0;
      }
      iVar3 = *(int *)(*(long *)(lVar16 + 0x38) + lVar11);
      local_7c[0] = uVar21;
      if (iVar3 != -1) {
        (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,4,local_7c);
      }
      do {
        uVar21 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar21 | 0x80000000;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar21 & 0x7fffffff) != 0) {
        if ((int)uVar21 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar8);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar16);
        }
      }
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar11 = 0x78;
      if (*(uint *)(lVar16 + 0x30) < 6) {
        lVar11 = 0;
      }
      iVar3 = *(int *)(*(long *)(lVar16 + 0x38) + lVar11);
      if (iVar3 != -1) {
        (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,0x10,
                        param_2 + lVar13 * 0x60 + 0x40);
      }
      uVar21 = *(uint *)(param_2 + lVar13 * 0x60 + 0x38);
      do {
        uVar5 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar5 | 0x80000000;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar5 & 0x7fffffff) != 0) {
        if ((int)uVar5 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar8);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar16);
        }
      }
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar11 = 0x90;
      if (*(uint *)(lVar16 + 0x30) < 7) {
        lVar11 = 0;
      }
      iVar3 = *(int *)(*(long *)(lVar16 + 0x38) + lVar11);
      local_7c[0] = uVar21;
      if (iVar3 != -1) {
        (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,4,local_7c);
      }
      if (*plVar10 == 0) {
        uVar17 = *(undefined8 *)(DAT_05ae9110 + 0x40);
        do {
          uVar21 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar21 | 0x80000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar8);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar16);
          }
        }
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      else {
        bVar4 = *(byte *)(*(long *)(*plVar10 + 0x10) + 0xd8);
        do {
          uVar21 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar21 | 0x80000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar8);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar16);
          }
        }
        local_7c[0] = bVar4 & 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar11 = 0xa8;
        if (*(uint *)(lVar16 + 0x30) < 8) {
          lVar11 = 0;
        }
        iVar3 = *(int *)(*(long *)(lVar16 + 0x38) + lVar11);
        if (iVar3 != -1) {
          (*DAT_04c62af0)(*(undefined8 *)(param_3 + 0xb8),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,4,local_7c);
        }
        uVar17 = *(undefined8 *)(*plVar10 + 0x10);
        do {
          uVar21 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar21 | 0x80000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar21 & 0x7fffffff) != 0) {
          if ((int)uVar21 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar8);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar16);
          }
        }
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_0390d290(uVar17,param_3,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
      lVar11 = DAT_05ae9100;
      iVar3 = *(int *)(DAT_05ae9100 + 0x1f8);
      if (iVar3 != 0) {
        uVar2 = *(undefined4 *)(DAT_05ae9100 + 0x1dc);
        uVar9 = *(undefined8 *)(param_3 + 0xb8);
        uVar17 = (*DAT_04c620e0)(DAT_05ae9100 + 0x200);
        (**(code **)PTR_DAT_04bbd568)(uVar9,uVar2,*(undefined4 *)(lVar11 + 0x1d8),iVar3,uVar17);
      }
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 8) {
      return;
    }
  } while( true );
}

