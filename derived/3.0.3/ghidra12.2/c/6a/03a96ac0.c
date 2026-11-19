
void FUN_03a96ac0(long param_1,long param_2,int param_3,long *param_4,long param_5)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  uint local_150;
  undefined8 local_14c;
  undefined1 auStack_118 [138];
  short local_8e;
  
  (**(code **)(*param_4 + 0x38))(param_4);
  local_158 = 0xff7fffffff7fffff;
  local_168 = PTR_DAT_04bd0f08 + 0x10;
  local_160 = 0x7f7fffff7f7fffff;
  local_150 = *(uint *)PTR_DAT_04bd0ea8;
  local_14c = 0x3f80000000000000;
  if (local_150 < 6) {
    if ((1 << (ulong)(local_150 & 0x1f) & 0x39U) == 0) {
      fVar25 = *(float *)(param_4 + 1);
      fVar24 = *(float *)((long)param_4 + 0xc);
    }
    else {
      fVar24 = *(float *)(param_4 + 1);
      fVar25 = *(float *)((long)param_4 + 0xc);
    }
    fVar27 = fVar24;
    fVar11 = 0.0;
    if (fVar24 <= 0.0) {
      fVar27 = 0.0;
      fVar11 = fVar24;
    }
    fVar26 = fVar25;
    fVar24 = 0.0;
    if (fVar25 <= 0.0) {
      fVar26 = 0.0;
      fVar24 = fVar25;
    }
    local_160 = CONCAT44(fVar24,fVar11);
    local_158 = CONCAT44(fVar26,fVar27);
  }
  FUN_038e77e4(&local_168,param_2,param_4);
  puVar14 = PTR_DAT_04bcf1b0;
  puVar13 = PTR_DAT_04bcf1a8;
  puVar12 = PTR_DAT_04bbd7e0;
  uVar3 = *(ushort *)(param_5 + 0x30);
  uVar4 = *(ushort *)(param_5 + 0x32);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar2 = uVar4;
  if (*(short *)(param_5 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  if ((param_3 < 1) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    lVar16 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x428) + 8);
    param_3 = (uint)*(ushort *)(*(long *)(lVar16 + 0x38) + 0x30) * param_3;
    if (param_3 < 1) {
      lVar16 = *(long *)(lVar16 + 0x18);
    }
    else {
      uVar9 = param_3 - 1;
      if (*(uint *)(lVar16 + 0x20) <= uVar9) {
        uVar9 = 0;
      }
      lVar16 = *(long *)(lVar16 + 0x28) + (ulong)uVar9 * 0x150;
    }
    FUN_03907810(lVar16,param_2);
    puVar1 = (uint *)(lVar16 + 0x14);
    local_168 = (undefined *)CONCAT44(1.0 / (float)uVar2,1.0 / (float)uVar3);
    do {
      uVar9 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar9 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar9 & 0x7fffffff) != 0) {
      if ((int)uVar9 < 0) {
        if ((int)*puVar1 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
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
    if (**(int **)(lVar16 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar16 + 0x38),8
                 ,&local_168);
    }
    do {
      uVar9 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar9 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar9 & 0x7fffffff) != 0) {
      if ((int)uVar9 < 0) {
        if ((int)*puVar1 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
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
    FUN_0390d290(param_5,param_2,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
    lVar16 = *(long *)puVar12;
    uVar21 = *(undefined8 *)(param_2 + 0xb8);
    (**(code **)puVar13)(uVar21,0x10,lVar16 + 0x1024);
    (**(code **)puVar14)(uVar21,0x10,lVar16 + 0x1068);
    puVar13 = PTR_DAT_04bcf1e8;
    puVar12 = PTR_DAT_04bbd560;
    iVar5 = *(int *)(lVar16 + 0x1010);
    if (iVar5 != 0) {
      lVar16 = *(long *)(lVar16 + 0x1018);
      uVar22 = 0;
      uVar23 = 0;
      do {
        lVar20 = *(long *)(lVar16 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
        if (lVar20 != 0) {
          uVar15 = (**(code **)puVar12)(lVar20 + 8);
          (**(code **)puVar13)(uVar21,uVar22 & 0xffffffff,uVar15,*(undefined4 *)(lVar20 + 0x118));
        }
        uVar22 = uVar23 + 1;
        uVar23 = uVar22 & 0xffffffff;
      } while (iVar5 != (int)uVar22);
    }
    lVar16 = *(long *)PTR_DAT_04bbd7e8;
    iVar5 = *(int *)(lVar16 + 0x480);
    if (iVar5 != 0) {
      uVar18 = *(undefined4 *)(lVar16 + 0x464);
      uVar15 = *(undefined8 *)(param_2 + 0xb8);
      uVar21 = (**(code **)puVar12)(lVar16 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar15,uVar18,*(undefined4 *)(lVar16 + 0x460),iVar5,uVar21);
    }
    goto LAB_03a975a8;
  }
  lVar16 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x430) + 8);
  iVar5 = (uint)*(ushort *)
                 (*(long *)(lVar16 + 0x38) + (ulong)(1 < *(uint *)(lVar16 + 0x30)) * 0x38 + 0x30) *
          param_3;
  if (iVar5 < 1) {
    lVar16 = *(long *)(lVar16 + 0x18);
  }
  else {
    uVar9 = iVar5 - 1;
    if (*(uint *)(lVar16 + 0x20) <= uVar9) {
      uVar9 = 0;
    }
    lVar16 = *(long *)(lVar16 + 0x28) + (ulong)uVar9 * 0x150;
  }
  FUN_03907810(lVar16,param_2);
  fVar24 = 1.0 / (float)uVar3;
  puVar1 = (uint *)(lVar16 + 0x14);
  fVar25 = 1.0 / (float)uVar2;
  local_168 = (undefined *)CONCAT44(fVar25,fVar24);
  do {
    uVar9 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar9 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
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
  if (**(int **)(lVar16 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar16 + 0x38),8,
               &local_168);
  }
  do {
    uVar9 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar9 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
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
  FUN_0390d290(param_5,param_2,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
  lVar20 = *(long *)puVar12;
  uVar21 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)puVar13)(uVar21,0x10,lVar20 + 0x1024);
  (**(code **)puVar14)(uVar21,0x10,lVar20 + 0x1068);
  puVar13 = PTR_DAT_04bcf1e8;
  puVar12 = PTR_DAT_04bbd560;
  iVar5 = *(int *)(lVar20 + 0x1010);
  if (iVar5 != 0) {
    lVar20 = *(long *)(lVar20 + 0x1018);
    uVar22 = 0;
    uVar23 = 0;
    do {
      lVar19 = *(long *)(lVar20 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
      if (lVar19 != 0) {
        uVar15 = (**(code **)puVar12)(lVar19 + 8);
        (**(code **)puVar13)(uVar21,uVar22 & 0xffffffff,uVar15,*(undefined4 *)(lVar19 + 0x118));
      }
      uVar22 = uVar23 + 1;
      uVar23 = uVar22 & 0xffffffff;
    } while (iVar5 != (int)uVar22);
  }
  lVar20 = *(long *)PTR_DAT_04bbd7e8;
  iVar5 = *(int *)(lVar20 + 0x480);
  if (iVar5 != 0) {
    uVar18 = *(undefined4 *)(lVar20 + 0x464);
    uVar15 = *(undefined8 *)(param_2 + 0xb8);
    uVar21 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar15,uVar18,*(undefined4 *)(lVar20 + 0x460),iVar5,uVar21);
  }
  uVar9 = *(uint *)(param_4[4] + 0x58);
  if (uVar9 != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar10 = uVar9 - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar10) {
        uVar10 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar10 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar9 & 0x3f);
        goto LAB_03a9723c;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar18 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar18);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a9723c:
  puVar14 = PTR_DAT_04bcf1b0;
  puVar13 = PTR_DAT_04bcf1a8;
  puVar12 = PTR_DAT_04bbd7e0;
  lVar16 = *(long *)(lVar16 + 8);
  iVar5 = (uint)*(ushort *)(*(long *)(lVar16 + 0x38) + 0x30) +
          (uint)*(ushort *)
                 (*(long *)(lVar16 + 0x38) + (ulong)(1 < *(uint *)(lVar16 + 0x30)) * 0x38 + 0x30) *
          param_3;
  if (iVar5 < 1) {
    lVar16 = *(long *)(lVar16 + 0x18);
  }
  else {
    uVar9 = iVar5 - 1;
    if (*(uint *)(lVar16 + 0x20) <= uVar9) {
      uVar9 = 0;
    }
    lVar16 = *(long *)(lVar16 + 0x28) + (ulong)uVar9 * 0x150;
  }
  FUN_03907810(lVar16,param_2);
  puVar1 = (uint *)(lVar16 + 0x14);
  local_168 = (undefined *)CONCAT44(fVar25,fVar24);
  do {
    uVar9 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar9 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
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
  if (**(int **)(lVar16 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar16 + 0x38),8,
               &local_168);
  }
  FUN_0390d120(&local_168,param_4[4] + 8);
  do {
    uVar9 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar9 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
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
  FUN_0390d290(&local_168,param_2,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
  if (local_8e != -1) {
    lVar16 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
    uVar9 = (int)local_8e - (uint)*(ushort *)(lVar16 + 0x5c0);
    if (*(uint *)(lVar16 + 0x5a0) <= uVar9) {
      uVar9 = 0;
    }
    lVar20 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar9 * 0x80;
    sVar8 = *(short *)(lVar20 + 0x76) + -1;
    *(short *)(lVar20 + 0x76) = sVar8;
    if (sVar8 == 0) {
      *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
    local_8e = -1;
  }
  FUN_038fd0e0(auStack_118);
  lVar16 = *(long *)puVar12;
  uVar21 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)puVar13)(uVar21,0x10,lVar16 + 0x1024);
  (**(code **)puVar14)(uVar21,0x10,lVar16 + 0x1068);
  puVar13 = PTR_DAT_04bcf1e8;
  puVar12 = PTR_DAT_04bbd560;
  iVar5 = *(int *)(lVar16 + 0x1010);
  if (iVar5 != 0) {
    lVar16 = *(long *)(lVar16 + 0x1018);
    uVar22 = 0;
    uVar23 = 0;
    do {
      lVar20 = *(long *)(lVar16 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
      if (lVar20 != 0) {
        uVar15 = (**(code **)puVar12)(lVar20 + 8);
        (**(code **)puVar13)(uVar21,uVar22 & 0xffffffff,uVar15,*(undefined4 *)(lVar20 + 0x118));
      }
      uVar22 = uVar23 + 1;
      uVar23 = uVar22 & 0xffffffff;
    } while (iVar5 != (int)uVar22);
  }
  lVar16 = *(long *)PTR_DAT_04bbd7e8;
  iVar5 = *(int *)(lVar16 + 0x480);
  if (iVar5 != 0) {
    uVar18 = *(undefined4 *)(lVar16 + 0x464);
    uVar15 = *(undefined8 *)(param_2 + 0xb8);
    uVar21 = (**(code **)PTR_DAT_04bbd560)(lVar16 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar15,uVar18,*(undefined4 *)(lVar16 + 0x460),iVar5,uVar21);
  }
LAB_03a975a8:
  uVar9 = *(uint *)(param_4[4] + 0x58);
  if (uVar9 != 0xffffffff) {
    lVar16 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
      uVar10 = uVar9 - *(ushort *)(lVar16 + 0x3da);
      if (*(uint *)(lVar16 + 0x368) <= uVar10) {
        uVar10 = 0;
      }
      if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar10 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar9 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar16 + 800) & 2) != 0) {
      uVar18 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar18);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

