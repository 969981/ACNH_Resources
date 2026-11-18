
void FUN_033005bc(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x1050) & 0xfffffffe) == 8) {
    (**(code **)(*DAT_0572d470 + 0x20))();
    iVar3 = FUN_032c5240();
  }
  else {
    iVar3 = (**(code **)(*DAT_0572d470 + 0x18))();
  }
  uVar1 = *(uint *)(param_1 + 0x1050);
  bVar2 = true;
  switch(uVar1) {
  case 0:
    bVar2 = false;
  case 3:
    switch(iVar3) {
    case 0:
      uVar4 = 0xe;
      if (!bVar2) {
        uVar4 = 0x10;
      }
      *(undefined4 *)(param_1 + 0x1020) = uVar4;
      break;
    default:
      *(undefined4 *)(param_1 + 0x1020) = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x1020) = 1;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x1020) = 4;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x1020) = 3;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x1020) = 7;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x1020) = 6;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x1020) = 5;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x1020) = 8;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x1020) = 10;
      break;
    case 10:
      uVar4 = 0xc;
      if (bVar2) {
        uVar4 = 0xd;
      }
      *(undefined4 *)(param_1 + 0x1020) = uVar4;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x1020) = 0xb;
    }
    break;
  default:
    if ((uVar1 & 0xfffffffe) == 8) {
      switch(iVar3) {
      case 0:
        uVar4 = 0xe;
        if (uVar1 != 9) {
          uVar4 = 0x10;
        }
        break;
      default:
        uVar4 = 2;
        break;
      case 2:
        uVar4 = 1;
        break;
      case 3:
        uVar4 = 4;
        break;
      case 4:
        uVar4 = 3;
        break;
      case 5:
        uVar4 = 7;
        break;
      case 6:
        uVar4 = 6;
        break;
      case 7:
        uVar4 = 5;
        break;
      case 8:
        uVar4 = 8;
        break;
      case 9:
        uVar4 = 10;
        break;
      case 10:
        uVar4 = 0xc;
        if (uVar1 == 9) {
          uVar4 = 0xd;
        }
        break;
      case 0xb:
        uVar4 = 0xb;
        break;
      case 0xc:
        uVar4 = 0x12;
        break;
      case 0xd:
        uVar4 = 0x14;
        break;
      case 0xe:
        uVar4 = 0x13;
      }
      *(undefined4 *)(param_1 + 0x1038) = uVar4;
    }
    break;
  case 2:
    if (iVar3 == 7) {
      *(undefined4 *)(param_1 + 0x1024) = 3;
    }
    else if (iVar3 == 4) {
      *(undefined4 *)(param_1 + 0x1024) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1024) = 1;
    }
    break;
  case 4:
    switch(iVar3) {
    default:
      *(undefined4 *)(param_1 + 0x1028) = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x1028) = 1;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x1028) = 4;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x1028) = 3;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x1028) = 7;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x1028) = 6;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x1028) = 5;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x1028) = 8;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x1028) = 10;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x1028) = 0xc;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x1028) = 0xb;
    }
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x102c) = 1;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x1030) = 1;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x1034) = 1;
  }
  return;
}

