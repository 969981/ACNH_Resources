
uint FUN_03257fd0(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  char *pcVar12;
  uint *puVar13;
  int *piVar14;
  
  puVar4 = PTR_DAT_04bb6448;
  puVar3 = PTR_DAT_04bb6440;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar7 + 0x1d40) < 1) {
    if (*(long *)(lVar7 + 0x1c30) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x1c30) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((param_1 < *(uint *)(lVar7 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar7 + 0x1c50) + (long)(int)param_1) == '\0')) {
      return 0;
    }
    if (*puVar6 <= param_1) {
      return 0;
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * param_1 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar7 + 0x1d40) <= param_1) {
      return 0;
    }
    if (*(uint *)(lVar7 + 0x1d30) <= param_1) {
      param_1 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x1d38) + (ulong)param_1 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 != 0) {
    cVar11 = *PTR_DAT_04bb6440;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 0x48);
        if (-1 < (int)uVar2) {
          pcVar12 = (char *)((ulong)uVar2 + (long)puVar6);
          goto LAB_032580e8;
        }
        if (uVar2 != 0xffffffff) break;
      }
      puVar13 = (uint *)(ulong)*puVar6;
      pcVar12 = (char *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar13)) goto LAB_032580e8;
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + (lVar7 - (long)puVar13);
      if (lVar7 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
      pcVar12 = (char *)0x0;
      if (uVar9 == 0) goto LAB_032580e8;
      piVar14 = (int *)(lVar7 + 4);
      while (piVar14[-1] != 0x45f320f2) {
        piVar14 = piVar14 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          pcVar12 = (char *)0x0;
          goto LAB_032580e8;
        }
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x48) = iVar8;
    } while (*puVar6 != 0);
  }
  pcVar12 = (char *)0x0;
LAB_032580e8:
  pcVar1 = *(char **)PTR_PTR_04bb6438;
  if (pcVar12 != (char *)0x0) {
    pcVar1 = pcVar12;
  }
  if (pcVar1 != "PutFurnitureOutside") {
    uVar9 = 0;
    bVar5 = true;
    do {
      if (pcVar1[uVar9] != "PutFurnitureOutside"[uVar9]) break;
      if (pcVar1[uVar9] == '\0') {
        if ((bool)(pcVar1 == "BuildFence" | bVar5)) {
          return 1;
        }
        goto LAB_03258158;
      }
      bVar5 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
    if (pcVar1 != "BuildFence") {
LAB_03258158:
      if (*pcVar1 != 'B') {
        return 0;
      }
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        uVar9 = uVar10;
        if (uVar10 == 0x80000) goto LAB_0325823c;
        if (pcVar1[uVar10 + 1] != "BuildFence"[uVar10 + 1]) {
          uVar9 = 0;
          goto LAB_0325823c;
        }
        uVar9 = uVar10 + 1;
      } while (pcVar1[uVar10 + 1] != '\0');
      uVar9 = 1;
LAB_0325823c:
      return (uint)(uVar10 < 0x80000) & (uint)uVar9;
    }
  }
  return 1;
}

