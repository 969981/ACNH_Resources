
void FUN_0085a480(long param_1,int param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  int local_54;
  
  puVar1 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
    return;
  }
  local_54 = param_4;
  if (param_4 != 0) {
    local_120 = 0;
    local_11c = 0x3f800000;
    local_130 = 0xb600000000;
    local_128 = 0;
    puStack_f8 = local_ec;
    local_f0 = 0x80;
    local_6d = 0;
    local_ec[0] = 0;
    local_100 = PTR_DAT_04bb2d88 + 0x10;
    local_60 = 0;
    local_64 = 0;
    local_114 = 0;
    local_10c = 0;
    local_68 = 7;
    iVar2 = FUN_0085a8b0(param_1,param_2,param_3,param_4);
    lVar4 = FUN_0084d0f8(0xb6);
    if (param_2 == 6) {
      lVar7 = 0x43a0;
LAB_0085a600:
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)(*(long *)(lVar4 + lVar7) + (long)iVar2 * 8) + 0xf0))();
    }
    else {
      if (param_2 == 0) {
        lVar7 = 0x4188;
        goto LAB_0085a600;
      }
      puVar5 = (undefined8 *)&DAT_0419b56c;
    }
    local_120 = *(undefined4 *)(puVar5 + 1);
    local_128 = *puVar5;
    local_114 = CONCAT44(param_2,local_54);
    uVar3 = FUN_0085a8b0(param_1,param_2,param_3);
    local_10c = CONCAT44(local_10c._4_4_,uVar3);
    if ((*(int *)(puVar1 + 0x38) == -0x17df00c3) || (*(int *)(puVar1 + 0x38) == -0x6efba09b)) {
      if (param_3 < 3) {
        iVar2 = *(int *)(param_1 + (ulong)param_3 * 4 + 0x274);
        lVar4 = FUN_0084d0f8(0xb6);
        puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x2e8) + (long)iVar2 * 8);
      }
      else {
        lVar4 = FUN_0084d0f8(0xb6);
        puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x2e8) + 8);
      }
      puVar6 = (undefined4 *)(**(code **)(*(long *)*puVar5 + 0xf0))();
      uVar3 = *puVar6;
    }
    else {
      uVar3 = 0x3f800000;
    }
    local_11c = CONCAT44(local_11c._4_4_,uVar3);
    uVar3 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_130,*(undefined4 *)(param_1 + 0x230)
                         ,0);
    if (*(int *)(puVar1 + 0x38) == -0x6efba09b) {
      switch(param_2) {
      default:
        goto switchD_0085a710_caseD_0;
      case 1:
        puVar9 = (uint *)(param_1 + 0x368);
        break;
      case 2:
        puVar9 = (uint *)(param_1 + 0x378);
        break;
      case 3:
        puVar9 = (uint *)(param_1 + 0x388);
        break;
      case 4:
        puVar9 = (uint *)(param_1 + 0x398);
        break;
      case 5:
        puVar9 = (uint *)(param_1 + 0x3a8);
        break;
      case 6:
        puVar9 = (uint *)(param_1 + 0x3b8);
        break;
      case 7:
        puVar9 = (uint *)(param_1 + 0x3c8);
        break;
      case 8:
        puVar9 = (uint *)(param_1 + 0x3d8);
      }
    }
    else {
switchD_0085a710_caseD_0:
      puVar9 = (uint *)(param_1 + 0x358);
    }
    goto LAB_0085a800;
  }
  local_120 = 0;
  local_11c = 0x3f800000;
  local_130 = 0xb600000000;
  local_128 = 0;
  puStack_f8 = local_ec;
  local_f0 = 0x80;
  local_6d = 0;
  local_ec[0] = 0;
  local_100 = PTR_DAT_04bb2d88 + 0x10;
  local_60 = 0;
  local_64 = 0;
  local_114 = 0;
  local_10c = 0;
  local_68 = 7;
  iVar2 = FUN_0085a8b0(param_1,param_2,param_3,0);
  lVar4 = FUN_0084d0f8(0xb6);
  switch(param_2) {
  case 0:
    plVar8 = (long *)(lVar4 + 0x418);
    goto LAB_0085a768;
  case 1:
    plVar8 = (long *)(lVar4 + 0xbc8);
    goto LAB_0085a768;
  case 2:
    lVar7 = 0x1278;
    break;
  case 3:
    lVar7 = 0x19a8;
    break;
  case 4:
    lVar7 = 0x1f98;
    break;
  case 5:
    lVar7 = 0x25c8;
    break;
  case 6:
    lVar7 = 0x2bf8;
    break;
  case 7:
    lVar7 = 0x32a8;
    break;
  case 8:
    lVar7 = 0x3a58;
    break;
  default:
    puVar5 = (undefined8 *)&DAT_0419b56c;
    goto LAB_0085a77c;
  }
  plVar8 = (long *)(lVar4 + lVar7);
LAB_0085a768:
  puVar5 = (undefined8 *)(**(code **)(**(long **)(*plVar8 + (long)iVar2 * 8) + 0xf0))();
LAB_0085a77c:
  local_120 = *(undefined4 *)(puVar5 + 1);
  local_128 = *puVar5;
  local_114 = CONCAT44(param_2,local_54);
  uVar3 = FUN_0085a8b0(param_1,param_2,param_3);
  local_10c = CONCAT44(local_10c._4_4_,uVar3);
  uVar3 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_130,*(undefined4 *)(param_1 + 0x230),0
                      );
  if (*(int *)(puVar1 + 0x38) == -0x6efba09b) {
    switch(param_2) {
    default:
      goto switchD_0085a7f8_caseD_0;
    case 1:
      puVar9 = (uint *)(param_1 + 0x2d8);
      break;
    case 2:
      puVar9 = (uint *)(param_1 + 0x2e8);
      break;
    case 3:
      puVar9 = (uint *)(param_1 + 0x2f8);
      break;
    case 4:
      puVar9 = (uint *)(param_1 + 0x308);
      break;
    case 5:
      puVar9 = (uint *)(param_1 + 0x318);
      break;
    case 6:
      puVar9 = (uint *)(param_1 + 0x328);
      break;
    case 7:
      puVar9 = (uint *)(param_1 + 0x338);
      break;
    case 8:
      puVar9 = (uint *)(param_1 + 0x348);
    }
  }
  else {
switchD_0085a7f8_caseD_0:
    puVar9 = (uint *)(param_1 + 0x2c8);
  }
LAB_0085a800:
  if (*puVar9 <= param_3) {
    param_3 = 0;
  }
  *(undefined4 *)(*(long *)(puVar9 + 2) + (long)(int)param_3 * 4) = uVar3;
  return;
}

