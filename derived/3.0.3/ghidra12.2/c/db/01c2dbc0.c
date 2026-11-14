
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c2dbc0(long param_1)

{
  undefined *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  ushort uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  ulong uVar19;
  int *piVar20;
  int iVar21;
  undefined8 **ppuVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  undefined *local_d0;
  char *pcStack_c8;
  uint local_c0 [2];
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  uVar24 = 0;
  iVar23 = 0;
LAB_01c2dc24:
  while( true ) {
    uVar11 = *(uint *)(param_1 + 0x9d0);
    if ((int)uVar11 < 1) break;
    if (uVar11 <= uVar24) goto LAB_01c2e0c4;
LAB_01c2dc64:
    if (uVar11 <= uVar24) goto LAB_01c2dc20;
    uVar15 = uVar24 & 0xffffffff;
    if (*(uint *)(param_1 + 0x9c0) <= uVar24) {
      uVar15 = 0;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x9c8) + uVar15 * 8);
joined_r0x01c2ddb0:
    if (puVar8 == (uint *)0x0) goto LAB_01c2dc20;
    if (*puVar8 != 0) {
      cVar10 = DAT_0534bc48;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534bc4c = 0xffffffffffffffff;
          DAT_0534bc54 = -1;
          DAT_0534bc48 = '\x01';
          DAT_0534bc7c = 0xffffffff;
          DAT_0534bc5c = 0xffffffffffffffff;
          DAT_0534bc64 = 0xffffffffffffffff;
          DAT_0534bc6c = 0xffffffffffffffff;
          DAT_0534bc74 = 0xffffffffffffffff;
        }
        else {
          if (-1 < DAT_0534bc54) {
            if ((ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar8) != (ushort *)0x0) {
              uVar13 = *(ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar8);
              goto LAB_01c2ddd4;
            }
            break;
          }
          if (DAT_0534bc54._4_4_ != 0xffffffff) break;
        }
        puVar16 = (uint *)(ulong)*puVar8;
        uVar13 = 0xfffe;
        if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2ddd4;
        lVar26 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar8 + (lVar26 - (long)puVar16);
        if (lVar26 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
        DAT_0534bc54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc54);
        if (uVar15 == 0) break;
        piVar18 = (int *)(lVar26 + 4);
        while (piVar18[-1] != -0x4fd0f3e9) {
          piVar18 = piVar18 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_01c2ddd0;
        }
        iVar25 = 0;
        if (*piVar18 != -1) {
          iVar25 = *piVar18;
        }
        DAT_0534bc54 = CONCAT44(iVar25,(undefined4)DAT_0534bc54);
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_01c2ddd0:
    uVar13 = 0xfffe;
LAB_01c2ddd4:
    local_b8 = (ulong)uVar13;
    FUN_0277d4ac(&local_b8);
    if (*puVar8 != 0) {
      cVar10 = DAT_0534bc48;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534bc4c = 0xffffffffffffffff;
          DAT_0534bc54 = -1;
          DAT_0534bc48 = '\x01';
          DAT_0534bc7c = 0xffffffff;
          DAT_0534bc5c = 0xffffffffffffffff;
          DAT_0534bc64 = 0xffffffffffffffff;
          DAT_0534bc6c = 0xffffffffffffffff;
          DAT_0534bc74 = 0xffffffffffffffff;
        }
        else {
          if (-1 < (int)DAT_0534bc5c) {
            puVar2 = (ushort *)((DAT_0534bc5c & 0xffffffff) + (long)puVar8);
            if (puVar2 != (ushort *)0x0) {
              uVar13 = *puVar2;
              goto LAB_01c2dec4;
            }
            break;
          }
          if ((int)DAT_0534bc5c != -1) break;
        }
        puVar16 = (uint *)(ulong)*puVar8;
        uVar13 = 0xfffe;
        if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2dec4;
        lVar26 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar8 + (lVar26 - (long)puVar16);
        if (lVar26 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
        DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,0xfffffffe);
        if (uVar15 == 0) break;
        piVar18 = (int *)(lVar26 + 4);
        while (piVar18[-1] != -0x8708939) {
          piVar18 = piVar18 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_01c2dec0;
        }
        iVar25 = 0;
        if (*piVar18 != -1) {
          iVar25 = *piVar18;
        }
        DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,iVar25);
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_01c2dec0:
    uVar13 = 0xfffe;
