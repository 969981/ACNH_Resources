
bool FUN_019da0f0(long param_1,long param_2,undefined4 param_3,uint *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  undefined *local_e8;
  char *local_e0;
  int local_d8;
  char local_d4 [31];
  undefined1 local_b5;
  undefined1 local_55;
  
  if ((param_2 == 0) || (lVar9 = *(long *)PTR_DAT_04bb4008, lVar9 == 0)) {
    return false;
  }
  uVar6 = FUN_01a12390(lVar9,4);
  puVar5 = PTR_PTR_04bb2238;
  if ((uVar6 & 1) == 0) {
    uVar3 = *param_4;
    if (*(uint *)(param_1 + 0x810) <= uVar3) {
      uVar3 = 0;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x818) + (long)(int)uVar3 * 0x98);
    local_d8 = 0x80;
    local_55 = 0;
    local_e8 = PTR_DAT_04bb2e90 + 0x10;
    local_e0 = local_d4;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcVar11 = (char *)plVar10[1];
    if (local_d4 != pcVar11) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar9 = 0;
      do {
        if (*(char *)(plVar10[1] + lVar9) == '\0') goto LAB_019da35c;
        lVar8 = plVar10[1] + lVar9;
        if (*(char *)(lVar8 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_019da35c;
        }
        if (*(char *)(lVar8 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_019da35c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_019da35c:
      iVar2 = (int)lVar9;
      if (local_d8 <= (int)lVar9) {
        iVar2 = local_d8 + -1;
      }
      memcpy(local_d4,pcVar11,(long)iVar2);
      local_d4[iVar2] = '\0';
    }
    pcVar11 = local_e0;
    puVar5 = PTR_DAT_04bb2d88;
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    cVar4 = *local_e0;
    if (cVar4 == '\0') {
      return false;
    }
    pcVar7 = *(char **)(param_2 + 8);
    local_e0[(long)local_d8 + -1] = '\0';
    if (pcVar7 == local_e0) {
      return cVar4 != '\0';
    }
    (**(code **)(puVar5 + 0x28))(&local_e8);
    lVar9 = 0;
    do {
      if (local_e0[lVar9] == '\0') goto LAB_019da474;
      if (local_e0[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_019da474;
      }
      if (local_e0[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_019da474;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_019da474:
    iVar2 = (int)lVar9;
    if (*(int *)(param_2 + 0x10) <= (int)lVar9) {
      iVar2 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(pcVar7,pcVar11,(long)iVar2);
    pcVar7[iVar2] = '\0';
    return cVar4 != '\0';
  }
  local_b5 = 0;
  local_d8 = 0x20;
  local_e8 = PTR_DAT_04bb2a08 + 0x10;
  local_e0 = local_d4;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar11 = *(char **)(puVar5 + 8);
  if (local_d4 != pcVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar8) == '\0') goto LAB_019da2bc;
      lVar1 = *(long *)(puVar5 + 8) + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_019da2bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_019da2bc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_019da2bc:
    iVar2 = (int)lVar8;
    if (local_d8 <= (int)lVar8) {
      iVar2 = local_d8 + -1;
    }
    memcpy(local_d4,pcVar11,(long)iVar2);
    local_d4[iVar2] = '\0';
  }
  local_e8 = PTR_DAT_04bb2028 + 0x10;
  pcVar7 = (char *)FUN_01a113c0(lVar9,param_3);
  pcVar11 = local_e0;
  if (pcVar7 == (char *)0x0) {
    return false;
  }
  if (local_e0 != pcVar7) {
    lVar9 = 0;
    do {
      if (pcVar7[lVar9] == '\0') goto LAB_019da41c;
      if (pcVar7[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_019da41c;
      }
      if (pcVar7[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_019da41c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_019da41c:
    iVar2 = (int)lVar9;
    if (local_d8 <= (int)lVar9) {
      iVar2 = local_d8 + -1;
    }
    memcpy(local_e0,pcVar7,(long)iVar2);
    pcVar11[iVar2] = '\0';
  }
  (**(code **)(local_e8 + 0x18))(&local_e8);
  FUN_038d1270(param_2,"InsectMuseum%sAction",local_e0);
  return pcVar7 != (char *)0x0;
}

