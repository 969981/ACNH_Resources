
void FUN_001a0c88(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = FUN_001a0a90(param_1 + 8);
  plVar1 = *(long **)(lVar4 + 8);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -1;
  puVar5 = (undefined8 *)plVar1[2];
  *(long *)(lVar2 + 8) = lVar3;
  *(long *)plVar1[1] = lVar2;
  (*(code *)*puVar5)();
  FUN_00187e4c(plVar1);
  return;
}

