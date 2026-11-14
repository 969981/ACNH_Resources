
/* WARNING: Removing unreachable block (ram,0x01bd94a4) */

void FUN_01bd9380(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined *local_70;
  undefined1 *local_68;
  
  (**(code **)(*param_2 + 0x18))();
  puVar3 = PTR_DAT_04bb2020;
  lVar6 = 0;
  do {
    if (*(char *)(param_2[1] + lVar6) == '\0') {
LAB_01bd9400:
      uVar10 = (int)lVar6 + 1;
      goto LAB_01bd9404;
    }
    lVar7 = param_2[1] + lVar6;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01bd9400;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01bd9400;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  uVar10 = 1;
LAB_01bd9404:
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = &DAT_04178198;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar11 = (char *)param_2[1];
  lVar6 = 0;
  do {
    if (pcVar11[lVar6] == '\0') {
LAB_01bd9474:
      iVar5 = (int)lVar6;
joined_r0x01bd9474:
      if (iVar5 < 0) {
        uVar9 = 0;
        goto LAB_01bd9560;
      }
      break;
    }
    if (pcVar11[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01bd9474;
    }
    if (pcVar11[lVar6 + 2] == '\0') {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x01bd9474;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if (*pcVar11 == '\0') {
    uVar9 = 1;
  }
  else {
    lVar6 = 0;
    do {
      (**(code **)(local_70 + 0x18))(&local_70);
      uVar8 = 0;
      bVar4 = true;
      cVar2 = *pcVar11;
      do {
        if (local_68[uVar8] == '\0') break;
        if (local_68[uVar8] == cVar2) {
          if (bVar4) goto LAB_01bd9550;
          break;
        }
        if (local_68[uVar8 + 1] == '\0') break;
        if (local_68[uVar8 + 1] == cVar2) goto LAB_01bd9550;
        if (local_68[uVar8 + 2] == '\0') break;
        if (local_68[uVar8 + 2] == cVar2) goto LAB_01bd9550;
        bVar4 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      lVar6 = lVar6 + 1;
      pcVar11 = (char *)(param_2[1] + lVar6);
    } while (*pcVar11 != '\0');
LAB_01bd9550:
    uVar9 = (int)lVar6 + 1;
  }
LAB_01bd9560:
  if (uVar9 == uVar10) {
    lVar6 = *(long *)(PTR_PTR_04bb2238 + 8);
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = lVar6;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = param_2[1];
    lVar6 = 0;
    do {
      if (*(char *)(lVar7 + lVar6) == '\0') goto LAB_01bd95dc;
      if (*(char *)(lVar7 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01bd95dc;
      }
      if (*(char *)(lVar7 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01bd95dc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01bd95dc:
    lVar1 = *(long *)(PTR_PTR_04bb2238 + 8);
    if ((int)uVar9 <= (int)lVar6 && -1 < (int)uVar9) {
      lVar1 = lVar7 + (ulong)uVar9;
    }
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = lVar1;
  }
  return;
}

