
void FUN_03c26680(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined **param_5,
                 void *param_6)

{
  MutexType *pMVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined *local_898;
  undefined8 local_890;
  undefined8 *puStack_888;
  undefined8 local_880 [256];
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  
  puVar6 = PTR_DAT_04bb2868;
  if (((*PTR_DAT_04bb2868 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  if (param_2 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    uVar8 = (**(code **)*param_2)(param_2,PTR_DAT_04bb2860);
    plVar16 = param_2;
    if ((uVar8 & 1) == 0) {
      plVar16 = (long *)0x0;
    }
  }
  *param_1 = (long)plVar16;
  puVar4 = PTR_DAT_04bb2020;
  local_898 = PTR_DAT_04bb2020 + 0x10;
  local_890 = "output.bfres";
  if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  puVar5 = PTR_DAT_04bb2860;
  uVar8 = (**(code **)*plVar16)(plVar16,PTR_DAT_04bb2860);
  if ((uVar8 & 1) == 0) {
    plVar16 = (long *)0x0;
  }
  puVar9 = (undefined *)(**(code **)(*plVar16 + 0x30))(plVar16,&local_898,0);
  if (puVar9 == (undefined *)0x0) {
    return;
  }
  if (param_6 == (void *)0x0) {
    plVar16 = (long *)*param_1;
    if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
      *(undefined **)puVar5 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    puVar5 = PTR_DAT_04bb2860;
    uVar8 = (**(code **)*plVar16)(plVar16,PTR_DAT_04bb2860);
    if ((uVar8 & 1) == 0) {
      plVar16 = (long *)0x0;
    }
    lVar10 = (**(code **)(*plVar16 + 0x30))(plVar16,&DAT_05aed430,0);
    if (lVar10 == 0) {
      param_6 = (void *)0x0;
    }
    else {
      if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
        *(undefined **)puVar5 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      if ((param_2 != (long *)0x0) &&
         (uVar8 = (**(code **)*param_2)(param_2,PTR_DAT_04bb2860), (uVar8 & 1) == 0)) {
        param_2 = (long *)0x0;
      }
      local_898 = puVar4 + 0x10;
      local_890 = "output.bfres";
      if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
        *(undefined **)puVar5 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar8 = (**(code **)*param_2)(param_2,PTR_DAT_04bb2860);
      if ((uVar8 & 1) == 0) {
        param_2 = (long *)0x0;
      }
      lVar11 = (**(code **)(*param_2 + 0x30))(param_2,&local_898,0);
      if (lVar11 != 0) {
        lVar14 = *(long *)PTR_DAT_04bd1770;
        pMVar1 = (MutexType *)(lVar14 + 0x68);
        nn::os::LockMutex(pMVar1);
        if (*(long *)(lVar14 + 0x20) != lVar14 + 0x18) {
          lVar12 = (long)*(int *)(lVar14 + 0x2c);
          lVar13 = *(long *)(lVar14 + 0x20) - lVar12;
          do {
            if (*(long *)(lVar13 + 0x20) == lVar11) {
              nn::os::UnlockMutex(pMVar1);
              param_6 = (void *)0x0;
              goto LAB_03c2694c;
            }
            lVar13 = *(long *)(lVar13 + lVar12 + 8) - lVar12;
          } while (lVar13 != (lVar14 + 0x18) - lVar12);
        }
        nn::os::UnlockMutex(pMVar1);
      }
      uVar15 = *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58);
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        param_6 = malloc(0x50);
      }
      else {
        plVar16 = param_4;
        if (param_4 == (long *)0x0) {
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar16 = (long *)(lVar11 + 8);
          if (lVar14 != 0) {
            plVar16 = (long *)(lVar14 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) {
            param_6 = (void *)0x0;
            goto LAB_03c26920;
          }
        }
        param_6 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,0x50,8);
      }
LAB_03c26920:
      FUN_03ad28ac(param_6);
      *(long *)((long)param_6 + 0x20) = lVar10;
      lVar10 = FUN_003a0970(lVar10);
      *(undefined8 *)((long)param_6 + 0x28) = *(undefined8 *)(lVar10 + 0x20);
      FUN_03ad2d00(param_6,param_4,uVar15);
    }
  }
LAB_03c2694c:
  ppuVar2 = (undefined **)&DAT_05aecc00;
  if (param_5 != (undefined **)0x0) {
    ppuVar2 = param_5;
  }
  local_898 = *ppuVar2;
  local_890 = (char *)0x10000000000;
  puStack_888 = local_880;
  if (&local_898 == ppuVar2) {
    local_78 = ppuVar2[0x104];
    local_70 = ppuVar2[0x105];
    local_80 = ppuVar2[0x103];
    if (param_6 == (void *)0x0) goto LAB_03c26a04;
    iVar7 = 0;
  }
  else {
    iVar3 = *(int *)(ppuVar2 + 1);
    iVar7 = iVar3;
    if (0xff < iVar3) {
      iVar7 = 0x100;
    }
    local_890 = (char *)CONCAT44(0x100,iVar7);
    memcpy(local_880,ppuVar2[2],(long)(iVar7 << 3));
    local_78 = ppuVar2[0x104];
    local_70 = ppuVar2[0x105];
    local_80 = ppuVar2[0x103];
    if ((param_6 == (void *)0x0) || (0xff < iVar3)) goto LAB_03c26a04;
  }
  local_880[iVar7] = param_6;
  local_890 = (char *)CONCAT44(local_890._4_4_,(int)local_890 + 1);
LAB_03c26a04:
  local_898 = puVar9;
  lVar10 = FUN_039fb680(&local_898,param_4,0);
  param_1[1] = lVar10;
  return;
}

