
void FUN_038cab10(long *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined *local_e8;
  char *local_e0;
  int local_d8;
  char local_d4 [127];
  undefined1 local_55;
  
  if ((*(uint *)(param_1 + 0x1a) & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = param_1 + 0x12;
    nn::os::LockMutex((MutexType *)(param_1 + 0x16));
  }
  local_55 = 0;
  local_d8 = 0x80;
  local_d4[0] = '\0';
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_e0 = local_d4;
  if (0 < (int)param_3) {
    uVar9 = 0;
    local_55 = 0;
    do {
      if (local_d4[uVar9] == '\0') goto LAB_038cabd0;
      if (local_d4[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cabd0;
      }
      if (local_d4[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cabd0;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cabd0:
    iVar7 = (int)uVar9;
    uVar6 = param_3;
    if (0x80 - iVar7 <= (int)param_3) {
      uVar6 = 0x7f - iVar7;
    }
    if (0 < (int)uVar6) {
      memset(local_d4 + (uVar9 & 0xffffffff),0x20,(ulong)uVar6);
    }
    local_d4[(int)(uVar6 + iVar7)] = '\0';
  }
  (**(code **)(param_1[4] + 0x18))(param_1 + 4);
  FUN_038d13f0(&local_e8,"- name: \"%s\"\n",param_1[5]);
  (**(code **)(**(long **)(param_2 + 8) + 0xc0))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
  *local_e0 = '\0';
  if ((int)param_3 < 1) {
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_038d13f0(&local_e8,"  start_address: 0x%016llX\n",uVar1);
    (**(code **)(**(long **)(param_2 + 8) + 0xc0))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
    pcVar3 = local_e0;
  }
  else {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    uVar9 = 0;
    do {
      if (local_e0[uVar9] == '\0') goto LAB_038cacec;
      if (local_e0[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cacec;
      }
      if (local_e0[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cacec;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cacec:
    uVar8 = (uint)uVar9;
    uVar6 = param_3;
    if ((int)(local_d8 - uVar8) <= (int)param_3) {
      uVar6 = local_d8 + ~uVar8;
    }
    if (0 < (int)uVar6) {
      memset(local_e0 + (uVar9 & 0xffffffff),0x20,(ulong)uVar6);
    }
    pcVar3[(int)(uVar6 + uVar8)] = '\0';
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_038d13f0(&local_e8,"  start_address: 0x%016llX\n",uVar1);
    (**(code **)(**(long **)(param_2 + 8) + 0xc0))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
    *local_e0 = '\0';
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    uVar9 = 0;
    do {
      if (local_e0[uVar9] == '\0') goto LAB_038cadbc;
      if (local_e0[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cadbc;
      }
      if (local_e0[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cadbc;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cadbc:
    uVar8 = (uint)uVar9;
    uVar6 = param_3;
    if ((int)(local_d8 - uVar8) <= (int)param_3) {
      uVar6 = local_d8 + ~uVar8;
    }
    if (0 < (int)uVar6) {
      memset(local_e0 + (uVar9 & 0xffffffff),0x20,(ulong)uVar6);
    }
    pcVar3 = pcVar3 + (int)(uVar6 + uVar8);
  }
  *pcVar3 = '\0';
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_038d13f0(&local_e8,"  end_address: 0x%016llX\n",uVar1);
  (**(code **)(**(long **)(param_2 + 8) + 0xc0))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
  *local_e0 = '\0';
  if (0 < (int)param_3) {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    uVar9 = 0;
    do {
      if (local_e0[uVar9] == '\0') goto LAB_038cae9c;
      if (local_e0[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cae9c;
      }
      if (local_e0[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cae9c;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cae9c:
    uVar8 = (uint)uVar9;
    uVar6 = param_3;
    if ((int)(local_d8 - uVar8) <= (int)param_3) {
      uVar6 = local_d8 + ~uVar8;
    }
    if (0 < (int)uVar6) {
      memset(local_e0 + (uVar9 & 0xffffffff),0x20,(ulong)uVar6);
    }
    pcVar3[(int)(uVar6 + uVar8)] = '\0';
  }
  lVar4 = param_1[8];
  if (lVar4 == 0) {
    puVar2 = &DAT_040cceb3;
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x20) + 0x18))((long *)(lVar4 + 0x20));
    puVar2 = *(undefined **)(lVar4 + 0x28);
  }
  FUN_038d13f0(&local_e8,"  parent: %s\n",puVar2);
  (**(code **)(**(long **)(param_2 + 8) + 0xc0))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
  *local_e0 = '\0';
  if ((int)param_3 < 1) {
    pcVar3 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar3 = "Reverse";
    }
    FUN_038d13f0(&local_e8,"  direction: %s\n",pcVar3);
    (**(code **)(**(long **)(param_2 + 8) + 0xc0))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
    pcVar3 = local_e0;
  }
  else {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    uVar9 = 0;
    do {
      if (local_e0[uVar9] == '\0') goto LAB_038cafd4;
      if (local_e0[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cafd4;
      }
      if (local_e0[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cafd4;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cafd4:
    uVar8 = (uint)uVar9;
    uVar6 = param_3;
    if ((int)(local_d8 - uVar8) <= (int)param_3) {
      uVar6 = local_d8 + ~uVar8;
    }
    if (0 < (int)uVar6) {
      memset(local_e0 + (uVar9 & 0xffffffff),0x20,(ulong)uVar6);
    }
    pcVar3[(int)(uVar6 + uVar8)] = '\0';
    pcVar3 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar3 = "Reverse";
    }
    FUN_038d13f0(&local_e8,"  direction: %s\n",pcVar3);
    (**(code **)(**(long **)(param_2 + 8) + 0xc0))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
    *local_e0 = '\0';
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    uVar9 = 0;
    do {
      if (local_e0[uVar9] == '\0') goto LAB_038cb0ac;
      if (local_e0[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cb0ac;
      }
      if (local_e0[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cb0ac;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cb0ac:
    uVar8 = (uint)uVar9;
    uVar6 = param_3;
    if ((int)(local_d8 - uVar8) <= (int)param_3) {
      uVar6 = local_d8 + ~uVar8;
    }
    if (0 < (int)uVar6) {
      memset(local_e0 + (uVar9 & 0xffffffff),0x20,(ulong)uVar6);
    }
    pcVar3 = pcVar3 + (int)(uVar6 + uVar8);
  }
  *pcVar3 = '\0';
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  FUN_038d13f0(&local_e8,"  size: %llu\n",uVar1);
  (**(code **)(**(long **)(param_2 + 8) + 0xc0))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
  *local_e0 = '\0';
  if ((int)param_3 < 1) {
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_038d13f0(&local_e8,"  free_size: %llu\n",uVar1);
    (**(code **)(**(long **)(param_2 + 8) + 0xc0))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
    pcVar3 = local_e0;
  }
  else {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    uVar9 = 0;
    do {
      if (local_e0[uVar9] == '\0') goto LAB_038cb1cc;
      if (local_e0[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cb1cc;
      }
      if (local_e0[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cb1cc;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cb1cc:
    uVar8 = (uint)uVar9;
    uVar6 = param_3;
    if ((int)(local_d8 - uVar8) <= (int)param_3) {
      uVar6 = local_d8 + ~uVar8;
    }
    if (0 < (int)uVar6) {
      memset(local_e0 + (uVar9 & 0xffffffff),0x20,(ulong)uVar6);
    }
    pcVar3[(int)(uVar6 + uVar8)] = '\0';
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_038d13f0(&local_e8,"  free_size: %llu\n",uVar1);
    (**(code **)(**(long **)(param_2 + 8) + 0xc0))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
    *local_e0 = '\0';
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    uVar9 = 0;
    do {
      if (local_e0[uVar9] == '\0') goto LAB_038cb29c;
      if (local_e0[uVar9 + 1] == '\0') {
        uVar9 = uVar9 + 1;
        goto LAB_038cb29c;
      }
      if (local_e0[uVar9 + 2] == '\0') {
        uVar9 = uVar9 + 2;
        goto LAB_038cb29c;
      }
      uVar9 = uVar9 + 3;
    } while (uVar9 != 0x80001);
    uVar9 = 0;
LAB_038cb29c:
    uVar6 = (uint)uVar9;
    if ((int)(local_d8 - uVar6) <= (int)param_3) {
      param_3 = local_d8 + ~uVar6;
    }
    if (0 < (int)param_3) {
      memset(local_e0 + (uVar9 & 0xffffffff),0x20,(ulong)param_3);
    }
    pcVar3 = pcVar3 + (int)(param_3 + uVar6);
  }
  *pcVar3 = '\0';
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,8);
  FUN_038d13f0(&local_e8,"  max_allocatable_size: %llu\n",uVar1);
  (**(code **)(**(long **)(param_2 + 8) + 0xc0))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_e8);
  if (plVar5 != (long *)0x0) {
    nn::os::UnlockMutex((MutexType *)(plVar5 + 4));
  }
  return;
}

