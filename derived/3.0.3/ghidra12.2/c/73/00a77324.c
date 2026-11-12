
undefined8 FUN_00a77324(byte *param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  
  if (DAT_04da4ab8 != 0) {
    uVar7 = FUN_00a738a0(param_1,0);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    uVar6 = FUN_00a70070(param_1,0);
    lVar5 = DAT_04da4ab8;
    if (uVar6 != 0xffffffff) {
      if ((int)uVar6 < 0) {
        return 0;
      }
      if (DAT_04c47dc0 < (int)uVar6) {
        return 0;
      }
      piVar2 = (int *)(PTR_DAT_04bb6258 + (ulong)uVar6 * 0x10);
      if (999 < uVar6) {
        piVar2 = (int *)PTR_DAT_04bb6258;
      }
      if (((*piVar2 != 0) && (lVar9 = *(long *)(piVar2 + 2), lVar9 != -1)) &&
         (uVar6 = FUN_00a76844(DAT_04da4ab8,0x13), uVar6 != 0xffffffff)) {
        bVar8 = *param_1;
        lVar1 = lVar5 + (ulong)uVar6 * 0x20;
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        iVar3 = *(int *)(lVar5 + 0x414);
        *(byte *)(lVar1 + 0x10) = bVar8;
        *(undefined1 *)(lVar1 + 0x28) = 6;
        iVar4 = *(int *)(lVar5 + 0x410);
        *(long *)(lVar1 + 0x18) = lVar9;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined4 *)(lVar1 + 0x2c) = 0;
        if (iVar4 < iVar3) {
          *(byte **)(*(long *)(lVar5 + 0x418) + (long)iVar4 * 8) = (byte *)(lVar1 + 0x10);
          *(int *)(lVar5 + 0x410) = *(int *)(lVar5 + 0x410) + 1;
        }
        return 1;
      }
    }
  }
  return 0;
}

