
void FUN_035b1f54(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  byte bVar6;
  
  if (param_1[6] == 1) {
    if ((ulong)param_1[7] != 6) {
      lVar1 = (ulong)param_1[7] * 8;
      bVar6 = param_1[lVar1 + 0xe68];
      param_1[lVar1 + 0xe68] = bVar6 & 0xfe;
      if ((bVar6 & 0xfe) == 0) {
        pbVar2 = param_1 + lVar1 + 0xe6a;
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
      }
    }
    param_1[10] = 0;
    param_1[0xb] = 0xfe;
    bVar6 = (&DAT_0418f533)[*param_1 >> 4];
    *(ushort *)(param_1 + 8) = (ushort)*param_1 << 8;
    lVar1 = (ulong)bVar6 * 8;
    param_1[7] = bVar6;
    bVar6 = param_1[lVar1 + 0xe68];
    if (bVar6 == 0) {
      pbVar2 = param_1 + lVar1 + 0xe6a;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
    }
    param_1[lVar1 + 0xe68] = bVar6 | 1;
    bVar6 = param_1[0xe88];
    if (bVar6 == 0) {
      param_1[0xe8a] = 0;
      param_1[0xe8b] = 0;
      param_1[0xe8c] = 0;
      param_1[0xe8d] = 0;
    }
    param_1[0xe88] = bVar6 | 1;
    param_1[0xe89] = param_1[0xe89] | 1;
  }
  else {
    if (param_1[6] == 0) {
      param_1[6] = 1;
      return;
    }
    sVar4 = *(short *)(param_1 + 10);
    *(short *)(param_1 + 10) = sVar4 + 1;
    if ((param_1[0xe78] >> 1 & 1) == 0) {
      uVar5 = sVar4 + 0x200;
      bVar6 = param_1[(ulong)param_1[7] * 8 + 0xe6e];
      param_1[0xe7e] = bVar6;
      uVar3 = uVar5 | 0x30;
      if (uVar5 < 0xc0) {
        uVar3 = uVar5;
      }
      *(byte *)(*(long *)(param_1 + 0xd88) + (ulong)uVar3) = bVar6;
      *(ushort *)(param_1 + 0xd06) = uVar3;
    }
  }
  uVar5 = *(ushort *)(param_1 + 8);
  *(ushort *)(param_1 + 8) = uVar5 + 1;
  bVar6 = param_1[(ulong)(uVar5 >> 0xc) * 2 + 0xec0];
  if (bVar6 == 0) {
    bVar6 = 3;
    switch((ulong)(uVar5 >> 0xc)) {
    case 0:
      if (((uVar5 - 0x200 < 0x700) && (param_1[0xd00] == 0)) && (*(long *)(param_1 + 0xd40) != 0)) {
        bVar6 = 1;
        break;
      }
      if ((uVar5 < 0x100) && (param_1[0xd00] == 0)) {
        bVar6 = 0;
        break;
      }
    case 1:
    case 2:
    case 3:
      bVar6 = 2;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      break;
    case 8:
    case 9:
      bVar6 = 4;
      break;
    case 10:
    case 0xb:
      bVar6 = 5;
      break;
    case 0xc:
      bVar6 = 6;
      break;
    case 0xd:
      bVar6 = 7;
      break;
    case 0xe:
      bVar6 = 8;
      break;
    default:
      if (uVar5 == 0xffff) {
        bVar6 = 0xd;
      }
      else if (uVar5 >> 7 < 0x1ff) {
        if (uVar5 >> 8 < 0xff) {
          if (uVar5 >> 9 < 0x7f) {
            bVar6 = 9;
          }
          else {
            bVar6 = 10;
          }
        }
        else {
          bVar6 = 0xb;
        }
      }
      else {
        bVar6 = 0xc;
      }
    }
  }
  FUN_035fa77c(param_1 + 0xd00,uVar5,bVar6,param_1[7]);
  bVar6 = param_1[6];
  param_1[6] = bVar6 + 1;
  if ((byte)(bVar6 + 1) == 0xa2) {
    lVar1 = (ulong)param_1[7] * 8;
    bVar6 = param_1[lVar1 + 0xe68];
    param_1[lVar1 + 0xe68] = bVar6 & 0xfe;
    if ((bVar6 & 0xfe) == 0) {
      pbVar2 = param_1 + lVar1 + 0xe6a;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
    }
    bVar6 = param_1[0xe88];
    param_1[0xe88] = bVar6 & 0xfe;
    if ((bVar6 & 0xfe) == 0) {
      param_1[0xe8a] = 0;
      param_1[0xe8b] = 0;
      param_1[0xe8c] = 0;
      param_1[0xe8d] = 0;
    }
    param_1[0xe89] = param_1[0xe89] & 0xfe;
  }
  return;
}

