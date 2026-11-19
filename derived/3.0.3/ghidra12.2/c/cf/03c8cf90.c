
byte FUN_03c8cf90(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*param_2;
  uVar3 = (uint)*param_1;
  if (*param_2 != 0) {
    do {
      pbVar2 = param_1;
      while (param_1 = pbVar2 + 1, uVar4 < 0x20) {
        if ((uVar4 >> 4 & 1) == 0) {
          switch(uVar4) {
          case 1:
            if (uVar3 < 0x20) goto switchD_03c8d0a8_default;
            goto LAB_03c8d078;
          case 2:
            if (9 < uVar3 - 0x30) goto switchD_03c8d0a8_default;
            goto LAB_03c8d078;
          case 3:
            if (uVar3 - 0x30 < 10) goto LAB_03c8d078;
            uVar3 = uVar3 - 0x41;
            break;
          case 4:
            if (uVar3 - 0x30 < 10) goto LAB_03c8d078;
            uVar3 = uVar3 - 0x61;
            break;
          default:
            goto switchD_03c8d0a8_default;
          }
          if (uVar3 < 6) goto LAB_03c8d078;
          goto switchD_03c8d0a8_default;
        }
        bVar1 = FUN_03c8cf90(pbVar2,param_2 + 1);
        if ((bVar1 & 1) != 0) goto switchD_03c8d024_default;
        switch(uVar4 & 0xef) {
        case 1:
          if (uVar3 < 0x20) goto switchD_03c8d024_default;
          break;
        case 2:
          if (9 < uVar3 - 0x30) goto switchD_03c8d024_default;
          break;
        case 3:
          if (9 < uVar3 - 0x30) {
            uVar3 = uVar3 - 0x41;
LAB_03c8d064:
            if (5 < uVar3) goto switchD_03c8d024_default;
          }
          break;
        case 4:
          if (9 < uVar3 - 0x30) {
            uVar3 = uVar3 - 0x61;
            goto LAB_03c8d064;
          }
          break;
        default:
          goto switchD_03c8d024_default;
        }
        uVar3 = (uint)*param_1;
        pbVar2 = param_1;
      }
      if (uVar4 != uVar3) {
switchD_03c8d0a8_default:
        bVar1 = 0;
        goto switchD_03c8d024_default;
      }
LAB_03c8d078:
      param_2 = param_2 + 1;
      uVar4 = (uint)*param_2;
      uVar3 = (uint)*param_1;
    } while (uVar4 != 0);
  }
  bVar1 = uVar3 == 0;
switchD_03c8d024_default:
  return bVar1 & 1;
}

