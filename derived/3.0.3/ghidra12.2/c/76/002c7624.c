
void FUN_002c7624(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_38;
  
  uVar5 = FUN_002b440c(param_1 + 0x50);
  if (((uVar5 & 1) == 0) || (*(char *)(param_1 + 0x17c8) == '\0')) {
    bVar3 = false;
    lVar6 = FUN_002c5fd0(param_1 + 0x270,param_2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x17d0);
    iVar4 = FUN_002b43fc(param_2);
    bVar3 = iVar1 == iVar4;
    lVar6 = FUN_002c5fd0(param_1 + 0x270,param_2);
  }
  if (lVar6 != 0) {
    local_38 = 0;
    FUN_002282f0(&local_38);
    lVar8 = local_38 - *(long *)(lVar6 + 0x88);
    plVar7 = (long *)FUN_00228380();
    uVar2 = 0;
    if (*plVar7 != 0) {
      uVar2 = (undefined4)(lVar8 / *plVar7);
    }
    *(undefined4 *)(lVar6 + 0x90) = uVar2;
  }
  FUN_002c7400(param_1,param_2,bVar3);
  return;
}

