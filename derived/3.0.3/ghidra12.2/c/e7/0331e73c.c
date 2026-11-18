
void FUN_0331e73c(long param_1)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  undefined1 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar10;
  undefined8 *puVar9;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  lVar8 = DAT_05355a60;
  puVar10 = PTR_PTR_04bb2238;
  if ((*(long *)(param_1 + 0x310) == 0) || (*(int *)(*(long *)(param_1 + 0x310) + 0x1768) < 1)) {
    if ((*(int *)(param_1 + 0x308) == 0x12) && (*(long *)(DAT_05355a60 + 0xbf8) == 0)) {
      if (*(long *)(DAT_05355a60 + 0x30) == 0) {
        if (*(long *)(DAT_05355a60 + 0x28) == 0) goto LAB_0331ea48;
        goto LAB_0331e828;
      }
      if (*(char *)(*(long *)(DAT_05355a60 + 0x30) + 0x360) != '\0') goto LAB_0331e828;
LAB_0331ea48:
      puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
      uVar11 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      *(undefined8 *)(puVar7 + 200) = 0;
      *(undefined2 *)(puVar7 + 0xf0) = 0;
      puVar7[0xf2] = 0;
      *(undefined8 *)(puVar7 + 0xd8) = uVar11;
      *(undefined8 *)(puVar7 + 0xe8) = uVar11;
      *puVar7 = 1;
      uVar11 = *(undefined8 *)(puVar10 + 8);
      puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
      *(undefined8 *)(puVar7 + 0x98) = 0;
      *(undefined8 *)(puVar7 + 0xa8) = uVar11;
      *(undefined8 *)(puVar7 + 0xb8) = uVar11;
      *(undefined2 *)(puVar7 + 0xc0) = 0;
      puVar7[0xc2] = 0;
      *puVar7 = 1;
      uVar11 = *(undefined8 *)(puVar10 + 8);
      puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
      *(undefined8 *)(puVar7 + 0x108) = uVar11;
      *(undefined8 *)(puVar7 + 0x118) = uVar11;
LAB_0331e9c0:
      cVar2 = '\0';
      *puVar7 = 1;
      *(undefined8 *)(puVar7 + 0xf8) = 0;
      *(undefined2 *)(puVar7 + 0x120) = 0;
      puVar7[0x122] = 0;
      goto LAB_0331e9d0;
    }
LAB_0331e828:
    puVar12 = &DAT_0407ebb1;
    puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
    *(undefined8 *)(puVar7 + 0x98) = 0x400000000000;
    *(char **)(puVar7 + 0xa8) = "SwkbdFooter_CaretMoveR";
    *(undefined8 **)(puVar7 + 0xb8) = &DAT_0407ebb1;
    puVar7[0xc2] = 0;
    *(undefined2 *)(puVar7 + 0xc0) = 1;
    *puVar7 = 1;
    puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
    *(undefined8 *)(puVar7 + 200) = 0x200000000000;
    *(undefined8 **)(puVar7 + 0xe8) = &DAT_0407ebb1;
    *(undefined2 *)(puVar7 + 0xf0) = 1;
    puVar7[0xf2] = 0;
    *puVar7 = 1;
    *(char **)(puVar7 + 0xd8) = "SwkbdFooter_CaretMoveL";
    puVar10 = PTR_PTR_04bb2238;
    lVar5 = *(long *)(lVar8 + 0xbf8);
    if (lVar5 == 0) {
      lVar8 = *(long *)(lVar8 + 0x30);
      if (lVar8 != 0) {
        puVar3 = (uint *)(lVar8 + 0x1368);
        goto LAB_0331e8b0;
      }
    }
    else {
      puVar3 = (uint *)(lVar5 + 0x20d8);
LAB_0331e8b0:
      if ((*puVar3 & 0xfffffffd) == 0) {
        puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
        uVar11 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
        *(undefined8 *)(puVar7 + 0x108) = uVar11;
        *(undefined8 *)(puVar7 + 0x118) = uVar11;
        goto LAB_0331e9c0;
      }
    }
    if (((DAT_0572cca0 == 0) || (DAT_0572cca8 == (long *)0x0)) ||
       (*(int *)(*(long *)(DAT_0572cca0 + 0x210) + 0x60) == 10)) {
LAB_0331e948:
      puVar9 = (undefined8 *)&DAT_0407bc05;
      puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
      *(undefined8 *)(puVar7 + 0xf8) = 0x2000000000;
      *(undefined1 **)(puVar7 + 0x108) = &DAT_040a049e;
      *(undefined8 **)(puVar7 + 0x118) = &DAT_0407ebb1;
      puVar7[0x122] = 0;
      *(undefined2 *)(puVar7 + 0x120) = 1;
      *puVar7 = 1;
LAB_0331e984:
      uVar4 = 1;
      cVar2 = '\0';
      lVar8 = *(long *)(param_1 + 0x5c0);
      uVar6 = 4;
      goto LAB_0331e9e0;
    }
    iVar1 = (**(code **)(*DAT_0572cca8 + 0x40))();
    if (iVar1 != 4) {
      if (iVar1 != 3) goto LAB_0331e948;
      puVar9 = (undefined8 *)&DAT_040a049e;
      puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
      uVar11 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      *(undefined8 *)(puVar7 + 0xf8) = 0;
      *(undefined2 *)(puVar7 + 0x120) = 0;
      puVar7[0x122] = 0;
      *puVar7 = 1;
      *(undefined8 *)(puVar7 + 0x108) = uVar11;
      *(undefined8 *)(puVar7 + 0x118) = uVar11;
      goto LAB_0331e984;
    }
    cVar2 = '\0';
    puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
    *(undefined8 *)(puVar7 + 0xf8) = 0x2000000000;
    *(undefined8 **)(puVar7 + 0x118) = &DAT_0407ebb1;
    puVar7[0x122] = 0;
    *(undefined1 **)(puVar7 + 0x108) = &DAT_040a049e;
    *(undefined2 *)(puVar7 + 0x120) = 1;
    *puVar7 = 1;
    lVar8 = *(long *)(param_1 + 0x5c0);
    puVar10 = PTR_PTR_04bb2238;
  }
  else {
    puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
    *(undefined8 *)(puVar7 + 0x98) = 0x400000000000;
    *(undefined8 **)(puVar7 + 0xb8) = &DAT_0407ebb1;
    puVar7[0xc2] = 0;
    *(char **)(puVar7 + 0xa8) = "SwkbdFooter_CandidateSelectR";
    cVar2 = '\x01';
    *(undefined2 *)(puVar7 + 0xc0) = 1;
    *puVar7 = 1;
    puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
    *(undefined8 *)(puVar7 + 200) = 0x200000000000;
    *(char **)(puVar7 + 0xd8) = "SwkbdFooter_CandidateSelectL";
    *(undefined8 **)(puVar7 + 0xe8) = &DAT_0407ebb1;
    *(undefined2 *)(puVar7 + 0xf0) = 1;
    puVar7[0xf2] = 0;
    *puVar7 = 1;
    puVar10 = PTR_PTR_04bb2238;
    puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
    uVar11 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    *(undefined8 *)(puVar7 + 0x108) = uVar11;
    *(undefined8 *)(puVar7 + 0x118) = uVar11;
    *(undefined8 *)(puVar7 + 0xf8) = 0;
    *(undefined2 *)(puVar7 + 0x120) = 0;
    puVar7[0x122] = 0;
    *puVar7 = 1;
LAB_0331e9d0:
    lVar8 = *(long *)(param_1 + 0x5c0);
  }
  uVar4 = 0;
  uVar6 = 0;
  puVar9 = *(undefined8 **)(puVar10 + 8);
  puVar12 = puVar9;
LAB_0331e9e0:
  puVar7 = *(undefined1 **)(lVar8 + 8);
  puVar7[0x150] = uVar4;
  *(undefined4 *)(puVar7 + 0x128) = 0;
  *(undefined4 *)(puVar7 + 300) = uVar6;
  *(undefined8 **)(puVar7 + 0x138) = puVar9;
  *(undefined8 **)(puVar7 + 0x148) = puVar12;
  *(undefined2 *)(puVar7 + 0x151) = 0;
  *puVar7 = 1;
  if (*(char *)(param_1 + 0x17e1) != cVar2) {
    *(char *)(param_1 + 0x17e1) = cVar2;
    *(undefined1 *)(param_1 + 0x17e2) = 1;
  }
  return;
}

