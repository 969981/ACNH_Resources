
void FUN_003a15c0(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  long lVar9;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((ulong)uVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar4 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x28) + uVar4 * 0x30;
      uVar2 = *(ushort *)(lVar6 + 0x22);
      if (uVar2 != 0) {
        lVar6 = *(long *)(lVar6 + 0x18);
        if (7 < uVar2) {
          uVar8 = uVar2 & 0xfff8;
          do {
            *(undefined1 *)(lVar6 + 9) = 0xff;
            uVar8 = uVar8 - 8;
            *(undefined1 *)(lVar6 + 0x19) = 0xff;
            *(undefined1 *)(lVar6 + 0x29) = 0xff;
            *(undefined1 *)(lVar6 + 0x39) = 0xff;
            *(undefined1 *)(lVar6 + 0x49) = 0xff;
            *(undefined1 *)(lVar6 + 0x59) = 0xff;
            *(undefined1 *)(lVar6 + 0x69) = 0xff;
            *(undefined1 *)(lVar6 + 0x79) = 0xff;
            lVar6 = lVar6 + 0x80;
          } while (uVar8 != 0);
        }
        uVar8 = uVar2 & 7;
        if ((uVar2 & 7) != 0) {
          puVar7 = (undefined1 *)(lVar6 + 9);
          do {
            uVar8 = uVar8 - 1;
            *puVar7 = 0xff;
            puVar7 = puVar7 + 0x10;
          } while (uVar8 != 0);
        }
      }
      *(undefined2 *)(lVar5 + uVar4 * 2) = 0xffff;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x4a);
    if ((ulong)uVar2 != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0x28) + uVar4 * 0x30;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x20);
        if (uVar3 != 0) {
          lVar6 = 0;
          lVar9 = uVar3 * 0x30;
          do {
            while ((*(ushort *)(*(long *)(lVar5 + 8) + lVar6 + 0x10) >> 6 & 1) == 0) {
              FUN_0039ddf4();
              lVar6 = lVar6 + 0x30;
              if (lVar9 == lVar6) goto LAB_003a16a0;
            }
            FUN_0039de78();
            lVar6 = lVar6 + 0x30;
          } while (lVar9 != lVar6);
        }
LAB_003a16a0:
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
      uVar1 = *(ushort *)(param_1 + 4);
    }
    *(ushort *)(param_1 + 4) = uVar1 ^ 1;
  }
  return;
}

