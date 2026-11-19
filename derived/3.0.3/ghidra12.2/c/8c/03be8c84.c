
undefined8 FUN_03be8c84(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if ((lVar3 != 0) && (*(char *)(*(long *)(param_1 + 0x18) + 0x78) != '\0')) {
    plVar1 = (long *)(lVar3 + 0x18) + *(uint *)(lVar3 + 0x10);
    if (1 < *(uint *)(lVar3 + 0x10)) {
      plVar1 = (long *)(lVar3 + 0x18);
    }
    if (*plVar1 != 0) {
      DataMemoryBarrier(2,1);
      if (*(char *)(*plVar1 + 0xb0) != '\0') {
        DataMemoryBarrier(2,1);
        uVar2 = FUN_03bf5ec0(*(undefined8 *)(param_1 + 0x10));
        return uVar2;
      }
    }
  }
  return 0;
}

