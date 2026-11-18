
/* WARNING: Removing unreachable block (ram,0x032d09e4) */
/* WARNING: Removing unreachable block (ram,0x032d08e0) */
/* WARNING: Removing unreachable block (ram,0x032d0fe8) */
/* WARNING: Removing unreachable block (ram,0x032d0dd8) */
/* WARNING: Removing unreachable block (ram,0x032d0e20) */

void FUN_032d0880(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 local_b0;
  long *local_a8;
  undefined7 local_a0;
  undefined4 uStack_99;
  long *local_90;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 auStack_78 [8];
  undefined **local_70;
  undefined8 *puStack_68;
  
  lVar18 = *(long *)PTR_DAT_04bc6338;
  lVar15 = lVar18;
  if (param_2[7] != 0) {
    local_b0 = (long *)((ulong)local_b0 & 0xffffffff00000000);
    plVar6 = (long *)param_1[3];
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x138,8);
    memset(pvVar7,0,0x138);
    FUN_003490b4(pvVar7);
    *(undefined8 *)((long)pvVar7 + 0x128) = 0;
    *(undefined8 *)((long)pvVar7 + 0x130) = 0;
    *(undefined8 *)((long)pvVar7 + 0x120) = 0;
    pvVar13 = (void *)param_1[0x1ee];
    param_1[0x1ee] = (long)pvVar7;
    puVar4 = PTR_DAT_04bb2698;
    if (pvVar13 != (void *)0x0) {
      lVar15 = *(long *)((long)pvVar13 + 0x130);
      if (lVar15 != 0) {
        plVar6 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar15);
        (**(code **)(*plVar6 + 0x38))(plVar6,lVar15);
      }
      FUN_003490c0(pvVar13);
      if (*(long *)puVar4 == 0) {
        free(pvVar13);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar13);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar13);
        }
      }
      pvVar7 = (void *)param_1[0x1ee];
    }
    FUN_0327df30(pvVar7,param_2[7],param_1 + 3,*(undefined8 *)(lVar18 + 0x68));
    lVar15 = param_1[0x1ee];
    nn::os::LockMutex((MutexType *)(lVar18 + 0x540));
    *(long *)(lVar18 + 0x518) = lVar15;
    nn::os::UnlockMutex((MutexType *)(lVar18 + 0x540));
    lVar15 = DAT_05688e68;
  }
  cVar3 = *(char *)(lVar18 + 0x58a);
  plVar6 = param_1 + 3;
  local_b0 = (long *)((ulong)local_b0 & 0xffffffff00000000);
  lVar8 = (**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,0x48,8);
  FUN_00362b4c();
  plVar9 = (long *)param_1[0x1d];
  param_1[0x1d] = lVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  if (((long *)*param_2 != (long *)0x0) &&
     (lVar8 = (**(code **)(*(long *)*param_2 + 0x18))(), lVar8 != 0)) {
    lVar8 = param_1[0x1d];
    uVar10 = (**(code **)(*(long *)*param_2 + 0x18))();
    FUN_00362d10(lVar8,uVar10);
  }
  if (DAT_05688e58 != 0) {
    uVar2 = *(uint *)(DAT_05688e58 + 0x648);
    if (uVar2 != 0) {
      uVar16 = 0;
      do {
        if ((((uVar16 < 100) && (uVar16 <= *(uint *)(DAT_05688e58 + 0x648))) &&
            (plVar9 = *(long **)(DAT_05688e58 + uVar16 * 8 + 8), plVar9 != (long *)0x0)) &&
           (lVar8 = (**(code **)(*plVar9 + 0x18))(plVar9), lVar8 != 0)) {
          lVar8 = param_1[0x1d];
          uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9);
          FUN_00362d10(lVar8,uVar10);
        }
        uVar16 = uVar16 + 1;
      } while (uVar2 != uVar16);
    }
    uVar2 = *(uint *)(DAT_05688e58 + 0x64c);
    if (uVar2 != 0) {
      uVar16 = 0;
      do {
        if (((uVar16 < 100) && (uVar16 <= *(uint *)(DAT_05688e58 + 0x64c))) &&
           ((plVar9 = *(long **)(DAT_05688e58 + uVar16 * 8 + 0x328), plVar9 != (long *)0x0 &&
            (lVar8 = (**(code **)(*plVar9 + 0x18))(plVar9), lVar8 != 0)))) {
          lVar8 = param_1[0x1d];
          uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9);
          FUN_00362d10(lVar8,uVar10);
        }
        uVar16 = uVar16 + 1;
      } while (uVar2 != uVar16);
    }
    uVar2 = *(uint *)(DAT_05688e60 + 800);
    if (uVar2 != 0) {
      uVar16 = 0;
      do {
        if (((uVar16 < 100) && (uVar16 <= *(uint *)(DAT_05688e60 + 800))) &&
           ((plVar9 = *(long **)(DAT_05688e60 + uVar16 * 8), plVar9 != (long *)0x0 &&
            (lVar8 = (**(code **)(*plVar9 + 0x18))(plVar9), lVar8 != 0)))) {
          lVar8 = param_1[0x1d];
          uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9);
          FUN_00362d10(lVar8,uVar10);
        }
        uVar16 = uVar16 + 1;
      } while (uVar2 != uVar16);
    }
  }
  if (((long *)*param_2 != (long *)0x0) &&
     (lVar8 = (**(code **)(*(long *)*param_2 + 0x18))(), lVar8 != 0)) {
    lVar8 = param_1[0x1d];
    uVar10 = (**(code **)(*(long *)*param_2 + 0x18))();
    FUN_00362d10(lVar8,uVar10);
  }
  if (cVar3 != '\0') {
    FUN_00362d10(param_1[0x1d],*(undefined8 *)(lVar15 + 0x578));
  }
  plVar9 = DAT_0572ebd8;
  if (*(long **)(lVar15 + 0x70) != (long *)0x0) {
    plVar9 = *(long **)(lVar15 + 0x70);
  }
  iVar5 = (**(code **)(*plVar9 + 0x10))(plVar9);
  if (0 < iVar5) {
    iVar14 = 0;
    do {
      if ((int)param_1[5] < *(int *)((long)param_1 + 0x2c)) {
        plVar17 = (long *)param_1[7];
        if (plVar17 != (long *)0x0) {
          param_1[7] = *plVar17;
        }
        *plVar17 = 0;
        if ((int)param_1[5] < *(int *)((long)param_1 + 0x2c)) {
          *(long **)(param_1[6] + (long)(int)param_1[5] * 8) = plVar17;
          *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        }
      }
      else {
        plVar17 = (long *)0x0;
      }
      lVar15 = param_1[0x1d];
      uVar10 = (**(code **)(*plVar9 + 0x38))(plVar9,iVar14);
      uVar11 = (**(code **)(*plVar9 + 0x30))(plVar9,iVar14);
      lVar15 = FUN_003630d8(lVar15,uVar10,uVar11);
      iVar14 = iVar14 + 1;
      *plVar17 = lVar15;
    } while (iVar5 != iVar14);
  }
  iVar5 = (**(code **)(*plVar9 + 0x58))(plVar9);
  if (0 < iVar5) {
    iVar14 = 0;
    do {
      if ((int)param_1[5] < *(int *)((long)param_1 + 0x2c)) {
        plVar17 = (long *)param_1[7];
        if (plVar17 != (long *)0x0) {
          param_1[7] = *plVar17;
        }
        *plVar17 = 0;
        if ((int)param_1[5] < *(int *)((long)param_1 + 0x2c)) {
          *(long **)(param_1[6] + (long)(int)param_1[5] * 8) = plVar17;
          *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        }
      }
      else {
        plVar17 = (long *)0x0;
      }
      lVar15 = param_1[0x1d];
      uVar10 = (**(code **)(*plVar9 + 0x68))(plVar9,iVar14);
      uVar11 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar14);
      lVar15 = FUN_003630d8(lVar15,uVar10,uVar11);
      iVar14 = iVar14 + 1;
      *plVar17 = lVar15;
    } while (iVar5 != iVar14);
  }
  if ((char)param_1[0x1ef] == '\0') {
    local_b0 = (long *)((ulong)local_b0._4_4_ << 0x20);
    puVar12 = (undefined8 *)(**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,0x68,8);
    FUN_00367b6c();
    puVar12[0xc] = 0;
    *puVar12 = &DAT_04b1b7c0;
  }
  else {
    local_b0 = (long *)((ulong)local_b0._4_4_ << 0x20);
    puVar12 = (undefined8 *)(**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,0x68,8);
    FUN_00367b6c();
    puVar12[0xc] = 0;
    *puVar12 = &DAT_04b1b6e8;
    *(undefined1 *)(param_1 + 0x1ef) = 0;
  }
  puVar12[0xc] = param_1[0x1d];
  plVar9 = (long *)param_1[0x1e];
  param_1[0x1e] = (long)puVar12;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  local_b0 = (long *)CONCAT71(local_b0._1_7_,*(undefined1 *)((long)param_2 + 0x21));
  local_a8 = (long *)0x0;
  local_a0 = 0;
  uStack_99 = 0;
  if (cVar3 != '\0') {
    local_a8 = (long *)&LAB_032d4c90;
  }
  FUN_00364620(&local_70);
  lVar15 = param_1[0x1d];
  lVar8 = param_1[0x1e];
  uVar10 = *(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x68);
  (**(code **)(param_2[1] + 0x18))(param_2 + 1);
  FUN_0036803c(lVar8,&local_70,uVar10,lVar15,param_1 + 0x21,0,&local_b0,param_2[2],0);
  plVar17 = (long *)param_1[0x1e];
  plVar9 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(lVar18 + 0x88) != (long *)0x0) {
    plVar9 = *(long **)(lVar18 + 0x88);
  }
  uVar10 = (**(code **)(*plVar9 + 0x10))();
  (**(code **)(*plVar17 + 0x68))(plVar17,uVar10);
  local_80[0] = (undefined1)param_2[6];
  local_7c[0] = 1;
  local_a8 = (long *)local_7c;
  local_a0 = SUB87(local_80,0);
  uStack_99._0_1_ = (undefined1)((ulong)local_80 >> 0x38);
  local_70 = &PTR_LAB_04b1b288;
  local_b0 = plVar6;
  puStack_68 = &local_b0;
  FUN_032d2ed0(auStack_78,*(undefined8 *)(param_1[0x1e] + 0x18),&local_70,1,0);
  *(int *)(param_1 + 0x20) = (int)param_2[3];
  *(undefined1 *)((long)param_1 + 0xf59) = *(undefined1 *)((long)param_2 + 0x22);
  param_1[0x1ec] = param_2[5];
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)((long)param_2 + 0x1c);
  if ((undefined8 *)param_1[0x1e6] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x1e6])();
  }
  plVar9 = (long *)param_2[8];
  lVar15 = 0;
  if (plVar9 != (long *)0x0) {
    lVar15 = (**(code **)(*plVar9 + 0x10))(plVar9,param_1 + 0x1e7);
  }
  param_1[0x1e6] = lVar15;
  if (*(char *)((long)param_1 + 0xf59) == '\0') {
LAB_032d1068:
    cVar3 = (char)param_2[4];
  }
  else {
    local_b0 = (long *)((ulong)local_b0 & 0xffffffff00000000);
    pvVar7 = (void *)(**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,0x128,8);
    memset(pvVar7,0,0x128);
    FUN_0034f694(pvVar7);
    *(undefined1 *)((long)pvVar7 + 0xd8) = 0;
    FUN_0034f974((long)pvVar7 + 0xe0);
    pvVar13 = (void *)param_1[0x1ed];
    param_1[0x1ed] = (long)pvVar7;
    if (pvVar13 == (void *)0x0) goto LAB_032d1068;
    FUN_0034f98c((long)pvVar13 + 0xe0);
    FUN_0034f6d0(pvVar13);
    if (DAT_05ae7600 != 0) {
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,pvVar13);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar13);
      }
      goto LAB_032d1068;
    }
    free(pvVar13);
    cVar3 = (char)param_2[4];
  }
  if (cVar3 != '\0') {
    if (*param_1 == 0) {
      plVar6 = *(long **)(DAT_05688e68 + 0x560);
      if (plVar6 == (long *)0x0) {
        puVar12 = (undefined8 *)(DAT_05688e68 + 0x560);
        *puVar12 = param_1;
        *param_1 = (long)puVar12;
      }
      else {
        plVar9 = plVar6;
        do {
          if ((int)plVar9[0x20] < (int)param_1[0x20]) {
            lVar15 = plVar9[1];
            plVar9[1] = (long)param_1;
            param_1[2] = (long)plVar9;
            if (lVar15 != 0) {
              param_1[1] = lVar15;
              *(long **)(lVar15 + 0x10) = param_1;
            }
            plVar9 = (long *)*plVar9;
            *param_1 = (long)plVar9;
            lVar15 = *plVar9;
            if (*plVar9 != 0) {
              do {
                lVar18 = lVar15;
                lVar15 = *(long *)(lVar18 + 8);
              } while (lVar15 != 0);
              *plVar9 = lVar18;
            }
            goto LAB_032d1078;
          }
          plVar9 = (long *)plVar9[2];
        } while (plVar9 != (long *)0x0);
        do {
          plVar9 = plVar6;
          plVar6 = (long *)plVar9[2];
        } while ((long *)plVar9[2] != (long *)0x0);
        plVar9[2] = (long)param_1;
        param_1[1] = (long)plVar9;
        *param_1 = *plVar9;
      }
    }
LAB_032d1078:
    if (*PTR_DAT_04c4b988 == '\0') {
      local_70 = *(undefined ***)(param_1[0x1e] + 0x18);
    }
    else {
      local_b0 = (long *)(PTR_DAT_04bc8e68 + 0x10);
      local_a8 = (long *)PTR_DAT_04c4b988;
      local_70 = (undefined **)FUN_032cb8e0(&local_70,&local_b0,param_1[0x1e]);
    }
    local_b0 = (long *)&DAT_04b1b658;
    local_a8 = &local_b0;
    local_90 = &local_b0;
    FUN_032d25d0(&local_b0,&local_70);
    if (local_90 == &local_b0) {
      plVar9 = &local_b0;
      plVar6 = local_b0 + 4;
    }
    else {
      if (local_90 == (long *)0x0) goto LAB_032d1160;
      plVar6 = (long *)(*local_90 + 0x28);
      plVar9 = local_90;
    }
    (*(code *)*plVar6)(plVar9);
  }
LAB_032d1160:
  lVar15 = DAT_05688e68;
  if (param_1[0x1ee] != 0) {
    pMVar1 = (MutexType *)(DAT_05688e68 + 0x540);
    nn::os::LockMutex(pMVar1);
    *(undefined8 *)(lVar15 + 0x518) = 0;
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}

