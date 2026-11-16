
ulong FUN_02678be0(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  short *psVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint local_64;
  
  puVar2 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar6 == 0)) goto LAB_02678d9c;
  lVar15 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar15 = *(long *)(*(long *)puVar2 + 0x20);
    plVar10 = *(long **)(lVar15 + 0x98);
    if (plVar10 != (long *)0x0) goto LAB_02678c54;
LAB_02678c70:
    local_64 = 0;
  }
  else {
    plVar10 = *(long **)(lVar6 + 0x19548);
    if (plVar10 == (long *)0x0) goto LAB_02678c70;
LAB_02678c54:
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02678c70;
    local_64 = (*(code *)**(undefined8 **)*plVar10)();
  }
  iVar4 = FUN_027f9730(lVar6);
  puVar3 = PTR_DAT_04bb43c0;
  puVar2 = PTR_DAT_04bb37e0;
  if (0 < iVar4) {
    uVar12 = 0;
    lVar16 = 0xb8;
    do {
      lVar13 = *(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78);
      uVar5 = *(uint *)(lVar13 + 0x158);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      lVar1 = lVar16;
      if ((uint)uVar12 < uVar5) {
LAB_02678cec:
        psVar14 = (short *)(lVar13 + lVar1);
        psVar7 = psVar14;
        if (*psVar14 != -2) {
          lVar13 = *(long *)puVar3;
          uVar5 = FUN_0277d6c4(psVar14);
          if (*(long *)puVar3 == 0) goto LAB_02678d50;
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          psVar7 = (short *)puVar2;
          if (uVar5 < *(uint *)(lVar13 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
              psVar7 = psVar14;
            }
          }
        }
      }
      else {
        uVar11 = (uint)(uVar12 + -uVar5);
        if ((int)uVar11 < 0) {
LAB_02678d50:
          psVar7 = (short *)puVar2;
        }
        else {
          uVar17 = *(uint *)(lVar13 + 0xa0);
          if (0x13 < uVar17) {
            uVar17 = 0x14;
          }
          psVar7 = (short *)puVar2;
          if (uVar11 < uVar17) {
            lVar1 = (uVar12 + -uVar5 & 0xffffffff) * 8;
            goto LAB_02678cec;
          }
        }
      }
      uVar8 = FUN_0277d7b4(psVar7,param_2);
      if ((uVar8 & 1) != 0) {
        if ((((local_64 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
        goto LAB_02678da8;
      }
      uVar12 = uVar12 + 1;
      iVar4 = FUN_027f9730(lVar6);
      lVar16 = lVar16 + 8;
    } while ((long)uVar12 < (long)iVar4);
  }
  if ((((local_64 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_02678d9c:
  uVar12 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_02678da8:
  return uVar12 & 0xffffffff;
}

