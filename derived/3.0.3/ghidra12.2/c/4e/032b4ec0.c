
void FUN_032b4ec0(long param_1,float *param_2)

{
  float *pfVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_04bc8e90;
  puVar5 = PTR_DAT_04bb4fb0;
  if (*(char *)(param_1 + 0x99) == '\0') {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar16 + 0xac) == 5) goto LAB_032b4f0c;
  lVar17 = *(long *)PTR_DAT_04bc8e90;
  uVar8 = (ulong)*(uint *)(lVar17 + 4);
  if ((int)*(uint *)(lVar17 + 4) < 1) {
LAB_032b5130:
    if (*(char *)(param_1 + 0xc0) == '\0') {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      goto LAB_032b4f0c;
    }
    if (*(char *)(param_1 + 0xb8) != '\0') {
      switch(*(undefined4 *)(param_1 + 0xbc)) {
      case 0:
        if (*(float *)(param_1 + 0xac) < 0.0) {
LAB_032b51f4:
          *(undefined4 *)(param_1 + 0xac) = 0;
        }
        break;
      case 1:
        if (0.0 < *(float *)(param_1 + 0xac)) goto LAB_032b51f4;
        break;
      case 2:
        if (0.0 < *(float *)(param_1 + 0xa8)) {
LAB_032b5218:
          *(undefined4 *)(param_1 + 0xa8) = 0;
        }
        break;
      case 3:
        if (*(float *)(param_1 + 0xa8) < 0.0) goto LAB_032b5218;
      }
    }
    if ((*(float *)(param_1 + 0xa8) == 0.0) && (*(float *)(param_1 + 0xac) == 0.0)) {
      local_58 = CONCAT44(local_58._4_4_,3);
      if ((*(int *)(lVar16 + 0xac) != 0) && (*(int *)(lVar16 + 0xac) != 3)) {
        plVar9 = *(long **)(lVar16 + 0x100);
        *(undefined4 *)(lVar16 + 0xac) = 3;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9,lVar16);
        }
      }
      if (*(char *)(param_1 + 0xc0) != '\0') {
        lVar17 = *(long *)(param_1 + 0x10);
        if ((*(int *)(lVar17 + 0xac) != 5) && (*(int *)(lVar17 + 0xac) != 0)) {
          *(undefined8 *)(lVar17 + 0xc) = 0;
          local_58 = CONCAT44(local_58._4_4_,1);
          if (*(int *)(lVar17 + 0xac) != 1) {
            *(undefined4 *)(lVar17 + 0xac) = 1;
            if (*(long **)(lVar17 + 0x100) != (long *)0x0) {
              (**(code **)(**(long **)(lVar17 + 0x100) + 0x20))();
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 0;
      goto LAB_032b4f0c;
    }
    local_58 = CONCAT44(local_58._4_4_,2);
    if (*(int *)(lVar16 + 0xac) == 0) goto LAB_032b4f0c;
  }
  else {
    plVar9 = (long *)(lVar17 + 8);
    if (*(char *)(*plVar9 + 4) == '\0') {
      uVar14 = 0;
      plVar15 = (long *)(lVar17 + 0x10);
      do {
        if (uVar8 - 1 == uVar14) goto LAB_032b5130;
        bVar7 = 0xe < uVar14;
        uVar14 = uVar14 + 1;
        plVar2 = plVar15;
        if (bVar7) {
          plVar2 = plVar9;
        }
        plVar15 = plVar15 + 1;
      } while (*(char *)(*plVar2 + 4) == '\0');
      if (uVar8 <= uVar14) goto LAB_032b5130;
    }
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x21d) != '\0') {
      uVar14 = 0;
      plVar15 = plVar9;
      do {
        plVar2 = plVar15;
        if (0xf < uVar14) {
          plVar2 = plVar9;
        }
        lVar17 = *plVar2;
        if (*(long *)(lVar17 + 0x30) == *(long *)(param_1 + 0x18)) {
          puVar11 = (undefined4 *)(lVar17 + 0x28);
          puVar13 = (undefined4 *)(lVar17 + 0x2c);
          goto LAB_032b5184;
        }
        uVar14 = uVar14 + 1;
        plVar15 = plVar15 + 1;
      } while (uVar8 != uVar14);
    }
    puVar13 = (undefined4 *)(PTR_DAT_04bb2f48 + 4);
    puVar11 = (undefined4 *)PTR_DAT_04bb2f48;
LAB_032b5184:
    uVar18 = *puVar13;
    *(undefined4 *)(param_1 + 0xa8) = *puVar11;
    *(undefined4 *)(param_1 + 0xac) = uVar18;
    lVar17 = *(long *)puVar5;
    lVar12 = *(long *)(lVar17 + 8);
    if (lVar12 != 0) {
      local_58 = 0;
      lVar3 = 0;
      if (*(char *)(lVar12 + 0x38) != '\0') {
        lVar3 = lVar12 + 8;
      }
      FUN_03366350(lVar17,lVar3,PTR_s_Decide_Erase_04bc9780 + 899,0,&local_58,0);
    }
    if (*(int *)(lVar16 + 0xac) != 4) goto LAB_032b4f0c;
    *(undefined8 *)(lVar16 + 0xc) = 0;
    local_58 = CONCAT44(local_58._4_4_,1);
  }
  if (*(int *)(lVar16 + 0xac) != (int)local_58) {
    plVar9 = *(long **)(lVar16 + 0x100);
    *(int *)(lVar16 + 0xac) = (int)local_58;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,lVar16);
    }
  }
