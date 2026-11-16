
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0291bf50(byte *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 local_88;
  float local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  local_58 = 0;
  local_68 = PTR_DAT_04bb2010 + 0x10;
  uStack_60 = 0;
  uVar9 = FUN_0118bbd0(&local_70);
  if ((uVar9 & 1) == 0) {
    lVar13 = *(long *)PTR_DAT_04bb5c90;
    puVar12 = DAT_055c1b60;
    if (DAT_055c1b60 == &DAT_055c1b58) {
      plVar14 = &DAT_055c1098;
    }
    else {
      do {
        plVar14 = puVar12 + -8;
        if (*(int *)(puVar12 + -1) == 0x6622bd46) goto LAB_0291c1a0;
        puVar1 = puVar12 + 1;
        puVar12 = (undefined8 *)*puVar1;
      } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
      plVar14 = &DAT_055c1098;
    }
LAB_0291c1a0:
    iVar18 = *(int *)(lVar13 + 0x90);
    iVar19 = *(int *)(lVar13 + 0x94);
    iVar7 = *(int *)(lVar13 + 0x80);
    iVar17 = *(int *)(lVar13 + 0x84);
    if (((*PTR_DAT_04bb3998 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar8 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar9 * 4) == 0x2ec94ec5) goto LAB_0291c1fc;
        uVar9 = uVar9 + 1;
      } while (*(uint *)PTR_DAT_04bb3990 != uVar9);
    }
    uVar9 = 0;
LAB_0291c1fc:
    if ((DAT_055c9188 & 1) != 0) {
      return 0;
    }
    if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
      return 0;
    }
    uVar10 = FUN_02930ce0(&DAT_055c10d0,plVar14,param_1);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    DAT_055c1184 = (undefined4)uVar9;
    DAT_055c1180 = 0;
    DAT_055c117c = ((float)iVar17 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
    DAT_055c1174 = CONCAT44(DAT_055c1174._4_4_,
                            ((float)iVar7 * 5.0 + (float)iVar18 * 5.0 + 5.0) * 0.5);
    DAT_055c1188 = *param_1;
    _DAT_055c1198 = 0;
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    lVar13 = *(long *)PTR_DAT_04bb2808;
    if (lVar13 == 0) {
      DAT_055c116c = 0;
      DAT_055c1180 = 0;
      _DAT_055c1198 = 0;
      DAT_055c119a = 0;
      return 1;
    }
    (**(code **)(*plVar14 + 0x18))(plVar14);
    iVar7 = FUN_006bd550(plVar14[1],0);
    uVar2 = param_2[1];
    if (iVar7 == 0x55b5d9de) {
      uVar2 = 1;
    }
    lVar11 = *(long *)(lVar13 + 8);
    if (lVar11 == 0) {
      return 1;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
  }
  else {
    FUN_0253cd3c(&local_88,param_1,&local_68,&local_70,local_58);
    puVar12 = DAT_055c1b60;
    if (DAT_055c1b60 == &DAT_055c1b58) {
      plVar14 = &DAT_055c1098;
    }
    else {
      do {
        plVar14 = puVar12 + -8;
        if (*(int *)(puVar12 + -1) == 0x6622bd46) goto LAB_0291c07c;
        puVar1 = puVar12 + 1;
        puVar12 = (undefined8 *)*puVar1;
      } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
      plVar14 = &DAT_055c1098;
    }
LAB_0291c07c:
    if (((*PTR_DAT_04bb3998 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar7 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar9 * 4) == -0x66f9fe86) goto LAB_0291c0cc;
        uVar9 = uVar9 + 1;
      } while (*(uint *)PTR_DAT_04bb3990 != uVar9);
    }
    uVar9 = 0;
LAB_0291c0cc:
    if ((((DAT_055c9188 & 1) != 0) || (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0')) ||
       (uVar10 = FUN_02930ce0(&DAT_055c10d0,plVar14,param_1), (uVar10 & 1) == 0)) {
      return 0;
    }
    DAT_055c1174 = local_88;
    DAT_055c1184 = (undefined4)uVar9;
    DAT_055c1180 = local_78;
    DAT_055c117c = local_80;
    DAT_055c1188 = *param_1;
    _DAT_055c1198 = 0;
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    lVar13 = *(long *)PTR_DAT_04bb2808;
    if (lVar13 == 0) {
      DAT_055c116c = 0;
      _DAT_055c1198 = 0;
      DAT_055c119a = 0;
      return 1;
    }
    (**(code **)(*plVar14 + 0x18))(plVar14);
    iVar7 = FUN_006bd550(plVar14[1],0);
    uVar2 = param_2[1];
    if (iVar7 == 0x55b5d9de) {
      uVar2 = 1;
    }
    lVar11 = *(long *)(lVar13 + 8);
    if (lVar11 == 0) {
      return 1;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
  }
  if (iVar7 == 0) {
    uVar15 = param_2[3];
    uVar16 = param_2[4];
    uVar3 = *param_2;
    uVar4 = param_2[2];
    uVar5 = *(undefined1 *)(param_2 + 5);
    uVar6 = *(undefined1 *)((long)param_2 + 0x15);
    *(undefined4 *)(lVar11 + 0x33c) = uVar2;
    *(undefined4 *)(lVar11 + 0x338) = uVar3;
    *(undefined4 *)(lVar11 + 0x340) = uVar4;
    *(undefined4 *)(lVar11 + 0x348) = uVar16;
    *(undefined1 *)(lVar11 + 0x34c) = uVar5;
    *(undefined1 *)(lVar11 + 0x34d) = uVar6;
    *(undefined4 *)(lVar11 + 0x344) = uVar15;
    return 1;
  }
  return 1;
}

