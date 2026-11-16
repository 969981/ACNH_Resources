
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02918580(byte *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined *local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 auStack_74 [31];
  undefined1 local_55;
  
  puVar2 = PTR_DAT_04bb2720;
  puVar3 = PTR_DAT_04bb2640;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if ((iVar6 == 0x758f7eaf) && (lVar9 = *(long *)puVar2, lVar9 != 0)) {
      plVar11 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)puVar3 + 0x18))
                           (*(long **)puVar3,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        plVar11 = (long *)PTR_DAT_04bc3a78;
        if (iVar6 != 0x758f7eaf) {
          plVar11 = &DAT_055c04a0;
        }
      }
      goto LAB_02918648;
    }
  }
  plVar11 = &DAT_055c04a0;
LAB_02918648:
  puVar3 = PTR_DAT_04bb2a08;
  local_78 = 0x20;
  local_55 = 0;
  local_88 = PTR_DAT_04bb2a08 + 0x10;
  local_80 = auStack_74;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  puVar13 = (undefined1 *)plVar11[1];
  if (auStack_74 != puVar13) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar9 = 0;
    do {
      if (*(char *)(plVar11[1] + lVar9) == '\0') goto LAB_029186ec;
      lVar1 = plVar11[1] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_029186ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_029186ec;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_029186ec:
    iVar6 = (int)lVar9;
    if (local_78 <= (int)lVar9) {
      iVar6 = local_78 + -1;
    }
    memcpy(auStack_74,puVar13,(long)iVar6);
    auStack_74[iVar6] = 0;
  }
  puVar2 = PTR_DAT_04bb2028;
  local_88 = PTR_DAT_04bb2028 + 0x10;
  local_80[(long)local_78 + -1] = 0;
  iVar6 = FUN_006bd550(local_80,0);
  if (DAT_055c1b60 == &DAT_055c1b58) {
    return 0;
  }
  plVar12 = DAT_055c1b60 + -8;
  puVar7 = DAT_055c1b60;
  plVar10 = plVar12;
  while ((int)plVar10[7] != iVar6) {
    puVar7 = (undefined8 *)puVar7[1];
    plVar10 = puVar7 + -8;
    if (puVar7 == &DAT_055c1b58) {
      return 0;
    }
  }
  puVar7 = DAT_055c1b60;
  if (DAT_055c110c != 0) {
    do {
      if ((int)plVar12[7] == DAT_055c110c) goto LAB_029187b4;
      puVar7 = (undefined8 *)puVar7[1];
      plVar12 = puVar7 + -8;
    } while (puVar7 != &DAT_055c1b58);
    plVar12 = &DAT_055c1098;
LAB_029187b4:
    local_55 = 0;
    local_78 = 0x20;
    local_88 = puVar3 + 0x10;
    local_80 = auStack_74;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puVar13 = (undefined1 *)plVar12[1];
    if (auStack_74 != puVar13) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
      lVar9 = 0;
      do {
        if (*(char *)(plVar12[1] + lVar9) == '\0') goto LAB_029188e0;
        lVar1 = plVar12[1] + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_029188e0;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_029188e0;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_029188e0:
      iVar6 = (int)lVar9;
      if (local_78 <= (int)lVar9) {
        iVar6 = local_78 + -1;
      }
      memcpy(auStack_74,puVar13,(long)iVar6);
      auStack_74[iVar6] = 0;
    }
    uVar5 = DAT_055c1126;
    uVar4 = DAT_055c1125;
    local_88 = puVar2 + 0x10;
    if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
      return 0;
    }
    uVar8 = FUN_02930ce0(&DAT_055c10d0,&local_88,param_1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    DAT_055c1174 = _DAT_055c1110;
    DAT_055c117c = DAT_055c1118;
    DAT_055c1180 = DAT_055c111c;
    DAT_055c1184 = DAT_055c1120;
    DAT_055c1188 = *param_1;
    DAT_055c1199 = uVar4;
    DAT_055c1198 = 1;
    DAT_055c119a = uVar5;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    if (DAT_05694df8 == 0) {
      DAT_055c116c = 0;
      DAT_055c1174 = _DAT_055c1110;
      DAT_055c117c = DAT_055c1118;
      DAT_055c1180 = DAT_055c111c;
      DAT_055c1184 = DAT_055c1120;
      DAT_055c1198 = 1;
      return 1;
    }
    lVar9 = *(long *)(DAT_05694df8 + 8);
    if (lVar9 == 0) {
      DAT_055c116c = 0;
      DAT_055c1174 = _DAT_055c1110;
      DAT_055c117c = DAT_055c1118;
      DAT_055c1180 = DAT_055c111c;
      DAT_055c1184 = DAT_055c1120;
      DAT_055c1198 = 1;
      return 1;
    }
    if (*(int *)(DAT_05694df8 + 0x10) == 0) {
      *(undefined4 *)(lVar9 + 0x338) = *param_2;
      *(undefined4 *)(lVar9 + 0x33c) = param_2[1];
      *(undefined4 *)(lVar9 + 0x340) = param_2[2];
      *(undefined4 *)(lVar9 + 0x344) = param_2[3];
      *(undefined4 *)(lVar9 + 0x348) = param_2[4];
      *(undefined1 *)(lVar9 + 0x34c) = *(undefined1 *)(param_2 + 5);
      *(undefined1 *)(lVar9 + 0x34d) = *(undefined1 *)((long)param_2 + 0x15);
      return 1;
    }
    DAT_055c116c = 0;
    DAT_055c1174 = _DAT_055c1110;
    DAT_055c117c = DAT_055c1118;
    DAT_055c1180 = DAT_055c111c;
    DAT_055c1184 = DAT_055c1120;
    DAT_055c1198 = 1;
    return 1;
  }
  if (*(char *)plVar11[1] == '\0') {
    return 0;
  }
  local_55 = 0;
  local_78 = 0x20;
  local_88 = puVar3 + 0x10;
  local_80 = auStack_74;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  puVar13 = (undefined1 *)plVar11[1];
  if (auStack_74 != puVar13) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar9 = 0;
    do {
      if (*(char *)(plVar11[1] + lVar9) == '\0') goto LAB_029189fc;
      lVar1 = plVar11[1] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_029189fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_029189fc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_029189fc:
    iVar6 = (int)lVar9;
    if (local_78 <= (int)lVar9) {
      iVar6 = local_78 + -1;
    }
    memcpy(auStack_74,puVar13,(long)iVar6);
    auStack_74[iVar6] = 0;
  }
  local_88 = puVar2 + 0x10;
  uVar8 = FUN_02930ce0(&DAT_055c10d0,&local_88,param_1);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (((DAT_05694df8 != 0) && (lVar9 = *(long *)(DAT_05694df8 + 8), lVar9 != 0)) &&
     (*(int *)(DAT_05694df8 + 0x10) == 0)) {
    *(undefined4 *)(lVar9 + 0x338) = *param_2;
    *(undefined4 *)(lVar9 + 0x33c) = param_2[1];
    *(undefined4 *)(lVar9 + 0x340) = param_2[2];
    *(undefined4 *)(lVar9 + 0x344) = param_2[3];
    *(undefined4 *)(lVar9 + 0x348) = param_2[4];
    *(undefined1 *)(lVar9 + 0x34c) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)(lVar9 + 0x34d) = *(undefined1 *)((long)param_2 + 0x15);
  }
  return 1;
}

