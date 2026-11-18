
void FUN_033207d0(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  ushort uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *local_b8;
  char *pcStack_b0;
  undefined4 local_a8;
  undefined2 local_a4 [31];
  undefined2 local_66;
  uint local_5c;
  undefined8 local_58;
  
  lVar15 = param_1[100];
  *(undefined2 *)((long)param_1 + 0x17e4) = 0;
  *(undefined4 *)(param_1 + 0x2fd) = 0;
  lVar13 = *(long *)(lVar15 + 0x28);
  if (lVar13 != 0) {
    *(long *)(lVar15 + 0x20) = lVar13;
    *(undefined8 *)(lVar15 + 0x28) = 0;
    *(undefined4 *)(lVar15 + 0x30) = 0;
    if (*(long **)(lVar13 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar13 + 0x20) + 0x20))();
    }
  }
  if ((*(long *)(lVar15 + 0x20) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar15 + 0x20) + 0x50), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
  lVar13 = *(long *)(lVar15 + 0x28);
  if (lVar13 != 0) {
    *(long *)(lVar15 + 0x20) = lVar13;
    *(undefined8 *)(lVar15 + 0x28) = 0;
    *(undefined4 *)(lVar15 + 0x30) = 0;
    if (*(long **)(lVar13 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar13 + 0x20) + 0x20))();
    }
  }
  lVar13 = param_1[6];
  if (lVar13 != 0) {
    param_1[5] = lVar13;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(long **)(lVar13 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar13 + 0x20) + 0x20))();
    }
  }
  if ((param_1[5] != 0) && (plVar11 = *(long **)(param_1[5] + 0x50), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  lVar13 = param_1[6];
  if (lVar13 != 0) {
    param_1[5] = lVar13;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(long **)(lVar13 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar13 + 0x20) + 0x20))();
    }
  }
  if (*(char *)((long)param_1 + 0x17da) != *(char *)((long)param_1 + 0x17d9)) {
    (**(code **)(*param_1 + 0x180))(param_1,*(char *)((long)param_1 + 0x17d9) != '\0');
    *(undefined1 *)((long)param_1 + 0x17da) = *(undefined1 *)((long)param_1 + 0x17d9);
  }
  (**(code **)(*param_1 + 0x158))(param_1);
  puVar8 = PTR_DAT_04bc92a0;
  puVar7 = PTR_DAT_04bc9298;
  bVar9 = false;
  if ((*(long *)PTR_DAT_04bc9298 != 0) && (*(long **)PTR_DAT_04bc92a0 != (long *)0x0)) {
    if (*(int *)(*(long *)(*(long *)PTR_DAT_04bc9298 + 0x210) + 0x60) == 10) {
      bVar9 = false;
    }
    else {
      iVar10 = (**(code **)(**(long **)PTR_DAT_04bc92a0 + 0x40))();
      bVar9 = iVar10 == 3;
    }
  }
  if ((bool)*(char *)((long)param_1 + 0x17db) == bVar9) {
    if (*(char *)((long)param_1 + 0x17dc) == '\0') {
      cVar4 = *(char *)((long)param_1 + 0x17e2);
      goto joined_r0x03320bfc;
    }
  }
  else {
    *(bool *)((long)param_1 + 0x17db) = bVar9;
    *(undefined1 *)((long)param_1 + 0x17dc) = 1;
  }
  puVar6 = PTR_DAT_04bc8e68;
  puVar5 = PTR_DAT_04bc0840;
  if (((*(long *)puVar7 == 0) || (plVar11 = *(long **)puVar8, plVar11 == (long *)0x0)) ||
     (uVar14 = (**(code **)(*plVar11 + 0x60))
                         (plVar11,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0x210) + 0x60)),
     (uVar14 & 1) != 0)) {
    if (param_1[0x68] != 0) {
      FUN_032c8150(0,param_1[0x6d],0,0);
    }
    if (param_1[0x6a] != 0) {
      FUN_032c8150(0,param_1[0x6e],0,0);
    }
    if (param_1[0x69] != 0) {
      FUN_032c8150(0,param_1[0x71],0,0);
      local_58 = *(undefined8 *)(*(long *)(param_1[0x69] + 0x20) + 0x18);
      local_b8 = puVar6 + 0x10;
      pcStack_b0 = "T_Key";
      local_58 = FUN_0328b6d0(&local_58,&local_b8,0);
      local_5c = 0xe0f0;
      goto LAB_03320b44;
    }
  }
  else {
    if (param_1[0x68] != 0) {
      FUN_032c8150(0x40000000,param_1[0x6d],0,0);
    }
    if (param_1[0x6a] != 0) {
      FUN_032c8150(0x40800000,param_1[0x6e],0,0);
    }
    if (param_1[0x69] != 0) {
      if (*(char *)((long)param_1 + 0x17db) == '\0') {
        uVar16 = 0x40000000;
      }
      else {
        uVar16 = 0x3f800000;
      }
      FUN_032c8150(uVar16,param_1[0x71],0,0);
      local_58 = *(undefined8 *)(*(long *)(param_1[0x69] + 0x20) + 0x18);
      local_b8 = puVar6 + 0x10;
      pcStack_b0 = "T_Key";
      local_58 = FUN_0328b6d0(&local_58,&local_b8,0);
      uVar12 = 0xe0e4;
      if (*(char *)((long)param_1 + 0x17db) == '\0') {
        uVar12 = 0xe0e5;
      }
      local_5c = (uint)uVar12;
LAB_03320b44:
      local_66 = 0;
      local_a4[0] = 0;
      local_a8 = 0x20;
      pcStack_b0 = (char *)local_a4;
      local_b8 = puVar5 + 0x10;
      FUN_038d1340(&local_b8,&DAT_04169b80,&local_5c);
      FUN_032d67f0(&local_58,&local_b8);
    }
  }
  if (param_1[0x67] != 0) {
    local_58 = *(undefined8 *)(*(long *)(param_1[0x67] + 0x20) + 0x18);
    local_b8 = puVar6 + 0x10;
    pcStack_b0 = "T_Key";
    local_58 = FUN_0328b6d0(&local_58,&local_b8,0);
    pcStack_b0 = (char *)local_a4;
    local_a8 = 0x20;
    local_66 = 0;
    local_a4[0] = 0;
    uVar12 = 0xe0ef;
    if (*(char *)((long)param_1 + 0x17db) != '\0') {
      uVar12 = 0xe0f0;
    }
    local_5c = (uint)uVar12;
    local_b8 = puVar5 + 0x10;
    FUN_038d1340(&local_b8,&DAT_04169b80,&local_5c);
    FUN_032d67f0(&local_58,&local_b8);
  }
  *(undefined1 *)((long)param_1 + 0x17dc) = 0;
  cVar4 = *(char *)((long)param_1 + 0x17e2);
