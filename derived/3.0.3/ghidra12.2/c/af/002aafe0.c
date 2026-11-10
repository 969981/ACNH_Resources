
void FUN_002aafe0(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  lVar1 = param_1 + 0x10;
  if (*(long *)(param_1 + 0x18) != lVar1) {
    iVar2 = *(int *)(param_1 + 0x24);
    plVar4 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar2);
    do {
      iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      if (iVar3 == param_2) {
        FUN_00223704(lVar1);
        (**(code **)*plVar4)(plVar4);
        FUN_00285e00(plVar4);
        FUN_00285dc0(plVar4);
        return;
      }
      plVar4 = (long *)(*(long *)((long)plVar4 + (long)*(int *)(param_1 + 0x24) + 8) -
                       (long)*(int *)(param_1 + 0x24));
    } while (plVar4 != (long *)(lVar1 - iVar2));
  }
  return;
}

