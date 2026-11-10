
undefined8 FUN_00113d80(ushort *param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
LAB_00113fb8:
    uVar3 = 0;
  }
  else {
    uVar4 = 0xffff;
    while( true ) {
      if (*param_1 == 0) break;
      uVar1 = (uint)*(byte *)((long)param_1 + 1) | (*param_1 & 0xff) << 8;
      param_2 = param_2 + -1;
      if (uVar1 - 0x30 < 10) {
        uVar4 = uVar4 & 8;
      }
      else if ((uVar1 | 2) == 0x2e) {
        if (((uVar4 >> 3 & 1) == 0) || ((param_2 != 0 && (param_1[1] != 0)))) {
          uVar4 = uVar4 & 0x2c;
        }
        else {
          uVar4 = uVar4 & 0x24;
        }
      }
      else if (uVar1 - 0x3041 < 0x53) {
        uVar4 = uVar4 & 1;
      }
      else if (uVar1 - 0x30a1 < 0x56) {
        uVar4 = uVar4 & 2;
      }
      else if (uVar1 - 0xff10 < 10) {
        uVar4 = uVar4 & 0x10;
      }
      else {
        uVar5 = 3;
        if (uVar1 < 0x30fb) {
          if (uVar1 < 0x7e) {
            if ((uVar1 < 0x40) && ((1L << ((ulong)uVar1 & 0x3f) & 0xa000204200000000U) != 0))
            goto switchD_00113f50_caseD_ff61;
          }
          else {
            if ((uVar1 - 0x3001 < 2) || (uVar1 - 0x309b < 2)) goto switchD_00113f50_caseD_ff5e;
            if (uVar1 == 0x7e) goto switchD_00113f50_caseD_ff61;
          }
switchD_00113f50_caseD_ff5f:
          if (0x39 < uVar1 - 0xff66) goto LAB_00113fb8;
          uVar4 = uVar4 & 4;
        }
        else {
          switch(uVar1) {
          case 0xff5e:
            break;
          case 0xff5f:
          case 0xff60:
          case 0xff62:
          case 0xff63:
          case 0xff66:
          case 0xff67:
          case 0xff68:
          case 0xff69:
          case 0xff6a:
          case 0xff6b:
          case 0xff6c:
          case 0xff6d:
          case 0xff6e:
          case 0xff6f:
          case 0xff71:
          case 0xff72:
          case 0xff73:
          case 0xff74:
          case 0xff75:
          case 0xff76:
          case 0xff77:
          case 0xff78:
          case 0xff79:
          case 0xff7a:
          case 0xff7b:
          case 0xff7c:
          case 0xff7d:
          case 0xff7e:
          case 0xff7f:
          case 0xff80:
          case 0xff81:
          case 0xff82:
          case 0xff83:
          case 0xff84:
          case 0xff85:
          case 0xff86:
          case 0xff87:
          case 0xff88:
          case 0xff89:
          case 0xff8a:
          case 0xff8b:
          case 0xff8c:
          case 0xff8d:
          case 0xff8e:
          case 0xff8f:
          case 0xff90:
          case 0xff91:
          case 0xff92:
          case 0xff93:
          case 0xff94:
          case 0xff95:
          case 0xff96:
          case 0xff97:
          case 0xff98:
          case 0xff99:
          case 0xff9a:
          case 0xff9b:
          case 0xff9c:
          case 0xff9d:
            goto switchD_00113f50_caseD_ff5f;
          case 0xff61:
          case 0xff64:
          case 0xff65:
          case 0xff70:
          case 0xff9e:
          case 0xff9f:
switchD_00113f50_caseD_ff61:
            uVar5 = 0x24;
            break;
          default:
            if (uVar1 - 0xff01 < 0x1f) {
              uVar2 = 1 << (ulong)(uVar1 - 0xff01 & 0x1f);
              if ((uVar2 & 0x50000021) == 0) {
                if ((uVar2 & 0x2800) == 0) goto LAB_00113f8c;
                uVar5 = 0x13;
                if ((param_2 == 0) && ((uVar4 >> 4 & 1) != 0)) {
                  uVar4 = uVar4 & 3;
                  goto LAB_00113fc4;
                }
              }
            }
            else {
LAB_00113f8c:
              if (1 < uVar1 - 0x30fb) goto switchD_00113f50_caseD_ff5f;
            }
          }
switchD_00113f50_caseD_ff5e:
          uVar4 = uVar4 & uVar5;
        }
      }
      if ((param_2 == 0) || (param_1 = param_1 + 1, uVar4 == 0)) break;
    }
LAB_00113fc4:
    uVar3 = 0;
    switch(uVar4) {
    case 1:
      uVar3 = 2;
      break;
    case 2:
      uVar3 = 3;
      break;
    case 4:
      uVar3 = 4;
      break;
    case 8:
      uVar3 = 0xb;
      break;
    case 0x10:
      uVar3 = 0xc;
    }
  }
  return uVar3;
}

