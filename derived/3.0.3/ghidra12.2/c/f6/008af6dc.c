
void FUN_008af6dc(long param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_45;
  
  pcVar1 = (char *)(param_1 + 0x37fac);
  if (*pcVar1 != '\0') {
    FUN_008ca5c0(param_1);
  }
  bVar7 = FUN_008caea4(param_1);
  *(byte *)(param_1 + 0x37fb3) = bVar7 & 1;
  if ((bVar7 & 1) == 0) {
    if (*(uint *)(param_1 + 0x410) == 0x1e) {
      uVar10 = 0x43;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x30964);
      puVar3 = &DAT_04ced1c0 + uVar5;
      if (3 < uVar5) {
        puVar3 = &DAT_04ced1c0;
      }
      puVar4 = &DAT_04ced1d0 + uVar5;
      if (5 < uVar5) {
        puVar4 = &DAT_04ced1d0;
      }
      if ((*(uint *)(param_1 + 0x410) & 0xfffffffe) == 0x1a) {
        puVar3 = puVar4;
      }
      uVar10 = *puVar3;
    }
  }
  else {
    uVar10 = 5;
  }
  if (*(int *)(param_1 + 0x358) < 2) {
    *(code **)(param_1 + 0x37f28) = FUN_008cb1ac;
    *(undefined8 *)(param_1 + 0x37f30) = 0;
    *(long *)(param_1 + 0x37f20) = param_1 + 0x31650;
    *(undefined ***)(param_1 + 0x37f18) = &PTR_LAB_04925b80;
    *(long *)(param_1 + 0x37f40) = param_1 + 0x31650;
    *(undefined1 **)(param_1 + 0x37f48) = &LAB_008cb5b0;
    *(undefined8 *)(param_1 + 0x37f50) = 0;
    *(undefined ***)(param_1 + 0x37f38) = &PTR_LAB_04925bd0;
  }
  else if (*(int *)(param_1 + 0x30964) == 0) {
    *(long *)(param_1 + 0x37f20) = param_1;
    *(undefined1 **)(param_1 + 0x37f28) = &LAB_008cb714;
    *(undefined8 *)(param_1 + 0x37f30) = 0;
    *(undefined ***)(param_1 + 0x37f18) = &PTR_LAB_04925c20;
  }
  *(undefined8 *)(param_1 + 0x30958) = 0;
  *(undefined4 *)(param_1 + 0x38018) = 0;
  *(undefined1 *)(param_1 + 0x37fae) = 1;
  if (DAT_05abff60 == 0) {
LAB_008af8cc:
    uVar2 = 0;
    if (*pcVar1 != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x307f4);
    }
    FUN_008c4aa0(param_1,uVar10,uVar2);
    return;
  }
  if (DAT_05aed670 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar8 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar12 + 7) != -0x17df00c3) goto LAB_008af8cc;
  uVar5 = *(uint *)(param_1 + 0x30964);
  if ((*(uint *)(param_1 + 0x410) & 0xfffffffe) == 0x1a) {
    puVar9 = &DAT_04ced348;
    puVar12 = &DAT_04ced348 + (ulong)uVar5 * 2;
    bVar6 = 5 < uVar5;
  }
  else {
    puVar9 = &DAT_04ced308;
    puVar12 = &DAT_04ced308 + (ulong)uVar5 * 2;
    bVar6 = 3 < uVar5;
  }
  if (bVar6) {
    puVar12 = puVar9;
  }
  local_45 = 0;
  local_88 = 0x40;
  local_7c = 0;
  local_84 = 0x746c756166654463;
  puStack_90 = &local_84;
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  if (*pcVar1 == '\0') goto LAB_008af9a8;
  uVar5 = *(uint *)(param_1 + 0x307f4);
  if (uVar5 == 0x2a) {
    ppuVar11 = (undefined **)(param_1 + 0x30780);
    (**(code **)(*(long *)(param_1 + 0x30778) + 0x18))((long *)(param_1 + 0x30778));
LAB_008af99c:
    puVar9 = (undefined8 *)*ppuVar11;
  }
  else {
    if (uVar5 < 0x2b) {
      ppuVar11 = &PTR_s_cDefault_04926690 + uVar5;
      goto LAB_008af99c;
    }
    puVar9 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_98,puVar9);
LAB_008af9a8:
  FUN_008bf770(param_1,puVar12,&local_98);
  return;
}

