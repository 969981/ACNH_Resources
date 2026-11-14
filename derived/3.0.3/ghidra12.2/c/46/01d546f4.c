
undefined8 FUN_01d546f4(long param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = PTR_DAT_04bb27d0;
  if (*(char *)(**(long **)PTR_DAT_04bb27d0 + 0x55e) == '\0') {
    uVar2 = DAT_0536c720;
    if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
      uVar2 = 0;
    }
    if ((*(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2c) !=
         '\0') && ((*(uint *)(**(long **)PTR_DAT_04bb27d0 + 0x508) | 2) == 2)) {
      FUN_033fb600();
      puVar7 = PTR_DAT_04bb8930;
      if ((*(int *)(param_1 + 0x3e4) == 1) &&
         (lVar8 = **(long **)puVar6, 2 < *(int *)(lVar8 + 0x508))) {
        bVar3 = *(byte *)(lVar8 + 0x477);
        lVar9 = *(long *)PTR_DAT_04bb8930;
        uVar2 = 0;
        if (*(uint *)(lVar9 + 0x18) != 0xffffffff) {
          uVar2 = *(uint *)(lVar9 + 0x18);
        }
        lVar10 = *(long *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 8) <= uVar2) {
          uVar2 = 0;
        }
        lVar9 = lVar10 + (long)(int)uVar2 * 0x58;
        bVar4 = *(byte *)(lVar9 + 0x10);
        bVar1 = bVar4 & 0xf7;
        bVar5 = *(char *)(lVar8 + 0x55f) << 3;
        *(byte *)(lVar9 + 0x10) = bVar1 | bVar5;
        if (bVar4 != (bVar1 | bVar5)) {
          *(undefined4 *)(lVar10 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1e;
        }
        lVar8 = *(long *)puVar7;
        lVar9 = *(long *)(lVar8 + 0x10);
        uVar2 = 0;
        if (*(uint *)(lVar8 + 0x18) != 0xffffffff) {
          uVar2 = *(uint *)(lVar8 + 0x18);
        }
        if (*(uint *)(lVar8 + 8) <= uVar2) {
          uVar2 = 0;
        }
        lVar8 = lVar9 + (long)(int)uVar2 * 0x58;
        bVar5 = *(byte *)(lVar8 + 0x10);
        bVar3 = bVar5 & 0xef | (7 < bVar3) << 4;
        *(byte *)(lVar8 + 0x10) = bVar3;
        if (bVar5 != bVar3) {
          *(undefined4 *)(lVar9 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1e;
        }
      }
      return 1;
    }
  }
  return 0;
}

