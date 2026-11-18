
void FUN_034464c8(long param_1,byte *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  puVar6 = PTR_DAT_04bc3a80;
  puVar5 = PTR_DAT_04bb32e0;
  bVar13 = *param_2;
  bVar12 = *PTR_DAT_04bb32e0;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  if (bVar13 != bVar12) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "MainmenuTips";
    local_60 = puVar1;
    iVar8 = FUN_0274bce0(param_2,&local_60);
    if (iVar8 == 0) goto LAB_03446568;
    pcStack_68 = "RejectedTips";
    local_70 = puVar1;
    iVar8 = FUN_0274bce0(param_2,&local_70);
    if (iVar8 != 0) goto LAB_03446568;
    if (*(int *)(puVar6 + 0x38) == 0x756a8ab7) {
      *(bool *)(param_1 + 0x49) = *(int *)(PTR_DAT_04bc3a88 + 0x38) == 0x6622bd46;
      goto LAB_03446584;
    }
    if (*(int *)(puVar6 + 0x38) != 0x41f3ce7) {
      *(undefined1 *)(param_1 + 0x49) = 0;
      goto LAB_03446584;
    }
    if (*(int *)(PTR_DAT_04bc3a88 + 0x38) != 0x6622bd46) {
      bVar7 = *(int *)(PTR_DAT_04bc3a88 + 0x38) == 0x756a8ab7;
      goto LAB_0344656c;
    }
    bVar7 = false;
    *(undefined1 *)(param_1 + 0x49) = 1;
    goto LAB_034465f0;
  }
LAB_03446568:
  bVar7 = false;
LAB_0344656c:
  iVar8 = *(int *)(puVar6 + 0x38);
  *(bool *)(param_1 + 0x49) = bVar7;
  if (iVar8 == 0x41f3ce7) {
LAB_034465ec:
    bVar7 = false;
  }
  else {
LAB_03446584:
    puVar1 = PTR_DAT_04bb2020;
    bVar13 = *param_2;
    bVar12 = *puVar5;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    if (bVar13 == bVar12) goto LAB_034465ec;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "MainmenuTips";
    local_60 = puVar2;
    iVar8 = FUN_0274bce0(param_2,&local_60);
    if (iVar8 == 0) goto LAB_034465ec;
    pcStack_68 = "RejectedTips";
    local_70 = puVar2;
    iVar8 = FUN_0274bce0(param_2,&local_70);
    if (iVar8 != 0) goto LAB_034465ec;
    iVar8 = *(int *)(puVar6 + 0x38);
    if (iVar8 == 0x756a8ab7) {
      bVar7 = *(int *)(PTR_DAT_04bc3a88 + 0x38) == 0x6622bd46 ||
              *(int *)(PTR_DAT_04bc3a88 + 0x38) == 0x41f3ce7;
    }
    else {
      if (iVar8 == 0x43080996) {
        if (*(int *)(PTR_DAT_04bc3a88 + 0x38) == 0x6622bd46) {
          bVar7 = true;
          goto LAB_034465f0;
        }
        if (*(int *)(PTR_DAT_04bc3a88 + 0x38) != 0x41f3ce7) goto LAB_034465ec;
        local_60 = puVar1 + 0x10;
        pcStack_58 = "EntryGame";
        iVar9 = FUN_02743000(&local_60);
        iVar8 = *(int *)(puVar6 + 0x38);
        bVar7 = iVar9 != 0;
      }
      else {
        bVar7 = false;
      }
      if ((iVar8 == 0x6622bd46) && (*(int *)(PTR_DAT_04bc3a88 + 0x38) == 0x41f3ce7)) {
        bVar7 = true;
      }
    }
  }
LAB_034465f0:
  *(bool *)(param_1 + 0x48) = bVar7;
  *(long **)(param_1 + 0x50) = param_3;
  bVar13 = *param_2;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  *(byte *)(param_1 + 0x58) = bVar13;
  uVar11 = *(uint *)(param_1 + 8);
  if ((uVar11 == 0xffffffff) && (*(char *)(param_1 + 0x20) != '\0')) {
    puVar17 = (undefined1 *)(param_1 + 0x21);
    *puVar17 = 1;
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    uVar11 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar11;
    if (uVar11 != 0xffffffff) {
      uVar15 = *(uint *)(param_1 + 0x28);
      lVar14 = *(long *)(param_1 + 0x30);
      uVar3 = uVar11;
      if (uVar15 <= uVar11) {
        uVar3 = 0;
      }
      puVar16 = *(undefined8 **)(lVar14 + (long)(int)uVar3 * 0x40);
      if (puVar16 != (undefined8 *)0x0) {
        (*(code *)*puVar16)();
        uVar11 = *(uint *)(param_1 + 8);
        goto LAB_03446678;
      }
      *puVar17 = 0;
      goto LAB_034466f0;
    }
    *puVar17 = 0;
  }
  else {
LAB_03446678:
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (uVar11 != 0xffffffff) {
      uVar15 = *(uint *)(param_1 + 0x28);
      lVar14 = *(long *)(param_1 + 0x30);
LAB_034466f0:
      if (uVar15 <= uVar11) {
        uVar11 = 0;
      }
      lVar14 = *(long *)(lVar14 + (long)(int)uVar11 * 0x40);
      if ((lVar14 != 0) && ((**(code **)(lVar14 + 8))(), *(char *)(param_1 + 0x21) != '\0'))
      goto LAB_03446724;
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
LAB_03446724:
  bVar13 = *puVar5;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  *(byte *)(param_1 + 0x58) = bVar13;
  if ((param_3 == (long *)0x0) ||
     (uVar10 = (**(code **)(*param_3 + 0x30))(param_3), (uVar10 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}

