
void FUN_03f5408c(long param_1,uint param_2,byte param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  
  if ((1 << (ulong)(param_2 >> 0xc & 0xf) & 0xf0b0U) != 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xb);
  if (((bVar1 & 0xf) == 10) && (*(short *)(param_1 + 0x10) != 0)) {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    return;
  }
  if (*(char *)(param_1 + 9) != '\0') {
    *(byte *)(param_1 + 0xb) = param_3;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 9) = 0x100;
    if (param_3 < 0x40) {
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(&DAT_041eb1d8 + (long)(char)param_3 * 2);
      return;
    }
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 9) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  uVar7 = (uint)*(ushort *)(param_1 + 0xe);
  if (0xe < uVar7) {
    uVar7 = 0xf;
  }
  *(short *)(param_1 + 0xe) = (short)uVar7 + 1;
  sVar2 = *(short *)(param_1 + 0xc);
  *(byte *)(param_1 + (ulong)uVar7 + 0x254) = param_3;
  if (sVar2 == 0) {
    return;
  }
  *(short *)(param_1 + 0xc) = sVar2 + -1;
  if (sVar2 != 1) {
    return;
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  switch(bVar1) {
  case 0:
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    sVar2 = *(short *)(param_1 + 0x254);
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined4 *)(param_1 + 0x250) = 1;
    *(short *)(param_1 + 0x22a) = sVar2;
    *(short *)(param_1 + 0x18) = sVar2;
    uVar3 = (int)(short)((ushort)*(byte *)(param_1 + 599) << 8) | (uint)*(byte *)(param_1 + 0x256);
    uVar7 = (int)sVar2 * uVar3;
    uVar10 = (undefined2)uVar3;
    *(undefined2 *)(param_1 + 0x22c) = uVar10;
    *(undefined2 *)(param_1 + 0x1a) = uVar10;
    uVar10 = (undefined2)(uVar7 >> 0xf);
    *(undefined2 *)(param_1 + 0x1c) = uVar10;
    *(short *)(param_1 + 0x1e) = (short)uVar7 * 2;
    *(undefined2 *)(param_1 + 0x14) = uVar10;
    *(undefined2 *)(param_1 + 0x240) = uVar10;
    goto LAB_03f545a4;
  case 1:
  case 5:
  case 0x11:
  case 0x15:
  case 0x21:
  case 0x25:
  case 0x31:
  case 0x35:
    *(undefined4 *)(param_1 + 0x22a) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x23c) = 4;
    *(undefined4 *)(param_1 + 0x22e) = *(undefined4 *)(param_1 + 600);
    FUN_03f5676c(param_1);
    return;
  case 2:
  case 0x12:
  case 0x22:
  case 0x32:
    *(undefined2 *)(param_1 + 0x10) = 8;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined8 *)(param_1 + 0x22c) = *(undefined8 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x25e);
    *(undefined4 *)(param_1 + 0x23c) = 7;
    FUN_03f54fa0(param_1);
    break;
  case 3:
  case 0x33:
    *(undefined2 *)(param_1 + 0x10) = 6;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f56dfc(param_1);
    break;
  case 4:
  case 0x24:
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(undefined4 *)(param_1 + 0x22a) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x23c) = 2;
    FUN_03f547c4(param_1);
    break;
  case 6:
  case 0x16:
  case 0x26:
  case 0x36:
    *(undefined2 *)(param_1 + 0x10) = 6;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f55d70(param_1);
    break;
  case 7:
  case 0xf:
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(undefined2 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x250) = 1;
    goto LAB_03f545a4;
  case 8:
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f548bc(param_1);
    break;
  case 9:
  case 0xd:
  case 0x19:
  case 0x1d:
  case 0x29:
  case 0x2d:
  case 0x39:
  case 0x3d:
    *(undefined2 *)(param_1 + 0x10) = 6;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f56c94(param_1);
    break;
  case 10:
  case 0x1a:
  case 0x2a:
  case 0x3a:
    *(undefined4 *)(param_1 + 0xe) = 0x80000;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x23c) = 1;
    FUN_03f55a10(param_1,bVar1,0);
    break;
  case 0xb:
  case 0x3b:
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f56f5c(param_1);
    break;
  case 0xc:
  case 0x2c:
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f54bbc(param_1);
    break;
  case 0xe:
  case 0x1e:
  case 0x2e:
  case 0x3e:
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(undefined4 *)(param_1 + 0x22a) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x23c) = 2;
    FUN_03f56480(param_1);
    break;
  case 0x10:
  case 0x30:
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(undefined4 *)(param_1 + 0x22a) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x23c) = 2;
    FUN_03f54700(param_1);
    break;
  case 0x13:
    uVar10 = *(undefined2 *)(param_1 + 0x254);
    uVar6 = 0x13;
    goto LAB_03f545bc;
  case 0x14:
  case 0x34:
    *(undefined2 *)(param_1 + 0x10) = 6;
    *(undefined4 *)(param_1 + 0x23c) = 6;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x25a);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined2 *)(param_1 + 0x234) = *(undefined2 *)(param_1 + 0x25e);
    FUN_03f57040(param_1);
    break;
  case 0x17:
  case 0x1f:
  case 0x37:
  case 0x3f:
    *(undefined2 *)(param_1 + 0x10) = 0x800;
    return;
  case 0x18:
    uVar11 = *(undefined4 *)(param_1 + 0x254);
    *(undefined2 *)(param_1 + 0x10) = 2;
    uVar8 = *(undefined4 *)(param_1 + 600);
    uVar6 = 0x18;
    goto LAB_03f54664;
  case 0x1b:
    uVar10 = *(undefined2 *)(param_1 + 0x254);
    uVar6 = 0x1b;
    goto LAB_03f54620;
  case 0x1c:
  case 0x3c:
    *(undefined2 *)(param_1 + 0x10) = 6;
    *(undefined4 *)(param_1 + 0x23c) = 6;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x25a);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined2 *)(param_1 + 0x234) = *(undefined2 *)(param_1 + 0x25e);
    FUN_03f54cd4(param_1);
    break;
  case 0x20:
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    sVar2 = *(short *)(param_1 + 0x254);
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined4 *)(param_1 + 0x250) = 1;
    *(short *)(param_1 + 0x22a) = sVar2;
    *(short *)(param_1 + 0x18) = sVar2;
    uVar3 = (int)(short)((ushort)*(byte *)(param_1 + 599) << 8) | (uint)*(byte *)(param_1 + 0x256);
    uVar7 = (int)sVar2 * uVar3;
    uVar10 = (undefined2)uVar3;
    *(undefined2 *)(param_1 + 0x22c) = uVar10;
    *(undefined2 *)(param_1 + 0x1a) = uVar10;
    uVar5 = (ushort)(uVar7 >> 0xf);
    *(short *)(param_1 + 0x1e) = (short)uVar7 * 2;
    uVar4 = uVar5 | 1;
    *(ushort *)(param_1 + 0x1c) = uVar5;
    *(ushort *)(param_1 + 0x14) = uVar4;
    *(ushort *)(param_1 + 0x240) = uVar4;
    goto LAB_03f545a4;
  case 0x23:
    uVar10 = *(undefined2 *)(param_1 + 0x254);
    uVar6 = 0x23;
