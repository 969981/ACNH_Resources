
undefined8 FUN_022b6094(long param_1,undefined4 param_2)

{
  ulong uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float local_54 [3];
  undefined4 local_48;
  undefined1 local_44;
  
  switch(param_2) {
  case 0:
    local_48 = 0x80000000;
    local_44 = 0;
    fVar4 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
    fVar3 = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
    local_54[0] = fVar3;
    local_54[2] = fVar4;
    uVar1 = FUN_022b5cac(local_54);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_54[2] = fVar4 + -10.0;
    local_48 = 0;
    local_54[0] = fVar3;
    break;
  case 1:
  case 5:
    local_54[1] = NAN;
    local_48 = 0x20000000;
    local_44 = 1;
    local_54[0] = (float)*(int *)(param_1 + 8) * 5.0 + 5.0 + -3.535534;
    local_54[2] = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0 + -3.535534;
    uVar1 = FUN_022b5cac(local_54);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    local_48 = 0xa0000000;
    local_54[0] = (float)*(int *)(param_1 + 8) * 5.0 + 5.0 + 3.535534;
    goto LAB_022b6230;
  case 2:
    local_48 = 0xc0000000;
    local_44 = 0;
    fVar4 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
    fVar3 = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
    local_54[0] = fVar3;
    local_54[2] = fVar4;
    uVar1 = FUN_022b5cac(local_54);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_54[0] = -10.0;
    local_48 = 0x40000000;
    goto LAB_022b6348;
  case 3:
  case 7:
    local_54[1] = NAN;
    local_48 = 0xe0000000;
    local_44 = 1;
    local_54[0] = (float)*(int *)(param_1 + 8) * 5.0 + 5.0 + 3.535534;
    local_54[2] = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0 + -3.535534;
    uVar1 = FUN_022b5cac(local_54);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    local_54[0] = (float)*(int *)(param_1 + 8) * 5.0 + 5.0 + -3.535534;
    local_48 = 0x60000000;
LAB_022b6230:
    local_44 = 1;
    local_54[2] = (float)iVar2 * 5.0 + 5.0 + 3.535534;
    goto LAB_022b63d0;
  case 4:
    local_48 = 0;
    local_44 = 0;
    fVar4 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
    fVar3 = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
    local_54[0] = fVar3;
    local_54[2] = fVar4;
    uVar1 = FUN_022b5cac(local_54);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_48 = 0x80000000;
    local_54[2] = fVar4 + 10.0;
    local_54[0] = fVar3;
    break;
  case 6:
    local_48 = 0x40000000;
    local_44 = 0;
    fVar4 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
    fVar3 = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
    local_54[0] = fVar3;
    local_54[2] = fVar4;
    uVar1 = FUN_022b5cac(local_54);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_54[0] = 10.0;
    local_48 = 0xc0000000;
LAB_022b6348:
    local_54[1] = NAN;
    local_54[0] = fVar3 + local_54[0];
    local_44 = 0;
    local_54[2] = fVar4;
    uVar1 = FUN_022b5cac(local_54);
    goto joined_r0x022b6360;
  default:
    return 1;
  }
  local_44 = 0;
LAB_022b63d0:
  local_54[1] = NAN;
  uVar1 = FUN_022b5cac(local_54);
joined_r0x022b6360:
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}

