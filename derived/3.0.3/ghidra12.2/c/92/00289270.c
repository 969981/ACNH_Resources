
void FUN_00289270(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  char *__dest;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_108;
  char *local_100;
  undefined *local_f8;
  char *local_f0;
  int local_e8;
  char local_e4 [132];
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = param_1 + 0x12;
    FUN_00290438(plVar12);
  }
  local_108 = PTR_DAT_04bccec0 + 0x10;
  local_f8 = PTR_DAT_04bcdc88 + 0x10;
  local_100 = "";
  local_f0 = local_e4;
  local_e8 = 0x80;
  FUN_0028a8cc(&local_f8);
  __dest = local_f0;
  local_f8 = PTR_DAT_04bcdcc0 + 0x10;
  (**(code **)(local_108 + 0x18))(&local_108);
  pcVar6 = local_100;
  puVar4 = PTR_DAT_04bcdcc8;
  if (__dest != local_100) {
    (**(code **)(local_108 + 0x18))(&local_108);
    lVar5 = 0;
    cVar2 = *puVar4;
    do {
      if (local_100[lVar5] == cVar2) goto LAB_00289398;
      if (local_100[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_00289398;
      }
      if (local_100[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_00289398;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00289398:
    iVar1 = (int)lVar5;
    if (local_e8 <= (int)lVar5) {
      iVar1 = local_e8 + -1;
    }
    memcpy(__dest,pcVar6,(long)iVar1);
    __dest[iVar1] = cVar2;
  }
  local_f8 = PTR_DAT_04bcdca0 + 0x10;
  if ((int)param_3 < 1) {
    cVar2 = *puVar4;
  }
  else {
    FUN_0028a8cc(&local_f8);
    lVar5 = 0;
    cVar2 = *puVar4;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_00289440;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_00289440;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_00289440;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00289440:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar9 = (ulong)uVar8 & 3;
      if (uVar8 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)uVar8 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
  }
  (**(code **)(param_1[4] + 0x18))(param_1 + 4);
  FUN_0028a970(&local_f8,"- name: \"%s\"\n",param_1[5]);
  FUN_0028d61c(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_0028a970(&local_f8,"  start_address: 0x%016llX\n",uVar3);
    FUN_0028d61c(param_2,&local_f8);
    pcVar6 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_002895a4;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_002895a4;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_002895a4;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_002895a4:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar9 = (ulong)uVar8 & 3;
      if (uVar8 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)uVar8 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_0028a970(&local_f8,"  start_address: 0x%016llX\n",uVar3);
    FUN_0028d61c(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_002896cc;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_002896cc;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_002896cc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_002896cc:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar9 = (ulong)uVar8 & 3;
      if (uVar8 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)uVar8 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    pcVar6 = local_f0 + (int)(uVar8 + uVar7);
  }
  *pcVar6 = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_0028a970(&local_f8,"  end_address: 0x%016llX\n",uVar3);
  FUN_0028d61c(param_2,&local_f8);
  *local_f0 = cVar2;
  if (0 < (int)param_3) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_002897fc;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_002897fc;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_002897fc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_002897fc:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar9 = (ulong)uVar8 & 3;
      if (uVar8 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)uVar8 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
  }
  lVar5 = param_1[8];
  if (lVar5 == 0) {
    puVar4 = &DAT_040cceb3;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))((long *)(lVar5 + 0x20));
    puVar4 = *(undefined **)(lVar5 + 0x28);
  }
  FUN_0028a970(&local_f8,"  parent: %s\n",puVar4);
  FUN_0028d61c(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    pcVar6 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar6 = "Reverse";
    }
    FUN_0028a970(&local_f8,"  direction: %s\n",pcVar6);
    FUN_0028d61c(param_2,&local_f8);
    pcVar6 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_0028997c;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_0028997c;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_0028997c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0028997c:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar9 = (ulong)uVar8 & 3;
      if (uVar8 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)uVar8 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    pcVar6 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar6 = "Reverse";
    }
    FUN_0028a970(&local_f8,"  direction: %s\n",pcVar6);
    FUN_0028d61c(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_00289aa8;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_00289aa8;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_00289aa8;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00289aa8:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar9 = (ulong)uVar8 & 3;
      if (uVar8 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)uVar8 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    pcVar6 = local_f0 + (int)(uVar8 + uVar7);
  }
  *pcVar6 = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x70))(param_1);
  FUN_0028a970(&local_f8,"  size: %llu\n",uVar3);
  FUN_0028d61c(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_0028a970(&local_f8,"  free_size: %llu\n",uVar3);
    FUN_0028d61c(param_2,&local_f8);
    pcVar6 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_00289c14;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_00289c14;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_00289c14;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00289c14:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar9 = (ulong)uVar8 & 3;
      if (uVar8 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)uVar8 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_0028a970(&local_f8,"  free_size: %llu\n",uVar3);
    FUN_0028d61c(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_00289d3c;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_00289d3c;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_00289d3c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00289d3c:
    uVar8 = (uint)lVar5;
    if ((int)(local_e8 - uVar8) <= (int)param_3) {
      param_3 = local_e8 + ~uVar8;
    }
    if (0 < (int)param_3) {
      uVar9 = (ulong)param_3 & 3;
      if (param_3 < 4) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar8,"    ",4);
          uVar11 = uVar10;
        } while (((ulong)param_3 & 0xfffffffc) != uVar10);
      }
      if ((param_3 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar8;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    pcVar6 = local_f0 + (int)(param_3 + uVar8);
  }
  *pcVar6 = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_0028a970(&local_f8,"  max_allocatable_size: %llu\n",uVar3);
  FUN_0028d61c(param_2,&local_f8);
  if (plVar12 != (long *)0x0) {
    FUN_00290440(plVar12);
  }
  return;
}

