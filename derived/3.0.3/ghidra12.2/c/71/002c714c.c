
void FUN_002c714c(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_40;
  undefined4 local_38;
  
  uVar2 = FUN_002b43fc(param_2);
  FUN_002c72e0(param_1,uVar2);
  iVar1 = *(int *)(param_1 + 0x17d0);
  iVar3 = FUN_002b43fc(param_2);
  if (iVar1 == iVar3) {
    *(undefined4 *)(param_1 + 0x17d0) = 0;
    *(undefined2 *)(param_1 + 0x17c8) = 0;
    *(undefined1 *)(param_1 + 0x17ca) = 0;
    if (*(int *)(param_1 + 0x150) == 1) {
      if ((*(long *)(param_1 + 0x1868) != 0) && (lVar4 = FUN_002c3abc(), lVar4 != 0)) {
        plVar5 = (long *)FUN_002c3abc(*(undefined8 *)(param_1 + 0x1868));
        (**(code **)(*plVar5 + 0x58))();
      }
      if (*(int *)(param_1 + 0x150) == 1) {
        FUN_00221064((int *)(param_1 + 0x150));
      }
    }
    *(undefined1 *)(param_1 + 0x17cc) = 0;
  }
  lVar4 = param_1 + 0x180;
  if ((param_3 & 1) == 0) {
    uVar2 = FUN_002b43fc(param_2);
    plVar5 = (long *)FUN_002ca2c0(lVar4,uVar2);
    if ((plVar5 != (long *)0x0) && (*(int *)((long)plVar5 + 0x9c) != -1)) {
      *(undefined1 *)((long)plVar5 + 0x99) = 1;
      *(undefined4 *)((long)plVar5 + 0xa4) = 1;
      lVar7 = (long)DAT_04be24f0;
      plVar6 = (long *)FUN_00228380();
      lVar8 = *plVar6;
      local_40 = 0;
      FUN_002282f0(&local_40);
      lVar4 = local_40;
      local_40 = 0;
      plVar5[0x12] = lVar4 + lVar8 * lVar7;
      FUN_002282f0(&local_40);
      local_38 = 0;
      plVar5[0x11] = local_40;
      local_40 = 0x40000;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_40);
      return;
    }
    uVar2 = FUN_002b43fc(param_2);
    FUN_002ca970(lVar4,uVar2);
  }
  else {
    FUN_002ca850(lVar4,param_2);
  }
  FUN_002c60e0(param_1 + 0x270,param_2);
  return;
}

