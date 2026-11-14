
void FUN_0177ffbc(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x638) != 7) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x60);
  lVar5 = plVar9[0x227];
  if (*(char *)(param_1 + 0x6f4) == '\0') {
    if (lVar5 != 0) {
      FUN_038501b0(0x41200000,lVar5,0);
      lVar5 = plVar9[0x227];
      if (*(char *)(lVar5 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar5 + 0x2c0) = 0;
        FUN_03855b20(lVar5 + 0xc0,0);
      }
      FUN_0384f8c0(lVar5,&DAT_0528c8d0,0,0);
      (**(code **)(*plVar9 + 0x120))(plVar9,&DAT_0528c8d0,10,0);
    }
    *(undefined1 *)(param_1 + 0x6f4) = 1;
    lVar5 = *(long *)PTR_DAT_04bb5ce0;
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
    fVar10 = fVar10 * 8.381903e-08;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (45.0 <= fVar10) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar10)) {
        bVar2 = fVar10 < 315.0;
        bVar3 = fVar10 == 315.0;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      bVar2 = false;
      if ((45.0 <= fVar10) && (bVar2 = false, !NAN(fVar10))) {
        bVar2 = fVar10 < 135.0;
      }
      if (!bVar2) {
        uVar7 = (uint)(fVar10 < 135.0);
        if (225.0 <= fVar10) {
          uVar7 = 1;
        }
        cVar1 = *(char *)(param_1 + 0x6e8);
        goto joined_r0x017801f0;
      }
      uVar7 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 2;
      cVar1 = *(char *)(param_1 + 0x6e8);
joined_r0x017801f0:
      if (cVar1 != '\0') {
        uVar7 = *(uint *)(&DAT_04130c24 + (ulong)uVar7 * 4);
      }
    }
    if (*(char *)(lVar5 + 0xee4) == '\0') {
      return;
    }
    bVar6 = *(byte *)(lVar5 + 0xedc) & ((byte)(1 << (ulong)(uVar7 & 0x1f)) ^ 0xff);
    goto LAB_01780270;
  }
  if (lVar5 != 0) {
    FUN_038501b0(0x41200000,lVar5,0);
    lVar5 = plVar9[0x227];
    if (*(char *)(lVar5 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar5 + 0x2c0) = 0;
      FUN_03855b20(lVar5 + 0xc0,0);
    }
    FUN_0384f8c0(lVar5,&DAT_0528c8f0,0,0);
    (**(code **)(*plVar9 + 0x120))(plVar9,&DAT_0528c8f0,10,0);
  }
  *(undefined1 *)(param_1 + 0x6f4) = 0;
  lVar5 = *(long *)PTR_DAT_04bb5ce0;
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar10 = fVar10 * 8.381903e-08;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (45.0 <= fVar10) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar10)) {
      bVar2 = fVar10 < 315.0;
      bVar3 = fVar10 == 315.0;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    bVar2 = false;
    if ((45.0 <= fVar10) && (bVar2 = false, !NAN(fVar10))) {
      bVar2 = fVar10 < 135.0;
    }
    if (!bVar2) {
      uVar7 = (uint)(fVar10 < 135.0);
      if (225.0 <= fVar10) {
        uVar7 = 1;
      }
      cVar1 = *(char *)(param_1 + 0x6e8);
      goto joined_r0x017801a0;
    }
    uVar7 = 3;
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 2;
    cVar1 = *(char *)(param_1 + 0x6e8);
joined_r0x017801a0:
    if (cVar1 != '\0') {
      uVar7 = *(uint *)(&DAT_04130c24 + (ulong)uVar7 * 4);
    }
  }
  if (*(char *)(lVar5 + 0xee4) == '\0') {
    return;
  }
  bVar6 = *(byte *)(lVar5 + 0xedc) | (byte)(1 << (ulong)(uVar7 & 0x1f));
LAB_01780270:
  lVar8 = lVar5 + 0xda0;
  *(byte *)(lVar5 + 0xedc) = bVar6;
  FUN_017ef108(lVar8,0,0);
  FUN_017eff3c(lVar8,0,0);
  FUN_017f0b3c(lVar8);
  return;
}

