
void FUN_021c08e8(long param_1,uint param_2)

{
  uint *puVar1;
  
  if ((param_2 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x55e60) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0x55e60));
    *(undefined8 *)(param_1 + 0x55e68) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55e70) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55e78) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55e80) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55e88) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55e90) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55e98) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55ea0) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x55ea8) = 0xfffe;
    FUN_0277d4ac();
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 & 1) != 0) {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x55eb0) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55eb8) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ec0) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ec8) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ed0) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ed8) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ee0) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ee8) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ef0) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x55ef8) = 0xfffe;
  FUN_0277d4ac((undefined8 *)(param_1 + 0x55ef8));
  return;
}

