
/* WARNING: Removing unreachable block (ram,0x024b5b48) */

void FUN_024b58c4(long param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  undefined1 uVar5;
  float *pfVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  piVar1 = (int *)(param_1 + 0x1906);
  bVar12 = *(byte *)(param_1 + 0x1ee8);
  lVar9 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  bVar13 = *(byte *)(lVar9 + 0x44);
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  if (bVar12 == bVar13) {
    lVar11 = 0;
LAB_024b59f4:
    lVar9 = lVar9 + 0x40 + lVar11 * 0x20;
    puVar14 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    bVar13 = *(byte *)(lVar9 + 100);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) {
      lVar11 = 1;
      goto LAB_024b59f4;
    }
    bVar13 = *(byte *)(lVar9 + 0x84);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) {
      lVar11 = 2;
      goto LAB_024b59f4;
    }
    bVar13 = *(byte *)(lVar9 + 0xa4);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) {
      lVar11 = 3;
      goto LAB_024b59f4;
    }
    bVar13 = *(byte *)(lVar9 + 0xc4);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) {
      lVar11 = 4;
      goto LAB_024b59f4;
    }
    bVar13 = *(byte *)(lVar9 + 0xe4);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) {
      lVar11 = 5;
      goto LAB_024b59f4;
    }
    bVar13 = *(byte *)(lVar9 + 0x104);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) {
      lVar11 = 6;
      goto LAB_024b59f4;
    }
    bVar13 = *(byte *)(lVar9 + 0x124);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) {
      lVar11 = 7;
      goto LAB_024b59f4;
    }
    lVar9 = lVar9 + 0x140;
    puVar14 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  iVar17 = *piVar1;
  fVar15 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar16 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  if ((*(int *)(puVar14 + 0x285) != 1) &&
     (fVar18 = *(float *)((long)puVar14 + 0x133c) - fVar15,
     fVar19 = *(float *)(puVar14 + 0x268) - fVar16,
     fVar20 = *(float *)((long)puVar14 + 0x1344) - (float)iVar17 * 0.001,
     2.0 < SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20))) {
    *(undefined1 *)((long)puVar14 + 0x142d) = 0;
  }
  *(undefined4 *)(puVar14 + 0x25a) = 0;
  *(undefined1 *)puVar14[0x25c] = 0;
  *(float *)((long)puVar14 + 0x133c) = fVar15;
  *(float *)(puVar14 + 0x268) = fVar16;
  *(float *)((long)puVar14 + 0x1344) = (float)iVar17 * 0.001;
  *(undefined8 *)((long)puVar14 + 0x1334) = 0;
  *(undefined4 *)(puVar14 + 0x285) = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    fStack_70 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
    local_68 = 0;
    local_60 = 0.0;
    local_74 = (float)*(int *)(param_1 + 0x1900) * 0.001;
    local_6c = (float)*piVar1 * 0.001;
    local_54 = 0.0;
    if ((*(long *)PTR_DAT_04bb2200 == 0) ||
       (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar11 == 0)) {
      local_58 = 0.0;
      fVar15 = 0.0;
    }
    else {
      local_5c = 0.0;
      local_58 = 0.0;
      fVar15 = 0.0;
      lVar11 = *(long *)(lVar11 + 0x118);
      if (lVar11 != 0) {
        FUN_015bca00(lVar11,&local_68,&local_74,0,1,1);
        fVar15 = (float)local_68 * 0.2 * 4.5;
        local_58 = local_68._4_4_ * 0.2 * 4.5;
        local_54 = local_60 * 0.2 * 4.5;
      }
    }
    local_5c = fVar15 + local_74;
    local_58 = local_58 + fStack_70;
    local_54 = local_54 + local_6c;
    fVar15 = (float)FUN_016e37dc(&local_5c);
    iVar17 = (int)(fVar15 * 4.0);
    *(int *)(param_1 + 0x1900) = (int)(local_5c * 999.99994);
    if (0x7ffe < iVar17) {
      iVar17 = 0x7fff;
    }
    if (iVar17 < -0x7fff) {
      iVar17 = -0x8000;
    }
    *(short *)(param_1 + 0x1904) = (short)iVar17;
    *piVar1 = (int)(local_54 * 999.99994);
    pfVar6 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    iVar17 = FUN_006f0400(local_74 - *pfVar6,local_6c - pfVar6[2]);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_68 = CONCAT44(local_68._4_4_,10);
      local_5c = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024b5d38;
    }
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar11 = (**(code **)(*plVar3 + 0x148))();
    iVar10 = iVar17 - *(int *)(lVar11 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar17 = -0x15555560;
      iVar10 = (int)((float)iVar10 * 0.2);
      if (iVar10 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar17 = 0x5b05b0;
      }
      iVar2 = iVar10;
      if (iVar4 <= iVar10) {
        iVar2 = iVar4;
      }
      if (iVar17 <= iVar10) {
        iVar17 = iVar2;
      }
      iVar17 = iVar17 + *(int *)(lVar11 + 4);
    }
    *(int *)(lVar11 + 4) = iVar17;
  }
LAB_024b5d38:
  local_58 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_5c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_54 = (float)*piVar1 * 0.001;
  local_58 = (float)FUN_016e37dc(&local_5c);
  *(float *)(lVar9 + 0x10) = local_5c;
  *(float *)(lVar9 + 0x14) = local_58;
  *(float *)(lVar9 + 0x18) = local_54;
  if ((*(char *)(param_1 + 0x17ac) == '\0') &&
     (local_68 = local_68 & 0xffffffff00000000, (*(uint *)(param_1 + 0xed0) & 1) != 0)) {
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
    uVar7 = FUN_013ec620(lVar9 + 0xc);
    if (((uVar7 & 1) == 0) || (*(char *)(lVar9 + 0x1d) == '\0')) {
      uVar8 = 0x9a;
    }
    else {
      uVar5 = FUN_02582f64((byte *)(param_1 + 0x1ee8));
      local_68 = CONCAT71(local_68._1_7_,uVar5) & 0xffffffffffffff01;
      bVar12 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_68._0_2_ = CONCAT11(bVar12,(undefined1)local_68);
      FUN_02307c7c(&local_68);
      uVar8 = 0x9a;
    }
  }
  else {
    uVar7 = FUN_024b33f0(&local_5c);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
    uVar8 = 0x97;
  }
  local_68 = CONCAT44(local_68._4_4_,uVar8);
  if (uVar8 < 0x149) {
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
    lVar9 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar9 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar9,uVar8);
  }
  return;
}

