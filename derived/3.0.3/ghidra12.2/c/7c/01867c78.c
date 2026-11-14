
void FUN_01867c78(long param_1)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  float *pfVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar13 = FUN_01813a64();
  if ((uVar13 & 1) != 0) {
    return;
  }
  if (DAT_04c487d4 != -1) {
    local_44 = 0x1a;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar3 >> 0x1a & 1) != 0) && (local_44 = 1, (*puVar3 >> 1 & 1) != 0)) &&
        (*(char *)(param_1 + 0x495) == '\0')) &&
       (((uVar13 = FUN_0186865c(param_1 + 0x334), (uVar13 & 1) == 0 &&
         (lVar16 = *(long *)(param_1 + 0x460), lVar16 != 0)) && (*(char *)(param_1 + 0x495) == '\0')
        ))) {
      *(undefined1 *)(param_1 + 0x495) = 1;
      pfVar14 = (float *)(**(code **)(*(long *)(lVar16 + 0x1b0) + 0xf0))(lVar16 + 0x1b0);
      fVar21 = *pfVar14;
      pfVar14 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0x1e0) + 0xf0))
                                   (*(long *)(param_1 + 0x460) + 0x1e0);
      *(int *)(param_1 + 0x490) = (int)(fVar21 - *pfVar14);
    }
    if (DAT_04c487d4 != -1) {
      local_44 = 0x20;
      puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar4 = PTR_DAT_04bc39f8;
      }
      if ((((*(uint *)(puVar4 + 4) & 1) != 0) &&
          (uVar13 = FUN_0186865c(param_1 + 0x334), (uVar13 & 1) == 0)) &&
         (*(int *)(param_1 + 0x280) != 1)) {
        FUN_03ebb160(param_1 + 0x278,1);
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x4b8);
  pfVar14 = (float *)(**(code **)(*(long *)(lVar18 + 0x278) + 0xf0))(lVar18 + 0x278);
  fVar21 = *(float *)(param_1 + 0x328) - *(float *)(param_1 + 0x334);
  fVar20 = *(float *)(param_1 + 0x330) - *(float *)(param_1 + 0x33c);
  local_44 = (undefined4)(long)(*pfVar14 * 11930465.0);
  local_48 = FUN_006f0400(-(*(float *)(param_1 + 0x32c) - *(float *)(param_1 + 0x338)),
                          SQRT(fVar20 * fVar20 + fVar21 * fVar21));
  puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0x98) + 0xf0))();
  FUN_01869394(*puVar15,param_1,&local_44,&local_48);
  uVar19 = FUN_01a18270(*(undefined8 *)(param_1 + 0x4d8),0);
  *(undefined4 *)(param_1 + 0x344) = uVar19;
  puVar4 = PTR_DAT_04bb27d0;
  lVar16 = *(long *)(param_1 + 0x3d0);
  if (lVar16 == 0) {
LAB_01867ef8:
    pfVar14 = (float *)(**(code **)(*(long *)(lVar18 + 0x218) + 0xf0))(lVar18 + 0x218);
    lVar16 = *(long *)(lVar18 + 0x158);
    fVar21 = *pfVar14;
LAB_01867f10:
    pfVar14 = (float *)(**(code **)(lVar16 + 0xf0))(lVar18 + 0x158);
    fVar22 = *pfVar14;
    fVar20 = (float)FUN_01a1fbe0(*(long *)(param_1 + 0x300) + 0x278);
    fVar21 = fVar21 + fVar20;
    fVar20 = *(float *)(param_1 + 0x338);
    if (fVar20 < fVar21) {
      fVar22 = fVar22 + fVar20;
      bVar10 = false;
      bVar11 = false;
      if (fVar20 <= fVar22) {
        bVar10 = false;
        bVar11 = true;
        if (!NAN(fVar22) && !NAN(fVar21)) {
          bVar10 = fVar22 < fVar21;
          bVar11 = false;
        }
      }
      if (bVar10 != bVar11) {
        fVar21 = fVar22;
      }
    }
    else {
      if (fVar20 <= fVar21) goto LAB_01867f68;
      fVar22 = fVar20 - fVar22;
      bVar10 = false;
      bVar11 = false;
      if (fVar22 <= fVar20) {
        bVar10 = false;
        bVar11 = true;
        if (!NAN(fVar22) && !NAN(fVar21)) {
          bVar10 = fVar22 == fVar21;
          bVar11 = fVar21 <= fVar22;
        }
      }
      if (bVar11 && !bVar10) {
        fVar21 = fVar22;
      }
    }
  }
  else {
    (**(code **)(*(long *)(lVar16 + 0x2d8) + 0x28))(lVar16 + 0x2d8);
    plVar17 = *(long **)puVar4;
    lVar16 = *plVar17;
    bVar9 = *(byte *)(lVar16 + 0x473);
    if ((long)(char)bVar9 == 0xffffffffffffffff) goto LAB_01867ef8;
    pbVar1 = (byte *)(lVar16 + 0x48);
    uVar13 = (long)(char)bVar9 & 0xffffffff;
    pbVar6 = pbVar1 + uVar13 * 0x80;
    if (7 < bVar9) {
      pbVar6 = pbVar1;
    }
    if ((*pbVar6 >> 3 & 1) == 0) goto LAB_01867ef8;
    lVar16 = plVar17[2] + 0x108;
    lVar5 = lVar16 + uVar13 * 0xc;
    if (0xb < bVar9) {
      lVar5 = lVar16;
    }
    if (*(char *)(lVar5 + 10) != '\0') goto LAB_01867ef8;
    fVar20 = (float)FUN_015cb8d4(param_1 + 0x334,1);
    fVar22 = *(float *)(param_1 + 0x338);
    pfVar14 = (float *)(**(code **)(*(long *)(lVar18 + 0x218) + 0xf0))(lVar18 + 0x218);
    fVar21 = *pfVar14;
    if (fVar20 <= fVar22) {
      lVar16 = *(long *)(lVar18 + 0x158);
      goto LAB_01867f10;
    }
    fVar21 = fVar20 + fVar21;
    pfVar14 = (float *)(**(code **)(*(long *)(lVar18 + 0x158) + 0xf0))(lVar18 + 0x158);
    fVar20 = *(float *)(param_1 + 0x338);
    if (fVar21 <= fVar20) {
      if (fVar20 <= fVar21) goto LAB_01867f68;
      fVar22 = fVar20 - *pfVar14;
      bVar10 = false;
      bVar11 = false;
      if (fVar22 <= fVar20) {
        bVar10 = false;
        bVar11 = true;
        if (!NAN(fVar22) && !NAN(fVar21)) {
          bVar10 = fVar22 == fVar21;
          bVar11 = fVar21 <= fVar22;
        }
      }
      if (bVar11 && !bVar10) {
        fVar21 = fVar22;
      }
    }
    else {
      fVar22 = *pfVar14 + fVar20;
      bVar10 = false;
      bVar11 = false;
      if (fVar20 <= fVar22) {
        bVar10 = false;
        bVar11 = true;
        if (!NAN(fVar22) && !NAN(fVar21)) {
          bVar10 = fVar22 < fVar21;
          bVar11 = false;
        }
      }
      if (bVar10 != bVar11) {
        fVar21 = fVar22;
      }
    }
  }
  *(float *)(param_1 + 0x338) = fVar21;
