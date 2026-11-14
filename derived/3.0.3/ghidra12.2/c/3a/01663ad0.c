
void FUN_01663ad0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  int iVar18;
  undefined *local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2720;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if ((*(long *)(lVar11 + 0x330) == 0) ||
     (lVar16 = *(long *)(*(long *)(lVar11 + 0x330) + 0xd0), lVar16 == 0)) {
    lVar15 = 1;
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)(lVar11 + 0xa8);
    *(long *)(lVar11 + 0xa8) = lVar16;
    lVar11 = *(long *)puVar4;
  }
  puVar7 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
  puVar3 = PTR_DAT_04bb2020;
  local_e0 = (char *)*puVar7;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_e8 = puVar1;
  uVar8 = FUN_01633f10(&local_e8,0);
  *(undefined8 *)(param_1 + 0x160) = uVar8;
  local_e0 = "GfxDrawArrayHeap";
  lVar11 = *(long *)puVar4;
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x330), lVar11 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar11 + 0xd0);
  }
  local_e8 = puVar1;
  uVar8 = FUN_038c6d48(0x1600000,&local_e8,uVar8,8,1,1);
  plVar14 = *(long **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar8;
  local_e0 = "SceneBoot";
  local_e8 = puVar1;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pcVar17 = (char *)plVar14[1];
  (**(code **)(local_e8 + 0x18))(&local_e8);
  if (pcVar17 == local_e0) {
LAB_01663c50:
    uVar12 = (*(code *)DAT_052314b0[2])(&DAT_052314b0);
    if ((uVar12 & 1) == 0) {
      plVar14 = *(long **)(param_1 + 0x58);
    }
    else {
      plVar14 = (long *)(*(code *)*DAT_052314b0)(&DAT_052314b0,0);
      *(long **)(param_1 + 0x58) = plVar14;
    }
  }
  else {
    uVar12 = 0;
    bVar6 = true;
    do {
      if (*(char *)(plVar14[1] + uVar12) != local_e0[uVar12]) break;
      if (*(char *)(plVar14[1] + uVar12) == '\0') {
        if (bVar6) goto LAB_01663c50;
        break;
      }
      bVar6 = uVar12 < 0x80000;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x80001);
    plVar14 = *(long **)(param_1 + 0x160);
    local_e8 = puVar3 + 0x10;
    local_e0 = "Movie";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar11 = 0;
    do {
      if (*(char *)(plVar14[1] + lVar11) == '\0') goto LAB_01663d08;
      lVar16 = plVar14[1] + lVar11;
      if (*(char *)(lVar16 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01663d08;
      }
      if (*(char *)(lVar16 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01663d08;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01663d08:
    (**(code **)(local_e8 + 0x18))(&local_e8);
    lVar16 = 0;
    do {
      iVar18 = (int)lVar11;
      if (local_e0[lVar16] == '\0') {
LAB_01663d54:
        iVar10 = (int)lVar16;
        if (iVar18 < iVar10) goto LAB_01663e04;
LAB_01663d6c:
        if ((int)lVar16 < 1) goto LAB_01663de8;
        uVar12 = 0;
        goto LAB_01663d80;
      }
      if (local_e0[lVar16 + 1] == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_01663d54;
      }
      if (local_e0[lVar16 + 2] == '\0') {
        lVar16 = lVar16 + 2;
        iVar10 = (int)lVar16;
        if (iVar10 <= iVar18) goto LAB_01663d6c;
        goto LAB_01663e04;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    if (iVar18 < 0) goto LAB_01663e04;
LAB_01663de8:
    (**(code **)(local_e8 + 0x18))(&local_e8);
LAB_01663f34:
    uVar12 = (*(code *)DAT_052314b0[2])(&DAT_052314b0);
    if ((uVar12 & 1) == 0) {
      plVar14 = *(long **)(param_1 + 0x58);
    }
    else {
      plVar14 = (long *)(*(code *)*DAT_052314b0)(&DAT_052314b0,0);
      *(long **)(param_1 + 0x58) = plVar14;
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x80))();
    }
    uVar12 = (*(code *)DAT_05231830[2])(&DAT_05231830);
    if ((uVar12 & 1) == 0) {
      plVar14 = *(long **)(param_1 + 0x138);
    }
    else {
      plVar14 = (long *)(*(code *)*DAT_05231830)(&DAT_05231830,0);
      *(long **)(param_1 + 0x138) = plVar14;
    }
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x80))();
  }
  goto LAB_01663fd4;
  while( true ) {
    pcVar17 = local_e0;
    lVar13 = lVar16;
    while( true ) {
      lVar13 = lVar13 + -1;
      if (*(char *)(lVar11 + uVar12) != *pcVar17) break;
      if ((*(char *)(lVar11 + uVar12) == '\0') ||
         (lVar11 = lVar11 + 1, pcVar17 = pcVar17 + 1, lVar13 == 0)) goto LAB_01663dfc;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar18 - iVar10) + 1) break;
LAB_01663d80:
    lVar11 = plVar14[1];
    (**(code **)(local_e8 + 0x18))(&local_e8);
    if ((char *)(lVar11 + uVar12) == local_e0) {
LAB_01663dfc:
      if ((int)uVar12 != -1) goto LAB_01663f34;
      break;
    }
  }
LAB_01663e04:
  local_e8 = (undefined *)0x100000000;
  local_e0 = (char *)0x300000002;
  lVar11 = 0;
  local_d8 = 0x500000004;
  uStack_d0 = 0x700000006;
  local_68 = 0x2100000020;
  local_c8 = 0x900000008;
  uStack_c0 = 0xb0000000a;
  local_b8 = 0xd0000000c;
  uStack_b0 = 0xf0000000e;
  local_a8 = 0x1100000010;
  uStack_a0 = 0x1300000012;
  local_98 = 0x1500000014;
  uStack_90 = 0x1700000016;
  local_88 = 0x1900000018;
  uStack_80 = 0x1b0000001a;
  local_78 = 0x1d0000001c;
  uStack_70 = 0x1f0000001e;
  do {
    uVar2 = *(uint *)((long)&local_e8 + lVar11);
    uVar12 = (ulong)uVar2;
    plVar14 = &DAT_05231450 + uVar12 * 4;
    if (0x21 < uVar2) {
      plVar14 = &DAT_05231450;
    }
    uVar9 = (**(code **)(*plVar14 + 0x10))(plVar14);
    if ((uVar9 & 1) != 0) {
      uVar8 = (**(code **)*plVar14)(plVar14,0);
      uVar9 = uVar12;
      if (0x21 < uVar2) {
        uVar9 = 0;
      }
      *(undefined8 *)(param_1 + 0x40 + uVar9 * 8) = uVar8;
    }
    if (0x21 < uVar2) {
      uVar12 = 0;
    }
    plVar14 = *(long **)(param_1 + 0x40 + uVar12 * 8);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x80))();
    }
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0x88);
LAB_01663fd4:
  lVar11 = 0x40;
  do {
    plVar14 = *(long **)(param_1 + lVar11);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14,*(undefined8 *)(param_1 + 0x160));
    }
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x150);
  if (lVar15 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar15;
  }
  return;
}

