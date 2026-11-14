
void FUN_01bf0040(long param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  int local_50;
  int local_34;
  
  puVar6 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  if (((((int)param_2 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (param_2 >> 0x14 & 0xfff) * 8
                            ), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || ((int)plVar11[0x46] != (int)param_2)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar6;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01bf00f4;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01bf00f4:
    uVar9 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar7 = plVar11[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar9;
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  lVar7 = plVar11[0x77];
  lVar10 = plVar11[0x76];
  bVar8 = true;
  if ((*(char *)(lVar7 + 0x7d10) == '\0' || *(char *)(lVar7 + 0x7d09) != '\0') &&
     (*(char *)(lVar7 + 0x7d0a) == '\0')) {
    bVar8 = '\0' < *(char *)(lVar10 + 0x59d);
  }
  if (*(char *)(param_1 + 10) != '\0') {
    *(undefined1 *)(lVar7 + 0x7d0d) = 1;
    return;
  }
  local_60 = 0x13;
  if (*(int *)(lVar10 + 0x360) == 0x13) {
    return;
  }
  if (bVar8) {
    if ((*(int *)(lVar10 + 0x360) == 0xc) &&
       (*(int *)(*(long *)(lVar10 + 0x370) + 8) == *(int *)(param_1 + 0xc))) {
      return;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    return;
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  if (uVar9 == 0) {
    if (*(char *)(param_1 + 0xb) != '\0') {
      if (*(int *)(lVar10 + 0x56c) == 1) {
        *(undefined4 *)(lVar10 + 0x56c) = 0;
        (**(code **)(*(long *)plVar11[0x77] + 0x58))();
      }
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    goto LAB_01bf037c;
  }
  local_34 = *(int *)(lVar10 + 0x56c);
  if (local_34 == 0x22) {
LAB_01bf0218:
    if ((int)uVar9 < 0x6d) {
      if (0x6c < uVar9) goto LAB_01bf0290;
      puVar6 = PTR_s_EmotEnd_04bb4608 + 0x528;
LAB_01bf02b8:
      puStack_68 = *(undefined8 **)(puVar6 + (ulong)uVar9 * 8);
    }
    else {
      if (uVar9 < 0x79) {
        puVar6 = (undefined *)FUN_007c3ad0();
        uVar9 = uVar9 - 0x6d;
        goto LAB_01bf02b8;
      }
LAB_01bf0290:
      puStack_68 = &DAT_0407ebb1;
    }
    puVar6 = PTR_DAT_04bb2020;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    FUN_00c353d0(&local_60,&local_70);
    if (local_50 < 4) {
      (**(code **)(CONCAT44(uStack_5c,local_60) + 0x18))(&local_60);
    }
    else {
      *(undefined1 *)(local_58 + 3) = 0;
    }
    puStack_68 = (undefined8 *)&DAT_040cf9b1;
  }
  else {
    if (local_34 != 0x11) {
      if (local_34 != 6) goto LAB_01bf037c;
      goto LAB_01bf0218;
    }
    if ((int)uVar9 < 0x6d) {
      if (0x6c < uVar9) goto LAB_01bf02a4;
      puVar6 = PTR_s_EmotEnd_04bb4608 + 0x528;
LAB_01bf0314:
      puStack_68 = *(undefined8 **)(puVar6 + (ulong)uVar9 * 8);
    }
    else {
      if (uVar9 < 0x79) {
        puVar6 = (undefined *)FUN_007c3ad0();
        uVar9 = uVar9 - 0x6d;
        goto LAB_01bf0314;
      }
LAB_01bf02a4:
      puStack_68 = &DAT_0407ebb1;
    }
    puVar6 = PTR_DAT_04bb2020;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    FUN_00c353d0(&local_60,&local_70);
    if (local_50 < 4) {
      (**(code **)(CONCAT44(uStack_5c,local_60) + 0x18))(&local_60);
    }
    else {
      *(undefined1 *)(local_58 + 3) = 0;
    }
    puStack_68 = (undefined8 *)&DAT_040e4c62;
  }
  local_70 = puVar6 + 0x10;
  uVar5 = FUN_00710cb0(&local_60,&local_70);
  if ((uVar5 & 1) == 0) {
    return;
  }
LAB_01bf037c:
  local_60 = 0;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_01e5a930(0x40000000,lVar10,0xc,PTR_DAT_04bb2150,&local_60,&local_70,PTR_DAT_04bc1600,6);
  *(undefined4 *)(lVar10 + 0x3ac) = uVar2;
  return;
}

