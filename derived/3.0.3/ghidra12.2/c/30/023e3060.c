
void FUN_023e3060(long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulong local_70;
  undefined4 local_68;
  
  uVar17 = *(undefined4 *)(param_1 + 0x1900);
  sVar3 = *(short *)(param_1 + 0x1904);
  uVar2 = *(ushort *)(param_1 + 0x190a);
  uVar16 = *(undefined4 *)(param_1 + 0x1906);
  lVar5 = FUN_0251e98c(1);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
  local_78 = 0;
  puVar12 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_68 = *(undefined4 *)(puVar12 + 0x50);
  local_70 = puVar12[0x4f] & 0xffffffff;
  local_7c = uVar17;
  local_74 = uVar16;
  FUN_03eb4b60(*puVar6,0x41200000,0x3e4ccccc,&local_70,&local_7c);
  *(undefined4 *)(puVar12 + 0x4f) = (undefined4)local_70;
  *(undefined4 *)(puVar12 + 0x50) = local_68;
  lVar5 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar18 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c = 10;
    local_70 = CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023e31a0;
  }
  else {
LAB_023e31a0:
    iVar14 = (uint)uVar2 * 0x10000;
    plVar13 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar13 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar13 + 0x148))();
    iVar10 = iVar14 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar14 = -0x15555560;
      iVar10 = (int)(fVar18 * (float)iVar10);
      if (iVar10 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar4 <= iVar10) {
        iVar1 = iVar4;
      }
      if (iVar14 <= iVar10) {
        iVar14 = iVar1;
      }
      iVar14 = iVar14 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar14;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  fVar18 = (float)(int)sVar3 * 0.25;
  local_70 = local_70 & 0xffffffff00000000;
  if (puVar12[0x227] == 0) {
LAB_023e3410:
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_052461c0), iVar14 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar12 = &DAT_05240280;
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    uVar8 = FUN_0170a6d0(puVar12,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x1988) = 0;
    iVar14 = (int)(fVar18 * 4.0);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined4 *)(param_1 + 0x1980) = uVar17;
    *(undefined4 *)(param_1 + 0x1986) = uVar16;
    *(ushort *)(param_1 + 0x198a) = uVar2;
    *(short *)(param_1 + 0x1984) = (short)iVar14;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    if ((*(uint *)(param_1 + 0x17d0) & 1) == 0) {
      uVar11 = 0x4e;
    }
    else {
      uVar11 = 0x4f;
    }
    local_70 = CONCAT44(local_70._4_4_,uVar11);
    if (0x148 < uVar11) {
      return;
    }
  }
  else {
    lVar5 = *(long *)(puVar12[0x227] + 0x88);
    plVar13 = (long *)(lVar5 + 0x60);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcVar15 = *(char **)(lVar5 + 0x68);
    (**(code **)(DAT_054b2320 + 0x18))(&DAT_054b2320);
    if (pcVar15 != DAT_054b2328) {
      pcVar15 = *(char **)(lVar5 + 0x68);
      if (*pcVar15 != *DAT_054b2328) goto LAB_023e3410;
      if (*pcVar15 != '\0') {
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          if ((uVar9 == 0x80000) || (pcVar15[uVar9 + 1] != DAT_054b2328[uVar9 + 1]))
          goto LAB_023e3410;
          if (pcVar15[uVar9 + 1] == '\0') goto LAB_023e3370;
          if (pcVar15[uVar9 + 2] != DAT_054b2328[uVar9 + 2]) goto LAB_023e3410;
          uVar8 = uVar9 + 2;
        } while (pcVar15[uVar9 + 2] != '\0');
        uVar9 = uVar9 + 1;
LAB_023e3370:
        if (uVar9 >> 0x13 != 0) goto LAB_023e3410;
      }
    }
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
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined4 *)(param_1 + 0x1980) = uVar17;
    *(undefined4 *)(param_1 + 0x1986) = uVar16;
    *(ushort *)(param_1 + 0x198a) = uVar2;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    iVar14 = (int)(fVar18 * 4.0);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar14;
    local_70 = CONCAT44(local_70._4_4_,0x4e);
  }
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
  FUN_03ebb160(lVar5,local_70 & 0xffffffff);
  return;
}

