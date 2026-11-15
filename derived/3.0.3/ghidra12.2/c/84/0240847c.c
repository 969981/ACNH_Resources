
/* WARNING: Removing unreachable block (ram,0x024085c8) */
/* WARNING: Removing unreachable block (ram,0x0240882c) */

void FUN_0240847c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  float fVar16;
  byte local_5c [4];
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar12 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar8 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar8) {
      iVar8 = 0x7fff;
    }
    if (iVar8 < -0x7fff) {
      iVar8 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar8;
    fVar16 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar16 * 999.99994);
    uVar12 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar12;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar14 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar15 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar14 + 0x2ec) = uVar15;
    *(undefined1 *)((long)puVar14 + 0x2e5) = 1;
  }
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  if (puVar14[0x227] == 0) {
    local_58[0] = 0;
  }
  else {
    local_58[0] = *(uint *)(puVar14 + 0x2d3) >> 1 & 1;
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x26);
    uVar9 = FUN_03850890(puVar14[0x227],0x26,0,local_58[0]);
    if ((uVar9 & 1) != 0) {
      uVar12 = *(uint *)(param_1 + 0x17cc);
      *(uint *)(param_1 + 0x17cc) = uVar12 & 0xfffffffe;
      if ((uVar12 & 1) != 0) {
        local_5c[0] = *(byte *)(param_1 + 0x1ee8);
        if (7 < local_5c[0]) {
          local_5c[0] = 0xff;
        }
        FUN_0253b9d0(local_5c);
        if (*(char *)(param_1 + 0x1900) != '\0') {
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          local_48 = "EquipLicenseHelmet";
          local_50 = puVar1;
          iVar8 = FUN_0274bce0(local_5c,&local_50);
          if (iVar8 != 0) {
            FUN_02471f38(local_5c,PTR_DAT_04bb37e0,1,0xffffffff);
            local_48 = "EquipLicenseHelmet";
            local_50 = puVar1;
            FUN_0274bfe8(local_5c,&local_50,0);
          }
        }
      }
      FUN_023203ac(param_1,0,0);
      local_50 = (undefined *)CONCAT35((int3)((ulong)local_50 >> 0x28),0x100000000);
      local_48 = (char *)CONCAT17(local_48._7_1_,6);
      local_48 = (char *)CONCAT26(local_48._6_2_,6);
      FUN_02321e44(local_58,param_1,&local_50);
    }
  }
  uVar5 = *(ushort *)(param_1 + 0x1901);
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar16 = *pfVar11;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_58[0] = 10;
    local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024087cc;
  }
  iVar8 = (uint)uVar5 * 0x10000;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar10 = (**(code **)(*plVar3 + 0x148))();
  iVar13 = iVar8 - *(int *)(lVar10 + 4);
  if (iVar13 + 0x5b05afU < 0xb60b5f) {
    *(int *)(lVar10 + 4) = iVar8;
  }
  else {
    iVar6 = 0x15555560;
    iVar7 = -0x15555560;
    iVar13 = (int)(fVar16 * (float)iVar13);
    if (iVar13 < 1) {
      iVar6 = -0x5b05b0;
    }
    else {
      iVar7 = 0x5b05b0;
    }
    iVar2 = iVar13;
    if (iVar6 <= iVar13) {
      iVar2 = iVar6;
    }
    if (iVar7 <= iVar13) {
      iVar7 = iVar2;
    }
    iVar7 = iVar7 + *(int *)(lVar10 + 4);
    *(int *)(lVar10 + 4) = iVar7;
    if (iVar7 != iVar8) {
      return;
    }
  }
LAB_024087cc:
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  if (puVar14[0x227] == 0) {
    local_58[0] = 0;
    local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
  }
  else {
    local_58[0] = *(uint *)(puVar14 + 0x2d3) >> 1 & 1;
    local_50 = (undefined *)
               (CONCAT44(local_50._4_4_,*(uint *)(puVar14 + 0x2d3) >> 1) & 0xffffffff00000001);
    uVar9 = FUN_03850368(puVar14[0x227],local_58[0]);
    uVar12 = local_58[0];
    if (((((uVar9 & 1) == 0) && (puVar14[0x227] != 0)) &&
        (uVar9 = FUN_03850368(puVar14[0x227],local_58[0]), (uVar9 & 1) == 0)) &&
       (uVar9 = FUN_0384fca4(puVar14[0x227],uVar12), (uVar9 & 1) == 0)) {
      return;
    }
  }
  bVar4 = *(byte *)(param_1 + 0x1903);
  if (7 < bVar4) {
    bVar4 = 0;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4(param_1,bVar4,6);
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    if (bVar4 == 1) {
      FUN_0231b68c(param_1,6);
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

