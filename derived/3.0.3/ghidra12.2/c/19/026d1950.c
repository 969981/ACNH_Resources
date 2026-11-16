
undefined4 FUN_026d1950(long param_1,undefined8 param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined **local_70;
  char *local_68;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  iVar4 = *(int *)(param_1 + 0x40);
  if ((*(char *)(param_1 + 0x44) == '\0') && (iVar4 == 0)) {
    if (*(char *)(param_1 + 0x45) == '\0') {
      (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
      iVar4 = nn::fs::MountDeviceSaveData(DAT_0556ca10);
      if (iVar4 != 0) {
        local_70 = (undefined **)CONCAT44(local_70._4_4_,iVar4);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl((Result *)&local_70);
      }
      *(undefined1 *)(param_1 + 0x45) = 1;
      iVar4 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar4 = 0;
    }
  }
  *(int *)(param_1 + 0x40) = iVar4 + 1;
  nn::os::UnlockMutex(pMVar1);
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  lVar3 = DAT_05ae71f0;
  local_70 = &PTR_LAB_048f9770;
  local_68 = DAT_0556ca10;
  lVar10 = *(long *)(DAT_05ae71f0 + 8);
  do {
    if (lVar10 == lVar3) {
LAB_026d1b30:
      uVar5 = 7;
LAB_026d1b34:
      nn::os::LockMutex(pMVar1);
      if (*(int *)(param_1 + 0x40) != 0) {
        iVar4 = *(int *)(param_1 + 0x40) + -1;
        *(int *)(param_1 + 0x40) = iVar4;
        if (((iVar4 == 0) && (*(char *)(param_1 + 0x44) == '\0')) &&
           (*(char *)(param_1 + 0x45) != '\0')) {
          (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
          nn::fs::Unmount(DAT_0556ca10);
          *(undefined1 *)(param_1 + 0x45) = 0;
        }
      }
      nn::os::UnlockMutex(pMVar1);
      return uVar5;
    }
    lVar11 = *(long *)(lVar10 + 0x10);
    plVar8 = (long *)(lVar11 + 0x40);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pcVar9 = *(char **)(lVar11 + 0x48);
    (*(code *)local_70[3])(&local_70);
    if (pcVar9 == local_68) {
LAB_026d1b0c:
      if (*(long *)(lVar10 + 0x10) != 0) {
        uVar5 = FUN_026d1bc0(param_1,param_2,0,param_3);
        goto LAB_026d1b34;
      }
      goto LAB_026d1b30;
    }
    cVar2 = **(char **)(lVar11 + 0x48);
    if (cVar2 == *local_68) {
      if (cVar2 == '\0') goto LAB_026d1b0c;
      lVar7 = 0x7fffe;
      pcVar6 = *(char **)(lVar11 + 0x48);
      pcVar9 = local_68;
      while( true ) {
        if (pcVar6[1] != pcVar9[1]) break;
        if (pcVar6[1] == '\0') goto LAB_026d1b0c;
        if (pcVar6[2] != pcVar9[2]) break;
        if (pcVar6[2] == '\0') goto LAB_026d1b0c;
        if ((lVar7 == 0) || (cVar2 = pcVar6[3], cVar2 != pcVar9[3])) break;
        lVar7 = lVar7 + -3;
        pcVar6 = pcVar6 + 3;
        pcVar9 = pcVar9 + 3;
        if (cVar2 == '\0') goto LAB_026d1b0c;
      }
    }
    lVar10 = *(long *)(lVar10 + 8);
  } while( true );
}

