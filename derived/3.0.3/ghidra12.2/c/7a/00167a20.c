
undefined8 FUN_00167a20(long param_1)

{
  if ((*(byte *)(param_1 + 0xd) >> 5 & 1) == 0) {
    FUN_00167498();
  }
  else {
    FUN_001679e0(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 0;
}