LAB_01867f68:
  lVar16 = *(long *)(param_1 + 0x3d0);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x2d8) + 0x28))(lVar16 + 0x2d8);
    plVar17 = *(long **)puVar4;
    lVar16 = *plVar17;
    bVar9 = *(byte *)(lVar16 + 0x473);
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar16 + 0x48);
      uVar13 = (long)(char)bVar9 & 0xffffffff;
      pbVar6 = pbVar1 + uVar13 * 0x80;
      if (7 < bVar9) {
        pbVar6 = pbVar1;
      }
      if ((*pbVar6 >> 3 & 1) != 0) {
        lVar16 = plVar17[2] + 0x108;
        lVar18 = lVar16 + uVar13 * 0xc;
        if (0xb < bVar9) {
          lVar18 = lVar16;
        }
        if (*(char *)(lVar18 + 10) == '\0') {
          return;
        }
      }
    }
    if (((*(long *)(param_1 + 0x3d0) != 0) &&
        (lVar16 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar16 != 0)) &&
       (*(float *)(lVar16 + 0x2b8) < *(float *)(lVar16 + 0x2b0))) {
      if (*(int *)(param_1 + 0x280) == 0) {
        return;
      }
      FUN_03ebb160(param_1 + 0x278,0);
      return;
    }
  }
  iVar12 = (**(code **)(*(long *)(param_1 + 0x4c0) + (ulong)*(byte *)(param_1 + 0x4d4) * 8))
                     (param_1 + 0x4c0);
  iVar7 = *(int *)(param_1 + 0x4d0);
  *(int *)(param_1 + 0x4c8) = iVar12;
  iVar8 = *(int *)(param_1 + 0x4cc);
  iVar2 = iVar8;
  if (iVar8 <= iVar7) {
    iVar2 = iVar7;
    iVar7 = iVar8;
  }
  if (((iVar12 <= iVar7) || (iVar2 <= iVar12)) ||
     (fVar21 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328),
     fVar20 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330),
     fVar20 * fVar20 + fVar21 * fVar21 <= *(float *)(param_1 + 0x3ac))) {
    FUN_01869614(param_1);
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4cc);
  }
  return;
}

