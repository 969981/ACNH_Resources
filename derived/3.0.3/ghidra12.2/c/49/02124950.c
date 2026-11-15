
void FUN_02124950(undefined1 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  bool bVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ushort *local_88 [2];
  long local_78;
  ushort *local_70;
  ushort *local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar4 = *(uint *)((long)param_2 + 0xc);
  *param_1 = 0;
  puVar19 = (ushort *)*param_2;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = (ushort *)0x0;
  iVar7 = uVar3 - *puVar19;
  local_88[1] = (ushort *)0x0;
  local_78 = 0;
  local_88[0] = (ushort *)0x0;
  if ((((-1 < iVar7) && (iVar5 = *(int *)(puVar19 + 6), iVar7 < iVar5)) &&
      (iVar8 = uVar4 - puVar19[1], -1 < iVar8)) && (iVar6 = *(int *)(puVar19 + 8), iVar8 < iVar6)) {
    lVar17 = *(long *)(puVar19 + 0x10);
    local_68 = (ushort *)(lVar17 + (long)(iVar7 + iVar8 * iVar5) * 0x28);
    if ((char)local_68[3] != '\x03') {
      iVar18 = -(uint)(uVar4 != puVar19[3]);
      bVar13 = uVar3 != puVar19[4] - 1;
      uVar2 = 1;
      if (bVar13) {
        uVar2 = 2;
      }
      iVar16 = (uint)(uVar4 != puVar19[3]) * -3;
      iVar20 = 1;
      if (uVar4 != puVar19[5] - 1) {
        iVar20 = 2;
      }
      bVar14 = uVar3 == puVar19[2];
      iVar9 = iVar7 - (uint)!bVar14;
      uVar15 = uVar2 + !bVar14;
      do {
        iVar23 = iVar18 + iVar8;
        if ((iVar23 < iVar6) && (-1 < iVar23)) {
          uVar22 = -(ulong)!bVar14;
          if ((uVar15 & 1) != 0) {
            uVar22 = (ulong)bVar14;
          }
          if (((uVar15 & 1) != 0) && (-1 < iVar9 && iVar9 < iVar5)) {
            uVar3 = (iVar18 * 3 + 4) - (uint)!bVar14;
            uVar22 = (ulong)uVar3;
            if (8 < uVar3) {
              uVar22 = 0;
            }
            local_88[uVar22] = (ushort *)(lVar17 + (long)(iVar9 + iVar23 * iVar5) * 0x28);
            uVar22 = (ulong)bVar14;
          }
          if (!bVar14 || bVar13) {
            iVar23 = iVar7 + iVar23 * iVar5;
            uVar24 = uVar2;
            iVar26 = iVar7;
            iVar25 = iVar16;
            do {
              iVar21 = (int)uVar22;
              if ((-1 < iVar21 + iVar26) && (iVar21 + iVar26 < iVar5)) {
                uVar3 = iVar21 + iVar25 + 4;
                uVar27 = (ulong)uVar3;
                if (8 < uVar3) {
                  uVar27 = 0;
                }
                local_88[uVar27] = (ushort *)(lVar17 + (long)(iVar21 + iVar23) * 0x28);
              }
              iVar1 = iVar21 + iVar26 + 1;
              if ((-1 < iVar1) && (iVar1 < iVar5)) {
                uVar3 = iVar21 + iVar25 + 5;
                uVar27 = (ulong)uVar3;
                if (8 < uVar3) {
                  uVar27 = 0;
                }
                local_88[uVar27] = (ushort *)(lVar17 + (long)(iVar21 + iVar23 + 1) * 0x28);
              }
              uVar24 = uVar24 - 2;
              iVar23 = iVar23 + 2;
              iVar26 = iVar26 + 2;
              iVar25 = iVar25 + 2;
            } while (uVar22 != uVar24);
          }
        }
        iVar18 = iVar18 + 1;
        iVar16 = iVar16 + 3;
      } while (iVar18 != iVar20);
      fVar10 = 3.4028235e+38;
      if ((((local_88[0] != (ushort *)0x0) && (fVar10 = 3.4028235e+38, local_70 != (ushort *)0x0))
          && (fVar10 = 3.4028235e+38, local_88[1] != (ushort *)0x0)) &&
         (fVar10 = 3.4028235e+38, local_68 != (ushort *)0x0)) {
        if ((((char)local_88[0][3] == '\x03') || ((char)local_70[3] == '\x03')) ||
           (((char)local_88[1][3] == '\x03' || ((char)local_68[3] == '\x03')))) {
          fVar10 = 3.4028235e+38;
        }
        else {
          *param_1 = 1;
          if (*(char *)(param_2 + 2) == '\0') {
            return;
          }
          fVar10 = (float)NEON_ucvtf((uint)*local_88[0]);
          fVar11 = (float)NEON_ucvtf((uint)local_88[0][1]);
          fVar29 = fVar10 * 5.0 + 2.5 + 2.5;
          fVar11 = fVar11 * 5.0 + 2.5 + 2.5;
          fVar10 = *(float *)((long)param_2 + 0x14) - fVar29;
          fVar12 = *(float *)((long)param_2 + 0x1c) - fVar11;
          fVar12 = SQRT(fVar12 * fVar12 + fVar10 * fVar10);
          fVar10 = 3.4028235e+38;
          if (fVar12 < 3.4028235e+38) {
            *(float *)(param_1 + 4) = fVar29;
            *(undefined4 *)(param_1 + 8) = 0;
            *(float *)(param_1 + 0xc) = fVar11;
            fVar10 = fVar12;
          }
        }
      }
      if (((local_88[1] != (ushort *)0x0) && (local_68 != (ushort *)0x0)) &&
         (((local_78 != 0 &&
           (((local_60 != 0 && ((char)local_88[1][3] != '\x03')) && ((char)local_68[3] != '\x03'))))
          && ((*(char *)(local_78 + 6) != '\x03' && (*(char *)(local_60 + 6) != '\x03')))))) {
        *param_1 = 1;
        if (*(char *)(param_2 + 2) == '\0') {
          return;
        }
        fVar11 = (float)NEON_ucvtf((uint)*local_88[1]);
        fVar12 = (float)NEON_ucvtf((uint)local_88[1][1]);
        fVar28 = fVar11 * 5.0 + 2.5 + 2.5;
        fVar11 = fVar12 * 5.0 + 2.5 + 2.5;
        fVar12 = *(float *)((long)param_2 + 0x14) - fVar28;
        fVar29 = *(float *)((long)param_2 + 0x1c) - fVar11;
        fVar12 = SQRT(fVar29 * fVar29 + fVar12 * fVar12);
        if (fVar12 < fVar10) {
          *(float *)(param_1 + 4) = fVar28;
          *(undefined4 *)(param_1 + 8) = 0;
          *(float *)(param_1 + 0xc) = fVar11;
          fVar10 = fVar12;
        }
      }
      if ((((local_70 != (ushort *)0x0) && (local_58 != 0)) &&
          ((local_68 != (ushort *)0x0 &&
           (((local_50 != 0 && ((char)local_70[3] != '\x03')) && (*(char *)(local_58 + 6) != '\x03')
            ))))) && (((char)local_68[3] != '\x03' && (*(char *)(local_50 + 6) != '\x03')))) {
        *param_1 = 1;
        if (*(char *)(param_2 + 2) == '\0') {
          return;
        }
        fVar11 = (float)NEON_ucvtf((uint)*local_70);
        fVar12 = (float)NEON_ucvtf((uint)local_70[1]);
        fVar28 = fVar11 * 5.0 + 2.5 + 2.5;
        fVar11 = fVar12 * 5.0 + 2.5 + 2.5;
        fVar12 = *(float *)((long)param_2 + 0x14) - fVar28;
        fVar29 = *(float *)((long)param_2 + 0x1c) - fVar11;
        fVar12 = SQRT(fVar29 * fVar29 + fVar12 * fVar12);
        if (fVar12 < fVar10) {
          *(float *)(param_1 + 4) = fVar28;
          *(undefined4 *)(param_1 + 8) = 0;
          *(float *)(param_1 + 0xc) = fVar11;
          fVar10 = fVar12;
        }
      }
      if ((((local_68 != (ushort *)0x0) && (local_50 != 0)) &&
          ((local_60 != 0 &&
           ((((local_48 != 0 && ((char)local_68[3] != '\x03')) &&
             (*(char *)(local_50 + 6) != '\x03')) &&
            ((*(char *)(local_60 + 6) != '\x03' && (*(char *)(local_48 + 6) != '\x03')))))))) &&
         (*param_1 = 1, *(char *)(param_2 + 2) != '\0')) {
        fVar11 = (float)NEON_ucvtf((uint)*local_68);
        fVar12 = (float)NEON_ucvtf((uint)local_68[1]);
        fVar28 = fVar11 * 5.0 + 2.5 + 2.5;
        fVar11 = fVar12 * 5.0 + 2.5 + 2.5;
        fVar12 = *(float *)((long)param_2 + 0x14) - fVar28;
        fVar29 = *(float *)((long)param_2 + 0x1c) - fVar11;
        if (SQRT(fVar29 * fVar29 + fVar12 * fVar12) < fVar10) {
          *(float *)(param_1 + 4) = fVar28;
          *(undefined4 *)(param_1 + 8) = 0;
          *(float *)(param_1 + 0xc) = fVar11;
        }
      }
    }
  }
  return;
}

