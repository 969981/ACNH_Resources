
void FUN_0038b880(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  for (lVar3 = *(long *)(param_1 + 8); lVar3 != param_1; lVar3 = *(long *)(lVar3 + 8)) {
    if (*(char *)(lVar3 + 0x98) != '\0') {
      plVar2 = *(long **)(lVar3 + 0x90) + 1;
      if (*plVar2 == -1) {
        uVar1 = (**(code **)(**(long **)(lVar3 + 0x90) + 0x40))();
        (*param_2)(plVar2,uVar1,param_3);
      }
    }
  }
  return;
}

