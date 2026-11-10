
void FUN_00377968(long param_1,undefined8 param_2)

{
  FUN_00376b58();
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00367b50();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_00377590(param_1,param_2);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00367b50();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 0x49) >> 5 & 1) != 0) {
    FUN_00367b50(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

