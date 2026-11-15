
void FUN_02371478(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_3c = 0x23, (*(uint *)(param_1 + 0xed4) >> 3 & 1) != 0)) {
      local_3c = 0x137;
      goto LAB_02371774;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    if (puVar2 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 == 0)) {
        puVar2 = &DAT_05240280;
        goto LAB_02371510;
      }
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      if (DAT_052413b8 != 0) goto LAB_02371518;
LAB_02371630:
      uVar3 = FUN_0170a6d0(puVar2,0);
    }
    else {
LAB_02371510:
      if (puVar2[0x227] == 0) goto LAB_02371630;
LAB_02371518:
      local_3c = 1;
      uVar3 = FUN_0170a6d0(puVar2,*(uint *)(puVar2 + 0x2d3) >> 1 & 1);
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)PTR_DAT_04bb38d0;
    if (lVar4 == 0) {
LAB_023716b8:
      uVar3 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar3 & 1) == 0) {
        local_34 = 0;
        local_3c = 6;
        local_38 = 1;
        FUN_02374e74(param_1,&local_3c);
        return;
      }
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
      if (7 < uVar5) {
        uVar5 = 0xff;
      }
      if ((*(byte *)(lVar4 + 0x88) >> (ulong)(uVar5 & 0x1f) & 1) == 0) goto LAB_023716b8;
    }
    else {
      uVar5 = (uint)*(byte *)(lVar4 + 0x88) - (*(byte *)(lVar4 + 0x88) >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      if ((uVar5 + (uVar5 >> 0x10) & 0x3f) == 0) goto LAB_023716b8;
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    if (puVar2 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar2 = &DAT_05240280;
        lVar4 = DAT_052413b8;
        goto joined_r0x02371700;
      }
      puVar2 = &DAT_05240280;
      if (DAT_052413b8 == 0) goto LAB_02371704;
LAB_02371564:
      local_3c = 1;
      uVar3 = FUN_0170a6d0(puVar2,*(uint *)(puVar2 + 0x2d3) >> 1 & 1);
    }
    else {
      lVar4 = puVar2[0x227];
joined_r0x02371700:
      if (lVar4 != 0) goto LAB_02371564;
LAB_02371704:
      uVar3 = FUN_0170a6d0(puVar2,0);
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)PTR_DAT_04bb38d0;
    if (lVar4 == 0) {
LAB_02371874:
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
      if (7 < uVar5) {
        uVar5 = 0xff;
      }
      if ((*(byte *)(lVar4 + 0x88) >> (ulong)(uVar5 & 0x1f) & 1) == 0) goto LAB_02371874;
    }
    else {
      uVar5 = (uint)*(byte *)(lVar4 + 0x88) - (*(byte *)(lVar4 + 0x88) >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      if ((uVar5 + (uVar5 >> 0x10) & 0x3f) == 0) goto LAB_02371874;
    }
  }
  local_3c = 0xe8;
LAB_02371774:
  if (local_3c < 0x149) {
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
    FUN_03ebb160(lVar4,local_3c);
  }
  return;
}

