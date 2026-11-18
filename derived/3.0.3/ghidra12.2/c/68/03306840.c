
void FUN_03306840(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined *local_d0;
  char *pcStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined1 local_b0;
  undefined *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  char *pcStack_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar14 = *(long *)(param_1 + 0x510);
  lVar9 = *(long *)(lVar14 + 0x38);
  lVar12 = *(long *)(lVar9 + 0x78);
  *(undefined8 *)(lVar12 + 0xc) = 0;
  *(undefined4 *)(lVar12 + 0x30) = 0;
  plVar10 = *(long **)(lVar9 + 0x70);
  if (0 < (int)plVar10[2]) {
    lVar9 = 0;
    do {
      iVar6 = 0;
      if ((int)plVar10[1] <= (int)lVar9 + *(int *)((long)plVar10 + 0xc)) {
        iVar6 = (int)plVar10[1];
      }
      lVar12 = lVar9 - iVar6;
      lVar9 = lVar9 + 1;
      *(undefined4 *)(*plVar10 + (lVar12 + *(int *)((long)plVar10 + 0xc)) * 4) = 0xffffffff;
    } while ((int)lVar9 < (int)plVar10[2]);
  }
  *(undefined8 *)((long)plVar10 + 0x24) = 0;
  FUN_03293ed0(*(undefined8 *)(*(long *)(lVar14 + 0x28) + 0x18));
  lVar9 = *(long *)(lVar14 + 0x30);
  *(undefined4 *)(lVar9 + 0x80) = 0;
  if ((*(char *)(lVar9 + 0x88) != '\0') && (*(long *)(lVar9 + 8) != 0)) {
    FUN_032c8150(0,*(long *)(lVar9 + 8),0,0);
  }
  puVar4 = PTR_DAT_04bb2da0;
  puVar2 = PTR_DAT_04bb2120;
  iVar6 = 0;
  switch(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x1050)) {
  case 0:
  case 3:
    uVar3 = *(uint *)(param_1 + 0x520);
    lVar9 = 8;
    puVar16 = PTR_DAT_04bc8e78 + 0x10;
    puVar1 = PTR_DAT_04bc8e68 + 0x10;
    iVar15 = 0;
    do {
      puStack_b8 = puVar4;
      local_b0 = 0;
      pcStack_c8 = puVar2;
      if (*(char **)((long)&PTR_s_SwkbdAddKeytop_JPQwerty_04b1da50 + lVar9) != (char *)0x0) {
        pcStack_c8 = *(char **)((long)&PTR_s_SwkbdAddKeytop_JPQwerty_04b1da50 + lVar9);
      }
      local_d0 = puVar1;
      local_c0 = puVar16;
      iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
      bVar5 = (ulong)uVar3 * 8 != lVar9;
      lVar9 = lVar9 + 8;
      if (bVar5) {
        iVar6 = iVar15;
      }
      iVar15 = iVar6;
    } while (lVar9 != 0x98);
    break;
  case 2:
    iVar15 = *(int *)(param_1 + 0x524);
    local_b0 = 0;
    puVar2 = PTR_DAT_04bc8e78 + 0x10;
    puVar16 = PTR_DAT_04bc8e68 + 0x10;
    puStack_b8 = PTR_DAT_04bb2da0;
    pcStack_c8 = "SwkbdSelKeytop_ASCIIQwerty";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 1) {
      iVar6 = 0;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdSelKeytop_ASCIIAzerty";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar7 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 2) {
      iVar7 = iVar6;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdSelKeytop_ASCIIQwertz";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 3) {
      iVar8 = iVar7;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdSelKeytop_ASCIIQzerty";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    bVar5 = iVar15 == 4;
    goto LAB_03306e28;
  case 4:
    iVar15 = *(int *)(param_1 + 0x528);
    local_b0 = 0;
    puVar2 = PTR_DAT_04bc8e78 + 0x10;
    puVar16 = PTR_DAT_04bc8e68 + 0x10;
    puStack_b8 = PTR_DAT_04bb2da0;
    pcStack_c8 = "SwkbdAddKeytop_EUEnglish";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 1) {
      iVar6 = 0;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_USEnglish";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 2) {
      iVar8 = iVar6;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EUFrench";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 3) {
      iVar6 = iVar8;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_USFrench";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 4) {
      iVar8 = iVar6;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EUGerman";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 5) {
      iVar6 = iVar8;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EUSpanish";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 6) {
      iVar8 = iVar6;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_USSpanish";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 7) {
      iVar6 = iVar8;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EUItalianQwerty";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 8) {
      iVar8 = iVar6;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EUItalianQzerty";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 9) {
      iVar6 = iVar8;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EUDutch";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 10) {
      iVar8 = iVar6;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EUPortuguese";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 0xb) {
      iVar6 = iVar8;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EURussian";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 0xc) {
      iVar8 = iVar6;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_EURussianLatin";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar7 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 0xd) {
      iVar7 = iVar8;
    }
    local_b0 = 0;
    puStack_b8 = puVar4;
    pcStack_c8 = "SwkbdAddKeytop_Signs";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    if (iVar15 != 0xe) {
      iVar6 = iVar7;
    }
    break;
  case 5:
    iVar15 = *(int *)(param_1 + 0x52c);
    pcStack_c8 = "SwkbdAddKeytop_ZHSimplifiedChinese";
    goto LAB_03306de4;
  case 6:
    iVar15 = *(int *)(param_1 + 0x530);
    pcStack_c8 = "SwkbdAddKeytop_ZHTraditionalChinese";
    goto LAB_03306de4;
  case 7:
    iVar15 = *(int *)(param_1 + 0x534);
    pcStack_c8 = "SwkbdAddKeytop_KOKorean";