LAB_01c2dec4:
    local_d0 = (undefined *)(ulong)uVar13;
    FUN_0277d4ac(&local_d0);
    if (*puVar8 != 0) {
      cVar10 = DAT_0534bc48;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_0534bc4c = 0xffffffffffffffff;
          DAT_0534bc54 = -1;
          DAT_0534bc48 = '\x01';
          DAT_0534bc7c = 0xffffffff;
          DAT_0534bc5c = 0xffffffffffffffff;
          DAT_0534bc64 = 0xffffffffffffffff;
          DAT_0534bc6c = 0xffffffffffffffff;
          DAT_0534bc74 = 0xffffffffffffffff;
        }
        else {
          if (-1 < (long)DAT_0534bc5c) {
            if ((undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar8) != (undefined2 *)0x0) {
              local_68 = *(undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar8);
              goto LAB_01c2dfb4;
            }
            break;
          }
          if (DAT_0534bc5c._4_4_ != 0xffffffff) break;
        }
        puVar16 = (uint *)(ulong)*puVar8;
        local_68 = 0xfffe;
        if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2dfb4;
        lVar26 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar8 + (lVar26 - (long)puVar16);
        if (lVar26 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
        DAT_0534bc5c = CONCAT44(0xfffffffe,(int)DAT_0534bc5c);
        if (uVar15 == 0) break;
        piVar18 = (int *)(lVar26 + 4);
        while (piVar18[-1] != -0x3510a089) {
          piVar18 = piVar18 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_01c2dfb0;
        }
        iVar25 = 0;
        if (*piVar18 != -1) {
          iVar25 = *piVar18;
        }
        DAT_0534bc5c = CONCAT44(iVar25,(int)DAT_0534bc5c);
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_01c2dfb0:
    local_68 = 0xfffe;
LAB_01c2dfb4:
    local_66 = 0;
    local_64 = 0;
    uVar9 = FUN_0277d4ac(&local_68);
    uVar15 = FUN_01c27f3c(uVar9,&local_b8,0);
    if (((uVar15 & 1) == 0) && (uVar15 = FUN_01c27f3c(uVar15,&local_d0,0), (uVar15 & 1) == 0)) {
      uVar15 = FUN_01c27f3c(uVar15,&local_68,0);
      bVar5 = false;
      if ((uVar15 & 1) != 0) goto LAB_01c2e000;
    }
    else {
LAB_01c2e000:
      bVar5 = true;
    }
    uVar11 = *puVar8;
    local_c0[0] = 0;
    if ((uVar11 != 0) && (puVar8 != (uint *)(ulong)uVar11)) {
      puVar16 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
      local_c0[0] = 0;
      if (*puVar16 != 0) {
        uVar11 = puVar16[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar26 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar26 = 0x1c;
          }
          lVar26 = (long)puVar16 + lVar26 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar26 != 0) {
            uVar17 = 0;
            if ((ulong)uVar11 != 0) {
              uVar17 = (uint)((ulong)((long)puVar8 - lVar26) / (ulong)uVar11);
            }
            if (*puVar16 <= uVar17) {
              uVar17 = 0xffffffff;
            }
            if ((uVar17 < DAT_0534bc38) &&
               (local_c0[0] = (uint)*(ushort *)(DAT_0534bc40 + (long)(int)uVar17 * 2),
               local_c0[0] < 10)) goto LAB_01c2e0a4;
          }
        }
        local_c0[0] = 0;
      }
    }
