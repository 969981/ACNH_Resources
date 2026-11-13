
void FUN_01321ef0(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint uVar8;
  int *piVar9;
  undefined2 uVar10;
  uint *puVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  char cVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  long local_110;
  long local_108;
  undefined2 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_48 [8];
  
  puVar6 = PTR_DAT_04bc0e90;
  puVar5 = PTR_DAT_04bc0e88;
  if ((uint)*(ushort *)(param_2 + 1) - (uint)DAT_0534f428 < DAT_0534f408) {
    puVar19 = *(uint **)(DAT_0534f410 +
                        (long)(int)((uint)*(ushort *)(param_2 + 1) - (uint)DAT_0534f428) * 8);
    if (puVar19 == (uint *)0x0) goto LAB_01322028;
    uVar8 = *puVar19;
    if (uVar8 != 0) {
      cVar16 = *PTR_DAT_04bc0e88;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          uVar8 = *puVar19;
        }
        else {
          uVar17 = *(uint *)(puVar6 + 0x18);
          if (-1 < (int)uVar17) {
            bVar4 = false;
            uVar8 = 0;
            if ((ushort *)((ulong)uVar17 + (long)puVar19) != (ushort *)0x0) {
              uVar8 = (uint)*(ushort *)((ulong)uVar17 + (long)puVar19);
            }
            goto LAB_01322030;
          }
          if (uVar17 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)uVar8;
        if ((puVar11 == (uint *)0x0) || (puVar19 == puVar11)) break;
        lVar15 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar11)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar19 + (lVar15 - (long)puVar11);
        if (lVar15 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar11));
        *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar9 = (int *)(lVar15 + 4);
        while (piVar9[-1] != 0x72573f73) {
          piVar9 = piVar9 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_01322018;
        }
        iVar12 = 0;
        if (*piVar9 != -1) {
          iVar12 = *piVar9;
        }
        *(int *)(puVar6 + 0x18) = iVar12;
        uVar8 = *puVar19;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_01322018:
    bVar4 = false;
    uVar8 = 0;
  }
  else {
    puVar19 = (uint *)0x0;
LAB_01322028:
    uVar8 = 0;
    bVar4 = true;
  }
LAB_01322030:
  if (uVar8 - DAT_0534d118 < DAT_0534d0f8) {
    puVar11 = *(uint **)(DAT_0534d100 + (long)(int)(uVar8 - DAT_0534d118) * 8);
  }
  else {
    puVar11 = (uint *)0x0;
  }
  uVar13 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  do {
    lVar15 = uVar13 << 0x20;
    uVar20 = uVar13 << 1;
    uVar18 = uVar13 >> 0x1f;
    uVar8 = (int)uVar13 + 2;
    uVar13 = (ulong)uVar8;
    *(undefined2 *)((long)&local_f0 + (-uVar18 & 0xfffffffe00000000 | uVar20)) = 0;
    *(undefined2 *)((long)&local_f0 + (lVar15 + 0x100000000 >> 0x1f)) = 0;
  } while (uVar8 != 0x48);
  uVar8 = 0;
  if (((puVar11 != (uint *)0x0) && (uVar17 = *puVar11, uVar17 != 0)) &&
     (puVar11 != (uint *)(ulong)uVar17)) {
    puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar17);
    uVar8 = 0;
    if (*puVar14 != 0) {
      uVar8 = puVar14[1];
      if ((uVar8 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar15 != 0) {
          uVar17 = 0;
          if ((ulong)uVar8 != 0) {
            uVar17 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar8);
          }
          if (*puVar14 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < *(uint *)PTR_DAT_04bc0e30) &&
             (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0e30 + 8) + (long)(int)uVar17 * 2),
             uVar8 < 3)) goto LAB_01322144;
        }
      }
      uVar8 = 0;
    }
  }
