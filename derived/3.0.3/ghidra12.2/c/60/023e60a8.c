
/* WARNING: Removing unreachable block (ram,0x023e630c) */
/* WARNING: Removing unreachable block (ram,0x023e6380) */

void FUN_023e60a8(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  long lVar12;
  undefined4 *puVar13;
  float *pfVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  float fVar20;
  undefined4 uVar21;
  uint uVar22;
  float fVar23;
  uint local_9c [3];
  undefined8 local_90;
  undefined4 local_88;
  
  uVar22 = *(uint *)(param_1 + 0x1900);
  sVar8 = *(short *)(param_1 + 0x1904);
  uVar6 = *(ushort *)(param_1 + 0x190a);
  uVar21 = *(undefined4 *)(param_1 + 0x1906);
  cVar4 = *(char *)(param_1 + 0x191e);
  cVar5 = *(char *)(param_1 + 0x191d);
  lVar12 = FUN_0251e98c(1);
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x1380) + 0xf0))(lVar12 + 0x1380);
  local_9c[1] = 0;
  puVar18 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar18 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_88 = *(undefined4 *)(puVar18 + 0x50);
  local_90 = puVar18[0x4f] & 0xffffffff;
  local_9c[0] = uVar22;
  local_9c[2] = uVar21;
  fVar20 = (float)FUN_03eb4b60(*puVar13,0x41200000,0x3e4ccccc,&local_90,local_9c);
  *(undefined4 *)(puVar18 + 0x4f) = (undefined4)local_90;
  *(undefined4 *)(puVar18 + 0x50) = local_88;
  lVar12 = FUN_0251e98c(1);
  pfVar14 = (float *)(**(code **)(*(long *)(lVar12 + 0x13b0) + 0xf0))(lVar12 + 0x13b0);
  fVar23 = *pfVar14;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_9c[0] = 10;
    local_90 = CONCAT44(local_90._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023e6200;
    bVar11 = true;
  }
  else {
LAB_023e6200:
    iVar17 = (uint)uVar6 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar12 = (**(code **)(*plVar3 + 0x148))();
    iVar16 = iVar17 - *(int *)(lVar12 + 4);
    if (iVar16 + 0x5b05afU < 0xb60b5f) {
      bVar11 = true;
      iVar19 = iVar17;
    }
    else {
      iVar9 = 0x15555560;
      iVar19 = -0x15555560;
      iVar16 = (int)(fVar23 * (float)iVar16);
      if (iVar16 < 1) {
        iVar9 = -0x5b05b0;
      }
      else {
        iVar19 = 0x5b05b0;
      }
      iVar2 = iVar16;
      if (iVar9 <= iVar16) {
        iVar2 = iVar9;
      }
      if (iVar19 <= iVar16) {
        iVar19 = iVar2;
      }
      iVar19 = iVar19 + *(int *)(lVar12 + 4);
      bVar11 = iVar19 == iVar17;
    }
    *(int *)(lVar12 + 4) = iVar19;
  }
  bVar1 = false;
  if (fVar20 == 0.0) {
    bVar1 = bVar11;
  }
  if ((!bVar1) && (*(uint *)(param_1 + 0x1c04) < 0x15)) {
    return;
  }
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  if (puVar18 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar18 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar18 = &DAT_05240280;
    }
  }
  if (puVar18[0x227] == 0) {
    local_90 = (ulong)local_90._4_4_ << 0x20;
  }
  else {
    local_90 = CONCAT44(local_90._4_4_,*(uint *)(puVar18 + 0x2d3) >> 1) & 0xffffffff00000001;
    uVar15 = FUN_03850368(puVar18[0x227],*(uint *)(puVar18 + 0x2d3) >> 1 & 1);
    if ((uVar15 & 1) != 0) goto LAB_023e63c0;
  }
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  if (puVar18 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar18 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar18 = &DAT_05240280;
    }
  }
  if (puVar18[0x227] == 0) {
    local_9c[0] = 0;
    local_90 = (ulong)local_90._4_4_ << 0x20;
  }
  else {
    local_9c[0] = *(uint *)(puVar18 + 0x2d3) >> 1 & 1;
    local_90 = CONCAT44(local_90._4_4_,*(uint *)(puVar18 + 0x2d3) >> 1) & 0xffffffff00000001;
    uVar15 = FUN_03850368(puVar18[0x227],local_9c[0]);
    uVar10 = local_9c[0];
    if (((((uVar15 & 1) == 0) && (puVar18[0x227] != 0)) &&
        (uVar15 = FUN_03850368(puVar18[0x227],local_9c[0]), (uVar15 & 1) == 0)) &&
       (uVar15 = FUN_0384fca4(puVar18[0x227],uVar10), (uVar15 & 1) == 0)) {
      return;
    }
  }
LAB_023e63c0:
  if (*(int *)(param_1 + 0x178) == 0) {
    if (cVar4 == '\0') {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      lVar12 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined4 *)(param_1 + 0x1980) = *(undefined4 *)(lVar12 + 0x278);
      iVar17 = (int)(*(float *)(lVar12 + 0x27c) * 4.0);
      if (0x7ffe < iVar17) {
        iVar17 = 0x7fff;
      }
      if (iVar17 < -0x7fff) {
        iVar17 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar17;
      *(undefined4 *)(param_1 + 0x1986) = *(undefined4 *)(lVar12 + 0x280);
      uVar7 = *(undefined2 *)(lVar12 + 0x2b6);
      *(bool *)(param_1 + 0x199d) = cVar5 != '\0';
      *(undefined1 *)(param_1 + 0x199e) = 0;
      *(undefined2 *)(param_1 + 0x198a) = uVar7;
      uVar22 = 0x52;
    }
    else {
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(uint *)(param_1 + 0x1980) = uVar22;
      *(undefined4 *)(param_1 + 0x1986) = uVar21;
      *(ushort *)(param_1 + 0x198a) = uVar6;
      *(bool *)(param_1 + 0x199d) = cVar5 != '\0';
      uVar22 = 0x53;
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      iVar17 = (int)((float)(int)sVar8 * 0.25 * 4.0);
      if (0x7ffe < iVar17) {
        iVar17 = 0x7fff;
      }
      if (iVar17 < -0x7fff) {
        iVar17 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar17;
    }
    local_90 = CONCAT44(local_90._4_4_,uVar22);
    if (uVar22 < 0x149) {
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
      lVar12 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar12 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar12,uVar22);
    }
  }
  return;
}

