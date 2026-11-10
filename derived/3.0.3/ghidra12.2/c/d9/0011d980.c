
bool FUN_0011d980(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar7 = *(long *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x40) >> 0x10;
  lVar1 = lVar7 + ((ulong)*(byte *)(lVar7 + 0x20) << 0x18 | (ulong)*(byte *)(lVar7 + 0x21) << 0x10 |
                   (ulong)*(byte *)(lVar7 + 0x22) << 8 | (ulong)*(byte *)(lVar7 + 0x23));
  uVar4 = (ulong)CONCAT11(*(undefined1 *)(lVar7 + 0x2e),*(undefined1 *)(lVar7 + 0x2f));
  if ((*(byte *)(lVar1 + uVar4 * uVar6) >> 6 & 1) != 0) {
    uVar3 = (uint)CONCAT11(*(undefined1 *)(lVar7 + 0x2a),*(undefined1 *)(lVar7 + 0x2b));
    if (uVar3 != 0) {
      uVar10 = 0;
      uVar9 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x10);
      do {
        uVar2 = uVar3;
        if ((uVar9 & 0xffff) != 0) {
          uVar2 = (uint)uVar9;
        }
        uVar9 = (ulong)(uVar2 - 1);
        if ((*(byte *)(lVar1 + uVar4 * (uVar9 & 0xffff)) & 3) != 0) goto LAB_0011da10;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffff) < uVar3);
    }
    uVar9 = 0;
LAB_0011da10:
    pbVar8 = (byte *)(lVar1 + uVar4 * (uVar9 & 0xffff));
    if ((*pbVar8 & 3) != 0) {
      uVar2 = (uint)uVar9 & 0xffff;
      uVar10 = (pbVar8[2] & 0x7f) + (pbVar8[4] & 0x7f) + 4;
      uVar5 = uVar10 / 0x1f + (uVar10 - uVar10 / 0x1f >> 1) >> 4;
      if (uVar10 + uVar5 * -0x1f != 0) {
        uVar5 = uVar5 + 1;
      }
      if (uVar2 <= uVar6) {
        uVar3 = 0;
      }
      return (uVar6 - uVar2) + uVar3 == uVar5;
    }
  }
  return false;
}

