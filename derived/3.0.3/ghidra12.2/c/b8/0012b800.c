
undefined8 FUN_0012b800(long param_1,int param_2,byte param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte *local_40;
  byte *local_38;
  
  if ((param_3 == 0) && (param_4 == 0x37)) {
    return 1;
  }
  uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x20);
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  iVar4 = FUN_0010dbc0(param_1,5,(uVar6 >> 0x10 | uVar6 << 0x10) + param_2 * 10 + -10,4,&local_38);
  if (-1 < iVar4) {
    bVar5 = local_38[4] >> 1;
    uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x24);
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    if ((bVar5 & 0x3f) == 0) {
      bVar5 = *local_38 >> 1;
      bVar1 = local_38[1];
      bVar2 = local_38[2];
      bVar3 = local_38[3];
    }
    else {
      bVar1 = local_38[5];
      bVar2 = local_38[6];
      bVar3 = local_38[7];
    }
    uVar7 = bVar5 & 0x3f;
    iVar4 = FUN_0010dbc0(param_1,10,
                         ((uint)bVar1 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3) +
                         (uVar6 >> 0x10 | uVar6 << 0x10),uVar7 << 1,&local_40);
    if ((-1 < iVar4) && (param_3 <= uVar7)) {
      if (param_3 < 4) {
        if ((uVar7 <= param_4) && ((uint)param_3 * 2 <= uVar7)) {
          return 1;
        }
        if (uVar7 <= (uint)param_4 * 2) {
          if ((bVar5 & 0x3f) == 0) {
            bVar5 = 0;
          }
          else {
            uVar6 = 0;
            bVar5 = 0;
            do {
              bVar5 = bVar5 + 1;
              if (param_3 <= bVar5) {
                if (uVar7 <= param_4) {
                  return 1;
                }
                iVar4 = 1;
                if (((*local_40 & 0xfc) == 0xd8) && (iVar4 = 1, local_40[1] != 0)) {
                  iVar4 = 2;
                }
                local_40 = local_40 + (uint)(iVar4 << 1);
                uVar6 = iVar4 + uVar6;
                break;
              }
              if ((*local_40 & 0xfc) == 0xd8) {
                iVar4 = 1;
                if (local_40[1] != 0) {
                  iVar4 = 2;
                }
              }
              else {
                iVar4 = 1;
              }
              uVar6 = iVar4 + uVar6;
              local_40 = local_40 + (uint)(iVar4 << 1);
            } while ((uVar6 & 0xff) < uVar7);
            if ((uVar6 & 0xff) < uVar7) {
              do {
                bVar5 = bVar5 + 1;
                if ((*local_40 & 0xfc) == 0xd8) {
                  iVar4 = 1;
                  if (local_40[1] != 0) {
                    iVar4 = 2;
                  }
                }
                else {
                  iVar4 = 1;
                }
                uVar6 = iVar4 + uVar6;
                local_40 = local_40 + (uint)(iVar4 << 1);
              } while ((uVar6 & 0xff) < uVar7);
            }
          }
          if (bVar5 <= param_4) {
            return 1;
          }
        }
      }
      else {
        if ((uint)param_3 * 2 <= uVar7) {
          return 1;
        }
        if ((bVar5 & 0x3f) != 0) {
          uVar6 = 0;
          bVar5 = 0;
          do {
            bVar5 = bVar5 + 1;
            if (param_3 <= bVar5) {
              return 1;
            }
            if ((*local_40 & 0xfc) == 0xd8) {
              iVar4 = 1;
              if (local_40[1] != 0) {
                iVar4 = 2;
              }
            }
            else {
              iVar4 = 1;
            }
            uVar6 = uVar6 + iVar4 & 0xff;
            local_40 = local_40 + (uint)(iVar4 << 1);
          } while (uVar6 < uVar7);
        }
      }
    }
  }
  return 0;
}

