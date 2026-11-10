
void FUN_002c94e0(long param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_28;
  
  if ((*param_2 == 0) && (*(long *)(param_1 + 0x1868) != 0)) {
    FUN_002c3abc();
    uVar1 = FUN_002c5ecc();
    FUN_002c3abc(*(undefined8 *)(param_1 + 0x1868));
    uVar2 = FUN_002c5ed4();
    lVar3 = FUN_002c3abc(*(undefined8 *)(param_1 + 0x1868));
    FUN_002c37a0(*(undefined8 *)(param_1 + 0x1868),uVar1,uVar2,1,*(undefined2 *)(lVar3 + 0x6a8));
  }
  *(undefined8 *)(param_1 + 0x17b8) = 0;
  *(undefined1 *)(param_1 + 0x17cb) = 1;
  if (*(char *)(param_1 + 0x17ca) != '\0') {
    plVar4 = (long *)FUN_00228380();
    lVar3 = *plVar4;
    local_28 = 0;
    FUN_002282f0(&local_28);
    *(long *)(param_1 + 0x17c0) = local_28 + lVar3 * 10000;
  }
  return;
}

