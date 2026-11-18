
/* WARNING: Removing unreachable block (ram,0x0329c340) */

void FUN_0329c2b0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  void *__ptr;
  char *pcVar21;
  undefined *local_130;
  char *local_128;
  undefined *local_120;
  char *local_118;
  long local_110;
  undefined8 local_108;
  ulong local_100;
  long local_f8;
  undefined *local_f0;
  long *local_e8;
  undefined8 *local_e0 [4];
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined *local_98;
  char *local_90;
  undefined1 auStack_88 [8];
  long local_80;
  undefined8 local_78;
  char *local_70;
  
  param_1[0x21f] = param_2[1];
  local_f8 = 0;
  local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
  local_e8 = (long *)0x0;
  local_e0[0] = (undefined8 *)0x0;
  local_118 = PTR_DAT_04bc8e68 + 0x10;
  local_100 = local_100 & 0xffffffffff000000;
  local_120 = (undefined *)0x0;
  local_108 = 0x100000258;
  (**(code **)(*param_1 + 0x48))(auStack_88);
  local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
  puVar20 = (undefined8 *)*param_2;
  local_110 = local_80;
  plVar10 = (long *)*puVar20;
  lVar11 = (**(code **)(*plVar10 + 0x30))(plVar10,0xf80,8);
  FUN_032d04c4(lVar11,puVar20);
  __ptr = (void *)param_1[1];
  param_1[1] = lVar11;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
      }
    }
    lVar11 = param_1[1];
  }
  FUN_032d0880(lVar11,&local_120);
  if (local_e0[0] != (undefined8 *)0x0) {
    (**(code **)*local_e0[0])();
  }
  lVar11 = 0;
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  lVar19 = param_1[0x21f];
  puVar2 = PTR_DAT_04bc8f08 + 0x10;
  puVar3 = PTR_DAT_04bc8e60 + 0x10;
  puVar4 = PTR_DAT_04bc8f88 + 0x10;
  puVar5 = PTR_DAT_04bc8e70 + 0x10;
  puVar6 = PTR_DAT_04bc8f78 + 0x10;
  puVar7 = PTR_DAT_04bc8f80 + 0x10;
  puVar8 = PTR_DAT_04bb2020 + 0x10;
  do {
    pcVar21 = (&PTR_DAT_04b18998)[lVar11];
    local_98 = puVar1;
    local_90 = pcVar21;
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      puVar17 = PTR_DAT_04bc8e68 + 0x10;
      plVar10 = *(long **)(*(long *)(param_1[1] + 0xf0) + 0x18);
    }
    else {
      local_120 = PTR_DAT_04bc8e68 + 0x10;
      local_118 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar10 = (long *)FUN_032cb8e0(&local_78,&local_120,*(undefined8 *)(param_1[1] + 0xf0));
      puVar17 = local_98;
    }
    (**(code **)(puVar17 + 0x18))(&local_98);
    lVar12 = (**(code **)(*plVar10 + 0x60))(plVar10,local_90,1);
    if (lVar12 != 0) {
      if ((int)param_1[2] < *(int *)((long)param_1 + 0x14)) {
        plVar10 = (long *)param_1[4];
        if (plVar10 != (long *)0x0) {
          param_1[4] = *plVar10;
        }
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[4] = 0;
        plVar10[5] = 0;
        *plVar10 = (long)puVar2;
        plVar10[1] = 0;
        FUN_032ae014(plVar10 + 6);
        plVar10[0x48] = 0;
        *(undefined8 *)((long)plVar10 + 0x417) = 0;
        *(undefined8 *)((long)plVar10 + 0x24d) = 0;
        plVar10[0x49] = 0;
        plVar10[0x47] = 0;
        plVar10[0x46] = 0;
        plVar10[0x45] = 0;
        plVar10[0x44] = 0;
        plVar10[0x43] = 0;
        plVar10[0x42] = 0;
        plVar10[0x41] = 0;
        plVar10[0x40] = 0;
        plVar10[0x4b] = (long)puVar3;
        plVar10[0x4c] = 0;
        plVar10[0x51] = (long)puVar3;
        plVar10[0x52] = 0;
        plVar10[0x57] = (long)puVar3;
        plVar10[0x58] = 0;
        plVar10[0x5d] = (long)puVar3;
        plVar10[0x5e] = 0;
        plVar10[99] = (long)puVar3;
        plVar10[100] = 0;
        plVar10[0x69] = (long)puVar4;
        plVar10[0x6a] = 0;
        plVar10[0x6f] = (long)puVar4;
        plVar10[0x70] = 0;
        plVar10[0x75] = (long)puVar4;
        plVar10[0x76] = 0;
        plVar10[0x7b] = (long)puVar4;
        plVar10[0x7c] = 0;
        plVar10[0x82] = 0;
        plVar10[0x81] = 0;
        *(undefined2 *)(plVar10 + 0x4a) = 0x41;
        *(undefined2 *)((long)plVar10 + 0x253) = 0x50f;
        plVar10[0x9c] = (long)puVar5;
        plVar10[0x8d] = 0;
        *(undefined4 *)(plVar10 + 0x8e) = 0;
        plVar10[0x8f] = 0;
        *(undefined1 *)(plVar10 + 0x90) = 0;
        plVar10[0x98] = 0;
        *(undefined4 *)(plVar10 + 0x99) = 0;
        plVar10[0x9a] = 0;
        *(undefined1 *)(plVar10 + 0x9b) = 0;
        plVar10[0x91] = 0;
        plVar10[0xa2] = (long)puVar6;
        plVar10[0x92] = 0;
        plVar10[0x93] = 0;
        plVar10[0x94] = 0;
        plVar10[0x95] = 0;
        plVar10[0x96] = 0;
        *(undefined4 *)(plVar10 + 0x97) = 0;
        plVar10[0x84] = 0;
        plVar10[0x85] = 0;
        plVar10[0x86] = 0;
        plVar10[0x87] = 0;
        plVar10[0x88] = 0;
        plVar10[0x89] = 0;
        plVar10[0x8a] = 0;
        plVar10[0x8b] = 0;
        *(undefined4 *)(plVar10 + 0x8c) = 0;
        plVar10[0x9d] = 0;
        plVar10[0xa3] = 0;
        plVar10[0xa8] = (long)puVar7;
        plVar10[0xa9] = 0;
        plVar10[0xb1] = 0;
        plVar10[0xae] = 0;
        plVar10[0xaf] = 0;
        *(undefined4 *)(plVar10 + 0xb0) = 0;
        if ((int)param_1[2] < *(int *)((long)param_1 + 0x14)) {
          *(long **)(param_1[3] + (long)(int)param_1[2] * 8) = plVar10;
          *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        }
      }
      local_100 = 0;
      local_f8 = 0;
      local_118 = (char *)0x0;
      local_110 = 0;
      local_108 = 0;
      local_f0 = PTR_DAT_04bc8e70 + 0x10;
      local_e8 = (long *)0x0;
      local_c0 = PTR_DAT_04bc8e68 + 0x10;
      local_a8 = 0;
      local_a4 = 1;
      local_b8 = PTR_DAT_04bb2120;
      local_b0 = 0x100000000;
      local_120 = (undefined *)*param_2;
      local_a0 = 0xffffffff;
      pcVar15 = *(char **)(param_1[1] + 0xf0);
      if (*pcVar21 != '\0') {
        local_78 = local_c0;
        local_70 = pcVar21;
        lVar12 = FUN_032cb8e0(&local_130,&local_78);
        if (lVar12 == 0) {
          pcVar15 = (char *)0x0;
        }
        else {
          pcVar15 = *(char **)(lVar12 + 0xe8);
        }
      }
      lVar12 = param_1[1];
      local_118 = pcVar15;
      if (*pcVar21 == '\0') {
        lVar13 = *(long *)(lVar12 + 0xf0);
LAB_0329c784:
        puVar17 = PTR_DAT_04bb2120;
        if (*(undefined **)(lVar13 + 0x30) != (undefined *)0x0) {
          puVar17 = *(undefined **)(lVar13 + 0x30);
        }
        for (local_110 = *(long *)(lVar12 + 0x110); local_110 != 0;
            local_110 = *(long *)(local_110 + 8)) {
          while (*(undefined **)(local_110 + 0x20) <= puVar17) {
            if (puVar17 <= *(undefined **)(local_110 + 0x20)) {
              local_110 = local_110 + 0x28;
              goto LAB_0329c7d4;
            }
            local_110 = *(long *)(local_110 + 0x10);
            if (local_110 == 0) goto LAB_0329c7d0;
          }
        }
LAB_0329c7d0:
        local_110 = 0;
      }
      else {
        local_78 = PTR_DAT_04bc8e68 + 0x10;
        local_70 = pcVar21;
        lVar13 = FUN_032cb8e0(&local_130,&local_78,*(undefined8 *)(lVar12 + 0xf0));
        if (lVar13 == 0) goto LAB_0329c7d0;
        lVar13 = *(long *)(lVar13 + 0xe8);
        if (lVar13 != 0) goto LAB_0329c784;
        local_110 = 0;
      }
LAB_0329c7d4:
      local_100 = param_1[0x21f] + 0x4d0;
      local_f8 = param_1[0x21f] + 0x300;
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 8))();
      }
      plVar14 = (long *)param_2[3];
      plVar10 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar14 + 0x18))(plVar14,local_e0);
      }
      lVar12 = lVar11 * 8;
      local_e8 = plVar10;
      if (*(char *)(lVar19 + 0x128 + lVar12) == '\0') {
        (**(code **)(*param_1 + 0x50))(&local_78,param_1);
        local_130 = puVar8;
        local_128 = pcVar21;
        (**(code **)(local_78 + 0x18))(&local_78);
        (**(code **)(local_78 + 0x18))(&local_78);
        pcVar21 = local_70;
        (**(code **)(local_130 + 0x18))(&local_130);
        if (pcVar21 == local_128) {
LAB_0329c924:
          uVar16 = 2;
        }
        else {
          uVar18 = 0;
          bVar9 = true;
          do {
            if (local_70[uVar18] != local_128[uVar18]) break;
            if (local_70[uVar18] == '\0') {
              if (bVar9) goto LAB_0329c924;
              break;
            }
            if (local_70[uVar18 + 1] != local_128[uVar18 + 1]) break;
            if (local_70[uVar18 + 1] == '\0') goto LAB_0329c924;
            if (local_70[uVar18 + 2] != local_128[uVar18 + 2]) break;
            if (local_70[uVar18 + 2] == '\0') goto LAB_0329c924;
            bVar9 = uVar18 < 0x7fffe;
            uVar18 = uVar18 + 3;
          } while (uVar18 != 0x80001);
          uVar16 = 0;
        }
      }
      else {
        uVar16 = *(undefined4 *)(param_1[0x21f] + lVar11 * 8 + 300);
      }
      local_b0 = CONCAT44(local_b0._4_4_,uVar16);
      FUN_032873d0(*(undefined8 *)(param_1[3] + lVar12),&local_120);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      lVar12 = *(long *)(*(long *)(param_1[3] + lVar12) + 0x428);
      *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 2;
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 8))();
      }
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 3) {
      (**(code **)(*param_1 + 0x10))(param_1);
      (**(code **)(*param_1 + 0x20))(param_1,*param_2);
      return;
    }
  } while( true );
}

