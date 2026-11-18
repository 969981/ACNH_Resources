
undefined8 FUN_032f9224(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x20) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x6e0), lVar2 == 0)) ||
     (*(long *)(lVar2 + 8) == 0)) {
    return 0x13;
  }
  uVar1 = FUN_0331f740();
  return uVar1;
}

