
void FUN_01efa290(long *param_1,long param_2)

{
  long lVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  char cVar18;
  int *piVar19;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_58;
  uint local_54;
  
  FUN_01ea2da0();
  iVar8 = FUN_021d5df0(param_1[1] + 0x3e0);
  if (iVar8 == 0) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      FUN_016d3828(*(undefined4 *)(param_1[1] + 0x50c));
    }
    FUN_016d2b94(param_2,*(undefined4 *)(param_1[1] + 0x50c));
  }
  local_c8 = (undefined *)0x4ec;
  FUN_0277d4ac(&local_c8);
  puVar3 = PTR_DAT_04bb27c0;
  *(undefined4 *)((long)param_1 + 0xae84) = (undefined4)local_c8;
  *(undefined4 *)(param_1 + 0x15d1) = local_c8._4_4_;
  puVar5 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb32f0;
  puVar16 = PTR_DAT_04bb2020;
  if (((*(int *)(*(long *)puVar3 + 0x5e8) != 1) || (param_1[1] == 0)) ||
     (uVar9 = *(uint *)(param_1[1] + 0x50c), uVar9 == 0xffffffff)) goto LAB_01efa8b4;
  pcVar11 = &DAT_05454358 + (ulong)uVar9 * 0x2d8;
  if (0x10 < uVar9) {
    pcVar11 = &DAT_05454358;
  }
  if (*pcVar11 == '\0') goto LAB_01efa8b4;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  local_58 = 0;
  if (sVar2 == -1) {
LAB_01efa42c:
    uVar9 = FUN_021eabd0();
    uVar9 = uVar9 ^ 1;
  }
  else {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar13 >> 1 & 1) == 0) goto LAB_01efa42c;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_c0 = "Fireworks";
    iVar8 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_c8);
    puVar3 = PTR_DAT_04bb32e8;
    if (iVar8 == 2) {
      local_54 = 6;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar9 = (uint)((ulong)uVar17 >> 0x20);
      uVar14 = uVar9 & 0xff;
      uVar9 = uVar9 >> 8 & 0xff;
      cVar18 = (char)((ulong)uVar17 >> 0x28);
      if (iVar8 == 1) {
LAB_01efa6d8:
        local_54 = 4;
        if (('\x1d' < (char)((ulong)uVar17 >> 0x30) || '\0' < cVar18) || uVar14 != 0x13) {
          local_54 = 5;
        }
      }
      else {
        if ((iVar8 == 0) && ('\x11' < (char)((ulong)uVar17 >> 0x20))) {
          if (uVar14 != 0x12) goto LAB_01efa6d8;
          if ('\x1d' < cVar18) {
            if (uVar9 < 0x32) {
              local_54 = 1;
            }
            else {
              local_54 = 2;
              if (0x3a < uVar9) {
                local_54 = 3;
              }
            }
            goto LAB_01efa6f4;
          }
        }
        local_54 = 0;
      }
    }