LAB_01c2e0a4:
    if (local_c0[0] != 9) goto LAB_01c2dc20;
    if (!bVar5) {
      iVar23 = iVar23 + 1;
      goto LAB_01c2dc20;
    }
    iVar23 = iVar23 + 4;
    uVar24 = uVar24 + 1;
  }
  uVar15 = 0;
  if (*(long *)(param_1 + 0x8c0) != 0) {
    puVar8 = *(uint **)(*(long *)(param_1 + 0x8c0) + 8);
    uVar15 = 0;
    if (puVar8 != (uint *)0x0) {
      uVar15 = (ulong)*puVar8;
    }
  }
  if (uVar24 < uVar15) {
    if (0 < (int)uVar11) goto LAB_01c2dc64;
    if ((((*(long *)(param_1 + 0x8c0) != 0) &&
         (puVar8 = *(uint **)(*(long *)(param_1 + 0x8c0) + 8), puVar8 != (uint *)0x0)) &&
        ((*(uint *)(param_1 + 0x8d8) <= uVar24 ||
         (*(char *)(*(long *)(param_1 + 0x8e0) + uVar24) != '\0')))) &&
       (((uVar24 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
      iVar25 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar25 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * (int)uVar24 + (uint)(ushort)puVar8[2] * 8 + iVar25) +
                       (long)puVar8);
      goto joined_r0x01c2ddb0;
    }
LAB_01c2dc20:
    uVar24 = uVar24 + 1;
    goto LAB_01c2dc24;
  }
LAB_01c2e0c4:
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_b0 = (undefined8 **)0x0;
  local_90 = &local_88;
  puStack_a0 = &local_98;
  local_88 = 0;
  local_a8 = puStack_a0;
  local_98 = &local_90;
  if (&local_80 != (undefined8 **)0x0) {
    local_98 = (undefined8 *)CONCAT44((int)((ulong)&local_90 >> 0x20),0xffffffff);
    local_b8._4_4_ = 3;
    local_a8 = &local_90;
    if (&local_90 != (undefined8 *)0x0) {
      local_a8 = local_90;
    }
    puVar6 = local_a8;
    uVar24 = (ulong)local_90 >> 0x20;
    local_90 = (undefined8 *)CONCAT44((int)uVar24,0xffffffff);
    local_78 = &local_90;
    if (local_a8 != (undefined8 *)0x0) {
      local_a8 = (undefined8 *)*local_a8;
    }
    local_80 = puStack_a0;
    *(undefined4 *)puVar6 = 0xffffffff;
    local_70 = puVar6;
    local_b8._0_4_ = 3;
    local_b0 = &local_80;
  }
  lVar26 = 0;
LAB_01c2e1bc:
  if (iVar23 < 1) {
    iVar25 = 0;
  }
  else {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar17 = puVar8[3];
    uVar11 = *puVar8 ^ *puVar8 << 0xb;
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar11 = uVar11 >> 8 ^ uVar17 >> 0x13 ^ uVar11 ^ uVar17;
    puVar8[2] = uVar17;
    puVar8[3] = uVar11;
    iVar25 = (int)((ulong)uVar11 * (ulong)(iVar23 + 1) >> 0x20);
  }
  uVar24 = 0;
  iVar7 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x9d0) < 1) {
      lVar12 = *(long *)(param_1 + 0x8c0);
      if (lVar12 == 0) break;
      uVar15 = 0;
      if (*(uint **)(lVar12 + 8) != (uint *)0x0) {
        uVar15 = (ulong)**(uint **)(lVar12 + 8);
      }
      if (uVar15 <= uVar24) break;
      if (((lVar12 != 0) && (puVar8 = *(uint **)(lVar12 + 8), puVar8 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 0x8d8) <= uVar24 ||
           (*(char *)(*(long *)(param_1 + 0x8e0) + uVar24) != '\0')) &&
          (((uVar24 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))))) {
        iVar21 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar21 = 0x1c;
        }
        puVar8 = (uint *)((ulong)(puVar8[1] * (int)uVar24 + (uint)(ushort)puVar8[2] * 8 + iVar21) +
                         (long)puVar8);
        goto joined_r0x01c2e3e8;
      }
    }
    else {
      if (*(uint *)(param_1 + 0x9d0) <= uVar24) break;
      uVar15 = uVar24 & 0xffffffff;
      if (*(uint *)(param_1 + 0x9c0) <= uVar24) {
        uVar15 = 0;
      }
      puVar8 = *(uint **)(*(long *)(param_1 + 0x9c8) + uVar15 * 8);
joined_r0x01c2e3e8:
      if (puVar8 != (uint *)0x0) {
        uVar11 = *puVar8;
        if (uVar11 == 0 || puVar8 == (uint *)(ulong)uVar11) {
LAB_01c2e288:
          uVar11 = 0;
        }
        else {
          puVar16 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
          uVar11 = 0;
          if (*puVar16 != 0) {
            uVar11 = puVar16[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar16 + lVar12 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar12 != 0) {
                uVar17 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar17 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar11);
                }
                if (*puVar16 <= uVar17) {
                  uVar17 = 0xffffffff;
                }
                if ((uVar17 < DAT_0534bc38) &&
                   (uVar11 = (uint)*(ushort *)(DAT_0534bc40 + (long)(int)uVar17 * 2), uVar11 < 10))
                goto LAB_01c2e28c;
              }
            }
            goto LAB_01c2e288;
          }
        }
