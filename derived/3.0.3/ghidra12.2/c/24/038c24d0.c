
void FUN_038c24d0(long param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  size_t __size;
  ulong uVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  void *local_240;
  undefined1 auStack_238 [64];
  undefined1 auStack_1f8 [392];
  
  fVar19 = *(float *)(param_1 + 8);
  fVar20 = *(float *)(param_1 + 0xc);
  uVar12 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    local_240 = malloc(0x100);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        local_240 = (void *)0x0;
        goto LAB_038c257c;
      }
    }
    local_240 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x100,8);
  }
LAB_038c257c:
  puVar4 = PTR_DAT_04bcf0b0;
  puVar3 = PTR_DAT_04bcf0a0;
  uVar11 = (uint)*(byte *)(param_1 + 0x49);
  if (2 < uVar11) {
    uVar11 = 3;
  }
  if (uVar11 == 0) {
    __size = 0;
  }
  else {
    lVar15 = 0;
    uVar16 = 0;
    do {
      puVar5 = PTR_DAT_04bcf740;
      puVar1 = auStack_1f8 + ((long)((ulong)uVar16 << 0x20) >> 0x19);
      (**(code **)PTR_DAT_04bcf068)(puVar1,uVar12);
      (**(code **)PTR_DAT_04bcf070)(puVar1);
      (**(code **)PTR_DAT_04bcf710)(puVar1,(int)fVar19,(int)fVar20);
      (**(code **)PTR_DAT_04bcf098)(puVar1,1);
      (**(code **)PTR_DAT_04bcf090)(puVar1,0x25);
      (**(code **)puVar3)(puVar1,1);
      lVar7 = (**(code **)puVar5)(puVar1);
      iVar6 = (**(code **)puVar4)(puVar1);
      uVar13 = (ulong)iVar6;
      uVar17 = 0;
      if (uVar13 != 0) {
        uVar17 = ((lVar7 + uVar13) - 1) / uVar13;
      }
      lVar15 = lVar15 + uVar17 * uVar13;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar11);
    __size = lVar15 + 0xfffU & 0xfffffffffffff000;
  }
  puVar18 = (undefined8 *)PTR_DAT_04bcf740;
  (**(code **)PTR_DAT_04bcf610)(auStack_238);
  (**(code **)PTR_DAT_04bcf330)(auStack_238,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bcf620)(auStack_238,0x21);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar9 = malloc(__size);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto LAB_038c2780;
      }
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,0x1000);
  }
LAB_038c2780:
  (**(code **)PTR_DAT_04bcf618)(auStack_238,pvVar9,__size);
  (**(code **)PTR_DAT_04bcf338)(local_240,auStack_238);
  puVar3 = PTR_DAT_04bcf0b8;
  uVar11 = (uint)*(byte *)(param_1 + 0x49);
  if (2 < uVar11) {
    uVar11 = 3;
  }
  if (uVar11 != 0) {
    uVar17 = 0;
    lVar15 = 0;
    uVar13 = 0;
    do {
      lVar7 = *(long *)PTR_DAT_04bb2698;
      if (lVar7 == 0) {
        pvVar9 = malloc(0x80);
      }
      else {
        plVar8 = param_2;
        if (param_2 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar8 = (long *)(lVar7 + 8);
          if (lVar10 != 0) {
            plVar8 = (long *)(lVar10 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            pvVar9 = (void *)0x0;
            goto LAB_038c2804;
          }
        }
        pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x80,8);
      }
LAB_038c2804:
      uVar2 = uVar13;
      if (2 < (uint)uVar17) {
        uVar2 = 0;
      }
      puVar1 = auStack_1f8 + ((long)(uVar13 << 0x20) >> 0x19);
      *(void **)(param_1 + 0x28 + uVar2 * 8) = pvVar9;
      (**(code **)PTR_DAT_04bcf0a8)(puVar1,local_240,lVar15);
      lVar7 = (*(code *)*puVar18)(puVar1);
      iVar6 = (**(code **)puVar4)(puVar1);
      puVar18 = (undefined8 *)PTR_DAT_04bcf740;
      uVar14 = (ulong)iVar6;
      uVar17 = 0;
      if (uVar14 != 0) {
        uVar17 = ((lVar7 + uVar14) - 1) / uVar14;
      }
      lVar15 = lVar15 + uVar17 * uVar14;
      (**(code **)puVar3)(*(undefined8 *)(param_1 + 0x28 + uVar2 * 8),puVar1);
      uVar17 = uVar13 + 1;
      uVar13 = uVar17 & 0xffffffff;
    } while ((uint)uVar17 != uVar11);
  }
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar9 = malloc(0x40);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      pvVar9 = (void *)0x0;
      if (plVar8 == (long *)0x0) goto LAB_038c296c;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x40,8);
  }
LAB_038c296c:
  *(void **)(param_1 + 0x18) = pvVar9;
  (**(code **)PTR_DAT_04bcff20)(pvVar9,uVar12);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar9 = malloc(0x180);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar18 = (undefined8 *)(lVar15 + 8);
      if (lVar7 != 0) {
        puVar18 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar18;
      if (param_2 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto LAB_038c2a04;
      }
    }
    pvVar9 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x180,8);
  }
LAB_038c2a04:
  *(void **)(param_1 + 0x10) = pvVar9;
  (**(code **)PTR_DAT_04bcf520)(auStack_238);
  (**(code **)PTR_DAT_04bcf518)(auStack_238,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bcf528)(auStack_238,*(undefined8 *)(param_1 + 0x40));
  (**(code **)PTR_DAT_04bcf530)(auStack_238,*(undefined1 *)(param_1 + 0x49),param_1 + 0x28);
  (**(code **)PTR_DAT_04bcf540)(auStack_238,*(undefined1 *)(param_1 + 0x49));
  (**(code **)PTR_DAT_04bcf538)(auStack_238,*(undefined1 *)(param_1 + 0x48));
  (**(code **)PTR_DAT_04bcf578)(*(undefined8 *)(param_1 + 0x10),auStack_238);
  (**(code **)PTR_DAT_04bcf590)
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(int *)(param_1 + 0x54) = (int)fVar19;
  *(int *)(param_1 + 0x58) = (int)fVar20;
  return;
}

