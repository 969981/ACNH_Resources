
undefined8 FUN_00141680(ushort param_1,ushort *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  
  if (param_1 == 0) {
    return 0xffff;
  }
  uVar2 = param_1 + 0xcfbf;
  if (uVar2 < 0x53) {
    if (*(ushort *)(&DAT_0405994e + (long)(short)uVar2 * 6) == param_1) {
      *param_2 = uVar2;
      return 0;
    }
    return 0xffff;
  }
  uVar1 = 0xffff;
  if (param_1 < 0x30fb) {
    if (param_1 < 0x309b) {
      if (param_1 == 0x3001) {
        uVar2 = 0x8000;
      }
      else {
        if (param_1 != 0x3002) {
          return 0xffff;
        }
        uVar2 = 0x8001;
      }
    }
    else if (param_1 == 0x309b) {
      uVar2 = 0x800f;
    }
    else if (param_1 == 0x309c) {
      uVar2 = 0x8010;
    }
    else {
      if (param_1 != 0x30f4) {
        return 0xffff;
      }
      uVar2 = 0x8013;
    }
  }
  else {
    switch(param_1) {
    case 0xff01:
      uVar2 = 0x8005;
      break;
    case 0xff02:
    case 0xff03:
    case 0xff04:
    case 0xff05:
    case 0xff07:
    case 0xff08:
    case 0xff09:
    case 0xff0a:
    case 0xff0b:
    case 0xff10:
    case 0xff11:
    case 0xff12:
    case 0xff13:
    case 0xff14:
    case 0xff15:
    case 0xff16:
    case 0xff17:
    case 0xff18:
    case 0xff19:
    case 0xff1b:
    case 0xff1c:
    case 0xff1e:
    case 0xff21:
    case 0xff22:
    case 0xff23:
    case 0xff24:
    case 0xff25:
    case 0xff26:
    case 0xff27:
    case 0xff28:
    case 0xff29:
    case 0xff2a:
    case 0xff2b:
    case 0xff2c:
    case 0xff2d:
    case 0xff2e:
    case 0xff2f:
    case 0xff30:
    case 0xff31:
    case 0xff32:
    case 0xff33:
    case 0xff34:
    case 0xff35:
    case 0xff36:
    case 0xff37:
    case 0xff38:
    case 0xff39:
    case 0xff3a:
    case 0xff3b:
    case 0xff3c:
    case 0xff3d:
    case 0xff3e:
    case 0xff40:
    case 0xff41:
    case 0xff42:
    case 0xff43:
    case 0xff44:
    case 0xff45:
    case 0xff46:
    case 0xff47:
    case 0xff48:
    case 0xff49:
    case 0xff4a:
    case 0xff4b:
    case 0xff4c:
    case 0xff4d:
    case 0xff4e:
    case 0xff4f:
    case 0xff50:
    case 0xff51:
    case 0xff52:
    case 0xff53:
    case 0xff54:
    case 0xff55:
    case 0xff56:
    case 0xff57:
    case 0xff58:
    case 0xff59:
    case 0xff5a:
    case 0xff5b:
    case 0xff5c:
    case 0xff5d:
      goto switchD_00141708_caseD_ff02;
    case 0xff06:
      uVar2 = 0x8011;
      break;
    case 0xff0c:
      uVar2 = 0x800d;
      break;
    case 0xff0d:
      uVar2 = 0x8007;
      break;
    case 0xff0e:
      uVar2 = 0x8008;
      break;
    case 0xff0f:
      uVar2 = 0x8009;
      break;
    case 0xff1a:
      uVar2 = 0x800a;
      break;
    case 0xff1d:
      uVar2 = 0x8012;
      break;
    case 0xff1f:
      uVar2 = 0x8006;
      break;
    case 0xff20:
      uVar2 = 0x800b;
      break;
    case 0xff3f:
      uVar2 = 0x800c;
      break;
    case 0xff5e:
      uVar2 = 0x8004;
      break;
    default:
      if (param_1 == 0x30fb) {
        uVar2 = 0x8003;
      }
      else {
        if (param_1 != 0x30fc) {
          return 0xffff;
        }
        uVar2 = 0x8002;
      }
    }
  }
  uVar1 = 0;
  *param_2 = uVar2;
switchD_00141708_caseD_ff02:
  return uVar1;
}

