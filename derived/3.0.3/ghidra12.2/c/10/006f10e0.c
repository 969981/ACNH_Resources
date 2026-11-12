
void FUN_006f10e0(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  
  uVar3 = *param_1;
  uVar5 = (uint)uVar3;
  uVar4 = uVar3;
  if ((uVar3 & 0xffdf) == 0xd7 ||
      399 < (ushort)(uVar3 - 0xc0) && 0x19 < (ushort)((uVar3 & 0xffdf) - 0x41)) {
    if ((ushort)(uVar3 + 0xcfbf) < 0x56) {
      return;
    }
    if ((ushort)(uVar3 + 0xcf5f) < 0x56) {
      uVar4 = uVar3 - 0x60;
    }
    else {
      if ((((ushort)(uVar3 - 0x410) < 0x40) || (uVar5 == 0x451)) || (uVar5 == 0x401)) {
        uVar8 = 0;
        iVar9 = 0xbb;
        do {
          uVar7 = (uint)uVar8;
          iVar1 = iVar9 + uVar7;
          if (iVar1 < 0 != SCARRY4(iVar9,uVar7)) {
            iVar1 = iVar1 + 1;
          }
          uVar2 = iVar1 >> 1;
          uVar6 = uVar2;
          if (*(ushort *)
               (&DAT_041a12ca + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2))
              == uVar5) goto joined_r0x006f123c;
          if (*(ushort *)
               (&DAT_041a12ca + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2))
              < uVar5) {
            uVar7 = uVar2 + 1;
          }
          else {
            iVar9 = uVar2 - 1;
          }
          uVar8 = (ulong)uVar7;
        } while ((int)uVar7 < iVar9);
        goto LAB_006f1194;
      }
      if ((uVar5 - 0x30 & 0xffff) < 10) {
        return;
      }
      if ((uVar5 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
        return;
      }
      if ((uVar5 & 0xffffff00) == 0x1100) {
        return;
      }
      if ((uVar5 - 0x3131 & 0xffff) < 0x5e) {
        return;
      }
      uVar4 = 0x20;
      if ((uVar5 != 0xa0) && (uVar5 != 0x3000)) {
        if (uVar5 == 0x2011) {
LAB_006f12b0:
          uVar4 = 0x2d;
        }
        else if ((uVar5 + 0xdf & 0xffff) < 0x1a) {
          uVar4 = uVar3 + 0x140;
        }
        else if (((uVar5 + 0xbf & 0xffff) < 0x1a) || ((uVar5 + 0xf0 & 0xffff) < 10)) {
          uVar4 = uVar3 + 0x120;
        }
        else if (uVar5 < 0x30fb) {
          uVar6 = uVar5 - 0x2010;
          if (uVar6 < 0x18) {
            uVar7 = 1 << (ulong)(uVar6 & 0x1f);
            if ((uVar7 & 0xf00) == 0) {
              if ((uVar7 & 0x800019) != 0) goto LAB_006f12b0;
              if ((1 << (ulong)(uVar6 & 0x1f) & 0x7000U) != 0) {
                uVar4 = 0x22;
                goto switchD_006f1384_caseD_ff01;
              }
              goto LAB_006f1390;
            }
          }
          else {
LAB_006f1390:
            if (uVar5 != 699) {
              if (uVar5 != 0x2dc) {
                return;
              }
LAB_006f13d8:
              uVar4 = 0x7e;
              goto switchD_006f1384_caseD_ff01;
            }
          }
          uVar4 = 0x27;
        }
        else if (uVar5 < 0xff01) {
          if (uVar5 == 0x30fb) {
            uVar4 = 0xb7;
          }
          else {
            if (uVar5 != 0xe265) {
              return;
            }
            uVar4 = 0xae;
          }
        }
        else {
          uVar4 = 0x21;
          switch(uVar5) {
          case 0xff01:
            break;
          case 0xff02:
          case 0xff03:
          case 0xff04:
          case 0xff05:
          case 0xff07:
          case 0xff0a:
          case 0xff0c:
          case 0xff0d:
          case 0xff0e:
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
          case 0xff1d:
          case 0xff1e:
            goto switchD_006f1384_caseD_ff02;
          case 0xff06:
            uVar4 = 0x26;
            break;
          case 0xff08:
            uVar4 = 0x28;
            break;
          case 0xff09:
            uVar4 = 0x29;
            break;
          case 0xff0b:
            uVar4 = 0x2b;
            break;
          case 0xff0f:
            uVar4 = 0x2f;
            break;
          case 0xff1a:
            uVar4 = 0x3a;
            break;
          case 0xff1f:
            uVar4 = 0x3f;
            break;
          default:
            if (uVar5 != 0xff5e) {
              return;
            }
            goto LAB_006f13d8;
          }
        }
      }
    }
  }
  else {
    uVar8 = 0;
    iVar9 = 0xbb;
    do {
      uVar5 = (uint)uVar8;
      iVar1 = iVar9 + uVar5;
      if (iVar1 < 0 != SCARRY4(iVar9,uVar5)) {
        iVar1 = iVar1 + 1;
      }
      uVar6 = iVar1 >> 1;
      uVar8 = (ulong)uVar6;
      if (*(ushort *)(&DAT_041a12ca + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2))
          == uVar3) goto joined_r0x006f11b0;
      if (*(ushort *)(&DAT_041a12ca + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2)) <
          uVar3) {
        uVar5 = uVar6 + 1;
      }
      else {
        iVar9 = uVar6 - 1;
      }
      uVar8 = (ulong)uVar5;
    } while ((int)uVar5 < iVar9);
LAB_006f1194:
    if (*(ushort *)(&DAT_041a12ca + (-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2)) == uVar3)
    {
      uVar6 = (uint)uVar8;
joined_r0x006f11b0:
      uVar2 = (uint)uVar8;
joined_r0x006f123c:
      if (-1 < (int)uVar6) {
        if (0xbb < uVar2) {
          uVar2 = 0;
        }
        uVar4 = (&DAT_041a12cc)[(ulong)uVar2 * 2];
      }
    }
  }
switchD_006f1384_caseD_ff01:
  *param_1 = uVar4;
switchD_006f1384_caseD_ff02:
  return;
}

