
undefined8 FUN_02b3c7fc(long param_1,int param_2)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 local_65;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  puVar4 = PTR_DAT_04bb2010;
  if ((param_2 == -0x24a26848) && (*(char *)(param_1 + 0xdd70) == '\0')) {
    local_60 = PTR_DAT_04bb2010 + 0x10;
    if ((*(long *)PTR_DAT_04bb4948 != 0) &&
       ((lVar8 = *(long *)PTR_DAT_04bb27a8, lVar8 != 0 && ((*(ushort *)(lVar8 + 0x4b68) & 1) != 0)))
       ) {
      iVar6 = *(int *)(lVar8 + 0x4b6c);
      iVar3 = *(int *)(lVar8 + 0x4b70);
      piVar7 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb4948 + 200) + 0xf0))();
      local_58 = *piVar7 + iVar6 * 0x20;
      iStack_54 = piVar7[1] + iVar3 * 0x20;
      if (((DAT_0562d9c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0562d9c0), iVar6 != 0)) {
        DAT_0562d9b0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0562d9b8 = "StrcCloudIslandDeckS00";
        __cxa_guard_release(&DAT_0562d9c0);
      }
      pcVar1 = (char *)((long)&local_a8 + 4);
      local_a8 = CONCAT44(local_a8._4_4_,0x40);
      local_65 = 0;
      local_b8 = PTR_DAT_04bb2f70 + 0x10;
      local_b0 = pcVar1;
      (**(code **)(DAT_0562d9b0 + 0x18))(&DAT_0562d9b0);
      pcVar10 = DAT_0562d9b8;
      if (pcVar1 != DAT_0562d9b8) {
        (**(code **)(DAT_0562d9b0 + 0x18))(&DAT_0562d9b0);
        lVar8 = 0;
        do {
          if (DAT_0562d9b8[lVar8] == '\0') goto LAB_02b3c974;
          if (DAT_0562d9b8[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02b3c974;
          }
          if (DAT_0562d9b8[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_02b3c974;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_02b3c974:
        iVar6 = (int)lVar8;
        if ((int)local_a8 <= (int)lVar8) {
          iVar6 = (int)local_a8 + -1;
        }
        memcpy(pcVar1,pcVar10,(long)iVar6);
        pcVar1[iVar6] = '\0';
      }
      pcVar1 = local_b0;
      puVar5 = PTR_DAT_04bb2bc0;
      local_b8 = PTR_DAT_04bb2bc0 + 0x10;
      pcVar10 = *(char **)(param_1 + 0xdd20);
      local_b0[(long)(int)local_a8 + -1] = '\0';
      if (pcVar10 != local_b0) {
        (**(code **)(puVar5 + 0x28))(&local_b8);
        lVar8 = 0;
        do {
          if (local_b0[lVar8] == '\0') goto LAB_02b3ca20;
          if (local_b0[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02b3ca20;
          }
          if (local_b0[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_02b3ca20;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_02b3ca20:
        iVar6 = (int)lVar8;
        if (*(int *)(param_1 + 0xdd28) <= (int)lVar8) {
          iVar6 = *(int *)(param_1 + 0xdd28) + -1;
        }
        memcpy(pcVar10,pcVar1,(long)iVar6);
        pcVar10[iVar6] = '\0';
      }
      puVar5 = PTR_DAT_04bb27c8;
      if (*(char *)(param_1 + 0xdd70) != '\0') {
        return 1;
      }
      local_b0 = puVar4 + 0x10;
      local_98 = 0;
      local_a8 = 0;
      local_b8 = PTR_DAT_04bbc1a0 + 0x10;
      local_a0 = local_b0;
      FUN_00947a00(0,*(long *)PTR_DAT_04bb27c8 + 0x28,param_1 + 0xdd18,&local_60,&local_b8,1,0);
      if (*(char *)(param_1 + 0xdd70) == '\0') {
        lVar8 = *(long *)puVar5;
        lVar9 = *(long *)(lVar8 + 0x1150);
        plVar2 = (long *)((long)*(int *)(lVar8 + 0x1164) + param_1 + 0xdcd0);
        *(long **)(lVar8 + 0x1150) = plVar2;
        *plVar2 = lVar9;
        plVar2[1] = lVar8 + 0x1150;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar2;
        }
        *(int *)(lVar8 + 0x1160) = *(int *)(lVar8 + 0x1160) + 1;
      }
      *(undefined1 *)(param_1 + 0xdd70) = 1;
      *(undefined4 *)(param_1 + 0xdd74) = 1;
      *(int *)(param_1 + 0xdd00) = (int)local_a8;
      *(undefined4 *)(param_1 + 0xdd04) = local_a8._4_4_;
      *(undefined4 *)(param_1 + 0xdd10) = (undefined4)local_98;
      *(undefined4 *)(param_1 + 0xdd14) = local_98._4_4_;
      return 1;
    }
  }
  return 0;
}