LAB_01322144:
  local_110 = CONCAT44(local_110._4_4_,uVar8);
  if (!bVar4) {
    puVar11 = (uint *)((long)puVar19 - (ulong)*puVar19);
    if ((((*puVar19 != 0) && (puVar11 != (uint *)0x0)) && (*puVar11 != 0)) &&
       ((uVar17 = puVar11[1], uVar17 != 0 && ((ulong)(ushort)puVar11[2] != 0)))) {
      lVar15 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar11 + lVar15 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar15 != 0) {
        uVar2 = 0;
        if ((ulong)uVar17 != 0) {
          uVar2 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar17);
        }
        if (*puVar11 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc0e98) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar2 * 2) == 2)) {
          lVar15 = 0;
          do {
            lVar1 = DAT_0518e070 + (long)(int)(uVar8 * 0x48) * 2;
            if ((DAT_0518e068 & uVar8 < 3) == 0) {
              lVar1 = 0;
            }
            *(undefined2 *)((long)&local_f0 + lVar15) = *(undefined2 *)(lVar1 + lVar15);
            lVar15 = lVar15 + 2;
          } while (lVar15 != 0x90);
          goto LAB_01322198;
        }
      }
    }
  }
  lVar15 = 0;
  do {
    lVar1 = DAT_0518e058 + (long)(int)(uVar8 * 0x48) * 2;
    if ((DAT_0518e050 & uVar8 < 3) == 0) {
      lVar1 = 0;
    }
    *(undefined2 *)((long)&local_f0 + lVar15) = *(undefined2 *)(lVar1 + lVar15);
    lVar15 = lVar15 + 2;
  } while (lVar15 != 0x90);
LAB_01322198:
  uVar8 = nn::os::GetSystemTick();
  puVar6 = PTR_DAT_04bc0e48;
  puVar5 = PTR_DAT_04bc0e40;
  uVar17 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  uVar8 = uVar17 ^ uVar17 * 0x800;
  uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
  uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
  uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
  uVar10 = *(undefined2 *)
            (&DAT_041751c0 + ((ulong)(uVar8 >> 8 ^ uVar17 >> 0x13 ^ uVar8 ^ uVar17) * 3 >> 0x1f & 6)
            );
  uVar8 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
  if (((uVar8 < DAT_0534f408) &&
      (puVar11 = *(uint **)(DAT_0534f410 + (long)(int)uVar8 * 8), puVar11 != (uint *)0x0)) &&
     (uVar8 = *puVar11, uVar8 != 0 && puVar11 != (uint *)(ulong)uVar8)) {
    puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
    if (((*puVar14 != 0) && (uVar8 = puVar14[1], uVar8 != 0)) && ((ulong)(ushort)puVar14[2] != 0)) {
      lVar15 = 0xc;
      if (*(char *)((long)puVar14 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
      if (lVar15 != 0) {
        uVar17 = 0;
        if ((ulong)uVar8 != 0) {
          uVar17 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar8);
        }
        if (*puVar14 <= uVar17) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 < *(uint *)PTR_DAT_04bc0e98) {
          uVar7 = 0xf4;
          if (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar17 * 2) != 1) {
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        }
      }
    }
  }
  if (!bVar4) {
    puVar11 = (uint *)((long)puVar19 - (ulong)*puVar19);
    if (((*puVar19 != 0) && (puVar11 != (uint *)0x0)) &&
       ((*puVar11 != 0 && ((uVar8 = puVar11[1], uVar8 != 0 && ((ulong)(ushort)puVar11[2] != 0))))))
    {
      lVar15 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar11 + lVar15 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar15 != 0) {
        uVar17 = 0;
        if ((ulong)uVar8 != 0) {
          uVar17 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar8);
        }
        if (*puVar11 <= uVar17) {
          uVar17 = 0xffffffff;
        }
        if ((uVar17 < *(uint *)PTR_DAT_04bc0e98) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar17 * 2) == 2)) {
          if (((uint)*(ushort *)(param_2 + 3) - (uint)DAT_0534e320 < DAT_0534e300) &&
             ((puVar19 = *(uint **)(DAT_0534e308 +
                                   (long)(int)((uint)*(ushort *)(param_2 + 3) - (uint)DAT_0534e320)
                                   * 8), puVar19 != (uint *)0x0 && (uVar8 = *puVar19, uVar8 != 0))))
          {
            cVar16 = *PTR_DAT_04bc0e40;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                uVar8 = *puVar19;
              }
              else {
                uVar17 = *(uint *)(puVar6 + 8);
                if (-1 < (int)uVar17) {
                  uVar10 = 0;
                  if ((undefined2 *)((ulong)uVar17 + (long)puVar19) != (undefined2 *)0x0) {
                    uVar10 = *(undefined2 *)((ulong)uVar17 + (long)puVar19);
                  }
                  goto LAB_013222bc;
                }
                if (uVar17 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)uVar8;
              uVar10 = 0;
              if ((puVar11 == (uint *)0x0) || (puVar19 == puVar11)) goto LAB_013222bc;
              lVar15 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar11)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar19 + (lVar15 - (long)puVar11);
              if (lVar15 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar11));
              *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
              if (uVar13 == 0) break;
              piVar9 = (int *)(lVar15 + 4);
              while (piVar9[-1] != -0x37bbcd49) {
                uVar10 = 0;
                piVar9 = piVar9 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_013222bc;
              }
              uVar10 = 0;
              iVar12 = 0;
              if (*piVar9 != -1) {
                iVar12 = *piVar9;
              }
              *(int *)(puVar6 + 8) = iVar12;
              uVar8 = *puVar19;
              if (uVar8 == 0) goto LAB_013222bc;
            } while( true );
          }
          uVar10 = 0;
        }
      }
    }
  }
