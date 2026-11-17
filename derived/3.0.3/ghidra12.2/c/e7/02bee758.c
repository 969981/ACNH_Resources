
undefined8 FUN_02bee758(long param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 < piVar1[1]) {
    puVar2 = *(undefined8 **)(piVar1 + 4);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(piVar1 + 4) = *puVar2;
    }
    *(undefined4 *)puVar2 = *param_2;
    if (*piVar1 < piVar1[1]) {
      *(undefined8 **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = puVar2;
      *piVar1 = *piVar1 + 1;
    }
  }
  return 0;
}

