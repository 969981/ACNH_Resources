
undefined8 FUN_0013c1f0(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  if (((param_3 & 0xff) == 0) && ((param_4 & 0xff) == 0x37)) {
    return 1;
  }
  pbVar4 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x20) << 0x18 |
                               (ulong)*(byte *)(param_1 + 0x21) << 0x10 |
                               (ulong)*(byte *)(param_1 + 0x22) << 8 |
                              (ulong)*(byte *)(param_1 + 0x23)) + (ulong)(param_2 * 10 - 10));
  bVar2 = *pbVar4 >> 1;
  uVar1 = bVar2 & 0x3f;
  if ((param_3 & 0xff) <= uVar1) {
    uVar3 = (param_3 & 0xff) * 2;
    if ((param_3 & 0xff) < 4) {
      if (uVar1 <= (param_4 & 0xff) && uVar3 <= uVar1) {
        return 1;
      }
      if (uVar1 <= (param_4 & 0xff) * 2) {
        pbVar4 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x24) << 0x18 |
                                     (ulong)*(byte *)(param_1 + 0x25) << 0x10 |
                                     (ulong)*(byte *)(param_1 + 0x26) << 8 |
                                    (ulong)*(byte *)(param_1 + 0x27)) +
                         ((ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[2] << 8 | (ulong)pbVar4[3]));
        if ((bVar2 & 0x3f) == 0) {
          uVar3 = 0;
        }
        else {
          uVar5 = 0;
          uVar3 = 0;
          do {
            uVar3 = uVar3 + 1;
            if ((param_3 & 0xff) <= (uVar3 & 0xff)) {
              if (uVar1 <= (param_4 & 0xff)) {
                return 1;
              }
              iVar6 = 1;
              if (((*pbVar4 & 0xfc) == 0xd8) && (iVar6 = 1, pbVar4[1] != 0)) {
                iVar6 = 2;
              }
              pbVar4 = pbVar4 + (uint)(iVar6 << 1);
              uVar5 = iVar6 + uVar5;
              break;
            }
            if ((*pbVar4 & 0xfc) == 0xd8) {
              iVar6 = 1;
              if (pbVar4[1] != 0) {
                iVar6 = 2;
              }
            }
            else {
              iVar6 = 1;
            }
            uVar5 = iVar6 + uVar5;
            pbVar4 = pbVar4 + (uint)(iVar6 << 1);
          } while ((uVar5 & 0xff) < uVar1);
          if ((uVar5 & 0xff) < uVar1) {
            do {
              uVar3 = uVar3 + 1;
              if ((*pbVar4 & 0xfc) == 0xd8) {
                iVar6 = 1;
                if (pbVar4[1] != 0) {
                  iVar6 = 2;
                }
              }
              else {
                iVar6 = 1;
              }
              uVar5 = iVar6 + uVar5;
              pbVar4 = pbVar4 + (uint)(iVar6 << 1);
            } while ((uVar5 & 0xff) < uVar1);
          }
        }
        if ((uVar3 & 0xff) <= (param_4 & 0xff)) {
          return 1;
        }
      }
    }
    else {
      if (uVar3 <= uVar1) {
        return 1;
      }
      if ((bVar2 & 0x3f) != 0) {
        uVar5 = 0;
        uVar3 = 0;
        pbVar4 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x24) << 0x18 |
                                     (ulong)*(byte *)(param_1 + 0x25) << 0x10 |
                                     (ulong)*(byte *)(param_1 + 0x26) << 8 |
                                    (ulong)*(byte *)(param_1 + 0x27)) +
                         ((ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[2] << 8 | (ulong)pbVar4[3]));
        do {
          uVar3 = uVar3 + 1;
          if ((param_3 & 0xff) <= (uVar3 & 0xff)) {
            return 1;
          }
          if ((*pbVar4 & 0xfc) == 0xd8) {
            iVar6 = 1;
            if (pbVar4[1] != 0) {
              iVar6 = 2;
            }
          }
          else {
            iVar6 = 1;
          }
          uVar5 = uVar5 + iVar6 & 0xff;
          pbVar4 = pbVar4 + (uint)(iVar6 << 1);
        } while (uVar5 < uVar1);
      }
    }
  }
  return 0;
}