LAB_01c2e28c:
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar11);
        if ((uVar11 == 9) && (0 < iVar23)) {
          if (*puVar8 == 0) {
LAB_01c2e470:
            uVar11 = 0;
          }
          else {
            cVar10 = DAT_0534bc48;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                DAT_0534bc4c = 0xffffffffffffffff;
                DAT_0534bc54 = -1;
                DAT_0534bc48 = '\x01';
                DAT_0534bc7c = 0xffffffff;
                DAT_0534bc5c = 0xffffffffffffffff;
                DAT_0534bc64 = 0xffffffffffffffff;
                DAT_0534bc6c = 0xffffffffffffffff;
                DAT_0534bc74 = 0xffffffffffffffff;
              }
              else {
                if (-1 < (int)DAT_0534bc6c) {
                  pbVar4 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar8);
                  if (pbVar4 == (byte *)0x0) goto LAB_01c2e470;
                  uVar11 = (uint)*pbVar4;
                  goto LAB_01c2e474;
                }
                if ((int)DAT_0534bc6c != -1) goto LAB_01c2e470;
              }
              puVar16 = (uint *)(ulong)*puVar8;
              uVar11 = 0;
              if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2e474;
              lVar12 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar8 + (lVar12 - (long)puVar16);
              if (lVar12 == 0) goto LAB_01c2e470;
              uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
              uVar11 = 0;
              if (uVar15 == 0) goto LAB_01c2e474;
              piVar18 = (int *)(lVar12 + 4);
              while (piVar18[-1] != -0x56f47f82) {
                piVar18 = piVar18 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) {
                  uVar11 = 0;
                  goto LAB_01c2e474;
                }
              }
              iVar21 = 0;
              if (*piVar18 != -1) {
                iVar21 = *piVar18;
              }
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar21);
            } while (*puVar8 != 0);
            uVar11 = 0;
          }
LAB_01c2e474:
          if (*(uint *)*local_b0 != uVar11) {
            if (*puVar8 == 0) {
LAB_01c2e54c:
              uVar11 = 0;
            }
            else {
              cVar10 = DAT_0534bc48;
              do {
                if (cVar10 == '\0') {
                  cVar10 = '\x01';
                  DAT_0534bc4c = 0xffffffffffffffff;
                  DAT_0534bc54 = -1;
                  DAT_0534bc48 = '\x01';
                  DAT_0534bc7c = 0xffffffff;
                  DAT_0534bc5c = 0xffffffffffffffff;
                  DAT_0534bc64 = 0xffffffffffffffff;
                  DAT_0534bc6c = 0xffffffffffffffff;
                  DAT_0534bc74 = 0xffffffffffffffff;
                }
                else {
                  if (-1 < (int)DAT_0534bc6c) {
                    pbVar4 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar8);
                    if (pbVar4 == (byte *)0x0) goto LAB_01c2e54c;
                    uVar11 = (uint)*pbVar4;
                    goto LAB_01c2e550;
                  }
                  if ((int)DAT_0534bc6c != -1) goto LAB_01c2e54c;
                }
                puVar16 = (uint *)(ulong)*puVar8;
                uVar11 = 0;
                if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2e550;
                lVar12 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar8 + (lVar12 - (long)puVar16);
                if (lVar12 == 0) goto LAB_01c2e54c;
                uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                uVar11 = 0;
                if (uVar15 == 0) goto LAB_01c2e550;
                piVar18 = (int *)(lVar12 + 4);
                while (piVar18[-1] != -0x56f47f82) {
                  piVar18 = piVar18 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) {
                    uVar11 = 0;
                    goto LAB_01c2e550;
                  }
                }
                iVar21 = 0;
                if (*piVar18 != -1) {
                  iVar21 = *piVar18;
                }
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar21);
              } while (*puVar8 != 0);
              uVar11 = 0;
            }
