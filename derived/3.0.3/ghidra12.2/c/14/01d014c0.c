
undefined8
FUN_01d014c0(undefined8 *param_1,uint *param_2,byte *param_3,ushort *param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  byte bVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int *piVar26;
  ulong uVar27;
  ushort *puVar28;
  undefined8 uVar29;
  char cVar30;
  long lVar31;
  uint *puVar32;
  ushort local_104;
  byte local_102;
  byte local_101;
  undefined *local_100;
  char *local_f8;
  
  bVar21 = *param_3;
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  local_100 = (undefined *)CONCAT71(local_100._1_7_,bVar21);
  lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_100,1);
  if (lVar13 == 0) {
    return 2;
  }
  lVar18 = lVar13 + 0x194b0;
  if (*(long *)(lVar13 + 0x194b8) == 0) {
    lVar18 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if ((*(long **)(lVar18 + 0x2c638) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar18 + 0x2c638), puVar14 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar14)();
    uVar15 = uVar15 & 0xffffffff;
  }
  local_104 = *param_4;
  local_102 = (byte)param_4[1];
  local_101 = *(byte *)((long)param_4 + 3);
  nn::time::IsValidDate((uint)local_104,(uint)local_102,(uint)local_101);
  puVar6 = PTR_DAT_04bb2020;
  if (param_5 == 0) {
    *(undefined4 *)(param_1 + 0xcbb) = 0;
  }
  else if (4 < param_5) {
    *param_1 = 0x220a002801;
    local_f8 = "CommuneIslandAvailable";
    local_100 = puVar6 + 0x10;
    iVar11 = FUN_0274bce0(param_3,&local_100);
    local_f8 = "GotoMysteryTour";
    *(bool *)(param_1 + 1) = iVar11 != 0;
    local_100 = puVar6 + 0x10;
    iVar11 = FUN_0274bce0(param_3,&local_100);
    *(bool *)((long)param_1 + 9) = 0 < iVar11;
    uVar29 = 1;
    goto LAB_01d0227c;
  }
  lVar13 = *(long *)(lVar18 + 0x2c620) + *(long *)(lVar18 + 0x2c618);
  puVar28 = (ushort *)(lVar13 + (ulong)param_5 * 0x780);
  uVar16 = nn::time::IsValidDate
                     ((uint)*puVar28,(uint)(byte)puVar28[1],(uint)*(byte *)((long)puVar28 + 3));
  if ((uVar16 & 1) != 0) {
    uVar16 = FUN_0280fef4(puVar28,&local_104);
    uVar22 = *puVar28;
    bVar21 = *(byte *)((long)puVar28 + 3);
    bVar5 = (byte)puVar28[1];
    if (((uVar16 & 1) == 0) ||
       ((((uVar16 = nn::time::IsValidDate
                              ((uint)*puVar28,(uint)(byte)puVar28[1],
                               (uint)*(byte *)((long)puVar28 + 3)), (uVar16 & 1) != 0 &&
          (*puVar28 == local_104 && (byte)puVar28[1] == local_102)) &&
         (*(byte *)((long)puVar28 + 3) == local_101)) &&
        ((*(char *)((long)param_1 + 10) != '\0' &&
         (uVar22 = local_104, bVar21 = local_101, bVar5 = local_102,
         *(char *)((long)param_1 + 0x1a) != '\0')))))) {
      puVar1 = (uint *)(param_1 + 0xcbb);
      uVar16 = (ulong)param_5;
      puVar14 = param_1 + 4 + (ulong)*puVar1 * 0x28b;
      if (4 < *puVar1) {
        puVar14 = param_1 + 4;
      }
      nn::time::IsValidDate((uint)uVar22,(uint)bVar5,(uint)bVar21);
      uVar17 = nn::time::IsValidDate
                         ((uint)*puVar28,(uint)(byte)puVar28[1],(uint)*(byte *)((long)puVar28 + 3));
      uVar12 = (uint)*puVar28;
      if ((uVar17 & 1) == 0) {
        uVar12 = 2000;
      }
      uVar17 = nn::time::IsValidDate
                         ((uint)*puVar28,(uint)(byte)puVar28[1],(uint)*(byte *)((long)puVar28 + 3));
      uVar23 = (uint)(byte)puVar28[1];
      if ((uVar17 & 1) == 0) {
        uVar23 = 1;
      }
      uVar17 = nn::time::IsValidDate
                         ((uint)*puVar28,(uint)(byte)puVar28[1],(uint)*(byte *)((long)puVar28 + 3));
      uVar4 = *(undefined1 *)((long)puVar28 + 3);
      if ((uVar17 & 1) == 0) {
        uVar4 = 1;
      }
      FUN_0074fda4(&local_100,"%04d-%02d-%02d",uVar12,uVar23,uVar4);
      (**(code **)(local_100 + 0x18))(&local_100);
      lVar19 = 0;
      do {
        if (local_f8[lVar19] == '\0') goto LAB_01d0179c;
        if (local_f8[lVar19 + 1] == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_01d0179c;
        }
        if (local_f8[lVar19 + 2] == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_01d0179c;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_01d0179c:
      uVar12 = (uint)lVar19;
      if (0xe < (int)uVar12) {
        uVar12 = 0xf;
      }
      *puVar14 = 0;
      puVar14[1] = 0;
      (**(code **)(local_100 + 0x18))(&local_100);
      memcpy(puVar14,local_f8,(ulong)uVar12);
      lVar19 = lVar13 + uVar16 * 0x780;
      *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(lVar19 + 4);
      *(undefined4 *)((long)puVar14 + 0x14) = *(undefined4 *)(lVar19 + 8);
      *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(lVar19 + 0xc);
      *(undefined4 *)((long)puVar14 + 0x1c) = *(undefined4 *)(lVar19 + 0x10);
      *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(lVar19 + 0x14);
      *(undefined4 *)((long)puVar14 + 0x24) = *(undefined4 *)(lVar19 + 0x18);
      *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(lVar19 + 0x1c);
      *(undefined4 *)((long)puVar14 + 0x2c) = *(undefined4 *)(lVar19 + 0x20);
      *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(lVar19 + 0x24);
      *(undefined4 *)((long)puVar14 + 0x34) = *(undefined4 *)(lVar19 + 0x28);
      *(undefined4 *)(puVar14 + 7) = *(undefined4 *)(lVar19 + 0x2c);
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x40);
      FUN_0277d4ac(&local_100);
      puVar6 = PTR_DAT_04bb43c0;
      lVar31 = *(long *)PTR_DAT_04bb43c0;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d0189c:
        uVar10 = 0xfffe;
      }
      else {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d0189c;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)((long)puVar14 + 0x3c) = uVar10;
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x44);
      FUN_0277d4ac(&local_100);
      lVar31 = *(long *)puVar6;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d0190c:
        uVar10 = 0xfffe;
      }
      else {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d0190c;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)((long)puVar14 + 0x3e) = uVar10;
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x48);
      FUN_0277d4ac(&local_100);
      lVar31 = *(long *)puVar6;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d0197c:
        uVar10 = 0xfffe;
      }
      else {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d0197c;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)(puVar14 + 8) = uVar10;
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x4c);
      FUN_0277d4ac(&local_100);
      lVar31 = *(long *)puVar6;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d019ec:
        uVar10 = 0xfffe;
      }
      else {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d019ec;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)((long)puVar14 + 0x42) = uVar10;
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x50);
      FUN_0277d4ac(&local_100);
      lVar31 = *(long *)puVar6;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d01a5c:
        uVar10 = 0xfffe;
      }
      else {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d01a5c;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)((long)puVar14 + 0x44) = uVar10;
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x54);
      FUN_0277d4ac(&local_100);
      lVar31 = *(long *)puVar6;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d01acc:
        uVar10 = 0xfffe;
      }
      else {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d01acc;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)((long)puVar14 + 0x46) = uVar10;
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x58);
      FUN_0277d4ac(&local_100);
      lVar31 = *(long *)puVar6;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d01b3c:
        uVar10 = 0xfffe;
      }
      else {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d01b3c;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)(puVar14 + 9) = uVar10;
      local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar19 + 0x5c);
      FUN_0277d4ac(&local_100);
      lVar19 = *(long *)puVar6;
      uVar12 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar6 == 0) {
LAB_01d01bac:
        uVar10 = 0xfffe;
      }
      else {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((*(uint *)(lVar19 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01d01bac;
        uVar10 = FUN_0277d6c4(&local_100);
      }
      *(undefined2 *)((long)puVar14 + 0x4a) = uVar10;
      uVar20 = 0;
      lVar19 = lVar13 + uVar16 * 0x780 + 0x80;
      uVar17 = 0;
      do {
        uVar27 = uVar17;
        if (*(short *)(lVar19 + (-(uVar20 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1)) != 0) {
          uVar12 = (uint)uVar17;
          if (0xff < uVar12) {
            uVar17 = 0;
          }
          uVar27 = (ulong)(uVar12 + 1);
          *(short *)((long)puVar14 + uVar17 * 2 + 0x4c) = (short)uVar20;
          *(undefined2 *)((long)puVar14 + uVar17 * 2 + 0x24c) =
               *(undefined2 *)(lVar19 + (long)(int)uVar20 * 2);
        }
        puVar8 = PTR_DAT_04bc0640;
        puVar7 = PTR_DAT_04bc0630;
        puVar6 = PTR_DAT_04bb49a0;
        uVar12 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar12;
        uVar17 = uVar27;
      } while (uVar12 != 0x100);
      *(int *)((long)puVar14 + 0x44c) = (int)uVar27;
      puVar9 = PTR_DAT_04bc0648;
      uVar12 = 0;
      iVar11 = 0;
      cVar30 = *puVar8;
      lVar13 = lVar13 + uVar16 * 0x780 + 0x280;
      do {
        uVar22 = *(ushort *)(lVar13 + (long)iVar11 * 10);
        if (uVar22 != 0xffff) {
          lVar19 = *(long *)puVar6;
          if (((*(long *)(lVar19 + 0x230) != 0) &&
              (uVar23 = (uint)uVar22 - *(int *)(lVar19 + 0x220),
              *(int *)(lVar19 + 0x220) <= (int)(uint)uVar22)) &&
             ((int)uVar23 < (int)*(uint *)(lVar19 + 0x228))) {
            if (*(uint *)(lVar19 + 0x228) <= uVar23) {
              uVar23 = 0;
            }
            puVar32 = *(uint **)(*(long *)(lVar19 + 0x230) + (long)(int)uVar23 * 8);
            if (puVar32 != (uint *)0x0) {
              puVar3 = (uint *)((long)(puVar14 + 0x8a) + (ulong)uVar12 * 8 * 4);
              if (0x7f < uVar12) {
                puVar3 = (uint *)(puVar14 + 0x8a);
              }
              uVar23 = 0;
              if (*puVar32 != 0) {
                do {
                  if (cVar30 != '\0') {
                    uVar24 = *(uint *)(puVar9 + 0x1c);
                    if ((int)uVar24 < 0) {
                      if (uVar24 == 0xffffffff) {
                        uVar24 = *puVar32;
                        if (uVar24 != 0) goto LAB_01d01d34;
                        uVar23 = 0;
                      }
                      else {
LAB_01d01d9c:
                        uVar23 = 0;
                      }
                    }
                    else {
                      uVar23 = 0;
                      if ((ushort *)((ulong)uVar24 + (long)puVar32) != (ushort *)0x0) {
                        uVar23 = (uint)*(ushort *)((ulong)uVar24 + (long)puVar32);
                      }
                    }
                    goto LAB_01d01da0;
                  }
                  cVar30 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  uVar24 = *puVar32;
                  uVar23 = 0;
                  if (uVar24 == 0) goto LAB_01d01da0;
LAB_01d01d34:
                  puVar25 = (uint *)(ulong)uVar24;
                  if (puVar32 == puVar25) goto LAB_01d01d9c;
                  lVar19 = 0xc;
                  if (*(char *)((long)puVar32 + (10 - (long)puVar25)) != '\0') {
                    lVar19 = 0x1c;
                  }
                  lVar19 = (long)puVar32 + (lVar19 - (long)puVar25);
                  if (lVar19 == 0) goto LAB_01d01d9c;
                  uVar16 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar25));
                  *(undefined4 *)(puVar9 + 0x1c) = 0xfffffffe;
                  uVar23 = 0;
                  if (uVar16 == 0) goto LAB_01d01da0;
                  piVar26 = (int *)(lVar19 + 4);
                  while (piVar26[-1] != 0x54706054) {
                    piVar26 = piVar26 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) {
                      uVar23 = 0;
                      goto LAB_01d01da0;
                    }
                  }
                  iVar2 = 0;
                  if (*piVar26 != -1) {
                    iVar2 = *piVar26;
                  }
                  *(int *)(puVar9 + 0x1c) = iVar2;
                } while (*puVar32 != 0);
                uVar23 = 0;
              }
LAB_01d01da0:
              *puVar3 = uVar23;
              if (*puVar32 != 0) {
                do {
                  if (cVar30 == '\0') {
                    cVar30 = '\x01';
                    *(undefined8 *)puVar9 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *puVar8 = 1;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    uVar23 = *puVar32;
                  }
                  else {
                    uVar23 = *(uint *)(puVar9 + 0x2c);
                    if (-1 < (int)uVar23) {
                      if (((char *)((ulong)uVar23 + (long)puVar32) != (char *)0x0) &&
                         (*(char *)((ulong)uVar23 + (long)puVar32) != '\0')) {
                        *(undefined1 *)(puVar3 + 3) = 0;
                        *(undefined1 *)(puVar3 + 6) = 1;
                        *(undefined8 *)(puVar3 + 4) =
                             *(undefined8 *)(lVar13 + (long)iVar11 * 10 + 2);
                        goto LAB_01d01c88;
                      }
                      break;
                    }
                    if (uVar23 != 0xffffffff) break;
                    uVar23 = *puVar32;
                  }
                  if ((uVar23 == 0) || (puVar25 = (uint *)(ulong)uVar23, puVar32 == puVar25)) break;
                  lVar19 = 0xc;
                  if (*(char *)((long)puVar32 + (10 - (long)puVar25)) != '\0') {
                    lVar19 = 0x1c;
                  }
                  lVar19 = (long)puVar32 + (lVar19 - (long)puVar25);
                  if (lVar19 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar25));
                  *(undefined4 *)(puVar9 + 0x2c) = 0xfffffffe;
                  if (uVar16 == 0) break;
                  piVar26 = (int *)(lVar19 + 4);
                  while (piVar26[-1] != -0x7c25c4d6) {
                    piVar26 = piVar26 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) goto LAB_01d01e54;
                  }
                  iVar2 = 0;
                  if (*piVar26 != -1) {
                    iVar2 = *piVar26;
                  }
                  *(int *)(puVar9 + 0x2c) = iVar2;
                  if (*puVar32 == 0) break;
                } while( true );
              }
LAB_01d01e54:
              *(undefined1 *)(puVar3 + 3) = 1;
              uVar22 = 0;
              *(undefined1 *)(puVar3 + 6) = 0;
              uVar23 = *puVar32;
              if ((uVar23 != 0) && (puVar32 != (uint *)(ulong)uVar23)) {
                puVar25 = (uint *)((long)puVar32 - (long)(ulong)uVar23);
                uVar22 = 0;
                if (*puVar25 != 0) {
                  uVar23 = puVar25[1];
                  if ((uVar23 == 0) || ((ulong)(ushort)puVar25[2] == 0)) {
LAB_01d01ee8:
                    uVar22 = 0;
                  }
                  else {
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar25 + lVar19 + (ulong)(ushort)puVar25[2] * 8;
                    if (lVar19 != 0) {
                      uVar24 = 0;
                      if ((ulong)uVar23 != 0) {
                        uVar24 = (uint)((ulong)((long)puVar32 - lVar19) / (ulong)uVar23);
                      }
                      if (*puVar25 <= uVar24) {
                        uVar24 = 0xffffffff;
                      }
                      if (uVar24 < *(uint *)PTR_DAT_04bc0618) {
                        uVar22 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar24 * 2);
                        if (uVar22 < 0x12) goto LAB_01d01efc;
                        goto LAB_01d01ee8;
                      }
                    }
                    uVar22 = 0;
                  }
                }
              }
LAB_01d01efc:
              if (uVar22 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined2 *)(lVar13 + (long)iVar11 * 10 + 2);
              }
              *(undefined2 *)(puVar3 + 1) = uVar10;
              uVar22 = 0;
              uVar23 = *puVar32;
              if ((uVar23 != 0) && (puVar32 != (uint *)(ulong)uVar23)) {
                puVar25 = (uint *)((long)puVar32 - (long)(ulong)uVar23);
                uVar22 = 0;
                if (*puVar25 != 0) {
                  uVar23 = puVar25[1];
                  if ((uVar23 == 0) || ((ulong)(ushort)puVar25[2] == 0)) {
LAB_01d01fa8:
                    uVar22 = 0;
                  }
                  else {
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar25 + lVar19 + (ulong)(ushort)puVar25[2] * 8;
                    if (lVar19 != 0) {
                      uVar24 = 0;
                      if ((ulong)uVar23 != 0) {
                        uVar24 = (uint)((ulong)((long)puVar32 - lVar19) / (ulong)uVar23);
                      }
                      if (*puVar25 <= uVar24) {
                        uVar24 = 0xffffffff;
                      }
                      if (uVar24 < *(uint *)PTR_DAT_04bc0620) {
                        uVar22 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar24 * 2);
                        if (uVar22 < 0x12) goto LAB_01d01fbc;
                        goto LAB_01d01fa8;
                      }
                    }
                    uVar22 = 0;
                  }
                }
              }
