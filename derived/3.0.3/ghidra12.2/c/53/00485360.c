
void FUN_00485360(long param_1)

{
  FUN_0043bce0(param_1,"Unknown Heading",0xffffffff);
  *(undefined8 *)(param_1 + 8) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

