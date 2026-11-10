
void FUN_00223260(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_50;
  long local_48;
  ulong local_38;
  
  local_38 = 0;
  FUN_002282f0(&local_38);
  param_1[6] = local_38;
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  if (param_2 == 0) {
    uVar6 = DAT_0410dce0;
  }
  else {
    plVar3 = (long *)FUN_00228380();
    uVar6 = param_1[6] + *plVar3 * (ulong)param_2;
  }
  local_38 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0xc));
  iVar2 = (int)param_1[2];
  while (iVar2 != 0) {
    FUN_002282f0(&local_38);
    lVar8 = param_1[2];
    if (uVar6 < local_38) {
      lVar7 = param_1[1];
      plVar3 = param_1 + 3;
      iVar2 = *(int *)((long)param_1 + 0x14);
      lVar4 = FUN_00223770(plVar3);
      if ((lVar4 == 0) || (lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c), lVar4 == 0))
      goto LAB_00223480;
      lVar1 = 0;
      if ((int)lVar8 != 0) {
        lVar1 = lVar7;
      }
      lVar8 = 0;
      if (lVar1 != 0) {
        lVar8 = lVar1 - iVar2;
      }
      goto LAB_00223408;
    }
    lVar4 = 0;
    if ((int)lVar8 != 0) {
      lVar4 = *param_1;
    }
    lVar8 = 0;
    if (lVar4 != 0) {
      lVar8 = lVar4 - *(int *)((long)param_1 + 0x14);
    }
    if (local_38 < *(ulong *)(lVar8 + 0x10)) break;
    FUN_002237a8(param_1);
    FUN_00221338(lVar8,0);
    iVar2 = (int)param_1[2];
  }
  if ((int)param_1[5] != 0) {
    do {
      lVar4 = FUN_00223770(param_1 + 3);
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 - *(int *)((long)param_1 + 0x2c);
      }
      FUN_002236bc(param_1,param_1,lVar8 + *(int *)((long)param_1 + 0x14));
    } while ((int)param_1[5] != 0);
  }
  local_48 = 0;
  FUN_002282f0(&local_48);
  param_1[8] = local_48 - param_1[6];
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00221a5c(param_1 + 8);
LAB_002234c8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xc));
  return;
LAB_00223408:
  if (lVar8 == 0) {
    FUN_002236bc(param_1,param_1,*(int *)((long)param_1 + 0x14) + lVar4);
    lVar4 = FUN_00223770(plVar3);
    if (lVar4 == 0) goto LAB_00223480;
    lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
    lVar8 = 0;
joined_r0x00223404:
    if (lVar4 == 0) goto LAB_00223480;
    goto LAB_00223408;
  }
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar7 = iVar2 + lVar8;
  if (*(ulong *)(lVar4 + 0x10) < *(ulong *)(lVar8 + 0x10)) {
    plVar5 = *(long **)(lVar7 + 8);
    lVar8 = 0;
    if (plVar5 != param_1) {
      lVar8 = (long)plVar5 + (long)-iVar2;
    }
    goto joined_r0x00223404;
  }
  FUN_002236bc(param_1,lVar7,iVar2 + lVar4);
  lVar4 = FUN_00223770(plVar3);
  if ((lVar4 == 0) || (lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c), lVar4 == 0))
  goto LAB_00223480;
  goto LAB_00223408;
LAB_00223480:
  local_50 = 0;
  FUN_002282f0(&local_50);
  local_48 = local_50 - param_1[6];
  FUN_00221a5c(&local_48);
  local_48 = 0;
  FUN_002282f0(&local_48);
  param_1[8] = local_48 - param_1[6];
  *(undefined1 *)(param_1 + 9) = 1;
  goto LAB_002234c8;
}