LAB_01c2e550:
            if (*(uint *)local_b0[1] != uVar11) {
              if (*puVar8 == 0) {
LAB_01c2e62c:
                uVar11 = 0;
              }
              else {
                cVar10 = DAT_0534bc48;
                do {
                  if (cVar10 == '\0') {
                    cVar10 = '\x01';
                    DAT_0534bc4c = 0xffffffffffffffff;
                    DAT_0534bc54 = -1;
                    DAT_0534bc48 = '\x01';
                    DAT_0534bc7c = 0xffffffff;
                    DAT_0534bc5c = 0xffffffffffffffff;
                    DAT_0534bc64 = 0xffffffffffffffff;
                    DAT_0534bc6c = 0xffffffffffffffff;
                    DAT_0534bc74 = 0xffffffffffffffff;
                  }
                  else {
                    if (-1 < (int)DAT_0534bc6c) {
                      pbVar4 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar8);
                      if (pbVar4 == (byte *)0x0) goto LAB_01c2e62c;
                      uVar11 = (uint)*pbVar4;
                      goto LAB_01c2e630;
                    }
                    if ((int)DAT_0534bc6c != -1) goto LAB_01c2e62c;
                  }
                  puVar16 = (uint *)(ulong)*puVar8;
                  uVar11 = 0;
                  if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2e630;
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar8 + (lVar12 - (long)puVar16);
                  if (lVar12 == 0) goto LAB_01c2e62c;
                  uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                  uVar11 = 0;
                  if (uVar15 == 0) goto LAB_01c2e630;
                  piVar18 = (int *)(lVar12 + 4);
                  while (piVar18[-1] != -0x56f47f82) {
                    piVar18 = piVar18 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) {
                      uVar11 = 0;
                      goto LAB_01c2e630;
                    }
                  }
                  iVar21 = 0;
                  if (*piVar18 != -1) {
                    iVar21 = *piVar18;
                  }
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar21);
                } while (*puVar8 != 0);
                uVar11 = 0;
              }
LAB_01c2e630:
              if ((*(uint *)local_b0[2] != uVar11) && (*(int *)local_b0[lVar26] == -1)) {
                if (*puVar8 != 0) {
                  cVar10 = DAT_0534bc48;
                  do {
                    if (cVar10 == '\0') {
                      cVar10 = '\x01';
                      DAT_0534bc4c = 0xffffffffffffffff;
                      DAT_0534bc54 = -1;
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < DAT_0534bc54) {
                        if ((ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar8) != (ushort *)0x0) {
                          uVar13 = *(ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar8);
                          goto LAB_01c2e724;
                        }
                        break;
                      }
                      if (DAT_0534bc54._4_4_ != 0xffffffff) break;
                    }
                    puVar16 = (uint *)(ulong)*puVar8;
                    uVar13 = 0xfffe;
                    if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2e724;
                    lVar12 = 0xc;
                    if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
                      lVar12 = 0x1c;
                    }
                    lVar12 = (long)puVar8 + (lVar12 - (long)puVar16);
                    if (lVar12 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
                    DAT_0534bc54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc54);
                    if (uVar15 == 0) break;
                    piVar18 = (int *)(lVar12 + 4);
                    while (piVar18[-1] != -0x4fd0f3e9) {
                      piVar18 = piVar18 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_01c2e720;
                    }
                    iVar21 = 0;
                    if (*piVar18 != -1) {
                      iVar21 = *piVar18;
                    }
                    DAT_0534bc54 = CONCAT44(iVar21,(undefined4)DAT_0534bc54);
                    if (*puVar8 == 0) break;
                  } while( true );
                }
LAB_01c2e720:
                uVar13 = 0xfffe;
