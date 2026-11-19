
void FUN_039448b0(int param_1,int param_2,long param_3,long param_4,ulong param_5,long param_6,
                 long param_7)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 local_5d4 [64];
  undefined4 local_3d4 [128];
  undefined2 local_1d4 [2];
  uint local_1d0;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined7 uStack_120;
  undefined1 local_119;
  undefined7 uStack_118;
  undefined1 auStack_110 [64];
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_8c;
  short local_86;
  int local_7c [3];
  
  if (*(long *)(param_4 + 0x60) != 0) {
    iVar3 = (int)param_5;
    FUN_0390cee0(&local_160);
    lVar18 = *(long *)(param_4 + 0x60);
    local_160 = *(undefined4 *)(lVar18 + 8);
    uStack_15c = *(undefined4 *)(lVar18 + 0xc);
    local_158 = *(undefined8 *)(lVar18 + 0x10);
    uStack_150 = *(undefined8 *)(lVar18 + 0x18);
    local_148 = *(undefined4 *)(lVar18 + 0x20);
    uStack_144 = *(undefined4 *)(lVar18 + 0x24);
    local_140 = *(undefined8 *)(lVar18 + 0x28);
    uStack_138 = *(undefined8 *)(lVar18 + 0x30);
    local_130 = *(undefined8 *)(lVar18 + 0x38);
    local_128 = *(undefined8 *)(lVar18 + 0x40);
    uStack_120 = (undefined7)*(undefined8 *)(lVar18 + 0x48);
    local_119 = (undefined1)*(undefined8 *)(lVar18 + 0x4f);
    uStack_118 = (undefined7)((ulong)*(undefined8 *)(lVar18 + 0x4f) >> 8);
    FUN_038fd1e0(auStack_110);
    FUN_038fd2f0(auStack_110,lVar18 + 0x58);
    local_d0 = *(undefined8 *)(lVar18 + 0x98);
    local_c8 = *(undefined4 *)(lVar18 + 0xa0);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(&local_8c,0x10);
      if (bVar7) {
        cVar6 = ExclusiveMonitorsStatus();
        local_8c = local_8c | 1;
      }
    } while (cVar6 != '\0');
    FUN_038e4cec(local_1d4);
    local_1d4[0] = 0;
    local_1d0 = local_1d0 | 1;
    FUN_038e4d90(local_1d4,param_3);
    local_5d4[0] = 0;
    local_5d4[0x1f] = 0x3f80000000000000;
    local_5d4[1] = 0x3f80000000000000;
    local_5d4[0x20] = 0;
    local_5d4[2] = 0;
    local_5d4[0x21] = 0x3f80000000000000;
    local_5d4[3] = 0x3f80000000000000;
    local_5d4[0x22] = 0;
    local_5d4[4] = 0;
    local_5d4[0x23] = 0x3f80000000000000;
    local_5d4[5] = 0x3f80000000000000;
    local_5d4[0x24] = 0;
    local_5d4[6] = 0;
    local_5d4[0x25] = 0x3f80000000000000;
    local_5d4[7] = 0x3f80000000000000;
    local_5d4[0x26] = 0;
    local_5d4[8] = 0;
    local_5d4[0x27] = 0x3f80000000000000;
    local_5d4[9] = 0x3f80000000000000;
    local_5d4[0x28] = 0;
    local_5d4[10] = 0;
    local_5d4[0x29] = 0x3f80000000000000;
    local_5d4[0xb] = 0x3f80000000000000;
    local_5d4[0x2a] = 0;
    local_5d4[0xc] = 0;
    local_5d4[0x2b] = 0x3f80000000000000;
    local_5d4[0xd] = 0x3f80000000000000;
    local_5d4[0x2c] = 0;
    local_5d4[0xe] = 0;
    local_5d4[0x2d] = 0x3f80000000000000;
    local_5d4[0xf] = 0x3f80000000000000;
    local_5d4[0x2e] = 0;
    local_5d4[0x10] = 0;
    local_5d4[0x2f] = 0x3f80000000000000;
    local_5d4[0x11] = 0x3f80000000000000;
    local_5d4[0x30] = 0;
    local_5d4[0x12] = 0;
    local_5d4[0x31] = 0x3f80000000000000;
    local_5d4[0x13] = 0x3f80000000000000;
    local_5d4[0x32] = 0;
    local_5d4[0x14] = 0;
    local_5d4[0x33] = 0x3f80000000000000;
    local_5d4[0x15] = 0x3f80000000000000;
    local_5d4[0x34] = 0;
    local_5d4[0x16] = 0;
    local_5d4[0x35] = 0x3f80000000000000;
    local_5d4[0x17] = 0x3f80000000000000;
    local_5d4[0x36] = 0;
    local_5d4[0x18] = 0;
    local_5d4[0x37] = 0x3f80000000000000;
    local_5d4[0x19] = 0x3f80000000000000;
    local_5d4[0x38] = 0;
    local_5d4[0x1a] = 0;
    local_5d4[0x39] = 0x3f80000000000000;
    local_5d4[0x1b] = 0x3f80000000000000;
    local_5d4[0x3a] = 0;
    local_5d4[0x1c] = 0;
    local_5d4[0x3b] = 0x3f80000000000000;
    local_5d4[0x1d] = 0x3f80000000000000;
    local_5d4[0x3c] = 0;
    local_5d4[0x1e] = 0;
    local_5d4[0x3d] = 0x3f80000000000000;
    local_5d4[0x3e] = 0;
    local_5d4[0x3f] = 0x3f80000000000000;
    if (iVar3 != 0) {
      uVar13 = 0;
      do {
        if (iVar3 == 1) {
          uVar16 = 0;
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          uVar11 = 0;
          do {
            uVar16 = uVar11;
            if (uVar13 != uVar16) {
              uVar14 = (uint)uVar15;
              if (*(float *)(param_6 + uVar16 * 4) < *(float *)(param_6 + uVar13 * 4)) {
                uVar14 = uVar14 + 1;
              }
              uVar15 = (ulong)uVar14;
            }
            if ((uVar16 + 1 != uVar13) &&
               (*(float *)(param_6 + uVar16 * 4 + 4) < *(float *)(param_6 + uVar13 * 4))) {
              uVar15 = (ulong)((int)uVar15 + 1);
            }
            uVar11 = uVar16 + 2;
          } while (uVar16 + 2 != (param_5 & 0xfffffffe));
          uVar16 = uVar16 + 2;
        }
        if (((param_5 & 1) != 0) && (uVar16 != uVar13)) {
          uVar14 = (uint)uVar15;
          if (*(float *)(param_6 + uVar16 * 4) < *(float *)(param_6 + uVar13 * 4)) {
            uVar14 = uVar14 + 1;
          }
          uVar15 = (ulong)uVar14;
        }
        puVar2 = (undefined8 *)(param_7 + uVar13 * 0x10);
        lVar18 = uVar13 * 4;
        uVar15 = -(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4;
        uVar13 = uVar13 + 1;
        uVar17 = *puVar2;
        uVar12 = puVar2[1];
        *(undefined4 *)((long)local_3d4 + uVar15) = *(undefined4 *)(param_6 + lVar18);
        *(undefined8 *)((long)local_5d4 + uVar15) = uVar17;
        *(undefined8 *)((long)local_5d4 + uVar15 + 8) = uVar12;
      } while (uVar13 != (param_5 & 0xffffffff));
    }
    if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 5) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x20);
    }
    FUN_03907810(lVar18,param_3);
    puVar1 = (uint *)(lVar18 + 0x14);
    do {
      uVar14 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar14 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar14 & 0x7fffffff) != 0) {
      if ((int)uVar14 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar18);
      }
    }
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
      puVar10 = PTR_DAT_04bd0fc8;
      puVar9 = PTR_DAT_04bcf2e0;
    } while (cVar6 != '\0');
    local_7c[0] = param_1;
    if (**(int **)(lVar18 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar18 + 0x38),4
                 ,local_7c);
    }
    do {
      uVar14 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar14 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar14 & 0x7fffffff) != 0) {
      if ((int)uVar14 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar18);
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
    iVar5 = *(int *)(*(long *)(lVar18 + 0x38) + (ulong)(1 < *(uint *)(lVar18 + 0x30)) * 0x18);
    local_7c[0] = param_2;
    if (iVar5 != -1) {
      (**(code **)puVar9)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                          *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,4,local_7c);
    }
    do {
      uVar14 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar14 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar14 & 0x7fffffff) != 0) {
      if ((int)uVar14 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar18);
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
    lVar19 = 0x60;
    if (*(uint *)(lVar18 + 0x30) < 5) {
      lVar19 = 0;
    }
    iVar5 = *(int *)(*(long *)(lVar18 + 0x38) + lVar19);
    local_7c[0] = iVar3;
    if (iVar5 != -1) {
      (**(code **)puVar9)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                          *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,4,local_7c);
    }
    do {
      uVar14 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar14 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar14 & 0x7fffffff) != 0) {
      if ((int)uVar14 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar18);
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
    lVar19 = 0x30;
    if (*(uint *)(lVar18 + 0x30) < 3) {
      lVar19 = 0;
    }
    iVar5 = *(int *)(*(long *)(lVar18 + 0x38) + lVar19);
    if (iVar5 != -1) {
      (**(code **)puVar9)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                          *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,
                          (ulong)(uint)(iVar3 << 2) << 2,local_3d4);
    }
    do {
      uVar14 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar14 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar14 & 0x7fffffff) != 0) {
      if ((int)uVar14 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar18);
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
    lVar19 = 0x48;
    if (*(uint *)(lVar18 + 0x30) < 4) {
      lVar19 = 0;
    }
    iVar5 = *(int *)(*(long *)(lVar18 + 0x38) + lVar19);
    if (iVar5 != -1) {
      (**(code **)puVar9)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                          *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,
                          (ulong)(uint)(iVar3 << 2) << 2,local_5d4);
    }
    do {
      uVar14 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar14 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar14 & 0x7fffffff) != 0) {
      if ((int)uVar14 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar18);
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
    FUN_0390d290(&local_160,param_3,*(undefined8 *)(lVar18 + 0x68),0xffffffff,0);
    uVar17 = *(undefined8 *)(param_3 + 0xb8);
    lVar18 = *(long *)PTR_DAT_04bbd7e0;
    (**(code **)PTR_DAT_04bcf1a8)(uVar17,0x10,lVar18 + 0x1024);
    (**(code **)PTR_DAT_04bcf1b0)(uVar17,0x10,lVar18 + 0x1068);
    puVar10 = PTR_DAT_04bcf1e8;
    puVar9 = PTR_DAT_04bbd560;
    iVar3 = *(int *)(lVar18 + 0x1010);
    if (iVar3 != 0) {
      lVar18 = *(long *)(lVar18 + 0x1018);
      uVar13 = 0;
      uVar15 = 0;
      do {
        lVar19 = *(long *)(lVar18 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
        if (lVar19 != 0) {
          uVar12 = (**(code **)puVar9)(lVar19 + 8);
          (**(code **)puVar10)(uVar17,uVar13 & 0xffffffff,uVar12,*(undefined4 *)(lVar19 + 0x118));
        }
        uVar13 = uVar15 + 1;
        uVar15 = uVar13 & 0xffffffff;
      } while (iVar3 != (int)uVar13);
    }
    lVar18 = *(long *)PTR_DAT_04bbd7e8;
    iVar3 = *(int *)(lVar18 + 0x480);
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar18 + 0x464);
      uVar12 = *(undefined8 *)(param_3 + 0xb8);
      uVar17 = (**(code **)puVar9)(lVar18 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar12,uVar4,*(undefined4 *)(lVar18 + 0x460),iVar3,uVar17);
    }
    if (local_86 != -1) {
      lVar18 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
      uVar14 = (int)local_86 - (uint)*(ushort *)(lVar18 + 0x5c0);
      if (*(uint *)(lVar18 + 0x5a0) <= uVar14) {
        uVar14 = 0;
      }
      lVar19 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar14 * 0x80;
      sVar8 = *(short *)(lVar19 + 0x76) + -1;
      *(short *)(lVar19 + 0x76) = sVar8;
      if (sVar8 == 0) {
        *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
      local_86 = -1;
    }
    FUN_038fd0e0(auStack_110);
  }
  return;
}

