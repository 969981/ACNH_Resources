
void FUN_02606fc0(long param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  int *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_6c;
  long *local_68;
  
  puVar4 = PTR_DAT_04bb2268;
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb0) == '\0') {
    return;
  }
  FUN_026072c0();
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 < 1) {
    uVar13 = 1;
  }
  else {
    uVar13 = (iVar7 + 499U) / 500;
  }
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar8 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))(),
     lVar8 == 0)) {
    uVar14 = 0;
    goto LAB_02607158;
  }
  plVar1 = (long *)(lVar8 + 0x276eb0);
  lVar12 = *(long *)(lVar8 + 0x276ed0);
  if (lVar12 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar12 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar8 + 0x276ed0) == 0) goto LAB_026070cc;
      plVar10 = *(long **)(*(long *)(lVar8 + 0x276ed0) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_90 = (undefined *)*plVar1;
      local_88 = *(undefined8 *)(lVar8 + 0x276eb8);
      uStack_80 = 0x400;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_90);
    }
  }
LAB_026070cc:
  lVar12 = *(long *)(lVar8 + 0x276eb8) + *plVar1;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  plVar10 = *(long **)(lVar8 + 0x276ed0);
  if ((uVar9 & 1) == 0) {
LAB_02607104:
    if (plVar10 != (long *)0x0) {
LAB_02607108:
      if ((undefined8 *)*plVar10 != (undefined8 *)0x0) {
        uVar9 = (*(code *)**(undefined8 **)*plVar10)();
        uVar14 = *(undefined4 *)(*(long *)(lVar8 + 0x276eb8) + *plVar1 + 0x1c);
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x276ed0) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x276ed0) + 8),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
        goto LAB_02607158;
      }
    }
  }
  else if (plVar10 != (long *)0x0) {
    if ((undefined8 *)plVar10[3] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)plVar10[3])();
      plVar10 = *(long **)(lVar8 + 0x276ed0);
      goto LAB_02607104;
    }
    goto LAB_02607108;
  }
  uVar14 = *(undefined4 *)(*(long *)(lVar8 + 0x276eb8) + *plVar1 + 0x1c);
LAB_02607158:
  puVar6 = PTR_DAT_04bc3388;
  puVar5 = PTR_DAT_04bb3350;
  uVar15 = 0;
  piVar2 = (int *)(PTR_DAT_04bb2020 + 0x10);
  puVar3 = PTR_DAT_04bc3388 + 0x10;
  do {
    local_a0 = "parse_mainfield_item";
    local_a8 = piVar2;
    FUN_0260140c(&local_90,&local_a8);
    lVar8 = *(long *)puVar4;
    local_68 = (long *)0x0;
    local_90 = puVar3;
    if (*(char *)(lVar8 + 0xb1) == '\0') {
      local_68 = (long *)FUN_0260d56c(lVar8,local_88,500);
    }
    local_a0 = (char *)CONCAT44(uVar15,uVar13);
    local_a8 = (int *)(param_1 + 8);
    local_98 = uVar14;
    FUN_025c18e0(&local_90,&local_a8);
    lVar12 = *(long *)puVar5;
    lVar16 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(lVar12 + 0x68));
    if ((*(long *)(lVar12 + 0x60) != lVar8) &&
       (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
      *(undefined1 *)(lVar16 + 0xb1) = 1;
    }
    local_90 = puVar6 + 0x10;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 8))();
    }
    iVar7 = (**(code **)(local_90 + 0x20))(&local_90);
    if (iVar7 == -1) {
LAB_02607284:
      if (local_6c == 0) {
        local_6c = 1;
      }
    }
    else {
      iVar7 = (**(code **)(local_90 + 0x20))(&local_90);
      local_a8 = (int *)CONCAT44(local_a8._4_4_,iVar7);
      if (0xc < iVar7) goto LAB_02607284;
    }
    FUN_02601530(&local_90);
    uVar15 = uVar15 + 1;
    if (uVar13 == uVar15) {
      return;
    }
  } while( true );
}

