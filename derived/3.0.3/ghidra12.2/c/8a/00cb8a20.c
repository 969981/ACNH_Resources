
void FUN_00cb8a20(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_44;
  
  if (((*(uint *)(DAT_05aec9a0 + 0x330) | *(uint *)(DAT_05aec9a0 + 0x32c)) >> 5 & 1) != 0) {
    return;
  }
  bVar6 = true;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  if (*(long *)PTR_DAT_04bb27d0 != 0) {
    bVar6 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0x380) - 0x25U < 0xfffffffe;
  }
  if (*DAT_055cdb40 != '\0') {
    return;
  }
  bVar1 = false;
  if (DAT_055c11c4 != '\0') {
    bVar1 = bVar6;
  }
  if (bVar1) {
    return;
  }
  if (*DAT_055c10d8 != '\0') {
    return;
  }
  *PTR_DAT_04bc39e8 = 1;
  lVar5 = DAT_05694df8;
  puVar4 = PTR_s_cCircle_04bb7b00;
  if (DAT_05694df8 == 0) {
    return;
  }
  uVar10 = 0;
  do {
    pcVar13 = "";
    if (uVar10 < 0x21) {
      pcVar13 = *(char **)(puVar4 + (ulong)uVar10 * 8 + 0x280);
    }
    (**(code **)(*(long *)(param_1 + 0x108) + 0x18))(param_1 + 0x108);
    pcVar8 = *(char **)(param_1 + 0x110);
    if (pcVar13 == pcVar8) goto LAB_00cb8bd8;
    if (*pcVar13 == *pcVar8) {
      if (*pcVar13 == '\0') goto LAB_00cb8bd8;
      lVar9 = 0x7fffe;
      while( true ) {
        if (pcVar13[1] != pcVar8[1]) break;
        if (pcVar13[1] == '\0') goto LAB_00cb8bd8;
        if (pcVar13[2] != pcVar8[2]) break;
        if (pcVar13[2] == '\0') goto LAB_00cb8bd8;
        if ((lVar9 == 0) || (cVar2 = pcVar13[3], cVar2 != pcVar8[3])) break;
        lVar9 = lVar9 + -3;
        pcVar8 = pcVar8 + 3;
        pcVar13 = pcVar13 + 3;
        if (cVar2 == '\0') goto LAB_00cb8bd8;
      }
    }
    uVar11 = 0x21;
    if ((int)uVar10 < 0x21) {
      uVar11 = uVar10 + 1;
    }
    uVar10 = uVar11;
  } while (uVar11 != 0x21);
  uVar10 = 0;
LAB_00cb8bd8:
  uVar11 = 0;
  do {
    pcVar13 = "";
    if (uVar11 < 0x21) {
      pcVar13 = *(char **)(puVar4 + (ulong)uVar11 * 8 + 0x280);
    }
    (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))(param_1 + 0xd8);
    pcVar8 = *(char **)(param_1 + 0xe0);
    if (pcVar13 == pcVar8) goto LAB_00cb8ca4;
    if (*pcVar13 == *pcVar8) {
      if (*pcVar13 == '\0') goto LAB_00cb8ca4;
      lVar9 = 0x7fffe;
      while( true ) {
        if (pcVar13[1] != pcVar8[1]) break;
        if (pcVar13[1] == '\0') goto LAB_00cb8ca4;
        if (pcVar13[2] != pcVar8[2]) break;
        if (pcVar13[2] == '\0') goto LAB_00cb8ca4;
        if ((lVar9 == 0) || (cVar2 = pcVar13[3], cVar2 != pcVar8[3])) break;
        lVar9 = lVar9 + -3;
        pcVar13 = pcVar13 + 3;
        pcVar8 = pcVar8 + 3;
        if (cVar2 == '\0') goto LAB_00cb8ca4;
      }
    }
    uVar12 = 0x21;
    if ((int)uVar11 < 0x21) {
      uVar12 = uVar11 + 1;
    }
    uVar11 = uVar12;
  } while (uVar12 != 0x21);
  uVar11 = 0;
LAB_00cb8ca4:
  local_44 = 0;
  FUN_00cb8f50(&local_44,param_1 + 0x138);
  lVar9 = *(long *)(lVar5 + 8);
  if (lVar9 == 0) {
LAB_00cb8d28:
    *(undefined4 *)(lVar5 + 0x10) = 1;
  }
  else {
    if (*(int *)(lVar5 + 0x10) == 0) {
      uVar14 = *(undefined4 *)(param_1 + 400);
      uVar15 = *(undefined4 *)(param_1 + 0x168);
      uVar3 = *(undefined1 *)(param_1 + 0x1b8);
      *(uint *)(lVar9 + 0x338) = uVar10;
      *(uint *)(lVar9 + 0x33c) = uVar11;
      *(undefined1 *)(lVar9 + 0x34d) = 0;
      *(undefined1 *)(lVar9 + 0x34c) = uVar3;
      *(undefined4 *)(lVar9 + 0x340) = local_44;
      *(undefined4 *)(lVar9 + 0x344) = uVar14;
      *(undefined4 *)(lVar9 + 0x348) = uVar15;
      lVar9 = *(long *)(lVar5 + 8);
      if (lVar9 == 0) goto LAB_00cb8d28;
    }
    *(undefined1 *)(lVar9 + 0x36c) = 0;
    plVar7 = *(long **)(lVar5 + 8);
    *(undefined4 *)(lVar5 + 0x10) = 1;
    if ((plVar7 != (long *)0x0) && ((int)plVar7[0x36] == 1)) {
      (**(code **)(*plVar7 + 0xa8))();
    }
  }
  return;
}

