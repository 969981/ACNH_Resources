
void FUN_0019d000(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  for (lVar3 = *(long *)(param_1 + 0x10); lVar3 != param_1 + 8; lVar3 = *(long *)(lVar3 + 8)) {
    plVar1 = *(long **)(lVar3 + 0x10);
    if (0 < (int)*(uint *)(plVar1 + 1)) {
      if (0x400 < *(uint *)(plVar1 + 1)) break;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    }
  }
  plVar1 = *(long **)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x30);
  lVar3 = *plVar1;
  *(long *)(lVar3 + 8) = plVar1[1];
  *(long *)plVar1[1] = lVar3;
  *(long *)(param_1 + 0x30) = lVar2 + -1;
  FUN_00187e4c();
  return;
}

