
void FUN_0329b8e0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  
  lVar7 = (**(code **)(*(long *)*param_1 + 0x20))();
  puVar4 = PTR_DAT_04bc8e68;
  local_70 = *(undefined **)(lVar7 + 0xf0);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_80 = "B_Content";
  local_88 = puVar1;
  lVar7 = FUN_032cb990(&local_70,&local_88);
  lVar8 = (**(code **)(*(long *)*param_1 + 0x20))();
  local_70 = *(undefined **)(lVar8 + 0xf0);
  pcStack_90 = "L_Header/B_Content";
  local_98 = puVar1;
  lVar8 = FUN_032cb990(&local_70,&local_98);
  local_78 = *(undefined8 *)(*(long *)(param_1[5] + 0xf0) + 0x18);
  local_68 = "P_Base";
  local_70 = puVar1;
  plVar9 = (long *)FUN_032d3050(&local_78,local_78,&local_70);
  puVar5 = PTR_DAT_04bc8f38;
  puVar1 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar6 != 0))
  {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar9 == (long *)0x0) {
LAB_0329b9f4:
    plVar9 = (long *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (puVar10 != (undefined8 *)puVar1) {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)puVar1 && puVar10 != (undefined8 *)0x0);
      if (puVar10 == (undefined8 *)0x0) goto LAB_0329b9f4;
    }
  }
  local_70 = puVar4 + 0x10;
  local_78 = *(undefined8 *)(*(long *)(param_1[5] + 0xf0) + 0x18);
  local_68 = "P_Shdw";
  plVar11 = (long *)FUN_032d3050(&local_78,local_78,&local_70);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar6 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar11 == (long *)0x0) {
LAB_0329ba64:
    plVar11 = (long *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
    if (puVar10 != (undefined8 *)puVar1) {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)puVar1 && puVar10 != (undefined8 *)0x0);
      if (puVar10 == (undefined8 *)0x0) goto LAB_0329ba64;
    }
  }
  local_70 = puVar4 + 0x10;
  local_78 = *(undefined8 *)(*(long *)(param_1[5] + 0xf0) + 0x18);
  local_68 = "P_DummyBgMask";
  plVar12 = (long *)FUN_032d3050(&local_78,local_78,&local_70);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar6 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar12 != (long *)0x0) {
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12);
    if (puVar10 == (undefined8 *)puVar1) goto LAB_0329bad8;
    do {
      puVar10 = (undefined8 *)*puVar10;
    } while (puVar10 != (undefined8 *)puVar1 && puVar10 != (undefined8 *)0x0);
    if (puVar10 != (undefined8 *)0x0) goto LAB_0329bad8;
  }
  plVar12 = (long *)0x0;
LAB_0329bad8:
  local_70 = puVar4 + 0x10;
  local_78 = *(undefined8 *)(*(long *)(param_1[5] + 0xf0) + 0x18);
  local_68 = "N_BgMaskOffset";
  plVar13 = (long *)FUN_032d3050(&local_78,local_78,&local_70);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar6 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar10 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13);
  if (puVar10 != (undefined8 *)puVar1) {
    do {
      puVar10 = (undefined8 *)*puVar10;
    } while (puVar10 != (undefined8 *)puVar1 && puVar10 != (undefined8 *)0x0);
  }
  lVar15 = *(long *)(lVar7 + 0x50);
  lVar2 = plVar11[6];
  lVar3 = plVar11[7];
  plVar9[10] = lVar15;
  *(byte *)(plVar9 + 0xb) = *(byte *)(plVar9 + 0xb) | 0x10;
  *(int *)(plVar11 + 6) = (int)lVar2;
  *(int *)((long)plVar11 + 0x34) = (int)((ulong)lVar15 >> 0x20);
  *(int *)(plVar11 + 7) = (int)lVar3;
  *(byte *)(plVar11 + 0xb) = *(byte *)(plVar11 + 0xb) | 0x10;
  fVar16 = *(float *)(lVar7 + 0x54);
  fVar17 = *(float *)((long)plVar13 + 0x54);
  *(byte *)(plVar12 + 0xb) = *(byte *)(plVar12 + 0xb) | 0x10;
  *(float *)((long)plVar12 + 0x54) = (1080.0 - fVar16) + fVar17;
  param_1[0x16] = lVar7;
  if (lVar8 == 0) {
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) & 0xfffe;
    FUN_032c2100(param_1 + 0x9a);
    plVar9 = (long *)param_1[2];
  }
  else {
    param_1[0x9e] = lVar8;
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) | 1;
    plVar9 = (long *)param_1[2];
  }
  if (plVar9 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar9 + 0x20))();
    local_70 = *(undefined **)(lVar7 + 0xf0);
    local_a8 = puVar4 + 0x10;
    pcStack_a0 = "B_Content";
    uVar14 = FUN_032cb990(&local_70,&local_a8);
    param_1[0x5a] = uVar14;
  }
  return;
}

