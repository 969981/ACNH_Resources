
void FUN_03eb3a80(long param_1,long *param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  int iVar16;
  char *pcVar17;
  undefined *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  undefined1 local_204 [255];
  undefined1 local_105;
  undefined8 local_100;
  char *local_f8;
  undefined *local_f0;
  char *local_e8;
  undefined4 local_e0;
  char local_dc [63];
  undefined1 local_9d;
  
  puStack_210 = local_204;
  local_208 = 0x100;
  local_105 = 0;
  local_218 = PTR_DAT_04bb21f8 + 0x10;
  local_204[0] = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_218,"Env/%s.szs",param_2[1]);
  uVar9 = FUN_03eba3a0(&local_218);
  puVar2 = PTR_DAT_04bb2020;
  if (((uVar9 & 1) != 0) &&
     (plVar10 = (long *)FUN_03eb9ee0(&local_218,0x2000,0,1), plVar10 != (long *)0x0)) {
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar9 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb2860);
    if ((uVar9 & 1) != 0) goto LAB_03eb3bb4;
  }
  local_f0 = puVar2 + 0x10;
  local_e8 = "Env/LP_Sample.szs";
  plVar10 = (long *)FUN_03eb9ee0(&local_f0,0x2000,0,1);
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar9 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb2860);
    if ((uVar9 & 1) == 0) {
      plVar10 = (long *)0x0;
    }
  }
LAB_03eb3bb4:
  lVar1 = param_1 + 0x130;
  uVar5 = param_3;
  if (*(uint *)(param_1 + 0x8f8) <= param_3) {
    uVar5 = 0;
  }
  FUN_03a57430(lVar1,*(long *)(param_1 + 0x900) + (long)(int)uVar5 * 0x600,1);
  FUN_006cd430(&local_f0,plVar10);
  puVar2 = puVar2 + 0x10;
  local_f8 = "";
  local_100 = puVar2;
  iVar7 = FUN_03eba830(&local_f0,&local_100);
  FUN_038b3c54(&local_f0);
  if (iVar7 < 1) {
LAB_03eb3ee0:
    if ((param_4 & 1) != 0) {
      FUN_03a5ba60(lVar1,*(long *)(*(long *)(param_1 + 0x900) + 0x450) + 8,1,param_3);
    }
    return;
  }
  iVar16 = 0;
  puVar3 = PTR_DAT_04bb2bc0 + 0x10;
  puVar4 = PTR_DAT_04bb2870 + 0x10;
LAB_03eb3d18:
  local_e0 = 0x40;
  local_9d = 0;
  local_dc[0] = '\0';
  local_f0 = puVar3;
  local_e8 = local_dc;
  FUN_03eba9c0(&local_f0,plVar10,iVar16);
  local_f8 = ".genvb";
  local_100 = puVar2;
  (**(code **)(local_f0 + 0x18))(&local_f0);
  lVar15 = 0;
  do {
    if (local_e8[lVar15] == '\0') goto LAB_03eb3db4;
    if (local_e8[lVar15 + 1] == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_03eb3db4;
    }
    if (local_e8[lVar15 + 2] == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_03eb3db4;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  lVar15 = 0;
LAB_03eb3db4:
  (**(code **)(local_100 + 0x18))(&local_100);
  lVar13 = 0;
  do {
    iVar8 = (int)lVar15;
    if (local_f8[lVar13] == '\0') {
LAB_03eb3e04:
      iVar12 = (int)lVar13;
      if (iVar8 < iVar12) goto LAB_03eb3d0c;
LAB_03eb3e1c:
      if ((int)lVar13 < 1) goto LAB_03eb3c60;
      uVar9 = 0;
      goto LAB_03eb3e30;
    }
    if (local_f8[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03eb3e04;
    }
    if (local_f8[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      iVar12 = (int)lVar13;
      if (iVar12 <= iVar8) goto LAB_03eb3e1c;
      goto LAB_03eb3d0c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  if (-1 < iVar8) {
LAB_03eb3c60:
    (**(code **)(local_100 + 0x18))(&local_100);
LAB_03eb3c70:
    local_100 = (undefined *)0x0;
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = puVar4;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar9 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb2860);
    plVar6 = plVar10;
    if ((uVar9 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
    uVar11 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_f0,&local_100);
    uVar5 = param_3;
    if (*(uint *)(param_1 + 0x8f8) <= param_3) {
      uVar5 = 0;
    }
    FUN_03a580c0(lVar1,*(long *)(param_1 + 0x900) + (long)(int)uVar5 * 0x600,uVar11,local_100._4_4_,
                 0);
    uVar5 = param_3;
    if (*(uint *)(param_1 + 0x8f8) <= param_3) {
      uVar5 = 0;
    }
    FUN_03a5bf30(lVar1,*(long *)(param_1 + 0x900) + (long)(int)uVar5 * 0x600,&local_f0);
  }
  goto LAB_03eb3d0c;
  while( true ) {
    pcVar14 = local_f8;
    lVar15 = lVar13;
    while( true ) {
      lVar15 = lVar15 + -1;
      if (pcVar17[uVar9] != *pcVar14) break;
      if (pcVar17[uVar9] == '\0') goto LAB_03eb3ea4;
      pcVar17 = pcVar17 + 1;
      pcVar14 = pcVar14 + 1;
      if (lVar15 == 0) goto LAB_03eb3ea4;
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == (iVar8 - iVar12) + 1) break;
LAB_03eb3e30:
    pcVar17 = local_e8;
    pcVar14 = local_e8 + uVar9;
    (**(code **)(local_100 + 0x18))(&local_100);
    if (pcVar14 == local_f8) {
LAB_03eb3ea4:
      if (-1 < (int)uVar9) goto LAB_03eb3c70;
      break;
    }
  }
LAB_03eb3d0c:
  iVar16 = iVar16 + 1;
  if (iVar16 == iVar7) goto LAB_03eb3ee0;
  goto LAB_03eb3d18;
}