LAB_01c2e724:
                local_d0 = (undefined *)(ulong)uVar13;
                uVar9 = FUN_0277d4ac(&local_d0);
                uVar15 = FUN_01c27f3c(uVar9,&local_d0,0);
                if ((uVar15 & 1) == 0) {
                  if (*puVar8 != 0) {
                    cVar10 = DAT_0534bc48;
                    do {
                      if (cVar10 == '\0') {
                        cVar10 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc5c) {
                          puVar3 = (undefined2 *)((DAT_0534bc5c & 0xffffffff) + (long)puVar8);
                          if (puVar3 != (undefined2 *)0x0) {
                            local_68 = *puVar3;
                            goto LAB_01c2e830;
                          }
                          break;
                        }
                        if ((int)DAT_0534bc5c != -1) break;
                      }
                      puVar16 = (uint *)(ulong)*puVar8;
                      local_68 = 0xfffe;
                      if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2e830;
                      lVar12 = 0xc;
                      if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
                        lVar12 = 0x1c;
                      }
                      lVar12 = (long)puVar8 + (lVar12 - (long)puVar16);
                      if (lVar12 == 0) break;
                      uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,0xfffffffe);
                      if (uVar15 == 0) break;
                      piVar18 = (int *)(lVar12 + 4);
                      while (piVar18[-1] != -0x8708939) {
                        piVar18 = piVar18 + 2;
                        uVar15 = uVar15 - 1;
                        if (uVar15 == 0) goto LAB_01c2e82c;
                      }
                      iVar21 = 0;
                      if (*piVar18 != -1) {
                        iVar21 = *piVar18;
                      }
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,iVar21);
                      if (*puVar8 == 0) break;
                    } while( true );
                  }
LAB_01c2e82c:
                  local_68 = 0xfffe;
LAB_01c2e830:
                  local_66 = 0;
                  local_64 = 0;
                  uVar9 = FUN_0277d4ac(&local_68);
                  uVar15 = FUN_01c27f3c(uVar9,&local_68,0);
                  if ((uVar15 & 1) != 0) goto LAB_01c2e964;
                  if (*puVar8 != 0) {
                    cVar10 = DAT_0534bc48;
                    do {
                      if (cVar10 == '\0') {
                        cVar10 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (long)DAT_0534bc5c) {
                          if ((ushort *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar8) != (ushort *)0x0)
                          {
                            uVar13 = *(ushort *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar8);
                            goto LAB_01c2e940;
                          }
                          break;
                        }
                        if (DAT_0534bc5c._4_4_ != 0xffffffff) break;
                      }
                      puVar16 = (uint *)(ulong)*puVar8;
                      uVar13 = 0xfffe;
                      if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2e940;
                      lVar12 = 0xc;
                      if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
                        lVar12 = 0x1c;
                      }
                      lVar12 = (long)puVar8 + (lVar12 - (long)puVar16);
                      if (lVar12 == 0) break;
                      uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
                      DAT_0534bc5c = CONCAT44(0xfffffffe,(int)DAT_0534bc5c);
                      if (uVar15 == 0) break;
                      piVar18 = (int *)(lVar12 + 4);
                      while (piVar18[-1] != -0x3510a089) {
                        piVar18 = piVar18 + 2;
                        uVar15 = uVar15 - 1;
                        if (uVar15 == 0) goto LAB_01c2e93c;
                      }
                      iVar21 = 0;
                      if (*piVar18 != -1) {
                        iVar21 = *piVar18;
                      }
                      DAT_0534bc5c = CONCAT44(iVar21,(int)DAT_0534bc5c);
                      if (*puVar8 == 0) break;
                    } while( true );
                  }
LAB_01c2e93c:
                  uVar13 = 0xfffe;
LAB_01c2e940:
                  local_c0[0] = (uint)uVar13;
                  local_c0[1] = 0;
                  uVar9 = FUN_0277d4ac(local_c0);
                  uVar15 = FUN_01c27f3c(uVar9,local_c0,0);
                  if ((uVar15 & 1) != 0) goto LAB_01c2e964;
                  iVar14 = 1;
                  iVar21 = -1;
                }
                else {
LAB_01c2e964:
                  iVar21 = -4;
                  iVar14 = 4;
                }
                iVar7 = iVar14 + iVar7;
                if (iVar25 <= iVar7) {
                  if (*puVar8 == 0) {
LAB_01c2e230:
                    uVar11 = 0;
                  }
                  else {
                    cVar10 = DAT_0534bc48;
                    do {
                      if (cVar10 == '\0') {
                        cVar10 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc6c) {
                          pbVar4 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar8);
                          if (pbVar4 == (byte *)0x0) goto LAB_01c2e230;
                          uVar11 = (uint)*pbVar4;
                          goto LAB_01c2e234;
                        }
                        if ((int)DAT_0534bc6c != -1) goto LAB_01c2e230;
                      }
                      puVar16 = (uint *)(ulong)*puVar8;
                      uVar11 = 0;
                      if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01c2e234;
                      lVar12 = 0xc;
                      if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
                        lVar12 = 0x1c;
                      }
                      lVar12 = (long)puVar8 + (lVar12 - (long)puVar16);
                      if (lVar12 == 0) goto LAB_01c2e230;
                      uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                      uVar11 = 0;
                      if (uVar15 == 0) goto LAB_01c2e234;
                      piVar18 = (int *)(lVar12 + 4);
                      while (piVar18[-1] != -0x56f47f82) {
                        piVar18 = piVar18 + 2;
                        uVar15 = uVar15 - 1;
                        if (uVar15 == 0) {
                          uVar11 = 0;
                          goto LAB_01c2e234;
                        }
                      }
                      iVar14 = 0;
                      if (*piVar18 != -1) {
                        iVar14 = *piVar18;
                      }
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar14);
                    } while (*puVar8 != 0);
                    uVar11 = 0;
                  }
