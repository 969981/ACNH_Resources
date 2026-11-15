
void FUN_01e6fdd0(undefined8 *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  int iVar15;
  uint *puVar16;
  char cVar17;
  byte bVar18;
  ushort uVar19;
  uint *puVar20;
  char *pcVar21;
  long lVar22;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar13 = PTR_DAT_04bc1568;
  puVar11 = PTR_DAT_04bc1560;
  lVar8 = *(long *)PTR_DAT_04bb3968;
  if (lVar8 == 0) {
LAB_01e6feb4:
    uVar3 = *(uint *)PTR_DAT_04bc2828;
    puVar20 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar3 = *param_3;
    if ((int)*(uint *)(lVar8 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar8 + 0x169b8) != 0) &&
           (puVar20 = *(uint **)(*(long *)(lVar8 + 0x169b8) + 8), puVar20 != (uint *)0x0)) &&
          ((*(uint *)(lVar8 + 0x169d0) <= uVar3 ||
           (*(char *)(*(long *)(lVar8 + 0x169d8) + (long)(int)uVar3) != '\0')))) &&
         (((uVar3 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
        iVar15 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          iVar15 = 0x1c;
        }
        puVar20 = (uint *)((ulong)(puVar20[1] * uVar3 + (uint)(ushort)puVar20[2] * 8 + iVar15) +
                          (long)puVar20);
        if (puVar20 != (uint *)0x0) goto LAB_01e6fe3c;
      }
      goto LAB_01e6feb4;
    }
    if (*(uint *)(lVar8 + 0x16ac8) <= uVar3) goto LAB_01e6feb4;
    if (*(uint *)(lVar8 + 0x16ab8) <= uVar3) {
      uVar3 = 0;
    }
    puVar20 = *(uint **)(*(long *)(lVar8 + 0x16ac0) + (ulong)uVar3 * 8);
    if (puVar20 == (uint *)0x0) goto LAB_01e6feb4;
LAB_01e6fe3c:
    uVar3 = *puVar20;
  }
  if (uVar3 != 0) {
    cVar17 = *PTR_DAT_04bc1560;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar13 = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
        *puVar11 = 1;
        *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar13 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar13 + 0xc);
        if (-1 < (int)uVar3) {
          if (((byte *)((ulong)uVar3 + (long)puVar20) != (byte *)0x0) &&
             (bVar18 = *(byte *)((ulong)uVar3 + (long)puVar20), bVar18 < 0x28)) goto LAB_01e6ffd8;
          break;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar16 = (uint *)(ulong)*puVar20;
      bVar18 = 2;
      if ((*puVar20 == 0) || (puVar20 == puVar16)) goto LAB_01e6ffd8;
      lVar8 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar16)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar20 + (lVar8 - (long)puVar16);
      if (lVar8 == 0) break;
      uVar7 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar16));
      *(undefined4 *)(puVar13 + 0xc) = 0xfffffffe;
      if (uVar7 == 0) break;
      piVar9 = (int *)(lVar8 + 4);
      while (piVar9[-1] != 0x40876b17) {
        piVar9 = piVar9 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_01e6ffd4;
      }
      iVar15 = 0;
      if (*piVar9 != -1) {
        iVar15 = *piVar9;
      }
      *(int *)(puVar13 + 0xc) = iVar15;
      if (*puVar20 == 0) break;
    } while( true );
  }
LAB_01e6ffd4:
  bVar18 = 2;
LAB_01e6ffd8:
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  puVar13 = PTR_DAT_04bc1568;
  puVar11 = PTR_DAT_04bc1560;
  switch(bVar18) {
  case 0:
    FUN_021e9590(&local_60,*(undefined8 *)(param_2 + 8),*param_3 == 0xf);
    break;
  default:
    uVar3 = *param_3;
    if (uVar3 == 7) {
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 != -1) {
        local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
        puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
        if (0xff < (uint)(int)sVar2) {
          puVar16 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar16 & 1) != 0) {
          lVar8 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_2 + 8) + 0x508));
          if (lVar8 != 0) {
            if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
               (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar4 == (undefined8 *)0x0)) {
              cVar17 = *(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1267a);
            }
            else {
              uVar7 = (**(code **)*puVar4)();
              cVar17 = *(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1267a);
              if ((((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
                 (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8),
                 puVar4 != (undefined8 *)0x0)) {
                (**(code **)*puVar4)();
              }
            }
            if (cVar17 == '\x02') goto LAB_01e70458;
          }
          uVar7 = FUN_021eb720(*(long *)(param_2 + 8) + 0x508);
          if ((uVar7 & 1) == 0) {
            local_60 = (undefined *)0x1c8d;
            goto LAB_01e70888;
          }
        }
      }
