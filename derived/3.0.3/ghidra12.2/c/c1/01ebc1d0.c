
void FUN_01ebc1d0(long param_1)

{
  char *pcVar1;
  float *pfVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_50;
  char *local_48;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar14 = *(uint *)PTR_DAT_04bb7228;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_01ebc298;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01ebc298:
    uVar14 = 0;
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar10 = plVar13[0x2a];
  if (((*PTR_DAT_04bb7218 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7218), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb7210 = PTR_DAT_04bb7220 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb7218);
  }
  uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb7210);
  uVar3 = 0;
  if ((int)lVar10 == 1) {
    uVar3 = uVar14;
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 8);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "kpp";
  (**(code **)(*(long *)(lVar15 + 0x3e0) + 0x18))(lVar15 + 0x3e0);
  lVar10 = 0;
  do {
    if (*(char *)(*(long *)(lVar15 + 1000) + lVar10) == '\0') {
LAB_01ebc360:
      iVar5 = (int)lVar10;
joined_r0x01ebc364:
      if (2 < iVar5) {
        uVar7 = 0;
        goto LAB_01ebc390;
      }
      break;
    }
    lVar12 = *(long *)(lVar15 + 1000) + lVar10;
    if (*(char *)(lVar12 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01ebc360;
    }
    if (*(char *)(lVar12 + 2) == '\0') {
      iVar5 = (int)lVar10 + 2;
      goto joined_r0x01ebc364;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
LAB_01ebc3f4:
  uVar9 = 0x40000000;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x143208e5) {
    uVar9 = 0xc0000000;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar9);
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x68);
  (**(code **)(*plVar6 + 0x100))(plVar6,plVar13[0xd] + 0x278);
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x68);
  pcVar11 = *(code **)(*plVar6 + 0x160);
  ppuVar8 = &local_50;
LAB_01ebc448:
  (*pcVar11)(plVar6,ppuVar8);
  lVar12 = plVar13[0xd];
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar12 + 0x2b4) >> 0x14) & 0xff0));
  fVar16 = (float)(*(uint *)(lVar12 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  fVar17 = *pfVar2 + fVar16 * pfVar2[1];
  fVar16 = pfVar2[2] + fVar16 * pfVar2[3];
  fVar18 = *(float *)(lVar12 + 0x27c);
  fVar19 = *(float *)(lVar12 + 0x280);
  uVar14 = *(uint *)(*(long *)(param_1 + 0x18) + 0x294);
  lVar10 = *(long *)(param_1 + 0x18) + 0x10;
  lVar15 = lVar10 + (ulong)uVar14 * 0x80;
  if (4 < uVar14) {
    lVar15 = lVar10;
  }
  *(float *)(lVar15 + 0xc) =
       *(float *)(lVar12 + 0x278) +
       (fVar17 * 0.0 - fVar16 * 0.0) * 0.0 + (fVar16 + fVar17 * 0.0 * 0.0) * 0.0 + fVar17 * 100.0;
  *(float *)(lVar15 + 0x10) = fVar18 + 0.0;
  *(float *)(lVar15 + 0x14) =
       fVar19 + (fVar17 * 0.0 + fVar16 * 0.0) * 0.0 + (fVar16 * 0.0 * 0.0 - fVar17) * 0.0 +
                fVar16 * 100.0;
  return;
  while (uVar7 = uVar7 + 1, iVar5 - 2 != uVar7) {
LAB_01ebc390:
    pcVar1 = (char *)(*(long *)(lVar15 + 1000) + uVar7);
    (**(code **)(local_50 + 0x18))(&local_50);
    if ((pcVar1 == local_48) ||
       ((*pcVar1 == *local_48 &&
        ((*pcVar1 == '\0' ||
         ((pcVar1[1] == local_48[1] && ((pcVar1[1] == '\0' || (pcVar1[2] == local_48[2])))))))))) {
      if ((int)uVar7 != -1) {
        plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x68);
        (**(code **)(*plVar6 + 0x100))(plVar6,plVar13[0xd] + 0x278);
        plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x68);
        pcVar11 = *(code **)(*plVar6 + 0x160);
        ppuVar8 = (undefined **)PTR_DAT_04bb2ce8;
        goto LAB_01ebc448;
      }
      break;
    }
  }
  goto LAB_01ebc3f4;
}

