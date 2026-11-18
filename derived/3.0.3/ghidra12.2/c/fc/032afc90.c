
/* WARNING: Removing unreachable block (ram,0x032affac) */

void FUN_032afc90(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  void *__ptr;
  long lVar15;
  undefined8 *puVar16;
  long local_98;
  undefined *local_90;
  long *local_88;
  undefined *local_60;
  undefined8 *puStack_58;
  
  puVar4 = PTR_DAT_04bc8e68;
  puVar2 = PTR_DAT_04bb2120;
  lVar15 = param_2[1];
  lVar14 = *(long *)(lVar15 + 0xf0);
  pcVar1 = PTR_DAT_04bb2120;
  if ((char *)param_2[3] != (char *)0x0) {
    pcVar1 = (char *)param_2[3];
  }
  if (*pcVar1 != '\0') {
    local_90 = PTR_DAT_04bc8e68 + 0x10;
    local_88 = (long *)pcVar1;
    lVar14 = FUN_032cb8e0(&local_60,&local_90,lVar14);
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0xe8);
    }
  }
  lVar5 = lVar14;
  local_98 = lVar14;
  if (*(char *)param_2[5] != '\0') {
    lVar5 = FUN_0036ab80(lVar14);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0xe8);
    }
  }
  if (*(char *)param_2[5] == '\0') {
    if (*(char *)param_2[3] == '\0') {
      lVar6 = *(long *)(lVar15 + 0xf0);
    }
    else {
      local_90 = puVar4 + 0x10;
      local_88 = (long *)param_2[3];
      lVar6 = FUN_032cb8e0(&local_60,&local_90,*(undefined8 *)(lVar15 + 0xf0));
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xe8), lVar6 == 0)) goto LAB_032afe1c;
    }
    lVar11 = *(long *)(lVar15 + 0x110);
    if (*(undefined **)(lVar6 + 0x30) != (undefined *)0x0) {
      puVar2 = *(undefined **)(lVar6 + 0x30);
    }
    for (; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while (puVar2 < *(undefined **)(lVar11 + 0x20)) {
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_032afe1c;
      }
      if (puVar2 <= *(undefined **)(lVar11 + 0x20)) goto LAB_032aff88;
    }
  }
  else {
    local_90 = puVar4 + 0x10;
    local_88 = (long *)param_2[5];
    lVar6 = FUN_032cb8e0(&local_98,&local_90,lVar14);
    lVar11 = *(long *)(lVar15 + 0x110);
    if (lVar11 != 0) {
      uVar8 = *(ulong *)(*(long *)(lVar6 + 0xe8) + 0x30);
      do {
        while (uVar8 < *(ulong *)(lVar11 + 0x20)) {
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 == 0) goto LAB_032afe1c;
        }
        if (uVar8 <= *(ulong *)(lVar11 + 0x20)) goto LAB_032aff88;
        lVar11 = *(long *)(lVar11 + 0x10);
      } while (lVar11 != 0);
    }
  }
LAB_032afe1c:
  lVar11 = 0;
