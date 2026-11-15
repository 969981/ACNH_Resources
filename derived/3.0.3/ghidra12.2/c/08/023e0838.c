
void FUN_023e0838(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint *puVar5;
  float *pfVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "PlayerFtrHold";
  FUN_017081d0(puVar3,&local_40,6,0,0);
  lVar4 = FUN_0251e98c(1);
  puVar5 = (uint *)(**(code **)(*(long *)(lVar4 + 0x480) + 0xf0))(lVar4 + 0x480);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined1 *)(param_1 + 0x7fd) = 1;
  *(byte *)(param_1 + 0x7fc) = (byte)(uVar2 >> 0x1f);
  *(uint *)(param_1 + 0x7f4) = uVar2 & (int)uVar2 >> 0x1f;
  *(uint *)(param_1 + 0x7f8) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xf7ffffff;
  if (*(char *)(param_1 + 0x2264) != '\0') goto LAB_023e0900;
  if (*(int *)(param_1 + 0x178) == 0) {
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xff7fffff;
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    uVar7 = FUN_0231e7ec(param_1,1,&local_48);
    if ((uVar7 & 1) == 0) goto LAB_023e0900;
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x800000;
    puVar1 = PTR_DAT_04bb43c0;
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar1 == 0) goto LAB_023e0900;
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_023e0900;
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    *(undefined8 *)(param_1 + 0x1915) = local_48;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
  }
  else {
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    puVar1 = PTR_DAT_04bb43c0;
    local_48 = *(undefined8 *)(param_1 + 0x1915);
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar1 == 0) goto LAB_023e0900;
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_023e0900;
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
  }
  local_50 = &local_48;
  local_38 = (char *)CONCAT71(local_38._1_7_,bVar8);
  local_38 = (char *)CONCAT44(0xffffffff,(undefined4)local_38);
  local_40 = PTR_DAT_04bc31f8 + 0x10;
  FUN_02587bb0(&local_40,&local_50);
LAB_023e0900:
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_054f0960);
      puVar5 = (uint *)&DAT_054f0958;
      if (iVar10 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar5 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar5 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar5 = puVar5 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0x15);
  *puVar5 = *puVar5 | 0x200000;
  uVar2 = *(uint *)(param_1 + 0x1810) & 0xfffffff7;
  if (uVar2 == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar4 + 0x278) * 999.99994);
    iVar10 = (int)(*(float *)(lVar4 + 0x27c) * 4.0);
    if (0x7ffe < iVar10) {
      iVar10 = 0x7fff;
    }
    if (iVar10 < -0x7fff) {
      iVar10 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar10;
    fVar12 = *(float *)(lVar4 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar12 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar11 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar11;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
    uVar2 = *(uint *)(param_1 + 0x1810) & 0xfffffff7;
  }
  if (uVar2 != 1) {
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
    lVar4 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x2a0) + 0xf0))(lVar4 + 0x2a0);
    fVar12 = *pfVar6;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
    *(float *)(param_1 + 0x1bf0) = fVar12 * 0.5;
  }
  lVar4 = *(long *)(param_1 + 0x68);
  fVar14 = *(float *)(param_1 + 0x1900) - *(float *)(lVar4 + 0x278);
  fVar12 = *(float *)(param_1 + 0x1906);
  fVar13 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25 - *(float *)(lVar4 + 0x27c);
  fVar15 = fVar12 - *(float *)(lVar4 + 0x280);
  if (SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15) < 0.25) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar3 + 0x5d) = *(float *)(param_1 + 0x1900);
    *(undefined1 *)((long)puVar3 + 0x2e4) = 1;
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar3 + 0x5e) = fVar12;
    *(undefined1 *)((long)puVar3 + 0x2e6) = 1;
  }
  return;
}

