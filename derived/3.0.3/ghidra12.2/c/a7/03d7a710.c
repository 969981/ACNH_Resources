
void FUN_03d7a710(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  undefined2 *puVar8;
  float fVar9;
  bool bVar10;
  undefined4 uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort uVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  undefined *local_8a0;
  undefined2 *local_898;
  undefined4 local_890;
  undefined2 local_88c [1023];
  undefined2 local_8e;
  undefined *local_88;
  undefined4 local_80;
  
  plVar17 = *(long **)(param_4 + 0x260);
  pfVar1 = (float *)(param_4 + 0xbac);
  *(undefined1 **)pfVar1 = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbb4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbbc) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbc4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbcc) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbd4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbdc) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbe4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbec) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbf4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xbfc) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xc04) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xc0c) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xc14) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xc1c) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_4 + 0xc24) = &DAT_3f8000003f800000;
  (**(code **)(*plVar17 + 0x18))(plVar17);
  uVar15 = *(ushort *)plVar17[1];
  if (uVar15 == 0) {
    iVar18 = 0;
  }
  else {
    fVar21 = 1.0;
    uVar19 = 0;
    puVar13 = (ushort *)plVar17[1];
    do {
      puVar14 = puVar13 + 4;
      while (iVar18 = (int)uVar19, (uVar15 & 0xfffe) != 0xe) {
        if (uVar15 == 10) {
          uVar19 = (ulong)(iVar18 + 1U);
          uVar5 = uVar19;
          if (0x1f < iVar18 + 1U) {
            uVar5 = 0;
          }
          pfVar1[uVar5] = fVar21;
        }
        iVar18 = (int)uVar19;
        puVar13 = puVar13 + 1;
        uVar15 = *puVar13;
        puVar14 = puVar14 + 1;
        if (uVar15 == 0) goto LAB_03d7a830;
      }
      if (uVar15 == 0xe) {
        puVar14 = (ushort *)((ulong)puVar13[3] + (long)puVar14);
        uVar15 = puVar13[1];
joined_r0x03d7a800:
        if ((uVar15 == 0) && (puVar13[2] == 2)) {
          fVar21 = (float)NEON_ucvtf((uint)puVar13[4]);
          fVar21 = fVar21 / 100.0;
        }
      }
      else {
        if (uVar15 == 0xf) {
          puVar14 = puVar14 + -1;
          uVar15 = puVar13[1];
          goto joined_r0x03d7a800;
        }
        puVar14 = puVar13;
      }
      uVar15 = *puVar14;
      puVar13 = puVar14;
    } while (uVar15 != 0);
LAB_03d7a830:
    if (iVar18 < 0) {
      fVar22 = 0.0;
      fVar21 = 0.0;
      goto LAB_03d7aa38;
    }
  }
  plVar17 = *(long **)(param_4 + 0x250);
  local_898 = (undefined2 *)CONCAT44(local_898._4_4_,0x33);
  puVar2 = PTR_DAT_04bc0cb8 + 0x10;
  local_8a0 = puVar2;
  (**(code **)(*plVar17 + 0x20))(plVar17,&local_8a0);
  lVar12 = (**(code **)(plVar17[3] + 0x350))(plVar17[1]);
  fVar21 = 0.0;
  fVar22 = *(float *)(param_4 + 0xbac) * *(float *)(lVar12 + 4) + 0.0;
  if (iVar18 != 0) {
    pfVar20 = (float *)(param_4 + 0xbb0);
    uVar19 = 1;
    do {
      plVar17 = *(long **)(param_4 + 0x250);
      local_898._0_4_ = 0x34;
      local_8a0 = puVar2;
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_8a0);
      fVar7 = (float)(**(code **)(plVar17[3] + 0x360))(plVar17[1]);
      plVar17 = *(long **)(param_4 + 0x250);
      local_898 = (undefined2 *)CONCAT44(local_898._4_4_,0x33);
      local_8a0 = puVar2;
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_8a0);
      lVar12 = (**(code **)(plVar17[3] + 0x350))(plVar17[1]);
      bVar10 = 0x1f < uVar19;
      uVar19 = uVar19 + 1;
      pfVar6 = pfVar20;
      if (bVar10) {
        pfVar6 = pfVar1;
      }
      pfVar20 = pfVar20 + 1;
      fVar22 = fVar22 + fVar7 + *pfVar6 * *(float *)(lVar12 + 4);
    } while (iVar18 + 1U != uVar19);
  }
  uVar16 = 0;
  puVar3 = PTR_DAT_04bb62a0 + 0x10;
  puVar4 = PTR_DAT_04bc0878 + 0x10;
  do {
    plVar17 = *(long **)(param_4 + 0x260);
    local_8e = 0;
    local_890 = 0x400;
    local_88c[0] = 0;
    local_8a0 = puVar3;
    local_898 = local_88c;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    uVar11 = FUN_03d7d500(&local_8a0,plVar17[1],uVar16);
    plVar17 = *(long **)(param_4 + 0x250);
    (**(code **)(local_8a0 + 0x18))(&local_8a0);
    puVar8 = local_898;
    local_80 = 9;
    local_88 = puVar4;
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_88);
    (**(code **)(plVar17[3] + 0x5e0))(plVar17[1],puVar8,uVar11);
    plVar17 = *(long **)(param_4 + 0x250);
    local_80 = 0x3f;
    local_88 = puVar2;
    (**(code **)(*plVar17 + 0x20))(plVar17,&local_88);
    fVar7 = (float)(**(code **)(plVar17[3] + 0x410))(plVar17[1]);
    uVar16 = uVar16 + 1;
    fVar9 = param_3 - fVar7;
    if (param_3 - fVar7 <= fVar21) {
      fVar9 = fVar21;
    }
    fVar21 = fVar9;
  } while (iVar18 + 1U != uVar16);
LAB_03d7aa38:
  *(float *)(param_4 + 0xb38) = fVar21;
  *(float *)(param_4 + 0xb3c) = fVar22;
  return;
}

