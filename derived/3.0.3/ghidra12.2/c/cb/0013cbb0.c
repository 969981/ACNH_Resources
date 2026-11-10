
undefined8 FUN_0013cbb0(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  if (((param_3 & 0xff) != 0) || ((param_4 & 0xff) != 0x37)) {
    pbVar2 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x20) << 0x18 |
                                 (ulong)*(byte *)(param_1 + 0x21) << 0x10 |
                                 (ulong)*(byte *)(param_1 + 0x22) << 8 |
                                (ulong)*(byte *)(param_1 + 0x23)) + (ulong)(param_2 * 10 - 10));
    uVar1 = pbVar2[4] >> 1 & 0x3f;
    if ((pbVar2[4] >> 1 & 0x3f) == 0) {
      uVar1 = *pbVar2 >> 1 & 0x3f;
      uVar6 = (ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8 | (ulong)pbVar2[3];
      if (uVar1 < (param_3 & 0xff)) {
        return 0;
      }
    }
    else {
      uVar6 = (ulong)pbVar2[5] << 0x10 | (ulong)pbVar2[6] << 8 | (ulong)pbVar2[7];
      if (uVar1 < (param_3 & 0xff)) {
        return 0;
      }
    }
    pbVar2 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x24) << 0x18 |
                                 (ulong)*(byte *)(param_1 + 0x25) << 0x10 |
                                 (ulong)*(byte *)(param_1 + 0x26) << 8 |
                                (ulong)*(byte *)(param_1 + 0x27)) + uVar6);
    uVar3 = (param_3 & 0xff) * 2;
    if ((param_3 & 0xff) < 4) {
      if ((param_4 & 0xff) < uVar1 || uVar1 < uVar3) {
        if (uVar1 <= (param_4 & 0xff) * 2) {
          if (uVar1 == 0) {
            uVar3 = 0;
          }
          else {
            uVar4 = 0;
            uVar3 = 0;
            do {
              uVar3 = uVar3 + 1;
              if ((param_3 & 0xff) <= (uVar3 & 0xff)) {
                if (uVar1 <= (param_4 & 0xff)) {
                  return 1;
                }
                iVar5 = 1;
                if (((*pbVar2 & 0xfc) == 0xd8) && (iVar5 = 1, pbVar2[1] != 0)) {
                  iVar5 = 2;
                }
                pbVar2 = pbVar2 + (uint)(iVar5 << 1);
                uVar4 = iVar5 + uVar4;
                break;
              }
              if ((*pbVar2 & 0xfc) == 0xd8) {
                iVar5 = 1;
                if (pbVar2[1] != 0) {
                  iVar5 = 2;
                }
              }
              else {
                iVar5 = 1;
              }
              uVar4 = iVar5 + uVar4;
              pbVar2 = pbVar2 + (uint)(iVar5 << 1);
            } while ((uVar4 & 0xff) < uVar1);
            if ((uVar4 & 0xff) < uVar1) {
              do {
                uVar3 = uVar3 + 1;
                if ((*pbVar2 & 0xfc) == 0xd8) {
                  iVar5 = 1;
                  if (pbVar2[1] != 0) {
                    iVar5 = 2;
                  }
                }
                else {
                  iVar5 = 1;
                }
                uVar4 = iVar5 + uVar4;
                pbVar2 = pbVar2 + (uint)(iVar5 << 1);
              } while ((uVar4 & 0xff) < uVar1);
            }
          }
          if ((uVar3 & 0xff) <= (param_4 & 0xff)) {
            return 1;
          }
        }
        return 0;
      }
    }
    else if (uVar1 < uVar3) {
      if (uVar1 == 0) {
        return 0;
      }
      uVar4 = 0;
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        if ((param_3 & 0xff) <= (uVar3 & 0xff)) {
          return 1;
        }
        if ((*pbVar2 & 0xfc) == 0xd8) {
          iVar5 = 1;
          if (pbVar2[1] != 0) {
            iVar5 = 2;
          }
        }
        else {
          iVar5 = 1;
        }
        uVar4 = uVar4 + iVar5 & 0xff;
        pbVar2 = pbVar2 + (uint)(iVar5 << 1);
      } while (uVar4 < uVar1);
      return 0;
    }
  }
  return 1;
}