LAB_01efa6f4:
    if ((local_54 < 2) || (5 < local_54)) {
      local_c8 = puVar16 + 0x10;
      local_c0 = "Countdown";
      iVar8 = FUN_008841f4(*(undefined8 *)puVar4,&local_c8);
      if (iVar8 == 2) {
        uVar9 = 8;
      }
      else {
        if (iVar8 == 1) {
          uVar15 = *(ulong *)(*(long *)puVar3 + 0x4060);
          uVar9 = (uint)(uVar15 >> 0x20);
          uVar14 = uVar9 & 0xff;
          if (((char)(uVar15 >> 0x20) < '\x02') || (uVar14 == 0x17)) {
            uVar10 = uVar9 >> 8 & 0xff;
            if (uVar14 == 0x17) {
              if ((char)(uVar15 >> 0x28) < '\x1e') {
                uVar9 = 1;
              }
              else if (uVar10 < 0x32) {
                uVar9 = 2;
              }
              else if (uVar10 < 0x37) {
                uVar9 = 3;
              }
              else {
                uVar9 = 4;
                if (0x3a < uVar10) {
                  uVar9 = 5;
                }
              }
            }
            else {
              bVar6 = false;
              bVar7 = false;
              if ((uVar15 & 0xff00000000) == 0 && (uVar15 >> 0x28 & 0xff) == 0) {
                iVar8 = (int)(char)(uVar15 >> 0x30);
                bVar7 = SBORROW4(iVar8,10);
                bVar6 = iVar8 + -10 < 0;
              }
              uVar9 = 6;
              if (bVar6 == bVar7) {
                uVar9 = 7;
              }
            }
            goto LAB_01efa768;
          }
        }
        uVar9 = 0;
      }
LAB_01efa768:
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar9);
      if ((2 < uVar9) && (uVar9 < 9)) goto LAB_01efa784;
      uVar9 = 1;
    }
    else {
LAB_01efa784:
      uVar9 = 0;
    }
  }
  sVar2 = *(short *)puVar5;
  if (sVar2 != -1) {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar13 >> 1 & 1) != 0) && (uVar15 = FUN_0220f914(&local_58), (uVar15 & 1) != 0)) &&
        (FUN_0220fad4(param_1 + 0x15a6), (int)param_1[0x15a7] != 3)) &&
       (uVar14 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), (uVar14 & 0xfffffffe) == 4)) {
      *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)((long)param_1 + 0xae84);
      *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)((long)param_1 + 0xae86);
      *(undefined1 *)(param_2 + 0x2b) = *(undefined1 *)((long)param_1 + 0xae87);
      *(int *)(param_2 + 0x2c) = (int)param_1[0x15d1];
      goto LAB_01efa8b4;
    }
  }
  if ((uVar9 & 1) == 0) goto LAB_01efa8b4;
  (**(code **)(*param_1 + 0x358))(&local_c8,param_1);
  puVar3 = PTR_DAT_04bc1568;
  puVar16 = PTR_DAT_04bc1560;
  lVar12 = *(long *)PTR_DAT_04bb3968;
  if (lVar12 == 0) {
LAB_01efa5b8:
    puVar13 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    if ((int)*(uint *)(lVar12 + 0x16ac8) < 1) {
      if (((((*(long *)(lVar12 + 0x169b8) != 0) &&
            (puVar13 = *(uint **)(*(long *)(lVar12 + 0x169b8) + 8), puVar13 != (uint *)0x0)) &&
           ((*(uint *)(lVar12 + 0x169d0) <= (uint)local_c0 ||
            (*(char *)(*(long *)(lVar12 + 0x169d8) + (long)(int)(uint)local_c0) != '\0')))) &&
          (((uint)local_c0 < *puVar13 && (puVar13[1] != 0)))) && ((ushort)puVar13[2] != 0)) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * (uint)local_c0 + (uint)(ushort)puVar13[2] * 8 +
                                  iVar8) + (long)puVar13);
        if (puVar13 != (uint *)0x0) goto LAB_01efa5c0;
      }
      goto LAB_01efa5b8;
    }
    if (*(uint *)(lVar12 + 0x16ac8) <= (uint)local_c0) goto LAB_01efa5b8;
    uVar9 = (uint)local_c0;
    if (*(uint *)(lVar12 + 0x16ab8) <= (uint)local_c0) {
      uVar9 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar12 + 0x16ac0) + (ulong)uVar9 * 8);
    if (puVar13 == (uint *)0x0) goto LAB_01efa5b8;
  }
LAB_01efa5c0:
  local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
  if (*puVar13 != 0) {
    cVar18 = *PTR_DAT_04bc1560;
    do {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar16 = 1;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar3 + 0x14);
        if (-1 < (int)uVar9) {
          if (((byte *)((ulong)uVar9 + (long)puVar13) != (byte *)0x0) &&
             ((*(byte *)((ulong)uVar9 + (long)puVar13) & 1) != 0)) {
            local_c8 = *(undefined **)PTR_DAT_04bb37e0;
            goto LAB_01efa824;
          }
          break;
        }
        if (uVar9 != 0xffffffff) break;
      }
      lVar12 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar12 == 0)) break;
      lVar1 = 0xc;
      if (*(char *)(lVar12 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar12 == 0) break;
      uVar15 = (ulong)*(ushort *)(lVar12 + 8);
      *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar19 = (int *)(lVar1 + lVar12 + 4);
      while (piVar19[-1] != 0x430dbf65) {
        piVar19 = piVar19 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_01efa814;
      }
      iVar8 = 0;
      if (*piVar19 != -1) {
        iVar8 = *piVar19;
      }
      *(int *)(puVar3 + 0x14) = iVar8;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_01efa814:
  FUN_01efa990(&local_c8,param_1,(ulong)local_c0 & 0xffffffff);
LAB_01efa824:
  uVar15 = FUN_021f4f90(*(long *)(param_1[1] + 0x68) + 0x278,0,0);
  if (((uVar15 & 1) != 0) && (lVar12 = param_1[1], lVar12 != 0)) {
    uVar9 = *(uint *)(lVar12 + 0x508);
    if (uVar9 == 0xffffffff) {
      uVar9 = *(uint *)(lVar12 + 0x50c);
      if (uVar9 != 0xffffffff) {
        pcVar11 = &DAT_05454358 + (ulong)uVar9 * 0x2d8;
        if (0x10 < uVar9) {
          pcVar11 = &DAT_05454358;
        }
        if (*pcVar11 != '\0') {
          cVar18 = pcVar11[0x110];
          goto joined_r0x01efa8a8;
        }
      }
    }
    else {
      puVar16 = &DAT_053fe348 + (ulong)uVar9 * 0xba0;
      if (9 < uVar9) {
        puVar16 = &DAT_053fe348;
      }
      cVar18 = puVar16[0x6d8];
joined_r0x01efa8a8:
      if (cVar18 != '\0') goto LAB_01efa8b4;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = (undefined4)local_c8;
  *(undefined4 *)(param_2 + 0x2c) = local_c8._4_4_;
LAB_01efa8b4:
  sVar2 = *(short *)puVar5;
  if (sVar2 != -1) {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar13 >> 1 & 1) != 0) &&
       (uVar9 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), uVar9 < 4)) {
      (**(code **)(*param_1 + 0x3d0))(param_1,0);
    }
  }
  return;
}

