
undefined8 FUN_02b291d0(long param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  float *pfVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  short local_e8 [4];
  undefined8 *local_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  byte local_c0;
  uint local_b8 [2];
  undefined1 auStack_b0 [2];
  byte local_ae;
  undefined8 local_a8;
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = *(int *)(param_1 + 0x54);
  local_b8[0] = iVar8 + 0x20000000U >> 0x1e;
  pfVar12 = (float *)(&DAT_04057bc0 + (ulong)local_b8[0] * 2);
  if (3 < local_b8[0]) {
    pfVar12 = (float *)&DAT_04057bc0;
  }
  fVar14 = *pfVar12;
  puVar1 = &DAT_04057bc0 + (ulong)local_b8[0] * 2;
  if (3 < local_b8[0]) {
    puVar1 = &DAT_04057bc0;
  }
  fVar16 = (float)puVar1[1];
  if (iVar8 == -0x80000000) {
    uVar11 = 0xc0000000;
  }
  else if (iVar8 == 0) {
    uVar11 = 0x40000000;
  }
  else if (iVar8 == 0x40000000) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)(iVar8 == -0x40000000) << 0x1f;
  }
  local_c8 = 0;
  local_d0 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar8 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_c4 = *(undefined4 *)(puVar10 + 7);
  iVar2 = iVar2 + (int)fVar14;
  iVar4 = iVar4 + (int)fVar16;
  local_c0 = FUN_017baf44();
  local_c0 = local_c0 & 1;
  lVar13 = 0;
  pfVar12 = (float *)&DAT_0417f9e4;
  fVar14 = (float)uVar11 * 1.4629181e-09;
  do {
    if ((&DAT_041015e0)[lVar13] != '\0') {
      fVar19 = pfVar12[-1];
      fVar18 = *pfVar12;
      fVar16 = sinf(fVar14);
      fVar15 = cosf(fVar14);
      fVar17 = -(fVar16 * fVar18) + fVar19 * fVar15;
      local_e0 = &DAT_048f9750;
      fVar16 = fVar18 * fVar15 + fVar19 * fVar16;
      iVar8 = *(int *)(param_2 + 0x20);
      iVar5 = *(int *)(param_2 + 0x24);
      fVar15 = 0.5;
      if (fVar17 < 0.0) {
        fVar15 = -0.5;
      }
      fVar18 = 0.5;
      if (fVar16 < 0.0) {
        fVar18 = -0.5;
      }
      fVar15 = (float)(iVar2 + (int)(fVar17 + fVar15)) * 10.0 + 2.5;
      fVar16 = (float)(iVar4 + (int)(fVar16 + fVar18)) * 10.0 + 2.5;
      local_d8 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iStack_d4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      iVar3 = *(int *)(param_2 + 0x10);
      iVar6 = *(int *)(param_2 + 0x14);
      if (((iVar3 <= local_d8 && local_d8 <= iVar8) && iVar6 <= iStack_d4) && iStack_d4 == iVar5 ||
          (((iVar3 <= local_d8 && local_d8 <= iVar8) && iVar6 <= iStack_d4) && iStack_d4 - iVar5 < 0
          ) != (((iVar3 <= local_d8 && local_d8 <= iVar8) && iVar6 <= iStack_d4) &&
               SBORROW4(iStack_d4,iVar5))) {
        FUN_01a5033c(local_e8,&local_d0,0,&local_e0,0);
        lVar7 = DAT_05150358;
        if (((((local_e8[0] != -2) && (DAT_05150358 != 0)) && (*(long *)(DAT_05150358 + 0xb0) != 0))
            && ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
                (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
           ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
            ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
             (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
          uVar9 = FUN_0277d6c4(local_e8);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            FUN_0124c030(local_b8,local_e8);
            iVar8 = FUN_0123db50(auStack_b0,local_a8);
            if ((iVar8 == 0x21) || (iVar8 = FUN_0123db50(auStack_b0,local_a8), iVar8 == 0x22)) {
              FUN_0124c030(local_b8,local_e8);
              iVar8 = FUN_0123db50(auStack_b0,local_a8);
              if ((iVar8 == 0x21) || (iVar8 = FUN_0123db50(auStack_b0,local_a8), iVar8 == 0x22)) {
                uVar9 = local_ae >> 2 & 7;
              }
              else {
                uVar9 = 0;
              }
              if (uVar9 == ((&DAT_0562a718)[lVar13] - uVar11) + 0x10000000 >> 0x1d) {
                return 1;
              }
            }
          }
        }
      }
    }
    lVar13 = lVar13 + 1;
    pfVar12 = pfVar12 + 2;
    if (lVar13 == 4) {
      lVar13 = 0;
      pfVar12 = (float *)&DAT_0417fa04;
      do {
        if ((&DAT_041015e4)[lVar13] != '\0') {
          fVar18 = pfVar12[-1];
          fVar19 = *pfVar12;
          fVar16 = sinf(fVar14);
          fVar15 = cosf(fVar14);
          fVar17 = -(fVar16 * fVar19) + fVar18 * fVar15;
          local_e0 = &DAT_048f9750;
          fVar16 = fVar19 * fVar15 + fVar18 * fVar16;
          iVar8 = *(int *)(param_2 + 0x20);
          iVar5 = *(int *)(param_2 + 0x24);
          fVar15 = 0.5;
          if (fVar17 < 0.0) {
            fVar15 = -0.5;
          }
          fVar18 = 0.5;
          if (fVar16 < 0.0) {
            fVar18 = -0.5;
          }
          fVar15 = (float)(iVar2 + (int)(fVar17 + fVar15)) * 10.0 + 2.5;
          fVar16 = (float)(iVar4 + (int)(fVar16 + fVar18)) * 10.0 + 2.5;
          local_d8 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
          iStack_d4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
          iVar3 = *(int *)(param_2 + 0x10);
          iVar6 = *(int *)(param_2 + 0x14);
          if (((iVar3 <= local_d8 && local_d8 <= iVar8) && iVar6 <= iStack_d4) && iStack_d4 == iVar5
              || (((iVar3 <= local_d8 && local_d8 <= iVar8) && iVar6 <= iStack_d4) &&
                 iStack_d4 - iVar5 < 0) !=
                 (((iVar3 <= local_d8 && local_d8 <= iVar8) && iVar6 <= iStack_d4) &&
                 SBORROW4(iStack_d4,iVar5))) {
            FUN_01a5033c(local_e8,&local_d0,0,&local_e0,0);
            lVar7 = DAT_05150358;
            if ((((local_e8[0] != -2) && (DAT_05150358 != 0)) &&
                (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
               (((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
                 (*(long *)(DAT_05150358 + 0x488) != 0)) &&
                ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
                 ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
                  (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))))) {
              uVar9 = FUN_0277d6c4(local_e8);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar7 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                FUN_0124c030(local_b8,local_e8);
                iVar8 = FUN_0123db50(auStack_b0,local_a8);
                if ((iVar8 == 0x21) || (iVar8 = FUN_0123db50(auStack_b0,local_a8), iVar8 == 0x22)) {
                  FUN_0124c030(local_b8,local_e8);
                  iVar8 = FUN_0123db50(auStack_b0,local_a8);
                  if ((iVar8 == 0x21) || (iVar8 = FUN_0123db50(auStack_b0,local_a8), iVar8 == 0x22))
                  {
                    uVar9 = local_ae >> 2 & 7;
                  }
                  else {
                    uVar9 = 0;
                  }
                  if (uVar9 == ((&DAT_0562a728)[lVar13] - uVar11) + 0x10000000 >> 0x1d) {
                    return 1;
                  }
                }
              }
            }
          }
        }
        lVar13 = lVar13 + 1;
        pfVar12 = pfVar12 + 2;
        if (lVar13 == 4) {
          return 0;
        }
      } while( true );
    }
  } while( true );
}

