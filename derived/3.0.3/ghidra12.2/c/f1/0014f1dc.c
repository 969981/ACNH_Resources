
void FUN_0014f1dc(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    FUN_00143300(*(undefined8 *)(param_1 + 0xca0 + lVar2));
    *(undefined8 *)(param_1 + 0xca0 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x1f0);
  bVar1 = *(byte *)(param_1 + 0xf88);
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00143300(*(undefined8 *)(param_1 + 0xf70));
    bVar1 = *(byte *)(param_1 + 0xf88) & 0xfd;
    *(byte *)(param_1 + 0xf88) = bVar1;
  }
  *(undefined8 *)(param_1 + 0xf70) = 0;
  if ((bVar1 & 1) != 0) {
    FUN_00143300(*(undefined8 *)(param_1 + 0xf68));
    *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfe;
  }
  *(undefined8 *)(param_1 + 0xf68) = 0;
  FUN_001532b0(param_1 + 0x820);
  return;
}

