
void FUN_002ab680(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      iVar1 = *(int *)(param_1 + 0x24);
      plVar2 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
      do {
        (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
        plVar2 = (long *)(*(long *)((long)plVar2 + (long)*(int *)(param_1 + 0x24) + 8) -
                         (long)*(int *)(param_1 + 0x24));
      } while (plVar2 != (long *)((param_1 + 0x10) - (long)iVar1));
    }
  }
  return;
}

