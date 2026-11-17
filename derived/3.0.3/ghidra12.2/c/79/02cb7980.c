
void FUN_02cb7980(long param_1,short *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  short *psVar8;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  void *pvVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 auStack_94 [7];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 auStack_74 [7];
  undefined1 local_6d;
  undefined4 local_64;
  
  pvVar14 = *(void **)(param_1 + 0x18);
  (**(code **)(*(long *)(param_2 + 0x9c) + 0x18))(param_2 + 0x9c);
  pvVar15 = *(void **)(param_2 + 0xa0);
  if (pvVar14 != pvVar15) {
    (**(code **)(*(long *)(param_2 + 0x9c) + 0x18))(param_2 + 0x9c);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0xa0) + lVar11) == '\0') goto LAB_02cb7a2c;
      lVar13 = *(long *)(param_2 + 0xa0) + lVar11;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02cb7a2c;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02cb7a2c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02cb7a2c:
    iVar7 = (int)lVar11;
    if (*(int *)(param_1 + 0x20) <= (int)lVar11) {
      iVar7 = *(int *)(param_1 + 0x20) + -1;
    }
    memcpy(pvVar14,pvVar15,(long)iVar7);
    *(undefined1 *)((long)pvVar14 + (long)iVar7) = 0;
  }
  pvVar14 = *(void **)(param_1 + 0x38);
  (**(code **)(*(long *)(param_2 + 0xac) + 0x18))(param_2 + 0xac);
  pvVar15 = *(void **)(param_2 + 0xb0);
  if (pvVar14 != pvVar15) {
    (**(code **)(*(long *)(param_2 + 0xac) + 0x18))(param_2 + 0xac);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0xb0) + lVar11) == '\0') goto LAB_02cb7acc;
      lVar13 = *(long *)(param_2 + 0xb0) + lVar11;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02cb7acc;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02cb7acc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02cb7acc:
    iVar7 = (int)lVar11;
    if (*(int *)(param_1 + 0x40) <= (int)lVar11) {
      iVar7 = *(int *)(param_1 + 0x40) + -1;
    }
    memcpy(pvVar14,pvVar15,(long)iVar7);
    *(undefined1 *)((long)pvVar14 + (long)iVar7) = 0;
  }
  if (**(char **)(param_1 + 0x18) == '\0' && **(char **)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  lVar11 = param_1 + 0x10;
  lVar13 = param_1 + 0x30;
  *(uint *)(param_1 + 0xc) = (uint)(**(char **)(param_1 + 0x38) != '\0');
  uVar6 = FUN_0376baa0(lVar11);
  *(undefined2 *)(param_1 + 0x50) = uVar6;
  uVar6 = FUN_0376baa0(lVar13);
  *(undefined2 *)(param_1 + 0x52) = uVar6;
  *(short *)(param_1 + 0xb8) = param_2[0x98];
  *(short *)(param_1 + 0xba) = param_2[0x99];
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x9a);
  cVar3 = *(char *)((long)param_2 + 9);
  *(char *)(param_1 + 0xc0) = cVar3;
  if (cVar3 != '\0') {
    plVar16 = (long *)(param_2 + 8);
    psVar8 = (short *)(**(code **)(*plVar16 + 0x18))(plVar16);
    iVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
    if (((psVar8 != (short *)0x0) && (iVar7 != 0)) && (*psVar8 != 0)) {
      plVar17 = (long *)(param_1 + 200);
      (**(code **)(*plVar17 + 0x28))(plVar17,plVar16);
      (**(code **)(*plVar17 + 0x30))(plVar17,plVar16);
    }
  }
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0xdc);
  if ((*param_2 != 0) &&
     (uVar9 = nn::time::IsValidDate
                        ((int)*param_2,(int)(char)param_2[1],(int)*(char *)((long)param_2 + 3)),
     (uVar9 & 1) != 0)) {
    uVar2 = *(undefined4 *)param_2;
    *(undefined2 *)(param_1 + 0x2b4) = 0;
    *(undefined1 *)(param_1 + 0x2b6) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  }
  *(char *)(param_1 + 0x2b8) = (char)param_2[5];
  *(char *)(param_1 + 9) = (char)param_2[4];
  bVar5 = FUN_02cb6f90(param_1);
  *(byte *)(param_1 + 8) = bVar5 & 1;
  local_78 = 8;
  local_6d = 0;
  local_88 = PTR_DAT_04bb6a30 + 0x10;
  local_80 = auStack_74;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(lVar11);
  puVar18 = *(undefined1 **)(param_1 + 0x18);
  if (auStack_74 != puVar18) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(lVar11);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x18) + lVar12) == '\0') goto LAB_02cb7cb4;
      lVar1 = *(long *)(param_1 + 0x18) + lVar12;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_02cb7cb4;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_02cb7cb4;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_02cb7cb4:
    iVar7 = (int)lVar12;
    if (local_78 <= (int)lVar12) {
      iVar7 = local_78 + -1;
    }
    memcpy(auStack_74,puVar18,(long)iVar7);
    auStack_74[iVar7] = 0;
  }
  puVar4 = PTR_DAT_04bb4130;
  local_88 = PTR_DAT_04bb3768 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb4130;
  if (lVar12 == 0) {
LAB_02cb7d30:
    uVar10 = 1;
  }
  else {
    local_80[(long)local_78 + -1] = 0;
    local_64 = FUN_006bd550(local_80,0);
    lVar12 = FUN_0079e4d0(lVar12,&local_64);
    uVar10 = 0;
    if (lVar12 == 0) goto LAB_02cb7d30;
  }
  *(undefined1 *)(param_1 + 0x2c0) = uVar10;
  local_8d = 0;
  (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar13);
  puVar18 = *(undefined1 **)(param_1 + 0x38);
  if (auStack_94 != puVar18) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar13);
    lVar13 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x38) + lVar13) == '\0') goto LAB_02cb7dcc;
      lVar12 = *(long *)(param_1 + 0x38) + lVar13;
      if (*(char *)(lVar12 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_02cb7dcc;
      }
      if (*(char *)(lVar12 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_02cb7dcc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_02cb7dcc:
    iVar7 = (int)lVar13;
    if (7 < (int)lVar13) {
      iVar7 = 7;
    }
    memcpy(auStack_94,puVar18,(long)iVar7);
    auStack_94[iVar7] = 0;
  }
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
LAB_02cb7e38:
    uVar10 = 1;
  }
  else {
    local_64 = FUN_006bd550(auStack_94,0);
    lVar13 = FUN_0079e4d0(lVar13,&local_64);
    uVar10 = 0;
    if (lVar13 == 0) goto LAB_02cb7e38;
  }
  *(undefined1 *)(param_1 + 0x2c1) = uVar10;
  uVar6 = FUN_03466f70(lVar11);
  *(undefined2 *)(param_1 + 0x2c2) = uVar6;
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0xde);
  if ((*(char *)(param_1 + 9) == '\0') || (*(char *)((long)param_2 + 0xd) != '\0')) {
LAB_02cb7e68:
    FUN_0082fc1c(param_1 + 0x2c8,param_2);
    bVar5 = FUN_037818a0(param_1 + 0x2c8);
    bVar5 = bVar5 & 1;
  }
  else {
    if ((char)param_2[6] == '\0') {
      local_64 = 0xffffffff;
      FUN_00830084(&local_64,0);
      uVar9 = FUN_037818a0(&local_64);
      if ((uVar9 & 1) == 0) goto LAB_02cb7e68;
    }
    else {
      local_64 = 0xffffffff;
      FUN_00830084(&local_64,0);
      uVar9 = FUN_037818a0(&local_64);
      bVar5 = 0;
      if ((uVar9 & 1) == 0) goto LAB_02cb7e80;
    }
    FUN_00830084(param_1 + 0x2c8,0);
    bVar5 = 1;
  }
LAB_02cb7e80:
  *(byte *)(param_1 + 0x2c4) = bVar5;
  return;
}

