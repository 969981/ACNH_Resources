
undefined4 FUN_02ad11a0(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  char cVar12;
  ushort uVar13;
  uint *puVar14;
  int *piVar15;
  
  puVar5 = PTR_DAT_04bb5bd0;
  puVar4 = PTR_DAT_04bb5bc8;
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 == 0) {
LAB_02ad129c:
      uVar13 = 0;
    }
    else {
      cVar12 = *PTR_DAT_04bb5bc8;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0x20);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar6) == (ushort *)0x0) goto LAB_02ad129c;
            uVar13 = *(ushort *)((ulong)uVar2 + (long)puVar6);
            goto LAB_02ad12a0;
          }
          if (uVar2 != 0xffffffff) goto LAB_02ad129c;
        }
        puVar14 = (uint *)(ulong)*puVar6;
        uVar13 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar14)) goto LAB_02ad12a0;
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + (lVar7 - (long)puVar14);
        if (lVar7 == 0) goto LAB_02ad129c;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
        *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
        uVar13 = 0;
        if (uVar10 == 0) goto LAB_02ad12a0;
        piVar15 = (int *)(lVar7 + 4);
        while (piVar15[-1] != 0xc1577d) {
          piVar15 = piVar15 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar13 = 0;
            goto LAB_02ad12a0;
          }
        }
        iVar11 = 0;
        if (*piVar15 != -1) {
          iVar11 = *piVar15;
        }
        *(int *)(puVar5 + 0x20) = iVar11;
      } while (*puVar6 != 0);
      uVar13 = 0;
    }
LAB_02ad12a0:
    uVar2 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x1df8);
    if (uVar2 != 0) {
      lVar7 = *(long *)(*(long *)PTR_DAT_04bb5008 + 0x1e00);
      if ((int)uVar2 < 2) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        iVar11 = uVar2 - 1;
        do {
          uVar8 = (uint)uVar10;
          iVar1 = iVar11 + uVar8;
          if (iVar1 < 0 != SCARRY4(iVar11,uVar8)) {
            iVar1 = iVar1 + 1;
          }
          uVar9 = iVar1 >> 1;
          uVar10 = (ulong)uVar9;
          uVar3 = *(ushort *)(lVar7 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3));
          if (uVar3 == uVar13) goto joined_r0x02ad1338;
          if (uVar3 < uVar13) {
            uVar8 = uVar9 + 1;
          }
          else {
            iVar11 = uVar9 - 1;
          }
          uVar10 = (ulong)uVar8;
        } while ((int)uVar8 < iVar11);
      }
      if (*(ushort *)(lVar7 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) == uVar13) {
        uVar9 = (uint)uVar10;
joined_r0x02ad1338:
        if (-1 < (int)uVar9) {
          uVar8 = (uint)uVar10;
          if (uVar2 <= uVar8) {
            uVar8 = 0;
          }
          return *(undefined4 *)(lVar7 + (ulong)uVar8 * 8 + 4);
        }
      }
    }
  }
  return 0;
}

