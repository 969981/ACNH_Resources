
undefined8 FUN_01d54964(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = PTR_DAT_04bb8930;
  lVar7 = *DAT_0537d558;
  if (*(char *)(lVar7 + 0x55e) == '\0') {
    uVar2 = DAT_0536c720;
    if (*(uint *)(DAT_05357d70 + 0x20) <= DAT_0536c720) {
      uVar2 = 0;
    }
    if ((*(char *)(*(long *)(DAT_05357d70 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2c) != '\0') &&
       (uVar2 = *(uint *)(lVar7 + 0x508), uVar2 < 5 && (1 << (ulong)(uVar2 & 0x1f) & 0x15U) != 0)) {
      if (2 < uVar2) {
        bVar3 = *(byte *)(lVar7 + 0x477);
        lVar8 = *(long *)PTR_DAT_04bb8930;
        uVar2 = 0;
        if (*(uint *)(lVar8 + 0x18) != 0xffffffff) {
          uVar2 = *(uint *)(lVar8 + 0x18);
        }
        lVar9 = *(long *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 8) <= uVar2) {
          uVar2 = 0;
        }
        lVar8 = lVar9 + (long)(int)uVar2 * 0x58;
        bVar4 = *(byte *)(lVar8 + 0x10);
        bVar1 = bVar4 & 0xf7;
        bVar5 = *(char *)(lVar7 + 0x55f) << 3;
        *(byte *)(lVar8 + 0x10) = bVar1 | bVar5;
        if (bVar4 != (bVar1 | bVar5)) {
          *(undefined4 *)(lVar9 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1e;
        }
        lVar7 = *(long *)puVar6;
        lVar8 = *(long *)(lVar7 + 0x10);
        uVar2 = 0;
        if (*(uint *)(lVar7 + 0x18) != 0xffffffff) {
          uVar2 = *(uint *)(lVar7 + 0x18);
        }
        if (*(uint *)(lVar7 + 8) <= uVar2) {
          uVar2 = 0;
        }
        lVar7 = lVar8 + (long)(int)uVar2 * 0x58;
        bVar5 = *(byte *)(lVar7 + 0x10);
        bVar3 = bVar5 & 0xef | (7 < bVar3) << 4;
        *(byte *)(lVar7 + 0x10) = bVar3;
        if (bVar5 != bVar3) {
          *(undefined4 *)(lVar8 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1e;
        }
      }
      return 1;
    }
  }
  return 0;
}

