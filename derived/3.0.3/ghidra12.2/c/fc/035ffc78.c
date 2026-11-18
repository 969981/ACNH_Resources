
void FUN_035ffc78(byte *param_1,uint param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte in_ZR;
  byte *pbVar4;
  
  switch(param_2 >> 0xc & 0xf) {
  default:
    in_ZR = param_3 == 0;
  case 0xc:
    param_1[2] = in_ZR;
    break;
  case 2:
  case 3:
    *param_1 = param_3 & 0x3f;
    return;
  case 4:
  case 5:
    param_1[1] = param_3 & 0xf;
    param_1[3] = param_3 >> 4 & 1;
    return;
  case 6:
  case 7:
    break;
  case 8:
  case 9:
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x35ffd8c);
    (*pcVar3)();
  case 10:
  case 0xb:
    if (param_1[3] != 0) {
      param_2 = param_2 & 0x7f;
      if (param_2 == 0) {
        bVar1 = param_3 & 1;
        pbVar4 = param_1 + 4;
        bVar2 = *pbVar4;
        *pbVar4 = param_3 & 7;
        bVar2 = bVar2 & 1;
        if (bVar1 >= bVar2 && bVar1 != bVar2) {
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x32);
          *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x2c);
          *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_1 + 0x24);
          *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_1 + 0x1c);
          *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_1 + 0x14);
          *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)pbVar4;
          *(ulong *)(param_1 + 0x70) =
               (((ulong)param_1[5] & 0x80) << 2 ^ 0x200) +
               ((ulong)param_1[6] << 0xc | (ulong)param_1[7] << 4) + 0x7ebe +
               *(long *)(*(long *)(param_1 + 0x78) + -0xdb0);
          return;
        }
        if (bVar1 < bVar2) {
          param_1[0x70] = 0;
          param_1[0x71] = 0;
          param_1[0x72] = 0;
          param_1[0x73] = 0;
          param_1[0x74] = 0;
          param_1[0x75] = 0;
          param_1[0x76] = 0;
          param_1[0x77] = 0;
          return;
        }
      }
      else if (param_2 < 0x36) {
        param_1[(ulong)param_2 + 4] = param_3;
        return;
      }
    }
  }
  return;
}

