
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02919700(byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 *__src;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined *local_a8;
  undefined1 *puStack_a0;
  int local_98;
  undefined1 auStack_94 [31];
  undefined1 local_75;
  
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2640;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x330) == 0)) {
LAB_029197d4:
    plVar11 = &DAT_055c04a0;
  }
  else {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar4 = FUN_006bd550(*puVar5,0);
    if ((iVar4 != 0x758f7eaf) || (lVar9 = *(long *)puVar3, lVar9 == 0)) goto LAB_029197d4;
    plVar11 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(lVar9 + 0x338));
      iVar4 = FUN_006bd550(*puVar5,0);
      plVar11 = (long *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        plVar11 = &DAT_055c04a0;
      }
    }
  }
  uVar1 = *param_5;
  puVar6 = (undefined4 *)FUN_0251b3b0(param_1,0);
  lVar9 = FUN_0251bdc4(param_1,0);
  if ((param_2 == (undefined4 *)0x0) && (param_2 = puVar6, puVar6 == (undefined4 *)0x0)) {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    uVar15 = *param_2;
    uVar14 = param_2[1];
    uVar13 = param_2[2];
  }
  if (param_3 == (undefined4 *)0x0) {
    if (lVar9 == 0) {
      uVar12 = 0;
      goto LAB_02919834;
    }
    param_3 = (undefined4 *)(lVar9 + 4);
  }
  uVar12 = *param_3;
LAB_02919834:
  local_98 = 0x20;
  local_75 = 0;
  local_a8 = PTR_DAT_04bb2a08 + 0x10;
  puStack_a0 = auStack_94;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  __src = (undefined1 *)plVar11[1];
  if (auStack_94 != __src) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar9 = 0;
    do {
      if (*(char *)(plVar11[1] + lVar9) == '\0') goto LAB_029198d0;
      lVar10 = plVar11[1] + lVar9;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_029198d0;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_029198d0;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_029198d0:
    iVar4 = (int)lVar9;
    if (local_98 <= (int)lVar9) {
      iVar4 = local_98 + -1;
    }
    memcpy(auStack_94,__src,(long)iVar4);
    auStack_94[iVar4] = 0;
  }
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  if ((**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') &&
     (uVar7 = FUN_02930ce0(&DAT_055c10d0,&local_a8,param_1), (uVar7 & 1) != 0)) {
    DAT_055c1188 = *param_1;
    _DAT_055c1198 = 0;
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    lVar9 = *(long *)PTR_DAT_04bb2808;
    DAT_055c1174._0_4_ = uVar15;
    DAT_055c1174._4_4_ = uVar14;
    DAT_055c117c = uVar13;
    DAT_055c1180 = uVar12;
    DAT_055c1184 = uVar1;
    if (((lVar9 != 0) && (lVar10 = *(long *)(lVar9 + 8), lVar10 != 0)) &&
       (*(int *)(lVar9 + 0x10) == 0)) {
      *(undefined4 *)(lVar10 + 0x338) = *param_4;
      *(undefined4 *)(lVar10 + 0x33c) = param_4[1];
      *(undefined4 *)(lVar10 + 0x340) = param_4[2];
      *(undefined4 *)(lVar10 + 0x344) = param_4[3];
      *(undefined4 *)(lVar10 + 0x348) = param_4[4];
      *(undefined1 *)(lVar10 + 0x34c) = *(undefined1 *)(param_4 + 5);
      *(undefined1 *)(lVar10 + 0x34d) = *(undefined1 *)((long)param_4 + 0x15);
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

