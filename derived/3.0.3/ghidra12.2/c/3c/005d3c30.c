
void FUN_005d3c30(undefined8 *param_1,long param_2)

{
  FUN_0053d160();
  *param_1 = &PTR_LAB_048df910;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x58);
  param_1[3] = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((long)param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x68);
  param_1[8] = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)((long)param_1 + 0x4c) = 0x10;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x78);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x88);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x80);
  *(undefined1 *)((long)param_1 + 0x7c) = 0x10;
  *(undefined4 *)(param_1 + 0x10) = 1;
  param_1[6] = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)((long)param_1 + 0x3c) = 6;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)((long)param_1 + 0x3d) = 1;
  return;
}

