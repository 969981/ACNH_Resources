
void FUN_01613a48(float param_1,float param_2,undefined8 param_3,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar5 = PTR_DAT_04bbdb78;
  uVar2 = param_4;
  if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= param_4) {
    uVar2 = 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)uVar2 * 8);
  local_6c = param_4;
  if (((*PTR_DAT_04bbdb68 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar6 != 0))
  {
    *(undefined ***)PTR_DAT_04bbdb60 = &PTR_LAB_049b3b38;
    __cxa_guard_release(PTR_DAT_04bbdb68);
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bbdb60);
  uVar2 = local_6c;
  puVar4 = PTR_DAT_04bb2200;
  if ((uVar7 & 1) == 0) {
    return;
  }
  local_68 = local_6c;
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
LAB_01613b10:
    plVar10 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)puVar5;
    uVar3 = local_6c;
    if (*(uint *)(lVar8 + 0x20) <= local_6c) {
      uVar3 = 0;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x28) + (long)(int)uVar3 * 8);
    if (lVar8 == 0) goto LAB_01613b10;
    plVar10 = *(long **)(lVar8 + 0x78);
  }
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  fVar12 = 0.0;
  if ((plVar10 != (long *)0x0) &&
     (uVar7 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb6200), (uVar7 & 1) != 0)) {
    fVar12 = *(float *)((long)plVar9 + 0x3c);
    fVar13 = *(float *)((long)plVar9 + 0x34);
    uVar7 = (ulong)(param_1 * 0.5 * 11930465.0);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar7 >> 0x18 & 0xff) * 0x10);
    fVar14 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    fVar17 = pfVar1[2];
    fVar18 = pfVar1[3];
    plVar10[7] = 0;
    *(undefined8 *)((long)plVar10 + 0x44) = 0;
    *(undefined8 *)((long)plVar10 + 0x4c) = 0;
    *(undefined8 *)((long)plVar10 + 0x54) = 0x3f800000;
    fVar12 = ((fVar12 - fVar13) * 0.5) / ((fVar15 + fVar14 * fVar16) / (fVar17 + fVar14 * fVar18));
    *(float *)(plVar10 + 8) = fVar12;
    (**(code **)(*plVar10 + 0x20))(plVar10,plVar10 + 1);
  }
  local_64 = uVar2;
  fVar13 = 1.0;
  if (1.0 <= fVar12 - param_2) {
    fVar13 = fVar12 - param_2;
  }
  if (*(long *)(*(long *)puVar4 + 0x58) != 0) {
    lVar8 = *(long *)puVar5;
    if (*(uint *)(lVar8 + 0x20) <= uVar2) {
      uVar2 = 0;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x28) + (long)(int)uVar2 * 8);
    if (lVar8 != 0) {
      puVar11 = *(undefined8 **)(lVar8 + 0x80);
      goto LAB_01613c28;
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_01613c28:
  if (((*PTR_DAT_04bb6230 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6230);
  }
  fVar12 = fVar12 + param_2 * 2.0;
  if ((puVar11 != (undefined8 *)0x0) &&
     (uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb6228), (uVar7 & 1) != 0)) {
    *(float *)(puVar11 + 0x13) = fVar13;
    *(float *)((long)puVar11 + 0x9c) = fVar12;
    fVar15 = param_1 * 0.017453292 * 0.5;
    *(float *)(puVar11 + 0x14) = param_1 * 0.017453292;
    fVar14 = sinf(fVar15);
    *(float *)((long)puVar11 + 0xa4) = fVar14;
    fVar14 = cosf(fVar15);
    *(float *)(puVar11 + 0x15) = fVar14;
    fVar14 = tanf(fVar15);
    *(float *)((long)puVar11 + 0xac) = fVar14;
    *(undefined1 *)(puVar11 + 1) = 1;
    fVar14 = *(float *)(plVar9 + 7);
    fVar15 = *(float *)((long)plVar9 + 0x3c);
    fVar16 = *(float *)(plVar9 + 6);
    fVar17 = *(float *)((long)plVar9 + 0x34);
    *(undefined1 *)(puVar11 + 1) = 1;
    *(float *)(puVar11 + 0x16) = (fVar14 - fVar16) / (fVar15 - fVar17);
  }
  lVar8 = plVar9[0x196];
  if (lVar8 != 0) {
    *(ushort *)(lVar8 + 0x1a34) = *(ushort *)(lVar8 + 0x1a34) | 2;
    iVar6 = (int)(char)plVar9[0x1a3];
    if (*(uint *)(lVar8 + 0x1a70) <= (uint)(int)(char)plVar9[0x1a3]) {
      iVar6 = 0;
    }
    lVar8 = *(long *)(lVar8 + 0x1a78) + (long)iVar6 * 0xfc8;
    **(float **)(lVar8 + 0x318) = fVar13;
    *(float *)(*(long *)(lVar8 + 0x318) + (long)*(int *)(lVar8 + 0x238) * 4) = fVar12;
  }
  FUN_01614080(param_3,&local_6c);
  return;
}

