
void FUN_0338b3f0(undefined1 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_48 [72];
  
  *param_1 = 0;
  if (local_48 != param_1) {
    if (0 < *(int *)(param_1 + 8)) {
      lVar1 = 0;
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      do {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar1 * 8);
        lVar1 = lVar1 + 1;
        *puVar3 = puVar2;
        *(undefined8 **)(param_1 + 0x18) = puVar3;
        puVar2 = puVar3;
      } while (lVar1 < *(int *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

