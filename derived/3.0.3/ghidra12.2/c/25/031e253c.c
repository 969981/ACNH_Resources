
void FUN_031e253c(long param_1,long *param_2)

{
  undefined1 *__src;
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint local_fc;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_a5;
  undefined8 local_a0;
  long local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined *local_70;
  char *local_68;
  
  plVar12 = param_2 + 4;
  (**(code **)(*plVar12 + 0x18))(plVar12);
  (**(code **)(*plVar12 + 0x18))(plVar12);
  puVar1 = PTR_DAT_04bb2020;
  pcVar10 = (char *)param_2[5];
  if ((pcVar10 == "") || (*pcVar10 == '\0')) {
    if (((DAT_0571bfb0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0571bfb0), iVar6 != 0)) {
      DAT_0571bfa0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571bfa8 = "L_RingTool_00";
      __cxa_guard_release(&DAT_0571bfb0);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_f0 = (undefined *)*param_2;
    local_d8 = (undefined8 *)0x0;
    local_f8 = *(undefined **)PTR_PTR_04bc4e50;
    local_e8 = &DAT_04b0cbc8;
    lVar16 = *(long *)(param_2[1] + 0x10);
    lVar14 = lVar16 + 0x200;
  }
  else {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "/L_RingTool_00/L_Btn_";
    if ((((((((*pcVar10 == '/') && (pcVar10[1] == 'L')) && (pcVar10[2] == '_')) &&
           ((pcVar10[3] == 'R' && (pcVar10[4] == 'i')))) && (pcVar10[5] == 'n')) &&
         (((pcVar10[6] == 'g' && (pcVar10[7] == 'T')) &&
          ((pcVar10[8] == 'o' &&
           (((pcVar10[9] == 'o' && (pcVar10[10] == 'l')) && (pcVar10[0xb] == '_')))))))) &&
        ((pcVar10[0xc] == '0' && (pcVar10[0xd] == '0')))) &&
       ((pcVar10[0xe] == '/' &&
        (((pcVar10[0xf] == 'L' && (pcVar10[0x10] == '_')) &&
         ((pcVar10[0x11] == 'B' &&
          (((pcVar10[0x12] == 't' && (pcVar10[0x13] == 'n')) && (pcVar10[0x14] == '_')))))))))) {
      puVar13 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar13 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e38), (uVar7 & 1) != 0)) {
        if (((DAT_0571c038 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0571c038), iVar6 != 0)) {
          DAT_0571bfb8 = PTR_DAT_04bb2020 + 0x10;
          DAT_0571bfc0 = "InvAnim";
          DAT_0571bfd0 = &DAT_0407ebb1;
          DAT_0571bff0 = &DAT_0407ebb1;
          DAT_0571c010 = &DAT_0407ebb1;
          DAT_0571bfe0 = "Confirm";
          DAT_0571c000 = "ActiveReg";
          DAT_0571c020 = "State";
          DAT_0571c030 = &DAT_0407ebb1;
          DAT_0571bfc8 = DAT_0571bfb8;
          DAT_0571bfd8 = DAT_0571bfb8;
          DAT_0571bfe8 = DAT_0571bfb8;
          DAT_0571bff8 = DAT_0571bfb8;
          DAT_0571c008 = DAT_0571bfb8;
          DAT_0571c018 = DAT_0571bfb8;
          DAT_0571c028 = DAT_0571bfb8;
          __cxa_guard_release(&DAT_0571c038);
        }
        if (((DAT_0571c050 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0571c050), iVar6 != 0)) {
          DAT_0571c040 = 0x400000002;
          DAT_0571c048 = &DAT_0571bfb8;
          __cxa_guard_release(&DAT_0571c050);
        }
        if (((DAT_0571c078 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0571c078), iVar6 != 0)) {
          DAT_0571c058 = PTR_DAT_04bb2020 + 0x10;
          DAT_0571c060 = "P_Icon_00";
          DAT_0571c070 = "P_IconActiveReg_00";
          DAT_0571c068 = DAT_0571c058;
          __cxa_guard_release(&DAT_0571c078);
        }
        local_98 = *param_2;
        local_88 = 0;
        puStack_80 = &DAT_0571c040;
        local_78 = 2;
        puStack_90 = &DAT_04b0cbd8;
        local_a0 = *(undefined8 *)PTR_PTR_04bc4e50;
        FUN_0386e230(puVar13[2] + 0x2c8,puVar13[2],&local_a0);
        puVar1 = PTR_DAT_04bb3350;
        lVar16 = *param_2;
        lVar14 = *(long *)PTR_DAT_04bb2698;
        if (lVar14 == 0) {
          puVar13 = malloc(0xa8);
        }
        else {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar14 + 8);
          if (lVar8 != 0) {
            plVar9 = (long *)(lVar8 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            puVar13 = (undefined8 *)0x0;
          }
          else {
            puVar13 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0xa8,8);
          }
        }
        FUN_03c5ba20(puVar13,3);
        *puVar13 = &PTR_FUN_04b0cc08;
        puVar13[0x11] = &PTR_LAB_04b0ccb0;
        local_f8 = (undefined *)((ulong)local_f8._4_4_ << 0x20);
        *(undefined2 *)(puVar13 + 4) = 1;
        *(undefined4 *)((long)puVar13 + 0x2c) = 0x80000000;
        *(undefined4 *)(puVar13 + 8) = 0;
        *(undefined4 *)((long)puVar13 + 0x24) = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        FUN_03c5bcd4(puVar13);
        if ((undefined8 *)puVar13[10] != puVar13 + 9) {
          lVar14 = (long)*(int *)((long)puVar13 + 0x5c);
          puVar15 = (undefined8 *)((long)puVar13[10] - lVar14);
          do {
            (**(code **)*puVar15)(puVar15,*(undefined4 *)((long)puVar13 + 0x24));
            puVar15 = (undefined8 *)(*(long *)((long)puVar15 + lVar14 + 8) - lVar14);
          } while (puVar15 != (undefined8 *)((long)(puVar13 + 9) - lVar14));
        }
        lVar14 = *(long *)(lVar16 + 0x18);
        plVar11 = (long *)(lVar14 + 0x60);
        lVar8 = *plVar11;
        plVar9 = (long *)((long)*(int *)(lVar14 + 0x74) + (long)puVar13);
        *plVar11 = (long)plVar9;
        *plVar9 = lVar8;
        plVar9[1] = (long)plVar11;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 8) = plVar9;
        }
        *(int *)(lVar14 + 0x70) = *(int *)(lVar14 + 0x70) + 1;
        lVar14 = *(long *)PTR_DAT_04bb2698;
        if (lVar14 == 0) {
          plVar9 = malloc(0x10);
        }
        else {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
          plVar9 = (long *)(lVar14 + 8);
          if (lVar8 != 0) {
            plVar9 = (long *)(lVar8 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)0x0;
          }
          else {
            plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x10,0xfffffffc);
          }
        }
        *plVar9 = lVar16;
        puVar13[3] = *(undefined8 *)(lVar16 + 0x18);
        puVar3 = PTR_PTR_04bb2238;
        plVar9[1] = (long)puVar13;
        puVar1 = PTR_DAT_04bb2020;
        *(long **)(lVar16 + 0x20) = plVar9;
        local_d0._0_3_ = 0x10000;
        local_cc = 0x3f800000;
        local_c8 = 0x100;
        puVar1 = puVar1 + 0x10;
        local_d8 = *(undefined8 **)(puVar3 + 8);
        local_f8 = (undefined *)0x0;
        local_e8 = "SelectActiveReg";
        local_f0 = puVar1;
        local_e0 = puVar1;
        FUN_03c5cb04(plVar9,0,1,&local_f8);
        local_d8 = *(undefined8 **)(puVar3 + 8);
        local_d0._0_3_ = 0x10000;
        local_f8 = (undefined *)0x0;
        local_cc = 0x3f800000;
        local_c8 = 0x100;
        local_e8 = "UnSelectActiveReg";
        local_f0 = puVar1;
        local_e0 = puVar1;
        FUN_03c5cb04(plVar9,1,0,&local_f8);
        local_d8 = *(undefined8 **)(puVar3 + 8);
        local_d0 = CONCAT13(local_d0._3_1_,0x10000);
        local_f8 = (undefined *)0x0;
        local_cc = 0x3f800000;
        local_c8 = 0x100;
        local_e8 = "DecideActiveReg";
        local_f0 = puVar1;
        local_e0 = puVar1;
        FUN_03c5cb04(plVar9,1,2,&local_f8);
        uVar4 = (**(code **)(*(long *)plVar9[1] + 0x80))((long *)plVar9[1],1);
        uVar5 = (**(code **)(*(long *)plVar9[1] + 0x80))((long *)plVar9[1],2);
        plVar11 = (long *)plVar9[1];
        lVar14 = plVar11[0xd] + (long)(int)(uVar4 + *(uint *)(plVar11 + 0xc) * uVar5) * 0x18;
        if (*(uint *)((long)plVar11 + 100) <= uVar5 || *(uint *)(plVar11 + 0xc) <= uVar4) {
          lVar14 = 0;
        }
        if (*(int *)(lVar14 + 0xc) == -0x80000000) {
          *(undefined4 *)(lVar14 + 0xc) = 1;
          *(undefined1 *)(lVar14 + 0x14) = 0;
          plVar11 = (long *)plVar9[1];
        }
        uVar4 = (**(code **)(*plVar11 + 0x80))(plVar11,0);
        uVar5 = (**(code **)(*(long *)plVar9[1] + 0x80))((long *)plVar9[1],2);
        lVar8 = plVar9[1];
        lVar14 = *(long *)(lVar8 + 0x68) +
                 (long)(int)(uVar4 + *(uint *)(lVar8 + 0x60) * uVar5) * 0x18;
        if (*(uint *)(lVar8 + 100) <= uVar5 || *(uint *)(lVar8 + 0x60) <= uVar4) {
          lVar14 = 0;
        }
        if (*(int *)(lVar14 + 0x10) == -0x80000000) {
          *(undefined4 *)(lVar14 + 0x10) = 1;
          lVar8 = plVar9[1];
        }
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(plVar9);
        }
        else {
          plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar9);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,plVar9);
          }
        }
        *(undefined8 *)(lVar16 + 0x20) = 0;
        if (lVar8 == 0) {
          return;
        }
        local_a5 = 0;
        local_f0 = (undefined *)((long)&local_e8 + 4);
        local_e8 = (char *)CONCAT35(local_e8._5_3_,0x40);
        local_f8 = PTR_DAT_04bb2bc0 + 0x10;
        (**(code **)(local_70 + 0x18))(&local_70);
        lVar14 = 0;
        do {
          if (local_68[lVar14] == '\0') goto LAB_031e2d40;
          if (local_68[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_031e2d40;
          }
          if (local_68[lVar14 + 2] == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_031e2d40;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_031e2d40:
        *local_f0 = 0;
        (**(code **)(param_2[4] + 0x18))(plVar12);
        lVar16 = 0;
        do {
          if (*(char *)(param_2[5] + lVar16) == '\0') goto LAB_031e2d9c;
          lVar2 = param_2[5] + lVar16;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_031e2d9c;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_031e2d9c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_031e2d9c:
        if ((int)lVar14 < (int)lVar16) {
          (**(code **)(param_2[4] + 0x18))(plVar12);
          puVar1 = local_f0;
          __src = (undefined1 *)(param_2[5] + (long)(int)lVar14);
          if (local_f0 != __src) {
            lVar14 = 0;
            do {
              if (__src[lVar14] == '\0') goto LAB_031e2e08;
              if (__src[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_031e2e08;
              }
              if (__src[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_031e2e08;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_031e2e08:
            iVar6 = (int)lVar14;
            if ((int)local_e8 <= (int)lVar14) {
              iVar6 = (int)local_e8 + -1;
            }
            memcpy(local_f0,__src,(long)iVar6);
            puVar1[iVar6] = 0;
          }
        }
        local_fc = 0;
        uVar7 = FUN_038d2c30(&local_fc,&local_f8,10);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (local_fc < 8) {
          *(long *)(param_1 + (ulong)local_fc * 8 + 0x5d8) = lVar8;
          return;
        }
        return;
      }
    }
    pcVar10 = (char *)param_2[5];
    if (*pcVar10 != '/') {
      return;
    }
    if (pcVar10[1] != 'L') {
      return;
    }
    if (pcVar10[2] != '_') {
      return;
    }
    if (pcVar10[3] != 'R') {
      return;
    }
    if (pcVar10[4] != 'i') {
      return;
    }
    if (pcVar10[5] != 'n') {
      return;
    }
    if (pcVar10[6] != 'g') {
      return;
    }
    if (pcVar10[7] != 'T') {
      return;
    }
    if (pcVar10[8] != 'o') {
      return;
    }
    if (pcVar10[9] != 'o') {
      return;
    }
    if (pcVar10[10] != 'l') {
      return;
    }
    if (pcVar10[0xb] != '_') {
      return;
    }
    puVar13 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4fe8);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (((DAT_0571c1a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0571c1a0), iVar6 != 0)) {
      DAT_0571c080 = puVar1 + 0x10;
      DAT_0571c088 = &DAT_0407913a;
      DAT_0571c0a8 = &DAT_040fb700;
      DAT_0571c0c8 = &DAT_040f677e;
      DAT_0571c0e8 = &DAT_040a2a40;
      DAT_0571c108 = &DAT_040e63fc;
      DAT_0571c128 = &DAT_0407913f;
      DAT_0571c148 = &DAT_040c6d58;
      DAT_0571c168 = &DAT_040e6401;
      DAT_0571c098 = &DAT_0407ebb1;
      DAT_0571c0b8 = &DAT_0407ebb1;
      DAT_0571c0d8 = &DAT_0407ebb1;
      DAT_0571c0f8 = &DAT_0407ebb1;
      DAT_0571c118 = &DAT_0407ebb1;
      DAT_0571c138 = &DAT_0407ebb1;
      DAT_0571c158 = &DAT_0407ebb1;
      DAT_0571c178 = &DAT_0407ebb1;
      DAT_0571c188 = "ActiveReg";
      DAT_0571c198 = &DAT_0407ebb1;
      DAT_0571c090 = DAT_0571c080;
      DAT_0571c0a0 = DAT_0571c080;
      DAT_0571c0b0 = DAT_0571c080;
      DAT_0571c0c0 = DAT_0571c080;
      DAT_0571c0d0 = DAT_0571c080;
      DAT_0571c0e0 = DAT_0571c080;
      DAT_0571c0f0 = DAT_0571c080;
      DAT_0571c100 = DAT_0571c080;
      DAT_0571c110 = DAT_0571c080;
      DAT_0571c120 = DAT_0571c080;
      DAT_0571c130 = DAT_0571c080;
      DAT_0571c140 = DAT_0571c080;
      DAT_0571c150 = DAT_0571c080;
      DAT_0571c160 = DAT_0571c080;
      DAT_0571c170 = DAT_0571c080;
      DAT_0571c180 = DAT_0571c080;
      DAT_0571c190 = DAT_0571c080;
      __cxa_guard_release(&DAT_0571c1a0);
    }
    if (((DAT_0571c1b8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0571c1b8), iVar6 != 0)) {
      DAT_0571c1a8 = 0x900000002;
      DAT_0571c1b0 = &DAT_0571c080;
      __cxa_guard_release(&DAT_0571c1b8);
    }
    if (((DAT_0571c1d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0571c1d0), iVar6 != 0)) {
      DAT_0571c1c0 = puVar1 + 0x10;
      DAT_0571c1c8 = "N_RingSize_00";
      __cxa_guard_release(&DAT_0571c1d0);
    }
    local_f0 = (undefined *)*param_2;
    local_d8 = &DAT_0571c1a8;
    local_f8 = *(undefined **)PTR_PTR_04bc4e50;
    local_e8 = &DAT_04b0cbe8;
    lVar16 = puVar13[2];
    lVar14 = lVar16 + 0x208;
  }
  local_d0 = 0;
  local_e0 = (undefined *)0x0;
  FUN_0386e230(lVar14,lVar16,&local_f8);
  return;
}

