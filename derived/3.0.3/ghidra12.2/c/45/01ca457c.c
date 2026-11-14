
undefined8 FUN_01ca457c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_8;
  int local_4;
  
  if ((*(int *)(param_1 + 0x38) == 2 || param_2 == 0x18) || param_2 == 0x19) {
    return 0;
  }
  if ((**(long **)(*(long *)PTR_DAT_04bb49f0 + 8) == 0 &&
       (*(long **)(*(long *)PTR_DAT_04bb49f0 + 8))[1] == 0) &&
     ((param_2 - 10U < 7 || (param_2 == 0x13)))) {
    *(int *)(param_1 + 0xf64) = param_2;
    *(undefined4 *)(param_1 + 0x1cd0) = 2;
  }
  else {
    uVar1 = 0;
    local_4 = param_2;
    switch(param_2) {
    case 0:
      local_8 = 0;
      uVar1 = 4;
      break;
    case 1:
      local_8 = 1;
      uVar1 = 5;
      break;
    case 2:
      local_8 = 2;
      uVar1 = 6;
      break;
    case 3:
      if ((*(int *)(param_1 + 0xc4) == 0) && (**(short **)(param_1 + 0x1b8) == 0)) {
        local_8 = 3;
        uVar1 = 0xc;
      }
      else {
        local_8 = 3;
LAB_01ca4810:
        uVar1 = 8;
      }
      break;
    case 4:
      local_8 = 4;
      uVar1 = 0xb;
      break;
    case 5:
      local_8 = 5;
      uVar1 = 9;
      break;
    case 6:
      if (*(char *)(param_1 + 0x207b) == '\0') {
        (**(code **)(**(long **)(DAT_05ae6a60 + 0x30) + 0x28))();
        local_8 = 6;
        goto LAB_01ca4810;
      }
      local_8 = 6;
      uVar1 = 10;
      break;
    case 7:
      local_8 = 7;
      uVar1 = 0x10;
      break;
    case 8:
      local_8 = 8;
      uVar1 = 0x11;
      break;
    case 9:
      local_8 = 8;
      uVar1 = 0x12;
      break;
    case 10:
      local_8 = 9;
      uVar1 = 0x13;
      break;
    case 0xb:
      local_8 = 10;
      uVar1 = 0x14;
      break;
    case 0xc:
      local_8 = 0xb;
      uVar1 = 0x15;
      break;
    case 0xd:
      local_8 = 0xc;
      uVar1 = 0x16;
      break;
    case 0xe:
      local_8 = 0xd;
      uVar1 = 0x17;
      break;
    case 0xf:
      local_8 = 0xe;
      uVar1 = 0x18;
      break;
    case 0x10:
      local_8 = 0xf;
      uVar1 = 0x19;
      break;
    case 0x11:
      local_8 = 0x10;
      uVar1 = 0x1a;
      break;
    case 0x12:
      local_8 = 0x11;
      uVar1 = 0x1b;
      break;
    case 0x13:
      local_8 = 0x12;
      uVar1 = 0x1c;
      break;
    case 0x14:
      local_8 = 0x13;
      uVar1 = 0x1d;
      break;
    case 0x15:
      local_8 = 0x14;
      uVar1 = 0x1e;
      break;
    case 0x16:
      local_8 = 0x15;
      uVar1 = 0x1f;
      break;
    case 0x17:
      local_8 = 0x16;
      uVar1 = 0x20;
      break;
    default:
      goto switchD_01ca45ec_caseD_18;
    case 0x1a:
      local_8 = 0x18;
      uVar1 = 0xf;
    }
    FUN_01ca483c(param_1,uVar1,&local_8);
    *(int *)(param_1 + 0xf64) = local_4;
  }
  uVar1 = 1;
switchD_01ca45ec_caseD_18:
  return uVar1;
}

