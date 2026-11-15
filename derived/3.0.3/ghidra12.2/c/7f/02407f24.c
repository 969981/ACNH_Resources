
void FUN_02407f24(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined8 *puVar6;
  ulong uVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_50;
  char *local_48;
  undefined4 local_28;
  byte local_24 [4];
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  local_24[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  FUN_0253b9d0(local_24);
  puVar3 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 0x1900) != '\0') {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "EquipLicenseHelmet";
    local_50 = puVar1;
    iVar4 = FUN_0274bce0(local_24,&local_50);
    if (iVar4 != 0) {
      FUN_02471f38(local_24,PTR_DAT_04bb37e0,1,0xffffffff);
      local_48 = "EquipLicenseHelmet";
      local_50 = puVar1;
      FUN_0274bfe8(local_24,&local_50,0);
    }
  }
  FUN_023203ac(param_1,1,0);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_50 = puVar3 + 0x10;
  local_48 = "PlayerOutfitChange";
  FUN_017081d0(puVar6,&local_50,6,0,0);
  uVar5 = *(uint *)(param_1 + 0x1810);
  if ((uVar5 & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar12 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar12 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (uVar5 - 2 < 3) {
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar11 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar6 + 0x2ec) = uVar11;
    *(undefined1 *)((long)puVar6 + 0x2e5) = 1;
    uVar5 = *(uint *)(param_1 + 0x1810);
  }
  if ((uVar5 & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar12 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar12 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (uVar5 - 2 < 3) {
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar11 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar6 + 0x2ec) = uVar11;
    *(undefined1 *)((long)puVar6 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024082dc;
  uVar7 = FUN_00a738a0(param_1 + 0x1ee8,0);
  iVar4 = 0;
  if ((uVar7 & 1) != 0) {
    uVar5 = FUN_00a74b78(param_1 + 0x1ee8);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar5);
    iVar4 = 1;
    if (uVar5 < 0xf) {
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x600dU) == 0) {
        if ((uVar5 == 7) || (uVar5 == 9)) {
          iVar4 = (uint)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
        }
      }
      else {
        iVar4 = 2;
      }
    }
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar4);
  *(char *)(param_1 + 0x1903) = (char)iVar4;
  bVar2 = *(byte *)(param_1 + 0x1904) & 3;
  if (bVar2 == 3) {
    FUN_023b7030(param_1,&local_50,0,0);
    FUN_006f0400((float)local_50 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                 local_48._0_4_ - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
    *(undefined2 *)(param_1 + 0x1901) = extraout_var;
LAB_024082ac:
    uVar8 = *(ushort *)(*(long *)(param_1 + 0x68) + 0x2b6);
  }
  else if (bVar2 == 2) {
    local_28 = *(undefined4 *)(param_1 + 0x230);
    FUN_016f742c(&local_50,&local_28,0);
    uVar8 = local_50._2_2_ ^ 0x8000;
  }
  else {
    if (bVar2 != 1) goto LAB_024082ac;
    local_28 = *(undefined4 *)(param_1 + 0x230);
    FUN_016f742c(&local_50,&local_28,0);
    uVar8 = local_50._2_2_;
  }
  *(ushort *)(param_1 + 0x1901) = uVar8;
LAB_024082dc:
  puVar3 = PTR_DAT_04bb37e0;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  *(undefined2 *)(puVar6 + 0xb86) = *(undefined2 *)puVar3;
  *(undefined *)((long)puVar6 + 0x5c32) = puVar3[2];
  *(undefined *)((long)puVar6 + 0x5c33) = puVar3[3];
  *(undefined4 *)((long)puVar6 + 0x5c34) = *(undefined4 *)(puVar3 + 4);
  return;
}

