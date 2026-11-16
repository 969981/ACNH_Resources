
undefined4
FUN_026cf750(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  MutexType *pMVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
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
  lVar12 = *(long *)(DAT_05ae71f0 + 8);
  do {
    if (lVar12 == lVar3) {
LAB_026cf940:
      uVar5 = 7;
LAB_026cf944:
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
    lVar9 = *(long *)(lVar12 + 0x10);
    plVar10 = (long *)(lVar9 + 0x40);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcVar11 = *(char **)(lVar9 + 0x48);
    uVar6 = (*(code *)local_70[3])(&local_70);
    if (pcVar11 == local_68) {
LAB_026cf91c:
      if (*(long *)(lVar12 + 0x10) != 0) {
        uVar5 = FUN_026cf9d0(uVar6,param_2,param_3,*(long *)(lVar12 + 0x10),param_4,param_5);
        goto LAB_026cf944;
      }
      goto LAB_026cf940;
    }
    cVar2 = **(char **)(lVar9 + 0x48);
    if (cVar2 == *local_68) {
      if (cVar2 == '\0') goto LAB_026cf91c;
      lVar8 = 0x7fffe;
      pcVar7 = *(char **)(lVar9 + 0x48);
      pcVar11 = local_68;
      while( true ) {
        if (pcVar7[1] != pcVar11[1]) break;
        if (pcVar7[1] == '\0') goto LAB_026cf91c;
        if (pcVar7[2] != pcVar11[2]) break;
        if (pcVar7[2] == '\0') goto LAB_026cf91c;
        if ((lVar8 == 0) || (cVar2 = pcVar7[3], cVar2 != pcVar11[3])) break;
        lVar8 = lVar8 + -3;
        pcVar7 = pcVar7 + 3;
        pcVar11 = pcVar11 + 3;
        if (cVar2 == '\0') goto LAB_026cf91c;
      }
    }
    lVar12 = *(long *)(lVar12 + 8);
  } while( true );
}

