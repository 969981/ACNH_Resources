
void FUN_025fea20(long param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *__s;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint local_c4;
  undefined *local_b0;
  char *local_a8;
  uint local_a0;
  uint local_9c;
  uint uStack_98;
  undefined *local_90;
  long local_88;
  int local_6c;
  long local_68;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_2);
  if (lVar7 == 0) {
    return;
  }
  lVar14 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar14 = *(long *)(*(long *)puVar1 + 0x20);
    plVar11 = *(long **)(lVar14 + 0x1090);
    if (plVar11 != (long *)0x0) goto LAB_025fea94;
LAB_025feab0:
    local_c4 = 0;
  }
  else {
    plVar11 = *(long **)(lVar7 + 0x1a540);
    if (plVar11 == (long *)0x0) goto LAB_025feab0;
LAB_025fea94:
    if ((undefined8 *)*plVar11 == (undefined8 *)0x0) goto LAB_025feab0;
    local_c4 = (*(code *)**(undefined8 **)*plVar11)();
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    __s = malloc(0x7516);
joined_r0x025feb24:
    if (__s != (void *)0x0) {
      memset(__s,0,0x7516);
      uVar12 = 0x3a8b;
      bVar3 = false;
      goto LAB_025feb54;
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 8);
    if (plVar11 != (long *)0x0) {
LAB_025feaf8:
      __s = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x7516,8);
      goto joined_r0x025feb24;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar7 + 8);
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) goto LAB_025feaf8;
    __s = (void *)0x0;
  }
  uVar12 = 0;
  bVar3 = true;
LAB_025feb54:
  puVar1 = PTR_DAT_04bb43c0;
  uVar13 = 0;
  uVar16 = 0;
  do {
    local_90 = (undefined *)(ulong)(uVar13 & 0xffff);
    FUN_0277d4ac(&local_90);
    lVar7 = *(long *)puVar1;
    uVar5 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
         (uVar9 = FUN_0277a1f4(*(long *)(lVar14 + 0x1078) + *(long *)(lVar14 + 0x1070),&local_90),
         (uVar9 & 1) != 0)) {
        uVar5 = uVar16;
        if (uVar12 <= uVar16) {
          uVar5 = 0;
        }
        uVar16 = uVar16 + 1;
        *(short *)((long)__s + (long)(int)uVar5 * 2) = (short)uVar13;
      }
    }
    puVar4 = PTR_DAT_04bb2268;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x3a8b);
  if (0 < (int)uVar16) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bc3380 + 0x10;
    do {
      lVar8 = *(long *)puVar4;
      lVar15 = *(long *)PTR_DAT_04bb3350;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(lVar15 + 0x68));
      if ((*(long *)(lVar15 + 0x60) != lVar7) &&
         (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
        *(undefined1 *)(lVar8 + 0xb1) = 1;
      }
      local_a8 = "parse_collectbit_item";
      local_b0 = puVar1;
      FUN_026012f4(&local_90,&local_b0,param_2);
      local_68 = 0;
      local_90 = puVar2;
      if (*(char *)(*(long *)puVar4 + 0xb1) == '\0') {
        if (local_88 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          if ((*(long *)(local_88 + 8) != 0) &&
             (lVar7 = FUN_03f28fa0(*(long *)(local_88 + 8),4000), lVar7 == 0)) {
            *(undefined1 *)(*(long *)puVar4 + 0xb1) = 1;
          }
        }
        local_68 = lVar7;
      }
      uVar13 = (uVar16 + 3999) / 4000;
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,param_3);
      local_a8 = __s;
      local_a0 = uVar16;
      local_9c = uVar13;
      uStack_98 = uVar12;
      FUN_025c0a00(&local_90,&local_b0);
      local_90 = PTR_DAT_04bc3380 + 0x10;
      iVar6 = FUN_025c0c90(&local_90);
      if (iVar6 == -1) {
LAB_025fed68:
        if (local_6c == 0) {
          local_6c = 1;
        }
      }
      else {
        iVar6 = (**(code **)(local_90 + 0x20))(&local_90);
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar6);
        if (0xc < iVar6) goto LAB_025fed68;
      }
      FUN_02601530(&local_90);
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
  }
  if (!bVar3) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__s);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__s);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,__s);
      }
    }
  }
  if ((((local_c4 & 1) != 0) && (*(long *)(lVar14 + 0x1090) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x1090) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

