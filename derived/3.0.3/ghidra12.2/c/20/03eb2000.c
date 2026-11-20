
/* WARNING: Removing unreachable block (ram,0x03eb2448) */
/* WARNING: Removing unreachable block (ram,0x03eb2524) */
/* WARNING: Removing unreachable block (ram,0x03eb2308) */
/* WARNING: Removing unreachable block (ram,0x03eb22dc) */
/* WARNING: Removing unreachable block (ram,0x03eb23d8) */
/* WARNING: Removing unreachable block (ram,0x03eb2570) */
/* WARNING: Removing unreachable block (ram,0x03eb2470) */

void FUN_03eb2000(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  char cVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  if (*(char *)(param_1 + 0x100) == '\0') {
    fVar15 = *(float *)(param_1 + 0x124) + -0.1;
    *(float *)(param_1 + 0x124) = fVar15;
    if ((0.0 <= fVar15) ||
       (*(undefined4 *)(param_1 + 0x124) = 0, *(char *)(param_1 + 0x120) == '\0')) {
      fVar16 = *(float *)(param_1 + 0x128) + -0.1;
      fVar15 = 0.0;
      if (0.0 <= fVar16) {
        fVar15 = fVar16;
      }
      *(float *)(param_1 + 0x128) = fVar15;
      return;
    }
    (**(code **)(**(long **)(param_1 + 0x118) + 0x28))();
    cVar10 = *(char *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  else {
    fVar15 = *(float *)(param_1 + 0x124) + 0.1;
    *(float *)(param_1 + 0x124) = fVar15;
    if (1.0 < fVar15) {
      *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
    }
    cVar10 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x120);
  if ((cVar1 == '\0') || (cVar10 == '\0')) {
    fVar16 = *(float *)(param_1 + 0x128) + -0.1;
    fVar15 = 0.0;
    if (0.0 <= fVar16) {
      fVar15 = fVar16;
    }
    *(float *)(param_1 + 0x128) = fVar15;
    if (cVar10 == '\0') {
      return;
    }
  }
  else {
    fVar15 = *(float *)(param_1 + 0x128) + 0.1;
    *(float *)(param_1 + 0x128) = fVar15;
    if (1.0 < fVar15) {
      *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
    }
  }
  puVar5 = PTR_DAT_04bd0ef8;
  puVar4 = PTR_DAT_04bd0c58;
  if (*(long *)(param_1 + 0x118) == 0) {
    return;
  }
  plVar12 = *(long **)(param_1 + 0x108);
  if (plVar12 != (long *)0x0) {
    iVar13 = 0;
    uVar14 = 0;
    fVar15 = *(float *)(param_1 + 0x130);
    do {
      while( true ) {
        iVar2 = iVar13 + (uVar14 / 0x19) * 0x19;
        bVar6 = iVar13 == 0;
        iVar13 = iVar13 + -1;
        fVar16 = *(float *)(param_1 + 0x130);
        if (bVar6 || iVar2 != 0) {
          fVar16 = fVar15;
        }
        if ((char)plVar12[1] != '\0') break;
        plVar12 = (long *)plVar12[7];
        uVar14 = uVar14 + 1;
        fVar15 = fVar16;
        if (plVar12 == (long *)0x0) goto LAB_03eb21d4;
      }
      plVar8 = *(long **)(param_1 + 0x118);
      cVar10 = *(char *)(param_1 + 0x120);
      *(float *)(plVar12 + 0xb) = fVar16;
      (**(code **)(*plVar12 + 0x10))(plVar12,plVar8 == plVar12 && cVar10 != '\0');
      plVar12 = (long *)plVar12[7];
      plVar8 = *(long **)puVar4;
      if (*(long **)puVar5 != (long *)0x0) {
        plVar8 = *(long **)puVar5;
      }
      fVar15 = (float)(**(code **)(*plVar8 + 0x10))();
      fVar15 = fVar16 - (fVar15 + 6.0);
      uVar14 = uVar14 + 1;
    } while (plVar12 != (long *)0x0);
LAB_03eb21d4:
    cVar1 = *(char *)(param_1 + 0x120);
  }
  puVar5 = PTR_DAT_04bb26f0;
  puVar4 = PTR_DAT_04bb2648;
  if (cVar1 != '\0') {
    uVar7 = (**(code **)(**(long **)(param_1 + 0x118) + 0x18))();
    if ((uVar7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x120) = 0;
    }
    goto LAB_03eb249c;
  }
  if ((*(long *)PTR_DAT_04bb26f0 != 0) && (*(int *)(*(long *)PTR_DAT_04bb26f0 + 0x32c) == 1)) {
    uVar14 = *(uint *)(*(long *)PTR_DAT_04bb26e8 + 0x460);
    if ((0 < (int)uVar14) && (piVar11 = *(int **)(*(long *)PTR_DAT_04bb26e8 + 0x468), *piVar11 != 1)
       ) {
      lVar9 = 0;
      do {
        if ((ulong)uVar14 - 1 == lVar9) break;
        lVar3 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (piVar11[lVar3] != 1);
    }
  }
  if (((*(byte *)(**(long **)(*(long *)PTR_DAT_04bb2648 + 0x378) + 0x96) & 0x11) == 0) &&
     ((*(byte *)(**(long **)(*(long *)PTR_DAT_04bb2648 + 0x338) + 0x96) & 0x11) == 0)) {
    lVar9 = FUN_03eb17a0();
    if (((*(byte *)(lVar9 + 0x96) & 0x22) != 0) ||
       ((*(byte *)(**(long **)(*(long *)puVar4 + 0x338) + 0x96) & 0x22) != 0)) {
      lVar9 = *(long *)(param_1 + 0x118);
      do {
        plVar12 = (long *)(lVar9 + 0x38);
        lVar9 = *(long *)(param_1 + 0x108);
        if (*plVar12 != 0) {
          lVar9 = *plVar12;
        }
      } while (*(char *)(lVar9 + 8) == '\0');
      goto LAB_03eb2338;
    }
    lVar9 = FUN_03eb17a0();
    if (((*(byte *)(lVar9 + 0x96) & 0x44) == 0) &&
       ((*(byte *)(**(long **)(*(long *)puVar4 + 0x338) + 0x96) & 0x44) == 0)) {
      lVar9 = FUN_03eb17a0();
      if (((*(byte *)(lVar9 + 0x96) & 0x88) != 0) ||
         ((*(byte *)(**(long **)(*(long *)puVar4 + 0x338) + 0x96) & 0x88) != 0)) {
        FUN_03eb2710(param_1);
      }
    }
    else {
      FUN_03eb25a0(param_1);
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0x118);
    do {
      plVar12 = (long *)(lVar9 + 0x40);
      lVar9 = *(long *)(param_1 + 0x110);
      if (*plVar12 != 0) {
        lVar9 = *plVar12;
      }
    } while (*(char *)(lVar9 + 8) == '\0');
LAB_03eb2338:
    *(long *)(param_1 + 0x118) = lVar9;
  }
  if ((*(long *)puVar5 != 0) && (*(int *)(*(long *)puVar5 + 0x32c) == 1)) {
    uVar14 = *(uint *)(*(long *)PTR_DAT_04bb26e8 + 0x460);
    if ((0 < (int)uVar14) && (piVar11 = *(int **)(*(long *)PTR_DAT_04bb26e8 + 0x468), *piVar11 != 1)
       ) {
      lVar9 = 0;
      do {
        if ((ulong)uVar14 - 1 == lVar9) break;
        lVar3 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (piVar11[lVar3] != 1);
    }
  }
  if (((*(byte *)(**(long **)(*(long *)puVar4 + 0x378) + 0x8c) & 1) != 0) ||
     ((*(byte *)(**(long **)(*(long *)puVar4 + 0x338) + 0x8c) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x120) = 1;
    (**(code **)(**(long **)(param_1 + 0x118) + 0x20))();
  }
LAB_03eb249c:
  lVar9 = *(long *)(param_1 + 0x118);
  if ((lVar9 != 0) && (*(char *)(lVar9 + 8) == '\0')) {
    do {
      plVar12 = (long *)(lVar9 + 0x40);
      lVar9 = *(long *)(param_1 + 0x110);
      if (*plVar12 != 0) {
        lVar9 = *plVar12;
      }
    } while (*(char *)(lVar9 + 8) == '\0');
    *(long *)(param_1 + 0x118) = lVar9;
  }
  *(undefined4 *)(*(long *)PTR_DAT_04bb2700 + 0x32c) = 2;
  return;
}

