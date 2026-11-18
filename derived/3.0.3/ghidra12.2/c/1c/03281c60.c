
/* WARNING: Removing unreachable block (ram,0x032821a0) */
/* WARNING: Removing unreachable block (ram,0x03281de4) */
/* WARNING: Removing unreachable block (ram,0x03281d54) */
/* WARNING: Removing unreachable block (ram,0x03281ce0) */
/* WARNING: Removing unreachable block (ram,0x03281cb8) */
/* WARNING: Removing unreachable block (ram,0x03281d18) */
/* WARNING: Removing unreachable block (ram,0x03281d84) */
/* WARNING: Removing unreachable block (ram,0x03281eb4) */
/* WARNING: Removing unreachable block (ram,0x032823c4) */

void FUN_03281c60(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined8 *__ptr;
  long lVar16;
  void *__ptr_00;
  undefined **local_188;
  char *pcStack_180;
  code *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined3 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined *local_120;
  char *pcStack_118;
  undefined *local_110;
  undefined8 *puStack_108;
  undefined *local_100;
  char *local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  char *local_e0;
  undefined7 local_d8;
  undefined4 uStack_d1;
  undefined5 uStack_cd;
  undefined8 local_c8;
  undefined **local_c0;
  long *local_b8;
  undefined8 *local_b0 [4];
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  
  if ((long *)*param_2 != (long *)0x0) {
    local_188 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_180 = "gui::Balloon Heap";
    lVar13 = *(long *)*param_2;
    local_f0 = (char *)0x0;
    pcStack_e8 = (char *)0x0;
    if (lVar13 != 0) {
      local_f0 = (char *)FUN_038c6d48(0,&local_188,lVar13,8,1,1);
      local_100 = (undefined *)((ulong)local_100 & 0xffffffff00000000);
    }
    *(char **)(param_1 + 0x380) = local_f0;
    pcVar1 = param_1 + 0x380;
    *(char **)(param_1 + 0x388) = pcStack_e8;
    local_f0 = (char *)((ulong)local_f0 & 0xffffffff00000000);
    puVar7 = (undefined8 *)(**(code **)(**(long **)pcVar1 + 0x30))(*(long **)pcVar1,0x30,8);
    local_f0 = (char *)((ulong)local_f0 & 0xffffffff00000000);
    uVar12 = *(undefined8 *)pcVar1;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    FUN_03291da0(puVar7,uVar12,1);
    local_f0 = *(char **)(param_1 + 0x4f8);
    *(undefined8 **)(param_1 + 0x4f8) = puVar7;
    FUN_03281ac0(&local_f0);
    local_f0 = (char *)((ulong)local_f0 & 0xffffffff00000000);
    *(uint *)(*(long *)(param_1 + 0x4f8) + 0x2c) = *(uint *)(*(long *)(param_1 + 0x4f8) + 0x2c) | 1;
    uVar12 = (**(code **)(**(long **)pcVar1 + 0x30))(*(long **)pcVar1,0xf80,8);
    FUN_032d04c4(uVar12,pcVar1);
    *(undefined8 *)(param_1 + 0x390) = uVar12;
    local_f0 = (char *)0x0;
    pcStack_e8 = &DAT_04b177a8;
    local_d8 = 0x640;
    local_c8 = 0;
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffffffffff00);
    uStack_d1 = 0;
    local_b8 = (long *)0x0;
    local_b0[0] = (undefined8 *)0x0;
    if (param_2[1] != 0) {
      local_f0 = (char *)param_2[1];
    }
    local_e0 = "SwkbdBalloon2.bflyt";
    if (*(char *)param_2[3] != '\0') {
      local_e0 = (char *)param_2[3];
    }
    FUN_032d0880(uVar12,&local_f0);
    lVar13 = 0x398;
    do {
      local_188 = (undefined **)((ulong)local_188 & 0xffffffff00000000);
      uVar12 = (**(code **)(**(long **)pcVar1 + 0x30))(*(long **)pcVar1,0xf80,8);
      FUN_032d04c4(uVar12,pcVar1);
      local_170 = 0x640;
      local_160 = 0;
      *(undefined8 *)(param_1 + lVar13) = uVar12;
      local_158 = 0;
      local_16c = 0;
      uStack_168 = 0;
      local_178 = (code *)0x40f10ee;
      local_188 = (undefined **)0x0;
      pcStack_180 = &DAT_04b177a8;
      local_150 = 0;
      local_148 = (undefined8 *)0x0;
      FUN_032d0880(uVar12,&local_188);
      puVar2 = PTR_PTR_04bb2238;
      pcVar14 = *(char **)(PTR_PTR_04bb2238 + 8);
      if (*pcVar14 == '\0') {
        lVar8 = *(long *)(*(long *)(*(long *)(param_1 + lVar13) + 0xf0) + 0x18);
      }
      else {
        local_100 = &DAT_04b177a8;
        local_f8 = pcVar14;
        lVar8 = FUN_032cb8e0(&local_110,&local_100,
                             *(undefined8 *)(*(long *)(param_1 + lVar13) + 0xf0));
        pcVar14 = *(char **)(puVar2 + 8);
      }
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      lVar8 = *(long *)(param_1 + 0x390);
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      if (*pcVar14 == '\0') {
        plVar9 = *(long **)(*(long *)(lVar8 + 0xf0) + 0x18);
      }
      else {
        local_100 = &DAT_04b177a8;
        local_f8 = pcVar14;
        plVar9 = (long *)FUN_032cb8e0(&local_110,&local_100,*(undefined8 *)(lVar8 + 0xf0));
      }
      uVar10 = (**(code **)(*plVar9 + 0x60))(plVar9,"P_BalloonBase",1);
      FUN_032d1c90(lVar8,uVar12,uVar10);
      if (local_148 != (undefined8 *)0x0) {
        (**(code **)*local_148)();
      }
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x3f0);
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
    }
    else {
      local_188 = (undefined **)&DAT_04b177a8;
      pcStack_180 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar9 = (long *)FUN_032cb8e0(&local_100,&local_188,
                                    *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
    }
    lVar13 = (**(code **)(*plVar9 + 0x60))(plVar9,"L_BtnBalloon_00",1);
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    if (local_b0[0] != (undefined8 *)0x0) {
      (**(code **)*local_b0[0])();
    }
    *(char **)(param_1 + 0x408) = pcVar1;
    pcVar14 = param_1 + 0x3f0;
    *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0);
    FUN_032c6ccc(pcVar14);
    local_f0 = &DAT_04b177a8;
    pcStack_e8 = "In";
    local_188 = (undefined **)&DAT_04b177a8;
    pcStack_180 = "In";
    local_100 = &DAT_04b177a8;
    local_f8 = "";
    local_110 = &DAT_04b177a8;
    puStack_108 = &DAT_0407ebb1;
    FUN_032c7320(pcVar14,&local_f0,&local_188,&local_100,&local_110);
    local_f0 = &DAT_04b177a8;
    pcStack_e8 = "Out";
    local_188 = (undefined **)&DAT_04b177a8;
    pcStack_180 = "Out";
    local_100 = &DAT_04b177a8;
    local_f8 = "";
    local_110 = &DAT_04b177a8;
    puStack_108 = &DAT_0407ebb1;
    FUN_032c7320(pcVar14,&local_f0,&local_188,&local_100,&local_110);
    FUN_032c8670(pcVar14,1,0);
    lVar13 = 0;
    do {
      local_f0 = (char *)((ulong)local_f0 & 0xffffffff00000000);
      puVar7 = (undefined8 *)(**(code **)(**(long **)pcVar1 + 0x30))(*(long **)pcVar1,0x58,8);
      puVar7[7] = 0;
      *(undefined4 *)(puVar7 + 8) = 0;
      puVar7[9] = 0;
      *(undefined1 *)(puVar7 + 10) = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      __ptr = *(undefined8 **)(param_1 + lVar13 + 0x448);
      *(undefined8 **)(param_1 + lVar13 + 0x448) = puVar7;
      if (__ptr != (undefined8 *)0x0) {
        FUN_032c6840(__ptr);
        plVar9 = (long *)*__ptr;
        __ptr[4] = 0;
        __ptr[5] = 0;
        __ptr[3] = 0;
        if (plVar9 != (long *)0x0) {
          lVar8 = __ptr[1];
          lVar11 = __ptr[2];
          __ptr[2] = 0;
          *__ptr = 0;
          __ptr[1] = 0;
          if ((undefined8 *)*plVar9 == __ptr) {
            *plVar9 = lVar11;
          }
          if (lVar11 != 0) {
            *(long *)(lVar11 + 8) = lVar8;
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar11;
          }
        }
        __ptr[1] = 0;
        __ptr[2] = 0;
        *__ptr = 0;
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr);
        }
        else {
          plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,__ptr);
          }
        }
        puVar7 = *(undefined8 **)(param_1 + lVar13 + 0x448);
      }
      puVar7[5] = *(undefined8 *)(*(long *)(param_1 + lVar13 + 0x398) + 0xf0);
      *(char **)(*(long *)(param_1 + lVar13 + 0x448) + 0x18) = pcVar1;
      FUN_032c6b2c(*(undefined8 *)(param_1 + lVar13 + 0x448),1);
      uVar12 = *(undefined8 *)(param_1 + lVar13 + 0x448);
      FUN_032c6ccc(uVar12);
      local_f0 = &DAT_04b177a8;
      pcStack_e8 = "ChangeInfo";
      local_188 = (undefined **)&DAT_04b177a8;
      pcStack_180 = "ChangeInfo";
      local_100 = &DAT_04b177a8;
      local_f8 = "";
      local_110 = &DAT_04b177a8;
      puStack_108 = &DAT_0407ebb1;
      FUN_032c7320(uVar12,&local_f0,&local_188,&local_100,&local_110);
      local_120 = &DAT_04b177a8;
      pcStack_118 = "ChangeInfo";
      FUN_032c8500(*(undefined8 *)(param_1 + lVar13 + 0x448),&local_120,0);
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x58);
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
    }
    else {
      local_f0 = &DAT_04b177a8;
      pcStack_e8 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar9 = (long *)FUN_032cb8e0(&local_188,&local_f0,
                                    *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
    }
    lVar13 = (**(code **)(*plVar9 + 0x60))(plVar9,"P_BalloonBase",1);
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
    }
    else {
      local_f0 = &DAT_04b177a8;
      pcStack_e8 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar9 = (long *)FUN_032cb8e0(&local_188,&local_f0,
                                    *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
    }
    lVar11 = (**(code **)(*plVar9 + 0x60))(plVar9,"P_Tri",1);
    *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(lVar13 + 0x30);
    lVar8 = 0;
    *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(lVar13 + 0x34);
    *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(lVar13 + 0x38);
    puVar6 = PTR_DAT_04bc8f08;
    *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(lVar11 + 0x30);
    puVar2 = PTR_DAT_04bc8f88 + 0x10;
    puVar3 = PTR_DAT_04bc8f78 + 0x10;
    puVar4 = PTR_DAT_04bc8f80 + 0x10;
    *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(lVar11 + 0x34);
    *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(lVar11 + 0x38);
    do {
      local_f0 = (char *)((ulong)local_f0 & 0xffffffff00000000);
      lVar13 = lVar8 * 8;
      plVar9 = (long *)(**(code **)(**(long **)pcVar1 + 0x30))(*(long **)pcVar1,0x590,8);
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      *plVar9 = (long)(puVar6 + 0x10);
      plVar9[1] = 0;
      FUN_032ae014(plVar9 + 6);
      plVar9[0x48] = 0;
      plVar9[0x4b] = (long)&PTR_LAB_04b177d8;
      plVar9[0x51] = (long)&PTR_LAB_04b177d8;
      plVar9[0x57] = (long)&PTR_LAB_04b177d8;
      plVar9[0x5d] = (long)&PTR_LAB_04b177d8;
      plVar9[99] = (long)&PTR_LAB_04b177d8;
      *(undefined8 *)((long)plVar9 + 0x417) = 0;
      *(undefined8 *)((long)plVar9 + 0x24d) = 0;
      plVar9[0x49] = 0;
      plVar9[0x47] = 0;
      plVar9[0x46] = 0;
      plVar9[0x45] = 0;
      plVar9[0x44] = 0;
      plVar9[0x43] = 0;
      plVar9[0x42] = 0;
      plVar9[0x41] = 0;
      plVar9[0x40] = 0;
      plVar9[0x4c] = 0;
      plVar9[0x52] = 0;
      plVar9[0x58] = 0;
      plVar9[0x5e] = 0;
      plVar9[100] = 0;
      plVar9[0x69] = (long)puVar2;
      plVar9[0x6a] = 0;
      plVar9[0x6f] = (long)puVar2;
      plVar9[0x70] = 0;
      plVar9[0x75] = (long)puVar2;
      plVar9[0x76] = 0;
      plVar9[0x7b] = (long)puVar2;
      plVar9[0x7c] = 0;
      plVar9[0x82] = 0;
      plVar9[0x81] = 0;
      local_f0 = (char *)CONCAT44((int)((ulong)local_f0 >> 0x20),6);
      *(undefined2 *)(plVar9 + 0x4a) = 0x41;
      *(undefined2 *)((long)plVar9 + 0x253) = 0x50f;
      plVar9[0x9c] = (long)&PTR_LAB_04b17778;
      plVar9[0xa2] = (long)puVar3;
      plVar9[0x8d] = 0;
      *(undefined4 *)(plVar9 + 0x8e) = 0;
      plVar9[0x8f] = 0;
      *(undefined1 *)(plVar9 + 0x90) = 0;
      plVar9[0x98] = 0;
      *(undefined4 *)(plVar9 + 0x99) = 0;
      plVar9[0x9a] = 0;
      *(undefined1 *)(plVar9 + 0x9b) = 0;
      plVar9[0x91] = 0;
      plVar9[0x92] = 0;
      plVar9[0x93] = 0;
      plVar9[0x94] = 0;
      plVar9[0x95] = 0;
      plVar9[0x96] = 0;
      *(undefined4 *)(plVar9 + 0x97) = 0;
      plVar9[0x84] = 0;
      plVar9[0x85] = 0;
      plVar9[0x86] = 0;
      plVar9[0x87] = 0;
      plVar9[0x88] = 0;
      plVar9[0x89] = 0;
      plVar9[0x8a] = 0;
      plVar9[0x8b] = 0;
      *(undefined4 *)(plVar9 + 0x8c) = 0;
      plVar9[0x9d] = 0;
      plVar9[0xa3] = 0;
      plVar9[0xa8] = (long)puVar4;
      plVar9[0xa9] = 0;
      plVar9[0xb1] = 0;
      plVar9[0xae] = 0;
      plVar9[0xaf] = 0;
      *(undefined4 *)(plVar9 + 0xb0) = 0;
      __ptr_00 = *(void **)(param_1 + lVar13 + 0x4a0);
      *(long **)(param_1 + lVar13 + 0x4a0) = plVar9;
      if (__ptr_00 != (void *)0x0) {
        FUN_03286c9c(__ptr_00);
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr_00);
        }
        else {
          plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,__ptr_00);
          }
        }
      }
      uStack_cd = 0;
      local_c8 = 0;
      local_e0 = (char *)0x0;
      local_d8 = 0;
      uStack_d1 = 0;
      local_c0 = &PTR_LAB_04b17778;
      local_b8 = (long *)0x0;
      local_78 = 0;
      local_74 = 1;
      local_90 = &DAT_04b177a8;
      puStack_88 = PTR_DAT_04bb2120;
      local_80 = 0x100000000;
      local_70 = 0xffffffff;
      pcStack_e8 = *(char **)(*(long *)(param_1 + lVar8 * 8 + 0x398) + 0xf0);
      lVar16 = *(long *)(param_1 + 0x390);
      local_188 = (undefined **)&DAT_04b177a8;
      pcStack_180 = "L_BtnBalloon_00";
      local_f0 = pcVar1;
      lVar11 = FUN_032cb8e0(&local_100,&local_188,*(undefined8 *)(lVar16 + 0xf0));
      if (lVar11 == 0) {
LAB_03282670:
        local_e0 = (char *)0x0;
      }
      else {
        local_e0 = (char *)0x0;
        if (*(long *)(lVar11 + 0xe8) != 0) {
          puVar15 = *(undefined **)(*(long *)(lVar11 + 0xe8) + 0x30);
          puVar5 = PTR_DAT_04bb2120;
          if (puVar15 != (undefined *)0x0) {
            puVar5 = puVar15;
          }
          for (lVar11 = *(long *)(lVar16 + 0x110); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
            while (puVar5 < *(undefined **)(lVar11 + 0x20)) {
              lVar11 = *(long *)(lVar11 + 8);
              if (lVar11 == 0) goto LAB_03282670;
            }
            if (puVar5 <= *(undefined **)(lVar11 + 0x20)) {
              local_e0 = (char *)(lVar11 + 0x28);
              goto LAB_03282674;
            }
          }
          goto LAB_03282670;
        }
      }
