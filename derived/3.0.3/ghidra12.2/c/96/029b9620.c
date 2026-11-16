
undefined8 FUN_029b9620(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar1 = *param_1;
  uVar2 = 1;
  switch(iVar1) {
  case 0x9d:
    goto switchD_029b9660_caseD_9d;
  case 0x9e:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa5:
  case 0xa7:
  case 0xde:
    goto switchD_029b9660_caseD_9e;
  case 0x9f:
  case 0xa4:
  case 0xa6:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
    break;
  default:
    if (iVar1 - 0x10dU < 2) {
      return 1;
    }
  }
  uVar3 = FUN_029b95c0(iVar1);
  if ((uVar3 & 1) != 0) {
switchD_029b9660_caseD_9d:
    if (param_2 == (int *)0x0) {
      return 1;
    }
    iVar1 = *param_2;
    uVar2 = 1;
    switch(iVar1) {
    case 0x9d:
      goto switchD_029b96a8_caseD_9d;
    case 0x9e:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa5:
    case 0xa7:
    case 0xde:
      goto switchD_029b9660_caseD_9e;
    case 0x9f:
    case 0xa4:
    case 0xa6:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
      break;
    default:
      if (iVar1 - 0x10dU < 2) {
        return 1;
      }
    }
    uVar3 = FUN_029b95c0(iVar1);
    if ((uVar3 & 1) != 0) {
switchD_029b96a8_caseD_9d:
      if (param_3 == (int *)0x0) {
        uVar2 = 1;
      }
      else {
        iVar1 = *param_3;
        uVar2 = 1;
        switch(iVar1) {
        case 0x9d:
          return 0;
        case 0x9e:
        case 0xa0:
        case 0xa1:
        case 0xa2:
        case 0xa3:
        case 0xa5:
        case 0xa7:
        case 0xde:
          break;
        default:
          if (iVar1 - 0x10dU < 2) {
            return 1;
          }
        case 0x9f:
        case 0xa4:
        case 0xa6:
        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xaf:
        case 0xb0:
        case 0xb1:
        case 0xb2:
        case 0xb3:
        case 0xb4:
        case 0xb5:
        case 0xb6:
        case 0xb7:
        case 0xb8:
        case 0xb9:
        case 0xba:
        case 0xbb:
        case 0xbc:
        case 0xbd:
        case 0xbe:
        case 0xbf:
        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc3:
        case 0xc4:
        case 0xc5:
        case 0xc6:
        case 199:
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
        case 0xd8:
        case 0xd9:
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xdd:
          uVar3 = FUN_029b95c0(iVar1);
          uVar2 = 0;
          if ((uVar3 & 1) != 0) {
            return 0;
          }
        }
      }
      return uVar2;
    }
  }
  uVar2 = 0;
switchD_029b9660_caseD_9e:
  return uVar2;
}

