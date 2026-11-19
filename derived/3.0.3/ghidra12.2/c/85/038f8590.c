
undefined8
FUN_038f8590(long param_1,long param_2,long *param_3,ulong param_4,int param_5,uint param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  float fVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined8 uVar31;
  float fVar32;
  undefined *local_b0;
  undefined *puStack_a8;
  
  iVar6 = -param_5;
  if (-1 < param_5) {
    iVar6 = param_5;
  }
  uVar19 = iVar6 + 0xfffU & 0x7ffff000;
  uVar4 = -uVar19;
  if (-1 < param_5) {
    uVar4 = uVar19;
  }
  uVar19 = 0x24;
  if ((param_6 & 0x111) != 0) {
    uVar19 = 0x14;
  }
  if ((param_6 & 0xfffffeee) != 0) {
    uVar19 = 0x24;
  }
  uVar20 = uVar19;
  if ((param_6 & 0x73) != 0) {
    uVar20 = uVar19 & 0x30 | 2;
  }
  if ((param_6 >> 2 & 1) != 0) {
    uVar20 = 4;
    if ((*(byte *)(DAT_05ae78f0 + 0x5c9) & 0x20) == 0) {
      uVar20 = 1;
    }
    uVar20 = uVar19 & 0x30 | uVar20 | 0x80;
  }
  uVar29 = param_4 + 0xfff & 0xfffffffffffff000;
  bVar5 = *(byte *)(param_1 + 0x60);
  if ((param_6 & 8) != 0) {
    uVar20 = uVar20 & 0xf8 | 4;
  }
  if ((param_6 & 0x80) != 0) {
    uVar20 = 0x189;
  }
  uVar28 = (ulong)uVar20;
  if ((bVar5 & 1) != 0) {
    lVar16 = (**(code **)(*param_3 + 0x30))(param_3,uVar29 | 0x108);
    if (lVar16 == 0) {
      return 0;
    }
    lVar15 = lVar16 + uVar29;
    *(undefined8 *)(lVar15 + 0x100) = 0;
    (**(code **)PTR_DAT_04bcf610)(&local_b0);
    (*DAT_04c61f78)(&local_b0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
    (**(code **)PTR_DAT_04bcf620)(&local_b0,uVar28);
    (**(code **)PTR_DAT_04bcf618)(&local_b0,lVar16,uVar29);
    (**(code **)PTR_DAT_04bcf338)(lVar15,&local_b0);
    *(ulong *)(lVar15 + 0x100) = uVar28;
    *(uint *)(lVar15 + 0x100) = uVar20 | 0x80000000;
    piVar2 = (int *)(DAT_05ae78d0 + 100);
    do {
      iVar6 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(int *)(lVar15 + 0x104) = iVar6;
    *(long *)(param_2 + 0x18) = lVar15;
    *(long *)(param_2 + 8) = lVar16;
    *(ulong *)(param_2 + 0x10) = param_4;
    if (*(long *)(param_2 + 0x20) == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar16 - *(long *)(*(long *)(param_2 + 0x20) + 0x10);
    }
    (**(code **)PTR_DAT_04bcf350)(lVar15,lVar16,param_4);
    return 1;
  }
  lVar15 = *(long *)(param_1 + 0x58);
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar16 = DAT_05ae7600;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar21 = 0;
    iVar14 = *(int *)(param_1 + 0x48) + -1;
    do {
      iVar3 = iVar21 + iVar14;
      if (iVar3 < 0 != SCARRY4(iVar21,iVar14)) {
        iVar3 = iVar3 + 1;
      }
      uVar19 = iVar3 >> 1;
      plVar27 = *(long **)(*(long *)(param_1 + 0x50) + (ulong)uVar19 * 8);
      if ((long *)plVar27[1] == param_3) {
        uVar19 = *(uint *)(param_3 + 0x1a);
        goto joined_r0x038f882c;
      }
      iVar3 = uVar19 - 1;
      if (plVar27[1] < (long)param_3) {
        iVar21 = uVar19 + 1;
        iVar3 = iVar14;
      }
      iVar14 = iVar3;
    } while (iVar21 <= iVar3);
  }
  if (DAT_05ae7600 == 0) {
    plVar27 = malloc(0x78);
  }
  else {
    plVar27 = param_3;
    if (param_3 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar27 = (long *)(lVar16 + 8);
      if (lVar11 != 0) {
        plVar27 = (long *)(lVar11 + 0xa8);
      }
      plVar27 = (long *)*plVar27;
    }
    plVar27 = (long *)(**(code **)(*plVar27 + 0x30))(plVar27,0x78,8);
  }
  puVar9 = PTR_DAT_04bd0d40;
  plVar27[2] = 0;
  plVar27[3] = 0;
  *plVar27 = (long)(puVar9 + 0x10);
  plVar27[1] = (long)param_3;
  if (param_3 == (long *)0x0) {
    if (DAT_05ae7600 != 0) {
      param_3 = (long *)FUN_038cb610(DAT_05ae7600,plVar27);
      plVar27[1] = (long)param_3;
      if (param_3 != (long *)0x0) goto LAB_038f8858;
    }
  }
  else {
LAB_038f8858:
    if ((*(uint *)(param_3 + 0x1a) & 1) == 0) {
      plVar30 = (long *)0x0;
    }
    else {
      plVar30 = param_3 + 0x12;
      nn::os::LockMutex((MutexType *)(param_3 + 0x16));
    }
    plVar22 = param_3 + 0xe;
    lVar16 = *plVar22;
    plVar18 = (long *)((long)*(int *)((long)param_3 + 0x84) + (long)plVar27);
    *plVar22 = (long)plVar18;
    *plVar18 = lVar16;
    plVar18[1] = (long)plVar22;
    if (lVar16 != 0) {
      *(long **)(lVar16 + 8) = plVar18;
    }
    *(int *)(param_3 + 0x10) = (int)param_3[0x10] + 1;
    if (plVar30 != (long *)0x0) {
      nn::os::UnlockMutex((MutexType *)(plVar30 + 4));
    }
  }
  *(undefined4 *)(plVar27 + 4) = 1;
  *plVar27 = (long)&PTR_FUN_04b65a90;
  plVar27[5] = 0;
  plVar27[6] = 0;
  FUN_038e18e4(plVar27 + 7);
  iVar21 = *(int *)(param_1 + 0x48);
  if (iVar21 < *(int *)(param_1 + 0x4c)) {
    *(long **)(*(long *)(param_1 + 0x50) + (long)iVar21 * 8) = plVar27;
    iVar21 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar21;
  }
  if (1 < iVar21) {
    lVar16 = *(long *)(param_1 + 0x50);
    uVar23 = 0;
    uVar19 = iVar21 - 1;
    do {
      if ((int)uVar19 <= (int)uVar23) break;
      lVar11 = *(long *)(lVar16 + (ulong)uVar23 * 8);
      uVar17 = (ulong)uVar23;
      if ((uVar19 - uVar23 & 1) == 0) {
        lVar25 = lVar11;
        uVar24 = uVar17;
      }
      else {
        uVar24 = uVar17 + 1;
        lVar25 = *(long *)(lVar16 + uVar24 * 8);
        if (*(long *)(lVar25 + 8) < *(long *)(lVar11 + 8)) {
          *(long *)(lVar16 + uVar24 * 8) = lVar11;
          *(long *)(lVar16 + uVar17 * 8) = lVar25;
          lVar25 = lVar11;
        }
      }
      uVar26 = (ulong)uVar19;
      uVar19 = uVar23;
      if (~uVar17 + uVar26 != 0) {
        plVar30 = (long *)(lVar16 + 8 + uVar24 * 8);
        do {
          lVar11 = *plVar30;
          if (*(long *)(lVar11 + 8) < *(long *)(lVar25 + 8)) {
            plVar30[-1] = lVar11;
            *plVar30 = lVar25;
            uVar19 = (uint)uVar24;
          }
          else {
            lVar25 = lVar11;
          }
          lVar11 = plVar30[1];
          if (*(long *)(lVar11 + 8) < *(long *)(lVar25 + 8)) {
            uVar19 = (uint)uVar24 + 1;
            *plVar30 = lVar11;
            plVar30[1] = lVar25;
          }
          else {
            lVar25 = lVar11;
          }
          uVar24 = uVar24 + 2;
          plVar30 = plVar30 + 2;
        } while (uVar26 != uVar24);
      }
      if ((int)uVar19 <= (int)uVar23) break;
      lVar11 = *(long *)(lVar16 + (ulong)uVar19 * 8);
      uVar24 = (ulong)uVar19;
      uVar23 = uVar19;
      do {
        lVar25 = lVar16 + uVar24 * 8;
        lVar12 = *(long *)(lVar25 + -8);
        if (*(long *)(lVar11 + 8) < *(long *)(lVar12 + 8)) {
          uVar23 = (uint)uVar24;
          *(long *)(lVar25 + -8) = lVar11;
          *(long *)(lVar16 + uVar24 * 8) = lVar12;
        }
        else {
          lVar11 = lVar12;
        }
        uVar24 = uVar24 - 1;
      } while ((long)uVar17 < (long)uVar24);
    } while (uVar23 != uVar19);
  }
  uVar19 = *(uint *)(plVar27[1] + 0xd0);
joined_r0x038f882c:
  if ((uVar19 & 1) != 0) {
    nn::os::LockMutex((MutexType *)(plVar27 + 0xb));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  if ((*(uint *)(plVar27[1] + 0xd0) & 1) == 0) {
    plVar30 = (long *)0x0;
    if ((bVar5 >> 1 & 1) != 0) goto LAB_038f8964;
LAB_038f8bcc:
    uVar17 = lVar15 + 0xfffU & 0xfffffffffffff000;
    if (uVar29 <= uVar17) {
      uVar29 = uVar17;
    }
    uVar17 = uVar29 >> 9;
    if (0x7f < uVar17) {
      uVar17 = 0x80;
    }
    lVar16 = 0x128;
    if (0x1ff < uVar29 - param_4) {
      lVar16 = uVar17 * 0x20 + 0x108;
    }
    puVar13 = (undefined8 *)
              (**(code **)(*(long *)plVar27[1] + 0x30))((long *)plVar27[1],lVar16 + 0x138,8);
    if (puVar13 == (undefined8 *)0x0) {
      uVar31 = 0;
      goto LAB_038f8e4c;
    }
    lVar15 = (**(code **)(*(long *)plVar27[1] + 0x30))((long *)plVar27[1],uVar29,uVar4);
    if (lVar15 == 0) {
      (**(code **)(*(long *)plVar27[1] + 0x38))((long *)plVar27[1],puVar13);
      uVar31 = 0;
      goto LAB_038f8e4c;
    }
    *puVar13 = plVar27;
    puVar13[1] = 0;
    puVar13[0x25] = 0;
    puVar13[2] = lVar15;
    puVar13[3] = 0;
    puVar1 = puVar13 + 5;
    puVar13[4] = 0;
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    *(uint *)(puVar13 + 0x26) = (uint)(param_4 == 0);
    puStack_a8 = &DAT_0409e2c2;
    FUN_038cbcc0(&local_b0,puVar13 + 0x27,lVar16,0x100000,uVar29,0);
    puVar13[1] = puVar13 + 0x27;
    uVar31 = puVar13[2];
    (**(code **)PTR_DAT_04bcf610)(&local_b0);
    (*DAT_04c61f78)(&local_b0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
    (**(code **)PTR_DAT_04bcf620)(&local_b0,uVar28);
    (**(code **)PTR_DAT_04bcf618)(&local_b0,uVar31,uVar29);
    (**(code **)PTR_DAT_04bcf338)(puVar1,&local_b0);
    puVar13[0x25] = uVar28;
    *(uint *)(puVar13 + 0x25) = uVar20 | 0x80000000;
    piVar2 = (int *)(DAT_05ae78d0 + 100);
    do {
      iVar21 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar21 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(int *)((long)puVar13 + 300) = iVar21;
    lVar16 = (**(code **)(*(long *)puVar13[1] + 0x30))((long *)puVar13[1],param_4,iVar6);
    lVar15 = puVar13[2];
    *(undefined8 **)(param_2 + 0x18) = puVar1;
    *(undefined8 **)(param_2 + 0x20) = puVar13;
    lVar16 = lVar16 + lVar15 + -0x100000;
    *(long *)(param_2 + 8) = lVar16;
    *(ulong *)(param_2 + 0x10) = param_4;
    (*DAT_04c61fd8)(puVar1,lVar16 - puVar13[2],param_4);
    plVar18 = (long *)(*(long *)(param_2 + 0x20) + 0x18);
    lVar16 = *plVar18;
    if (*plVar18 != 0) {
      do {
        lVar15 = lVar16;
        lVar16 = *(long *)(lVar15 + 0x30);
      } while (lVar16 != 0);
      plVar18 = (long *)(lVar15 + 0x30);
    }
    *plVar18 = param_2;
    if ((*(uint *)(plVar27[1] + 0xd0) & 1) == 0) {
      plVar18 = plVar27 + 5;
      if (plVar27[6] != 0) {
        plVar18 = (long *)(plVar27[6] + 0x20);
      }
      *plVar18 = (long)puVar13;
      plVar27[6] = (long)puVar13;
    }
    else {
      nn::os::LockMutex((MutexType *)(plVar27 + 0xb));
      plVar18 = plVar27 + 5;
      if (plVar27[6] != 0) {
        plVar18 = (long *)(plVar27[6] + 0x20);
      }
      *plVar18 = (long)puVar13;
      plVar27[6] = (long)puVar13;
      nn::os::UnlockMutex((MutexType *)(plVar27 + 0xb));
    }
  }
  else {
    plVar30 = plVar27 + 7;
    nn::os::LockMutex((MutexType *)(plVar27 + 0xb));
    if ((bVar5 >> 1 & 1) == 0) goto LAB_038f8bcc;
LAB_038f8964:
    if (((*(byte *)(plVar27 + 4) & 1) == 0) || (lVar16 = plVar27[5], lVar16 == 0))
    goto LAB_038f8bcc;
    fVar32 = 0.0;
    lVar11 = 0;
    do {
      plVar18 = *(long **)(lVar16 + 8);
      lVar25 = lVar11;
      if ((((int)plVar18[0x20] != (int)plVar18[0x1d]) &&
          (((*(uint *)(lVar16 + 0x128) ^ uVar20) & 0x7fffffff) == 0)) &&
         (lVar12 = (**(code **)(*plVar18 + 0x80))(plVar18,iVar6), -1 < (long)(lVar12 - param_4))) {
        uVar17 = (**(code **)(**(long **)(lVar16 + 8) + 0x78))();
        lVar25 = lVar16;
        fVar10 = (float)param_4 / (float)uVar17;
        if ((float)param_4 / (float)uVar17 <= fVar32) {
          lVar25 = lVar11;
          fVar10 = fVar32;
        }
        fVar32 = fVar10;
      }
      lVar16 = *(long *)(lVar16 + 0x20);
      lVar11 = lVar25;
    } while (lVar16 != 0);
    if (lVar25 == 0) goto LAB_038f8bcc;
    lVar16 = (**(code **)(**(long **)(lVar25 + 8) + 0x30))(*(long **)(lVar25 + 8),param_4,iVar6);
    lVar15 = *(long *)(lVar25 + 0x10);
    *(long *)(param_2 + 0x18) = lVar25 + 0x28;
    *(long *)(param_2 + 0x20) = lVar25;
    lVar16 = lVar16 + lVar15 + -0x100000;
    *(long *)(param_2 + 8) = lVar16;
    *(ulong *)(param_2 + 0x10) = param_4;
    (*DAT_04c61fd8)(lVar25 + 0x28,lVar16 - *(long *)(lVar25 + 0x10),param_4);
    plVar18 = (long *)(*(long *)(param_2 + 0x20) + 0x18);
    lVar16 = *plVar18;
    if (*plVar18 != 0) {
      do {
        lVar15 = lVar16;
        lVar16 = *(long *)(lVar15 + 0x30);
      } while (lVar16 != 0);
      plVar18 = (long *)(lVar15 + 0x30);
    }
    *plVar18 = param_2;
  }
  uVar31 = 1;
LAB_038f8e4c:
  if (plVar30 != (long *)0x0) {
    nn::os::UnlockMutex((MutexType *)(plVar30 + 4));
  }
  if ((*(uint *)(plVar27[1] + 0xd0) & 1) != 0) {
    nn::os::UnlockMutex((MutexType *)(plVar27 + 0xb));
  }
  return uVar31;
}

