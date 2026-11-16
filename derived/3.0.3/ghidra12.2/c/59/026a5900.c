
void FUN_026a5900(long param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  short *psVar21;
  uint local_ac;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_88 = *param_3;
  local_84 = param_3[1];
  local_8c = 1;
  iVar17 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    psVar21 = (short *)(param_1 + 0x10d6c + (long)iVar17 * 0x2c);
    if ((*psVar21 != -2) && (*(byte *)(param_1 + 0x10d6c + (long)iVar17 * 0x2c + 0x28) < 2)) {
      local_70 = 0;
      lVar18 = *(long *)puVar4;
      local_78 = (char *)CONCAT44(*(undefined4 *)(psVar21 + 2),CONCAT22(psVar21[1],*psVar21));
      local_80 = puVar1;
      uVar8 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar4 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(psVar21);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
             ((puVar15 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8),
              puVar15 != (uint *)0x0 &&
              (uVar8 = *puVar15, uVar8 != 0 && puVar15 != (uint *)(ulong)uVar8)))) {
            puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar8);
            if ((*puVar16 != 0) &&
               ((uVar8 = puVar16[1], uVar8 != 0 && ((ulong)(ushort)puVar16[2] != 0)))) {
              lVar18 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar18 != 0) {
                uVar9 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar9 = (uint)((ulong)((long)puVar15 - lVar18) / (ulong)uVar8);
                }
                if (*puVar16 <= uVar9) {
                  uVar9 = 0xffffffff;
                }
                if (((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                    (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                    uVar7 < 0xbd)) && ((uVar7 & 0xfffe) == 0x72)) {
                  if (DAT_05594b4c == '\x01') {
                    uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                    DAT_05582b70 = DAT_05582b74;
                    DAT_05582b74 = DAT_05582b78;
                    uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
                    DAT_05582b78 = DAT_05582b7c;
                    DAT_05582b7c = uVar8;
                  }
                  else {
                    uVar8 = nn::os::GetSystemTick();
                    uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
                    uVar8 = uVar9 ^ uVar9 * 0x800;
                    uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
                    uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
                    uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
                    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
                  }
                  local_8c = local_8c + 1;
                  if (((ulong)uVar8 * (ulong)local_8c & 0xffffffff00000000) == 0) {
                    local_88 = *(undefined4 *)psVar21;
                    local_84 = *(undefined4 *)(psVar21 + 2);
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 != 0x20);
  uVar9 = FUN_0277d7b4(&local_88,param_3);
  puVar6 = PTR_DAT_04bc0048;
  puVar5 = PTR_DAT_04bc0018;
  lVar18 = 0;
  uVar8 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_ac = 1;
  do {
    lVar20 = *(long *)puVar4;
    puVar2 = (undefined8 *)(param_2 + lVar18 + 0x14);
    uVar10 = FUN_0277d6c4(puVar2);
    lVar19 = *(long *)puVar4;
    if (lVar19 == 0) {
LAB_026a5f90:
      uVar10 = 4;
    }
    else {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((*(uint *)(lVar20 + 0x1d8) <= uVar10) ||
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_026a5f90;
      local_70 = 0;
      local_78 = (char *)*puVar2;
      local_80 = puVar1;
      uVar10 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar4 == 0) {
LAB_026a5d88:
        local_68 = 0;
        local_64 = 0;
        goto LAB_026a5f90;
      }
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar10) ||
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_026a5d88;
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(puVar2);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar10) ||
         (puVar15 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8),
         puVar15 == (uint *)0x0)) goto LAB_026a5d88;
      uVar10 = *puVar15;
      if ((uVar10 == 0) || (puVar15 == (uint *)(ulong)uVar10)) {
LAB_026a5dc0:
        local_64 = 0x14;
        local_68 = 0;
        uVar10 = *puVar15;
        if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
          puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
          local_68 = 0;
          if (*puVar16 != 0) {
            uVar10 = puVar16[1];
            if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar19 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar19 = 0x1c;
              }
              lVar19 = (long)puVar16 + lVar19 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar19 != 0) {
                uVar3 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar15 - lVar19) / (ulong)uVar10);
                }
                if (*puVar16 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)puVar6) &&
                   (local_68 = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar3 * 2),
                   local_68 < 0x52)) goto LAB_026a5e4c;
              }
            }
            local_68 = 0;
          }
        }
LAB_026a5e4c:
        if (local_68 == 0x14) {
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar15;
          local_64 = 0;
          if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
            puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
            local_64 = 0;
            if (*puVar16 != 0) {
              uVar10 = puVar16[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar19 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar19 = 0x1c;
                }
                lVar19 = (long)puVar16 + lVar19 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar19 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar15 - lVar19) / (ulong)uVar10);
                  }
                  if (*puVar16 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)puVar6) &&
                     (local_64 = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar3 * 2),
                     local_64 < 0x52)) goto LAB_026a5eec;
                }
              }
              local_64 = 0;
            }
          }
