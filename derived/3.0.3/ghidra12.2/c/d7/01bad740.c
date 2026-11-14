
void FUN_01bad740(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *local_190;
  char *pcStack_188;
  undefined4 local_180;
  undefined1 local_17c [255];
  undefined1 local_7d;
  undefined *local_78;
  char *pcStack_70;
  
  lVar15 = 8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bdf0c8 + 0x10;
  puVar3 = PTR_DAT_04bdf1d8 + 0x10;
  puVar4 = PTR_DAT_04bb2bc0 + 0x10;
  plVar12 = param_1;
  do {
    plVar17 = plVar12 + 0x25;
    pcStack_70 = *(char **)(lVar15 + 0x4a3a738);
    pcStack_188 = "STR_Common";
    local_78 = puVar1;
    if (*plVar17 == 0) {
      plVar14 = *(long **)PTR_DAT_04bc08b0;
      local_190 = puVar1;
      FUN_006f50a0(plVar12 + 1,&local_190,&local_78,0);
      lVar18 = *(long *)PTR_DAT_04bb2698;
      if (lVar18 == 0) {
        puVar10 = malloc(0x100);
      }
      else {
        if (plVar14 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar8 = (undefined8 *)(lVar18 + 8);
          if (lVar11 != 0) {
            puVar8 = (undefined8 *)(lVar11 + 0xa8);
          }
          plVar14 = (long *)*puVar8;
        }
        puVar10 = (undefined4 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x100,8);
      }
      *puVar10 = 0;
      *(undefined1 *)(puVar10 + 4) = 1;
      *(undefined1 *)(puVar10 + 0x19) = 0;
      *(undefined **)(puVar10 + 0x14) = puVar4;
      *(undefined4 **)(puVar10 + 0x16) = puVar10 + 0x19;
      *(undefined **)(puVar10 + 2) = puVar2;
      puVar10[5] = 0;
      puVar10[0x12] = 0;
      puVar10[0x18] = 0x40;
      *(undefined1 *)((long)puVar10 + 0xa3) = 0;
      puVar10[0x2e] = 0x40;
      *(undefined1 *)((long)puVar10 + 0xfb) = 0;
      *(undefined1 *)(puVar10 + 0x2f) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined **)(puVar10 + 8) = puVar3;
      *(undefined8 *)(puVar10 + 10) = 0;
      *(undefined8 *)(puVar10 + 0xc) = 0;
      *(undefined8 *)(puVar10 + 0xe) = 0;
      *(undefined8 *)(puVar10 + 0x10) = 0;
      *(undefined **)(puVar10 + 0x2a) = puVar4;
      *(undefined4 **)(puVar10 + 0x2c) = puVar10 + 0x2f;
      *plVar17 = (long)puVar10;
      FUN_01c09c30(puVar10,&local_190,&local_78);
    }
    puVar5 = PTR_DAT_04bb2718;
    lVar15 = lVar15 + 0x10;
    plVar12 = plVar17;
  } while (lVar15 != 0x518);
  plVar12 = *(long **)PTR_DAT_04bc08b0;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  pcStack_188 = "STR_Article";
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_190);
  lVar15 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar5 + 0x408),&local_190);
  if ((lVar15 != 0) && (iVar9 = *(int *)(lVar15 + 8), 0 < iVar9)) {
    iVar13 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    plVar17 = param_1 + 0xbb6;
    puVar2 = PTR_DAT_04bb21f8 + 0x10;
    puVar3 = PTR_DAT_04bb2bc0 + 0x10;
    puVar4 = PTR_DAT_04bb4e10 + 0x10;
    puVar5 = PTR_DAT_04bdf0c8 + 0x10;
    puVar6 = PTR_DAT_04bdf1d8 + 0x10;
    do {
      local_180 = 0x100;
      local_7d = 0;
      local_17c[0] = 0;
      pcStack_70 = "STR_Article";
      local_190 = puVar2;
      pcStack_188 = local_17c;
      local_78 = puVar1;
      FUN_01be94e0(&local_190,&local_78,iVar13);
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        plVar14 = malloc(0x138);
      }
      else {
        plVar14 = plVar12;
        if (plVar12 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar8 = (undefined8 *)(lVar15 + 8);
          if (lVar18 != 0) {
            puVar8 = (undefined8 *)(lVar18 + 0xa8);
          }
          plVar14 = (long *)*puVar8;
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x138,8);
      }
      *(undefined4 *)(plVar14 + 2) = 0x20;
      *(undefined1 *)((long)plVar14 + 0x14) = 0;
      plVar14[3] = 0xffffffff;
      plVar14[4] = -0x100000000;
      *(undefined4 *)(plVar14 + 5) = 0xffffffff;
      *(undefined4 *)(plVar14 + 8) = 0x40;
      *(undefined1 *)((long)plVar14 + 0x83) = 0;
      *(undefined1 *)((long)plVar14 + 0x44) = 0;
      *(undefined1 *)((long)plVar14 + 0x9c) = 0;
      *(undefined4 *)(plVar14 + 0x13) = 0x40;
      *(undefined1 *)((long)plVar14 + 0xdb) = 0;
      plVar14[6] = (long)puVar3;
      plVar14[7] = (long)plVar14 + 0x44;
      plVar14[0x11] = (long)puVar3;
      plVar14[0x12] = (long)plVar14 + 0x9c;
      *plVar14 = (long)puVar4;
      plVar14[1] = (long)(plVar14 + 0x1c);
      plVar16 = plVar14 + 0x24;
      if (plVar14 + 0x24 <= (long *)((long)plVar14 + 0xe2)) {
        plVar16 = (long *)((long)plVar14 + 0xe2);
      }
      plVar14[0x22] = 0;
      plVar14[0x23] = 0;
      plVar14[0x20] = 0;
      plVar14[0x21] = 0;
      plVar14[0x1e] = 0;
      plVar14[0x1f] = 0;
      plVar14[0x1c] = 0;
      plVar14[0x1d] = 0;
      memset(plVar14 + 0x1c,0,((long)plVar16 + (-0xe1 - (long)plVar14) & 0xfffffffffffffffeU) + 2);
      plVar14[0x24] = 0;
      plVar14[0x25] = 0;
      plVar14[0x26] = 0;
      plVar16 = *(long **)PTR_DAT_04bc08b0;
      local_78 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "STR_Article";
      FUN_006f50a0(plVar14,&local_78,&local_190,0);
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        puVar10 = malloc(0x100);
      }
      else {
        if (plVar16 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar8 = (undefined8 *)(lVar15 + 8);
          if (lVar18 != 0) {
            puVar8 = (undefined8 *)(lVar18 + 0xa8);
          }
          plVar16 = (long *)*puVar8;
        }
        puVar10 = (undefined4 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x100,8);
      }
      *puVar10 = 0;
      puVar10[5] = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined **)(puVar10 + 8) = puVar6;
      puVar10[0x12] = 0;
      puVar10[0x18] = 0x40;
      *(undefined1 *)((long)puVar10 + 0xa3) = 0;
      *(undefined **)(puVar10 + 2) = puVar5;
      *(undefined1 *)(puVar10 + 4) = 1;
      *(undefined8 *)(puVar10 + 10) = 0;
      *(undefined8 *)(puVar10 + 0xc) = 0;
      *(undefined1 *)(puVar10 + 0x19) = 0;
      *(undefined8 *)(puVar10 + 0xe) = 0;
      *(undefined8 *)(puVar10 + 0x10) = 0;
      puVar7 = PTR_DAT_04bb2bc0 + 0x10;
      puVar10[0x2e] = 0x40;
      *(undefined1 *)((long)puVar10 + 0xfb) = 0;
      *(undefined1 *)(puVar10 + 0x2f) = 0;
      *(undefined **)(puVar10 + 0x14) = puVar7;
      *(undefined4 **)(puVar10 + 0x16) = puVar10 + 0x19;
      *(undefined **)(puVar10 + 0x2a) = puVar7;
      *(undefined4 **)(puVar10 + 0x2c) = puVar10 + 0x2f;
      plVar14[0x24] = (long)puVar10;
      FUN_01c09c30(puVar10,&local_78,&local_190);
      lVar15 = *plVar17;
      plVar14 = (long *)((long)*(int *)((long)param_1 + 0x5dc4) + (long)plVar14);
      *plVar17 = (long)plVar14;
      *plVar14 = lVar15;
      plVar14[1] = (long)plVar17;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 8) = plVar14;
      }
      iVar13 = iVar13 + 1;
      *(int *)(param_1 + 3000) = (int)param_1[3000] + 1;
    } while (iVar9 != iVar13);
  }
  *(undefined4 *)param_1 = 1;
  return;
}