LAB_01e70458:
      uVar3 = *param_3;
    }
    else if (uVar3 == 9) {
      piVar9 = (int *)PTR_DAT_04bc2838;
      if (*(long *)(param_2 + 8) != 0) {
        uVar3 = *(uint *)(*(long *)(param_2 + 8) + 0x508);
        if ((9 < uVar3) ||
           (lVar8 = (ulong)uVar3 * 0xba0, puVar11 = &DAT_053fe348 + lVar8,
           (&DAT_053fee41)[lVar8] == '\0')) {
          puVar11 = (undefined *)0x0;
        }
        if (puVar11 != (undefined *)0x0) {
          piVar9 = (int *)(puVar11 + 0x524);
        }
      }
      if (*piVar9 == 2) {
        local_60 = (undefined *)0x1568;
        goto LAB_01e70888;
      }
      goto LAB_01e70458;
    }
    puVar11 = PTR_DAT_04bb43c0;
    if (uVar3 == 0x16) {
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 != -1) {
        local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
        puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
        if (0xff < (uint)(int)sVar2) {
          puVar16 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar16 >> 1 & 1) != 0) && (*(long *)PTR_DAT_04bb32f0 != 0)) {
          uVar3 = FUN_00883550();
          if (uVar3 < 2) {
            puVar5 = (undefined2 *)FUN_021e88e0(*(undefined8 *)(param_2 + 8));
            goto LAB_01e708cc;
          }
          uVar3 = *param_3;
          if (uVar3 != 0x16) goto LAB_01e708f4;
        }
      }
      uVar7 = FUN_016e63c4();
      if ((((uVar7 & 1) != 0) && (*(long *)PTR_DAT_04bb32f0 != 0)) &&
         (uVar3 = FUN_00883068(), uVar3 < 2)) {
        puVar5 = (undefined2 *)FUN_021e8980(*(undefined8 *)(param_2 + 8));
LAB_01e708cc:
        *(undefined2 *)param_1 = *puVar5;
        *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar5 + 1);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar5 + 3);
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar5 + 2);
        return;
      }
      uVar3 = *param_3;
    }
    else if (uVar3 == 0x13) {
      pcVar21 = PTR_DAT_04bc2b20;
      if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
        lVar8 = *(long *)(param_2 + 8);
        if (lVar8 == 0) {
LAB_01e70570:
          pcVar10 = (char *)0x0;
        }
        else {
          uVar3 = *(uint *)(lVar8 + 0x508);
          if (uVar3 != 0xffffffff) {
            puVar13 = &DAT_053fe348 + (ulong)uVar3 * 0xba0;
            if (9 < uVar3) {
              puVar13 = &DAT_053fe348;
            }
            pcVar21 = puVar13 + 0x658;
            goto LAB_01e70580;
          }
          uVar3 = *(uint *)(lVar8 + 0x50c);
          if (uVar3 == 0xffffffff) goto LAB_01e70570;
          pcVar14 = &DAT_05454358 + (ulong)uVar3 * 0x2d8;
          if (0x10 < uVar3) {
            pcVar14 = &DAT_05454358;
          }
          pcVar10 = (char *)0x0;
          if (*pcVar14 != '\0') {
            pcVar10 = pcVar14;
          }
        }
        if (pcVar10 != (char *)0x0) {
          pcVar21 = pcVar10 + 0x90;
        }
      }
