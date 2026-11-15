
void FUN_01e35e50(long param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  int local_28;
  int local_24;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return;
  }
  lVar20 = *(long *)(param_1 + 0x18);
  uVar18 = *param_2;
  if ((((uVar18 == 0) ||
       (plVar17 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
      ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18)) {
    plVar17 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar1;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar18 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_01e35f10;
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01e35f10:
    uVar18 = 0;
  }
  if (plVar17 == (long *)0x0) {
    return;
  }
  lVar13 = plVar17[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar9 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb37d0);
  uVar2 = 0;
  if ((int)lVar13 == 1) {
    uVar2 = uVar18;
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  puVar19 = (undefined8 *)plVar17[0x77];
  if (((*PTR_DAT_04bb6860 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6860);
  }
  if (puVar19 == (undefined8 *)0x0) {
    return;
  }
  uVar9 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bb6858);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (9 < *(uint *)(plVar17 + 0xa1)) {
    return;
  }
  uVar9 = (ulong)*(uint *)(plVar17 + 0xa1);
  lVar13 = uVar9 * 0xba0;
  if ((&DAT_053fee41)[lVar13] == '\0') {
    return;
  }
  plVar14 = *(long **)(param_1 + 8);
  plVar8 = plVar14;
  do {
    plVar8 = (long *)plVar8[1];
    if (plVar8 == plVar14) goto LAB_01e36158;
    plVar16 = plVar8 + -1;
  } while (&DAT_053fe348 + lVar13 != (undefined *)*plVar16);
  if ((plVar8 != (long *)0x0) && (plVar16 != (long *)0x0)) {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
      uVar18 = 0;
    }
    else {
      local_24 = 1;
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar18 = *puVar3 >> 1 & 1;
    }
    if (*plVar8 != 0) {
      *(long *)(*plVar8 + 8) = plVar8[1];
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      *(long *)plVar8[1] = *plVar8;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(plVar14 + 2) = (int)plVar14[2] + -1;
    plVar8[-1] = plVar14[3];
    plVar14[3] = (long)plVar16;
    if (uVar18 != 0) {
      local_24 = 0;
      FUN_01e37980(&DAT_053fe850 + lVar13,&local_24,1,0,0);
      bVar4 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
      if (bVar4 < 5) {
        uVar12 = 5;
      }
      else if (bVar4 < 8) {
        uVar12 = 0;
      }
      else if (bVar4 < 0xc) {
        uVar12 = 1;
      }
      else if (bVar4 < 0x10) {
        uVar12 = 2;
      }
      else {
        uVar12 = 3;
        if (0x12 < bVar4) {
          uVar12 = 4;
        }
      }
      if (((&DAT_053fe898)[uVar9 * 0x2e8] != 0) && ((&DAT_053fe888)[uVar9 * 0x174] != 0)) {
        iVar6 = (&DAT_053fe898)[uVar9 * 0x2e8] + (&DAT_053fe894)[uVar9 * 0x2e8] + -1;
        iVar7 = 0;
        if ((int)(&DAT_053fe890)[uVar9 * 0x2e8] <= iVar6) {
          iVar7 = (&DAT_053fe890)[uVar9 * 0x2e8];
        }
        puVar19 = (undefined8 *)((&DAT_053fe888)[uVar9 * 0x174] + (long)(iVar6 - iVar7) * 0x14);
        *(undefined4 *)((long)puVar19 + 0xc) = uVar12;
        *puVar19 = 0x30000001b;
        *(undefined1 *)((long)puVar19 + 0x11) = 1;
      }
      FUN_01e37c08(&DAT_053fe850 + lVar13,1);
    }
  }
LAB_01e36158:
  uVar10 = FUN_0219e890(&DAT_053fe348 + lVar13);
  if ((uVar10 & 1) == 0) {
    return;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
    return;
  }
  local_24 = 1;
  puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
  if (0xff < (uint)(int)sVar5) {
    puVar3 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar3 >> 1 & 1) == 0) {
    return;
  }
  puVar1 = &DAT_053fe850 + lVar13;
  if (0 < (int)(&DAT_053fe898)[uVar9 * 0x2e8]) {
    iVar6 = (&DAT_053fe898)[uVar9 * 0x2e8] + (&DAT_053fe894)[uVar9 * 0x2e8] + -1;
    iVar7 = 0;
    if ((int)(&DAT_053fe890)[uVar9 * 0x2e8] <= iVar6) {
      iVar7 = (&DAT_053fe890)[uVar9 * 0x2e8];
    }
    piVar15 = (int *)((&DAT_053fe888)[uVar9 * 0x174] + (long)(iVar6 - iVar7) * 0x14);
    if ((((char)piVar15[4] == '\0') && (*piVar15 == 0x1b)) &&
       (uVar9 = FUN_012e2100(*(long *)PTR_DAT_04bb5c90 + 0x18,plVar17[0xd] + 0x278),
       (uVar9 & 1) != 0)) {
      local_24 = 0;
      FUN_01e37980(puVar1,&local_24,1,0,0);
      piVar15 = (int *)(lVar20 + 0x420);
      local_24 = 3;
      piVar11 = &local_24;
      goto LAB_01e362b4;
    }
  }
  local_24 = FUN_01e3792c(puVar1);
  if (local_24 < 0x1c) {
    return;
  }
  uVar9 = FUN_012e2100(*(undefined8 *)(param_1 + 0x10),plVar17[0xd] + 0x278);
  if ((uVar9 & 1) != 0) {
    return;
  }
  local_24 = 0;
  FUN_01e37980(puVar1,&local_24,1,0,0);
  local_28 = 3;
  local_24 = 0x1b;
  piVar15 = &local_24;
  piVar11 = &local_28;
LAB_01e362b4:
  FUN_01e378b0(puVar1,piVar15,piVar11,lVar20 + 0x558,0);
  FUN_01e37c08(puVar1,1);
  return;
}

