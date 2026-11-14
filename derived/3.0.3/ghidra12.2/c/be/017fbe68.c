
undefined8 FUN_017fbe68(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  iVar2 = 1;
  if (iVar1 != 1) {
    if ((iVar1 < 2) || (5 < iVar1)) {
      if ((iVar1 < 6) || (0x10 < iVar1)) {
        if ((iVar1 < 0x11) || (0x12 < iVar1)) {
          iVar5 = 6;
          if (iVar1 != 0x14) {
            iVar5 = 3;
          }
          iVar2 = 5;
          if (iVar1 != 0x13) {
            iVar2 = iVar5;
          }
        }
        else {
          iVar2 = 4;
        }
      }
      else {
        iVar2 = 3;
      }
    }
    else {
      iVar2 = 2;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x128)) {
  case 2:
    if (iVar2 == 1) break;
    if (iVar2 == 3) {
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 0x43340000;
      uVar4 = 0x43750000;
      goto LAB_017fc01c;
    }
    if (iVar2 == 2) {
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 0x432a0000;
      uVar4 = 0x436b0000;
      goto LAB_017fc01c;
    }
switchD_017fbff0_default:
    if (param_2 == (undefined4 *)0x0) {
      return 1;
    }
    uVar3 = 0x43750000;
    goto LAB_017fc014;
  case 3:
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        if (param_2 == (undefined4 *)0x0) {
          return 1;
        }
        uVar3 = 0x43340000;
        uVar4 = 0x42960000;
        goto LAB_017fc01c;
      }
      if (iVar2 == 2) {
        if (param_2 == (undefined4 *)0x0) {
          return 1;
        }
        uVar3 = 0x432a0000;
        uVar4 = 0x42aa0000;
        goto LAB_017fc01c;
      }
      goto switchD_017fbff0_default;
    }
    break;
  case 4:
    switch(iVar2) {
    case 1:
      goto switchD_017fbff0_caseD_1;
    case 2:
switchD_017fbff0_caseD_2:
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 0x436b0000;
      goto LAB_017fc014;
    case 3:
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 0x43570000;
      break;
    case 4:
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 0x434d0000;
      break;
    default:
      goto switchD_017fbff0_default;
    }
    uVar4 = 0x43430000;
    goto LAB_017fc01c;
  case 5:
    switch(iVar2) {
    case 1:
      goto switchD_017fbff0_caseD_1;
    case 2:
      goto switchD_017fbff0_caseD_2;
    case 3:
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 0x43570000;
      break;
    case 4:
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 0x434d0000;
      break;
    default:
      goto switchD_017fbff0_default;
    }
    uVar4 = 0x42fa0000;
    goto LAB_017fc01c;
  default:
    if (iVar2 == 2) goto switchD_017fbff0_caseD_2;
    if (iVar2 != 1) goto switchD_017fbff0_default;
  }
switchD_017fbff0_caseD_1:
  if (param_2 == (undefined4 *)0x0) {
    return 1;
  }
  uVar3 = 0x43610000;
LAB_017fc014:
  uVar4 = 0x43200000;
LAB_017fc01c:
  param_2[2] = uVar3;
  *param_2 = uVar4;
  return 1;
}

