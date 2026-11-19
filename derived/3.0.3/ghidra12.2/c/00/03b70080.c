
void FUN_03b70080(long param_1,float *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  fVar10 = param_2[1];
  *(float *)(param_1 + 0xc) = fVar10;
  uVar6 = (uint)(fVar10 * (*param_2 / 1000.0));
  if ((int)uVar6 < 2) {
    uVar6 = 1;
  }
  *(uint *)(param_1 + 0x28) = uVar6;
  if (*(long *)(param_1 + 0x100) != 0) {
    *(float *)(*(long *)(param_1 + 0x100) + 0x10) = *param_2;
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  uVar14 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  auVar12 = NEON_fmov(0x3f800000,4);
  sVar8 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
  if ((int)uVar6 < 0) {
    sVar8 = 0xffffffffffffffff;
  }
  *(undefined8 *)(param_1 + 0x50) = uVar14;
  puVar2 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  uVar13 = auVar12._8_8_;
  *(undefined8 *)(param_1 + 0x68) = uVar13;
  uVar11 = auVar12._0_8_;
  *(undefined8 *)(param_1 + 0x60) = uVar11;
  if (lVar9 == 0) {
    pvVar5 = malloc(sVar8);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      pvVar5 = (void *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_03b70180;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar8,8);
  }
LAB_03b70180:
  *(void **)(param_1 + 0x70) = pvVar5;
  memset(pvVar5,0,(long)*(int *)(param_1 + 0x28) << 3);
  sVar8 = (long)*(int *)(param_1 + 0x28) << 4;
  lVar9 = *(long *)puVar2;
  if (*(int *)(param_1 + 0x28) < 0) {
    sVar8 = 0xffffffffffffffff;
  }
  if (lVar9 == 0) {
    pvVar5 = malloc(sVar8);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar9 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_03b70208;
      }
    }
    pvVar5 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar8,0x10);
  }
LAB_03b70208:
  *(void **)(param_1 + 0x78) = pvVar5;
  memset(pvVar5,0,(long)*(int *)(param_1 + 0x28) << 4);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x40) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x70) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x58) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x88) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xa0) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xb8) = 0x3f800000;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x1c) = 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x44) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x74) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x5c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x8c) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xa4) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xbc) = 0x3f800000;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x48) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x78) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x60) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x90) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xa8) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xc0) = 0x3f800000;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x24) = 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x4c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x7c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 100) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x94) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xac) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xc4) = 0x3f800000;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x50) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x80) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x68) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x98) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xb0) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 200) = 0x3f800000;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x2c) = 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x54) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x84) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x6c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x9c) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xb4) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0xcc) = 0x3f800000;
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x3f353bef;
    *(undefined8 *)(param_1 + 0xa8) = 0x3f353bef3f353bef;
    *(undefined4 *)(param_1 + 0xf8) = 0x3f353bef;
    *(undefined4 *)(param_1 + 0xfc) = 0x3f353bef;
    *(undefined8 *)(param_1 + 0xf0) = 0x3f353bef3f353bef;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0x3f353bef;
    *(undefined8 *)(param_1 + 0xa8) = 0x3f353bef3f353bef;
    *(undefined4 *)(param_1 + 0xf8) = 0x3f353bef;
    *(undefined4 *)(param_1 + 0xfc) = 0x3f353bef;
    *(undefined8 *)(param_1 + 0xf0) = 0x3f353bef3f353bef;
    if (*(undefined4 **)(param_1 + 0x100) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x100) = 0xc0400000;
    }
  }
  fVar10 = expf((-1.0 / *(float *)(param_1 + 0xc)) / 1e-05);
  fVar10 = 1.0 - fVar10;
  *(float *)(param_1 + 0x10) = fVar10;
  *(ulong *)(param_1 + 0x98) = CONCAT44(fVar10,fVar10);
  *(ulong *)(param_1 + 0xd8) = CONCAT44(fVar10,fVar10);
  *(ulong *)(param_1 + 0xd0) = CONCAT44(fVar10,fVar10);
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 4) = 0x3c23d70a;
  }
  fVar10 = expf((-1.0 / *(float *)(param_1 + 0xc)) / 0.3);
  fVar10 = 1.0 - fVar10;
  *(float *)(param_1 + 0x14) = fVar10;
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar10,fVar10);
  *(ulong *)(param_1 + 0xe8) = CONCAT44(fVar10,fVar10);
  *(ulong *)(param_1 + 0xe0) = CONCAT44(fVar10,fVar10);
  lVar9 = 0;
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x100) + 8) = 0x43960000;
    lVar9 = *(long *)(param_1 + 0x100);
  }
  iVar7 = (int)(*(float *)(param_1 + 0xc) * 0.0005);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  if (*(int *)(param_1 + 0x28) < iVar7) {
LAB_03b704cc:
    *(undefined8 *)(param_1 + 0x88) = uVar14;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xb8) = uVar13;
    *(undefined8 *)(param_1 + 0xb0) = uVar11;
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x90) = uVar14;
      *(undefined8 *)(param_1 + 200) = uVar13;
      *(undefined8 *)(param_1 + 0xc0) = uVar11;
      if (*(long *)(param_1 + 0x100) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x18) = 0;
      }
      goto LAB_03b70528;
    }
  }
  else {
    *(int *)(param_1 + 0x24) = iVar7;
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0xc) = 0x3f000000;
      lVar9 = *(long *)(param_1 + 0x100);
      goto LAB_03b704cc;
    }
    *(undefined8 *)(param_1 + 0x88) = uVar14;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xb8) = uVar13;
    *(undefined8 *)(param_1 + 0xb0) = uVar11;
  }
  *(undefined8 *)(param_1 + 0x90) = uVar14;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 200) = uVar13;
  *(undefined8 *)(param_1 + 0xc0) = uVar11;
LAB_03b70528:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

