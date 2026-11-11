
undefined8 FUN_003e55c0(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*param_1 != 0) {
    FUN_003e5690(param_1);
    FUN_003e5b90(*param_1,3);
    FUN_003e5aac(*param_1);
    *param_1 = 0;
  }
  uVar1 = param_2 + 3U & 0xfffffffffffffffc;
  if (uVar1 <= (ulong)(param_2 + param_3)) {
    lVar2 = FUN_003e5a34(uVar1,(param_2 + param_3) - uVar1,0);
    *param_1 = lVar2;
    if ((lVar2 != 0) && (plVar3 = (long *)FUN_003e5ad0(lVar2,0x28,4), plVar3 != (long *)0x0)) {
      plVar3[3] = 0;
      plVar3[4] = 0;
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      FUN_003e5960();
      lVar2 = *plVar3;
      param_1 = param_1 + 1;
      *plVar3 = *param_1;
      *(long **)(lVar2 + 8) = param_1;
      *(long **)(*param_1 + 8) = plVar3;
      *param_1 = lVar2;
      return 1;
    }
  }
  return 0;
}