LAB_01d01fbc:
              if (uVar22 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined2 *)(lVar13 + (long)iVar11 * 10 + 4);
              }
              *(undefined2 *)((long)puVar3 + 6) = uVar10;
              uVar22 = 0;
              uVar23 = *puVar32;
              if ((uVar23 != 0) && (puVar32 != (uint *)(ulong)uVar23)) {
                puVar25 = (uint *)((long)puVar32 - (long)(ulong)uVar23);
                uVar22 = 0;
                if (*puVar25 != 0) {
                  uVar23 = puVar25[1];
                  if ((uVar23 == 0) || ((ulong)(ushort)puVar25[2] == 0)) {
LAB_01d02068:
                    uVar22 = 0;
                  }
                  else {
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar25 + lVar19 + (ulong)(ushort)puVar25[2] * 8;
                    if (lVar19 != 0) {
                      uVar24 = 0;
                      if ((ulong)uVar23 != 0) {
                        uVar24 = (uint)((ulong)((long)puVar32 - lVar19) / (ulong)uVar23);
                      }
                      if (*puVar25 <= uVar24) {
                        uVar24 = 0xffffffff;
                      }
                      if (uVar24 < *(uint *)PTR_DAT_04bc0628) {
                        uVar22 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar24 * 2);
                        if (uVar22 < 0x12) goto LAB_01d0207c;
                        goto LAB_01d02068;
                      }
                    }
                    uVar22 = 0;
                  }
                }
              }
