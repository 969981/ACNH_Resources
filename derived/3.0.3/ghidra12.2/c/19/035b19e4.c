
void FUN_035b19e4(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  
  if (param_1[6] == 1) {
    if ((ulong)param_1[7] != 6) {
      lVar1 = (ulong)param_1[7] * 8;
      bVar5 = param_1[lVar1 + 0xe68];
      param_1[lVar1 + 0xe68] = bVar5 & 0xfe;
      if ((bVar5 & 0xfe) == 0) {
        pbVar2 = param_1 + lVar1 + 0xe6a;
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
      }
    }
    param_1[10] = 0;
    param_1[0xb] = 0xfe;
    bVar5 = (&DAT_0418f513)[*param_1 >> 4];
    *(ushort *)(param_1 + 8) = (ushort)*param_1 << 8;
    lVar1 = (ulong)bVar5 * 8;
    param_1[7] = bVar5;
    bVar5 = param_1[lVar1 + 0xe68];
    if (bVar5 == 0) {
      pbVar2 = param_1 + lVar1 + 0xe6a;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
    }
    param_1[lVar1 + 0xe68] = bVar5 | 1;
    bVar5 = param_1[0xe88];
    if (bVar5 == 0) {
      param_1[0xe8a] = 0;
      param_1[0xe8b] = 0;
      param_1[0xe8c] = 0;
      param_1[0xe8d] = 0;
    }
    param_1[0xe88] = bVar5 | 1;
    param_1[0xe89] = param_1[0xe89] | 1;
  }
  else {
    if (param_1[6] == 0) {
      param_1[6] = 1;
      return;
    }
    sVar3 = *(short *)(param_1 + 10);
    *(short *)(param_1 + 10) = sVar3 + 1;
    if ((param_1[0xe68] >> 1 & 1) == 0) {
      uVar4 = sVar3 + 0x200;
      bVar5 = (param_1 + 0xe68)[(ulong)param_1[7] * 8 + 6];
      param_1[0xe6e] = bVar5;
      if (uVar4 < 0xa0) {
        *(byte *)(*(long *)(param_1 + 0xd88) + (ulong)uVar4) = bVar5;
        *(ushort *)(param_1 + 0xd06) = uVar4;
      }
    }
  }
  uVar4 = *(ushort *)(param_1 + 8);
  *(ushort *)(param_1 + 8) = uVar4 + 1;
  bVar5 = param_1[(ulong)(uVar4 >> 0xc) * 2 + 0xec0];
  if (bVar5 == 0) {
    bVar5 = 3;
    switch((ulong)(uVar4 >> 0xc)) {
    case 0:
      if (((uVar4 - 0x200 < 0x700) && (param_1[0xd00] == 0)) && (*(long *)(param_1 + 0xd40) != 0)) {
        bVar5 = 1;
        break;
      }
      if ((uVar4 < 0x100) && (param_1[0xd00] == 0)) {
        bVar5 = 0;
        break;
      }
    case 1:
    case 2:
    case 3:
      bVar5 = 2;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      break;
    case 8:
    case 9:
      bVar5 = 4;
      break;
    case 10:
    case 0xb:
      bVar5 = 5;
      break;
    case 0xc:
      bVar5 = 6;
      break;
    case 0xd:
      bVar5 = 7;
      break;
    case 0xe:
      bVar5 = 8;
      break;
    default:
      if (uVar4 == 0xffff) {
        bVar5 = 0xd;
      }
      else if (uVar4 >> 7 < 0x1ff) {
        if (uVar4 >> 8 < 0xff) {
          if (uVar4 >> 9 < 0x7f) {
            bVar5 = 9;
          }
          else {
            bVar5 = 10;
          }
        }
        else {
          bVar5 = 0xb;
        }
      }
      else {
        bVar5 = 0xc;
      }
    }
  }
  FUN_035f9634(param_1 + 0xd00,uVar4,bVar5,param_1[7]);
  bVar5 = param_1[6];
  param_1[6] = bVar5 + 1;
  if ((byte)(bVar5 + 1) == 0xa2) {
    lVar1 = (ulong)param_1[7] * 8;
    bVar5 = param_1[lVar1 + 0xe68];
    param_1[lVar1 + 0xe68] = bVar5 & 0xfe;
    if ((bVar5 & 0xfe) == 0) {
      pbVar2 = param_1 + lVar1 + 0xe6a;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
    }
    bVar5 = param_1[0xe88];
    param_1[0xe88] = bVar5 & 0xfe;
    if ((bVar5 & 0xfe) == 0) {
      param_1[0xe8a] = 0;
      param_1[0xe8b] = 0;
      param_1[0xe8c] = 0;
      param_1[0xe8d] = 0;
    }
    param_1[0xe89] = param_1[0xe89] & 0xfe;
  }
  return;
}

