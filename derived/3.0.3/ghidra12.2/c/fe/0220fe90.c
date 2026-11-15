
void FUN_0220fe90(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x23080023080023;
  param_1[1] = 0x2308002308002308;
  param_1[4] = 0x2308002308002308;
  param_1[2] = 0x800230800230800;
  param_1[3] = 0x23080023080023;
  param_1[0x1e] = param_1 + 0x22;
  *(undefined4 *)(param_1 + 5) = 0x230800;
  param_1[0x1a] = param_1 + 0x1e;
  *(undefined1 *)((long)param_1 + 0x2c) = 8;
  param_1[0x16] = param_1 + 0x1a;
  param_1[0x2e] = 0;
  param_1[0x12] = param_1 + 0x16;
  uVar1 = DAT_053e6f44._2_1_;
  *(undefined2 *)((long)param_1 + 0x2d) = (undefined2)DAT_053e6f44;
  *(undefined1 *)((long)param_1 + 0x2f) = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x22] = param_1 + 0x26;
  param_1[0x26] = param_1 + 0x2a;
  param_1[0xe] = param_1 + 0x12;
  param_1[0x2a] = param_1 + 0x2e;
  puVar2 = param_1 + 10;
  *puVar2 = param_1 + 0xe;
  param_1[8] = puVar2;
  param_1[9] = puVar2;
  if (param_1 + 0x32 != (undefined8 *)0x0) {
    param_1[7] = param_1 + 0x32;
    *(undefined4 *)((long)param_1 + 0x34) = 10;
  }
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  return;
}

