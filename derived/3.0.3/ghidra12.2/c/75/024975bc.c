
void FUN_024975bc(long param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  byte bVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  uint local_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  undefined4 local_64;
  long *local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  iVar11 = *(int *)(param_1 + 0x191c);
  sVar3 = *(short *)(param_1 + 0x191a);
  iVar14 = *(int *)(param_1 + 0x1916);
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  bVar9 = *PTR_DAT_04bb32e0;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_6c = 0.0;
  fStack_68 = 1.0;
  local_64._0_1_ = 1;
  if (*(char *)(param_1 + 0x3a5) == '\0') {
    cVar8 = '\0';
  }
  else {
    local_78._0_1_ = bVar9;
    uVar4 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    cVar8 = *(char *)(param_1 + 0x3a5);
    *(undefined4 *)(param_1 + 0x398) = uVar4;
  }
  bVar9 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_78 = CONCAT31(local_78._1_3_,bVar9);
  iVar2 = *(int *)(param_1 + 0x3a0);
  if (cVar8 == '\0') {
    fVar13 = 0.0;
  }
  else {
    fVar13 = 1.0;
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x398) < iVar2)) {
      fVar12 = (float)*(int *)(param_1 + 0x398) / (float)iVar2;
      fVar16 = 1.0;
      if (fVar12 <= 1.0) {
        fVar16 = fVar12;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar16;
      }
    }
  }
  local_64 = CONCAT31(local_64._1_3_,1);
  fStack_68 = fVar13 * 0.7 + 0.3;
  fStack_74 = (float)iVar14 * 0.001;
  fStack_70 = (float)(int)sVar3 * 0.25;
  local_6c = (float)iVar11 * 0.001;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_78,*(undefined4 *)(param_1 + 0x230),1);
  FUN_016dec40(param_1,*(long *)(param_1 + 0x68) + 0x278,0,0,0,0,0);
  if (*(int *)(param_1 + 0x1c04) == 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    fStack_68 = 0.0;
    local_64 = 0;
    local_60 = (long *)0x0;
    local_78 = 0;
    fStack_74 = 0.0;
    fStack_70 = 0.0;
    local_6c = 0.0;
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    local_58 = 0;
    local_54 = 0xe;
    if ((puVar10[0x227] == 0) ||
       (uVar5 = FUN_03850a90(puVar10[0x227],0xe,&local_78,0), (uVar5 & 1) == 0)) {
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar11 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar11 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      local_54 = 0;
      local_58 = 0;
      if ((puVar10[0x227] != 0) &&
         (uVar5 = FUN_03850a90(puVar10[0x227],0,&local_78,0), (uVar5 & 1) != 0)) goto LAB_024977d0;
LAB_02497814:
      uVar6 = 1;
      lVar7 = *(long *)(param_1 + 0x1c68);
    }
    else {
LAB_024977d0:
      if ((local_60 == (long *)0x0) || (lVar7 = *local_60, lVar7 == 0)) goto LAB_02497814;
      fVar13 = *(float *)(lVar7 + 0x18);
      if (fVar13 < 0.0) {
        fVar13 = *(float *)(local_60[1] + 0xc);
      }
      uVar6 = (uint)(fVar13 - *(float *)(lVar7 + 0x14));
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      lVar7 = *(long *)(param_1 + 0x1c68);
    }
    if (lVar7 != 0) {
      uVar1 = uVar6;
      if ((int)uVar6 < 2) {
        uVar1 = 1;
      }
      *(undefined8 *)(param_1 + 0x1c10) = 0;
      *(undefined2 *)(param_1 + 0x1c1c) = 0x100;
      *(uint *)(param_1 + 0x1c18) = uVar1;
      *(undefined1 *)(param_1 + 0x1c34) = 1;
      fVar13 = (float)*(int *)(param_1 + 0x1910) * 0.001;
      fVar15 = (float)*(int *)(param_1 + 0x190a) * 0.001;
      *(float *)(param_1 + 0x1c2c) = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
      *(float *)(param_1 + 0x1c28) = fVar15;
      *(float *)(param_1 + 0x1c30) = fVar13;
      fVar12 = *(float *)(lVar7 + 0x278);
      fVar16 = *(float *)(lVar7 + 0x280);
      *(undefined1 *)(param_1 + 0x1c64) = 1;
      *(undefined2 *)(param_1 + 0x1c54) = 0x100;
      *(uint *)(param_1 + 0x1c50) = uVar1;
      *(undefined8 *)(param_1 + 0x1c48) = 0;
      fVar12 = fVar12 - fVar15;
      fVar16 = fVar16 - fVar13;
      *(uint *)(param_1 + 0x1c60) = (uint)*(ushort *)(param_1 + 0x1914) << 0x10;
      *(float *)(param_1 + 0x1c38) = SQRT(fVar16 * fVar16 + fVar12 * fVar12) / (float)uVar6;
    }
  }
  FUN_0257ffd4(param_1 + 0x1c08);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_54 = 0;
  local_78 = 0;
  if (puVar10[0x227] != 0) {
    uVar5 = FUN_03850368(puVar10[0x227],0);
    uVar4 = local_54;
    if (((((uVar5 & 1) == 0) && (puVar10[0x227] != 0)) &&
        (uVar5 = FUN_03850368(puVar10[0x227],local_54), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_0384fca4(puVar10[0x227],uVar4), (uVar5 & 1) == 0)) goto LAB_02497a50;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined8 *)(param_1 + 0x19ab) = 0;
    *(undefined8 *)(param_1 + 0x19b3) = 0;
    *(undefined8 *)(param_1 + 0x19bb) = 0;
    *(undefined8 *)(param_1 + 0x19c3) = 0;
    *(undefined8 *)(param_1 + 0x19cb) = 0;
    *(undefined8 *)(param_1 + 0x19d2) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined4 *)(param_1 + 0x19a7) = *(undefined4 *)(param_1 + 0x1927);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
    if (*(char *)(param_1 + 0x1922) == '\0') {
      local_78 = 0x111;
    }
    else {
      local_78 = 0x8b;
    }
    if (local_78 < 0x149) {
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
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar7,local_78);
    }
  }
LAB_02497a50:
  return;
}