LAB_01c2e234:
                  iVar23 = iVar21 + iVar23;
                  *(uint *)local_b0[lVar26] = uVar11;
                }
              }
            }
          }
        }
      }
    }
    uVar24 = uVar24 + 1;
  } while( true );
  lVar26 = lVar26 + 1;
  if (lVar26 == 3) goto LAB_01c2ea68;
  goto LAB_01c2e1bc;
LAB_01c2ea68:
  if (1 < (int)local_b8) {
    uVar17 = 0;
    uVar11 = (int)local_b8 - 1;
    do {
      if ((int)uVar11 <= (int)uVar17) break;
      piVar18 = (int *)local_b0[uVar17];
      uVar24 = (ulong)uVar17;
      if ((uVar11 - uVar17 & 1) == 0) {
        piVar20 = piVar18;
        uVar15 = uVar24;
      }
      else {
        uVar15 = uVar24 + 1;
        piVar20 = (int *)local_b0[uVar15];
        if (*piVar20 < *piVar18) {
          local_b0[uVar15] = (undefined8 *)piVar18;
          local_b0[uVar24] = (undefined8 *)piVar20;
          piVar20 = piVar18;
        }
      }
      uVar19 = (ulong)uVar11;
      uVar11 = uVar17;
      if (~uVar24 + uVar19 != 0) {
        ppuVar22 = local_b0 + uVar15 + 1;
        do {
          piVar18 = (int *)*ppuVar22;
          if (*piVar18 < *piVar20) {
            ppuVar22[-1] = (undefined8 *)piVar18;
            *ppuVar22 = (undefined8 *)piVar20;
            uVar11 = (uint)uVar15;
          }
          else {
            piVar20 = piVar18;
          }
          piVar18 = (int *)ppuVar22[1];
          if (*piVar18 < *piVar20) {
            uVar11 = (uint)uVar15 + 1;
            *ppuVar22 = (undefined8 *)piVar18;
            ppuVar22[1] = (undefined8 *)piVar20;
          }
          else {
            piVar20 = piVar18;
          }
          uVar15 = uVar15 + 2;
          ppuVar22 = ppuVar22 + 2;
        } while (uVar19 != uVar15);
      }
      if ((int)uVar11 <= (int)uVar17) break;
      piVar18 = (int *)local_b0[uVar11];
      uVar15 = (ulong)uVar11;
      uVar17 = uVar11;
      do {
        piVar20 = (int *)local_b0[uVar15 - 1];
        if (*piVar18 < *piVar20) {
          uVar17 = (uint)uVar15;
          local_b0[uVar15 - 1] = (undefined8 *)piVar18;
          local_b0[uVar15] = (undefined8 *)piVar20;
        }
        else {
          piVar18 = piVar20;
        }
        uVar15 = uVar15 - 1;
      } while ((long)uVar24 < (long)uVar15);
    } while (uVar17 != uVar11);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_c8 = s_MuseumArtStampRackLotID1_04a40f70;
  local_d0 = puVar1;
  FUN_0273f3c4(&local_d0,*(undefined4 *)*local_b0);
  pcStack_c8 = s_MuseumArtStampRackLotID2_04a40f8b;
  local_d0 = puVar1;
  FUN_0273f3c4(&local_d0,*(undefined4 *)local_b0[1]);
  pcStack_c8 = s_MuseumArtStampRackLotID3_04a40fa6;
  local_d0 = puVar1;
  FUN_0273f3c4(&local_d0,*(undefined4 *)local_b0[2]);
  return;
}

