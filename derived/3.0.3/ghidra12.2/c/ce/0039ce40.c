
void FUN_0039ce40(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)(param_1 + 0x62);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((ulong)uVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar4 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x28) + uVar4 * 0x40;
      uVar2 = *(ushort *)(lVar6 + 0x32);
      if (uVar2 != 0) {
        lVar8 = *(long *)(lVar6 + 8);
        if (7 < uVar2) {
          uVar10 = uVar2 & 0xfff8;
          do {
            *(undefined2 *)(lVar8 + 0x12) = 0xffff;
            uVar10 = uVar10 - 8;
            *(undefined2 *)(lVar8 + 0x2a) = 0xffff;
            *(undefined2 *)(lVar8 + 0x42) = 0xffff;
            *(undefined2 *)(lVar8 + 0x5a) = 0xffff;
            *(undefined2 *)(lVar8 + 0x72) = 0xffff;
            *(undefined2 *)(lVar8 + 0x8a) = 0xffff;
            *(undefined2 *)(lVar8 + 0xa2) = 0xffff;
            *(undefined2 *)(lVar8 + 0xba) = 0xffff;
            lVar8 = lVar8 + 0xc0;
          } while (uVar10 != 0);
        }
        uVar10 = uVar2 & 7;
        if ((uVar2 & 7) != 0) {
          puVar9 = (undefined2 *)(lVar8 + 0x12);
          do {
            uVar10 = uVar10 - 1;
            *puVar9 = 0xffff;
            puVar9 = puVar9 + 0xc;
          } while (uVar10 != 0);
        }
      }
      uVar2 = *(ushort *)(lVar6 + 0x34);
      if (uVar2 != 0) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (7 < uVar2) {
          uVar10 = uVar2 & 0xfff8;
          do {
            *(undefined1 *)(lVar6 + 0xc) = 0xff;
            uVar10 = uVar10 - 8;
            *(undefined1 *)(lVar6 + 0x1c) = 0xff;
            *(undefined1 *)(lVar6 + 0x2c) = 0xff;
            *(undefined1 *)(lVar6 + 0x3c) = 0xff;
            *(undefined1 *)(lVar6 + 0x4c) = 0xff;
            *(undefined1 *)(lVar6 + 0x5c) = 0xff;
            *(undefined1 *)(lVar6 + 0x6c) = 0xff;
            *(undefined1 *)(lVar6 + 0x7c) = 0xff;
            lVar6 = lVar6 + 0x80;
          } while (uVar10 != 0);
        }
        uVar10 = uVar2 & 7;
        if ((uVar2 & 7) != 0) {
          puVar7 = (undefined1 *)(lVar6 + 0xc);
          do {
            uVar10 = uVar10 - 1;
            *puVar7 = 0xff;
            puVar7 = puVar7 + 0x10;
          } while (uVar10 != 0);
        }
      }
      *(undefined2 *)(lVar5 + uVar4 * 2) = 0xffff;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x62);
    if ((ulong)uVar2 != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0x28) + uVar4 * 0x40;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x38);
        if (uVar3 != 0) {
          lVar6 = 0;
          lVar8 = uVar3 * 0x30;
          do {
            while ((*(ushort *)(*(long *)(lVar5 + 0x18) + lVar6 + 0x10) >> 6 & 1) == 0) {
              FUN_0039ddf4();
              lVar6 = lVar6 + 0x30;
              if (lVar8 == lVar6) goto LAB_0039cf80;
            }
            FUN_0039de78();
            lVar6 = lVar6 + 0x30;
          } while (lVar8 != lVar6);
        }
LAB_0039cf80:
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
      uVar1 = *(ushort *)(param_1 + 4);
    }
    *(ushort *)(param_1 + 4) = uVar1 ^ 1;
  }
  return;
}

