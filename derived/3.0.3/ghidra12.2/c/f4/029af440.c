
void FUN_029af440(long param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  short local_61;
  uint local_58 [14];
  undefined8 local_8;
  
  uVar11 = *(uint *)(param_1 + 0x26c);
  uVar15 = *(uint *)(param_1 + 0x268);
  local_90 = DAT_055f4178;
  uStack_88 = DAT_055f4180;
  local_70 = 0x3ecccccd;
  local_80 = DAT_055f4188;
  uStack_78 = DAT_055f4190;
  local_61 = 0x1000;
  uVar12 = *(uint *)(param_1 + 0x260) ^ *(uint *)(param_1 + 0x260) << 0xb;
  local_6c = uVar12 ^ uVar11;
  uVar12 = uVar12 >> 8 ^ uVar11 >> 0x13 ^ local_6c;
  local_6c = local_6c >> 0x1f;
  uStack_68 = 0;
  if ((int)uVar12 < 0) {
    cVar4 = *(char *)(param_1 + 0x17);
    cVar5 = *(char *)(param_1 + 0x18);
  }
  else {
    cVar4 = *(char *)(param_1 + 0x15);
    cVar5 = *(char *)(param_1 + 0x16);
  }
  iVar17 = (int)cVar5;
  iVar13 = (int)cVar4;
  uVar16 = *(uint *)(param_1 + 0x264) ^ *(uint *)(param_1 + 0x264) << 0xb;
  iVar1 = iVar13;
  if (iVar13 <= iVar17) {
    iVar1 = iVar17;
  }
  if (iVar17 <= iVar13) {
    iVar13 = iVar17;
  }
  *(uint *)(param_1 + 0x260) = uVar15;
  *(uint *)(param_1 + 0x264) = uVar11;
  *(uint *)(param_1 + 0x268) = uVar12;
  uVar16 = uVar16 >> 8 ^ uVar12 >> 0x13 ^ uVar16 ^ uVar12;
  local_a0 = 0;
  local_98 = (undefined8 *)0x0;
  *(uint *)(param_1 + 0x26c) = uVar16;
  iVar13 = iVar13 + (int)((ulong)((iVar1 - iVar13) + 1) * (ulong)uVar16 >> 0x20);
  local_64 = (undefined1)iVar13;
  local_63 = 1;
  local_62 = (undefined1)(int)((float)iVar13 * 1.5 + -2.0);
  if (*(int *)(param_1 + 8) == 1) {
    uVar18 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) != 2) {
      uVar15 = uVar15 ^ uVar15 << 0xb;
      *(uint *)(param_1 + 0x260) = uVar11;
      *(uint *)(param_1 + 0x264) = uVar12;
      uVar18 = uVar15 ^ uVar16;
      *(uint *)(param_1 + 0x268) = uVar16;
      uVar14 = uVar15 >> 8 ^ uVar16 >> 0x13 ^ uVar18;
      uVar18 = uVar18 >> 0x1f;
      *(uint *)(param_1 + 0x26c) = uVar14;
      uVar15 = uVar11;
      uVar11 = uVar12;
      uVar12 = uVar16;
      goto LAB_029af58c;
    }
    uVar18 = 1;
  }
  uVar14 = uVar16;
