
void FUN_020e7420(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  undefined *puVar14;
  bool bVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  char *local_58;
  
  *(undefined4 *)(param_1 + 0x29c) = 0;
  local_60 = PTR_DAT_04bb2020;
  *(undefined2 *)(param_1 + 0x26e) = 0;
  local_60 = local_60 + 0x10;
  local_58 = "MuseumCafePayOption";
  uVar16 = FUN_02743000(&local_60);
  if (2 < uVar16) goto LAB_020e7824;
  lVar21 = *DAT_0537d558;
  if (uVar16 == 2) {
    if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
      if (1 < *(byte *)(lVar21 + 0x476)) {
        uVar13 = *(ushort *)(param_1 + 0x26c) & *(ushort *)(param_1 + 0x26a);
        uVar1 = uVar13 >> 1 & 1;
        uVar2 = uVar13 >> 2 & 1;
        uVar8 = uVar13 >> 3 & 1;
        uVar9 = uVar13 >> 4 & 1;
        uVar10 = uVar13 >> 5 & 1;
        uVar11 = uVar13 >> 6 & 1;
        uVar12 = uVar13 >> 7 & 1;
        if (((((uVar12 != 0) || (uVar11 != 0)) || (uVar10 != 0)) || ((uVar9 != 0 || (uVar8 != 0))))
           || ((uVar2 != 0 || (((uVar13 & 1) != 0 || (uVar1 != 0)))))) {
          uVar7 = *(ushort *)(param_1 + 0x26e) | uVar13 & 1;
          uVar13 = uVar7 | 2;
          if (uVar1 == 0) {
            uVar13 = uVar7;
          }
          uVar1 = uVar13 | 4;
          if (uVar2 == 0) {
            uVar1 = uVar13;
          }
          uVar2 = uVar1 | 8;
          if (uVar8 == 0) {
            uVar2 = uVar1;
          }
          uVar1 = uVar2 | 0x10;
          if (uVar9 == 0) {
            uVar1 = uVar2;
          }
          uVar2 = uVar1 | 0x20;
          if (uVar10 == 0) {
            uVar2 = uVar1;
          }
          uVar1 = uVar2 | 0x40;
          if (uVar11 == 0) {
            uVar1 = uVar2;
          }
          uVar2 = uVar1 | 0x80;
          if (uVar12 == 0) {
            uVar2 = uVar1;
          }
          *(ushort *)(param_1 + 0x26e) = uVar2;
        }
      }
    }
    else {
      FUN_02507c6c(&local_60,1,1,0,0);
      puVar14 = PTR_DAT_04bb5038;
      local_68 = local_60._4_4_;
      local_6c[0] = 0xff;
      if ((byte)local_60 < 8) {
        local_6c[0] = (byte)local_60;
      }
      local_64 = local_58._0_2_;
      if ((byte)local_60 < 8) {
        bVar6 = (byte)local_60;
        while( true ) {
          uVar24 = (ulong)bVar6;
          if (199 < *(uint *)(param_1 + 0x274 + uVar24 * 4)) {
            *(ushort *)(param_1 + 0x26e) =
                 *(ushort *)(param_1 + 0x26e) | (ushort)(1 << (ulong)(bVar6 & 0x1f));
          }
          do {
            if (uVar24 == 7) goto LAB_020e7824;
            uVar24 = uVar24 + 1;
            uVar17 = FUN_02507924(local_6c,puVar14 + uVar24);
          } while ((uVar17 & 1) == 0);
          bVar6 = puVar14[uVar24];
          if (7 < bVar6) break;
          local_6c[0] = bVar6;
        }
      }
    }
    goto LAB_020e7824;
  }
  if (uVar16 != 1) goto LAB_020e7824;
  if (*(byte *)(lVar21 + 0x476) < 2) {
    if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
      uVar16 = 1;
    }
    else {
      uVar16 = *(uint *)(DAT_04cd19d8 + 0xf8);
    }
  }
  else {
    bVar6 = *(byte *)(lVar21 + 0x473);
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      pbVar3 = (byte *)(lVar21 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
      if (7 < bVar6) {
        pbVar3 = (byte *)(lVar21 + 0x48);
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        uVar16 = (uint)*(byte *)(lVar21 + 0x477);
        goto LAB_020e7670;
      }
    }
    uVar16 = FUN_0250a5c8(DAT_054ee400);
  }
