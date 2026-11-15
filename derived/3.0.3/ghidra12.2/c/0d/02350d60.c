
void FUN_02350d60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_04a80288;
  param_1[1] = 0;
  FUN_023527a4(param_1 + 7,param_1,0);
  lVar2 = param_1[3];
  param_1[7] = &PTR_LAB_04a802b8;
  param_1[0x62f] = 0;
  param_1[0x632] = 0;
  param_1[0x633] = 0;
  lVar1 = param_1[2] + 0x1d00;
  *(undefined1 *)(param_1 + 0x634) = 0;
  param_1[3] = param_1 + 0x62e;
  param_1[0x630] = lVar1;
  if (lVar2 != 0) {
    param_1[0x632] = lVar2;
  }
  param_1[0x637] = lVar1;
  param_1[0x636] = 0;
  *(undefined1 *)(param_1 + 0x63b) = 0;
  param_1[0x631] = param_1 + 0x635;
  param_1[0x62e] = &PTR_LAB_04a80408;
  param_1[0x638] = 0;
  param_1[0x639] = 0;
  param_1[0x63a] = 0;
  param_1[0x635] = &DAT_04a80438;
  FUN_007e9590(param_1 + 0x63c,param_1 + 0x62e,param_1[2] + 0x1d10);
  *(undefined1 *)(param_1 + 0x7ae) = 0;
  param_1[0x62e] = &PTR_LAB_04a803d8;
  param_1[0x7aa] = param_1[2] + 0x1fb8;
  param_1[0x7a9] = 0;
  param_1[0x7ab] = 0;
  param_1[0x7ac] = 0;
  param_1[0x7ad] = 0;
  param_1[0x63c] = &PTR_LAB_04917010;
  if (param_1[3] != 0) {
    param_1[0x7ac] = param_1[3];
  }
  param_1[0x7b0] = 0;
  param_1[0x7b1] = param_1[2] + 0x1fc0;
  param_1[0x7a8] = &DAT_04a80468;
  param_1[0x7b2] = 0;
  *(undefined1 *)(param_1 + 0x7b5) = 0;
  param_1[0x7b3] = param_1 + 0x7a8;
  param_1[0x7b4] = 0;
  param_1[3] = param_1 + 0x7af;
  param_1[0x7af] = &DAT_04a80468;
  *param_1 = &PTR_LAB_04a80258;
  return;
}

