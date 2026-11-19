
void FUN_03b287f4(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 8) = 0x2201f;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_04bd1b78 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  FUN_03b227e0();
  *param_1 = (long)&PTR_LAB_04b74408;
  param_1[0xd] = *(long *)(param_3 + 0x18);
  param_1[0xe] = *(long *)(param_2 + 0x70);
  param_1[0xf] = *(long *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  uVar1 = *(undefined1 *)(param_2 + 0x81);
  *(undefined1 *)((long)param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x81) = uVar1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x400;
  return;
}

