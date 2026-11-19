
long * FUN_03c4c110(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  undefined *local_2d0;
  undefined *local_2c8;
  char *pcStack_2c0;
  int local_2b8;
  char local_2b4 [255];
  undefined1 local_1b5;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined8 local_194;
  undefined2 local_18c;
  undefined *local_188;
  char *local_180;
  int local_178;
  char local_174 [255];
  undefined1 local_75;
  undefined *local_70;
  long lStack_68;
  
  puVar1 = PTR_DAT_04bb21f8;
  local_174[0] = '\0';
  local_178 = 0x100;
  lVar13 = 0;
  local_75 = 0;
  local_188 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_174[lVar13] == '\0') goto LAB_03c4c1ac;
    if (local_174[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c4c1ac;
    }
    if (local_174[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03c4c1ac;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  lVar13 = 0;
LAB_03c4c1ac:
  uVar3 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
  local_180 = local_174;
  (**(code **)(PTR_PTR_04c4c1b8 + 0x18))(&PTR_PTR_04c4c1b8);
  lVar13 = 0;
  do {
    if (PTR_s_Sound_Resource__04c4c1c0[lVar13] == '\0') goto LAB_03c4c20c;
    if (PTR_s_Sound_Resource__04c4c1c0[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c4c20c;
    }
    if (PTR_s_Sound_Resource__04c4c1c0[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03c4c20c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  lVar13 = 0;
LAB_03c4c20c:
  uVar4 = (uint)lVar13;
  if ((int)(local_178 - uVar3) <= (int)(uint)lVar13) {
    uVar4 = local_178 + ~uVar3;
  }
  if (0 < (int)uVar4) {
    (**(code **)(PTR_PTR_04c4c1b8 + 0x18))(&PTR_PTR_04c4c1b8);
    memcpy(local_174 + uVar3,PTR_s_Sound_Resource__04c4c1c0,(ulong)uVar4);
    local_174[(int)(uVar4 + uVar3)] = '\0';
  }
  pcVar7 = local_180;
  (**(code **)(local_188 + 0x18))(&local_188);
  lVar13 = 0;
  do {
    if (local_180[lVar13] == '\0') goto LAB_03c4c2ac;
    if (local_180[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c4c2ac;
    }
    if (local_180[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03c4c2ac;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  lVar13 = 0;
LAB_03c4c2ac:
  uVar3 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar13 = 0;
  do {
    if (*(char *)(param_2[1] + lVar13) == '\0') goto LAB_03c4c30c;
    lVar14 = param_2[1] + lVar13;
    if (*(char *)(lVar14 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c4c30c;
    }
    if (*(char *)(lVar14 + 2) == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03c4c30c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  lVar13 = 0;
LAB_03c4c30c:
  uVar4 = (uint)lVar13;
  if ((int)(local_178 - uVar3) <= (int)(uint)lVar13) {
    uVar4 = local_178 + ~uVar3;
  }
  if (0 < (int)uVar4) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(pcVar7 + uVar3,(void *)param_2[1],(ulong)uVar4);
    pcVar7[(int)(uVar4 + uVar3)] = '\0';
  }
  nn::os::LockMutex((MutexType *)(param_1 + 400));
  puVar5 = PTR_DAT_04bb2020;
  local_2c8 = (undefined *)param_2[1];
  local_2d0 = PTR_DAT_04bb2020 + 0x10;
  lVar13 = *(long *)(param_1 + 0x1b0);
  while (lVar13 != 0) {
    iVar8 = FUN_03c4d5c0(&local_2d0,lVar13 + 0x20);
    if (iVar8 < 0) {
      plVar10 = (long *)(lVar13 + 8);
    }
    else {
      if (iVar8 == 0) {
        plVar10 = *(long **)(lVar13 + 0x30);
        if (plVar10 != (long *)0x0) {
          if ((*(uint *)(plVar10 + 4) >> 1 & 1) != 0) {
            *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) & 0xfffffffd;
            plVar2 = (long *)((long)*(int *)(param_1 + 0x1e4) + (long)plVar10);
            if (*plVar2 != 0) {
              *(long *)(*plVar2 + 8) = plVar2[1];
            }
            if ((long *)plVar2[1] != (long *)0x0) {
              *(long *)plVar2[1] = *plVar2;
            }
            *plVar2 = 0;
            plVar2[1] = 0;
            *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + -1;
          }
          *(int *)((long)plVar10 + 0x24) = *(int *)((long)plVar10 + 0x24) + 1;
          goto LAB_03c4c714;
        }
        break;
      }
      plVar10 = (long *)(lVar13 + 0x10);
    }
    lVar13 = *plVar10;
  }
  puVar6 = PTR_DAT_04bb2660;
  local_1b5 = 0;
  local_2b8 = 0x100;
  local_2c8 = puVar1 + 0x10;
  local_198 = 1;
  local_2b4[0] = '\0';
  local_2d0 = (undefined *)0x0;
  local_1a0 = 0;
  local_194 = 0xffffffff00000000;
  local_18c = 0;
  uStack_1a8 = *(undefined8 *)(*(long *)PTR_DAT_04bb2660 + 0x338);
  local_1b0 = 0x1000;
  pcStack_2c0 = local_2b4;
  (**(code **)(local_188 + 0x18))(&local_188);
  pcVar7 = local_180;
  if (local_2b4 != local_180) {
    (**(code **)(local_188 + 0x18))(&local_188);
    lVar13 = 0;
    do {
      if (local_180[lVar13] == '\0') goto LAB_03c4c4d4;
      if (local_180[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_03c4c4d4;
      }
      if (local_180[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_03c4c4d4;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_03c4c4d4:
    iVar8 = (int)lVar13;
    if (local_2b8 <= (int)lVar13) {
      iVar8 = local_2b8 + -1;
    }
    memcpy(local_2b4,pcVar7,(long)iVar8);
    local_2b4[iVar8] = '\0';
  }
  lVar13 = FUN_03c2b050(*(undefined8 *)puVar6,0,&local_2c8,0,1);
  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x48), lVar13 == 0)) {
    uVar9 = FUN_03eba3a0(&local_188);
    if ((uVar9 & 1) != 0) {
      bVar15 = true;
      lVar13 = FUN_03eba090(&local_188,*(undefined8 *)(param_1 + 0x100),0x1000,0,1,0);
      if (lVar13 != 0) goto LAB_03c4c55c;
    }
    plVar10 = (long *)0x0;
    goto LAB_03c4c714;
  }
  bVar15 = false;
LAB_03c4c55c:
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar10 = malloc(0x40);
  }
  else {
    plVar10 = *(long **)(param_1 + 0x100);
    if (plVar10 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_03c4c5cc;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x40,8);
  }
LAB_03c4c5cc:
  puVar1 = PTR_DAT_04bd2f10 + 0x10;
  plVar10[1] = (long)(puVar5 + 0x10);
  puVar6 = PTR_DAT_04bb2120;
  plVar10[4] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  *(undefined4 *)(plVar10 + 5) = 0;
  *plVar10 = (long)puVar1;
  lVar14 = DAT_05aed8a8;
  plVar10[2] = (long)puVar6;
  plVar10[3] = 0;
  lVar13 = FUN_03bca260(*(undefined8 *)(lVar13 + 8),*(undefined4 *)(lVar13 + 0x10),
                        *(undefined8 *)(lVar14 + 0x100),PTR_PTR_04bb2238);
  plVar10[3] = lVar13;
  *(undefined4 *)((long)plVar10 + 0x24) = 0;
  plVar10[2] = param_2[1];
  if (lVar13 == 0) {
    iVar8 = 1;
  }
  else {
    *(long **)(lVar13 + 0x18) = plVar10 + 1;
    iVar8 = *(int *)((long)plVar10 + 0x24) + 1;
  }
  *(int *)((long)plVar10 + 0x24) = iVar8;
  if (!bVar15) {
    *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) | 1;
  }
  lVar13 = param_2[1];
  if (*(int *)(param_1 + 0x1c8) < *(int *)(param_1 + 0x1cc)) {
    puVar12 = *(undefined8 **)(param_1 + 0x1b8);
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1b8) = *puVar12;
    }
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = &PTR_LAB_04b80478;
    puVar12[1] = 0;
    puVar12[6] = plVar10;
    puVar12[7] = (long *)(param_1 + 0x1b0);
    puVar12[4] = puVar5 + 0x10;
    puVar12[5] = lVar13;
    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
    lVar13 = FUN_03c4d924(*(undefined8 *)(param_1 + 0x1b0));
    *(long *)(param_1 + 0x1b0) = lVar13;
    *(undefined8 *)(lVar13 + 0x18) = 1;
  }
  else {
    local_70 = puVar5 + 0x10;
    lStack_68 = lVar13;
    for (lVar14 = *(long *)(param_1 + 0x1b0); lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
      while (iVar8 = FUN_03c4d5c0(&local_70,lVar14 + 0x20), -1 < iVar8) {
        if (iVar8 == 0) {
          *(long **)(lVar14 + 0x30) = plVar10;
          goto LAB_03c4c714;
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if (lVar14 == 0) goto LAB_03c4c714;
      }
    }
  }
LAB_03c4c714:
  nn::os::UnlockMutex((MutexType *)(param_1 + 400));
  return plVar10;
}