LAB_03306de4:
    local_b0 = 0;
    puVar16 = PTR_DAT_04bc8e68 + 0x10;
    puVar2 = PTR_DAT_04bc8e78 + 0x10;
    puStack_b8 = PTR_DAT_04bb2da0;
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar8 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    puStack_b8 = puVar4;
    if (iVar15 != 1) {
      iVar8 = 0;
    }
    local_b0 = 0;
    pcStack_c8 = "SwkbdAddKeytop_Signs";
    local_d0 = puVar16;
    local_c0 = puVar2;
    iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
    bVar5 = iVar15 == 2;
LAB_03306e28:
    if (!bVar5) {
      iVar6 = iVar8;
    }
    break;
  case 8:
  case 9:
    uVar3 = *(uint *)(param_1 + 0x538);
    lVar9 = 8;
    puVar16 = PTR_DAT_04bc8e78 + 0x10;
    puVar1 = PTR_DAT_04bc8e68 + 0x10;
    iVar15 = 0;
    do {
      puStack_b8 = puVar4;
      local_b0 = 0;
      pcStack_c8 = puVar2;
      if (*(char **)((long)&PTR_s_SwkbdAddKeytop_JPQwerty_04b1dae8 + lVar9) != (char *)0x0) {
        pcStack_c8 = *(char **)((long)&PTR_s_SwkbdAddKeytop_JPQwerty_04b1dae8 + lVar9);
      }
      local_d0 = puVar1;
      local_c0 = puVar16;
      iVar6 = FUN_032bc9fc(*(undefined8 *)(param_1 + 0x510),&local_d0);
      bVar5 = (ulong)uVar3 * 8 != lVar9;
      lVar9 = lVar9 + 8;
      if (bVar5) {
        iVar6 = iVar15;
      }
      iVar15 = iVar6;
    } while (lVar9 != 0xb0);
  }
  lVar9 = *(long *)(param_1 + 0x510);
  lVar12 = *(long *)(lVar9 + 0x38);
  if ((*(char *)(lVar12 + 0x88) == '\0') &&
     (plVar10 = *(long **)(lVar12 + 0x78), (int)plVar10[2] != 0)) {
    iVar15 = 0;
    do {
      iVar8 = 0;
      if ((int)plVar10[1] <= iVar15 + *(int *)((long)plVar10 + 0xc)) {
        iVar8 = (int)plVar10[1];
      }
      iVar8 = iVar15 + (*(int *)((long)plVar10 + 0xc) - iVar8);
      iVar15 = iVar15 + 1;
      *(undefined1 *)(*plVar10 + (long)iVar8 * 0x38) = 0;
    } while (iVar15 != (int)plVar10[2]);
  }
  plVar10 = *(long **)(lVar12 + 0x78);
  iVar15 = *(int *)((long)plVar10 + 0xc) + iVar6;
  iVar8 = 0;
  if ((int)plVar10[1] <= iVar15) {
    iVar8 = (int)plVar10[1];
  }
  *(undefined1 *)(*plVar10 + (long)(iVar15 - iVar8) * 0x38) = 1;
  *(int *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x78) + 0x30) = iVar6;
  FUN_032bc960(*(undefined8 *)(param_1 + 0x510));
  lVar9 = param_1 + 0x540;
  lVar14 = *(long *)(param_1 + 0x540);
  lVar12 = *(long *)PTR_DAT_04bc8ee8;
  if (lVar14 == 0) {
    lVar14 = *(long *)(param_1 + 0x550);
    if (lVar14 != 0) {
      lVar13 = *(long *)(param_1 + 0x558);
      goto LAB_03306f04;
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 0x558);
    if (*(long *)(lVar14 + 8) == lVar9) {
      if (lVar13 == 0) {
        *(undefined8 *)(lVar14 + 8) = 0;
      }
      else {
        *(long *)(lVar14 + 8) = lVar13;
        *(undefined8 *)(*(long *)(param_1 + 0x558) + 0x10) = 0;
      }
      goto LAB_03306f34;
    }
    lVar14 = *(long *)(param_1 + 0x550);
LAB_03306f04:
    *(long *)(lVar14 + 0x18) = lVar13;
  }
  if (*(long *)(param_1 + 0x558) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x558) + 0x10) = *(undefined8 *)(param_1 + 0x550);
  }