LAB_032afe20:
  uVar9 = *param_2;
  *(long *)(param_1 + 0x58) = lVar5;
  lVar5 = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  FUN_032c6b2c(lVar5,2);
  local_60 = puVar4 + 0x10;
  puStack_58 = &DAT_0407ebb1;
  FUN_032c7570(lVar5,lVar11,&local_60);
  *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
  FUN_032c83b0(lVar5,0,0);
  local_90 = PTR_DAT_04bc8e60 + 0x10;
  local_88 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar6 != 0) {
    iVar10 = 1;
    lVar11 = lVar6;
    do {
      lVar11 = *(long *)(lVar11 + 0x10);
      iVar10 = iVar10 + -1;
    } while (lVar11 != 0);
    if (iVar10 != 0) {
      lVar6 = *(long *)(lVar6 + 0x10);
      do {
        plVar7 = (long *)(lVar6 + 0x28);
        lVar6 = *(long *)(lVar6 + 0x18);
      } while (lVar6 != 0 && *plVar7 == 0);
      if ((*plVar7 != 0) && (FUN_032c7c30(lVar5,1,1,&local_90,0,0), local_88 != (long *)0x0)) {
        (**(code **)(*local_88 + 8))();
      }
    }
  }
  lVar5 = lVar14;
  if (*(char *)param_2[7] != '\0') {
    lVar5 = FUN_0036ab80(lVar14);
    if (lVar5 == 0) goto LAB_032b00c8;
    lVar5 = *(long *)(lVar5 + 0xe8);
  }
  if (lVar5 != 0) {
    if ((char)*(long *)param_2[7] != '\0') {
      local_90 = puVar4 + 0x10;
      local_88 = (long *)param_2[7];
      lVar14 = FUN_032cb8e0(&local_98,&local_90,lVar14);
      lVar14 = *(long *)(lVar14 + 0xe8);
    }
    lVar15 = *(long *)(lVar15 + 0x110);
    if (lVar15 != 0) {
      do {
        while (*(ulong *)(lVar14 + 0x30) < *(ulong *)(lVar15 + 0x20)) {
          lVar15 = *(long *)(lVar15 + 8);
          if (lVar15 == 0) goto LAB_032aff80;
        }
        if (*(ulong *)(lVar14 + 0x30) <= *(ulong *)(lVar15 + 0x20)) {
          lVar15 = lVar15 + 0x28;
          goto LAB_032aff94;
        }
        lVar15 = *(long *)(lVar15 + 0x10);
      } while (lVar15 != 0);
    }
LAB_032aff80:
    lVar15 = 0;
LAB_032aff94:
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    puVar16 = (undefined8 *)*param_2;
    plVar7 = (long *)*puVar16;
    lVar14 = (**(code **)(*plVar7 + 0x30))(plVar7,0x68,8);
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *(undefined4 *)(lVar14 + 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x50) = 0;
    *(undefined1 *)(lVar14 + 0x58) = 0;
    *(undefined4 *)(lVar14 + 0x38) = 0;
    *(undefined1 *)(lVar14 + 0x60) = 0;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined8 *)(lVar14 + 0x10) = 0;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    *(undefined8 *)(lVar14 + 0x20) = 0;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined8 *)(lVar14 + 0x30) = 0;
    __ptr = *(void **)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar14;
    if (__ptr != (void *)0x0) {
      puVar13 = (undefined8 *)((long)__ptr + 8);
      FUN_032c6840(puVar13);
      plVar7 = *(long **)((long)__ptr + 8);
      *(undefined8 *)((long)__ptr + 0x28) = 0;
      *(undefined8 *)((long)__ptr + 0x30) = 0;
      *(undefined8 *)((long)__ptr + 0x20) = 0;
      if (plVar7 != (long *)0x0) {
        lVar14 = *(long *)((long)__ptr + 0x10);
        lVar6 = *(long *)((long)__ptr + 0x18);
        *(undefined8 *)((long)__ptr + 0x18) = 0;
        *puVar13 = 0;
        *(undefined8 *)((long)__ptr + 0x10) = 0;
        if ((undefined8 *)*plVar7 == puVar13) {
          *plVar7 = lVar6;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 8) = lVar14;
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x10) = lVar6;
        }
      }
      *(undefined8 *)((long)__ptr + 0x10) = 0;
      *(undefined8 *)((long)__ptr + 0x18) = 0;
      *puVar13 = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
        }
      }
      lVar14 = *(long *)(param_1 + 0x90);
    }
    lVar6 = lVar14 + 8;
    *(long *)(lVar14 + 0x30) = lVar5;
    *(undefined8 **)(lVar14 + 0x20) = puVar16;
    FUN_032c6b2c(lVar6,3);
    local_90 = puVar4 + 0x10;
    local_88 = &DAT_0407ebb1;
    FUN_032c7570(lVar6,lVar15,&local_90);
    FUN_032c8670(lVar6,1,0);
    lVar14 = local_98;
  }
LAB_032b00c8:
  local_60 = *(undefined **)(lVar14 + 0x18);
  local_90 = puVar4 + 0x10;
  local_88 = (long *)param_2[9];
  uVar9 = FUN_0328b6d0(&local_60,&local_90,0);
  plVar7 = (long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  if ((*(char *)(param_2 + 10) != '\0') && (*plVar7 == 0)) {
    plVar12 = *(long **)PTR_DAT_04bc8f70;
    puVar16 = (undefined8 *)*plVar12;
    if ((undefined8 *)*plVar12 == (undefined8 *)0x0) {
      *plVar12 = (long)plVar7;
    }
    else {
      do {
        puVar13 = puVar16;
        puVar16 = (undefined8 *)puVar13[2];
      } while ((undefined8 *)puVar13[2] != (undefined8 *)0x0);
      puVar13[2] = plVar7;
      *(undefined8 **)(param_1 + 0x18) = puVar13;
      plVar12 = (long *)*puVar13;
    }
    *(long **)(param_1 + 0x10) = plVar12;
    (**(code **)(*(long *)(param_1 + 8) + 0x28))(param_1 + 8);
    puVar3 = (undefined1 *)0x0;
    if (*(long *)(param_1 + 0x90) != 0) {
      puVar3 = &LAB_032b0484;
    }
    if (puVar3 != (undefined1 *)0x0) {
      FUN_032acd10(*(long *)(param_1 + 0x90),1);
    }
  }
  return;
LAB_032aff88:
  lVar11 = lVar11 + 0x28;
  goto LAB_032afe20;
}

