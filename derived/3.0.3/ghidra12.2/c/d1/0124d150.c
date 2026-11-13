
void FUN_0124d150(undefined4 *param_1,undefined8 param_2,float *param_3)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_58 [2];
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  undefined **local_40;
  uint local_38;
  uint local_34;
  
  local_38 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
  local_34 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  local_40 = &PTR_FUN_04986b58;
  if ((local_38 & 1) != 0) {
    local_38 = local_38 - 1;
  }
  if ((local_34 & 1) != 0) {
    local_34 = local_34 - 1;
  }
  if (DAT_04c487d4 == -1) {
LAB_0124d234:
    uVar3 = FUN_0122a4e0();
    uVar4 = 1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 2;
    }
  }
  else {
    local_58[0] = 3;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) goto LAB_0124d234;
    uVar4 = 0;
  }
  uVar3 = FUN_0122ade0(&local_40,uVar4);
  FUN_0124c030(local_58,param_2);
  iVar2 = FUN_0123db50(&local_50,local_48);
  if (iVar2 - 0x23U < 9) {
    uVar5 = 0xff7fffff;
    uVar6 = 0x800000;
  }
  else {
    iVar2 = FUN_0123db50(&local_50,local_48);
    if (5 < iVar2 - 0x12U) goto LAB_0124d2c0;
    uVar5 = 0xfffffeff;
    uVar6 = 0x100;
  }
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  local_4c = local_4c & uVar5 | uVar6;
LAB_0124d2c0:
  iVar2 = FUN_0123db50(&local_50,local_48);
  if (iVar2 - 0x23U < 9) {
    uVar6 = local_4c & 0xffffe0ff;
  }
  else {
    iVar2 = FUN_0123db50(&local_50,local_48);
    uVar6 = local_4c & 0xffffffe0;
    if (5 < iVar2 - 0x12U) {
      uVar6 = local_4c;
    }
  }
  *param_1 = local_50;
  param_1[1] = uVar6 & 0xff801fff;
  return;
}

