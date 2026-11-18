
undefined8 FUN_032d79e0(long *param_1,ushort *param_2,uint *param_3,float *param_4)

{
  undefined *puVar1;
  ushort *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined **ppuVar9;
  int iVar10;
  ushort *puVar11;
  uint *puVar12;
  undefined **ppuVar13;
  ushort *puVar14;
  ushort *puVar15;
  undefined **ppuVar16;
  uint uVar17;
  ushort *puVar18;
  ushort uVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined *local_2320;
  ushort *local_2318;
  undefined *local_2310;
  undefined **local_2308;
  int local_2300;
  undefined *local_22f8;
  ushort *local_22f0;
  undefined2 local_2fa;
  uint *local_2f8;
  undefined8 local_2f0;
  uint local_2e8;
  uint local_2e0 [128];
  undefined1 auStack_e0 [40];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined8 local_88;
  
  plVar23 = (long *)PTR_DAT_04bc9198;
  plVar21 = (long *)PTR_DAT_04bc6338;
  plVar3 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar3 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  lVar5 = (**(code **)(*plVar3 + 0x10))();
  *(undefined1 *)(lVar5 + 0x18) = 0;
  FUN_00358b98(auStack_e0);
  local_b8 = FUN_0038a89c(*param_1);
  FUN_00350090(*(undefined4 *)(*param_1 + 0xf8),*(undefined4 *)(*param_1 + 0xfc),auStack_e0);
  lVar5 = *param_1;
  puVar11 = (ushort *)PTR_DAT_04bb2da0;
  if (param_2 != (ushort *)0x0) {
    puVar11 = param_2;
  }
  local_88 = *(undefined8 *)(lVar5 + 0x108);
  local_9c = *(float *)(lVar5 + 0x100);
  local_a0 = *(undefined4 *)(lVar5 + 0x104);
  local_b0 = *(undefined8 *)(lVar5 + 0x148);
  uVar19 = *puVar11;
  local_a4 = *(undefined4 *)(lVar5 + 0x50);
  if (uVar19 == 0) {
    iVar27 = 0;
    iVar20 = 0;
  }
  else {
    iVar20 = 0;
    iVar27 = 0;
    puVar14 = puVar11;
    do {
      puVar15 = puVar14;
      puVar18 = puVar14;
      while ((uVar19 & 0xfffe) != 0xe) {
        puVar15 = puVar15 + 1;
        uVar19 = *puVar15;
        iVar20 = iVar20 + 1;
        puVar18 = puVar18 + 1;
        if (uVar19 == 0) goto LAB_032d7b48;
      }
      if (uVar19 == 0xe) {
        puVar14 = (ushort *)((long)puVar18 + (ulong)puVar15[3] + 8);
      }
      else {
        puVar2 = puVar15;
        puVar14 = puVar18 + 3;
        if (uVar19 != 0xf) {
          puVar2 = (ushort *)0x0;
          puVar14 = puVar15;
        }
        puVar15 = puVar2;
      }
      iVar27 = iVar27 + ((uint)((int)puVar14 - (int)puVar18) >> 1 & 0xffff);
      if ((puVar15[1] == 0) && (puVar15[2] == 0)) {
        iVar20 = (uint)(puVar15[5] >> 1) + iVar20;
        iVar27 = iVar27 - (uint)(puVar15[5] >> 1);
      }
      uVar19 = *puVar14;
    } while (uVar19 != 0);
  }
LAB_032d7b48:
  uVar25 = iVar20 + iVar27 & 0xffff;
  fVar32 = (float)FUN_00358eb0(auStack_e0,param_2,uVar25);
  fVar34 = *(float *)(*param_1 + 0x54);
  fVar33 = (float)FUN_00350128(auStack_e0);
  if (fVar34 < fVar33) {
    fVar34 = (float)FUN_00350128(auStack_e0);
  }
  if (fVar34 < fVar32) {
    local_2e8 = 0;
    local_2f8 = local_2e0;
    local_2f0 = 0x40;
    local_22f8 = PTR_DAT_04bc8e78 + 0x10;
    local_22f0 = puVar11;
    FUN_032dde90(&local_2f8,&local_22f8);
    memset(&local_22f8,0,0x1ffe);
    local_2310 = PTR_DAT_04bb4ca0 + 0x10;
    local_2300 = 0x1000;
    local_2fa = 0;
    local_2308 = &local_22f8;
    if (uVar25 != 0) {
      uVar31 = 0;
      puVar1 = PTR_DAT_04bb8610 + 0x10;
      do {
        ppuVar9 = local_2308;
        local_2318 = param_2 + (int)uVar31;
        uVar19 = *local_2318;
        if ((uVar19 & 0xfffe) == 0xe) {
          if (uVar19 == 0xe) {
            puVar11 = (ushort *)((long)local_2318 + (ulong)local_2318[3] + 8);
          }
          else if (uVar19 == 0xf) {
            puVar11 = local_2318 + 3;
          }
          else {
            puVar11 = local_2318;
          }
          uVar29 = (ulong)((long)puVar11 - (long)local_2318) >> 1;
          local_2320 = puVar1;
          (**(code **)(local_2310 + 0x18))(&local_2310);
          lVar5 = 0;
          do {
            if (*(short *)((long)local_2308 + lVar5 * 2) == 0) goto LAB_032d7da0;
            if (*(short *)((long)local_2308 + (lVar5 + 1) * 2) == 0) {
              lVar5 = lVar5 + 1;
              goto LAB_032d7da0;
            }
            if (*(short *)((long)local_2308 + (lVar5 + 2) * 2) == 0) {
              lVar5 = lVar5 + 2;
              goto LAB_032d7da0;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_032d7da0:
          iVar20 = (int)lVar5;
          iVar27 = iVar20 + uVar31;
          if (iVar27 < 0 != SCARRY4(iVar20,uVar31)) {
            iVar27 = -1;
          }
          uVar6 = uVar31;
          if ((int)uVar31 < 0) {
            uVar6 = iVar27 + 1;
          }
          uVar8 = uVar29 & 0xffffffff;
          iVar27 = (int)uVar29;
          if (iVar27 < 0) {
            (**(code **)(local_2320 + 0x18))(&local_2320);
            uVar8 = 0;
            do {
              if (local_2318[uVar8] == 0) goto LAB_032d7db8;
              if (local_2318[uVar8 + 1] == 0) {
                uVar8 = uVar8 + 1;
                goto LAB_032d7db8;
              }
              if (local_2318[uVar8 + 2] == 0) {
                uVar8 = uVar8 + 2;
                goto LAB_032d7db8;
              }
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
            uVar8 = 0;
          }
LAB_032d7db8:
          uVar26 = (uint)uVar8;
          if ((int)(local_2300 - uVar6) <= (int)(uint)uVar8) {
            uVar26 = local_2300 + ~uVar6;
          }
          if (0 < (int)uVar26) {
            (**(code **)(local_2320 + 0x18))(&local_2320);
            memcpy((short *)((long)ppuVar9 + (long)(int)uVar6 * 2),local_2318,(ulong)uVar26 << 1);
            if (iVar20 < (int)(uVar26 + uVar6)) {
              *(short *)((long)ppuVar9 + (long)(int)(uVar26 + uVar6) * 2) = 0;
            }
          }
          uVar31 = (uVar31 + iVar27) - 1;
        }
        else {
          local_2320 = PTR_DAT_04bb8610 + 0x10;
          (**(code **)(local_2310 + 0x18))(&local_2310);
          lVar5 = 0;
          do {
            if (*(short *)((long)local_2308 + lVar5 * 2) == 0) goto LAB_032d7d34;
            if (*(short *)((long)local_2308 + (lVar5 + 1) * 2) == 0) {
              lVar5 = lVar5 + 1;
              goto LAB_032d7d34;
            }
            if (*(short *)((long)local_2308 + (lVar5 + 2) * 2) == 0) {
              lVar5 = lVar5 + 2;
              goto LAB_032d7d34;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_032d7d34:
          iVar20 = (int)lVar5;
          iVar27 = iVar20 + uVar31;
          if (iVar27 < 0 != SCARRY4(iVar20,uVar31)) {
            iVar27 = -1;
          }
          uVar6 = uVar31;
          if ((int)uVar31 < 0) {
            uVar6 = iVar27 + 1;
          }
          uVar26 = local_2300 + ~uVar6;
          if (1 < (int)(local_2300 - uVar6)) {
            uVar26 = 1;
          }
          if (0 < (int)uVar26) {
            (**(code **)(local_2320 + 0x18))(&local_2320);
            memcpy((short *)((long)ppuVar9 + (long)(int)uVar6 * 2),local_2318,(ulong)uVar26 << 1);
            if (iVar20 < (int)(uVar26 + uVar6)) {
              *(short *)((long)ppuVar9 + (long)(int)(uVar26 + uVar6) * 2) = 0;
            }
          }
        }
        (**(code **)(local_2310 + 0x18))(&local_2310);
        uVar19 = *(ushort *)local_2308;
        if (uVar19 == 0) {
          iVar27 = 0;
          iVar20 = 0;
        }
        else {
          iVar20 = 0;
          iVar27 = 0;
          ppuVar9 = local_2308;
          do {
            ppuVar13 = ppuVar9;
            ppuVar16 = ppuVar9;
            while ((uVar19 & 0xfffe) != 0xe) {
              ppuVar13 = (undefined **)((long)ppuVar13 + 2);
              uVar19 = *(ushort *)ppuVar13;
              iVar20 = iVar20 + 1;
              ppuVar16 = (undefined **)((long)ppuVar16 + 2);
              if (uVar19 == 0) goto LAB_032d7ed8;
            }
            if (uVar19 == 0xe) {
              ppuVar9 = (undefined **)((long)ppuVar16 + (ulong)*(ushort *)((long)ppuVar13 + 6) + 8);
            }
            else {
              ppuVar4 = ppuVar13;
              ppuVar9 = (undefined **)((long)ppuVar16 + 6);
              if (uVar19 != 0xf) {
                ppuVar4 = (undefined **)0x0;
                ppuVar9 = ppuVar13;
              }
              ppuVar13 = ppuVar4;
            }
            iVar27 = iVar27 + ((uint)((int)ppuVar9 - (int)ppuVar16) >> 1 & 0xffff);
            if ((*(short *)((long)ppuVar13 + 2) == 0) && (*(short *)((long)ppuVar13 + 4) == 0)) {
              uVar6 = (uint)(*(ushort *)((long)ppuVar13 + 10) >> 1);
              iVar20 = uVar6 + iVar20;
              iVar27 = iVar27 - uVar6;
            }
            uVar19 = *(ushort *)ppuVar9;
          } while (uVar19 != 0);
        }
LAB_032d7ed8:
        fVar33 = (float)FUN_00358eb0(auStack_e0,local_2308,iVar20 + iVar27);
        ppuVar9 = local_2308;
        if (fVar34 < fVar33) {
          *param_3 = uVar31;
          local_2320 = PTR_DAT_04bb8610 + 0x10;
          local_2318 = (ushort *)&DAT_04102e34;
          (**(code **)(local_2310 + 0x18))(&local_2310);
          lVar5 = 0;
          goto LAB_032d8010;
        }
        uVar31 = uVar31 + 1;
      } while ((int)uVar31 < (int)uVar25);
    }
    plVar21 = (long *)PTR_DAT_04bc6338;
    plVar23 = (long *)PTR_DAT_04bc9198;
  }
  uVar24 = 0;
  *param_3 = uVar25;
  *param_4 = fVar32;
  goto LAB_032d7f78;
  while( true ) {
    if (*(short *)((long)local_2308 + (lVar5 + 1) * 2) == 0) {
      lVar5 = lVar5 + 1;
      goto LAB_032d804c;
    }
    if (*(short *)((long)local_2308 + (lVar5 + 2) * 2) == 0) {
      lVar5 = lVar5 + 2;
      goto LAB_032d804c;
    }
    lVar5 = lVar5 + 3;
    if (lVar5 == 0x80001) break;
LAB_032d8010:
    if (*(short *)((long)local_2308 + lVar5 * 2) == 0) goto LAB_032d804c;
  }
  lVar5 = 0;
LAB_032d804c:
  iVar20 = (int)lVar5;
  iVar27 = iVar20 + uVar31;
  if (iVar27 < 0 != SCARRY4(iVar20,uVar31)) {
    iVar27 = -1;
  }
  uVar25 = uVar31;
  if ((int)uVar31 < 0) {
    uVar25 = iVar27 + 1;
  }
  uVar6 = local_2300 + ~uVar25;
  if (1 < (int)(local_2300 - uVar25)) {
    uVar6 = 1;
  }
  if (0 < (int)uVar6) {
    (**(code **)(local_2320 + 0x18))(&local_2320);
    memcpy((short *)((long)ppuVar9 + (long)(int)uVar25 * 2),local_2318,(ulong)uVar6 << 1);
    if (iVar20 < (int)(uVar6 + uVar25)) {
      *(short *)((long)ppuVar9 + (long)(int)(uVar6 + uVar25) * 2) = 0;
    }
  }
  (**(code **)(local_2310 + 0x18))(&local_2310);
  uVar19 = *(ushort *)local_2308;
  if (uVar19 == 0) {
    iVar27 = 0;
    iVar20 = 0;
  }
  else {
    iVar20 = 0;
    iVar27 = 0;
    ppuVar9 = local_2308;
    do {
      ppuVar13 = ppuVar9;
      ppuVar16 = ppuVar9;
      while ((uVar19 & 0xfffe) != 0xe) {
        ppuVar13 = (undefined **)((long)ppuVar13 + 2);
        uVar19 = *(ushort *)ppuVar13;
        iVar20 = iVar20 + 1;
        ppuVar16 = (undefined **)((long)ppuVar16 + 2);
        if (uVar19 == 0) goto LAB_032d8168;
      }
      if (uVar19 == 0xe) {
        ppuVar9 = (undefined **)((long)ppuVar16 + (ulong)*(ushort *)((long)ppuVar13 + 6) + 8);
      }
      else {
        ppuVar4 = ppuVar13;
        ppuVar9 = (undefined **)((long)ppuVar16 + 6);
        if (uVar19 != 0xf) {
          ppuVar4 = (undefined **)0x0;
          ppuVar9 = ppuVar13;
        }
        ppuVar13 = ppuVar4;
      }
      iVar27 = iVar27 + ((uint)((int)ppuVar9 - (int)ppuVar16) >> 1 & 0xffff);
      if ((*(short *)((long)ppuVar13 + 2) == 0) && (*(short *)((long)ppuVar13 + 4) == 0)) {
        uVar25 = (uint)(*(ushort *)((long)ppuVar13 + 10) >> 1);
        iVar20 = uVar25 + iVar20;
        iVar27 = iVar27 - uVar25;
      }
      uVar19 = *(ushort *)ppuVar9;
    } while (uVar19 != 0);
  }
LAB_032d8168:
  fVar32 = (float)FUN_00358eb0(auStack_e0,local_2308,iVar20 + iVar27);
  *param_4 = fVar32;
  if (0 < (int)local_2e8) {
    uVar25 = 0;
    puVar1 = PTR_DAT_04bb8610 + 0x10;
    uVar6 = local_2e8;
    do {
      if (uVar25 < uVar6) {
        iVar27 = 0;
        if ((int)local_2f0 <= (int)(local_2f0._4_4_ + uVar25)) {
          iVar27 = (int)local_2f0;
        }
        uVar28 = (local_2f0._4_4_ + uVar25) - iVar27;
        uVar26 = *(uint *)((long)local_2f8 +
                          (-(ulong)(uVar28 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar28 << 3));
        if ((int)uVar26 < (int)uVar31) {
          puVar12 = local_2f8 + (long)(int)uVar28 * 2;
LAB_032d81fc:
          if ((int)uVar31 <= (int)puVar12[1]) {
            uVar19 = *(ushort *)local_2308;
            if (uVar19 == 0) {
              iVar27 = 0;
              iVar20 = 0;
            }
            else {
              iVar20 = 0;
              iVar27 = 0;
              ppuVar9 = local_2308;
              do {
                ppuVar13 = ppuVar9;
                ppuVar16 = ppuVar9;
                while ((uVar19 & 0xfffe) != 0xe) {
                  ppuVar13 = (undefined **)((long)ppuVar13 + 2);
                  uVar19 = *(ushort *)ppuVar13;
                  iVar20 = iVar20 + 1;
                  ppuVar16 = (undefined **)((long)ppuVar16 + 2);
                  if (uVar19 == 0) goto LAB_032d82b4;
                }
                if (uVar19 == 0xe) {
                  ppuVar9 = (undefined **)
                            ((long)ppuVar16 + (ulong)*(ushort *)((long)ppuVar13 + 6) + 8);
                }
                else {
                  ppuVar4 = ppuVar13;
                  ppuVar9 = (undefined **)((long)ppuVar16 + 6);
                  if (uVar19 != 0xf) {
                    ppuVar4 = (undefined **)0x0;
                    ppuVar9 = ppuVar13;
                  }
                  ppuVar13 = ppuVar4;
                }
                iVar27 = iVar27 + ((uint)((int)ppuVar9 - (int)ppuVar16) >> 1 & 0xffff);
                if ((*(short *)((long)ppuVar13 + 2) == 0) && (*(short *)((long)ppuVar13 + 4) == 0))
                {
                  uVar6 = (uint)(*(ushort *)((long)ppuVar13 + 10) >> 1);
                  iVar20 = uVar6 + iVar20;
                  iVar27 = iVar27 - uVar6;
                }
                uVar19 = *(ushort *)ppuVar9;
              } while (uVar19 != 0);
            }
LAB_032d82b4:
            (**(code **)(local_2310 + 0x18))(&local_2310);
            uVar19 = *(ushort *)local_2308;
            if (uVar19 == 0) {
              iVar10 = 0;
              iVar7 = 0;
            }
            else {
              iVar7 = 0;
              iVar10 = 0;
              ppuVar9 = local_2308;
              do {
                ppuVar13 = ppuVar9;
                ppuVar16 = ppuVar9;
                while ((uVar19 & 0xfffe) != 0xe) {
                  ppuVar13 = (undefined **)((long)ppuVar13 + 2);
                  uVar19 = *(ushort *)ppuVar13;
                  iVar7 = iVar7 + 1;
                  ppuVar16 = (undefined **)((long)ppuVar16 + 2);
                  if (uVar19 == 0) goto LAB_032d8374;
                }
                if (uVar19 == 0xe) {
                  ppuVar9 = (undefined **)
                            ((long)ppuVar16 + (ulong)*(ushort *)((long)ppuVar13 + 6) + 8);
                }
                else {
                  ppuVar4 = ppuVar13;
                  ppuVar9 = (undefined **)((long)ppuVar16 + 6);
                  if (uVar19 != 0xf) {
                    ppuVar4 = (undefined **)0x0;
                    ppuVar9 = ppuVar13;
                  }
                  ppuVar13 = ppuVar4;
                }
                iVar10 = iVar10 + ((uint)((int)ppuVar9 - (int)ppuVar16) >> 1 & 0xffff);
                if ((*(short *)((long)ppuVar13 + 2) == 0) && (*(short *)((long)ppuVar13 + 4) == 0))
                {
                  uVar6 = (uint)(*(ushort *)((long)ppuVar13 + 10) >> 1);
                  iVar7 = uVar6 + iVar7;
                  iVar10 = iVar10 - uVar6;
                }
                uVar19 = *(ushort *)ppuVar9;
              } while (uVar19 != 0);
            }
LAB_032d8374:
            fVar32 = (float)FUN_00358eb0(auStack_e0,local_2308,iVar7 + iVar10);
            lVar5 = (long)(iVar20 + iVar27);
            do {
              ppuVar9 = local_2308;
              if (lVar5 < 2) {
                uVar6 = local_2e8;
                goto LAB_032d81a4;
              }
              local_2318 = (ushort *)&DAT_04102e34;
              lVar30 = lVar5 + -1;
              local_2320 = puVar1;
              (**(code **)(local_2310 + 0x18))(&local_2310);
              lVar22 = 0;
              do {
                if (*(short *)((long)local_2308 + lVar22 * 2) == 0) goto LAB_032d8424;
                if (*(short *)((long)local_2308 + (lVar22 + 1) * 2) == 0) {
                  lVar22 = lVar22 + 1;
                  goto LAB_032d8424;
                }
                if (*(short *)((long)local_2308 + (lVar22 + 2) * 2) == 0) {
                  lVar22 = lVar22 + 2;
                  goto LAB_032d8424;
                }
                lVar22 = lVar22 + 3;
              } while (lVar22 != 0x80001);
              lVar22 = 0;
LAB_032d8424:
              uVar28 = (uint)lVar30;
              uVar6 = local_2300 - (int)lVar5;
              if (1 < (int)(local_2300 - uVar28)) {
                uVar6 = 1;
              }
              if (0 < (int)uVar6) {
                (**(code **)(local_2320 + 0x18))(&local_2320);
                memcpy((short *)((long)ppuVar9 + lVar30 * 2),local_2318,(ulong)uVar6 << 1);
                lVar5 = lVar30 + (ulong)uVar6;
                if ((int)lVar22 < lVar5) {
                  *(short *)((long)ppuVar9 + lVar5 * 2) = 0;
                }
              }
              (**(code **)(local_2310 + 0x18))(&local_2310);
              uVar19 = *(ushort *)local_2308;
              if (uVar19 == 0) {
                iVar27 = 0;
                iVar20 = 0;
              }
              else {
                iVar20 = 0;
                iVar27 = 0;
                ppuVar9 = local_2308;
                do {
                  ppuVar13 = ppuVar9;
                  ppuVar16 = ppuVar9;
                  while ((uVar19 & 0xfffe) != 0xe) {
                    ppuVar13 = (undefined **)((long)ppuVar13 + 2);
                    uVar19 = *(ushort *)ppuVar13;
                    iVar20 = iVar20 + 1;
                    ppuVar16 = (undefined **)((long)ppuVar16 + 2);
                    if (uVar19 == 0) goto LAB_032d8398;
                  }
                  if (uVar19 == 0xe) {
                    ppuVar9 = (undefined **)
                              ((long)ppuVar16 + (ulong)*(ushort *)((long)ppuVar13 + 6) + 8);
                  }
                  else {
                    ppuVar4 = ppuVar13;
                    ppuVar9 = (undefined **)((long)ppuVar16 + 6);
                    if (uVar19 != 0xf) {
                      ppuVar4 = (undefined **)0x0;
                      ppuVar9 = ppuVar13;
                    }
                    ppuVar13 = ppuVar4;
                  }
                  iVar27 = iVar27 + ((uint)((int)ppuVar9 - (int)ppuVar16) >> 1 & 0xffff);
                  if ((*(short *)((long)ppuVar13 + 2) == 0) && (*(short *)((long)ppuVar13 + 4) == 0)
                     ) {
                    uVar6 = (uint)(*(ushort *)((long)ppuVar13 + 10) >> 1);
                    iVar20 = uVar6 + iVar20;
                    iVar27 = iVar27 - uVar6;
                  }
                  uVar19 = *(ushort *)ppuVar9;
                } while (uVar19 != 0);
              }
LAB_032d8398:
              fVar33 = (float)FUN_00358eb0(auStack_e0,local_2308,iVar20 + iVar27);
              lVar5 = lVar30;
            } while (fVar32 <= fVar33);
            *param_3 = uVar28;
            *param_4 = fVar33;
            uVar6 = local_2e8;
            if (0 < (int)local_2e8) {
              uVar17 = 0;
              if (local_2e8 != 1) {
                puVar12 = local_2f8 + (long)local_2f0._4_4_ * 2 + 1;
                do {
                  iVar27 = 0;
                  if ((int)local_2f0 <= (int)(local_2f0._4_4_ + uVar17)) {
                    iVar27 = (int)local_2f0;
                  }
                  if (((int)(puVar12 + (long)iVar27 * -2)[-1] < (int)uVar28) &&
                     ((int)uVar28 <= (int)puVar12[(long)iVar27 * -2])) {
                    *param_3 = uVar26;
                    *param_4 = fVar32;
                  }
                  iVar27 = local_2f0._4_4_ + uVar17 + 1;
                  iVar20 = 0;
                  if ((int)local_2f0 <= iVar27) {
                    iVar20 = (int)local_2f0;
                  }
                  if (((int)local_2f8[(long)(iVar27 - iVar20) * 2] < (int)uVar28) &&
                     ((int)uVar28 <= (int)(local_2f8 + (long)(iVar27 - iVar20) * 2)[1])) {
                    *param_3 = uVar26;
                    *param_4 = fVar32;
                  }
                  uVar17 = uVar17 + 2;
                  puVar12 = puVar12 + 4;
                } while ((local_2e8 & 0xfffffffe) != uVar17);
              }
              if ((local_2e8 & 1) != 0) {
                iVar27 = 0;
                if ((int)local_2f0 <= (int)(uVar17 + local_2f0._4_4_)) {
                  iVar27 = (int)local_2f0;
                }
                if (((int)local_2f8[(long)(int)((uVar17 + local_2f0._4_4_) - iVar27) * 2] <
                     (int)uVar28) &&
                   ((int)uVar28 <=
                    (int)(local_2f8 + (long)(int)((uVar17 + local_2f0._4_4_) - iVar27) * 2)[1])) {
                  *param_3 = uVar26;
                  *param_4 = fVar32;
                }
              }
            }
          }
        }
      }
      else {
        uVar26 = *local_2f8;
        puVar12 = local_2f8;
        if ((int)uVar26 < (int)uVar31) goto LAB_032d81fc;
      }
LAB_032d81a4:
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < (int)uVar6);
    fVar32 = *param_4;
  }
  plVar23 = (long *)PTR_DAT_04bc9198;
  plVar21 = (long *)PTR_DAT_04bc6338;
  if (fVar34 <= fVar32 + local_9c) {
    uVar24 = 1;
  }
  else {
    uVar24 = 2;
    *param_4 = fVar32 + local_9c;
  }
LAB_032d7f78:
  thunk_FUN_0035008c(auStack_e0);
  plVar3 = (long *)*plVar23;
  if (*(long **)(*plVar21 + 0x88) != (long *)0x0) {
    plVar3 = *(long **)(*plVar21 + 0x88);
  }
  lVar5 = (**(code **)(*plVar3 + 0x10))();
  *(undefined1 *)(lVar5 + 0x18) = 0;
  return uVar24;
}

