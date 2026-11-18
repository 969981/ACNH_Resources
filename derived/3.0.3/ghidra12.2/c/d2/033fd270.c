
void FUN_033fd270(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 2;
  ppuVar1 = &PTR_FUN_04b2a098;
  switch(*param_2) {
  case 0:
    *param_1 = 0;
    *(undefined ***)(param_1 + 2) = &PTR_LAB_04b29578;
    return;
  default:
    *param_1 = 1;
    ppuVar1 = &PTR_LAB_04b295a0;
  case 5:
    *(undefined ***)(param_1 + 2) = ppuVar1;
    return;
  case 4:
    lVar2 = 0x4b2a060;
    lVar3 = 0x4b2a4c0;
    break;
  case 6:
    lVar2 = 0x4b2a0b0;
    lVar3 = 0x4b2a4e8;
    break;
  case 7:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a0e8;
    return;
  case 8:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a110;
    return;
  case 9:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a138;
    return;
  case 10:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a160;
    return;
  case 0xc:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a480;
    return;
  case 0xd:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a188;
    return;
  case 0xe:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a1b0;
    return;
  case 0x1c:
    *(undefined ***)(param_1 + 2) = &PTR_FUN_04b2a1d8;
    return;
  case 0x70:
    *(undefined ***)(param_1 + 2) = &PTR_LAB_04b295c8;
    return;
  }
  if ((param_3 & 1) == 0) {
    lVar3 = lVar2;
  }
  *(long *)(param_1 + 2) = lVar3 + 0x10;
  return;
}

