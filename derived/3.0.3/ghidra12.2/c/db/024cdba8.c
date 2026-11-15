
void FUN_024cdba8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar4 + 0x278) * 999.99994);
    iVar1 = (int)(*(float *)(lVar4 + 0x27c) * 4.0);
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar1;
    fVar6 = *(float *)(lVar4 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar6 * 999.99994);
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar5;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar7 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar2 + 0x2ec) = uVar7;
    *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 == 0)) {
      puVar2 = &DAT_05240280;
      goto LAB_024cdcd0;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar2 = &DAT_05240280;
    if (DAT_052413b8 != 0) goto LAB_024cdcd8;
LAB_024cdd54:
    uVar3 = FUN_0170a6d0(puVar2,0);
  }
  else {
LAB_024cdcd0:
    if (puVar2[0x227] == 0) goto LAB_024cdd54;
LAB_024cdcd8:
    local_3c = 1;
    uVar3 = FUN_0170a6d0(puVar2,*(uint *)(puVar2 + 0x2d3) >> 1 & 1);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248) goto LAB_024cdd7c;
  lVar4 = *(long *)PTR_DAT_04bb38d0;
  if (lVar4 == 0) {
LAB_024cded8:
    uVar3 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
    if ((uVar3 & 1) == 0) {
      local_34 = 0;
      local_3c = 6;
      local_38 = 1;
      FUN_02374e74(param_1,&local_3c);
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
      if (7 < uVar5) {
        uVar5 = 0xff;
      }
      if ((*(byte *)(lVar4 + 0x88) >> (ulong)(uVar5 & 0x1f) & 1) == 0) goto LAB_024cded8;
    }
    else {
      uVar5 = (uint)*(byte *)(lVar4 + 0x88) - (*(byte *)(lVar4 + 0x88) >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      if ((uVar5 + (uVar5 >> 0x10) & 0x3f) == 0) goto LAB_024cded8;
    }
LAB_024cdd7c:
    local_3c = 0xe8;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar4 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar4 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar4,0xe8);
  }
  return;
}

