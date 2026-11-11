
void FUN_004d0f10(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar2 = *(undefined4 *)(param_1 + 3);
  param_1[1] = CONCAT44(*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 4));
  *param_1 = CONCAT44(*(undefined4 *)(param_1 + 2),*(undefined4 *)param_1);
  param_1[3] = CONCAT44(*(undefined4 *)((long)param_1 + 0x34),*(undefined4 *)((long)param_1 + 0x24))
  ;
  param_1[2] = CONCAT44(*(undefined4 *)((long)param_1 + 0x14),*(undefined4 *)((long)param_1 + 4));
  param_1[5] = CONCAT44(*(undefined4 *)(param_1 + 7),*(undefined4 *)(param_1 + 5));
  param_1[4] = CONCAT44(uVar2,uVar1);
  param_1[7] = CONCAT44(*(undefined4 *)((long)param_1 + 0x3c),*(undefined4 *)((long)param_1 + 0x2c))
  ;
  param_1[6] = CONCAT44(*(undefined4 *)((long)param_1 + 0x1c),*(undefined4 *)((long)param_1 + 0xc));
  return;
}