LAB_03282674:
      local_c8 = *(undefined8 *)(param_1 + 0x518);
      local_188 = &PTR_LAB_04b17638;
      uStack_d1._1_3_ = SUB83(param_1 + 0x520,0);
      uStack_cd = (undefined5)((ulong)(param_1 + 0x520) >> 0x18);
      local_178 = FUN_032828c4;
      local_170 = 0;
      local_16c = 0;
      pcStack_180 = param_1;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      local_b8 = (long *)(*(code *)local_188[3])(&local_188,local_b0);
      FUN_032873d0(*(undefined8 *)(param_1 + lVar13 + 0x4a0),&local_f0);
      local_188 = (undefined **)CONCAT44(local_188._4_4_,8);
      *(ushort *)(*(long *)(param_1 + lVar13 + 0x4a0) + 0x250) =
           *(ushort *)(*(long *)(param_1 + lVar13 + 0x4a0) + 0x250) | 0x100;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xb);
    *(char **)(param_1 + 0x18) = "Balloon";
    if ((*(long *)(param_1 + 0x88) == 0) && (*(long *)(param_1 + 0xb8) == 0)) {
      param_1[0xa8] = '\0';
      param_1[0xa9] = '\0';
      param_1[0xaa] = '\0';
      param_1[0xab] = '\0';
      param_1[0xac] = '\0';
      param_1[0xad] = '\0';
      param_1[0xae] = '\0';
      param_1[0xaf] = '\0';
      *(char **)(param_1 + 0x98) = param_1;
      *(undefined1 **)(param_1 + 0xa0) = &LAB_03283f20;
      param_1[0xb8] = '\0';
      param_1[0xb9] = '\0';
      param_1[0xba] = '\0';
      param_1[0xbb] = '\0';
      param_1[0xbc] = '\0';
      param_1[0xbd] = '\0';
      param_1[0xbe] = '\0';
      param_1[0xbf] = '\0';
      *(undefined ***)(param_1 + 0x90) = &PTR_LAB_04b17580;
      *(char **)(param_1 + 0x88) = param_1 + 0x90;
      lVar13 = *(long *)(param_1 + 0x130);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x130);
    }
    if ((lVar13 == 0) && (*(long *)(param_1 + 0x160) == 0)) {
      param_1[0x160] = '\0';
      param_1[0x161] = '\0';
      param_1[0x162] = '\0';
      param_1[0x163] = '\0';
      param_1[0x164] = '\0';
      param_1[0x165] = '\0';
      param_1[0x166] = '\0';
      param_1[0x167] = '\0';
      *(undefined ***)(param_1 + 0x138) = &PTR_LAB_04b17580;
      *(char **)(param_1 + 0x140) = param_1;
      *(char **)(param_1 + 0x130) = param_1 + 0x138;
      *(undefined1 **)(param_1 + 0x148) = &LAB_03283f30;
      param_1[0x150] = '\0';
      param_1[0x151] = '\0';
      param_1[0x152] = '\0';
      param_1[0x153] = '\0';
      param_1[0x154] = '\0';
      param_1[0x155] = '\0';
      param_1[0x156] = '\0';
      param_1[0x157] = '\0';
    }
    if ((*(long *)(param_1 + 0x1d8) == 0) && (*(long *)(param_1 + 0x208) == 0)) {
      param_1[0x208] = '\0';
      param_1[0x209] = '\0';
      param_1[0x20a] = '\0';
      param_1[0x20b] = '\0';
      param_1[0x20c] = '\0';
      param_1[0x20d] = '\0';
      param_1[0x20e] = '\0';
      param_1[0x20f] = '\0';
      *(undefined ***)(param_1 + 0x1e0) = &PTR_LAB_04b17580;
      *(char **)(param_1 + 0x1e8) = param_1;
      *(char **)(param_1 + 0x1d8) = param_1 + 0x1e0;
      *(undefined1 **)(param_1 + 0x1f0) = &LAB_032840ec;
      param_1[0x1f8] = '\0';
      param_1[0x1f9] = '\0';
      param_1[0x1fa] = '\0';
      param_1[0x1fb] = '\0';
      param_1[0x1fc] = '\0';
      param_1[0x1fd] = '\0';
      param_1[0x1fe] = '\0';
      param_1[0x1ff] = '\0';
      lVar13 = *(long *)(param_1 + 0x280);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x280);
    }
    if ((lVar13 == 0) && (*(long *)(param_1 + 0x2b0) == 0)) {
      *(char **)(param_1 + 0x290) = param_1;
      *(undefined ***)(param_1 + 0x288) = &PTR_LAB_04b17580;
      *(undefined1 **)(param_1 + 0x298) = &LAB_032840f0;
      param_1[0x2a0] = '\0';
      param_1[0x2a1] = '\0';
      param_1[0x2a2] = '\0';
      param_1[0x2a3] = '\0';
      param_1[0x2a4] = '\0';
      param_1[0x2a5] = '\0';
      param_1[0x2a6] = '\0';
      param_1[0x2a7] = '\0';
      *(char **)(param_1 + 0x280) = param_1 + 0x288;
      param_1[0x2b0] = '\0';
      param_1[0x2b1] = '\0';
      param_1[0x2b2] = '\0';
      param_1[0x2b3] = '\0';
      param_1[0x2b4] = '\0';
      param_1[0x2b5] = '\0';
      param_1[0x2b6] = '\0';
      param_1[0x2b7] = '\0';
    }
    if ((*(long *)(param_1 + 0x328) == 0) && (*(long *)(param_1 + 0x358) == 0)) {
      *(char **)(param_1 + 0x338) = param_1;
      *(undefined ***)(param_1 + 0x330) = &PTR_LAB_04b17580;
      *(undefined1 **)(param_1 + 0x340) = &LAB_03284220;
      param_1[0x348] = '\0';
      param_1[0x349] = '\0';
      param_1[0x34a] = '\0';
      param_1[0x34b] = '\0';
      param_1[0x34c] = '\0';
      param_1[0x34d] = '\0';
      param_1[0x34e] = '\0';
      param_1[0x34f] = '\0';
      *(char **)(param_1 + 0x328) = param_1 + 0x330;
      param_1[0x358] = '\0';
      param_1[0x359] = '\0';
      param_1[0x35a] = '\0';
      param_1[0x35b] = '\0';
      param_1[0x35c] = '\0';
      param_1[0x35d] = '\0';
      param_1[0x35e] = '\0';
      param_1[0x35f] = '\0';
      lVar13 = *(long *)(param_1 + 0x20);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x20);
    }
    if (lVar13 == 0) {
      *(char **)(param_1 + 0x28) = param_1 + 0x38;
      param_1[0x30] = -1;
      param_1[0x31] = -1;
      param_1[0x32] = -1;
      param_1[0x33] = -1;
    }
    param_1[2000] = '\x01';
    if (*(long **)(param_1 + 0x380) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x380) + 0x28))();
    }
    if (*(long **)(param_1 + 0x388) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x388) + 0x28))();
    }
  }
  return;
}

