
/* WARNING: Removing unreachable block (ram,0x03bdfb6c) */

int FUN_03bdf848(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar10 = *(long *)(param_1 + 0x68);
  if ((lVar10 == 0) || (*(int *)(param_1 + 0x70) != *(int *)(lVar10 + 0x10))) goto LAB_03bdf928;
  lVar8 = *(long *)(param_1 + 0x18);
  uVar2 = *(ushort *)(lVar8 + 0x98);
  plVar6 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                               0x18))();
  uVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,*(undefined8 *)(param_1 + 0x28));
  puVar3 = PTR_DAT_04bc3ee8;
  if (((uVar4 >> 2 & 1) != 0) || (*(char *)(lVar10 + 0x1a4) == '\0')) goto LAB_03bdf928;
  lVar7 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar7 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20);
  }
  if ((*(int *)(lVar7 + 0x10) < 1) || (**(long **)(lVar7 + 0x18) == 0)) goto LAB_03bdf928;
  if ((uVar2 >> 9 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 8);
      if (*(char *)(*(long *)(param_1 + 0x58) + 0x10) == '\0') goto LAB_03bdfae8;
LAB_03bdf8fc:
      uVar12 = (undefined4)*(undefined8 *)(lVar8 + 0x30);
      uVar13 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20);
      local_58 = (undefined4)*(undefined8 *)(lVar8 + 0x38);
    }
    else {
      if (*(char *)(param_1 + 0x48) != '\0') goto LAB_03bdf8fc;
LAB_03bdfae8:
      uVar12 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 8) >> 0x20);
      uVar13 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20);
      local_58 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x28) >> 0x20);
    }
    local_60 = CONCAT44(uVar13,uVar12);
  }
  else if ((*(ushort *)(lVar8 + 0x98) >> 9 & 1) != 0) {
    local_60 = *(undefined8 *)(lVar8 + 0xc0);
    local_58 = *(undefined4 *)(lVar8 + 200);
  }
  fVar14 = (float)FUN_03baa168(**(long **)(lVar7 + 0x18),&local_60,0);
  lVar8 = *(long *)(lVar10 + 0x1b8);
  if ((lVar8 == 0) && (lVar8 = *(long *)(*(long *)(lVar10 + 0x110) + 0x110), lVar8 == 0)) {
    lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0x28) + 0x88);
  }
  if ((*(long *)(lVar8 + 0x90) != 0) &&
     (*(float *)(*(long *)(lVar8 + 0x90) + 0x50) <=
      fVar14 / *(float *)(*(long *)(*(long *)puVar3 + 0x10) + 0x20))) {
    return 0;
  }
  if (*(long **)(lVar8 + 0x80) != (long *)0x0) {
    fVar14 = (float)(**(code **)(**(long **)(lVar8 + 0x80) + 0x28))();
    plVar6 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                 0x18))();
    uVar11 = (ulong)*(uint *)(param_1 + 0x38);
    uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6,0xd);
    uVar4 = 0;
    if ((uVar11 != 0) && (-1 < (int)uVar5)) {
      puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11) + 0x40000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
        puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11);
      }
      uVar4 = *puVar1 >> (ulong)(uVar5 & 0x1f) & 1;
    }
    plVar6 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                                 0x18))();
    if (uVar4 == 0) {
      fVar15 = (float)FUN_03bdc520(plVar6,*(undefined8 *)(param_1 + 0x28),
                                   *(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6,0xd);
      fVar15 = 0.0;
      if ((uVar11 != 0) && (-1 < (int)uVar4)) {
        puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
          puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11);
        }
        if ((*puVar1 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
          uVar4 = *puVar1 & 0xffffffffU >> (ulong)(~uVar4 & 0x1f);
          uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
          uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
          uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
          uVar4 = uVar4 + (uVar4 >> 8);
          fVar15 = (float)FUN_03be93d4(plVar6,puVar1 + (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f)
                                                                  - 1) + 1,uVar9);
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x18);
    if ((*(ushort *)(lVar10 + 0x98) >> 5 & 1) != 0) {
      fVar15 = fVar15 * *(float *)(lVar10 + 0xb0);
    }
    return (int)(fVar14 * (float)(int)(fVar15 * 255.0));
  }
LAB_03bdf928:
  plVar6 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                               0x18))();
  uVar11 = (ulong)*(uint *)(param_1 + 0x38);
  uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6,0xd);
  uVar4 = 0;
  if ((uVar11 != 0) && (-1 < (int)uVar5)) {
    puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11) + 0x40000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
      puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11);
    }
    uVar4 = *puVar1 >> (ulong)(uVar5 & 0x1f) & 1;
  }
  plVar6 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                               0x18))();
  if (uVar4 == 0) {
    fVar14 = (float)FUN_03bdc520(plVar6,*(undefined8 *)(param_1 + 0x28),
                                 *(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6,0xd);
    fVar14 = 0.0;
    if ((uVar11 != 0) && (-1 < (int)uVar4)) {
      puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11) + 0x40000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
        puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11);
      }
      if ((*puVar1 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
        uVar4 = *puVar1 & 0xffffffffU >> (ulong)(~uVar4 & 0x1f);
        uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        fVar14 = (float)FUN_03be93d4(plVar6,puVar1 + (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) -
                                                                1) + 1,uVar9);
      }
    }
  }
  if ((*(ushort *)(*(long *)(param_1 + 0x18) + 0x98) >> 5 & 1) != 0) {
    fVar14 = fVar14 * *(float *)(*(long *)(param_1 + 0x18) + 0xb0);
  }
  return (int)(fVar14 * 255.0);
}