LAB_026a5eec:
          if ((local_64 & 0xfffffffe) != 0x12) goto LAB_026a5f90;
          uVar3 = *puVar15;
          uVar10 = 1;
          if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
            puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
            if ((*puVar16 != 0) &&
               ((uVar10 = puVar16[1], uVar10 != 0 && ((ulong)(ushort)puVar16[2] != 0)))) {
              lVar19 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar19 = 0x1c;
              }
              lVar19 = (long)puVar16 + lVar19 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar19 != 0) {
                uVar3 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar15 - lVar19) / (ulong)uVar10);
                }
                if (*puVar16 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if (uVar3 < *(uint *)puVar5) {
                  uVar10 = 1;
                  if (*(short *)(*(long *)(puVar5 + 8) + (long)(int)uVar3 * 2) == 5) {
                    uVar10 = 2;
                  }
                  goto LAB_026a5f94;
                }
              }
            }
            uVar10 = 1;
          }
        }
      }
      else {
        puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
        if ((*puVar16 == 0) ||
           ((uVar10 = puVar16[1], uVar10 == 0 || ((ulong)(ushort)puVar16[2] == 0))))
        goto LAB_026a5dc0;
        lVar19 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar16 + lVar19 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar19 == 0) goto LAB_026a5dc0;
        uVar3 = 0;
        if ((ulong)uVar10 != 0) {
          uVar3 = (uint)((ulong)((long)puVar15 - lVar19) / (ulong)uVar10);
        }
        if (*puVar16 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if (((*(uint *)PTR_DAT_04bc00c8 <= uVar3) ||
            (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
            0xbc < uVar7)) || ((uVar7 & 0xfffe) != 0x72)) goto LAB_026a5dc0;
        uVar10 = 3;
      }
    }
LAB_026a5f94:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar10);
    if (uVar10 < 3) {
      if (uVar10 < 5) {
        uVar8 = 1 << uVar10 | uVar8;
      }
    }
    else if (((uVar10 == 3) && ((uVar9 & 1) != 0)) &&
            (uVar12 = FUN_0277d7b4(puVar2,param_3), (uVar12 & 1) == 0)) {
      if (DAT_05594b4c == '\x01') {
        uVar10 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar10 = uVar10 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar10 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar10;
      }
      else {
        uVar10 = nn::os::GetSystemTick();
        uVar3 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
        uVar10 = uVar3 ^ uVar3 * 0x800;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
        uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar10 ^ uVar3;
      }
      local_ac = local_ac + 1;
      if (((ulong)uVar10 * (ulong)local_ac & 0xffffffff00000000) == 0) {
        local_88 = *(undefined4 *)puVar2;
        local_84 = *(undefined4 *)(param_2 + lVar18 + 0x18);
      }
    }
    lVar18 = lVar18 + 0xc;
  } while (lVar18 != 0x1b0);
  uVar11 = FUN_021d7d60(param_1);
  puVar1 = PTR_DAT_04bb2020;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "UseAudioType";
  FUN_02749650(param_1 + 0x1267c,uVar11,&local_80,0,0);
  if ((uVar8 >> 2 & 1) == 0) {
    if ((uVar8 & 3) != 1) goto LAB_026a61c0;
    uVar13 = 2;
  }
  else {
    if ((uVar8 >> 1 & 1) != 0) {
      if (DAT_05594b4c == '\x01') {
        uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar8;
      }
      else {
        uVar8 = nn::os::GetSystemTick();
        uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
        uVar8 = uVar9 ^ uVar9 * 0x800;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
        uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
      }
      if (0x31 < (uint)((ulong)uVar8 * 100 >> 0x20)) goto LAB_026a61c0;
    }
    uVar13 = 1;
  }
  local_78 = "UseAudioType";
  local_80 = puVar1 + 0x10;
  FUN_02749650(param_1 + 0x1267c,uVar11,&local_80,uVar13,0);
LAB_026a61c0:
  lVar18 = *(long *)PTR_DAT_04bb26a8;
  uVar7 = FUN_0277d6c4(&local_88);
  for (lVar18 = *(long *)(lVar18 + 0x19f800); lVar18 != 0; lVar18 = *(long *)(lVar18 + 8)) {
    while (*(ushort *)(lVar18 + 0x20) <= uVar7) {
      if (uVar7 <= *(ushort *)(lVar18 + 0x20)) {
        uVar14 = (undefined2)*(undefined4 *)(lVar18 + 0x24);
        goto LAB_026a6224;
      }
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 == 0) goto LAB_026a6218;
    }
  }
LAB_026a6218:
  uVar14 = 0;
LAB_026a6224:
  *(undefined2 *)(param_1 + 0x1287c) = uVar14;
  *(undefined4 *)(param_1 + 0x1320c) = local_88;
  *(undefined4 *)(param_1 + 0x13210) = local_84;
  return;
}

