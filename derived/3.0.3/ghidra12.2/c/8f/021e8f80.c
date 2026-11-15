
void FUN_021e8f80(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined *local_40;
  char *pcStack_38;
  
  if ((param_2 != 0) && (uVar2 = *(uint *)(param_2 + 0x50c), uVar2 != 0xffffffff)) {
    pcVar5 = &DAT_05454358 + (ulong)uVar2 * 0x2d8;
    if (0x10 < uVar2) {
      pcVar5 = &DAT_05454358;
    }
    if (*pcVar5 != '\0') {
      iVar3 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
      if (iVar3 == 1) {
        local_40 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "IsEatCucumber";
        iVar3 = FUN_021ca500(pcVar5,&local_40);
        if (iVar3 == 0) {
          FUN_021e90a0(param_1,param_2);
          return;
        }
        *param_1 = 0x448;
      }
      else {
        iVar3 = *(int *)(pcVar5 + 0x24);
        local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar3);
        *(undefined2 *)((long)param_1 + 2) = 0;
        *(undefined4 *)((long)param_1 + 4) = 0;
        uVar4 = 0x1ce5;
        if (iVar3 != 1) {
          uVar4 = 0x1ce6;
        }
        uVar1 = 0x1e4c;
        if (iVar3 != 0) {
          uVar1 = uVar4;
        }
        *(undefined2 *)param_1 = uVar1;
      }
      FUN_0277d4ac(param_1);
      return;
    }
  }
  *param_1 = 0x1e4c;
  FUN_0277d4ac(param_1);
  return;
}

