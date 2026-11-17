
void FUN_02c350e0(int *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 < param_1[1]) {
    puVar1 = *(undefined8 **)(param_1 + 4);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar1;
    }
    *(undefined4 *)puVar1 = *param_2;
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar1;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

