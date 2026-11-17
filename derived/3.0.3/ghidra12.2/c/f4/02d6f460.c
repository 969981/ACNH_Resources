
int FUN_02d6f460(ushort *param_1,uint *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  byte local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined *local_b0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ushort local_78;
  undefined4 local_74;
  undefined2 local_70;
  uint local_6c;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58 [2];
  
  local_64 = FUN_0308cdd0();
  puVar8 = PTR_DAT_04bb5ce0;
  puVar7 = PTR_DAT_04bb3170;
  if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xe9e) == '\0')) {
LAB_02d6f514:
    bVar9 = false;
  }
  else {
    uVar5 = *param_1;
    if (uVar5 == *(ushort *)PTR_DAT_04bb3170) goto LAB_02d6f514;
    local_58[0] = CONCAT22(local_58[0]._2_2_,*(ushort *)PTR_DAT_04bb3170);
    uVar10 = FUN_007ef180(param_1);
    FUN_0344d0c0(local_58,uVar5 & 0x7f,uVar10 & 1);
    puVar1 = puVar7;
    if (*(long *)puVar8 != 0) {
      puVar1 = (undefined *)(*(long *)puVar8 + 0xe9c);
    }
    FUN_007ef010(&local_5c,puVar1);
    if ((local_58[0] & 0xffff) != (uint)(ushort)local_5c) goto LAB_02d6f514;
    lVar17 = *(long *)puVar8;
    if (lVar17 == 0) {
      iVar11 = 2;
    }
    else {
      iVar11 = *(int *)(lVar17 + 0xea0);
    }
    bVar9 = iVar11 == local_64 && (char)param_2[2] == '\0';
    if (((char)param_2[2] != '\0') && (iVar11 == local_64)) {
      bVar9 = false;
      if (lVar17 != 0) {
        bVar9 = *(char *)(lVar17 + 0xedc) < '\0';
      }
      bVar9 = (bool)*(char *)((long)param_2 + 7) == bVar9;
    }
  }
  local_d8 = 0xfffe;
  FUN_0277d4ac(&local_d8);
  local_d0 = 0xfffe;
  FUN_0277d4ac(&local_d0);
  local_c0 = 0;
  local_b8 = 0;
  local_c4 = 0xff;
  local_b0 = PTR_DAT_04bbba70 + 0x10;
  local_90 = 0;
  uStack_88 = 0xfffe;
  FUN_0277d4ac(&uStack_88);
  local_80 = 0xfffe;
  FUN_0277d4ac(&local_80);
  local_78 = *(ushort *)puVar7;
  local_70 = 0;
  local_6c = 0;
  local_74 = 0xffffffff;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  if (lVar17 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar11 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  local_c4 = (byte)param_2[1];
  local_c8 = *(undefined4 *)(puVar21 + 7);
  local_b8 = *(undefined1 *)((long)param_2 + 5);
  lVar17 = *(long *)puVar8;
  if (7 < local_c4) {
    local_c4 = 0xff;
  }
  puVar21 = (undefined8 *)PTR_DAT_04bb37e0;
  if ((lVar17 != 0) && (*(char *)(lVar17 + 0xe9e) != '\0')) {
    puVar21 = (undefined8 *)(lVar17 + 0xe94);
  }
  local_80 = *puVar21;
  local_6c = (uint)*(byte *)((long)param_2 + 9);
  if (bVar9) {
    uVar16 = 4;
  }
  else {
    local_78 = *param_1;
    local_70 = CONCAT11(local_70._1_1_,*(undefined1 *)((long)param_2 + 7));
    local_90._4_4_ = local_64;
    uVar16 = 2;
  }
  local_90 = CONCAT44(local_90._4_4_,uVar16);
  iVar11 = FUN_0152352c(&local_d8);
  uVar10 = *param_2;
  cVar4 = *(char *)((long)param_2 + 6);
  if (iVar11 != 0) {
    if (iVar11 != 1) {
      return iVar11;
    }
    lVar17 = *(long *)PTR_DAT_04bb4860;
    sVar6 = *(short *)PTR_DAT_04bb6298;
    pcVar18 = "0201_01";
    if (sVar6 != -1) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      pcVar18 = "0201_01";
      if ((*puVar2 & 0x40) != 0) {
        pcVar18 = "0201";
      }
    }
    if (((*(char *)(lVar17 + 0x34) == '\0') || (2 < *(int *)(lVar17 + 0x10))) &&
       ((*(char *)(lVar17 + 100) == '\0' || (3 < *(int *)(lVar17 + 0x40))))) {
      *(char **)(lVar17 + 0x50) = pcVar18;
      *(undefined8 *)(lVar17 + 0x38) = 0;
      *(undefined4 *)(lVar17 + 0x40) = 3;
      *(undefined1 *)(lVar17 + 100) = 1;
      *(undefined8 *)(lVar17 + 0x5c) = 0;
      *(undefined1 *)(lVar17 + 0x58) = 0;
    }
  }
  puVar7 = PTR_DAT_04bb27c0;
  if (cVar4 == '\0') {
    return iVar11;
  }
  lVar17 = *(long *)PTR_DAT_04bbbc38;
  if (lVar17 == 0) {
    local_58[0] = 0;
  }
  else {
    local_58[0] = *(uint *)(lVar17 + 0xc);
  }
  local_60 = iVar11;
  local_5c = uVar10;
  if (local_58[0] != 0) {
    if (uVar10 < 4) {
      uVar15 = *(undefined8 *)(&DAT_04057aa0 + (long)(int)uVar10 * 8);
    }
    else {
      uVar15 = 0x100000007;
    }
    if (lVar17 == 0) {
      return iVar11;
    }
    FUN_014e4e14(lVar17,uVar15,0x100);
    return iVar11;
  }
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  if (lVar17 == 0) {
    return iVar11;
  }
  uVar20 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar20 == 0) ||
       (plVar19 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
      ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar20)) {
    plVar19 = (long *)0x0;
  }
  if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar7;
    iVar12 = (**(code **)(*plVar14 + 0x60))();
    if (iVar12 < 0x11) {
      uVar20 = 1;
      goto joined_r0x02d6f900;
    }
    if (*(uint *)(lVar17 + 0x5e8) < 5) {
      uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02d6f900;
    }
  }
  uVar20 = 0;
joined_r0x02d6f900:
  if (plVar19 != (long *)0x0) {
    lVar17 = plVar19[0x2a];
    uVar3 = *(uint *)(plVar19 + 0x49);
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar13 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb3278);
    if ((((int)lVar17 == 1) && ((uVar20 & uVar13) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
      FUN_008fe940(plVar19,uVar10,0xffffffff);
    }
  }
  return iVar11;
}

