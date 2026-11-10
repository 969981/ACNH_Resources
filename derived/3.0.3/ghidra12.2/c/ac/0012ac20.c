
undefined8 FUN_0012ac20(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *local_40;
  byte *local_38;
  
  if (((param_3 & 0xff) == 0) && ((param_4 & 0xff) == 0x37)) {
    return 1;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x20);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  iVar3 = FUN_0010dbc0(param_1,5,(uVar1 >> 0x10 | uVar1 << 0x10) + param_2 * 10 + -10,4,&local_38);
  if (-1 < iVar3) {
    bVar2 = *local_38 >> 1;
    uVar1 = bVar2 & 0x3f;
    if ((param_3 & 0xff) <= uVar1) {
      uVar4 = (param_3 & 0xff) * 2;
      if ((param_3 & 0xff) < 4) {
        if ((uVar1 <= (param_4 & 0xff)) && (uVar4 <= uVar1)) {
          return 1;
        }
        if ((uVar1 <= (param_4 & 0xff) * 2) &&
           (uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x24),
           uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8,
           iVar3 = FUN_0010dbc0(param_1,10,
                                ((uint)local_38[1] << 0x10 | (uint)local_38[2] << 8 |
                                (uint)local_38[3]) + (uVar4 >> 0x10 | uVar4 << 0x10),uVar1 << 1,
                                &local_40), -1 < iVar3)) {
          if ((bVar2 & 0x3f) == 0) {
            uVar4 = 0;
          }
          else {
            uVar5 = 0;
            uVar4 = 0;
            do {
              uVar4 = uVar4 + 1;
              if ((param_3 & 0xff) <= (uVar4 & 0xff)) {
                if (uVar1 <= (param_4 & 0xff)) {
                  return 1;
                }
                iVar3 = 1;
                if (((*local_40 & 0xfc) == 0xd8) && (iVar3 = 1, local_40[1] != 0)) {
                  iVar3 = 2;
                }
                local_40 = local_40 + (uint)(iVar3 << 1);
                uVar5 = iVar3 + uVar5;
                break;
              }
              if ((*local_40 & 0xfc) == 0xd8) {
                iVar3 = 1;
                if (local_40[1] != 0) {
                  iVar3 = 2;
                }
              }
              else {
                iVar3 = 1;
              }
              uVar5 = iVar3 + uVar5;
              local_40 = local_40 + (uint)(iVar3 << 1);
            } while ((uVar5 & 0xff) < uVar1);
            if ((uVar5 & 0xff) < uVar1) {
              do {
                uVar4 = uVar4 + 1;
                if ((*local_40 & 0xfc) == 0xd8) {
                  iVar3 = 1;
                  if (local_40[1] != 0) {
                    iVar3 = 2;
                  }
                }
                else {
                  iVar3 = 1;
                }
                uVar5 = iVar3 + uVar5;
                local_40 = local_40 + (uint)(iVar3 << 1);
              } while ((uVar5 & 0xff) < uVar1);
            }
          }
          if ((uVar4 & 0xff) <= (param_4 & 0xff)) {
            return 1;
          }
        }
      }
      else {
        if (uVar4 <= uVar1) {
          return 1;
        }
        uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x24);
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        iVar3 = FUN_0010dbc0(param_1,10,
                             ((uint)local_38[1] << 0x10 | (uint)local_38[2] << 8 | (uint)local_38[3]
                             ) + (uVar4 >> 0x10 | uVar4 << 0x10),uVar1 << 1,&local_40);
        if ((-1 < iVar3) && ((bVar2 & 0x3f) != 0)) {
          uVar5 = 0;
          uVar4 = 0;
          do {
            uVar4 = uVar4 + 1;
            if ((param_3 & 0xff) <= (uVar4 & 0xff)) {
              return 1;
            }
            if ((*local_40 & 0xfc) == 0xd8) {
              iVar3 = 1;
              if (local_40[1] != 0) {
                iVar3 = 2;
              }
            }
            else {
              iVar3 = 1;
            }
            uVar5 = uVar5 + iVar3 & 0xff;
            local_40 = local_40 + (uint)(iVar3 << 1);
          } while (uVar5 < uVar1);
        }
      }
    }
  }
  return 0;
}

