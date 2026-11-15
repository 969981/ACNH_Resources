
/* WARNING: Removing unreachable block (ram,0x0246cfa4) */
/* WARNING: Removing unreachable block (ram,0x0246d0b8) */

void FUN_0246cf20(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  char *pcVar5;
  char *__dest;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  uint *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined *local_108;
  char *local_100;
  int local_f8;
  char local_f4 [6];
  char acStack_ee [2];
  char acStack_ec [6];
  undefined1 local_e6;
  undefined1 local_b5;
  undefined *local_b0;
  char *local_a8;
  int local_a0;
  char local_9c [7];
  char cStack_95;
  char acStack_94 [7];
  undefined1 local_8d;
  undefined1 local_5d;
  undefined4 local_54;
  
  puVar4 = PTR_DAT_04bb2200;
  fVar18 = -20.0;
  bVar1 = *(char *)(param_1 + 0x58d) == '\0' ||
          *(int *)(param_1 + 0x580) < *(int *)(param_1 + 0x588);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar17 = *(float *)((long)puVar2 + 0x27c);
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar12 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar12 != 0)) {
    local_138 = local_138 & 0xffffffff00000000;
    lVar12 = *(long *)(lVar12 + 0x118);
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x280);
      fVar18 = 0.0;
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 8), lVar12 != 0)) {
        pfVar9 = (float *)(**(code **)(*(long *)(lVar12 + 0x488) + 0xf0))(lVar12 + 0x488);
        fVar18 = *pfVar9;
      }
      lVar12 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar12 + 0x1590) + 0xf0))(lVar12 + 0x1590);
      fVar18 = fVar18 + *pfVar9;
    }
  }
  if (fVar18 <= fVar17) {
    if (fVar18 < fVar17) {
      fVar16 = fVar17 + -0.5;
      bVar6 = true;
      if ((fVar18 < fVar16) && (bVar6 = false, !NAN(fVar17) && !NAN(fVar16))) {
        bVar6 = fVar17 < fVar16;
      }
      goto LAB_0246d030;
    }
  }
  else {
    fVar16 = fVar17 + 0.5;
    bVar6 = true;
    if ((fVar16 < fVar18) && (bVar6 = false, !NAN(fVar16) && !NAN(fVar17))) {
      bVar6 = fVar16 < fVar17;
    }
LAB_0246d030:
    fVar17 = fVar18;
    if (!bVar6) {
      fVar17 = fVar16;
    }
  }
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar2 + 0x27c) = fVar17;
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar10 = FUN_016ec07c(0,puVar2 + 0x4f,1);
  if ((uVar10 & 1) == 0) {
    FUN_0236a88c(param_1,6,1,0);
    return;
  }
  fVar18 = -20.0;
  if ((*(long *)puVar4 != 0) && (lVar12 = *(long *)(*(long *)puVar4 + 0x50), lVar12 != 0)) {
    local_138 = local_138 & 0xffffffff00000000;
    lVar12 = *(long *)(lVar12 + 0x118);
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x280);
      fVar18 = 0.0;
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 8), lVar12 != 0)) {
        pfVar9 = (float *)(**(code **)(*(long *)(lVar12 + 0x488) + 0xf0))(lVar12 + 0x488);
        fVar18 = *pfVar9;
      }
      lVar12 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar12 + 0x1560) + 0xf0))(lVar12 + 0x1560);
      fVar18 = fVar18 + *pfVar9;
    }
  }
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar2 + 0x2ec) = fVar18;
  *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  uVar10 = FUN_02464448(param_1);
  if ((uVar10 & 1) != 0) {
    return;
  }
  local_138 = 0;
  local_130 = 0;
  local_118 = 0x3dcccccd00000000;
  local_128 = 0;
  local_120 = 0x3dcccccd3dcccccd;
  local_110 = 0;
  local_f4[0] = s_CommonSwimWait_0409cb5c[0];
  local_f4[1] = s_CommonSwimWait_0409cb5c[1];
  local_f4[2] = s_CommonSwimWait_0409cb5c[2];
  local_f4[3] = s_CommonSwimWait_0409cb5c[3];
  local_f4[4] = s_CommonSwimWait_0409cb5c[4];
  local_f4[5] = s_CommonSwimWait_0409cb5c[5];
  local_100 = local_f4;
  local_f8 = 0x40;
  local_b5 = 0;
  acStack_ee[0] = s_CommonSwimWait_0409cb5c[6];
  acStack_ee[1] = s_CommonSwimWait_0409cb5c[7];
  acStack_ec[0] = s_CommonSwimWait_0409cb5c[8];
  acStack_ec[1] = s_CommonSwimWait_0409cb5c[9];
  acStack_ec[2] = s_CommonSwimWait_0409cb5c[10];
  acStack_ec[3] = s_CommonSwimWait_0409cb5c[0xb];
  acStack_ec[4] = s_CommonSwimWait_0409cb5c[0xc];
  acStack_ec[5] = s_CommonSwimWait_0409cb5c[0xd];
  local_e6 = 0;
  local_108 = PTR_DAT_04bb2bc0 + 0x10;
  local_a0 = 0x40;
  local_5d = 0;
  local_8d = 0;
  local_a8 = local_9c;
  local_9c[0] = s_PlayerSwimStand_0407d193[0];
  local_9c[1] = s_PlayerSwimStand_0407d193[1];
  local_9c[2] = s_PlayerSwimStand_0407d193[2];
  local_9c[3] = s_PlayerSwimStand_0407d193[3];
  local_9c[4] = s_PlayerSwimStand_0407d193[4];
  local_9c[5] = s_PlayerSwimStand_0407d193[5];
  local_9c[6] = s_PlayerSwimStand_0407d193[6];
  cStack_95 = s_PlayerSwimStand_0407d193[7];
  acStack_94[0] = s_PlayerSwimStand_0407d193[8];
  acStack_94[1] = s_PlayerSwimStand_0407d193[9];
  acStack_94[2] = s_PlayerSwimStand_0407d193[10];
  acStack_94[3] = s_PlayerSwimStand_0407d193[0xb];
  acStack_94[4] = s_PlayerSwimStand_0407d193[0xc];
  acStack_94[5] = s_PlayerSwimStand_0407d193[0xd];
  acStack_94[6] = s_PlayerSwimStand_0407d193[0xe];
  local_b0 = local_108;
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x1830) + 0xf0))(lVar12 + 0x1830);
  local_138 = CONCAT44(local_138._4_4_,*puVar11);
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x1860) + 0xf0))(lVar12 + 0x1860);
  local_138 = CONCAT44(*puVar11,(undefined4)local_138);
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x1890) + 0xf0))(lVar12 + 0x1890);
  local_130 = CONCAT44(local_130._4_4_,*puVar11);
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x18c0) + 0xf0))(lVar12 + 0x18c0);
  local_130 = CONCAT44(*puVar11,(undefined4)local_130);
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x18f0) + 0xf0))(lVar12 + 0x18f0);
  local_128 = CONCAT44(local_128._4_4_,*puVar11);
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x18f0) + 0xf0))(lVar12 + 0x18f0);
  local_120 = CONCAT44(local_120._4_4_,*puVar11);
  lVar12 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x1800) + 0xf0))(lVar12 + 0x1800);
  pcVar5 = local_100;
  local_118 = 0;
  local_120 = CONCAT44(*puVar11,(undefined4)local_120);
  local_110 = bVar1;
  if (local_100 != "CommonDiveWait") {
    iVar8 = 0xe;
    if (local_f8 < 0xf) {
      iVar8 = local_f8 + -1;
    }
    memcpy(local_100,"CommonDiveWait",(long)iVar8);
    pcVar5[iVar8] = '\0';
  }
  __dest = local_a8;
  (**(code **)(DAT_054cf088 + 0x18))(&DAT_054cf088);
  pcVar5 = DAT_054cf090;
  if (__dest != DAT_054cf090) {
    (**(code **)(DAT_054cf088 + 0x18))(&DAT_054cf088);
    lVar12 = 0;
    do {
      if (DAT_054cf090[lVar12] == '\0') goto LAB_0246d3e8;
      if (DAT_054cf090[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0246d3e8;
      }
      if (DAT_054cf090[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_0246d3e8;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0246d3e8:
    iVar8 = (int)lVar12;
    if (local_a0 <= (int)lVar12) {
      iVar8 = local_a0 + -1;
    }
    memcpy(__dest,pcVar5,(long)iVar8);
    __dest[iVar8] = '\0';
  }
  FUN_02464b10(param_1,&local_138);
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x15c) != 0)) {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar12 + 0x158);
    }
    bVar14 = *(byte *)(param_1 + 0x1ee8);
    bVar13 = *pbVar3;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if ((bVar13 != bVar14) &&
       (local_54 = 0, (*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) != 0)) goto LAB_0246d508;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f0960);
      puVar15 = (uint *)&DAT_054f0958;
      if (iVar8 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar15 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar15 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar15 = puVar15 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  local_54 = 0x19;
  if ((((*puVar15 >> 0x19 & 1) == 0) && (*(char *)(param_1 + 0x17ac) == '\0')) &&
     (((*(uint *)(param_1 + 0xed0) & 1) != 0 ||
      (local_54 = 0, (*(uint *)(param_1 + 0xec8) & 1) != 0)))) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined1 *)(param_1 + 0x1980) = 1;
    local_54 = 0xfb;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar12 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar12 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar12,0xfb);
    return;
  }
LAB_0246d508:
  FUN_0231e48c(param_1);
  if (*(char *)(param_1 + 0x58d) != '\0') {
    uVar7 = (**(code **)(*(long *)(param_1 + 0x578) + (ulong)*(byte *)(param_1 + 0x58c) * 8))
                      (param_1 + 0x578);
    *(undefined4 *)(param_1 + 0x580) = uVar7;
  }
  return;
}

