
void FUN_029d3b20(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 2);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x20) == param_1[4])) {
    *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x10;
    if ((*(long *)(lVar2 + 0x28) != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar2 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x10))();
      (**(code **)(**(long **)(lVar2 + 0x58) + 0x38))(*(long **)(lVar2 + 0x58),0xffffffff);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  lVar2 = *(long *)(param_1 + 6);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x20) == param_1[8])) {
    *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x10;
    if ((*(long *)(lVar2 + 0x28) != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar2 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x10))();
      (**(code **)(**(long **)(lVar2 + 0x58) + 0x38))(*(long **)(lVar2 + 0x58),0xffffffff);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  *param_1 = 0;
  return;
}