LAB_032b4f0c:
  bVar7 = false;
  if ((param_2[1] == 0.0) && (bVar7 = false, !NAN(*param_2))) {
    bVar7 = *param_2 == 0.0;
  }
  pfVar1 = (float *)(param_1 + 0xa8);
  if (!bVar7) {
    pfVar1 = param_2;
  }
  fVar23 = *pfVar1;
  *(float *)(param_1 + 0xa8) = fVar23;
  fVar24 = pfVar1[1];
  *(float *)(param_1 + 0xac) = fVar24;
  if ((*(int *)(lVar16 + 8) == 0) && (fVar24 != 0.0)) {
    bVar7 = true;
  }
  else {
    bVar7 = fVar23 != 0.0 && *(int *)(lVar16 + 8) == 1;
  }
  lVar17 = *(long *)(param_1 + 0x10);
  *(bool *)(param_1 + 0xc1) = bVar7;
  iVar4 = *(int *)(lVar17 + 8);
  if (iVar4 == 0) {
    uVar8 = FUN_032b3044(lVar17);
    if (((0.0 < fVar24) && ((uVar8 & 1) != 0)) ||
       ((uVar8 = FUN_032b3490(lVar17), fVar24 < 0.0 && ((uVar8 & 1) != 0)))) {
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    fVar23 = *(float *)(param_1 + 0xa8);
    iVar4 = *(int *)(lVar17 + 8);
  }
  if ((iVar4 == 1) &&
     (((uVar8 = FUN_032b3044(lVar17), 0.0 < fVar23 && ((uVar8 & 1) != 0)) ||
      ((uVar8 = FUN_032b3490(lVar17), fVar23 < 0.0 && ((uVar8 & 1) != 0)))))) {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  fVar24 = *(float *)(param_1 + 0xac);
  fVar23 = (float)(**(code **)(*plVar9 + 0x20))(*(undefined4 *)(param_1 + 0xa8));
  fVar19 = *(float *)(param_1 + 0x28);
  fVar20 = *(float *)(param_1 + 0x2c);
  lVar17 = 0x30;
  pfVar1 = (float *)(plVar9 + 6);
  if (*(int *)(lVar16 + 8) != 0) {
    lVar17 = 0x2c;
    pfVar1 = (float *)((long)plVar9 + 0x2c);
  }
  puVar10 = *(undefined1 **)puVar6;
  fVar21 = *(float *)(*(long *)(param_1 + 0x10) + lVar17) - *pfVar1;
  fVar22 = -fVar21;
  if (0.0 <= fVar21) {
    fVar22 = fVar21;
  }
  *(float *)(*(long *)puVar5 + 0x8a0) = fVar22;
  *puVar10 = *(undefined1 *)(lVar16 + 0x150);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  lVar16 = *(long *)(param_1 + 0x20);
  if (lVar16 != 0) {
    *(undefined4 *)(lVar16 + 0x38) = 0;
    *(float *)(lVar16 + 0x30) = fVar19 + fVar23;
    *(float *)(lVar16 + 0x34) = fVar20 + fVar24;
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
  }
  FUN_032b4bc0(param_1);
  return;
}

