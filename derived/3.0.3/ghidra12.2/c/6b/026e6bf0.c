
void FUN_026e6bf0(byte *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "RegulationType1";
  uVar3 = FUN_0273f0a0(&local_40);
  if ((uVar3 & 1) == 0) {
    pbVar4 = param_1 + 1;
    lVar9 = *param_2;
    bVar1 = (param_1[2] + *pbVar4 + param_1[3] + param_1[4] + param_1[5] + param_1[6]) * '\x02';
    if (0x6a < lVar9) {
      lVar9 = 0x6b;
    }
    if (lVar9 < 0) {
      uVar7 = (uint)*param_1;
    }
    else {
      bVar8 = param_1[0xd] - (char)lVar9;
      uVar7 = (uint)*param_1;
      iVar2 = (int)(char)bVar8;
      param_1[0xd] = bVar8;
      if (iVar2 < 1) {
        uVar5 = uVar7 + 1;
        if (iVar2 < -6) {
          uVar7 = (-iVar2 & 0xffU) * 0x25 >> 8;
          uVar5 = uVar5 + (uVar7 + ((-iVar2 - uVar7 & 0xfe) >> 1) >> 2);
        }
        uVar7 = (uint)bVar1;
        if ((uVar5 & 0xff) <= (uint)bVar1) {
          uVar7 = uVar5 & 0xff;
        }
        *param_1 = (byte)uVar7;
        param_1[0xd] = 7;
      }
      else if ((uVar7 == 0) && ((param_3 & 1) != 0)) {
        *param_1 = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xd] = 0x1e;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        return;
      }
    }
    pbVar6 = param_1 + 7;
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        uVar7 = 0;
        bVar8 = 1;
      }
      else {
        bVar8 = 2;
        uVar7 = uVar7 - 2;
      }
      *pbVar6 = bVar8;
      do {
        if ((uVar7 & 0xff) == 0) {
          return;
        }
        uVar3 = (ulong)(uint)DAT_05572518;
        if (5 < (uint)DAT_05572518) {
          uVar3 = 0;
        }
        if (pbVar4[uVar3] == 0) {
LAB_026e6de4:
          uVar3 = (ulong)DAT_05572518._4_4_;
          if (5 < DAT_05572518._4_4_) {
            uVar3 = 0;
          }
          if (pbVar4[uVar3] != 0) {
            uVar3 = (ulong)DAT_05572518._4_4_;
            if (5 < DAT_05572518._4_4_) {
              uVar3 = 0;
            }
            if (pbVar6[uVar3] < 2) {
              uVar3 = (ulong)DAT_05572518._4_4_;
              uVar7 = uVar7 - 1;
              if (5 < DAT_05572518._4_4_) {
                uVar3 = 0;
              }
              pbVar6[uVar3] = pbVar6[uVar3] + 1;
              if ((uVar7 & 0xff) == 0) goto LAB_026e6d70;
            }
          }
          uVar3 = (ulong)(uint)DAT_05572520;
          if (5 < (uint)DAT_05572520) {
            uVar3 = 0;
          }
          if (pbVar4[uVar3] != 0) {
            uVar3 = (ulong)(uint)DAT_05572520;
            if (5 < (uint)DAT_05572520) {
              uVar3 = 0;
            }
            if (pbVar6[uVar3] < 2) {
              uVar3 = (ulong)(uint)DAT_05572520;
              uVar7 = uVar7 - 1;
              if (5 < (uint)DAT_05572520) {
                uVar3 = 0;
              }
              pbVar6[uVar3] = pbVar6[uVar3] + 1;
              if ((uVar7 & 0xff) == 0) goto LAB_026e6d70;
            }
          }
          uVar3 = (ulong)DAT_05572520._4_4_;
          if (5 < DAT_05572520._4_4_) {
            uVar3 = 0;
          }
          if (pbVar4[uVar3] != 0) {
            uVar3 = (ulong)DAT_05572520._4_4_;
            if (5 < DAT_05572520._4_4_) {
              uVar3 = 0;
            }
            if (pbVar6[uVar3] < 2) {
              uVar3 = (ulong)DAT_05572520._4_4_;
              uVar7 = uVar7 - 1;
              if (5 < DAT_05572520._4_4_) {
                uVar3 = 0;
              }
              pbVar6[uVar3] = pbVar6[uVar3] + 1;
              if ((uVar7 & 0xff) == 0) goto LAB_026e6d70;
            }
          }
          uVar3 = (ulong)DAT_05572528;
          if (5 < DAT_05572528) {
            uVar3 = 0;
          }
          if (pbVar4[uVar3] != 0) {
            uVar3 = (ulong)DAT_05572528;
            if (5 < DAT_05572528) {
              uVar3 = 0;
            }
            if (pbVar6[uVar3] < 2) {
              uVar3 = (ulong)DAT_05572528;
              uVar7 = uVar7 - 1;
              if (5 < DAT_05572528) {
                uVar3 = 0;
              }
              pbVar6[uVar3] = pbVar6[uVar3] + 1;
            }
          }
        }
        else {
          uVar3 = (ulong)(uint)DAT_05572518;
          if (5 < (uint)DAT_05572518) {
            uVar3 = 0;
          }
          if (1 < pbVar6[uVar3]) goto LAB_026e6de4;
          uVar3 = (ulong)(uint)DAT_05572518;
          uVar7 = uVar7 - 1;
          if (5 < (uint)DAT_05572518) {
            uVar3 = 0;
          }
          pbVar6[uVar3] = pbVar6[uVar3] + 1;
          if ((uVar7 & 0xff) != 0) goto LAB_026e6de4;
LAB_026e6d70:
          uVar7 = 0;
        }
        uVar3 = (ulong)DAT_05572528;
        if (5 < DAT_05572528) {
          uVar3 = 0;
        }
      } while (pbVar6[uVar3] < 2);
      *param_1 = bVar1;
    }
  }
  else {
    *param_1 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0x1e;
  }
  return;
}