LAB_03f545bc:
    *(undefined2 *)(param_1 + 0x10) = 6;
    *(undefined2 *)(param_1 + 0x22a) = uVar10;
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f56dfc(param_1,uVar6);
    break;
  case 0x27:
  case 0x2f:
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(undefined2 *)(param_1 + 0x240) = 0x100;
    *(undefined4 *)(param_1 + 0x250) = 1;
LAB_03f545a4:
    uVar7 = 2;
    goto LAB_03f54688;
  case 0x28:
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f549f0(param_1);
    break;
  case 0x2b:
    uVar10 = *(undefined2 *)(param_1 + 0x254);
    uVar6 = 0x2b;
LAB_03f54620:
    *(undefined2 *)(param_1 + 0x10) = 2;
    *(undefined2 *)(param_1 + 0x22a) = uVar10;
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x256);
    *(undefined4 *)(param_1 + 0x23c) = 3;
    FUN_03f56f5c(param_1,uVar6);
    break;
  case 0x38:
    uVar11 = *(undefined4 *)(param_1 + 0x254);
    *(undefined2 *)(param_1 + 0x10) = 2;
    uVar8 = *(undefined4 *)(param_1 + 600);
    uVar6 = 0x38;
LAB_03f54664:
    *(undefined4 *)(param_1 + 0x22a) = uVar11;
    *(undefined4 *)(param_1 + 0x22e) = uVar8;
    *(undefined4 *)(param_1 + 0x23c) = 4;
    FUN_03f54944(param_1,uVar6);
    break;
  default:
    return;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x10);
LAB_03f54688:
  if ((uVar7 != 0) && (iVar9 = *(int *)(param_1 + 0x250), 0 < iVar9)) {
    uVar12 = 0;
    do {
      if (0 < iVar9) {
        if (uVar12 < 0x10) {
          *(undefined2 *)(param_1 + 0x264 + uVar12) = *(undefined2 *)(param_1 + 0x240 + uVar12);
          iVar9 = *(int *)(param_1 + 0x250);
        }
        iVar9 = iVar9 + -1;
        *(int *)(param_1 + 0x250) = iVar9;
      }
      uVar12 = uVar12 + 2;
    } while (uVar12 < uVar7);
  }
  return;
}

