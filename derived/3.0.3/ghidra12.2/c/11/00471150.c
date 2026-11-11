
ulong FUN_00471150(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    return 0;
  }
  plVar4 = (long *)*param_1;
  uVar3 = 0;
  do {
    if (*plVar4 != -1) goto LAB_00471184;
    uVar2 = uVar3 + 1;
    plVar4 = plVar4 + 3;
    bVar1 = (long)uVar3 < (long)*(int *)((long)param_1 + 0xc);
    uVar3 = uVar2;
  } while (bVar1);
  uVar3 = uVar2 & 0xffffffff;
LAB_00471184:
  return uVar3 & 0xffffffff;
}