LAB_03306f34:
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(long *)(param_1 + 0x540) = lVar12 + 8;
  if (*(long *)(lVar12 + 0x10) == 0) {
    *(long *)(lVar12 + 0x10) = lVar9;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x10);
    do {
      lVar14 = lVar12;
      lVar12 = *(long *)(lVar14 + 0x18);
    } while (*(long *)(lVar14 + 0x18) != 0);
    *(long *)(lVar14 + 0x18) = lVar9;
    *(long *)(param_1 + 0x550) = lVar14;
  }
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,4);
  lVar9 = *(long *)(param_1 + 0x510);
  *(byte *)(param_1 + 0x708) = *(byte *)(param_1 + 0x708) | 0x10;
  puVar4 = PTR_PTR_04bb2238;
  pcVar17 = *(char **)(PTR_PTR_04bb2238 + 8);
  puVar2 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_a0 = "SwkbdInputMode_Title";
  local_a8 = puVar2;
  FUN_032bfe14(*(undefined8 *)(lVar9 + 0x30),&local_a8);
  pcStack_78 = "Cmn_DlgBtmBtnSelBoxMulti_Decide";
  if (*pcVar17 != '\0') {
    pcStack_78 = pcVar17;
  }
  local_98 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x58);
  uStack_88 = *(undefined8 *)(puVar4 + 8);
  plVar10 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar10 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  local_90 = puVar2;
  local_80 = puVar2;
  (**(code **)(*plVar10 + 0x18))(auStack_70,plVar10,&local_80,&local_90);
  local_d0 = PTR_DAT_04bb8610 + 0x10;
  pcStack_c8 = (char *)local_68;
  FUN_032d67f0(&local_98,&local_d0);
  puVar11 = *(undefined8 **)(param_1 + 0x508);
  if ((param_2 & 1) == 0) {
    if (*(int *)(puVar11 + 6) == 4) {
      puVar11[1] = *(undefined8 *)(param_1 + 0x510);
      *(undefined4 *)(puVar11 + 6) = 8;
    }
  }
  else if (*(int *)(puVar11 + 6) == 0) {
    *puVar11 = *(undefined8 *)(param_1 + 0x510);
    puVar2 = PTR_DAT_04bc9190;
    *(undefined4 *)(puVar11 + 6) = 1;
    **(long **)puVar2 = (long)puVar11;
  }
  return;
}

