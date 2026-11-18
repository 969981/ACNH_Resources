
void FUN_032be430(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = *param_2;
  iVar2 = FUN_032a99f0(1);
  if (iVar1 == iVar2 && *(char *)(param_1 + 0x16c) == '\0') {
    plVar3 = *(long **)(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
    }
    if (*(char *)(param_1 + 0x15f) != '\0') {
      FUN_032b7f2c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68),0);
      if (*(int *)(*(long *)(param_1 + 8) + 0x30) == 4) {
        *(undefined4 *)(*(long *)(param_1 + 8) + 0x30) = 5;
      }
    }
  }
  return;
}

