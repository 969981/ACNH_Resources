
void FUN_03dd9b60(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  short *psVar3;
  void *__dest;
  ulong __n;
  undefined2 local_44 [2];
  short local_40 [13];
  undefined2 local_26;
  
  __dest = *(void **)(param_2 + 8);
  lVar2 = 0;
  psVar3 = local_40;
  local_44[0] = 0;
  local_26 = 0;
  do {
    if (psVar3[-2] == 0) goto LAB_03dd9bdc;
    if (psVar3[-1] == 0) {
      lVar2 = lVar2 + 1;
      goto LAB_03dd9bdc;
    }
    if (*psVar3 == 0) {
      lVar2 = lVar2 + 2;
      goto LAB_03dd9bdc;
    }
    lVar2 = lVar2 + 3;
    psVar3 = psVar3 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_03dd9bdc:
  uVar1 = (uint)lVar2;
  if (*(int *)(param_2 + 0x10) <= (int)(uint)lVar2) {
    uVar1 = *(int *)(param_2 + 0x10) - 1;
  }
  __n = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  memcpy(__dest,local_44,__n);
  *(undefined2 *)((long)__dest + __n) = 0;
  return;
}