LAB_01d0207c:
              if (uVar22 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined2 *)(lVar13 + (long)iVar11 * 10 + 6);
              }
              *(undefined2 *)(puVar3 + 2) = uVar10;
              uVar24 = 0;
              uVar23 = *puVar32;
              if ((uVar23 != 0) && (puVar32 != (uint *)(ulong)uVar23)) {
                puVar25 = (uint *)((long)puVar32 - (long)(ulong)uVar23);
                uVar24 = 0;
                if (*puVar25 != 0) {
                  uVar23 = puVar25[1];
                  if ((uVar23 == 0) || ((ulong)(ushort)puVar25[2] == 0)) {
LAB_01d02120:
                    uVar24 = 0;
                  }
                  else {
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar25 + lVar19 + (ulong)(ushort)puVar25[2] * 8;
                    if (lVar19 == 0) {
                      uVar24 = 0;
                    }
                    else {
                      uVar24 = 0;
                      if ((ulong)uVar23 != 0) {
                        uVar24 = (uint)((ulong)((long)puVar32 - lVar19) / (ulong)uVar23);
                      }
                      if (*puVar25 <= uVar24) {
                        uVar24 = 0xffffffff;
                      }
                      if (uVar24 < *(uint *)puVar7) {
                        uVar24 = (uint)*(ushort *)(*(long *)(puVar7 + 8) + (long)(int)uVar24 * 2);
                        if (0x11 < uVar24) goto LAB_01d02120;
                      }
                      else {
                        uVar24 = 0;
                      }
                    }
                  }
                }
              }
              local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar24);
              uVar10 = 0;
              if (uVar24 != 0) {
                uVar10 = *(undefined2 *)(lVar13 + (long)iVar11 * 10 + 8);
              }
              *(undefined2 *)((long)puVar3 + 10) = uVar10;
