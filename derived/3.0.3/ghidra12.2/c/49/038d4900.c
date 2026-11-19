
undefined8 FUN_038d4900(uint *param_1,undefined2 *param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  uVar4 = 3;
  if ((param_3 != 0) && (-2 < param_5)) {
    if ((param_5 == -1) || (0 < param_5)) {
      uVar5 = 0;
      uVar9 = 0;
      uVar6 = param_3 - 1;
      do {
        iVar7 = (int)uVar9;
        bVar2 = *(byte *)(param_4 + iVar7);
        uVar3 = (uint)bVar2;
        if (bVar2 == 0) break;
        if (uVar6 == uVar5) {
          uVar4 = 2;
          param_2[uVar6] = 0;
          goto joined_r0x038d4a70;
        }
        uVar9 = (long)iVar7 + 1;
        if (0x80 < bVar2) {
          if (bVar2 == 0xa0) {
            uVar3 = 0xf8f0;
          }
          else if ((byte)(bVar2 + 0x5f) < 0x3f) {
            uVar3 = uVar3 - 0x140;
          }
          else if (bVar2 < 0xfd) {
            if ((((param_5 != -1) && (param_5 <= (int)uVar9)) ||
                (bVar2 = *(byte *)(param_4 + uVar9), bVar2 == 0x7f)) || ((byte)(bVar2 + 3) < 0x43))
            {
LAB_038d4a78:
              uVar4 = 1;
              goto LAB_038d4a50;
            }
            uVar9 = (ulong)(iVar7 + 2);
            iVar7 = -0x41;
            if (-1 < (char)bVar2) {
              iVar7 = -0x40;
            }
            if ((uVar3 + 0x10 & 0xff) < 10) {
              uVar3 = iVar7 + (uint)bVar2 + uVar3 * 0xbc + 0x2fc0;
            }
            else {
              iVar8 = -0xc1;
              if (0xef < uVar3) {
                iVar8 = -0xcb;
              }
              iVar1 = -0x81;
              if (0x9f < uVar3) {
                iVar1 = iVar8;
              }
              uVar3 = (uint)*(ushort *)
                             (&DAT_041ada70 +
                             (long)(int)(iVar7 + (uint)bVar2 + (iVar1 + uVar3) * 0xbc) * 2);
              if (uVar3 == 0) goto LAB_038d4a78;
            }
          }
          else {
            uVar3 = uVar3 - 0x80c;
          }
        }
        param_2[uVar5] = (short)uVar3;
        uVar5 = uVar5 + 1;
      } while ((param_5 == -1) || ((int)uVar9 < param_5));
      uVar4 = 0;
LAB_038d4a50:
      uVar6 = (uint)uVar5;
      param_2[uVar5 & 0xffffffff] = 0;
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      *param_2 = 0;
    }
joined_r0x038d4a70:
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar6;
    }
  }
  return uVar4;
}