LAB_013222bc:
  uStack_b8._0_4_ = CONCAT22(uVar10,(undefined2)uStack_b8);
  lVar15 = *(long *)(param_2[2] + 0xb8);
  if (lVar15 != 0) {
    uVar20 = 9;
    iVar12 = 0;
    *(undefined8 *)(lVar15 + 8) = 0x800000009;
    uVar8 = 0;
    lVar1 = lVar15 + 0x10;
    uVar17 = 8;
    uVar13 = 9;
    do {
      if (uVar13 != 0) {
        uVar18 = 0;
        uVar13 = uVar20;
        do {
          if ((uVar8 < 9) && (uVar17 = (uint)uVar18, uVar17 < 10)) {
            uVar2 = iVar12 + uVar17;
            uVar13 = (ulong)uVar2;
            if (0x47 < uVar2) {
              uVar13 = 0;
            }
            uVar10 = *(undefined2 *)((long)&local_f0 + uVar13 * 2);
            lVar3 = lVar1 + (ulong)uVar2 * 0x18;
            if (0x47 < uVar2) {
              lVar3 = lVar1;
            }
            *(uint *)(lVar3 + 0xc) = uVar17;
            *(uint *)(lVar3 + 0x10) = uVar8;
            uVar13 = (ulong)*(uint *)(lVar15 + 8);
            *(undefined2 *)(lVar3 + 8) = uVar10;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar13);
        uVar17 = *(uint *)(lVar15 + 0xc);
        uVar20 = uVar13;
      }
      uVar8 = uVar8 + 1;
      iVar12 = iVar12 + 9;
    } while (uVar8 < uVar17);
    *(undefined4 *)(lVar15 + 0x6d0) = 0;
    if ((0 < (int)uVar17) && (0 < (int)uVar20)) {
      iVar12 = 0;
      uVar8 = 0;
      do {
        uVar13 = 0;
        do {
          uVar2 = iVar12 + (int)uVar13;
          local_108 = CONCAT44(uVar8,(int)uVar13);
          lVar15 = lVar1 + (ulong)uVar2 * 0x18;
          if (0x47 < uVar2) {
            lVar15 = lVar1;
          }
          local_110 = *param_2;
          local_100 = *(undefined2 *)(lVar15 + 8);
          local_f8 = param_2[2];
          FUN_0133bcb0(auStack_48,&local_110);
          uVar13 = uVar13 + 1;
        } while (uVar20 != uVar13);
        uVar8 = uVar8 + 1;
        iVar12 = iVar12 + 9;
      } while (uVar8 != uVar17);
    }
  }
  lVar15 = *param_2;
  local_108 = param_2[2];
  local_110 = lVar15;
  FUN_0133a290(&local_f0,(short)param_2[1]);
  if (lVar15 != 0) {
    FUN_0133a5c0(&local_f0,&local_110);
    FUN_0133adf0(&local_f0,&local_110);
  }
  return;
}

