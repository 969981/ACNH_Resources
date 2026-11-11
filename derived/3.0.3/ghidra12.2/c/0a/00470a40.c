
void FUN_00470a40(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar1 = 0;
    uVar2 = (ulong)(*(int *)((long)param_1 + 0xc) + 1);
    do {
      if (*(long *)(*param_1 + lVar1) != -1) {
        *(undefined8 *)(*param_1 + lVar1) = 0xffffffffffffffff;
      }
      lVar1 = lVar1 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}

