
ushort FUN_0375f1a4(void)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) || ((*(byte *)(lVar5 + 0x1a71) >> 2 & 1) != 0))
     && ((*(long *)PTR_DAT_04bc1530 != 0 &&
         (lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar9 != 0)))) {
    if ((*(long **)(lVar9 + 0x1790) != (long *)0x0) &&
       (puVar3 = (undefined8 *)**(long **)(lVar9 + 0x1790), puVar3 != (undefined8 *)0x0)) {
      uVar4 = (**(code **)*puVar3)();
      uVar8 = (uint)*(ushort *)(*(long *)(lVar9 + 0x1778) + *(long *)(lVar9 + 6000) + 2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x1790) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar9 + 0x1790) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
      goto LAB_0375f258;
    }
    lVar5 = *(long *)(lVar9 + 0x1778) + *(long *)(lVar9 + 6000);
  }
  uVar8 = (uint)*(ushort *)(lVar5 + 2);
LAB_0375f258:
  if (((uVar8 - DAT_05abc378 < DAT_05abc358) &&
      (puVar6 = *(uint **)(DAT_05abc360 + (long)(int)(uVar8 - DAT_05abc378) * 8),
      puVar6 != (uint *)0x0)) && (uVar8 = *puVar6, uVar8 != 0 && puVar6 != (uint *)(ulong)uVar8)) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar8);
    if (((*puVar7 != 0) && (uVar8 = puVar7[1], uVar8 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar5 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar5 != 0) {
        uVar1 = 0;
        if ((ulong)uVar8 != 0) {
          uVar1 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar8);
        }
        if (*puVar7 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < *(uint *)PTR_DAT_04bcad08) &&
           (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bcad08 + 8) + (long)(int)uVar1 * 2), uVar2 < 3))
        {
          return uVar2;
        }
      }
    }
  }
  return 0;
}

