
undefined4 FUN_026d0cf0(long param_1,Result *param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  char cVar2;
  Result RVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined **local_70;
  char *local_68;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  iVar5 = *(int *)(param_1 + 0x40);
  if ((*(char *)(param_1 + 0x44) == '\0') && (iVar5 == 0)) {
    if (*(char *)(param_1 + 0x45) == '\0') {
      (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
      iVar5 = nn::fs::MountDeviceSaveData(DAT_0556ca10);
      if (iVar5 != 0) {
        local_70 = (undefined **)CONCAT44(local_70._4_4_,iVar5);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl((Result *)&local_70);
      }
      *(undefined1 *)(param_1 + 0x45) = 1;
      iVar5 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar5 = 0;
    }
  }
  *(int *)(param_1 + 0x40) = iVar5 + 1;
  nn::os::UnlockMutex(pMVar1);
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  lVar4 = DAT_05ae71f0;
  local_70 = &PTR_LAB_048f9770;
  local_68 = DAT_0556ca10;
  lVar11 = *(long *)(DAT_05ae71f0 + 8);
  do {
    if (lVar11 == lVar4) {
LAB_026d0ee8:
      uVar8 = 7;
LAB_026d0eec:
      nn::os::LockMutex(pMVar1);
      if (*(int *)(param_1 + 0x40) != 0) {
        iVar5 = *(int *)(param_1 + 0x40) + -1;
        *(int *)(param_1 + 0x40) = iVar5;
        if (((iVar5 == 0) && (*(char *)(param_1 + 0x44) == '\0')) &&
           (*(char *)(param_1 + 0x45) != '\0')) {
          (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
          nn::fs::Unmount(DAT_0556ca10);
          *(undefined1 *)(param_1 + 0x45) = 0;
        }
      }
      nn::os::UnlockMutex(pMVar1);
      return uVar8;
    }
    lVar12 = *(long *)(lVar11 + 0x10);
    plVar9 = (long *)(lVar12 + 0x40);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcVar10 = *(char **)(lVar12 + 0x48);
    (*(code *)local_70[3])(&local_70);
    if (pcVar10 == local_68) {
LAB_026d0eac:
      plVar9 = *(long **)(lVar11 + 0x10);
      if (plVar9 != (long *)0x0) {
        local_70 = (undefined **)((ulong)local_70 & 0xffffffffffffff00);
        RVar3 = (Result)0x0;
        if ((char)plVar9[0xf] != '\0') {
          (**(code **)(*plVar9 + 0xc0))(plVar9,&local_70,param_3);
          RVar3 = local_70._0_1_;
        }
        if (param_2 != (Result *)0x0) {
          *param_2 = RVar3;
        }
        uVar8 = 1;
        goto LAB_026d0eec;
      }
      goto LAB_026d0ee8;
    }
    cVar2 = **(char **)(lVar12 + 0x48);
    if (cVar2 == *local_68) {
      if (cVar2 == '\0') goto LAB_026d0eac;
      lVar7 = 0x7fffe;
      pcVar10 = local_68;
      pcVar6 = *(char **)(lVar12 + 0x48);
      while( true ) {
        if (pcVar6[1] != pcVar10[1]) break;
        if (pcVar6[1] == '\0') goto LAB_026d0eac;
        if (pcVar6[2] != pcVar10[2]) break;
        if (pcVar6[2] == '\0') goto LAB_026d0eac;
        if ((lVar7 == 0) || (cVar2 = pcVar6[3], cVar2 != pcVar10[3])) break;
        lVar7 = lVar7 + -3;
        pcVar10 = pcVar10 + 3;
        pcVar6 = pcVar6 + 3;
        if (cVar2 == '\0') goto LAB_026d0eac;
      }
    }
    lVar11 = *(long *)(lVar11 + 8);
  } while( true );
}

