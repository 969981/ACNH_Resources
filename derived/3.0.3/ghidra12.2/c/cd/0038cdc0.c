
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0038cdc0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_04102888;
  uVar2 = _DAT_04102880;
  uVar1 = _DAT_04102200;
  param_1[1] = _UNK_04102208;
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = _UNK_041023d8;
  uVar2 = _DAT_041023d0;
  param_1[5] = _UNK_041023d8;
  param_1[4] = uVar2;
  uVar1 = _DAT_04102320;
  if ((*(byte *)(param_2 + 0x18e) >> 3 & 1) != 0) {
    param_1[3] = _UNK_04102328;
    param_1[2] = uVar1;
    param_1[5] = uVar3;
    param_1[4] = uVar2;
  }
  return;
}

