
void FUN_00181b50(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong __n;
  
  lVar3 = *(long *)(param_1 + 0x38);
  FUN_00183d90(lVar3);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(lVar3 + 0x28) <= *(uint *)(param_1 + 0x20)) {
    uVar1 = *(uint *)(lVar3 + 0x28);
  }
  __n = (ulong)uVar1;
  if (uVar1 != 0) {
    memcpy(*(void **)(param_1 + 0x18),*(void **)(lVar3 + 0x20),__n);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
    *(ulong *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + __n;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar1;
    lVar2 = *(long *)(lVar3 + 0x28) - __n;
    *(long *)(lVar3 + 0x28) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return;
}