LAB_01e70580:
      iVar15 = *(int *)(pcVar21 + 8);
      if (iVar15 != 0xc) {
        if (iVar15 == 0xb) {
          local_60 = (undefined *)0xc8d;
        }
        else {
          if (iVar15 != 10) goto LAB_01e70a00;
          local_60 = (undefined *)0x2355;
        }
        goto LAB_01e70888;
      }
      pcVar10 = pcVar21 + 0x50;
      lVar22 = *(long *)PTR_DAT_04bb43c0;
      uVar3 = FUN_0277d6c4(pcVar10);
      lVar8 = *(long *)puVar11;
      if (lVar8 != 0) {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar22 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_50 = (uint *)0x0;
          local_58 = *(undefined4 *)(pcVar21 + 0x50);
          uStack_54 = *(undefined4 *)(pcVar21 + 0x54);
          local_60 = PTR_DAT_04bc0510 + 0x10;
          uVar3 = FUN_0277d6c4(&local_58);
          if (*(long *)puVar11 == 0) {
LAB_01e70990:
            local_48 = 0xbc;
LAB_01e709cc:
            local_44 = 0x69;
            if ((local_48 != 0x69) && (uVar7 = FUN_01ad6a30(&local_60,0x56), (uVar7 & 1) == 0))
            goto LAB_01e70a00;
          }
          else {
            lVar8 = *(long *)(lVar8 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01e70990;
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(pcVar10);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
               (puVar20 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
               puVar20 == (uint *)0x0)) goto LAB_01e70990;
            local_48 = 0;
            local_44 = 0x6a;
            uVar3 = *puVar20;
            if ((uVar3 != 0) && (puVar20 != (uint *)(ulong)uVar3)) {
              puVar16 = (uint *)((long)puVar20 - (long)(ulong)uVar3);
              local_48 = 0;
              if (*puVar16 != 0) {
                uVar3 = puVar16[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar16 + lVar8 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar8 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar20 - lVar8) / (ulong)uVar3);
                    }
                    if (*puVar16 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_48 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                       local_48 < 0xbd)) goto LAB_01e70724;
                  }
                }
                local_48 = 0;
              }
            }
LAB_01e70724:
            local_50 = puVar20;
            if (local_48 != 0x6a) {
              local_48 = 0;
              local_44 = 0x6b;
              uVar3 = *puVar20;
              if ((uVar3 != 0) && (puVar20 != (uint *)(ulong)uVar3)) {
                puVar16 = (uint *)((long)puVar20 - (long)(ulong)uVar3);
                local_48 = 0;
                if (*puVar16 != 0) {
                  uVar3 = puVar16[1];
                  if ((uVar3 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                    lVar8 = 0xc;
                    if (*(char *)((long)puVar16 + 10) != '\0') {
                      lVar8 = 0x1c;
                    }
                    lVar8 = (long)puVar16 + lVar8 + (ulong)(ushort)puVar16[2] * 8;
                    if (lVar8 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar3 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar20 - lVar8) / (ulong)uVar3);
                      }
                      if (*puVar16 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_48 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
                         , local_48 < 0xbd)) goto LAB_01e707cc;
                    }
                  }
                  local_48 = 0;
                }
              }
LAB_01e707cc:
              if (local_48 == 0x6b) goto LAB_01e709f0;
              local_48 = 0;
              uVar3 = *puVar20;
              if ((uVar3 != 0) && (puVar20 != (uint *)(ulong)uVar3)) {
                puVar16 = (uint *)((long)puVar20 - (long)(ulong)uVar3);
                local_48 = 0;
                if (*puVar16 != 0) {
                  uVar3 = puVar16[1];
                  if ((uVar3 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                    lVar8 = 0xc;
                    if (*(char *)((long)puVar16 + 10) != '\0') {
                      lVar8 = 0x1c;
                    }
                    lVar8 = (long)puVar16 + lVar8 + (ulong)(ushort)puVar16[2] * 8;
                    if (lVar8 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar3 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar20 - lVar8) / (ulong)uVar3);
                      }
                      if (*puVar16 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_48 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
                         , local_48 < 0xbd)) goto LAB_01e709cc;
                    }
                  }
                  local_48 = 0;
                }
              }
              goto LAB_01e709cc;
            }
          }
LAB_01e709f0:
          FUN_021e9730(&local_60,pcVar10);
          break;
        }
      }
LAB_01e70a00:
      local_60 = *(undefined **)PTR_DAT_04bb37e0;
      break;
    }
