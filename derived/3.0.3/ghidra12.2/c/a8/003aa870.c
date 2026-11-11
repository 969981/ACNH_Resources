
void FUN_003aa870(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_003a9620(param_1 + 0x58,*(undefined2 *)(*(long *)(param_2 + 0x18) + 0x38));
  FUN_003a96c0(param_1 + 0x58,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20));
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  *(undefined4 *)(param_1 + 0x40) = DAT_04135420;
  if ((0 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x38))) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      lVar2 = lVar2 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar1) = 0x7f800000;
      lVar1 = lVar1 + 0xc;
    } while (lVar2 < *(int *)(param_1 + 0x3c));
  }
  memcpy(*(void **)(param_1 + 0x48),*(void **)(*(long *)(param_1 + 0x68) + 0x30),
         (ulong)(*(ushort *)(param_1 + 100) + 0x1f >> 3) & 0x3ffc);
  return;
}

