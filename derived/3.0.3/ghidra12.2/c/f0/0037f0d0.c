
void FUN_0037f0d0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_00367b50(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00367b50(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00367b50(*(undefined8 *)(param_1 + 0x20));
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_00367b50(puVar2);
  }
  lVar3 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    if (0 < *(int *)(lVar3 + 4)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar1 = *(long *)(lVar3 + 8) + lVar4;
        if (*(long *)(lVar1 + 0x18) != 0) {
          FUN_00367b50();
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x20;
        *(undefined4 *)(lVar1 + 0x10) = 0;
      } while (lVar5 < *(int *)(lVar3 + 4));
      if (*(long *)(lVar3 + 8) == 0) goto LAB_0037f194;
    }
    FUN_00367b50();
  }
LAB_0037f194:
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 4) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00367b50();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