LAB_029af58c:
  local_58[0] = uVar18;
  if (1 < uVar18) {
    uVar18 = 0;
  }
  local_a8 = (&PTR_DAT_04a97848)[(int)uVar18];
  if (*(int *)(param_1 + 0x278) == 1) {
    uVar16 = 0;
    local_58[0xc] = 0;
    iVar13 = 0;
    local_58[8] = 0;
    local_58[9] = 0;
    local_58[10] = 0;
    local_58[0xb] = 0;
    uVar19 = *(ulong *)(DAT_055e6718 + 0x48);
    local_58[4] = 0;
    local_58[5] = 0;
    local_58[6] = 0;
    local_58[7] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    do {
      local_8 = CONCAT44(local_8._4_4_,(int)uVar19) & 0xffffffff0000000f;
      if ((uint)local_8 < 0xd) {
        uVar20 = (ulong)uVar16;
        if (0 < (int)uVar16) {
          uVar21 = 0;
          puVar9 = local_58;
          do {
            puVar2 = puVar9;
            if (0xc < uVar21) {
              puVar2 = local_58;
            }
            if (*puVar2 == (uint)local_8) goto LAB_029af5f4;
            uVar21 = uVar21 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar20 != uVar21);
        }
        bVar8 = 0xc < uVar16;
        uVar16 = uVar16 + 1;
        if (bVar8) {
          uVar20 = 0;
        }
        local_58[uVar20] = (uint)local_8;
      }
LAB_029af5f4:
      iVar13 = iVar13 + 1;
      uVar19 = uVar19 >> 4;
    } while (iVar13 != 0x10);
    if (uVar16 == 0) {
      local_58[0] = 0xd;
      uVar16 = 1;
    }
    cVar4 = *(char *)(param_1 + 0x19);
    uVar15 = uVar15 ^ uVar15 << 0xb;
    *(uint *)(param_1 + 0x260) = uVar11;
    cVar5 = *(char *)(param_1 + 0x1a);
    *(uint *)(param_1 + 0x264) = uVar12;
    *(uint *)(param_1 + 0x268) = uVar14;
    iVar13 = (int)cVar4;
    if (cVar4 <= cVar5) {
      iVar13 = (int)cVar5;
    }
    iVar1 = (int)cVar4;
    if (cVar5 <= cVar4) {
      iVar1 = (int)cVar5;
    }
    uVar15 = uVar15 >> 8 ^ uVar14 >> 0x13 ^ uVar15 ^ uVar14;
    *(uint *)(param_1 + 0x26c) = uVar15;
    iVar1 = (int)((ulong)uVar15 * (ulong)((iVar13 - iVar1) + 1) >> 0x20) + iVar1;
    if (iVar1 < 1) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      iVar13 = iVar1;
      do {
        uVar11 = uVar11 ^ uVar11 << 0xb;
        uVar18 = uVar15 ^ uVar11;
        uVar3 = uVar15 >> 0x13 ^ uVar11 >> 8 ^ uVar18;
        if (uVar18 >> 0x1a < (uint)(int)*(char *)(param_1 + 0x1b)) {
          uVar10 = 0xf;
          uVar11 = uVar12;
          uVar12 = uVar14;
          uVar14 = uVar15;
          uVar15 = uVar3;
        }
        else {
          uVar12 = uVar12 ^ uVar12 << 0xb;
          uVar18 = uVar12 >> 8 ^ uVar3 >> 0x13 ^ uVar12 ^ uVar3;
          uVar21 = (ulong)uVar16 * (ulong)uVar18;
          uVar20 = uVar21 >> 0x20;
          if (0xc < (uint)(uVar21 >> 0x20)) {
            uVar20 = 0;
          }
          uVar10 = local_58[uVar20];
          uVar11 = uVar14;
          uVar12 = uVar15;
          uVar14 = uVar3;
          uVar15 = uVar18;
        }
        local_8 = CONCAT44(local_8._4_4_,uVar10);
        iVar13 = iVar13 + -1;
        uVar19 = uVar19 << 4 | (long)(int)uVar10;
      } while (iVar13 != 0);
      *(uint *)(param_1 + 0x260) = uVar11;
      *(uint *)(param_1 + 0x264) = uVar12;
      *(uint *)(param_1 + 0x268) = uVar14;
      *(uint *)(param_1 + 0x26c) = uVar15;
    }
    local_98 = &local_8;
    local_61 = (ushort)(byte)iVar1 << 8;
    local_8 = uVar19;
  }
  local_b0 = &local_90;
  FUN_02a0bc08(param_1 + 0x20,&local_b0);
  *(undefined1 *)(param_1 + 0x259) = 0;
  sVar6 = *(short *)(param_1 + 0x12);
  *(byte *)(param_1 + 600) = *(byte *)(param_1 + 600) | 1;
  sVar7 = *(short *)(param_1 + 0x10);
  iVar13 = (int)sVar7;
  if (sVar7 <= sVar6) {
    iVar13 = (int)sVar6;
  }
  iVar1 = (int)sVar7;
  if (sVar6 <= sVar7) {
    iVar1 = (int)sVar6;
  }
  uVar12 = *(uint *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x268);
  uVar15 = *(uint *)(param_1 + 0x26c);
  uVar12 = uVar12 ^ uVar12 << 0xb;
  *(uint *)(param_1 + 0x268) = uVar15;
  uVar12 = uVar12 >> 8 ^ uVar15 >> 0x13 ^ uVar12 ^ uVar15;
  *(uint *)(param_1 + 0x26c) = uVar12;
  *(short *)(param_1 + 0x27c) =
       (short)iVar1 + (short)((ulong)((iVar13 - iVar1) + 1) * (ulong)uVar12 >> 0x20);
  return;
}

