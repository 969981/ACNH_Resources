
void FUN_003e5864(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  FUN_003e5690();
  FUN_003e5b90(*param_1,3);
  plVar1 = (long *)FUN_003e5ad0(*param_1,0x28,4);
  if (plVar1 != (long *)0x0) {
    plVar1[3] = 0;
    plVar1[4] = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    FUN_003e5960();
    plVar3 = param_1 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar3 = lVar2;
  }
  return;
}

