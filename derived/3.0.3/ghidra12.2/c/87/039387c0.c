
void FUN_039387c0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  iVar8 = *(int *)(param_3 + 4);
  if (iVar8 == 0 || iVar8 == 3) {
    if (*(char *)(*(long *)(param_3 + 0x10) + 0x98) == '\0') {
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      lVar13 = *(long *)PTR_DAT_04bbd7e0;
      (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar13 + 0x1024);
      (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar13 + 0x1068);
      puVar3 = PTR_DAT_04bcf1e8;
      puVar2 = PTR_DAT_04bbd560;
      iVar8 = *(int *)(lVar13 + 0x1010);
      if (iVar8 != 0) {
        lVar13 = *(long *)(lVar13 + 0x1018);
        uVar11 = 0;
        uVar12 = 0;
        do {
          lVar7 = *(long *)(lVar13 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
          if (lVar7 != 0) {
            uVar4 = (**(code **)puVar2)(lVar7 + 8);
            (**(code **)puVar3)(uVar10,uVar11 & 0xffffffff,uVar4,*(undefined4 *)(lVar7 + 0x118));
          }
          uVar11 = uVar12 + 1;
          uVar12 = uVar11 & 0xffffffff;
        } while (iVar8 != (int)uVar11);
      }
      lVar13 = *(long *)PTR_DAT_04bbd7e8;
      iVar8 = *(int *)(lVar13 + 0x480);
      if (iVar8 == 0) {
        return;
      }
      uVar9 = *(undefined4 *)(lVar13 + 0x464);
      uVar4 = *(undefined8 *)(param_2 + 0xb8);
      uVar10 = (**(code **)PTR_DAT_04bbd560)(lVar13 + 0x488);
      uVar5 = *(undefined4 *)(lVar13 + 0x460);
      goto LAB_03938bfc;
    }
    uVar1 = *(uint *)(*(long *)(param_3 + 0x10) + 0x3c8);
    param_1 = param_1 + 0xb10;
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    lVar13 = param_1 + (ulong)uVar1 * 0x3d0;
    if (1 < uVar1) {
      lVar13 = param_1;
    }
    (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar13 + 0x2ac);
    (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar13 + 0x2f0);
    puVar3 = PTR_DAT_04bcf1e8;
    puVar2 = PTR_DAT_04bbd560;
    iVar8 = *(int *)(lVar13 + 0x298);
    if (iVar8 != 0) {
      lVar13 = *(long *)(lVar13 + 0x2a0);
      uVar11 = 0;
      uVar12 = 0;
      do {
        lVar7 = *(long *)(lVar13 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
        if (lVar7 != 0) {
          uVar4 = (**(code **)puVar2)(lVar7 + 8);
          (**(code **)puVar3)(uVar10,uVar11 & 0xffffffff,uVar4,*(undefined4 *)(lVar7 + 0x118));
        }
        uVar11 = uVar12 + 1;
        uVar12 = uVar11 & 0xffffffff;
      } while (iVar8 != (int)uVar11);
    }
    uVar1 = *(uint *)(*(long *)(param_3 + 0x10) + 0x3c8);
    lVar13 = param_1 + (ulong)uVar1 * 0x3d0;
    if (1 < uVar1) {
      lVar13 = param_1;
    }
    iVar8 = *(int *)(lVar13 + 0x398);
    if (iVar8 == 0) {
      return;
    }
    uVar9 = *(undefined4 *)(lVar13 + 0x37c);
    uVar4 = *(undefined8 *)(param_2 + 0xb8);
  }
  else {
    if (iVar8 != 4) {
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      lVar13 = *(long *)PTR_DAT_04bbd7e0;
      (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar13 + 0x1024);
      (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar13 + 0x1068);
      puVar3 = PTR_DAT_04bcf1e8;
      puVar2 = PTR_DAT_04bbd560;
      iVar8 = *(int *)(lVar13 + 0x1010);
      if (iVar8 != 0) {
        lVar13 = *(long *)(lVar13 + 0x1018);
        uVar11 = 0;
        uVar12 = 0;
        do {
          lVar7 = *(long *)(lVar13 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
          if (lVar7 != 0) {
            uVar4 = (**(code **)puVar2)(lVar7 + 8);
            (**(code **)puVar3)(uVar10,uVar11 & 0xffffffff,uVar4,*(undefined4 *)(lVar7 + 0x118));
          }
          uVar11 = uVar12 + 1;
          uVar12 = uVar11 & 0xffffffff;
        } while (iVar8 != (int)uVar11);
      }
      lVar13 = *(long *)PTR_DAT_04bbd7e8;
      iVar8 = *(int *)(lVar13 + 0x480);
      if (iVar8 == 0) {
        return;
      }
      uVar9 = *(undefined4 *)(lVar13 + 0x464);
      uVar4 = *(undefined8 *)(param_2 + 0xb8);
      uVar10 = (**(code **)puVar2)(lVar13 + 0x488);
      uVar5 = *(undefined4 *)(lVar13 + 0x460);
      goto LAB_03938bfc;
    }
    lVar13 = *(long *)(param_3 + 0x10);
    if ((*(char *)(lVar13 + 0x78) == '\0' || *(char *)(lVar13 + 0x98) == '\0') ||
       (*(char *)(lVar13 + 0xb8) == '\0')) {
      puVar6 = (uint *)(lVar13 + 0x3c8);
    }
    else {
      puVar6 = (uint *)(lVar13 + 0x448);
    }
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    lVar13 = param_1 + 0xb10 + (ulong)*puVar6 * 0x3d0;
    if (1 < *puVar6) {
      lVar13 = param_1 + 0xb10;
    }
    (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar13 + 0x2ac);
    (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar13 + 0x2f0);
    puVar3 = PTR_DAT_04bcf1e8;
    puVar2 = PTR_DAT_04bbd560;
    iVar8 = *(int *)(lVar13 + 0x298);
    if (iVar8 != 0) {
      lVar7 = *(long *)(lVar13 + 0x2a0);
      uVar11 = 0;
      uVar12 = 0;
      do {
        lVar14 = *(long *)(lVar7 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
        if (lVar14 != 0) {
          uVar4 = (**(code **)puVar2)(lVar14 + 8);
          (**(code **)puVar3)(uVar10,uVar11 & 0xffffffff,uVar4,*(undefined4 *)(lVar14 + 0x118));
        }
        uVar11 = uVar12 + 1;
        uVar12 = uVar11 & 0xffffffff;
      } while (iVar8 != (int)uVar11);
    }
    iVar8 = *(int *)(lVar13 + 0x398);
    if (iVar8 == 0) {
      return;
    }
    uVar9 = *(undefined4 *)(lVar13 + 0x37c);
    uVar4 = *(undefined8 *)(param_2 + 0xb8);
  }
  uVar10 = (**(code **)PTR_DAT_04bbd560)(lVar13 + 0x3a0);
  uVar5 = *(undefined4 *)(lVar13 + 0x378);
LAB_03938bfc:
                    /* WARNING: Could not recover jumptable at 0x03938c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar4,uVar9,uVar5,iVar8,uVar10);
  return;
}