joined_r0x03320bfc:
  if (cVar4 != '\0') {
    puVar1 = (undefined1 *)0x0;
    if (param_1[0xb8] != 0) {
      puVar1 = &LAB_03325ec4;
    }
    if (puVar1 != (undefined1 *)0x0) {
      FUN_032a6df0(*(undefined8 *)PTR_DAT_04bc8ed0,*(undefined8 *)(param_1[0xb8] + 8),0);
      *(undefined1 *)((long)param_1 + 0x17e2) = 0;
    }
  }
  if ((long *)param_1[5] != param_1 + 0x32) {
    return;
  }
  bVar9 = false;
  if ((*(long *)puVar7 != 0) && (*(long **)puVar8 != (long *)0x0)) {
    if (*(int *)(*(long *)(*(long *)puVar7 + 0x210) + 0x60) == 10) {
      bVar9 = false;
    }
    else {
      iVar10 = (**(code **)(**(long **)puVar8 + 0x40))();
      bVar9 = iVar10 - 3U < 2;
    }
  }
  if ((bool)*(char *)((long)param_1 + 0x17dd) != bVar9) {
    FUN_0331e4f8(param_1,(char)param_1[0x2fb]);
    bVar9 = false;
    if ((*(long *)puVar7 != 0) && (*(long **)puVar8 != (long *)0x0)) {
      if (*(int *)(*(long *)(*(long *)puVar7 + 0x210) + 0x60) == 10) {
        bVar9 = false;
      }
      else {
        iVar10 = (**(code **)(**(long **)puVar8 + 0x40))();
        bVar9 = iVar10 - 3U < 2;
      }
    }
    *(bool *)((long)param_1 + 0x17dd) = bVar9;
    puVar1 = (undefined1 *)0x0;
    if (param_1[0xb8] != 0) {
      puVar1 = &LAB_03325ec4;
    }
    if (puVar1 != (undefined1 *)0x0) {
      FUN_032a6df0(*(undefined8 *)PTR_DAT_04bc8ed0,*(undefined8 *)(param_1[0xb8] + 8),0);
      *(undefined1 *)((long)param_1 + 0x17e2) = 0;
    }
  }
  FUN_0331e73c(param_1);
  lVar13 = param_1[0x62];
  if (lVar13 == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = *(char *)(lVar13 + 0x177c) != '\0' || *(long *)(lVar13 + 0xdf8) != 0;
  }
  if ((bool)(char)param_1[0x2fc] != bVar9) {
    puVar1 = (undefined1 *)0x0;
    if (param_1[0xb8] != 0) {
      puVar1 = &LAB_03325ec4;
    }
    if (puVar1 != (undefined1 *)0x0) {
      FUN_032a6df0(*(undefined8 *)PTR_DAT_04bc8ed0,*(undefined8 *)(param_1[0xb8] + 8),0);
      lVar13 = param_1[0x62];
      *(undefined1 *)((long)param_1 + 0x17e2) = 0;
    }
    bVar9 = false;
    if (lVar13 != 0) {
      bVar9 = *(char *)(lVar13 + 0x177c) != '\0' || *(long *)(lVar13 + 0xdf8) != 0;
    }
    *(bool *)(param_1 + 0x2fc) = bVar9;
  }
  lVar13 = *(long *)PTR_DAT_04bc8e90;
  uVar3 = *(uint *)(lVar13 + 4);
  if (0 < (int)uVar3) {
    if (*(char *)(*(long *)(lVar13 + 8) + 4) != '\0') {
      return;
    }
    uVar14 = 0;
    plVar11 = (long *)(lVar13 + 0x10);
    do {
      if ((ulong)uVar3 - 1 == uVar14) goto LAB_03320e2c;
      bVar9 = 0xe < uVar14;
      uVar14 = uVar14 + 1;
      plVar2 = plVar11;
      if (bVar9) {
        plVar2 = (long *)(lVar13 + 8);
      }
      plVar11 = plVar11 + 1;
    } while (*(char *)(*plVar2 + 4) == '\0');
    if (uVar14 < uVar3) {
      return;
    }
  }
LAB_03320e2c:
  if (((((char)param_1[0x2f9] == '\0') && (lVar13 = param_1[100], lVar13 != 0)) &&
      (*(char *)(lVar13 + 2000) == '\0')) &&
     ((*(long *)(lVar13 + 0x20) != lVar13 + 0x230 && (*(long *)(lVar13 + 0x20) != lVar13 + 0x2d8))))
  {
    FUN_03283eb0();
    *(char *)(param_1 + 0x2f9) = '\0';
    FUN_03292330(param_1[0x72]);
    FUN_032924d0(param_1[0x72],param_1[0x73]);
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  return;
}

