
void FUN_003a0fe0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x5b) != '\0') {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      plVar1 = (long *)(*(long *)(param_1 + 0x18) + lVar2);
      lVar2 = lVar2 + 0x38;
      plVar1[2] = *plVar1 + (ulong)*(ushort *)((long)plVar1 + 0x34) * 8;
    } while (uVar3 < *(byte *)(param_1 + 0x5b));
  }
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

