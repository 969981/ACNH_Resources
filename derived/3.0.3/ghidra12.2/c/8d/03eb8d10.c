
bool FUN_03eb8d10(long *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined **local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  char local_1a4 [31];
  undefined1 local_185;
  undefined **local_180;
  undefined1 *local_178;
  int local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  bVar2 = true;
  uVar4 = 0;
LAB_03eb8dac:
  lVar9 = 0;
  puVar5 = (&PTR_DAT_04b64990)[uVar4];
LAB_03eb8de0:
  lVar6 = 0;
  local_1a4[0] = '\0';
  local_1a8 = 0x20;
  local_178 = local_16c;
  local_6d = 0;
  local_185 = 0;
  local_1b8 = &PTR_LAB_048f9700;
  local_170 = 0x100;
  do {
    if (local_1a4[lVar6] == '\0') {
LAB_03eb8e44:
      iVar3 = (int)lVar6;
joined_r0x03eb8e48:
      if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      goto LAB_03eb8e50;
    }
    if (local_1a4[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03eb8e44;
    }
    if (local_1a4[lVar6 + 2] == '\0') {
      iVar3 = (int)lVar6 + 2;
      goto joined_r0x03eb8e48;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar3 = 0;
LAB_03eb8e50:
  local_1b0 = local_1a4;
  memcpy(local_16c,local_1a4,(long)iVar3);
  local_16c[iVar3] = 0;
  local_180 = &PTR_LAB_048f9a70;
  local_178[(long)local_170 + -1] = 0;
  FUN_038d1270(&local_1b8,"%s_%s%s",local_178,puVar5,
               *(undefined8 *)(PTR_DAT_04bc9778 + lVar9 * 8 + 0x30));
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar10 = 0;
  do {
    if (*(char *)(param_1[1] + uVar10) == '\0') goto LAB_03eb8f14;
    lVar6 = param_1[1] + uVar10;
    if (*(char *)(lVar6 + 1) == '\0') {
      uVar10 = uVar10 + 1;
      goto LAB_03eb8f14;
    }
    if (*(char *)(lVar6 + 2) == '\0') {
      uVar10 = uVar10 + 2;
      goto LAB_03eb8f14;
    }
    uVar10 = uVar10 + 3;
  } while (uVar10 != 0x80001);
  uVar10 = 0;
LAB_03eb8f14:
  (*(code *)local_1b8[3])(&local_1b8);
  lVar6 = 0;
  do {
    iVar3 = (int)uVar10;
    if (local_1b0[lVar6] == '\0') {
LAB_03eb8f64:
      uVar1 = iVar3 - (int)lVar6;
      if ((int)uVar1 < 0) goto LAB_03eb8dd4;
LAB_03eb8f7c:
      uVar10 = (ulong)uVar1;
      if (0 < (int)lVar6) goto LAB_03eb8f88;
      goto LAB_03eb902c;
    }
    if (local_1b0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03eb8f64;
    }
    if (local_1b0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      uVar1 = iVar3 - (int)lVar6;
      if (-1 < (int)uVar1) goto LAB_03eb8f7c;
      goto LAB_03eb8dd4;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if (-1 < iVar3) {
LAB_03eb902c:
    (*(code *)local_1b8[3])(&local_1b8);
LAB_03eb903c:
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar6 = 0;
    do {
      if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_03eb8dc8;
      lVar11 = param_1[1] + lVar6;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03eb8dc8;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03eb8dc8;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03eb8dc8:
    if ((int)lVar6 - (int)uVar10 == 5) {
      return bVar2;
    }
  }
  goto LAB_03eb8dd4;
  while( true ) {
    pcVar7 = local_1b0;
    lVar8 = lVar6;
    while( true ) {
      lVar8 = lVar8 + -1;
      if (*(char *)(lVar11 + uVar10) != *pcVar7) break;
      if ((*(char *)(lVar11 + uVar10) == '\0') ||
         (lVar11 = lVar11 + 1, pcVar7 = pcVar7 + 1, lVar8 == 0)) goto LAB_03eb9010;
    }
    uVar10 = uVar10 - 1;
    if (iVar3 < 1) break;
LAB_03eb8f88:
    lVar11 = param_1[1];
    (*(code *)local_1b8[3])(&local_1b8);
    iVar3 = (int)uVar10;
    if ((char *)(lVar11 + uVar10) == local_1b0) {
LAB_03eb9010:
      if (iVar3 != -1) goto LAB_03eb903c;
      break;
    }
  }
LAB_03eb8dd4:
  lVar9 = lVar9 + 1;
  if (lVar9 == 0xb) goto LAB_03eb8d90;
  goto LAB_03eb8de0;
LAB_03eb8d90:
  bVar2 = uVar4 < 5;
  uVar4 = uVar4 + 1;
  if (uVar4 == 6) {
    return bVar2;
  }
  goto LAB_03eb8dac;
}

