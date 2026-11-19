
undefined8 FUN_038d4a80(uint *param_1,undefined1 *param_2,int param_3,long param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar9 = 3;
  if ((param_3 != 0) && (-2 < param_5)) {
    if ((param_5 == -1) || (0 < param_5)) {
      lVar10 = 0;
      uVar12 = 0;
      uVar2 = param_3 - 2;
      uVar11 = param_3 - 1;
      do {
        uVar1 = *(ushort *)(param_4 + lVar10 * 2);
        cVar4 = (char)uVar1;
        if (uVar1 == 0) break;
        if (uVar11 <= uVar12) {
          uVar9 = 2;
          param_2[uVar11] = 0;
          goto joined_r0x038d4c64;
        }
        uVar6 = (uint)uVar1;
        if (uVar1 < 0x80) {
LAB_038d4b1c:
          cVar8 = cVar4;
          iVar13 = 1;
          uVar7 = (ulong)uVar12;
        }
        else {
          uVar5 = (uint)uVar1;
          if ((uVar6 + 0x9f & 0xffff) < 0x3f) {
            cVar4 = cVar4 + '@';
            goto LAB_038d4b1c;
          }
          if ((uVar6 + 0x700 >> 8 & 0xff) < 0xdf) {
            uVar6 = (uint)*(ushort *)(&DAT_0419b6f2 + ((ulong)uVar1 & 0xff) * 2);
            if (*(ushort *)(&DAT_0419b6f2 + ((ulong)uVar1 & 0xff) * 2) <
                *(ushort *)(&DAT_0419b6f2 + (ulong)((int)((ulong)uVar1 & 0xff) + 1) * 2)) {
              iVar13 = *(ushort *)(&DAT_0419b6f2 + (ulong)((int)((ulong)uVar1 & 0xff) + 1) * 2) - 1;
              while( true ) {
                while( true ) {
                  uVar5 = uVar6 + iVar13 >> 1;
                  lVar3 = (ulong)uVar5 * 3;
                  if (uVar1 >> 8 <= (ushort)(byte)(&DAT_0419b8f4)[lVar3]) break;
                  uVar6 = uVar5 + 1;
                  if (iVar13 < (int)uVar6) goto LAB_038d4c5c;
                }
                if ((ushort)(byte)(&DAT_0419b8f4)[lVar3] <= uVar1 >> 8) break;
                iVar13 = uVar5 - 1;
                if (iVar13 < (int)uVar6) goto LAB_038d4c5c;
              }
              cVar4 = (&DAT_0419b8f5)[lVar3];
              uVar6 = (uint)(byte)(&DAT_0419b8f6)[lVar3];
              if (cVar4 != '\0') goto LAB_038d4c20;
            }
LAB_038d4c5c:
            uVar9 = 1;
            param_2[uVar12] = 0;
            uVar11 = uVar12;
            goto joined_r0x038d4c64;
          }
          if ((uVar6 + 0x2000 & 0xffff) < 0x758) {
            uVar6 = (uVar5 - 0xe000) % 0xbc;
            uVar5 = (uVar5 - 0xe000) / 0xbc - 0x10;
            cVar4 = (char)uVar5;
            iVar13 = 0x40;
            if (0x3e < uVar6) {
              iVar13 = 0x41;
            }
            uVar6 = iVar13 + uVar6;
            if ((uVar5 & 0xff) == 0) goto LAB_038d4c5c;
LAB_038d4c20:
            cVar8 = (char)uVar6;
            if ((uVar6 & 0xff) == 0) goto LAB_038d4b1c;
            if (uVar2 <= uVar12) {
              uVar9 = 2;
              param_2[uVar2] = 0;
              uVar11 = uVar2;
              goto joined_r0x038d4c64;
            }
            param_2[uVar12] = cVar4;
            uVar7 = (ulong)(uVar12 + 1);
            iVar13 = 2;
          }
          else {
            if (uVar5 != 0xf8f0) {
              if ((uVar5 + 0x70f & 0xffff) < 3) {
                cVar4 = cVar4 + '\f';
                goto LAB_038d4b1c;
              }
              goto LAB_038d4c5c;
            }
            iVar13 = 1;
            uVar7 = (ulong)uVar12;
            cVar8 = -0x60;
          }
        }
        lVar10 = lVar10 + 1;
        uVar12 = iVar13 + uVar12;
        param_2[uVar7] = cVar8;
      } while ((param_5 == -1) || ((int)lVar10 < param_5));
      uVar9 = 0;
      param_2[uVar12] = 0;
      uVar11 = uVar12;
    }
    else {
      uVar9 = 0;
      uVar11 = 0;
      *param_2 = 0;
    }
joined_r0x038d4c64:
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar11;
    }
  }
  return uVar9;
}

