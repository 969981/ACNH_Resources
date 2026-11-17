
undefined8 FUN_02ef7758(int param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*(long *)PTR_DAT_04bb2808 != 0) &&
      (lVar2 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar2 != 0)) &&
     (1 < *(uint *)(lVar2 + 0x1b0))) {
    return 0;
  }
  if (param_1 == 0x3b) {
    return 1;
  }
  if (param_1 < 0x72) {
    uVar3 = 1;
    switch(param_1) {
    case 0:
      break;
    case 2:
      uVar3 = 5;
      break;
    case 4:
      uVar3 = 2;
      break;
    case 10:
      uVar3 = 6;
      break;
    default:
      if (param_1 == 0x3c) goto switchD_02ef77dc_caseD_e9;
      if (param_1 == 0x3d) goto switchD_02ef77dc_caseD_72;
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_02ef77dc_caseD_73:
      uVar3 = 4;
    }
  }
  else {
    switch(param_1) {
    case 0x72:
    case 0xdc:
switchD_02ef77dc_caseD_72:
      uVar3 = 0xd;
      break;
    default:
      goto switchD_02ef77dc_caseD_73;
    case 0x77:
    case 0xf0:
      uVar3 = 0xe;
      break;
    case 0x78:
      uVar3 = 3;
      break;
    case 0x79:
      uVar3 = 0xc;
      break;
    case 0x80:
      uVar3 = 0xf;
      break;
    case 0x84:
    case 0xdf:
      uVar3 = 0xb;
      break;
    case 0x9b:
      uVar3 = 9;
      break;
    case 0xe6:
    case 0xed:
      uVar3 = 0x10;
      break;
    case 0xe9:
switchD_02ef77dc_caseD_e9:
      uVar3 = 0;
    }
  }
  if (param_1 < 0x6e) {
    if ((0x37 < param_1 - 0x24U) ||
       ((1L << ((ulong)(param_1 - 0x24U) & 0x3f) & 0x80000200000001U) == 0)) goto LAB_02ef78ec;
  }
  else if (((0x24 < param_1 - 0x6eU) ||
           ((1L << ((ulong)(param_1 - 0x6eU) & 0x3f) & 0x100000000fU) == 0)) &&
          ((param_1 != 0xdb && (param_1 != 0xef)))) goto LAB_02ef78ec;
  uVar3 = 8;
LAB_02ef78ec:
  if (DAT_04da4ab8 == 0) {
    return 0;
  }
  uVar1 = FUN_00a738a0(param_2,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar1 = FUN_02553884(uVar3,param_2,0,1);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_0255403c(uVar3,param_2,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_00a71bb8(DAT_04da4ab8,param_2,0xffffffffffffffff,4);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_1 < 0x6e) {
    if (0x37 < param_1 - 0x24U) {
      return 1;
    }
    if ((1L << ((ulong)(param_1 - 0x24U) & 0x3f) & 0x80000200000001U) == 0) {
      return 1;
    }
  }
  else if ((((0x24 < param_1 - 0x6eU) ||
            ((1L << ((ulong)(param_1 - 0x6eU) & 0x3f) & 0x100000000fU) == 0)) && (param_1 != 0xdb))
          && (param_1 != 0xef)) {
    return 1;
  }
  FUN_0254d4a0(param_2);
  return 1;
}