LAB_01e708f4:
    if (uVar3 == 0x15) {
      FUN_021e9c30(&local_60,*(undefined8 *)(param_2 + 8),0);
    }
    else if (uVar3 == 0x22) {
LAB_01e7091c:
      FUN_021e8c20(&local_60,*(undefined8 *)(param_2 + 8));
    }
    else {
      if (uVar3 != 0x1c) {
        puVar6 = (ushort *)FUN_01e27050(puVar20,1,0xfd9af1e1,*(undefined8 *)PTR_DAT_04bc1918);
        if (puVar6 == (ushort *)0x0) {
          uVar19 = 0xfffe;
        }
        else {
          uVar19 = *puVar6;
        }
        local_60 = (undefined *)(ulong)uVar19;
        goto LAB_01e70888;
      }
      FUN_021e8ae0(&local_60,*(undefined8 *)(param_2 + 8));
    }
    break;
  case 10:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar8 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_2 + 8) + 0x508)), lVar8 == 0)) {
LAB_01e701dc:
      puVar5 = (undefined2 *)PTR_DAT_04bb37e0;
      goto LAB_01e701e4;
    }
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar4 == (undefined8 *)0x0)) {
      puVar5 = (undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x131e0);
      goto LAB_01e701e4;
    }
    uVar7 = (**(code **)*puVar4)();
    puVar5 = (undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x131e0);
    goto joined_r0x01e701b8;
  case 0xb:
    if ((*(long *)(param_2 + 8) == 0) ||
       (uVar3 = *(uint *)(*(long *)(param_2 + 8) + 0x508), uVar3 == 0xffffffff)) {
LAB_01e70118:
      puVar4 = (undefined8 *)PTR_DAT_04bb37e0;
    }
    else {
      puVar12 = &DAT_053fe348 + (ulong)uVar3 * 0xba0;
      if (9 < uVar3) {
        puVar12 = &DAT_053fe348;
      }
      if (((byte)puVar12[0x6e8] >> 1 & 1) == 0) goto LAB_01e70118;
      if (*puVar20 != 0) {
        cVar17 = *PTR_DAT_04bc1560;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar13 = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
            *puVar11 = 1;
            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar13 + 4);
            if (-1 < (int)uVar3) {
              if ((ushort *)((ulong)uVar3 + (long)puVar20) != (ushort *)0x0) {
                uVar19 = *(ushort *)((ulong)uVar3 + (long)puVar20);
                goto LAB_01e70a44;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar16 = (uint *)(ulong)*puVar20;
          uVar19 = 0xfffe;
          if ((*puVar20 == 0) || (puVar20 == puVar16)) goto LAB_01e70a44;
          lVar8 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar16)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar20 + (lVar8 - (long)puVar16);
          if (lVar8 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar16));
          *(undefined4 *)(puVar13 + 4) = 0xfffffffe;
          if (uVar7 == 0) break;
          piVar9 = (int *)(lVar8 + 4);
          while (piVar9[-1] != -0x2650e1f) {
            piVar9 = piVar9 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_01e70a40;
          }
          iVar15 = 0;
          if (*piVar9 != -1) {
            iVar15 = *piVar9;
          }
          *(int *)(puVar13 + 4) = iVar15;
          if (*puVar20 == 0) break;
        } while( true );
      }
LAB_01e70a40:
      uVar19 = 0xfffe;
LAB_01e70a44:
      puVar4 = &local_60;
      local_60 = (undefined *)(ulong)uVar19;
      FUN_0277d4ac(&local_60);
    }
    local_60._0_4_ = *(undefined4 *)puVar4;
    local_60._4_4_ = *(undefined4 *)((long)puVar4 + 4);
    goto LAB_01e70a14;
  case 0xc:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar8 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_2 + 8) + 0x508)), lVar8 == 0))
    goto LAB_01e701dc;
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar4 == (undefined8 *)0x0)) {
      puVar5 = (undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x13188);
      goto LAB_01e701e4;
    }
    uVar7 = (**(code **)*puVar4)();
    puVar5 = (undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x13188);
    goto joined_r0x01e701b8;
  case 0xd:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar8 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_2 + 8) + 0x508)), lVar8 == 0))
    goto LAB_01e701dc;
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar4 == (undefined8 *)0x0)) {
      puVar5 = (undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x131b4);
      goto LAB_01e701e4;
    }
    uVar7 = (**(code **)*puVar4)();
    puVar5 = (undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x131b4);
joined_r0x01e701b8:
    if ((uVar7 & 1) != 0) {
      if (*(long *)(lVar8 + 0x28) != 0) {
        puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)();
        }
      }
    }
LAB_01e701e4:
    *(undefined2 *)param_1 = *puVar5;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar5 + 2);
    return;
  case 0xf:
    uVar3 = *param_3;
    if (uVar3 == 3) {
      local_60 = (undefined *)0x38cd;
    }
    else {
      if (uVar3 == 2) goto LAB_01e7091c;
      if (uVar3 == 1) {
        FUN_021e8a20(&local_60,*(undefined8 *)(param_2 + 8));
        break;
      }
      local_60 = (undefined *)0x1ce6;
    }
LAB_01e70888:
    FUN_0277d4ac(&local_60);
  }
LAB_01e70a14:
  *(undefined4 *)param_1 = (undefined4)local_60;
  *(undefined4 *)((long)param_1 + 4) = local_60._4_4_;
  return;
}

