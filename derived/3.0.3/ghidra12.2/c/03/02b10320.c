
/* WARNING: Removing unreachable block (ram,0x02b10474) */
/* WARNING: Removing unreachable block (ram,0x02b10484) */

void FUN_02b10320(long param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 extraout_w12;
  undefined4 extraout_w12_00;
  long lVar20;
  int iVar21;
  long lVar22;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  uint local_c8;
  uint uStack_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined *local_b8;
  int local_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined1 *local_98;
  undefined **local_88;
  long lStack_80;
  undefined ***local_78;
  
  puVar7 = PTR_DAT_04bb3238;
  local_b0 = 0;
  uVar17 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)(param_1 + 0x48) = uVar17;
  *(undefined4 *)(param_1 + 0x4c) = uVar17;
  local_b8 = PTR_DAT_04bc43f8 + 0x10;
  iVar10 = *(int *)(param_2 + 8);
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar10);
  if (iVar10 == 3) {
    uVar16 = *(uint *)(param_2 + 0x38);
    puVar19 = &DAT_05636e58;
    bVar8 = 0xf < uVar16;
LAB_02b103e0:
    local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar16);
    if (bVar8) {
      uVar16 = 0;
    }
    local_b0 = puVar19[(int)uVar16];
  }
  else {
    if (iVar10 == 2) {
      uVar16 = *(uint *)(param_2 + 0x40);
      puVar19 = &DAT_05636e30;
      bVar8 = 9 < uVar16;
      goto LAB_02b103e0;
    }
    if (iVar10 != 1) {
      return;
    }
    local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
    uVar12 = FUN_02b674f0(&local_88,*(undefined4 *)(param_2 + 0x3c));
    if ((uVar12 & 1) != 0) {
      local_b0 = (int)local_88;
    }
  }
  puVar4 = PTR_DAT_04bb6298;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar2 + 4) & 1) != 0) && (*(int *)(param_2 + 8) == 1)) {
      local_b0 = 0x26;
    }
  }
  lVar22 = *(long *)PTR_DAT_04bb5008;
  local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
  puVar3 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar3[1] != 0) {
    local_e0 = PTR_DAT_04bc4608 + 0x10;
    local_d0 = PTR_DAT_04bb2010 + 0x10;
    local_d4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
    local_d8 = CONCAT31(local_d8._1_3_,PTR_DAT_04bbc570[8]);
    local_c8 = *(uint *)(PTR_DAT_04bbc570 + 0x18);
    uStack_c4 = *(uint *)(PTR_DAT_04bbc570 + 0x1c);
    uVar17 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_bc = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    local_c0 = uVar17;
    if (local_b0 != 0) {
      ppuStack_a0 = &local_b8;
      local_a8 = &PTR_FUN_04a9b150;
      local_98 = (undefined1 *)&local_e0;
      if (puVar3[1] != 0) {
        local_98 = (undefined1 *)&local_e0;
        plVar13 = (long *)(*(code *)**(undefined8 **)(puVar3[1] + 0x10))();
        iVar10 = (**(code **)(*plVar13 + 0x18))();
        uVar17 = extraout_w12;
        if (0 < iVar10) {
          iVar21 = 0;
          do {
            FUN_01360490(&local_88,puVar3[1],iVar21);
            uVar12 = (*(code *)*local_a8)(&local_a8,&local_88);
            uVar17 = extraout_w12_00;
            if ((uVar12 & 1) != 0) break;
            bVar8 = iVar10 + -1 != iVar21;
            iVar21 = iVar21 + 1;
          } while (bVar8);
        }
      }
    }
    if ((((puVar3[1] == 0) || (0x11f < local_c8)) || (0xff < uStack_c4)) ||
       (uVar16 = *(uint *)(puVar3[1] + (ulong)local_c8 * 0x400 + (ulong)uStack_c4 * 4 + 0x30),
       0x35 < uVar16)) {
      uVar17 = *(undefined4 *)puVar7;
    }
    else {
      uVar18 = 0;
      do {
        uVar11 = *(uint *)(lVar22 + 0x1e18 + ((long)((ulong)uVar18 << 0x20) >> 0x1d) + 4);
        if (uVar11 == uVar16) {
          uVar17 = *(undefined4 *)(lVar22 + 0x1e18 + (long)(int)uVar18 * 8);
          break;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0x36);
      if (uVar11 != uVar16) {
        uVar17 = *(undefined4 *)puVar7;
      }
    }
    *(undefined4 *)(param_1 + 0x48) = uVar17;
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar22 = *(long *)PTR_DAT_04bb27c0;
  if (lVar22 != 0) {
    uVar16 = *(uint *)(param_1 + 0x48);
    if (((uVar16 == 0) ||
        (plVar13 = *(long **)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                             ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
       (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar16)))) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar22 + 0x288) == 1 || *(int *)(lVar22 + 0x288) == -1) {
      plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar22 = *(long *)puVar2;
      iVar10 = (**(code **)(*plVar14 + 0x60))();
      if (iVar10 < 0x11) {
        uVar16 = 1;
      }
      else {
        if (4 < *(uint *)(lVar22 + 0x5e8)) goto LAB_02b10664;
        uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar22 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02b10664:
      uVar16 = 0;
    }
    if (plVar13 != (long *)0x0) {
      lVar22 = plVar13[0x2a];
      uVar18 = *(uint *)(plVar13 + 0x49);
      if (((*PTR_DAT_04bc4410 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4410);
      }
      uVar11 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bc4408);
      if ((((int)lVar22 == 1) && ((uVar11 & uVar16) != 0)) && ((uVar18 >> 4 & 1) != 0)) {
        lVar22 = plVar13[0xc];
        if (lVar22 != 0) {
          *(uint *)(lVar22 + 0x11a0) = *(uint *)(lVar22 + 0x11a0) & 0xfffffffe;
        }
        if (plVar13[0x11] != 0) {
          FUN_02a5b080(plVar13,plVar13[0x11],0);
        }
      }
    }
  }
  if (*(int *)(param_2 + 8) != 1) {
    return;
  }
  sVar5 = *(short *)puVar4;
  if (sVar5 != -1) {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x20);
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) != 0) {
      return;
    }
  }
  local_e0 = PTR_DAT_04bbfe68 + 0x10;
  local_d4 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_d8 = 1;
  uVar9 = FUN_017baf44();
  local_d0 = (undefined *)(CONCAT71(local_d0._1_7_,uVar9) & 0xffffffffffffff01);
  local_a8 = (undefined **)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_2 + 0x3c));
  local_88 = &PTR_FUN_04aa1900;
  local_78 = &local_a8;
  lStack_80 = param_1;
  uVar15 = FUN_01a4fa00(&local_e0);
  FUN_01a51a0c(&local_e0,0,uVar15,&local_88);
  uVar16 = *(uint *)(param_1 + 0x4c);
  if (uVar16 == *(uint *)puVar7) {
    return;
  }
  lVar22 = *(long *)puVar2;
  if (lVar22 == 0) {
    return;
  }
  if (((uVar16 == 0) ||
      (lVar20 = *(long *)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                         ((ulong)(uVar16 >> 0x11) & 0x7ff8)), lVar20 == 0)) ||
     (((*(uint *)(lVar20 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar20 + 0x230) != uVar16)))) {
    lVar20 = 0;
  }
  if ((*(int *)(lVar22 + 0x288) == 1) || (*(int *)(lVar22 + 0x288) == -1)) {
    plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar22 = *(long *)puVar2;
    iVar10 = (**(code **)(*plVar13 + 0x60))();
    if (iVar10 < 0x11) {
      uVar16 = 1;
      goto joined_r0x02b108b0;
    }
    if (*(uint *)(lVar22 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar22 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b108b0;
    }
  }
  uVar16 = 0;
joined_r0x02b108b0:
  if (lVar20 != 0) {
    uVar16 = uVar16 ^ 1;
    if (*(int *)(lVar20 + 0x150) != 1) {
      uVar16 = 1;
    }
    if ((((uVar16 == 0) && ((*(uint *)(lVar20 + 0x248) >> 4 & 1) != 0)) &&
        ((*(uint *)(lVar20 + 0x248) >> 9 & 1) == 0)) &&
       ((puVar1 = (uint *)(lVar20 + 0x248), (*puVar1 >> 1 & 1) == 0 && ((*puVar1 >> 8 & 1) == 0))))
    {
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = *puVar1 | 0x200;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (*(long *)(lVar20 + 0xb0) != lVar20 + 0xa8) {
        lVar22 = (long)*(int *)(lVar20 + 0xbc);
        plVar13 = (long *)(*(long *)(lVar20 + 0xb0) - lVar22);
        do {
          (**(code **)(*plVar13 + 0xb0))(plVar13);
          plVar13 = (long *)(*(long *)((long)plVar13 + lVar22 + 8) - lVar22);
        } while (plVar13 != (long *)((lVar20 + 0xa8) - lVar22));
      }
    }
  }
  return;
}

