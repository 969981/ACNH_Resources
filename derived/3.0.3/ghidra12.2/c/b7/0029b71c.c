
undefined8 FUN_0029b71c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (((((*(long *)(param_1 + 0x70) == 0) || (*(long *)(param_1 + 0xf0) == 0)) ||
       (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0xf8))) ||
      ((plVar1 = *(long **)(param_1 + (ulong)*(byte *)(param_1 + 0x162) * 8 + 0x168),
       plVar1 == (long *)0x0 || (uVar2 = (**(code **)(*plVar1 + 0xe0))(), (uVar2 & 1) == 0)))) ||
     ((*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0x100) ||
      ((plVar1 = *(long **)(param_1 + (ulong)(*(char *)(param_1 + 0x162) == '\0') * 8 + 0x168),
       plVar1 == (long *)0x0 || (uVar2 = (**(code **)(*plVar1 + 0xe0))(), (uVar2 & 1) == 0)))))) {
    return 0;
  }
  return 1;
}

