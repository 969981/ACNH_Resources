
void FUN_024cfa3c(long param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  byte local_14 [4];
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar2 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar2;
    fVar9 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar9 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar10 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar10;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) goto LAB_024cfb30;
LAB_024cfb5c:
    lVar5 = puVar3[0x227];
joined_r0x024cfbdc:
    if (lVar5 != 0) goto LAB_024cfb64;
LAB_024cfbe0:
    uVar4 = FUN_0170a6d0(puVar3,0);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 != (undefined8 *)0x0) goto LAB_024cfb5c;
LAB_024cfb30:
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      lVar5 = DAT_052413b8;
      goto joined_r0x024cfbdc;
    }
    puVar3 = &DAT_05240280;
    if (DAT_052413b8 == 0) goto LAB_024cfbe0;
LAB_024cfb64:
    local_3c = 1;
    uVar4 = FUN_0170a6d0(puVar3,*(uint *)(puVar3 + 0x2d3) >> 1 & 1);
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,6);
    return;
  }
  local_14[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  iVar2 = FUN_00a74b78(local_14);
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x15c) != 0)) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar5 + 0x158);
    }
    bVar7 = *(byte *)(param_1 + 0x1ee8);
    bVar6 = *pbVar1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 != bVar7) goto LAB_024cfca0;
  }
  if (iVar2 != 0x13) {
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined2 *)(param_1 + 0x198c) = 0x101;
    *(undefined1 *)(param_1 + 0x198e) = 6;
    local_3c = 0xf;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar5 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar5,0xf);
    return;
  }
LAB_024cfca0:
  uVar4 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
  if ((uVar4 & 1) == 0) {
    local_34 = 0;
    local_3c = 6;
    local_38 = 1;
    FUN_02374e74(param_1,&local_3c);
  }
  return;
}

