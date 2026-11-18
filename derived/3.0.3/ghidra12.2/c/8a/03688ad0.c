
uint FUN_03688ad0(uint param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *local_80;
  int local_78;
  char local_74 [31];
  undefined1 local_55;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [4];
  
  puVar3 = PTR_DAT_04bc2558;
  if (0x14 < param_1) {
    return param_1;
  }
  local_55 = 0;
  pcVar4 = *(char **)(PTR_DAT_04bc2558 + (ulong)param_1 * 8 + 0x150);
  local_78 = 0x20;
  local_4c = param_1;
  local_80 = local_74;
  local_48 = param_1;
  if (local_74 == pcVar4) {
    lVar7 = 0x1f;
  }
  else {
    lVar7 = 0;
    do {
      if (pcVar4[lVar7] == '\0') {
LAB_03688b7c:
        iVar6 = (int)lVar7;
joined_r0x03688b80:
        if (0x1f < iVar6) {
          iVar6 = 0x1f;
        }
        goto LAB_03688b88;
      }
      if (pcVar4[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03688b7c;
      }
      if (pcVar4[lVar7 + 2] == '\0') {
        iVar6 = (int)lVar7 + 2;
        goto joined_r0x03688b80;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    iVar6 = 0;
LAB_03688b88:
    memcpy(local_74,pcVar4,(long)iVar6);
    local_74[iVar6] = '\0';
    lVar7 = (long)local_78 + -1;
    pcVar4 = local_80;
  }
  iVar6 = local_78;
  pcVar10 = local_80;
  puVar2 = PTR_DAT_04bb2028;
  lVar8 = 0;
  local_88 = PTR_DAT_04bb2028 + 0x10;
  pcVar4[lVar7] = '\0';
  while (local_80[lVar8] != '\0') {
    if (local_80[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      break;
    }
    if (local_80[lVar8 + 2] == '\0') {
      iVar5 = (int)lVar8 + 2;
      goto joined_r0x03688bf8;
    }
    lVar8 = lVar8 + 3;
    if (lVar8 == 0x80001) {
      return param_1;
    }
  }
  iVar5 = (int)lVar8;
joined_r0x03688bf8:
  if (iVar5 < 9) {
    return param_1;
  }
  uVar9 = (ulong)(iVar5 - 9);
  if (pcVar4[uVar9] != 'C') {
    return param_1;
  }
  if (pcVar4[uVar9 + 1] != 'u') {
    return param_1;
  }
  if (pcVar4[uVar9 + 2] != 's') {
    return param_1;
  }
  if (pcVar4[uVar9 + 3] != 't') {
    return param_1;
  }
  if (pcVar4[uVar9 + 4] != 'o') {
    return param_1;
  }
  if (pcVar4[uVar9 + 5] != 'm') {
    return param_1;
  }
  if (pcVar4[uVar9 + 6] != 'e') {
    return param_1;
  }
  if (pcVar4[uVar9 + 7] != 'r') {
    return param_1;
  }
  if (pcVar4[uVar9 + 8] != 'V') {
    return param_1;
  }
  local_44[0] = 0;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "CustomerV";
  pcStack_a0 = "Customer";
  local_98 = local_a8;
  (**(code **)(puVar2 + 0x28))(&local_88);
  pcVar4 = local_80;
  (**(code **)(local_88 + 0x18))(&local_88);
  lVar7 = 0;
  do {
    if (local_80[lVar7] == '\0') goto LAB_03688d20;
    if (local_80[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03688d20;
    }
    if (local_80[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03688d20;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03688d20:
  FUN_038d0770(pcVar10,0,iVar6,pcVar4,lVar7,&local_98,&local_a8,local_44);
  uVar11 = 0;
  do {
    pcVar4 = "";
    if (uVar11 < 0x15) {
      pcVar4 = *(char **)(puVar3 + (ulong)uVar11 * 8 + 0x150);
    }
    (**(code **)(local_88 + 0x18))(&local_88);
    if (pcVar4 == local_80) {
LAB_03688e00:
      local_4c = uVar11;
      break;
    }
    if (*pcVar4 == *local_80) {
      if (*pcVar4 == '\0') goto LAB_03688e00;
      lVar7 = 0x7fffe;
      pcVar10 = local_80;
      while( true ) {
        if (pcVar4[1] != pcVar10[1]) break;
        if (pcVar4[1] == '\0') goto LAB_03688e00;
        if (pcVar4[2] != pcVar10[2]) break;
        if (pcVar4[2] == '\0') goto LAB_03688e00;
        if ((lVar7 == 0) || (cVar1 = pcVar4[3], cVar1 != pcVar10[3])) break;
        lVar7 = lVar7 + -3;
        pcVar10 = pcVar10 + 3;
        pcVar4 = pcVar4 + 3;
        if (cVar1 == '\0') goto LAB_03688e00;
      }
    }
    uVar12 = 0x15;
    if ((int)uVar11 < 0x15) {
      uVar12 = uVar11 + 1;
    }
    uVar11 = uVar12;
  } while (uVar12 != 0x15);
  if (0x14 < local_4c) {
    local_4c = param_1;
  }
  return local_4c;
}

