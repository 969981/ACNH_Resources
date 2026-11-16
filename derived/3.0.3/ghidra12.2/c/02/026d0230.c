
undefined4 FUN_026d0230(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined **local_158;
  char *local_150;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if (((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x40) == 0)) &&
     (*(char *)(param_1 + 0x45) == '\0')) {
    (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
    iVar2 = nn::fs::MountDeviceSaveData(DAT_0556ca10);
    if (iVar2 != 0) {
      local_158 = (undefined **)CONCAT44(local_158._4_4_,iVar2);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_158);
    }
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  lVar9 = DAT_05ae71f0;
  local_158 = &PTR_LAB_048f9770;
  local_150 = DAT_0556ca10;
  lVar11 = *(long *)(DAT_05ae71f0 + 8);
  while( true ) {
    if (lVar11 == lVar9) {
      return 7;
    }
    lVar12 = *(long *)(lVar11 + 0x10);
    plVar7 = (long *)(lVar12 + 0x40);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcVar8 = *(char **)(lVar12 + 0x48);
    (*(code *)local_158[3])(&local_158);
    if (pcVar8 == local_150) break;
    cVar1 = **(char **)(lVar12 + 0x48);
    if (cVar1 == *local_150) {
      if (cVar1 == '\0') break;
      lVar6 = 0x7fffe;
      pcVar8 = local_150;
      pcVar5 = *(char **)(lVar12 + 0x48);
      while( true ) {
        if (pcVar5[1] != pcVar8[1]) break;
        if (pcVar5[1] == '\0') goto LAB_026d03cc;
        if (pcVar5[2] != pcVar8[2]) break;
        if (pcVar5[2] == '\0') goto LAB_026d03cc;
        if ((lVar6 == 0) || (cVar1 = pcVar5[3], cVar1 != pcVar8[3])) break;
        lVar6 = lVar6 + -3;
        pcVar8 = pcVar8 + 3;
        pcVar5 = pcVar5 + 3;
        if (cVar1 == '\0') goto LAB_026d03cc;
      }
    }
    lVar11 = *(long *)(lVar11 + 8);
  }
LAB_026d03cc:
  lVar9 = *(long *)(lVar11 + 0x10);
  if (lVar9 == 0) {
    return 7;
  }
  (**(code **)(*(long *)(lVar9 + 0x40) + 0x18))((long *)(lVar9 + 0x40));
  uVar10 = *(undefined8 *)(lVar9 + 0x48);
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_006e9528(&local_158,"%s:/%s",uVar10,param_2[1]);
  (*(code *)local_158[3])(&local_158);
  uVar3 = nn::fs::DeleteFile(local_150);
  if (uVar3 == 0) {
    return 1;
  }
  if ((uVar3 & 0x3fffff) == 0x202) {
    return 5;
  }
  if (((uVar3 & 0x1ff) == 2) && ((uVar3 >> 9 & 0x1ffe) - 0x1e < 0x10)) {
    return 2;
  }
  uVar4 = 7;
  if ((uVar3 & 0x3fffff) == 0x402) {
    uVar4 = 8;
  }
  return uVar4;
}

