
void FUN_00351518(long param_1,code *param_2,undefined8 param_3)

{
  (*param_2)(*(undefined8 *)(param_1 + 0x10),param_3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

