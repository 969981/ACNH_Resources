
bool FUN_03eb8920(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined *local_1a0;
  char *local_198;
  undefined4 local_190;
  char local_18c [31];
  undefined1 local_16d;
  undefined **local_168;
  char *local_160;
  int local_158;
  char acStack_154 [255];
  undefined1 local_55;
  
  puVar1 = PTR_DAT_04bb4eb8;
  local_16d = 0;
  local_190 = 0x20;
  local_198 = local_18c;
  local_18c[0] = '\0';
  local_1a0 = PTR_DAT_04bb2028 + 0x10;
  piVar5 = *(int **)PTR_DAT_04bb4eb8;
  if ((piVar5 == (int *)0x0) || ((char)piVar5[8] == '\0')) {
    uVar9 = FUN_038ceb30();
    piVar5 = *(int **)puVar1;
    uVar9 = uVar9 & 0xffffffff;
    if (piVar5 != (int *)0x0) goto LAB_03eb89b0;
LAB_03eb89dc:
    uVar2 = FUN_038ced70();
  }
  else {
    uVar9 = (ulong)(uint)(*piVar5 << 1);
    if (0x1f < (uint)(*piVar5 << 1)) {
      uVar9 = 0;
    }
    uVar9 = (ulong)(byte)(&DAT_04058440)[uVar9];
LAB_03eb89b0:
    if ((char)piVar5[8] == '\0') goto LAB_03eb89dc;
    uVar6 = (ulong)(uint)(*piVar5 << 1) | 1;
    if (0x1f < (uint)uVar6) {
      uVar6 = 0;
    }
    uVar2 = (uint)(byte)(&DAT_04058440)[uVar6];
  }
  local_158 = 0x100;
  local_55 = 0;
  local_168 = &PTR_LAB_04914140;
  local_160 = acStack_154;
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  pcVar8 = local_198;
  if (acStack_154 != local_198) {
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar7 = 0;
    do {
      if (local_198[lVar7] == '\0') goto LAB_03eb8a8c;
      if (local_198[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03eb8a8c;
      }
      if (local_198[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03eb8a8c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03eb8a8c:
    iVar11 = (int)lVar7;
    if (local_158 <= (int)lVar7) {
      iVar11 = local_158 + -1;
    }
    memcpy(acStack_154,pcVar8,(long)iVar11);
    acStack_154[iVar11] = '\0';
  }
  local_168 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  local_160[(long)local_158 + -1] = '\0';
  if ((uint)uVar9 < 6) {
    puVar3 = (undefined8 *)(&PTR_DAT_04b64990)[uVar9];
    if (10 < uVar2) goto LAB_03eb8b1c;
LAB_03eb8af0:
    puVar4 = (undefined8 *)(&PTR_DAT_04b20d30)[uVar2];
  }
  else {
    puVar3 = &DAT_0407ebb1;
    if (uVar2 < 0xb) goto LAB_03eb8af0;
LAB_03eb8b1c:
    puVar4 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_1a0,"%s_%s%s",local_160,puVar3,puVar4);
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar9 = 0;
  do {
    if (*(char *)(param_1[1] + uVar9) == '\0') goto LAB_03eb8b8c;
    lVar7 = param_1[1] + uVar9;
    if (*(char *)(lVar7 + 1) == '\0') {
      uVar9 = uVar9 + 1;
      goto LAB_03eb8b8c;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      uVar9 = uVar9 + 2;
      goto LAB_03eb8b8c;
    }
    uVar9 = uVar9 + 3;
  } while (uVar9 != 0x80001);
  uVar9 = 0;
LAB_03eb8b8c:
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  lVar7 = 0;
  while (iVar11 = (int)uVar9, local_198[lVar7] != '\0') {
    if (local_198[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      break;
    }
    if (local_198[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      uVar2 = iVar11 - (int)lVar7;
      if ((int)uVar2 < 0) {
        return false;
      }
      goto LAB_03eb8bf0;
    }
    lVar7 = lVar7 + 3;
    if (lVar7 == 0x80001) goto code_r0x03eb8bcc;
  }
  uVar2 = iVar11 - (int)lVar7;
  if ((int)uVar2 < 0) {
    return false;
  }
LAB_03eb8bf0:
  uVar9 = (ulong)uVar2;
  if ((int)lVar7 < 1) goto LAB_03eb8c74;
  while( true ) {
    lVar12 = param_1[1];
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    iVar11 = (int)uVar9;
    if ((char *)(lVar12 + uVar9) == local_198) break;
    pcVar8 = local_198;
    lVar10 = lVar7;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (*(char *)(lVar12 + uVar9) != *pcVar8) break;
      if ((*(char *)(lVar12 + uVar9) == '\0') ||
         (lVar12 = lVar12 + 1, pcVar8 = pcVar8 + 1, lVar10 == 0)) goto LAB_03eb8c64;
    }
    uVar9 = uVar9 - 1;
    if (iVar11 < 1) {
      return false;
    }
  }
LAB_03eb8c64:
  if (iVar11 == -1) {
    return false;
  }
LAB_03eb8c84:
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_03eb8cdc;
    lVar12 = param_1[1] + lVar7;
    if (*(char *)(lVar12 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03eb8cdc;
    }
    if (*(char *)(lVar12 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03eb8cdc;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03eb8cdc:
  return (int)lVar7 - (int)uVar9 == 5;
code_r0x03eb8bcc:
  if (iVar11 < 0) {
    return false;
  }
LAB_03eb8c74:
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  goto LAB_03eb8c84;
}

