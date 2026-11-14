
void FUN_0161424c(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar3 = PTR_DAT_04bbdb78;
  puVar2 = PTR_DAT_04bb2200;
  fVar15 = 2.0;
  if (*PTR_DAT_04bb59e0 != '\0') {
    fVar15 = 1.0;
  }
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
LAB_016142e0:
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar1 = param_3;
    if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= param_3) {
      uVar1 = 0;
    }
    lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)uVar1 * 8);
    if (lVar7 == 0) goto LAB_016142e0;
    puVar9 = *(undefined8 **)(lVar7 + 0x78);
  }
  local_6c = param_3;
  local_68 = param_3;
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  if ((puVar9 == (undefined8 *)0x0) ||
     (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6200), (uVar6 & 1) == 0)) {
    fVar11 = -140.0;
  }
  else {
    fVar11 = *(float *)((long)puVar9 + 0x44) - *(float *)(puVar9 + 7);
    fVar13 = *(float *)(puVar9 + 9) - *(float *)((long)puVar9 + 0x3c);
    fVar14 = *(float *)((long)puVar9 + 0x4c) - *(float *)(puVar9 + 8);
    fVar11 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14) + -140.0;
  }
  fVar13 = tanf(param_1 * 0.5);
  fVar13 = (fVar15 * 0.19438031) / fVar13 - fVar15;
  fVar13 = fVar15 + fVar13 * fVar13;
  if (fVar13 <= fVar15) {
    fVar13 = fVar15;
  }
  lVar7 = *(long *)puVar3;
  fVar15 = 0.02;
  if (*(char *)(param_2 + 0xf3c) != '\0') {
    fVar15 = 0.5;
  }
  fVar14 = 0.0;
  if (0.0 <= fVar11) {
    fVar14 = fVar11;
  }
  uVar1 = local_6c;
  if (*(uint *)(lVar7 + 0x20) <= local_6c) {
    uVar1 = 0;
  }
  plVar10 = *(long **)(*(long *)(lVar7 + 0x28) + (long)(int)uVar1 * 8);
  if (((*PTR_DAT_04bbdb68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar5 != 0))
  {
    *(undefined ***)PTR_DAT_04bbdb60 = &PTR_LAB_049b3b38;
    __cxa_guard_release(PTR_DAT_04bbdb68);
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bbdb60);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)puVar2;
  lVar8 = *(long *)(lVar7 + 0x70);
  if (lVar8 == 0) {
    bVar4 = true;
  }
  else if (*(char *)(lVar8 + 0xd9) == '\0') {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(lVar8 + 0xda) == '\0';
  }
  local_64 = local_6c;
  if (*(long *)(lVar7 + 0x58) != 0) {
    lVar7 = *(long *)puVar3;
    uVar1 = local_6c;
    if (*(uint *)(lVar7 + 0x20) <= local_6c) {
      uVar1 = 0;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar1 * 8);
    if (lVar7 != 0) {
      puVar9 = *(undefined8 **)(lVar7 + 0x80);
      goto LAB_01614460;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_01614460:
  if (((*PTR_DAT_04bb6230 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6230);
  }
  if (puVar9 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6228);
    if ((uVar6 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    if (puVar9 == (undefined8 *)0x0) {
      bVar4 = true;
    }
    if (!bVar4) {
      *(undefined1 *)(puVar9 + 1) = 1;
      *(float *)(puVar9 + 0x13) = fVar13 + fVar15 * fVar14;
    }
  }
  if (plVar10[0x196] != 0) {
    lVar7 = *(long *)(*(long *)puVar2 + 0x78);
    if (lVar7 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0x40400000;
      if (*(float *)(lVar7 + 0x3c) == 0.0) {
        uVar12 = 0;
      }
    }
    *(undefined4 *)(plVar10[0x196] + 0x2bf8) = uVar12;
  }
  FUN_01614080(param_2,&local_6c);
  return;
}

