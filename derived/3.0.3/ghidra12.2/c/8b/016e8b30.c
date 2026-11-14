
ulong FUN_016e8b30(long param_1,short *param_2)

{
  int *piVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  short sVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_88 [2];
  float local_80;
  uint local_7c;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  sVar3 = *param_2;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  bVar5 = DAT_055c1b60 == &DAT_055c1b58;
  puVar10 = DAT_055c1b60 + -8;
  if (!bVar5) {
    sVar11 = 0;
    puVar13 = DAT_055c1b60;
    puVar14 = puVar10;
    do {
      if (*(int *)(puVar14 + 7) == *(int *)(puVar16 + 7)) {
        if (sVar11 != -1) goto LAB_016e8c34;
        break;
      }
      puVar13 = (undefined8 *)puVar13[1];
      sVar11 = sVar11 + 1;
      puVar14 = puVar13 + -8;
    } while (puVar13 != &DAT_055c1b58);
  }
  sVar11 = 0;
LAB_016e8c34:
  if ((sVar3 == sVar11) && ((char)param_2[1] == '\0')) {
LAB_016e8d04:
    if (sVar3 == sVar11) {
      if ((*(char *)((long)param_2 + 3) != '\0') ||
         (sVar3 = *(short *)PTR_DAT_04bb6298, sVar3 == -1)) {
LAB_016e8d14:
        uVar15 = FUN_009765e0(param_1);
        return uVar15;
      }
      uVar15 = (ulong)local_78 >> 0x20;
      local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 & 1) == 0) goto LAB_016e8d14;
      local_70 = (undefined *)CONCAT44(local_70._4_4_,(float)*(int *)(param_1 + 0xc) * 5.0 + 2.5);
      local_78 = (undefined *)CONCAT44((int)uVar15,(float)*(int *)(param_1 + 8) * 5.0 + 2.5);
      uVar15 = FUN_016e8520(&local_78,*param_2);
      if ((uVar15 & 1) == 0) goto LAB_016e8d14;
LAB_016e8eac:
      uVar8 = 1;
      goto LAB_016e8eb0;
    }
  }
  else {
    sVar12 = *param_2;
    puVar16 = puVar10;
    bVar6 = bVar5;
    if (puVar10 != &DAT_055c1b18 && sVar12 != 0) {
      puVar16 = DAT_055c1b60;
      sVar4 = sVar12;
      do {
        puVar16 = (undefined8 *)puVar16[1];
        sVar4 = sVar4 + -1;
        bVar6 = puVar16 == &DAT_055c1b58;
      } while (!bVar6 && sVar4 != 0);
      puVar16 = puVar16 + -8;
    }
    uVar15 = 0;
    puVar13 = &DAT_055c04a0;
    if (!bVar6) {
      puVar13 = puVar16;
    }
    do {
      local_7c = (uint)uVar15;
      piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar15 * 4);
      if (0x38 < local_7c) {
        piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar1 == *(int *)(puVar13 + 7)) goto LAB_016e8cdc;
      uVar8 = 0x39;
      if ((int)local_7c < 0x39) {
        uVar8 = local_7c + 1;
      }
      uVar15 = (ulong)uVar8;
    } while (uVar8 != 0x39);
    local_7c = 0;
LAB_016e8cdc:
    if (local_7c == 0) goto LAB_016e8d04;
    if ((local_7c == 0x32) || (local_7c == 1)) {
      uVar8 = FUN_0097ce60(param_1);
      goto LAB_016e8eb0;
    }
    fVar19 = (float)*(int *)(param_1 + 8) * 5.0 + 2.5;
    fVar18 = (float)*(int *)(param_1 + 0xc) * 5.0 + 2.5;
    puVar16 = DAT_055c1b60;
    if (puVar10 != &DAT_055c1b18 && sVar12 != 0) {
      do {
        puVar16 = (undefined8 *)puVar16[1];
        sVar12 = sVar12 + -1;
        bVar5 = puVar16 == &DAT_055c1b58;
      } while (!bVar5 && sVar12 != 0);
      puVar10 = puVar16 + -8;
    }
    puVar16 = &DAT_055c04a0;
    if (!bVar5) {
      puVar16 = puVar10;
    }
    local_68 = 0;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_58 = 0;
    local_88[0] = fVar19;
    local_80 = fVar18;
    local_60 = local_70;
    uVar15 = FUN_017ba710(*(undefined4 *)(puVar16 + 7),&local_78);
    if ((uVar15 & 1) == 0) goto LAB_016e8eac;
    fVar17 = (float)(int)local_58 * 5.0 + 5.0;
    bVar5 = false;
    if (((float)(int)local_68 * 5.0 <= fVar19) && (bVar5 = false, !NAN(fVar19) && !NAN(fVar17))) {
      bVar5 = fVar19 < fVar17;
    }
    if (bVar5) {
      fVar19 = (float)local_58._4_4_ * 5.0 + 5.0;
      bVar5 = false;
      if (((float)local_68._4_4_ * 5.0 <= fVar18) && (bVar5 = false, !NAN(fVar18) && !NAN(fVar19)))
      {
        bVar5 = fVar18 < fVar19;
      }
      if (!bVar5) goto LAB_016e8e0c;
    }
    else {
LAB_016e8e0c:
      if ((*(char *)((long)param_2 + 3) == '\0') ||
         (uVar15 = FUN_016e8520(local_88,*param_2), (uVar15 & 1) == 0)) goto LAB_016e8eac;
    }
  }
  uVar8 = 0;
LAB_016e8eb0:
  return (ulong)(uVar8 & 1);
}