LAB_01d01c88:
              uVar12 = uVar12 + 1;
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x80);
      *(uint *)(puVar14 + 0x28a) = uVar12;
      *puVar1 = *puVar1 + 1;
      uVar16 = nn::time::IsValidDate
                         ((uint)*puVar28,(uint)(byte)puVar28[1],(uint)*(byte *)((long)puVar28 + 3));
      uVar29 = 0;
      if ((((uVar16 & 1) == 0) || (*puVar28 != local_104)) || ((byte)puVar28[1] != local_102))
      goto LAB_01d0227c;
      if (*(byte *)((long)puVar28 + 3) == local_101) {
        uVar16 = 0;
        uVar12 = 0;
        do {
          piVar26 = (int *)((long)puVar28 + uVar16);
          uVar16 = uVar16 + 4;
          uVar12 = (*piVar26 * 0x16a88000 | (uint)(*piVar26 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                   uVar12;
          uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
        } while (uVar16 < 0x77d);
        uVar29 = 0;
        uVar12 = (uVar12 ^ uVar12 >> 0x10 ^ 0x780) * -0x7a143595;
        uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
        *param_2 = uVar12 ^ uVar12 >> 0x10;
        goto LAB_01d0227c;
      }
    }
  }
  uVar29 = 0;
LAB_01d0227c:
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar18 + 0x2c638) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar18 + 0x2c638) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return uVar29;
}

