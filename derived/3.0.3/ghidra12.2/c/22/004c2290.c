
void FUN_004c2290(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x68) + (long)param_2 * 0x28;
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 2;
  lVar1 = *(long *)(param_1 + 0x68) + (long)param_3 * 0x28;
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & 0xfd;
  plVar2 = *(long **)(param_1 + 0xa0);
  lVar1 = plVar2[1] << 4;
  if (lVar1 != 0) {
    do {
      plVar2 = plVar2 + 2;
      if (*plVar2 == *(long *)(*(long *)(param_1 + 0x68) + (long)param_2 * 0x28 + 0x18)) {
        *plVar2 = *(long *)(*(long *)(param_1 + 0x68) + (long)param_3 * 0x28 + 0x18);
        return;
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}