LAB_020e7670:
  bVar6 = *(byte *)(param_1 + 0x269);
  bVar15 = 7 < bVar6;
  if (bVar15) {
    bVar6 = 0xff;
  }
  piVar4 = (int *)(param_1 + 0x274) + ((long)(char)bVar6 & 0xffffffff);
  if (bVar15) {
    piVar4 = (int *)(param_1 + 0x274);
  }
  iVar23 = *piVar4;
  FUN_02507c6c(&local_60,7,1,0,0);
  uVar20 = (uint)(byte)local_60;
  local_68 = local_60._4_4_;
  local_6c[0] = 0xff;
  if ((byte)local_60 < 8) {
    local_6c[0] = (byte)local_60;
  }
  local_64 = local_58._0_2_;
  if ((byte)local_60 < 8) {
    while( true ) {
      *(ushort *)(param_1 + 0x26e) =
           *(ushort *)(param_1 + 0x26e) | (ushort)(1 << (ulong)(uVar20 & 0x1f));
      uVar24 = (ulong)uVar20;
      do {
        uVar17 = uVar24;
        if (uVar17 == 7) goto LAB_020e76d4;
        uVar19 = FUN_02507924(local_6c,&DAT_0548e169 + uVar17);
        uVar24 = uVar17 + 1;
      } while ((uVar19 & 1) == 0);
      uVar20 = (uint)(byte)(&DAT_0548e169)[uVar17];
      if (7 < uVar20) break;
      local_6c[0] = (&DAT_0548e169)[uVar17];
    }
  }
LAB_020e76d4:
  if (iVar23 < (int)(uVar16 * 200)) {
    uVar20 = (uint)*(ushort *)(param_1 + 0x26e) &
             (1 << (ulong)(*(byte *)(param_1 + 0x269) & 0x1f) ^ 0xffffffffU);
    *(short *)(param_1 + 0x26e) = (short)uVar20;
    puVar14 = PTR_DAT_04bb39d8;
    iVar23 = uVar16 + ~(int)((float)iVar23 / 200.0);
    uVar20 = uVar20 - (uVar20 >> 1 & 0x55555555);
    uVar16 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
    uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
    uVar16 = uVar16 + (uVar16 >> 8);
    uVar16 = uVar16 + (uVar16 >> 0x10) & 0x3f;
    uVar24 = (ulong)uVar16;
    if (0 < iVar23 && uVar16 != 0) {
      do {
        puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar14);
        uVar16 = *puVar18 ^ *puVar18 << 0xb;
        uVar5 = puVar18[3];
        *puVar18 = puVar18[1];
        puVar18[1] = puVar18[2];
        uVar20 = uVar16 >> 8 ^ uVar5 >> 0x13 ^ uVar16 ^ uVar5;
        puVar18[2] = uVar5;
        puVar18[3] = uVar20;
        uVar16 = (uint)*(ushort *)(param_1 + 0x26e);
        if (uVar16 != 0) {
          iVar22 = (int)(uVar24 * uVar20 >> 0x20) + 2;
          do {
            iVar22 = iVar22 + -1;
            if (iVar22 < 2) {
              uVar16 = uVar16 - 1 & (uVar16 ^ 0xffffffff);
              uVar16 = uVar16 - (uVar16 >> 1 & 0x55555555);
              uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
              uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
              uVar16 = uVar16 + (uVar16 >> 8);
              *(ushort *)(param_1 + 0x26e) =
                   *(ushort *)(param_1 + 0x26e) &
                   ((ushort)(1 << (ulong)(uVar16 + (uVar16 >> 0x10) & 0x1f)) ^ 0xffff);
              break;
            }
            uVar16 = uVar16 - 1 & uVar16;
          } while (uVar16 != 0);
        }
        if (iVar23 < 2) break;
        iVar23 = iVar23 + -1;
        bVar15 = 1 < (long)uVar24;
        uVar24 = uVar24 - 1;
      } while (bVar15);
    }
  }
LAB_020e7824:
  *(uint *)(param_1 + 0x29c) = (uint)*(ushort *)(param_1 + 0x26e);
  return;
}

