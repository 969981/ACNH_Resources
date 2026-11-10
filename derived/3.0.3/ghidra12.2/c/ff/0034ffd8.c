
void FUN_0034ffd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x20)) {
    FUN_0034915c();
    *(undefined8 *)(lVar1 + 0x30) = 0;
    return;
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}

