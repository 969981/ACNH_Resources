
void FUN_0208bea0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  undefined4 local_58;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    return;
  }
  FUN_0208d820();
  if (*(int *)(param_2 + 0x10) == 0) goto LAB_0208bfec;
  local_60 = *param_3;
  local_58 = *(undefined4 *)(param_3 + 1);
  uVar2 = FUN_0208db10();
  local_60 = CONCAT44(uVar2,(undefined4)local_60);
  FUN_0208e320(param_2,&local_60);
  if (*(int *)(param_2 + 0x10) == 0) goto LAB_0208bfec;
  lVar5 = *(long *)PTR_DAT_04bb32f0;
  if (lVar5 == 0) {
LAB_0208bf70:
    if (((int)DAT_05453fec == -1) || (DAT_05453fec._4_4_ == -1)) {
      FUN_02090590(param_1,param_2,&local_60);
    }
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "Fireworks";
    local_40 = puVar1;
    iVar3 = FUN_008841f4(lVar5,&local_40);
    if (iVar3 != 1) {
      pcStack_48 = "Countdown";
      local_50 = puVar1;
      iVar3 = FUN_008841f4(lVar5,&local_50);
      if (iVar3 != 1) goto LAB_0208bf70;
    }
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (lVar5 = *(long *)(param_2 + 8), lVar5 != param_2)) {
    do {
      lVar4 = FUN_021c9770(*(undefined4 *)(lVar5 + -8),1);
      FUN_02093ad0(lVar4 + 0x10,1,1);
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 + -8 != param_2 + -8);
  }
LAB_0208bfec:
  *param_1 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  return;
}

