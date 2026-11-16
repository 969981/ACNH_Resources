
undefined8
FUN_026ce9d0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined **local_70;
  char *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if (((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x40) == 0)) &&
     (*(char *)(param_1 + 0x45) == '\0')) {
    (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
    iVar3 = nn::fs::MountDeviceSaveData(DAT_0556ca10);
    if (iVar3 != 0) {
      local_70 = (undefined **)CONCAT44(local_70._4_4_,iVar3);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_70);
    }
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  lVar2 = DAT_05ae71f0;
  local_70 = &PTR_LAB_048f9770;
  local_68 = DAT_0556ca10;
  lVar9 = *(long *)(DAT_05ae71f0 + 8);
  while( true ) {
    if (lVar9 == lVar2) {
      return 7;
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    plVar7 = (long *)(lVar10 + 0x40);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcVar8 = *(char **)(lVar10 + 0x48);
    (*(code *)local_70[3])(&local_70);
    if (pcVar8 == local_68) break;
    cVar1 = **(char **)(lVar10 + 0x48);
    if (cVar1 == *local_68) {
      if (cVar1 == '\0') break;
      lVar6 = 0x7fffe;
      pcVar5 = *(char **)(lVar10 + 0x48);
      pcVar8 = local_68;
      while( true ) {
        if (pcVar5[1] != pcVar8[1]) break;
        if (pcVar5[1] == '\0') goto LAB_026ceb7c;
        if (pcVar5[2] != pcVar8[2]) break;
        if (pcVar5[2] == '\0') goto LAB_026ceb7c;
        if ((lVar6 == 0) || (cVar1 = pcVar5[3], cVar1 != pcVar8[3])) break;
        lVar6 = lVar6 + -3;
        pcVar5 = pcVar5 + 3;
        pcVar8 = pcVar8 + 3;
        if (cVar1 == '\0') goto LAB_026ceb7c;
      }
    }
    lVar9 = *(long *)(lVar9 + 8);
  }
LAB_026ceb7c:
  if (*(long *)(lVar9 + 0x10) == 0) {
    return 7;
  }
  uVar4 = FUN_026cebd0(param_1,param_2,param_3,*(long *)(lVar9 + 0x10),param_4,param_5);
  return uVar4;
}

