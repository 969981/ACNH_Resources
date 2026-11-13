
undefined8 FUN_014800b8(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  byte *pbVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 0x900) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x900) == 3) {
    lVar8 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
    uVar2 = *(uint *)(param_1 + 0x8d0);
    uVar13 = *(uint *)(lVar8 + 4);
    if (uVar13 == uVar2) {
      lVar14 = 0;
    }
    else {
      uVar6 = uVar13 - uVar2;
      uVar1 = uVar6;
      if (uVar13 < uVar2 || uVar6 == 0) {
        uVar1 = uVar2 - uVar13;
      }
      lVar14 = 1;
      if (uVar13 >= uVar2 && uVar6 != 0) {
        lVar14 = -1;
      }
      lVar15 = -1;
      if (uVar2 < uVar13) {
        lVar15 = 1;
      }
      if (0x80000000 < uVar1) {
        lVar14 = lVar15;
      }
    }
    lVar14 = lVar14 * (ulong)*(uint *)(param_1 + 0x8d4);
    uVar1 = uVar13 + (int)lVar14;
    if (lVar14 < 1) {
      if (lVar14 < 0) {
        if (uVar1 < uVar13) {
          if (uVar2 <= uVar13 && uVar1 <= uVar2) goto LAB_014802f4;
        }
        else if (uVar2 <= uVar13 || uVar1 <= uVar2) goto LAB_014802f4;
        goto LAB_014802a8;
      }
      bVar7 = (int)lVar14 == 0;
    }
    else {
      if (uVar13 < uVar1) {
        if (uVar13 <= uVar2 && uVar2 <= uVar1) goto LAB_014802f4;
      }
      else if (uVar13 <= uVar2 || uVar2 <= uVar1) {
LAB_014802f4:
        *(uint *)(lVar8 + 4) = uVar2;
        bVar7 = true;
        uVar13 = uVar2;
        goto LAB_01480300;
      }
LAB_014802a8:
      bVar7 = false;
      *(uint *)(lVar8 + 4) = uVar1;
      uVar13 = uVar1;
    }
LAB_01480300:
    fVar21 = *(float *)(param_1 + 0x8d8);
    pfVar11 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar13 >> 0x18) * 0x10);
    fVar22 = *(float *)(param_1 + 0x8dc);
    fVar24 = *(float *)(param_1 + 0x8e0);
    fVar16 = (float)(uVar13 & 0xffffff) * 5.9604645e-08;
    fVar17 = *pfVar11 + fVar16 * pfVar11[1];
    fVar16 = pfVar11[2] + fVar16 * pfVar11[3];
    fVar20 = fVar17 * 0.0;
    pfVar11 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    fVar18 = *(float *)(param_1 + 0x8e8);
    fVar19 = *(float *)(param_1 + 0x8ec);
    *pfVar11 = *(float *)(param_1 + 0x8e4) -
               (fVar20 * fVar22 + fVar21 * fVar16 + fVar24 * (fVar17 + 0.0) + 0.0);
    pfVar11[1] = fVar18 - ((fVar20 * 0.0 + 1.0) * fVar22 + fVar21 * fVar16 * 0.0 + fVar24 * fVar20 +
                          0.0);
    pfVar11[2] = fVar19 - ((fVar22 * fVar16 * 0.0 - fVar21 * fVar17) + fVar24 * fVar16 + 0.0);
    if (*(int *)(param_1 + 0x2d0) != 0) goto joined_r0x01480694;
    local_80 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    uStack_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    local_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    uStack_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_90 = *(undefined **)PTR_DAT_04bb2f80;
    uStack_88 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    (**(code **)(**(long **)(param_1 + 0xa90) + 0x108))
              (*(long **)(param_1 + 0xa90),&local_90,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
    FUN_014ae620(param_1 + 0x380,&local_90);
    if (!bVar7) goto LAB_01480698;
LAB_014803cc:
    lVar8 = *(long *)(param_1 + 0x68);
    uStack_88 = *(undefined8 *)(lVar8 + 0x278);
    local_90 = PTR_DAT_04bbbc20 + 0x10;
    local_80 = CONCAT44(*(undefined4 *)(lVar8 + 0x2b4),*(undefined4 *)(lVar8 + 0x280));
    uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(param_1 + 0x2d0));
    FUN_0147ddd0(param_1,0,&local_90);
    uVar12 = 1;
  }
  else {
    lVar8 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
    pfVar11 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    iVar3 = *(int *)(param_1 + 0x904);
    lVar14 = FUN_0147f934(0xb);
    (**(code **)(*(long *)(lVar14 + 0x2c0) + 0xf0))(lVar14 + 0x2c0);
    lVar14 = FUN_0147f934(0xb);
    pbVar9 = (byte *)(**(code **)(*(long *)(lVar14 + 0x2c0) + 0xf0))(lVar14 + 0x2c0);
    bVar4 = *pbVar9;
    lVar14 = FUN_0147f934(0xb);
    pbVar9 = (byte *)(**(code **)(*(long *)(lVar14 + 0x2f0) + 0xf0))(lVar14 + 0x2f0);
    bVar5 = *pbVar9;
    lVar14 = FUN_0147f934(0xb);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar14 + 800) + 0xf0))(lVar14 + 800);
    fVar16 = *pfVar10;
    fVar17 = *(float *)(param_1 + 0x970);
    fVar18 = *(float *)(param_1 + 0x974);
    fVar19 = *(float *)(param_1 + 0x978);
    if (iVar3 < (int)(uint)bVar4) {
      bVar7 = false;
      fVar23 = (fVar19 + 0.0) - pfVar11[2];
      fVar20 = fVar16 / (float)bVar4;
      fVar22 = (fVar16 + fVar18) - pfVar11[1];
      fVar24 = (fVar17 + 0.0) - *pfVar11;
      fVar21 = SQRT(fVar22 * fVar22 + fVar24 * fVar24 + fVar23 * fVar23);
      if (fVar21 <= fVar20) {
        *pfVar11 = fVar17 + 0.0;
        pfVar11[1] = fVar16 + fVar18;
        pfVar11[2] = fVar19 + 0.0;
      }
      else {
        fVar21 = 1.0 / fVar21;
        *pfVar11 = *pfVar11 + fVar24 * fVar21 * fVar20;
        pfVar11[1] = pfVar11[1] + fVar22 * fVar21 * fVar20;
        pfVar11[2] = pfVar11[2] + fVar23 * fVar21 * fVar20;
      }
    }
    else {
      uVar2 = *(int *)(param_1 + 0x8d0) + 1;
      uVar13 = *(uint *)(lVar8 + 4);
      if (uVar13 == uVar2) {
        lVar15 = 0;
      }
      else {
        uVar1 = uVar13 - uVar2;
        if (uVar13 < uVar2 || uVar13 - uVar2 == 0) {
          uVar1 = uVar2 - uVar13;
        }
        if (uVar1 < 0x80000001) {
          lVar14 = -1;
        }
        else {
          lVar14 = 1;
        }
        lVar15 = -lVar14;
        if (uVar2 < uVar13) {
          lVar15 = lVar14;
        }
      }
      lVar15 = lVar15 * (ulong)*(uint *)(param_1 + 0x8d4);
      uVar1 = uVar13 + (int)lVar15;
      if (lVar15 < 1) {
        if (lVar15 < 0) {
          if (uVar1 < uVar13) {
            if (uVar13 < uVar2) goto LAB_01480504;
          }
          else if (uVar2 <= uVar13) goto LAB_014805f8;
          if (uVar1 <= uVar2) goto LAB_014805f8;
LAB_01480504:
          *(uint *)(lVar8 + 4) = uVar1;
          uVar13 = uVar1;
        }
        else if ((int)lVar15 == 0) goto LAB_01480608;
        bVar7 = false;
        fVar22 = *(float *)(param_1 + 0x8d8);
        pfVar10 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar13 >> 0x18) * 0x10);
        fVar24 = *(float *)(param_1 + 0x8dc);
        fVar23 = *(float *)(param_1 + 0x8e0);
        fVar17 = (float)(uVar13 & 0xffffff) * 5.9604645e-08;
        fVar18 = *pfVar10 + fVar17 * pfVar10[1];
        fVar17 = pfVar10[2] + fVar17 * pfVar10[3];
        fVar20 = fVar18 * 0.0;
        fVar19 = *(float *)(param_1 + 0x8e8);
        fVar21 = *(float *)(param_1 + 0x8ec);
        *pfVar11 = *(float *)(param_1 + 0x8e4) -
                   (fVar20 * fVar24 + fVar22 * fVar17 + fVar23 * (fVar18 + 0.0) + 0.0);
        pfVar11[1] = fVar19 - ((fVar20 * 0.0 + 1.0) * fVar24 + fVar22 * fVar17 * 0.0 +
                               fVar23 * fVar20 + 0.0);
        pfVar11[2] = fVar21 - ((fVar24 * fVar17 * 0.0 - fVar22 * fVar18) + fVar23 * fVar17 + 0.0);
        pfVar11[1] = fVar16 + *(float *)(param_1 + 0x974);
      }
      else {
        if (uVar13 < uVar1) {
          if (uVar2 < uVar13) goto LAB_01480504;
LAB_014804fc:
          if (uVar1 < uVar2) goto LAB_01480504;
        }
        else if (uVar2 < uVar13) goto LAB_014804fc;
LAB_014805f8:
        *(uint *)(lVar8 + 4) = uVar2;
        fVar17 = *(float *)(param_1 + 0x970);
        fVar18 = *(float *)(param_1 + 0x974);
        fVar19 = *(float *)(param_1 + 0x978);
LAB_01480608:
        fVar16 = fVar16 / (float)bVar5;
        fVar18 = fVar18 - pfVar11[1];
        fVar17 = fVar17 - *pfVar11;
        fVar19 = fVar19 - pfVar11[2];
        fVar20 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19);
        if (fVar20 <= fVar16) {
          bVar7 = true;
          uVar12 = *(undefined8 *)(param_1 + 0x970);
          pfVar11[2] = *(float *)(param_1 + 0x978);
          *(undefined8 *)pfVar11 = uVar12;
        }
        else {
          bVar7 = false;
          fVar20 = 1.0 / fVar20;
          *pfVar11 = *pfVar11 + fVar17 * fVar20 * fVar16;
          pfVar11[1] = pfVar11[1] + fVar18 * fVar20 * fVar16;
          pfVar11[2] = pfVar11[2] + fVar19 * fVar20 * fVar16;
        }
      }
    }
    if (*(int *)(param_1 + 0x2d0) == 0) {
      local_80 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_90 = *(undefined **)PTR_DAT_04bb2f80;
      uStack_88 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      (**(code **)(**(long **)(param_1 + 0xa90) + 0x108))
                (*(long **)(param_1 + 0xa90),&local_90,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
      FUN_014ae620(param_1 + 0x380,&local_90);
      if (bVar7) goto LAB_014803cc;
    }
    else {
joined_r0x01480694:
      if (bVar7) goto LAB_014803cc;
    }
LAB_01480698:
    uVar12 = 0;
  }
  return uVar12;
}

