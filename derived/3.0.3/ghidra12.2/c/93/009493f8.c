
undefined8
FUN_009493f8(long param_1,long param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  float local_84 [2];
  float local_7c;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  
  uVar1 = *(uint *)(param_2 + 8);
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((-1 < (int)*(uint *)(param_2 + 0xc)) &&
       (lVar2 = *(long *)(param_1 + 0x80),
       uVar1 < *(uint *)(lVar2 + 0x38) && *(uint *)(param_2 + 0xc) < *(uint *)(lVar2 + 0x3c))) {
      FUN_00962530(lVar2,param_2,local_84);
      uVar3 = 1;
      *param_3 = (uint)local_54;
      *param_4 = (uint)local_53;
      *param_5 = (uint)local_52;
      *param_6 = (uint)local_51;
      uVar1 = *(uint *)(param_2 + 8);
    }
  }
  local_84[0] = (float)(int)uVar1 * 5.0 + 2.5;
  local_7c = (float)*(int *)(param_2 + 0xc) * 5.0 + 2.5 + -1.25;
  uVar1 = FUN_0097a980(local_84);
  if (uVar1 != 7) {
    *param_3 = uVar1;
  }
  local_7c = local_7c + 1.25;
  local_84[0] = local_84[0] + -1.25;
  uVar1 = FUN_0097a980(local_84);
  if (uVar1 != 7) {
    *param_4 = uVar1;
  }
  local_84[0] = local_84[0] + 1.25;
  local_7c = local_7c + 1.25;
  uVar1 = FUN_0097a980(local_84);
  if (uVar1 != 7) {
    *param_5 = uVar1;
  }
  local_7c = local_7c + -1.25;
  local_84[0] = local_84[0] + 1.25;
  uVar1 = FUN_0097a980(local_84);
  if (uVar1 != 7) {
    *param_6 = uVar1;
  }
  return uVar3;
}

