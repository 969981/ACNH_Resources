
undefined8 FUN_002052cc(long param_1,short param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 == 10) {
    return *(undefined8 *)(param_1 + 0x80);
  }
  return *(undefined8 *)(param_1 + 0x88);
}

