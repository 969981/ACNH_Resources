
void FUN_02a07700(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x7f7fffff;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x54) = 0x7f7fffff7f7fffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar2 = -0x1400;
  do {
    lVar1 = lVar2 + 0x28;
    *(undefined8 *)((long)param_1 + lVar2 + 0x1480) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x1488) = 0x3f8000007f7fffff;
    *(undefined8 *)((long)param_1 + lVar2 + 0x1490) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x1498) = 0x3f00000000000000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x14a0) = 0x7f7fffff7f7fffff;
    lVar2 = lVar1;
  } while (lVar1 != 0);
  param_1[0x292] = 0;
  param_1[0x291] = 0;
  param_1[0x290] = 0;
  *(undefined8 *)((long)param_1 + 0x1497) = 0;
  return;
}

