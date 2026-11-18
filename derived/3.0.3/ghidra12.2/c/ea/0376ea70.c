
uint FUN_0376ea70(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  undefined **local_50;
  char *local_48;
  int local_40;
  char local_3c [7];
  undefined1 local_35;
  
  local_35 = 0;
  pcVar6 = local_3c;
  local_40 = 8;
  local_3c[0] = '\0';
  local_50 = &PTR_LAB_04908da0;
  local_48 = pcVar6;
  if ((DAT_0545a430 != 0) &&
     (plVar8 = *(long **)(DAT_0545a438 + (long)(DAT_0545a430 + -1) * 8), *(char *)plVar8[1] != '\0')
     ) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pcVar7 = (char *)plVar8[1];
    if (pcVar6 == pcVar7) goto LAB_0376eb7c;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar4 = 0;
    do {
      if (*(char *)(plVar8[1] + lVar4) == '\0') goto LAB_0376eb50;
      lVar1 = plVar8[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0376eb50;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0376eb50;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0376eb50:
    iVar2 = (int)lVar4;
    if (local_40 <= (int)lVar4) {
      iVar2 = local_40 + -1;
    }
    memcpy(pcVar6,pcVar7,(long)iVar2);
    pcVar6 = pcVar6 + iVar2;
  }
  *pcVar6 = '\0';
LAB_0376eb7c:
  (*(code *)local_50[3])(&local_50);
  (*(code *)local_50[3])(&local_50);
  pcVar6 = local_48;
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar7 = (char *)param_1[1];
  if (pcVar6 != pcVar7) {
    if (*local_48 != *pcVar7) {
      return 0;
    }
    if (*local_48 != '\0') {
      local_48 = local_48 + 2;
      uVar3 = 0;
      do {
        uVar5 = uVar3;
        if (uVar5 == 0x80000) goto LAB_0376ec50;
        if (local_48[uVar5 - 1] != pcVar7[uVar5 + 1]) {
          local_48 = (char *)0x0;
          goto LAB_0376ec50;
        }
        if (local_48[uVar5 - 1] == '\0') goto LAB_0376ec24;
        if (local_48[uVar5] != pcVar7[uVar5 + 2]) {
          local_48 = (char *)0x0;
          uVar5 = uVar5 | 1;
          goto LAB_0376ec50;
        }
        uVar3 = uVar5 + 2;
      } while (local_48[uVar5] != '\0');
      uVar5 = uVar5 + 1;
LAB_0376ec24:
      local_48 = (char *)0x1;
LAB_0376ec50:
      return (uint)(uVar5 < 0x80000) & (uint)local_48;
    }
  }
  return 1;
}

