
void FUN_02461bc4(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_6c;
  float fStack_68;
  float local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
  lVar11 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x2a0) + 0xf0))(lVar11 + 0x2a0);
  fVar20 = *pfVar12;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  *(float *)(param_1 + 0x1bf0) = fVar20 * 0.5;
  if (*(char *)(param_1 + 0xc9d) == '\0') {
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    local_50 = 0;
    local_48 = (long *)0x0;
    local_60 = 0;
    local_58 = 0;
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_6c = 0.0;
    if ((puVar14[0x227] != 0) &&
       (uVar13 = FUN_03850a90(puVar14[0x227],0,&local_60,0), (uVar13 & 1) != 0)) {
      if ((local_48 == (long *)0x0) || (lVar11 = *local_48, lVar11 == 0)) {
        uVar16 = 1;
      }
      else {
        fVar20 = *(float *)(lVar11 + 0x18);
        if (fVar20 < 0.0) {
          fVar20 = *(float *)(local_48[1] + 0xc);
        }
        uVar16 = (uint)(fVar20 - *(float *)(lVar11 + 0x14));
        if (uVar16 < 2) {
          uVar16 = 1;
        }
      }
      *(undefined4 *)(param_1 + 0xc90) = 0;
      *(undefined1 *)(param_1 + 0xc9d) = 1;
      *(byte *)(param_1 + 0xc9c) = (byte)(uVar16 >> 0x1f);
      *(uint *)(param_1 + 0xc98) = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_1 + 0xc94) = uVar16 & (int)uVar16 >> 0x1f;
    }
    bVar7 = *(char *)(param_1 + 0xc9d) == '\0';
  }
  else {
    bVar7 = false;
  }
  fVar21 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  fVar20 = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_60 = CONCAT44(fVar21,fVar20);
  fVar22 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  local_58 = CONCAT44(local_58._4_4_,fVar22);
  if (bVar7) {
    bVar18 = 1;
    puVar14 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    uVar16 = *(int *)(param_1 + 0xc98) - *(int *)(param_1 + 0xc90);
    uVar4 = *(ushort *)(param_1 + 0x1916);
    if (uVar16 == 0) {
      plVar15 = *(long **)(param_1 + 0x68);
      pfVar12 = (float *)&local_60;
    }
    else {
      plVar15 = *(long **)(param_1 + 0x68);
      pfVar12 = &local_6c;
      fVar23 = 1.0 / (float)uVar16;
      local_6c = *(float *)(plVar15 + 0x4f) + fVar23 * (fVar20 - *(float *)(plVar15 + 0x4f));
      fStack_68 = *(float *)((long)plVar15 + 0x27c) +
                  fVar23 * (fVar21 - *(float *)((long)plVar15 + 0x27c));
      local_64 = *(float *)(plVar15 + 0x50) + fVar23 * (fVar22 - *(float *)(plVar15 + 0x50));
    }
    (**(code **)(*plVar15 + 0x100))(plVar15,pfVar12);
    cVar3 = *(char *)(param_1 + 0xc9d);
    iVar10 = *(int *)(param_1 + 0xc90);
    iVar2 = *(int *)(param_1 + 0xc98);
    if (cVar3 != '\0') {
      uVar9 = (**(code **)(*(long *)(param_1 + 0xc88) + (ulong)*(byte *)(param_1 + 0xc9c) * 8))
                        (param_1 + 0xc88);
      *(undefined4 *)(param_1 + 0xc90) = uVar9;
    }
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x13b0) + 0xf0))(lVar11 + 0x13b0);
    fVar20 = *pfVar12;
    if ((*(int *)(param_1 + 0x178) == 0) &&
       (local_6c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0)) {
      bVar7 = true;
    }
    else {
      iVar5 = (uint)uVar4 * 0x10000;
      plVar15 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar15 = *(long **)(param_1 + 0x4c8);
      }
      lVar11 = (**(code **)(*plVar15 + 0x148))();
      iVar17 = iVar5 - *(int *)(lVar11 + 4);
      if (iVar17 + 0x5b05afU < 0xb60b5f) {
        bVar7 = true;
        iVar19 = iVar5;
      }
      else {
        iVar6 = 0x15555560;
        iVar19 = -0x15555560;
        iVar17 = (int)(fVar20 * 0.65 * (float)iVar17);
        if (iVar17 < 1) {
          iVar6 = -0x5b05b0;
        }
        else {
          iVar19 = 0x5b05b0;
        }
        iVar1 = iVar17;
        if (iVar6 <= iVar17) {
          iVar1 = iVar6;
        }
        if (iVar19 <= iVar17) {
          iVar19 = iVar1;
        }
        iVar19 = iVar19 + *(int *)(lVar11 + 4);
        bVar7 = iVar19 == iVar5;
      }
      *(int *)(lVar11 + 4) = iVar19;
    }
    bVar18 = (cVar3 != '\0' && iVar2 <= iVar10) & bVar7;
    puVar14 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar14 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_052461c0), iVar10 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar14 = &DAT_05240280;
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  bVar8 = FUN_0170a6d0(puVar14,0);
  if ((bVar18 & bVar8) == 1) {
    if (*(int *)(param_1 + 0x178) == 0) {
      local_6c = 3.86758e-43;
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
      lVar11 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar11 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar11,0x114);
    }
    else {
      FUN_0231b104(param_1,6);
    }
  }
  return;
}

