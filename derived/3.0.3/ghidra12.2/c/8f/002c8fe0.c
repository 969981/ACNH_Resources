
void FUN_002c8fe0(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long local_60;
  undefined4 local_58;
  
  lVar4 = *(long *)(param_1 + 0x1e0);
  if (lVar4 != param_1 + 0x1d8) {
    iVar5 = 2000;
    do {
      lVar1 = lVar4 + 0x18;
      uVar2 = FUN_002b440c(lVar1);
      if (((((uVar2 & 1) != 0) && (uVar2 = FUN_002b4470(lVar1,param_2 + 1), (uVar2 & 1) != 0)) &&
          (uVar2 = FUN_002b449c(lVar1,param_2 + 1), (uVar2 & 1) == 0)) &&
         (*(char *)(lVar4 + 0x98) != '\0')) {
        plVar3 = (long *)FUN_00228380();
        lVar6 = *plVar3;
        local_60 = 0;
        FUN_002282f0(&local_60);
        lVar1 = local_60;
        local_58 = 0;
        local_60 = 0x40000;
        *(long *)(lVar4 + 0xa0) = lVar1 + lVar6 * iVar5;
        (**(code **)(*param_2 + 0x10))(param_2,&local_60);
        local_58 = 0;
        local_60 = 0x40000;
        (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(lVar4 + 0x10,&local_60);
        iVar5 = iVar5 + 100;
      }
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != param_1 + 0x1d8);
  }
  return;
}

