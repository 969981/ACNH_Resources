
void FUN_03a9b340(long param_1,long param_2,uint param_3,long *param_4,undefined8 param_5,
                 undefined4 *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100 [3];
  undefined4 uStack_f4;
  undefined2 local_f0 [2];
  uint local_ec;
  float local_7c [3];
  
  lVar24 = *(long *)(param_1 + 0x10);
  uVar3 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar3 = 0;
  }
  puVar21 = (undefined4 *)(lVar24 + (long)(int)uVar3 * 0x118);
  *puVar21 = *param_6;
  puVar21[1] = param_6[1];
  *(undefined8 *)(puVar21 + 2) = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(param_6 + 4);
  puVar21[6] = param_6[6];
  puVar21[7] = param_6[7];
  *(undefined8 *)(puVar21 + 8) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(puVar21 + 10) = *(undefined8 *)(param_6 + 10);
  uVar19 = *(undefined8 *)(param_6 + 0xc);
  uVar12 = *(undefined8 *)(param_6 + 0xe);
  uVar16 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)((long)puVar21 + 0x47) = *(undefined8 *)((long)param_6 + 0x47);
  *(undefined8 *)(puVar21 + 0xc) = uVar19;
  *(undefined8 *)(puVar21 + 0xe) = uVar12;
  *(undefined8 *)(puVar21 + 0x10) = uVar16;
  FUN_038fd1e0(puVar21 + 0x14);
  FUN_038fd2f0(puVar21 + 0x14,param_6 + 0x14);
  uVar5 = param_6[0x26];
  *(undefined8 *)(puVar21 + 0x24) = *(undefined8 *)(param_6 + 0x24);
  puVar1 = puVar21 + 0x35;
  puVar21[0x26] = uVar5;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = *puVar1 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_038e4cec(local_f0);
  local_f0[0] = 0;
  local_ec = local_ec & 0xfffffffe;
  FUN_038e4d90(local_f0,param_2);
  (**(code **)(*param_4 + 0x38))(param_4,param_2);
  FUN_038e77e4(param_5,param_2,param_4);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x43) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x210);
  }
  lVar23 = lVar24 + (long)(int)uVar3 * 0x118;
  uVar6 = *(uint *)(param_1 + 0x48);
  uVar7 = 0;
  if (*(long *)(lVar23 + 0xe0) != 0) {
    uVar7 = uVar6 >> 4 & 1;
  }
  uVar4 = 0;
  if (*(long *)(lVar23 + 0xe8) != 0) {
    uVar4 = uVar6 >> 1 & 1;
  }
  uVar2 = *(long *)(lVar23 + 0xf0) != 0 & uVar6;
  if (uVar2 == 0) {
    lVar14 = *(long *)(lVar14 + 8);
    iVar15 = 0;
    uVar17 = *(uint *)(lVar14 + 0x30);
  }
  else {
    lVar14 = *(long *)(lVar14 + 8);
    uVar17 = (uint)*(ushort *)(*(long *)(lVar14 + 0x38) + 0x30);
    iVar15 = uVar17 + uVar17 * *(int *)(param_1 + 0x1c);
    uVar17 = *(uint *)(lVar14 + 0x30);
  }
  if (uVar4 == 0) {
    lVar18 = *(long *)(lVar14 + 0x38);
  }
  else {
    lVar18 = *(long *)(lVar14 + 0x38);
    iVar15 = iVar15 + (uint)*(ushort *)(lVar18 + (ulong)(1 < uVar17) * 0x38 + 0x30);
  }
  lVar13 = 0x70;
  if (uVar17 < 3) {
    lVar13 = 0;
  }
  iVar15 = iVar15 + *(int *)(param_1 + 0x18) * (uint)*(ushort *)(lVar18 + lVar13 + 0x30);
  if ((uVar6 >> 7 & 1) == 0) {
    if ((uVar6 >> 2 & 1) != 0) {
      lVar13 = 0xa8;
      if (uVar17 < 4) {
        lVar13 = 0;
      }
      iVar15 = iVar15 + (uint)*(ushort *)(lVar18 + lVar13 + 0x30);
    }
  }
  else {
    lVar13 = 0xa8;
    if (uVar17 < 4) {
      lVar13 = 0;
    }
    iVar15 = iVar15 + (uint)*(ushort *)(lVar18 + lVar13 + 0x30) * 2;
  }
  if (iVar15 < 1) {
    lVar14 = *(long *)(lVar14 + 0x18);
  }
  else {
    uVar17 = iVar15 - 1;
    if (*(uint *)(lVar14 + 0x20) <= uVar17) {
      uVar17 = 0;
    }
    lVar14 = *(long *)(lVar14 + 0x28) + (ulong)uVar17 * 0x150;
  }
  if ((uVar6 >> 5 & 1) == 0) {
    local_100[0] = 1.0;
  }
  else {
    if (*(uint *)(param_1 + 8) <= param_3) {
      param_3 = 0;
    }
    local_100[0] = exp2f(*(float *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 0x118 + 0x100))
    ;
  }
  FUN_03907810(lVar14,param_2);
  local_100[2] = *(float *)(param_1 + 0x20);
  uStack_f4 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = (uint *)(lVar14 + 0x14);
  local_100[1] = 1.0;
  do {
    uVar6 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar6 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_0390d290(puVar21,param_2,
               *(long *)(lVar14 + 0x68) + (ulong)(1 < *(uint *)(lVar14 + 0x60)) * 0x18,0xffffffff,0)
  ;
  do {
    uVar6 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar6 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bd0fc8;
    puVar10 = PTR_DAT_04bcf2e0;
  } while (cVar8 != '\0');
  iVar15 = *(int *)(*(long *)(lVar14 + 0x38) + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x18);
  if (iVar15 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar15,0x10,local_100);
  }
  lVar18 = lVar24 + (long)(int)uVar3 * 0x118;
  fVar29 = *(float *)(lVar18 + 0x114) * 0.017453292;
  fVar25 = cosf(fVar29);
  fVar29 = sinf(fVar29);
  fVar26 = *(float *)(lVar18 + 0x108);
  local_108 = 0;
  fStack_114 = fVar25 * fVar26;
  fVar27 = *(float *)(lVar18 + 0x10c) + 0.5;
  fVar28 = *(float *)(lVar18 + 0x110) + -0.5;
  fStack_11c = -(fVar29 * fVar26);
  local_120 = fVar25 * *(float *)(lVar18 + 0x104);
  local_118 = fVar29 * *(float *)(lVar18 + 0x104);
  fStack_10c = fStack_114 * fVar28 + fVar27 * fVar29 * fVar26 + 0.5;
  local_110 = (local_118 * fVar28 - fVar27 * local_120) + 0.5;
  do {
    uVar6 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar6 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  lVar18 = 0x30;
  if (*(uint *)(lVar14 + 0x30) < 3) {
    lVar18 = 0;
  }
  iVar15 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
  if (iVar15 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar15,0x10,&local_120);
  }
  do {
    uVar6 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar6 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  lVar18 = 0x48;
  if (*(uint *)(lVar14 + 0x30) < 4) {
    lVar18 = 0;
  }
  iVar15 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
  if (iVar15 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar15,0x10,&local_110);
  }
  if (*(int *)(param_1 + 0x18) == 5) {
    fVar29 = *(float *)(param_1 + 0x28);
    fStack_13c = *(float *)(param_1 + 0x34);
    fVar27 = *(float *)(param_1 + 0x38);
    local_128 = 1.0 - *(float *)(param_1 + 0x30);
    fStack_12c = -*(float *)(param_1 + 0x30);
    fStack_134 = (1.0 - fStack_13c) * *(float *)(param_1 + 0x2c) - fVar27;
    fVar26 = local_128 * (fVar27 - fVar29);
    fVar25 = fVar26 + (*(float *)(param_1 + 0x2c) - fVar27) * (1.0 - fStack_13c);
    if (fVar25 <= 0.0001) {
      fVar25 = 0.0001;
    }
    fVar26 = fVar26 / fVar25;
    local_130 = local_128 * fVar26;
    fStack_124 = fVar27 - fVar29 * local_128;
    local_128 = local_128 * -(fVar29 * fVar26);
    local_140 = (1.0 - fVar26) + fStack_13c * fVar26;
    local_138 = fStack_134 * fVar26 - fVar27 * (1.0 - fVar26);
    do {
      uVar6 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar6 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar6 & 0x7fffffff) != 0) {
      if ((int)uVar6 < 0) {
        if ((int)*puVar1 < 0) {
          lVar18 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar18 = 0x78;
    if (*(uint *)(lVar14 + 0x30) < 6) {
      lVar18 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
    if (iVar15 != -1) {
      (**(code **)puVar10)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
                 *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar15,0x10,&local_130);
    }
    do {
      uVar6 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar6 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar6 & 0x7fffffff) != 0) {
      if ((int)uVar6 < 0) {
        if ((int)*puVar1 < 0) {
          lVar18 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar18 = 0x90;
    if (*(uint *)(lVar14 + 0x30) < 7) {
      lVar18 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
    if (iVar15 != -1) {
      (**(code **)puVar10)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
                 *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar15,0x10,&local_140);
    }
    do {
      uVar6 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar6 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar6 & 0x7fffffff) != 0) {
      if ((int)uVar6 < 0) {
        if ((int)*puVar1 < 0) {
          lVar18 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar18 = 0xa8;
    if (*(uint *)(lVar14 + 0x30) < 8) {
      lVar18 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
    local_7c[0] = fVar27;
    if (iVar15 != -1) {
      (**(code **)puVar10)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
                 *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar15,4,local_7c);
    }
  }
  if (uVar7 == 0) {
    lVar18 = *(long *)(*(long *)PTR_DAT_04bb31c8 + 0x40);
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar13 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar13 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  else {
    lVar18 = *(long *)(lVar23 + 0xe0);
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar13 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar13 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  FUN_0390d290(lVar18,param_2,*(undefined8 *)(lVar14 + 0x68),0xffffffff,0);
  if (uVar4 != 0) {
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar18 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar18 = 0x60;
    if (*(uint *)(lVar14 + 0x30) < 5) {
      lVar18 = 0;
    }
    iVar15 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
    if (iVar15 != -1) {
      (**(code **)puVar10)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
                 *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar15,8,
                 lVar24 + (long)(int)uVar3 * 0x118 + 0xf8);
    }
    lVar24 = *(long *)(lVar23 + 0xe8);
    do {
      uVar3 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar3 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar3 & 0x7fffffff) != 0) {
      if ((int)uVar3 < 0) {
        if ((int)*puVar1 < 0) {
          lVar18 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar18 = 0x48;
    if (*(uint *)(lVar14 + 0x60) < 4) {
      lVar18 = 0;
    }
    FUN_0390d290(lVar24,param_2,*(long *)(lVar14 + 0x68) + lVar18,0xffffffff,0);
  }
  if (uVar2 != 0) {
    lVar24 = *(long *)(lVar23 + 0xf0);
    do {
      uVar3 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar3 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar3 & 0x7fffffff) != 0) {
      if ((int)uVar3 < 0) {
        if ((int)*puVar1 < 0) {
          lVar23 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar23 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar23 = 0x30;
    if (*(uint *)(lVar14 + 0x60) < 3) {
      lVar23 = 0;
    }
    FUN_0390d290(lVar24,param_2,*(long *)(lVar14 + 0x68) + lVar23,0xffffffff,0);
  }
  uVar19 = *(undefined8 *)(param_2 + 0xb8);
  lVar24 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar19,0x10,lVar24 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar19,0x10,lVar24 + 0x1068);
  puVar11 = PTR_DAT_04bcf1e8;
  puVar10 = PTR_DAT_04bbd560;
  iVar15 = *(int *)(lVar24 + 0x1010);
  if (iVar15 != 0) {
    lVar24 = *(long *)(lVar24 + 0x1018);
    uVar20 = 0;
    uVar22 = 0;
    do {
      lVar14 = *(long *)(lVar24 + (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
      if (lVar14 != 0) {
        uVar12 = (**(code **)puVar10)(lVar14 + 8);
        (**(code **)puVar11)(uVar19,uVar20 & 0xffffffff,uVar12,*(undefined4 *)(lVar14 + 0x118));
      }
      uVar20 = uVar22 + 1;
      uVar22 = uVar20 & 0xffffffff;
    } while (iVar15 != (int)uVar20);
  }
  lVar24 = *(long *)PTR_DAT_04bbd7e8;
  iVar15 = *(int *)(lVar24 + 0x480);
  if (iVar15 != 0) {
    uVar5 = *(undefined4 *)(lVar24 + 0x464);
    uVar12 = *(undefined8 *)(param_2 + 0xb8);
    uVar19 = (**(code **)puVar10)(lVar24 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar12,uVar5,*(undefined4 *)(lVar24 + 0x460),iVar15,uVar19);
  }
  return;
}

