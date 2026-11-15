
void FUN_02405a84(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined8 *puVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_50;
  char *local_48;
  undefined4 local_28;
  byte local_24 [4];
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  local_24[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  FUN_02405e5c(local_24,param_1 + 0x18e0);
  FUN_023203ac(param_1,1,0);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "PlayerOutfitChange";
  FUN_017081d0(puVar3,&local_50,6,0,0);
  uVar2 = *(uint *)(param_1 + 0x1810);
  if ((uVar2 & 0xfffffff7) == 1) {
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar10 = *(float *)(lVar8 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar10 * 999.99994);
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if (uVar2 - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar9 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar9;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
    uVar2 = *(uint *)(param_1 + 0x1810);
  }
  if ((uVar2 & 0xfffffff7) == 1) {
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar10 = *(float *)(lVar8 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar10 * 999.99994);
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if (uVar2 - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar9 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar9;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_02405df0;
  uVar4 = FUN_00a738a0(param_1 + 0x1ee8,0);
  iVar6 = 0;
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_00a74b78(param_1 + 0x1ee8);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar2);
    iVar6 = 1;
    if (uVar2 < 0xf) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x600dU) == 0) {
        if ((uVar2 == 7) || (uVar2 == 9)) {
          iVar6 = (uint)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
        }
      }
      else {
        iVar6 = 2;
      }
    }
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar6);
  *(char *)(param_1 + 0x1903) = (char)iVar6;
  bVar1 = *(byte *)(param_1 + 0x1904) & 3;
  if (bVar1 == 3) {
    FUN_023b7030(param_1,&local_50,0,0);
    FUN_006f0400((float)local_50 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                 local_48._0_4_ - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
    *(undefined2 *)(param_1 + 0x1901) = extraout_var;
LAB_02405dc0:
    uVar5 = *(ushort *)(*(long *)(param_1 + 0x68) + 0x2b6);
  }
  else if (bVar1 == 2) {
    local_28 = *(undefined4 *)(param_1 + 0x230);
    FUN_016f742c(&local_50,&local_28,0);
    uVar5 = local_50._2_2_ ^ 0x8000;
  }
  else {
    if (bVar1 != 1) goto LAB_02405dc0;
    local_28 = *(undefined4 *)(param_1 + 0x230);
    FUN_016f742c(&local_50,&local_28,0);
    uVar5 = local_50._2_2_;
  }
  *(ushort *)(param_1 + 0x1901) = uVar5;
LAB_02405df0:
  FUN_02406780(param_1);
  return;
}

