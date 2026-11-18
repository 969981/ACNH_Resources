
undefined4 FUN_0331f740(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x13;
  switch((int)param_1[0x61]) {
  case 0:
    uVar3 = 5;
    break;
  case 2:
    uVar3 = 6;
    break;
  case 3:
    uVar3 = 2;
    break;
  case 4:
    uVar3 = 7;
    break;
  case 5:
    uVar3 = 8;
    break;
  case 6:
    uVar3 = 3;
    break;
  case 7:
  case 8:
    uVar3 = 9;
    break;
  case 9:
    uVar3 = 10;
    break;
  case 10:
    uVar3 = 0xb;
    break;
  case 0xb:
    uVar3 = 0xc;
    break;
  case 0xc:
  case 0x11:
    uVar3 = 0xd;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar3 = 0;
    break;
  case 0x17:
    uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    bVar1 = (uVar2 & 1) == 0;
    uVar3 = 0xe;
    goto LAB_0331f844;
  case 0x18:
    uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
      if ((uVar2 & 1) != 0) {
        return 0x11;
      }
      uVar2 = (**(code **)(*param_1 + 0xd8))(param_1);
      if ((uVar2 & 1) != 0) {
        return 0xf;
      }
      uVar2 = (**(code **)(*param_1 + 0xe0))(param_1);
      bVar1 = (uVar2 & 1) == 0;
      uVar3 = 0x10;
      goto LAB_0331f844;
    }
  case 1:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    uVar3 = 1;
    break;
  case 0x19:
    uVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
    bVar1 = (uVar2 & 1) == 0;
    uVar3 = 0x12;
LAB_0331f844:
    if (bVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

