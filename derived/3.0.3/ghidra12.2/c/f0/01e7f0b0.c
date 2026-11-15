
void FUN_01e7f0b0(long param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  
  piVar1 = (int *)(param_1 + 0x10a30);
  piVar2 = (int *)(param_1 + 0xef10);
  FUN_01ee4704();
  if (0 < *piVar2) {
    lVar3 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xef18) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      puVar4[0xf] = &PTR_FUN_0498d548;
      *puVar4 = *(undefined8 *)(param_1 + 0xef20);
      *(undefined8 **)(param_1 + 0xef20) = puVar4;
    } while (lVar3 < *piVar2);
  }
  *piVar2 = 0;
  if (0 < *piVar1) {
    lVar3 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10a38) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      puVar4[0xf] = &PTR_FUN_0498d548;
      *puVar4 = *(undefined8 *)(param_1 + 0x10a40);
      *(undefined8 **)(param_1 + 0x10a40) = puVar4;
    } while (lVar3 < *piVar1);
  }
  *piVar1 = 0;
  *(undefined8 *)(param_1 + 0x12550) = 0;
  *(undefined8 *)(param_1 + 0x12558) = 0;
  *(undefined8 *)(param_1 + 0x12560) = 0;
  return;
}

