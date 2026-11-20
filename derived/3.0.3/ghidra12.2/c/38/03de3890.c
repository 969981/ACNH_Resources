
void FUN_03de3890(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  short *psVar3;
  void *__dest;
  ulong __n;
  undefined2 local_434 [2];
  short local_430 [509];
  undefined2 local_36;
  
  __dest = *(void **)(param_2 + 8);
  lVar2 = 0;
  psVar3 = local_430;
  local_434[0] = 0;
  local_36 = 0;
  do {
    if (psVar3[-2] == 0) goto LAB_03de390c;
    if (psVar3[-1] == 0) {
      lVar2 = lVar2 + 1;
      goto LAB_03de390c;
    }
    if (*psVar3 == 0) {
      lVar2 = lVar2 + 2;
      goto LAB_03de390c;
    }
    lVar2 = lVar2 + 3;
    psVar3 = psVar3 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_03de390c:
  uVar1 = (uint)lVar2;
  if (*(int *)(param_2 + 0x10) <= (int)(uint)lVar2) {
    uVar1 = *(int *)(param_2 + 0x10) - 1;
  }
  __n = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  memcpy(__dest,local_434,__n);
  *(undefined2 *)((long)__dest + __n) = 0;
  return;
}

