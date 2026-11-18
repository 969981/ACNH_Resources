
void FUN_03335428(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(param_1 + 0x308);
  if (iVar3 - 0xbU < 0xf) {
    lVar4 = *(long *)PTR_DAT_04bc1118;
    switch(iVar3) {
    case 0xb:
      *(undefined4 *)(param_1 + 0x1b28) = 0;
      goto LAB_033354ac;
    default:
      goto switchD_03335470_caseD_c;
    case 0xd:
      *(undefined4 *)(param_1 + 0x1b28) = 2;
      if ((param_3 == 0) &&
         ((lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0 ||
          (param_3 = *(uint *)(lVar4 + 0x1640c), param_3 == 0)))) {
        if (*(int *)(lVar4 + 0x1050) == 9 || *(int *)(lVar4 + 0x1050) == 3) {
          param_3 = 3;
        }
        else {
          param_3 = 1;
        }
      }
      break;
    case 0x17:
    case 0x19:
      *(undefined4 *)(param_1 + 0x1b28) = 1;
      if (param_3 == 0) {
        iVar1 = *(int *)(*(long *)(lVar4 + 0x20) + 0x1050);
        if ((iVar1 != 3 && iVar1 != 9) &&
           (((iVar3 == 0x19 || (iVar3 == 0x17)) && (*(int *)(param_1 + 0x1b2c) == 1))))
        goto LAB_03335578;
        param_3 = 2;
      }
      break;
    case 0x18:
      *(undefined4 *)(param_1 + 0x1b28) = 3;
      if (param_3 == 0) {
        iVar3 = *(int *)(*(long *)(lVar4 + 0x20) + 0x1050);
        if (iVar3 == 3 || iVar3 == 9) {
LAB_03335578:
          param_3 = 1;
        }
        else {
          if (*(int *)(param_1 + 0x1b2c) == 2) {
            param_3 = 2;
          }
          else if (*(int *)(param_1 + 0x1b2c) == 3) {
            param_3 = 3;
          }
          else {
            if (*(int *)(param_1 + 0x1b2c) != 4) goto LAB_03335578;
            param_3 = 4;
          }
          *(uint *)(param_1 + 0x1b54) = param_3;
        }
      }
    }
    FUN_03337ea0(param_1,param_3);
  }
  else {
switchD_03335470_caseD_c:
    *(undefined4 *)(param_1 + 0x1b28) = 2;
LAB_033354ac:
    if (param_3 < 2) {
      param_3 = 1;
    }
    FUN_03337ea0(param_1,param_3);
    *(undefined1 *)(param_1 + 0x1b34) = 0;
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_03335660(param_1);
  iVar3 = 4;
  switch(*(undefined4 *)(param_1 + 0x308)) {
  case 0xd:
    break;
  default:
    iVar3 = 2;
    break;
  case 0x17:
  case 0x19:
    iVar3 = 3;
    break;
  case 0x18:
    iVar3 = 5;
  }
  if ((*(int *)(param_1 + 0x1b2c) == iVar3) ||
     ((*(int *)(param_1 + 0x1b28) == 0 && (*(char *)(param_1 + 0x1b34) != '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_0331e4f8(param_1,uVar2);
  return;
}

