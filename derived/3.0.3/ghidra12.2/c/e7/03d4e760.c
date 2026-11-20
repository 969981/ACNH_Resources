
void FUN_03d4e760(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  undefined2 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  ulong *puVar28;
  undefined4 *puVar29;
  undefined8 uVar30;
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar31;
  undefined2 uVar32;
  uint uVar33;
  short *psVar34;
  int *piVar35;
  ulong *puVar36;
  uint uVar37;
  ulong uVar38;
  byte *pbVar39;
  ulong *puVar40;
  int iVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined1 *puVar45;
  long lVar46;
  uint uVar47;
  undefined8 *puVar48;
  size_t sVar49;
  ulong uVar50;
  uint *puVar51;
  undefined4 *puVar52;
  long lVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  void *pvVar57;
  long lVar58;
  char *pcVar59;
  void *pvVar60;
  long local_298;
  void *local_290;
  short *local_288;
  short *local_278;
  undefined *local_268;
  char *pcStack_260;
  char *local_258;
  char *local_250;
  undefined4 local_248;
  undefined8 local_244 [7];
  undefined1 local_205;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  short *local_1e8;
  uint *local_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  undefined1 local_185;
  undefined1 local_c5;
  undefined8 local_c0;
  char *local_b8;
  int local_b0;
  char local_ac [63];
  undefined1 local_6d;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_260 = "Font/FontInfo.szs";
  local_268 = puVar1;
  plVar22 = (long *)(**(code **)**(undefined8 **)PTR_DAT_04bd4508)
                              (*(undefined8 **)PTR_DAT_04bd4508,&local_268);
  if (plVar22 != (long *)0x0) {
    local_1d0 = "FontInfo.byml";
    local_1d8 = (short *)puVar1;
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar19 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar23 = (**(code **)*plVar22)(plVar22,PTR_DAT_04bb2860);
    if ((uVar23 & 1) == 0) {
      plVar22 = (long *)0x0;
    }
    lVar24 = (**(code **)(*plVar22 + 0x30))(plVar22,&local_1d8,0);
    plVar22 = (long *)PTR_DAT_04bb2698;
    if (lVar24 != 0) {
      lVar46 = *(long *)PTR_DAT_04bb2698;
      if (lVar46 == 0) {
        puVar27 = malloc(0x48);
      }
      else {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar26 = (long *)(lVar46 + 8);
        if (lVar25 != 0) {
          plVar26 = (long *)(lVar25 + 0xa8);
        }
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          puVar27 = (undefined8 *)0x0;
        }
        else {
          puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x48,8);
        }
      }
      *puVar27 = 0;
      lVar46 = *plVar22;
      *(undefined4 *)(puVar27 + 1) = 0;
      puVar27[2] = 0;
      *(undefined4 *)(puVar27 + 3) = 0;
      puVar27[4] = 0;
      *(undefined4 *)(puVar27 + 5) = 0;
      puVar27[6] = 0;
      *(undefined4 *)(puVar27 + 7) = 0;
      puVar27[8] = 0;
      param_1[7] = (long)puVar27;
      if (lVar46 == 0) {
        plVar26 = malloc(0x10);
      }
      else {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar26 = (long *)(lVar46 + 8);
        if (lVar25 != 0) {
          plVar26 = (long *)(lVar25 + 0xa8);
        }
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          plVar26 = (long *)0x0;
        }
        else {
          plVar26 = (long *)(**(code **)(*plVar26 + 0x30))(plVar26,0x10,8);
        }
      }
      *plVar26 = lVar24;
      plVar26[1] = 0;
      uVar23 = FUN_03eaa5e0(lVar24);
      if ((uVar23 & 1) == 0) {
        *plVar26 = 0;
        plVar26[1] = 0;
      }
      else {
        psVar34 = (short *)*plVar26;
        uVar21 = *(uint *)(psVar34 + 6);
        uVar18 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
        uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
        if (*psVar34 != 0x5942) {
          uVar18 = uVar21;
        }
        if (uVar18 != 0) {
          plVar26[1] = (long)psVar34 + (ulong)uVar18;
        }
      }
      *puVar27 = plVar26;
      local_1e8 = (short *)0x0;
      local_1e0 = (uint *)0x0;
      local_1d8 = (short *)((ulong)local_1d8 & 0xffffff0000000000);
      uVar23 = FUN_03ea9450(plVar26,&local_1d8,"Resource");
      if ((uVar23 & 1) == 0) {
LAB_03d4ea6c:
        local_1e8 = (short *)0x0;
LAB_03d4ea70:
        local_1e0 = (uint *)0x0;
      }
      else {
        if (1 < local_1d8._4_1_ - 0xc0) {
          if (local_1d8._4_1_ != 0xff) goto LAB_03d4ea6c;
          goto LAB_03d4ea70;
        }
        local_278 = (short *)*plVar26;
        puVar51 = (uint *)((long)local_278 + ((ulong)local_1d8 & 0xffffffff));
        local_1e8 = local_278;
        local_1e0 = puVar51;
        if ((local_278 != (short *)0x0) && ((*puVar51 & 0xfe) == 0xc0)) {
          uVar42 = *puVar51;
          uVar21 = uVar42 >> 8;
          uVar18 = uVar21;
          if (*local_278 == 0x5942) {
            uVar18 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
          }
          if (uVar18 != 0) {
            if ((uVar42 & 0xfe) == 0xc0) {
              if (*local_278 == 0x5942) {
                uVar21 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
              }
              if (uVar21 != 0) {
                uVar50 = (ulong)uVar21;
                lVar24 = *plVar22;
                uVar23 = (uVar50 + (ulong)uVar21 * 2) * 0x20 | 8;
                if (lVar24 == 0) {
                  puVar28 = malloc(uVar23);
                }
                else {
                  lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar26 = (long *)(lVar24 + 8);
                  if (lVar46 != 0) {
                    plVar26 = (long *)(lVar46 + 0xa8);
                  }
                  plVar26 = (long *)*plVar26;
                  if (plVar26 == (long *)0x0) goto LAB_03d51028;
                  puVar28 = (ulong *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar23,8);
                }
                if (puVar28 != (ulong *)0x0) {
                  uVar23 = uVar50 * 0x60 - 0x60;
                  puVar36 = puVar28 + 1;
                  *puVar28 = uVar50;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar23;
                  puVar40 = puVar36;
                  if ((SUB164(auVar10 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 6 & 1) == 0) {
                    *(undefined1 *)((long)puVar28 + 0x24) = 0;
                    *(undefined4 *)(puVar28 + 1) = 0xffffffff;
                    puVar28[3] = (ulong)((long)puVar28 + 0x24);
                    *(undefined4 *)(puVar28 + 4) = 0x40;
                    *(undefined1 *)((long)puVar28 + 99) = 0;
                    puVar28[2] = (ulong)(PTR_DAT_04bb2bc0 + 0x10);
                    puVar40 = puVar28 + 0xd;
                  }
                  if (0x5f < uVar23) {
                    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
                    do {
                      *(undefined4 *)puVar40 = 0xffffffff;
                      *(undefined4 *)(puVar40 + 3) = 0x40;
                      *(undefined1 *)((long)puVar40 + 0x1c) = 0;
                      *(undefined1 *)((long)puVar40 + 0x5b) = 0;
                      *(undefined4 *)(puVar40 + 0xc) = 0xffffffff;
                      *(undefined4 *)(puVar40 + 0xf) = 0x40;
                      *(undefined1 *)((long)puVar40 + 0xbb) = 0;
                      puVar40[1] = (ulong)puVar1;
                      puVar40[2] = (ulong)((long)puVar40 + 0x1c);
                      *(undefined1 *)((long)puVar40 + 0x7c) = 0;
                      puVar40[0xd] = (ulong)puVar1;
                      puVar40[0xe] = (ulong)((long)puVar40 + 0x7c);
                      puVar40 = puVar40 + 0x18;
                    } while (puVar40 != puVar36 + uVar50 * 0xc);
                  }
                  *(uint *)(puVar27 + 1) = uVar21;
                  puVar27[2] = puVar36;
                  local_278 = local_1e8;
                  puVar51 = local_1e0;
                }
              }
            }
LAB_03d51028:
            uVar18 = 0;
            do {
              if (puVar51 == (uint *)0x0) {
                uVar21 = 0;
              }
              else {
                if ((*puVar51 & 0xfe) != 0xc0) break;
                uVar21 = *puVar51 >> 8;
                if (*local_278 == 0x5942) {
                  uVar21 = uVar21 & 0xff00 | *puVar51 >> 0x18 | (uVar21 & 0xff) << 0x10;
                }
              }
              if (uVar21 <= uVar18) break;
              local_258 = (char *)0x0;
              local_1d8 = (short *)0x0;
              local_1d0 = (char *)0x0;
              FUN_03ea95cc(&local_1e8,&local_1d8,&local_258,uVar18);
              if (local_1d8 == (short *)0x0) {
                pcVar56 = (char *)0x0;
              }
              else {
                local_c0 = (char *)((ulong)local_c0 & 0xffffff0000000000);
                uVar23 = FUN_03ea9450(&local_1d8,&local_c0,&DAT_040dd778);
                pcVar56 = (char *)0x0;
                if (((uVar23 & 1) != 0) && (local_c0._4_1_ == -0x60)) {
                  uVar42 = *(uint *)(local_1d8 + 4);
                  uVar21 = (uVar42 & 0xff00ff00) >> 8 | (uVar42 & 0xff00ff) << 8;
                  uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                  if (*local_1d8 != 0x5942) {
                    uVar21 = uVar42;
                  }
                  uVar37 = *(uint *)((long)local_1d8 +
                                    (long)(int)(uint)local_c0 * 4 + (ulong)uVar21 + 4);
                  uVar42 = (uVar37 & 0xff00ff00) >> 8 | (uVar37 & 0xff00ff) << 8;
                  uVar42 = uVar42 >> 0x10 | uVar42 << 0x10;
                  if (*local_1d8 != 0x5942) {
                    uVar42 = uVar37;
                  }
                  pcVar56 = (char *)((long)local_1d8 + (ulong)uVar42 + (ulong)uVar21);
                }
              }
              if (local_258 != (char *)0x0) {
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 1) <= uVar18) {
                  uVar21 = 0;
                }
                lVar24 = puVar27[2] + (ulong)uVar21 * 0x60;
                pcVar59 = *(char **)(lVar24 + 0x10);
                if (pcVar59 != local_258) {
                  lVar46 = 0;
                  do {
                    if (local_258[lVar46] == '\0') goto LAB_03d511ec;
                    if (local_258[lVar46 + 1] == '\0') {
                      lVar46 = lVar46 + 1;
                      goto LAB_03d511ec;
                    }
                    if (local_258[lVar46 + 2] == '\0') {
                      lVar46 = lVar46 + 2;
                      goto LAB_03d511ec;
                    }
                    lVar46 = lVar46 + 3;
                  } while (lVar46 != 0x80001);
                  lVar46 = 0;
LAB_03d511ec:
                  iVar41 = *(int *)(lVar24 + 0x18);
                  iVar19 = (int)lVar46;
                  if (iVar41 <= (int)lVar46) {
                    iVar19 = iVar41 + -1;
                  }
                  memcpy(pcVar59,local_258,(long)iVar19);
                  pcVar59[iVar19] = '\0';
                  plVar22 = (long *)PTR_DAT_04bb2698;
                }
              }
              if (pcVar56 != (char *)0x0) {
                if (pcVar56 == "Res") {
LAB_03d51050:
                  uVar20 = 0;
                }
                else {
                  uVar23 = 0;
                  bVar14 = true;
                  do {
                    if (pcVar56[uVar23] != (&DAT_0407eb19)[uVar23]) break;
                    if (pcVar56[uVar23] == '\0') {
                      if (bVar14) goto LAB_03d51050;
                      break;
                    }
                    if (pcVar56[uVar23 + 1] != (&DAT_0407eb1a)[uVar23]) break;
                    if (pcVar56[uVar23 + 1] == '\0') goto LAB_03d51050;
                    if (pcVar56[uVar23 + 2] != (&DAT_0407eb1b)[uVar23]) break;
                    if (pcVar56[uVar23 + 2] == '\0') goto LAB_03d51050;
                    bVar14 = uVar23 < 0x7fffe;
                    uVar23 = uVar23 + 3;
                  } while (uVar23 != 0x80001);
                  if (pcVar56 == "Scalable") {
LAB_03d51300:
                    uVar20 = 1;
                  }
                  else {
                    uVar23 = 0;
                    bVar14 = true;
                    do {
                      if (pcVar56[uVar23] != "Scalable"[uVar23]) break;
                      if (pcVar56[uVar23] == '\0') {
                        if (bVar14) goto LAB_03d51300;
                        break;
                      }
                      if (pcVar56[uVar23 + 1] != "Scalable"[uVar23 + 1]) break;
                      if (pcVar56[uVar23 + 1] == '\0') goto LAB_03d51300;
                      if (pcVar56[uVar23 + 2] != "Scalable"[uVar23 + 2]) break;
                      if (pcVar56[uVar23 + 2] == '\0') goto LAB_03d51300;
                      bVar14 = uVar23 < 0x7fffe;
                      uVar23 = uVar23 + 3;
                    } while (uVar23 != 0x80001);
                    if (pcVar56 != "Builtin") {
                      uVar23 = 0;
                      bVar14 = true;
                      do {
                        if (pcVar56[uVar23] != "Builtin"[uVar23]) break;
                        if (pcVar56[uVar23] == '\0') {
                          if (bVar14) goto LAB_03d51394;
                          break;
                        }
                        if (pcVar56[uVar23 + 1] != "Builtin"[uVar23 + 1]) break;
                        if (pcVar56[uVar23 + 1] == '\0') goto LAB_03d51394;
                        if (pcVar56[uVar23 + 2] != "Builtin"[uVar23 + 2]) break;
                        if (pcVar56[uVar23 + 2] == '\0') goto LAB_03d51394;
                        bVar14 = uVar23 < 0x7fffe;
                        uVar23 = uVar23 + 3;
                      } while (uVar23 != 0x80001);
                      goto LAB_03d51070;
                    }
LAB_03d51394:
                    uVar20 = 2;
                  }
                }
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 1) <= uVar18) {
                  uVar21 = 0;
                }
                *(undefined4 *)(puVar27[2] + (ulong)uVar21 * 0x60) = uVar20;
              }
LAB_03d51070:
              uVar18 = uVar18 + 1;
            } while( true );
          }
        }
      }
      puVar48 = (undefined8 *)*puVar27;
      local_1d8 = (short *)((ulong)local_1d8 & 0xffffff0000000000);
      uVar23 = FUN_03ea9450(puVar48,&local_1d8,"FontFace");
      if (((uVar23 & 1) == 0) || (1 < local_1d8._4_1_ - 0xc0)) {
        local_1e0 = (uint *)0x0;
      }
      else {
        psVar34 = (short *)*puVar48;
        puVar51 = (uint *)((long)psVar34 + ((ulong)local_1d8 & 0xffffffff));
        local_1e8 = psVar34;
        local_1e0 = puVar51;
        if ((psVar34 != (short *)0x0) && ((*puVar51 & 0xfe) == 0xc0)) {
          uVar42 = *puVar51;
          uVar21 = uVar42 >> 8;
          uVar18 = uVar21;
          if (*psVar34 == 0x5942) {
            uVar18 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
          }
          if (uVar18 != 0) {
            if ((uVar42 & 0xfe) == 0xc0) {
              if (*psVar34 == 0x5942) {
                uVar21 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
              }
              if (uVar21 != 0) {
                lVar24 = *plVar22;
                sVar49 = (ulong)uVar21 * 0xb8 + 8;
                if (lVar24 == 0) {
                  puVar28 = malloc(sVar49);
                }
                else {
                  lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar22 = (long *)(lVar24 + 8);
                  if (lVar46 != 0) {
                    plVar22 = (long *)(lVar46 + 0xa8);
                  }
                  plVar22 = (long *)*plVar22;
                  if (plVar22 == (long *)0x0) goto LAB_03d5141c;
                  puVar28 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar49,8);
                }
                if (puVar28 != (ulong *)0x0) {
                  *puVar28 = (ulong)uVar21;
                  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
                  lVar24 = 0;
                  do {
                    lVar46 = lVar24 + 0xb8;
                    puVar45 = (undefined1 *)((long)puVar28 + lVar24 + 0x1c);
                    *puVar45 = 0;
                    *(undefined1 **)((long)puVar28 + lVar24 + 0x10) = puVar45;
                    *(undefined4 *)((long)puVar28 + lVar24 + 0x18) = 0x40;
                    puVar45 = (undefined1 *)((long)puVar28 + lVar24 + 0x74);
                    *puVar45 = 0;
                    *(undefined1 *)((long)puVar28 + lVar24 + 0x5b) = 0;
                    *(undefined **)((long)puVar28 + lVar24 + 8) = puVar1;
                    *(undefined1 **)((long)puVar28 + lVar24 + 0x68) = puVar45;
                    *(undefined4 *)((long)puVar28 + lVar24 + 0x70) = 0x40;
                    *(undefined1 *)((long)puVar28 + lVar24 + 0xb3) = 0;
                    *(undefined **)((long)puVar28 + lVar24 + 0x60) = puVar1;
                    *(undefined1 *)((long)puVar28 + lVar24 + 0xb8) = 0;
                    lVar24 = lVar46;
                  } while ((ulong)uVar21 * 0xb8 != lVar46);
                  *(uint *)(puVar27 + 3) = uVar21;
                  puVar27[4] = puVar28 + 1;
                  puVar51 = local_1e0;
                  psVar34 = local_1e8;
                }
              }
            }
LAB_03d5141c:
            uVar18 = 0;
            do {
              if (puVar51 == (uint *)0x0) {
                uVar21 = 0;
              }
              else {
                if ((*puVar51 & 0xfe) != 0xc0) break;
                uVar21 = *puVar51 >> 8;
                if (*psVar34 == 0x5942) {
                  uVar21 = uVar21 & 0xff00 | *puVar51 >> 0x18 | (uVar21 & 0xff) << 0x10;
                }
              }
              if (uVar21 <= uVar18) break;
              local_258 = (char *)0x0;
              local_1d8 = (short *)0x0;
              local_1d0 = (char *)0x0;
              FUN_03ea95cc(&local_1e8,&local_1d8,&local_258,uVar18);
              if (local_1d8 == (short *)0x0) {
                pvVar57 = (void *)0x0;
              }
              else {
                local_c0 = (char *)((ulong)local_c0 & 0xffffff0000000000);
                uVar23 = FUN_03ea9450(&local_1d8,&local_c0,&DAT_0406a1e8);
                pvVar57 = (void *)0x0;
                if (((uVar23 & 1) != 0) && (local_c0._4_1_ == -0x60)) {
                  uVar42 = *(uint *)(local_1d8 + 4);
                  uVar21 = (uVar42 & 0xff00ff00) >> 8 | (uVar42 & 0xff00ff) << 8;
                  uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                  if (*local_1d8 != 0x5942) {
                    uVar21 = uVar42;
                  }
                  uVar37 = *(uint *)((long)local_1d8 +
                                    (long)(int)(uint)local_c0 * 4 + (ulong)uVar21 + 4);
                  uVar42 = (uVar37 & 0xff00ff00) >> 8 | (uVar37 & 0xff00ff) << 8;
                  uVar42 = uVar42 >> 0x10 | uVar42 << 0x10;
                  if (*local_1d8 != 0x5942) {
                    uVar42 = uVar37;
                  }
                  pvVar57 = (void *)((long)local_1d8 + (ulong)uVar42 + (ulong)uVar21);
                }
                local_c0 = (char *)((ulong)local_c0 & 0xffffff0000000000);
                uVar23 = FUN_03ea9450(&local_1d8,&local_c0,"border");
                uVar21 = 0;
                if ((uVar23 & 1) != 0) {
                  if (local_c0._4_1_ == -1) {
LAB_03d515b0:
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = (uint)local_c0;
                    if (local_c0._4_1_ != -0x2d) {
                      if (local_c0._4_1_ != -0x2f) goto LAB_03d515b0;
                      uVar21 = (uint)local_c0 & ((int)(uint)local_c0 >> 0x1f ^ 0xffffffffU);
                    }
                  }
                }
                uVar42 = uVar18;
                if (*(uint *)(puVar27 + 3) <= uVar18) {
                  uVar42 = 0;
                }
                *(char *)(puVar27[4] + (ulong)uVar42 * 0xb8 + 0xb0) = (char)uVar21;
              }
              if (local_258 != (char *)0x0) {
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 3) <= uVar18) {
                  uVar21 = 0;
                }
                lVar24 = puVar27[4] + (ulong)uVar21 * 0xb8;
                pcVar56 = *(char **)(lVar24 + 8);
                if (pcVar56 != local_258) {
                  lVar46 = 0;
                  do {
                    if (local_258[lVar46] == '\0') goto LAB_03d5163c;
                    if (local_258[lVar46 + 1] == '\0') {
                      lVar46 = lVar46 + 1;
                      goto LAB_03d5163c;
                    }
                    if (local_258[lVar46 + 2] == '\0') {
                      lVar46 = lVar46 + 2;
                      goto LAB_03d5163c;
                    }
                    lVar46 = lVar46 + 3;
                  } while (lVar46 != 0x80001);
                  lVar46 = 0;
LAB_03d5163c:
                  iVar41 = *(int *)(lVar24 + 0x10);
                  iVar19 = (int)lVar46;
                  if (iVar41 <= (int)lVar46) {
                    iVar19 = iVar41 + -1;
                  }
                  memcpy(pcVar56,local_258,(long)iVar19);
                  pcVar56[iVar19] = '\0';
                }
              }
              if (pvVar57 != (void *)0x0) {
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 3) <= uVar18) {
                  uVar21 = 0;
                }
                lVar24 = puVar27[4] + (ulong)uVar21 * 0xb8;
                pvVar60 = *(void **)(lVar24 + 0x60);
                if (pvVar60 != pvVar57) {
                  lVar46 = 0;
                  do {
                    if (*(char *)((long)pvVar57 + lVar46) == '\0') goto LAB_03d5143c;
                    if (*(char *)((long)pvVar57 + lVar46 + 1) == '\0') {
                      lVar46 = lVar46 + 1;
                      goto LAB_03d5143c;
                    }
                    if (*(char *)((long)pvVar57 + lVar46 + 2) == '\0') {
                      lVar46 = lVar46 + 2;
                      goto LAB_03d5143c;
                    }
                    lVar46 = lVar46 + 3;
                  } while (lVar46 != 0x80001);
                  lVar46 = 0;
LAB_03d5143c:
                  iVar41 = *(int *)(lVar24 + 0x68);
                  iVar19 = (int)lVar46;
                  if (iVar41 <= (int)lVar46) {
                    iVar19 = iVar41 + -1;
                  }
                  memcpy(pvVar60,pvVar57,(long)iVar19);
                  *(undefined1 *)((long)pvVar60 + (long)iVar19) = 0;
                }
              }
              uVar18 = uVar18 + 1;
            } while( true );
          }
        }
      }
      puVar48 = (undefined8 *)*puVar27;
      local_1d8 = (short *)((ulong)local_1d8 & 0xffffff0000000000);
      uVar23 = FUN_03ea9450(puVar48,&local_1d8,"Instance");
      if (((uVar23 & 1) == 0) || (1 < local_1d8._4_1_ - 0xc0)) {
        local_1e0 = (uint *)0x0;
      }
      else {
        local_1e8 = (short *)*puVar48;
        puVar51 = (uint *)((long)local_1e8 + ((ulong)local_1d8 & 0xffffffff));
        local_1e0 = puVar51;
        if ((local_1e8 != (short *)0x0) && ((*puVar51 & 0xfe) == 0xc0)) {
          uVar42 = *puVar51;
          uVar21 = uVar42 >> 8;
          uVar18 = uVar21;
          if (*local_1e8 == 0x5942) {
            uVar18 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
          }
          if (uVar18 != 0) {
            if ((uVar42 & 0xfe) == 0xc0) {
              if (*local_1e8 == 0x5942) {
                uVar21 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
              }
              if (uVar21 != 0) {
                uVar50 = (ulong)uVar21;
                uVar23 = (uVar50 + (ulong)uVar21 * 8) * 0x20 | 8;
                lVar24 = *(long *)PTR_DAT_04bb2698;
                if (lVar24 == 0) {
                  puVar28 = malloc(uVar23);
                }
                else {
                  lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar22 = (long *)(lVar24 + 8);
                  if (lVar46 != 0) {
                    plVar22 = (long *)(lVar46 + 0xa8);
                  }
                  plVar22 = (long *)*plVar22;
                  if (plVar22 == (long *)0x0) goto LAB_03d51770;
                  puVar28 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar23,8);
                }
                if (puVar28 != (ulong *)0x0) {
                  *puVar28 = uVar50;
                  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
                  lVar24 = 0;
                  do {
                    lVar46 = lVar24 + 0x120;
                    puVar45 = (undefined1 *)((long)puVar28 + lVar24 + 0x1c);
                    *puVar45 = 0;
                    *(undefined1 **)((long)puVar28 + lVar24 + 0x10) = puVar45;
                    *(undefined4 *)((long)puVar28 + lVar24 + 0x18) = 0x40;
                    puVar45 = (undefined1 *)((long)puVar28 + lVar24 + 0x74);
                    *puVar45 = 0;
                    *(undefined1 **)((long)puVar28 + lVar24 + 0x68) = puVar45;
                    *(undefined1 *)((long)puVar28 + lVar24 + 0x5b) = 0;
                    puVar45 = (undefined1 *)((long)puVar28 + lVar24 + 0xcc);
                    *puVar45 = 0;
                    *(undefined **)((long)puVar28 + lVar24 + 8) = puVar1;
                    *(undefined4 *)((long)puVar28 + lVar24 + 0x70) = 0x40;
                    *(undefined1 *)((long)puVar28 + lVar24 + 0xb3) = 0;
                    *(undefined **)((long)puVar28 + lVar24 + 0x60) = puVar1;
                    *(undefined1 **)((long)puVar28 + lVar24 + 0xc0) = puVar45;
                    *(undefined4 *)((long)puVar28 + lVar24 + 200) = 0x40;
                    *(undefined1 *)((long)puVar28 + lVar24 + 0x10b) = 0;
                    *(undefined **)((long)puVar28 + lVar24 + 0xb8) = puVar1;
                    *(undefined8 *)((long)puVar28 + lVar24 + 0x110) = 0;
                    *(undefined4 *)((long)puVar28 + lVar24 + 0x118) = 0;
                    *(undefined1 *)((long)puVar28 + lVar24 + 0x11c) = 1;
                    *(undefined4 *)((long)puVar28 + lVar24 + 0x11d) = 0;
                    lVar24 = lVar46;
                  } while (uVar50 * 0x120 != lVar46);
                  *(uint *)(puVar27 + 5) = uVar21;
                  puVar27[6] = puVar28 + 1;
                  puVar51 = local_1e0;
                }
              }
            }
LAB_03d51770:
            uVar18 = 0;
            puVar1 = PTR_DAT_04bb2020 + 0x10;
joined_r0x03d51794:
            if ((puVar51 == (uint *)0x0) || ((*puVar51 & 0xfe) != 0xc0)) {
              uVar21 = 0;
            }
            else {
              uVar21 = *puVar51 >> 8;
              if (*local_1e8 == 0x5942) {
                uVar21 = uVar21 & 0xff00 | *puVar51 >> 0x18 | (uVar21 & 0xff) << 0x10;
              }
            }
            if (uVar18 < uVar21) {
              local_258 = (char *)0x0;
              local_1d8 = (short *)0x0;
              local_1d0 = (char *)0x0;
              FUN_03ea95cc(&local_1e8,&local_1d8,&local_258,uVar18);
              if ((local_1d8 != (short *)0x0) &&
                 (uVar23 = FUN_03ea91a0(&local_1d8,&DAT_0407eb19), (uVar23 & 1) == 0)) {
                uVar23 = FUN_03ea91a0(&local_1d8,&DAT_04101361);
                if ((uVar23 & 1) != 0) {
                  uVar21 = uVar18;
                  if (*(uint *)(puVar27 + 5) <= uVar18) {
                    uVar21 = 0;
                  }
                  *(undefined1 *)(puVar27[6] + (ulong)uVar21 * 0x120 + 0x115) = 1;
                  goto LAB_03d51864;
                }
                local_c0 = (char *)((ulong)local_c0 & 0xffffff0000000000);
                uVar23 = FUN_03ea9450(&local_1d8,&local_c0,"fontFace");
                pcVar56 = (char *)0x0;
                if (((uVar23 & 1) != 0) && (local_c0._4_1_ == -0x60)) {
                  uVar42 = *(uint *)(local_1d8 + 4);
                  uVar21 = (uVar42 & 0xff00ff00) >> 8 | (uVar42 & 0xff00ff) << 8;
                  uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                  if (*local_1d8 != 0x5942) {
                    uVar21 = uVar42;
                  }
                  uVar37 = *(uint *)((long)local_1d8 +
                                    (long)(int)(uint)local_c0 * 4 + (ulong)uVar21 + 4);
                  uVar42 = (uVar37 & 0xff00ff00) >> 8 | (uVar37 & 0xff00ff) << 8;
                  uVar42 = uVar42 >> 0x10 | uVar42 << 0x10;
                  if (*local_1d8 != 0x5942) {
                    uVar42 = uVar37;
                  }
                  pcVar56 = (char *)((long)local_1d8 + (ulong)uVar42 + (ulong)uVar21);
                }
                local_c0 = (char *)((ulong)local_c0 & 0xffffff0000000000);
                bVar16 = FUN_03ea9450(&local_1d8,&local_c0,"fontSize");
                uVar20 = (uint)local_c0;
                if ((bVar16 & local_c0._4_1_ == -0x2f) == 0) {
                  uVar20 = 0;
                }
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 5) <= uVar18) {
                  uVar21 = 0;
                }
                *(undefined1 *)(puVar27[6] + (ulong)uVar21 * 0x120 + 0x116) = 1;
                if (pcVar56 != (char *)0x0) {
                  uVar21 = uVar18;
                  if (*(uint *)(puVar27 + 5) <= uVar18) {
                    uVar21 = 0;
                  }
                  lVar24 = puVar27[6] + (ulong)uVar21 * 0x120;
                  pcVar59 = *(char **)(lVar24 + 0xb8);
                  if (pcVar59 != pcVar56) {
                    lVar46 = 0;
                    do {
                      if (pcVar56[lVar46] == '\0') goto LAB_03d51e18;
                      if (pcVar56[lVar46 + 1] == '\0') {
                        lVar46 = lVar46 + 1;
                        goto LAB_03d51e18;
                      }
                      if (pcVar56[lVar46 + 2] == '\0') {
                        lVar46 = lVar46 + 2;
                        goto LAB_03d51e18;
                      }
                      lVar46 = lVar46 + 3;
                    } while (lVar46 != 0x80001);
                    lVar46 = 0;
LAB_03d51e18:
                    iVar41 = *(int *)(lVar24 + 0xc0);
                    iVar19 = (int)lVar46;
                    if (iVar41 <= (int)lVar46) {
                      iVar19 = iVar41 + -1;
                    }
                    memcpy(pcVar59,pcVar56,(long)iVar19);
                    pcVar59[iVar19] = '\0';
                  }
                  uVar21 = *(uint *)(puVar27 + 3);
                  if (0 < (int)uVar21) {
                    uVar42 = 0;
                    do {
                      uVar37 = uVar42;
                      if (uVar21 <= uVar42) {
                        uVar37 = 0;
                      }
                      plVar22 = (long *)(puVar27[4] + (ulong)uVar37 * 0xb8);
                      local_c0 = PTR_DAT_04bb2020 + 0x10;
                      local_b8 = pcVar56;
                      (**(code **)(*plVar22 + 0x18))(plVar22);
                      (**(code **)(*plVar22 + 0x18))(plVar22);
                      pcVar59 = (char *)plVar22[1];
                      (**(code **)(local_c0 + 0x18))(&local_c0);
                      if (pcVar59 == local_b8) {
LAB_03d51e54:
                        uVar21 = uVar18;
                        if (*(uint *)(puVar27 + 5) <= uVar18) {
                          uVar21 = 0;
                        }
                        *(short *)(puVar27[6] + (ulong)uVar21 * 0x120 + 0x112) = (short)uVar42;
                      }
                      else {
                        uVar23 = 0;
                        bVar14 = true;
                        do {
                          lVar24 = plVar22[1] + 1 + uVar23;
                          cVar7 = *(char *)(lVar24 + -1);
                          if (cVar7 != local_b8[uVar23]) break;
                          if (cVar7 == '\0') {
                            if (bVar14) goto LAB_03d51e54;
                            break;
                          }
                          cVar7 = *(char *)(plVar22[1] + 1 + uVar23);
                          if (cVar7 != local_b8[uVar23 + 1]) break;
                          if (cVar7 == '\0') goto LAB_03d51e54;
                          cVar7 = *(char *)(lVar24 + 1);
                          if (cVar7 != local_b8[uVar23 + 2]) break;
                          if (cVar7 == '\0') goto LAB_03d51e54;
                          bVar14 = uVar23 < 0x7fffe;
                          uVar23 = uVar23 + 3;
                        } while (uVar23 != 0x80001);
                      }
                      uVar21 = *(uint *)(puVar27 + 3);
                      uVar42 = uVar42 + 1;
                    } while ((int)uVar42 < (int)uVar21);
                  }
                }
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 5) <= uVar18) {
                  uVar21 = 0;
                }
                *(undefined4 *)(puVar27[6] + (ulong)uVar21 * 0x120 + 0x108) = uVar20;
                if (local_258 != (char *)0x0) goto LAB_03d5186c;
                goto LAB_03d517a0;
              }
LAB_03d51864:
              if (local_258 == (char *)0x0) goto LAB_03d517a0;
LAB_03d5186c:
              pcVar56 = local_258;
              local_c0 = puVar1;
              local_b8 = local_258;
              bVar16 = FUN_03eb8920(&local_c0);
              uVar21 = uVar18;
              if (*(uint *)(puVar27 + 5) <= uVar18) {
                uVar21 = 0;
              }
              *(byte *)(puVar27[6] + (ulong)uVar21 * 0x120 + 0x117) = bVar16 & 1;
              local_c0 = puVar1;
              local_b8 = pcVar56;
              bVar16 = FUN_03eb8d10(&local_c0);
              uVar21 = uVar18;
              if (*(uint *)(puVar27 + 5) <= uVar18) {
                uVar21 = 0;
              }
              *(byte *)(puVar27[6] + (ulong)uVar21 * 0x120 + 0x118) = bVar16 & 1;
              uVar42 = *(uint *)(puVar27 + 5);
              lVar24 = puVar27[6];
              uVar21 = uVar18;
              if (uVar42 <= uVar18) {
                uVar21 = 0;
              }
              if (*(char *)(lVar24 + (ulong)uVar21 * 0x120 + 0x115) == '\0') {
                if (*(char *)(lVar24 + (ulong)uVar21 * 0x120 + 0x116) != '\0') {
                  uVar23 = (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x90))();
                  uVar42 = *(uint *)(puVar27 + 5);
                  lVar24 = puVar27[6];
                  if ((uVar23 & 1) != 0) {
                    uVar21 = uVar18;
                    if (uVar42 <= uVar18) {
                      uVar21 = 0;
                    }
                    lVar46 = lVar24 + (ulong)uVar21 * 0x120;
                    pcVar59 = *(char **)(lVar46 + 8);
                    if (pcVar59 != pcVar56) {
                      lVar24 = 0;
                      do {
                        if (pcVar56[lVar24] == '\0') goto LAB_03d51f8c;
                        if (pcVar56[lVar24 + 1] == '\0') {
                          lVar24 = lVar24 + 1;
                          goto LAB_03d51f8c;
                        }
                        if (pcVar56[lVar24 + 2] == '\0') {
                          lVar24 = lVar24 + 2;
                          goto LAB_03d51f8c;
                        }
                        lVar24 = lVar24 + 3;
                      } while (lVar24 != 0x80001);
                      lVar24 = 0;
LAB_03d51f8c:
                      iVar41 = *(int *)(lVar46 + 0x10);
                      iVar19 = (int)lVar24;
                      if (iVar41 <= (int)lVar24) {
                        iVar19 = iVar41 + -1;
                      }
                      memcpy(pcVar59,pcVar56,(long)iVar19);
                      pcVar59[iVar19] = '\0';
                      uVar42 = *(uint *)(puVar27 + 5);
                      lVar24 = puVar27[6];
                    }
                    uVar21 = uVar18;
                    if (uVar42 <= uVar18) {
                      uVar21 = 0;
                    }
                    plVar22 = (long *)(lVar24 + (ulong)uVar21 * 0x120);
                    pvVar57 = (void *)plVar22[0xc];
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    pvVar60 = (void *)plVar22[1];
                    if (pvVar57 == pvVar60) goto LAB_03d517a0;
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    lVar24 = 0;
                    do {
                      if (*(char *)(plVar22[1] + lVar24) == '\0') goto LAB_03d52040;
                      lVar46 = plVar22[1] + lVar24;
                      if (*(char *)(lVar46 + 1) == '\0') {
                        lVar24 = lVar24 + 1;
                        goto LAB_03d52040;
                      }
                      if (*(char *)(lVar46 + 2) == '\0') {
                        lVar24 = lVar24 + 2;
                        goto LAB_03d52040;
                      }
                      lVar24 = lVar24 + 3;
                    } while (lVar24 != 0x80001);
                    lVar24 = 0;
LAB_03d52040:
                    iVar19 = (int)lVar24;
                    if ((int)plVar22[0xd] <= (int)lVar24) {
                      iVar19 = (int)plVar22[0xd] + -1;
                    }
                    memcpy(pvVar57,pvVar60,(long)iVar19);
                    *(undefined1 *)((long)pvVar57 + (long)iVar19) = 0;
                    uVar18 = uVar18 + 1;
                    goto joined_r0x03d51794;
                  }
                }
                uVar21 = uVar18;
                if (uVar42 <= uVar18) {
                  uVar21 = 0;
                }
                FUN_038d1270(lVar24 + (ulong)uVar21 * 0x120,"%s.bffnt",pcVar56);
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 5) <= uVar18) {
                  uVar21 = 0;
                }
                FUN_038d1270(puVar27[6] + (ulong)uVar21 * 0x120 + 0x58,&DAT_0409e973,pcVar56);
                uVar42 = *(uint *)(puVar27 + 5);
                lVar24 = puVar27[6];
                uVar21 = uVar18;
                if (uVar42 <= uVar18) {
                  uVar21 = 0;
                }
                if (*(char *)(lVar24 + (ulong)uVar21 * 0x120 + 0x118) != '\0') {
                  lVar24 = lVar24 + (ulong)uVar21 * 0x120;
                  plVar22 = (long *)(lVar24 + 0x58);
                  (**(code **)(*plVar22 + 0x18))(plVar22);
                  lVar46 = *(long *)(lVar24 + 0x60);
                  lVar24 = 0;
                  do {
                    if (*(char *)(lVar46 + lVar24) == '\0') goto LAB_03d51cc8;
                    if (*(char *)(lVar46 + lVar24 + 1) == '\0') {
                      lVar24 = lVar24 + 1;
                      goto LAB_03d51cc8;
                    }
                    if (*(char *)(lVar46 + lVar24 + 2) == '\0') {
                      lVar24 = lVar24 + 2;
                      goto LAB_03d51cc8;
                    }
                    lVar24 = lVar24 + 3;
                  } while (lVar24 != 0x80001);
                  lVar24 = 0;
LAB_03d51cc8:
                  iVar41 = (int)lVar24;
                  iVar19 = iVar41;
                  if (4 < iVar41) {
                    iVar19 = 5;
                  }
                  *(undefined1 *)(lVar46 + (iVar41 - iVar19)) = 0;
                  uVar42 = *(uint *)(puVar27 + 5);
                  lVar24 = puVar27[6];
                }
                uVar21 = uVar18;
                if (uVar42 <= uVar18) {
                  uVar21 = 0;
                }
                lVar24 = lVar24 + (ulong)uVar21 * 0x120;
                local_c0 = PTR_DAT_04bb2020 + 0x10;
                local_b8 = ".bffnt";
                plVar22 = (long *)(lVar24 + 0x58);
                lVar25 = *(long *)(lVar24 + 0x60);
                (**(code **)(*plVar22 + 0x18))(plVar22);
                lVar46 = 0;
                do {
                  if (*(char *)(*(long *)(lVar24 + 0x60) + lVar46) == '\0') goto LAB_03d51d5c;
                  lVar58 = *(long *)(lVar24 + 0x60) + lVar46;
                  if (*(char *)(lVar58 + 1) == '\0') {
                    lVar46 = lVar46 + 1;
                    goto LAB_03d51d5c;
                  }
                  if (*(char *)(lVar58 + 2) == '\0') {
                    lVar46 = lVar46 + 2;
                    goto LAB_03d51d5c;
                  }
                  lVar46 = lVar46 + 3;
                } while (lVar46 != 0x80001);
                lVar46 = 0;
LAB_03d51d5c:
                uVar21 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                (**(code **)(local_c0 + 0x18))(&local_c0);
                lVar24 = 0;
                do {
                  if (local_b8[lVar24] == '\0') goto LAB_03d51dbc;
                  if (local_b8[lVar24 + 1] == '\0') goto LAB_03d51db0;
                  if (local_b8[lVar24 + 2] == '\0') goto LAB_03d51db8;
                  lVar24 = lVar24 + 3;
                } while (lVar24 != 0x80001);
              }
              else {
                FUN_038d1270(lVar24 + (ulong)uVar21 * 0x120,"%s.fcpx",pcVar56);
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 5) <= uVar18) {
                  uVar21 = 0;
                }
                FUN_038d1270(puVar27[6] + (ulong)uVar21 * 0x120 + 0x58,&DAT_0409e973,pcVar56);
                uVar42 = *(uint *)(puVar27 + 5);
                lVar24 = puVar27[6];
                uVar21 = uVar18;
                if (uVar42 <= uVar18) {
                  uVar21 = 0;
                }
                if (*(char *)(lVar24 + (ulong)uVar21 * 0x120 + 0x118) != '\0') {
                  lVar24 = lVar24 + (ulong)uVar21 * 0x120;
                  plVar22 = (long *)(lVar24 + 0x58);
                  (**(code **)(*plVar22 + 0x18))(plVar22);
                  lVar46 = *(long *)(lVar24 + 0x60);
                  lVar24 = 0;
                  do {
                    if (*(char *)(lVar46 + lVar24) == '\0') goto LAB_03d51bdc;
                    if (*(char *)(lVar46 + lVar24 + 1) == '\0') {
                      lVar24 = lVar24 + 1;
                      goto LAB_03d51bdc;
                    }
                    if (*(char *)(lVar46 + lVar24 + 2) == '\0') {
                      lVar24 = lVar24 + 2;
                      goto LAB_03d51bdc;
                    }
                    lVar24 = lVar24 + 3;
                  } while (lVar24 != 0x80001);
                  lVar24 = 0;
LAB_03d51bdc:
                  iVar41 = (int)lVar24;
                  iVar19 = iVar41;
                  if (4 < iVar41) {
                    iVar19 = 5;
                  }
                  *(undefined1 *)(lVar46 + (iVar41 - iVar19)) = 0;
                  uVar42 = *(uint *)(puVar27 + 5);
                  lVar24 = puVar27[6];
                }
                uVar21 = uVar18;
                if (uVar42 <= uVar18) {
                  uVar21 = 0;
                }
                lVar24 = lVar24 + (ulong)uVar21 * 0x120;
                local_c0 = PTR_DAT_04bb2020 + 0x10;
                local_b8 = ".fcpx";
                plVar22 = (long *)(lVar24 + 0x58);
                lVar25 = *(long *)(lVar24 + 0x60);
                (**(code **)(*plVar22 + 0x18))(plVar22);
                lVar46 = 0;
                do {
                  if (*(char *)(*(long *)(lVar24 + 0x60) + lVar46) == '\0') goto LAB_03d51c70;
                  lVar58 = *(long *)(lVar24 + 0x60) + lVar46;
                  if (*(char *)(lVar58 + 1) == '\0') {
                    lVar46 = lVar46 + 1;
                    goto LAB_03d51c70;
                  }
                  if (*(char *)(lVar58 + 2) == '\0') {
                    lVar46 = lVar46 + 2;
                    goto LAB_03d51c70;
                  }
                  lVar46 = lVar46 + 3;
                } while (lVar46 != 0x80001);
                lVar46 = 0;
LAB_03d51c70:
                uVar21 = (uint)lVar46 & ((int)(uint)lVar46 >> 0x1f ^ 0xffffffffU);
                (**(code **)(local_c0 + 0x18))(&local_c0);
                lVar24 = 0;
                do {
                  if (local_b8[lVar24] == '\0') goto LAB_03d51dbc;
                  if (local_b8[lVar24 + 1] == '\0') goto LAB_03d51db0;
                  if (local_b8[lVar24 + 2] == '\0') goto LAB_03d51db8;
                  lVar24 = lVar24 + 3;
                } while (lVar24 != 0x80001);
              }
              lVar24 = 0;
              goto LAB_03d51dbc;
            }
          }
        }
      }
      puVar48 = (undefined8 *)*puVar27;
      local_1d8 = (short *)((ulong)local_1d8 & 0xffffff0000000000);
      uVar23 = FUN_03ea9450(puVar48,&local_1d8,"MessageStudio");
      puVar1 = PTR_DAT_04bb2bc0;
      if (((uVar23 & 1) == 0) || (1 < local_1d8._4_1_ - 0xc0)) {
        local_1e0 = (uint *)0x0;
      }
      else {
        local_288 = (short *)*puVar48;
        puVar51 = (uint *)((long)local_288 + ((ulong)local_1d8 & 0xffffffff));
        local_1e8 = local_288;
        local_1e0 = puVar51;
        if ((local_288 != (short *)0x0) && ((*puVar51 & 0xfe) == 0xc0)) {
          uVar42 = *puVar51;
          uVar21 = uVar42 >> 8;
          uVar18 = uVar21;
          if (*local_288 == 0x5942) {
            uVar18 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
          }
          if (uVar18 != 0) {
            if ((uVar42 & 0xfe) == 0xc0) {
              if (*local_288 == 0x5942) {
                uVar21 = uVar21 & 0xff00 | uVar42 >> 0x18 | (uVar21 & 0xff) << 0x10;
              }
              if (uVar21 != 0) {
                lVar24 = *(long *)PTR_DAT_04bb2698;
                sVar49 = (ulong)uVar21 * 0x58 + 8;
                if (lVar24 == 0) {
                  puVar28 = malloc(sVar49);
                }
                else {
                  lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar22 = (long *)(lVar24 + 8);
                  if (lVar46 != 0) {
                    plVar22 = (long *)(lVar46 + 0xa8);
                  }
                  plVar22 = (long *)*plVar22;
                  if (plVar22 == (long *)0x0) goto LAB_03d5212c;
                  puVar28 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar49,8);
                }
                if (puVar28 != (ulong *)0x0) {
                  uVar23 = (ulong)uVar21;
                  uVar50 = uVar23 * 0x58 - 0x58;
                  puVar36 = puVar28 + 1;
                  *puVar28 = uVar23;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar50;
                  puVar40 = puVar36;
                  if ((SUB164(auVar11 * ZEXT816(0x2e8ba2e8ba2e8ba3),8) >> 4 & 1) == 0) {
                    *(undefined1 *)((long)puVar28 + 0x1c) = 0;
                    *(undefined4 *)(puVar28 + 3) = 0x40;
                    puVar40 = puVar28 + 0xc;
                    puVar28[2] = (ulong)((long)puVar28 + 0x1c);
                    *(undefined1 *)((long)puVar28 + 0x5b) = 0;
                    puVar28[1] = (ulong)(puVar1 + 0x10);
                  }
                  if (0x57 < uVar50) {
                    do {
                      *(undefined4 *)(puVar40 + 2) = 0x40;
                      *(undefined1 *)((long)puVar40 + 0x53) = 0;
                      *(undefined1 *)((long)puVar40 + 0x14) = 0;
                      *(undefined4 *)(puVar40 + 0xd) = 0x40;
                      *(undefined1 *)((long)puVar40 + 0xab) = 0;
                      *puVar40 = (ulong)(puVar1 + 0x10);
                      puVar40[1] = (ulong)((long)puVar40 + 0x14);
                      *(undefined1 *)((long)puVar40 + 0x6c) = 0;
                      puVar40[0xb] = (ulong)(puVar1 + 0x10);
                      puVar40[0xc] = (ulong)((long)puVar40 + 0x6c);
                      puVar40 = puVar40 + 0x16;
                    } while (puVar40 != puVar36 + uVar23 * 0xb);
                  }
                  puVar27[8] = puVar36;
                  *(uint *)(puVar27 + 7) = uVar21;
                  local_288 = local_1e8;
                  puVar51 = local_1e0;
                }
              }
            }
LAB_03d5212c:
            uVar18 = 0;
            pcVar56 = PTR_DAT_04bb2f70 + 0x10;
LAB_03d52194:
            if (puVar51 == (uint *)0x0) {
              uVar21 = 0;
            }
            else {
              if ((*puVar51 & 0xfe) != 0xc0) goto LAB_03d4edcc;
              uVar21 = *puVar51 >> 8;
              if (*local_288 == 0x5942) {
                uVar21 = uVar21 & 0xff00 | *puVar51 >> 0x18 | (uVar21 & 0xff) << 0x10;
              }
            }
            if (uVar18 < uVar21) {
              local_200 = (undefined8 *)0x0;
              local_1f8 = 0;
              uStack_1f0 = 0;
              FUN_03ea95cc(&local_1e8,&local_1f8,&local_200,uVar18);
              if (local_200 != (undefined8 *)0x0) {
                local_205 = 0;
                local_248 = 0x40;
                local_250 = (char *)local_244;
                if (local_244 != local_200) {
                  lVar24 = 0;
                  do {
                    if (*(char *)((long)local_200 + lVar24) == '\0') {
LAB_03d52274:
                      iVar19 = (int)lVar24;
joined_r0x03d52278:
                      if (0x3f < iVar19) {
                        iVar19 = 0x3f;
                      }
                      goto LAB_03d52280;
                    }
                    if (*(char *)((long)local_200 + lVar24 + 1) == '\0') {
                      lVar24 = lVar24 + 1;
                      goto LAB_03d52274;
                    }
                    if (*(char *)((long)local_200 + lVar24 + 2) == '\0') {
                      iVar19 = (int)lVar24 + 2;
                      goto joined_r0x03d52278;
                    }
                    lVar24 = lVar24 + 3;
                  } while (lVar24 != 0x80001);
                  iVar19 = 0;
LAB_03d52280:
                  local_258 = pcVar56;
                  memcpy(local_244,local_200,(long)iVar19);
                  *(undefined1 *)((long)local_244 + (long)iVar19) = 0;
                }
                local_258 = puVar1 + 0x10;
                uVar23 = FUN_03eb8d10(&local_258);
                if ((uVar23 & 1) != 0) {
                  (**(code **)(local_258 + 0x18))(&local_258);
                  lVar24 = 0;
                  do {
                    if (*(char *)((long)local_250 + lVar24) == '\0') goto LAB_03d5230c;
                    if (*(char *)((long)local_250 + lVar24 + 1) == '\0') {
                      lVar24 = lVar24 + 1;
                      goto LAB_03d5230c;
                    }
                    if (*(char *)((long)local_250 + lVar24 + 2) == '\0') {
                      lVar24 = lVar24 + 2;
                      goto LAB_03d5230c;
                    }
                    lVar24 = lVar24 + 3;
                  } while (lVar24 != 0x80001);
                  lVar24 = 0;
LAB_03d5230c:
                  iVar41 = (int)lVar24;
                  iVar19 = iVar41;
                  if (4 < iVar41) {
                    iVar19 = 5;
                  }
                  *(undefined1 *)((long)local_250 + (long)(iVar41 - iVar19)) = 0;
                }
                uVar21 = uVar18;
                if (*(uint *)(puVar27 + 7) <= uVar18) {
                  uVar21 = 0;
                }
                lVar24 = puVar27[8] + (ulong)uVar21 * 0x58;
                **(undefined1 **)(lVar24 + 8) = 0;
                (**(code **)(local_258 + 0x18))(&local_258);
                FUN_0071b954(&local_1d8,"%s.bffnt",local_250);
                (**(code **)(local_258 + 0x18))(&local_258);
                FUN_0071b954(&local_c0,"%s.fcpx",local_250);
                uVar21 = *(uint *)(puVar27 + 5);
                if (0 < (int)uVar21) {
                  uVar42 = 0;
                  do {
                    uVar37 = uVar42;
                    if (uVar21 <= uVar42) {
                      uVar37 = 0;
                    }
                    lVar46 = puVar27[6] + (ulong)uVar37 * 0x120;
                    plVar22 = (long *)(lVar46 + 0x58);
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    pcVar59 = *(char **)(lVar46 + 0x60);
                    (**(code **)((long)local_1d8 + 0x18))(&local_1d8);
                    if (pcVar59 == local_1d0) {
LAB_03d52544:
                      pcVar54 = *(char **)(lVar24 + 8);
                      (**(code **)((long)local_1d8 + 0x18))(&local_1d8);
                      pcVar59 = local_1d0;
                      if (pcVar54 != local_1d0) {
                        (**(code **)((long)local_1d8 + 0x18))(&local_1d8);
                        lVar46 = 0;
                        goto LAB_03d52580;
                      }
                      break;
                    }
                    uVar23 = 0;
                    bVar14 = true;
                    lVar46 = *(long *)(lVar46 + 0x60) + 1;
                    do {
                      lVar25 = lVar46 + uVar23;
                      cVar7 = *(char *)(lVar25 + -1);
                      if (cVar7 != local_1d0[uVar23]) break;
                      if (cVar7 == '\0') {
                        if (bVar14) goto LAB_03d52544;
                        break;
                      }
                      cVar7 = *(char *)(lVar46 + uVar23);
                      if (cVar7 != local_1d0[uVar23 + 1]) break;
                      if (cVar7 == '\0') goto LAB_03d52544;
                      cVar7 = *(char *)(lVar25 + 1);
                      if (cVar7 != local_1d0[uVar23 + 2]) break;
                      if (cVar7 == '\0') goto LAB_03d52544;
                      bVar14 = uVar23 < 0x7fffe;
                      uVar23 = uVar23 + 3;
                    } while (uVar23 != 0x80001);
                    uVar21 = uVar42;
                    if (*(uint *)(puVar27 + 5) <= uVar42) {
                      uVar21 = 0;
                    }
                    lVar46 = puVar27[6] + (ulong)uVar21 * 0x120;
                    plVar22 = (long *)(lVar46 + 0x58);
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    pcVar59 = *(char **)(lVar46 + 0x60);
                    (**(code **)(local_c0 + 0x18))(&local_c0);
                    if (pcVar59 == local_b8) {
LAB_03d525ac:
                      pcVar54 = *(char **)(lVar24 + 8);
                      (**(code **)(local_c0 + 0x18))(&local_c0);
                      pcVar59 = local_b8;
                      if (pcVar54 != local_b8) {
                        (**(code **)(local_c0 + 0x18))(&local_c0);
                        lVar46 = 0;
                        goto LAB_03d525e4;
                      }
                      break;
                    }
                    uVar23 = 0;
                    bVar14 = true;
                    lVar46 = *(long *)(lVar46 + 0x60) + 1;
                    do {
                      lVar25 = lVar46 + uVar23;
                      cVar7 = *(char *)(lVar25 + -1);
                      if (cVar7 != local_b8[uVar23]) break;
                      if (cVar7 == '\0') {
                        if (bVar14) goto LAB_03d525ac;
                        break;
                      }
                      cVar7 = *(char *)(lVar46 + uVar23);
                      if (cVar7 != local_b8[uVar23 + 1]) break;
                      if (cVar7 == '\0') goto LAB_03d525ac;
                      cVar7 = *(char *)(lVar25 + 1);
                      if (cVar7 != local_b8[uVar23 + 2]) break;
                      if (cVar7 == '\0') goto LAB_03d525ac;
                      bVar14 = uVar23 < 0x7fffe;
                      uVar23 = uVar23 + 3;
                    } while (uVar23 != 0x80001);
                    uVar21 = *(uint *)(puVar27 + 5);
                    uVar42 = uVar42 + 1;
                  } while ((int)uVar42 < (int)uVar21);
                }
              }
              goto LAB_03d52190;
            }
          }
        }
      }
LAB_03d4edcc:
      lVar24 = param_1[7];
      uVar18 = *(uint *)(lVar24 + 0x28);
      if (0 < (int)uVar18) {
        uVar21 = 0;
        do {
          uVar42 = uVar21;
          if (uVar18 <= uVar21) {
            uVar42 = 0;
          }
          *(undefined1 *)(*(long *)(lVar24 + 0x30) + (ulong)uVar42 * 0x120 + 0x114) = 1;
          uVar18 = *(uint *)(lVar24 + 0x28);
          lVar46 = *(long *)(lVar24 + 0x30);
          uVar42 = uVar21;
          if (uVar18 <= uVar21) {
            uVar42 = 0;
          }
          uVar23 = (ulong)uVar42;
          if (*(char *)(lVar46 + uVar23 * 0x120 + 0x115) != '\0') {
            if (*(char *)(lVar46 + uVar23 * 0x120 + 0x118) == '\0') {
              *(undefined1 *)(lVar46 + uVar23 * 0x120 + 0x114) = 1;
              uVar18 = *(uint *)(lVar24 + 0x28);
              if (0 < (int)uVar18) {
                uVar42 = 0;
                do {
                  if (uVar21 != uVar42) {
                    lVar46 = *(long *)(lVar24 + 0x30);
                    uVar37 = uVar42;
                    if (uVar18 <= uVar42) {
                      uVar37 = 0;
                    }
                    if (*(char *)(lVar46 + (ulong)uVar37 * 0x120 + 0x117) != '\0') {
                      lVar25 = lVar46 + (ulong)uVar37 * 0x120;
                      uVar37 = uVar21;
                      if (uVar18 <= uVar21) {
                        uVar37 = 0;
                      }
                      lVar46 = lVar46 + (ulong)uVar37 * 0x120;
                      plVar22 = (long *)(lVar25 + 0x58);
                      (**(code **)(*plVar22 + 0x18))(plVar22);
                      (**(code **)(*plVar22 + 0x18))(plVar22);
                      plVar22 = (long *)(lVar46 + 0x58);
                      lVar58 = *(long *)(lVar25 + 0x60);
                      (**(code **)(*plVar22 + 0x18))(plVar22);
                      lVar46 = *(long *)(lVar46 + 0x60);
                      if (lVar58 == lVar46) {
LAB_03d4ee74:
                        uVar18 = uVar21;
                        if (*(uint *)(lVar24 + 0x28) <= uVar21) {
                          uVar18 = 0;
                        }
                        *(undefined1 *)(*(long *)(lVar24 + 0x30) + (ulong)uVar18 * 0x120 + 0x114) =
                             0;
                      }
                      else {
                        uVar23 = 0;
                        lVar46 = lVar46 + 1;
                        bVar14 = true;
                        lVar25 = *(long *)(lVar25 + 0x60) + 1;
                        do {
                          lVar58 = lVar25 + uVar23;
                          lVar53 = lVar46 + uVar23;
                          cVar7 = *(char *)(lVar58 + -1);
                          if (cVar7 != *(char *)(lVar53 + -1)) break;
                          if (cVar7 == '\0') {
                            if (bVar14) goto LAB_03d4ee74;
                            break;
                          }
                          cVar7 = *(char *)(lVar25 + uVar23);
                          if (cVar7 != *(char *)(lVar46 + uVar23)) break;
                          if (cVar7 == '\0') goto LAB_03d4ee74;
                          cVar7 = *(char *)(lVar58 + 1);
                          if (cVar7 != *(char *)(lVar53 + 1)) break;
                          if (cVar7 == '\0') goto LAB_03d4ee74;
                          bVar14 = uVar23 < 0x7fffe;
                          uVar23 = uVar23 + 3;
                        } while (uVar23 != 0x80001);
                      }
                    }
                  }
                  uVar18 = *(uint *)(lVar24 + 0x28);
                  uVar42 = uVar42 + 1;
                } while ((int)uVar42 < (int)uVar18);
              }
            }
            else {
              lVar46 = lVar46 + uVar23 * 0x120;
              *(undefined1 *)(lVar46 + 0x114) = *(undefined1 *)(lVar46 + 0x117);
              uVar18 = *(uint *)(lVar24 + 0x28);
            }
          }
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < (int)uVar18);
      }
    }
  }
  if (param_1[7] == 0) {
    return;
  }
  piVar35 = *(int **)PTR_DAT_04bb4eb8;
  if ((piVar35 == (int *)0x0) || ((char)piVar35[8] == '\0')) {
    uVar18 = FUN_038ceb30();
    if (5 < uVar18) goto LAB_03d4eff0;
LAB_03d4efd0:
    puVar27 = *(undefined8 **)(PTR_DAT_04bd0dc0 + (ulong)uVar18 * 8 + 0x18);
  }
  else {
    uVar23 = (ulong)(uint)(*piVar35 << 1);
    if (0x1f < (uint)(*piVar35 << 1)) {
      uVar23 = 0;
    }
    uVar18 = (uint)(byte)(&DAT_04058440)[uVar23];
    if ((byte)(&DAT_04058440)[uVar23] < 6) goto LAB_03d4efd0;
LAB_03d4eff0:
    puVar27 = &DAT_0407ebb1;
  }
  FUN_0071b954(&local_c0,"Font/BmpFont_%s.szs",puVar27);
  lVar24 = (**(code **)**(undefined8 **)PTR_DAT_04bd4508)
                     (*(undefined8 **)PTR_DAT_04bd4508,&local_c0);
  puVar1 = PTR_DAT_04bb21f8;
  if (lVar24 == 0) {
    local_1d8 = (short *)(PTR_DAT_04bb2020 + 0x10);
    local_1d0 = "Font/BmpFont_All.szs";
    lVar24 = (**(code **)**(undefined8 **)PTR_DAT_04bd4508)
                       (*(undefined8 **)PTR_DAT_04bd4508,&local_1d8);
    if (lVar24 != 0) goto LAB_03d4f078;
  }
  else {
LAB_03d4f078:
    param_1[3] = lVar24;
    FUN_006cd430(&local_1d8,lVar24);
    local_258 = PTR_DAT_04bb2020 + 0x10;
    local_250 = "";
    iVar19 = FUN_03eba830(&local_1d8,&local_258);
    FUN_038b3c54(&local_1d8);
    if (0 < iVar19) {
      iVar41 = 0;
      do {
        local_c5 = 0;
        local_1c8 = (undefined8 *)CONCAT35(local_1c8._5_3_,0x100);
        local_1d8 = (short *)(puVar1 + 0x10);
        local_1d0 = (char *)((long)&local_1c8 + 4);
        FUN_03eba9c0(&local_1d8,lVar24,iVar41);
        iVar41 = iVar41 + 1;
      } while (iVar19 != iVar41);
    }
  }
  puVar12 = PTR_DAT_04bb2bc0;
  local_6d = 0;
  local_b0 = 0x40;
  local_b8 = local_ac;
  local_ac[0] = '\0';
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  uVar18 = FUN_038cefc4();
  if (uVar18 < 0x10) {
    puVar27 = *(undefined8 **)(PTR_DAT_04bb43e0 + (ulong)uVar18 * 8 + 0x60);
  }
  else {
    puVar27 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_c0,"Font/ScalableFont_%s.szs",puVar27);
  lVar24 = (**(code **)**(undefined8 **)PTR_DAT_04bd4508)
                     (*(undefined8 **)PTR_DAT_04bd4508,&local_c0);
  if (lVar24 == 0) {
    *local_b8 = '\0';
    pcVar56 = local_b8;
    if (local_b8 != "Font/ScalableFont.szs") {
      iVar19 = 0x15;
      if (local_b0 < 0x16) {
        iVar19 = local_b0 + -1;
      }
      memcpy(local_b8,"Font/ScalableFont.szs",(long)iVar19);
      pcVar56[iVar19] = '\0';
    }
    lVar24 = (**(code **)**(undefined8 **)PTR_DAT_04bd4508)
                       (*(undefined8 **)PTR_DAT_04bd4508,&local_c0);
    if (lVar24 != 0) goto LAB_03d4f1f0;
  }
  else {
LAB_03d4f1f0:
    param_1[4] = lVar24;
    FUN_006cd430(&local_1d8,lVar24);
    local_258 = PTR_DAT_04bb2020 + 0x10;
    local_250 = "";
    iVar19 = FUN_03eba830(&local_1d8,&local_258);
    FUN_038b3c54(&local_1d8);
    if (0 < iVar19) {
      iVar41 = 0;
      do {
        local_c5 = 0;
        local_1c8 = (undefined8 *)CONCAT35(local_1c8._5_3_,0x100);
        local_1d8 = (short *)(puVar1 + 0x10);
        local_1d0 = (char *)((long)&local_1c8 + 4);
        FUN_03eba9c0(&local_1d8,lVar24,iVar41);
        iVar41 = iVar41 + 1;
      } while (iVar19 != iVar41);
    }
  }
  pcVar56 = PTR_DAT_04bb2020 + 0x10;
  local_250 = "Font/Fcpx.szs";
  local_258 = pcVar56;
  lVar24 = (**(code **)**(undefined8 **)PTR_DAT_04bd4508)
                     (*(undefined8 **)PTR_DAT_04bd4508,&local_258);
  if (lVar24 != 0) {
    param_1[5] = lVar24;
    FUN_006cd430(&local_1d8,lVar24);
    local_b8 = "";
    local_c0 = pcVar56;
    iVar19 = FUN_03eba830(&local_1d8,&local_c0);
    FUN_038b3c54(&local_1d8);
    if (0 < iVar19) {
      iVar41 = 0;
      do {
        local_c5 = 0;
        local_1c8 = (undefined8 *)CONCAT35(local_1c8._5_3_,0x100);
        local_1d8 = (short *)(puVar1 + 0x10);
        local_1d0 = (char *)((long)&local_1c8 + 4);
        FUN_03eba9c0(&local_1d8,lVar24,iVar41);
        iVar41 = iVar41 + 1;
      } while (iVar19 != iVar41);
    }
  }
  plVar22 = (long *)PTR_DAT_04bb2698;
  lVar24 = param_1[7];
  uVar23 = (ulong)*(uint *)(lVar24 + 0x28);
  if ((int)*(uint *)(lVar24 + 0x28) < 1) {
LAB_03d4f3b4:
    uVar18 = *(uint *)(lVar24 + 0x18);
    uVar23 = (ulong)uVar18;
    if (uVar18 != 0) {
      local_298 = 1;
      local_1d8 = (short *)(PTR_DAT_04bb2020 + 0x10);
      local_1d0 = "ScalableFont";
      lVar24 = FUN_038c6d48(0,&local_1d8,0,8,1,0);
      *param_1 = lVar24;
      if (lVar24 != 0) {
        lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        local_298 = *(long *)(lVar46 + 0xa8);
        *(long *)(lVar46 + 0xa8) = lVar24;
      }
      if ((int)uVar18 < 1) {
        local_278 = (short *)0x0;
        uVar21 = 0;
        lVar24 = *plVar22;
        if (lVar24 == 0) goto LAB_03d4f548;
LAB_03d50210:
        plVar26 = (long *)*param_1;
        if (plVar26 == (long *)0x0) {
          lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar26 = (long *)(lVar24 + 8);
          if (lVar46 != 0) {
            plVar26 = (long *)(lVar46 + 0xa8);
          }
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) {
            pcVar56 = (char *)0x0;
            goto LAB_03d50260;
          }
        }
        pcVar56 = (char *)(**(code **)(*plVar26 + 0x30))(plVar26,0x170e0,0xfffffffc);
      }
      else {
        lVar24 = *plVar22;
        if (lVar24 == 0) {
          local_278 = malloc(uVar23 << 6);
          if (local_278 == (short *)0x0) goto LAB_03d4fd90;
LAB_03d4f47c:
          puVar29 = (undefined4 *)local_278;
          do {
            *puVar29 = 0;
            *(undefined8 *)(puVar29 + 2) = 0;
            puVar29[4] = 0;
            *(undefined8 *)(puVar29 + 6) = 0;
            puVar29[8] = 0;
            *(undefined8 *)(puVar29 + 10) = 0;
            puVar29[0xc] = 0;
            *(undefined8 *)(puVar29 + 0xe) = 0;
            puVar29 = puVar29 + 0x10;
          } while (puVar29 != (undefined4 *)((long)local_278 + uVar23 * 0x10 * 4));
          uVar21 = uVar18;
        }
        else {
          lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar26 = (long *)(lVar24 + 8);
          if (lVar46 != 0) {
            plVar26 = (long *)(lVar46 + 0xa8);
          }
          plVar26 = (long *)*plVar26;
          if ((plVar26 != (long *)0x0) &&
             (local_278 = (short *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar23 << 6,0xfffffff8),
             local_278 != (short *)0x0)) goto LAB_03d4f47c;
LAB_03d4fd90:
          local_278 = (short *)0x0;
          uVar21 = 0;
        }
        uVar42 = 0;
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          lVar46 = param_1[7];
          uVar33 = *(uint *)(lVar46 + 8);
          uVar37 = uVar42;
          if (*(uint *)(lVar46 + 0x18) <= uVar42) {
            uVar37 = 0;
          }
          if (0 < (int)uVar33) {
            uVar47 = 0;
            lVar25 = *(long *)(lVar46 + 0x20) + (ulong)uVar37 * 0xb8;
            plVar26 = (long *)(lVar25 + 0x58);
            do {
              uVar37 = uVar47;
              if (uVar33 <= uVar47) {
                uVar37 = 0;
              }
              if (*(int *)(*(long *)(lVar46 + 0x10) + (ulong)uVar37 * 0x60) - 1U < 2) {
                lVar58 = *(long *)(lVar46 + 0x10) + (ulong)uVar37 * 0x60;
                (**(code **)(*plVar26 + 0x18))(plVar26);
                (**(code **)(*plVar26 + 0x18))(plVar26);
                plVar22 = (long *)(lVar58 + 8);
                lVar53 = *(long *)(lVar25 + 0x60);
                (**(code **)(*plVar22 + 0x18))(plVar22);
                lVar58 = *(long *)(lVar58 + 0x10);
                plVar22 = (long *)PTR_DAT_04bb2698;
                if (lVar53 == lVar58) {
LAB_03d4ff80:
                  if (*(uint *)(lVar46 + 8) <= uVar47) {
                    uVar47 = 0;
                  }
                  piVar35 = (int *)(*(long *)(lVar46 + 0x10) + (ulong)uVar47 * 0x60);
                  goto LAB_03d4ffa4;
                }
                uVar50 = 0;
                lVar58 = lVar58 + 1;
                bVar14 = true;
                lVar53 = *(long *)(lVar25 + 0x60) + 1;
                do {
                  lVar4 = lVar53 + uVar50;
                  lVar5 = lVar58 + uVar50;
                  cVar7 = *(char *)(lVar4 + -1);
                  if (cVar7 != *(char *)(lVar5 + -1)) break;
                  if (cVar7 == '\0') {
                    if (bVar14) goto LAB_03d4ff80;
                    break;
                  }
                  cVar7 = *(char *)(lVar53 + uVar50);
                  if (cVar7 != *(char *)(lVar58 + uVar50)) break;
                  if (cVar7 == '\0') goto LAB_03d4ff80;
                  cVar7 = *(char *)(lVar4 + 1);
                  if (cVar7 != *(char *)(lVar5 + 1)) break;
                  if (cVar7 == '\0') goto LAB_03d4ff80;
                  bVar14 = uVar50 < 0x7fffe;
                  uVar50 = uVar50 + 3;
                } while (uVar50 != 0x80001);
              }
              uVar33 = *(uint *)(lVar46 + 8);
              uVar47 = uVar47 + 1;
            } while ((int)uVar47 < (int)uVar33);
          }
          piVar35 = (int *)0x0;
LAB_03d4ffa4:
          lVar25 = *plVar22;
          lVar46 = *(long *)(param_1[7] + 0x20);
          uVar37 = uVar42;
          if (*(uint *)(param_1[7] + 0x18) <= uVar42) {
            uVar37 = 0;
          }
          uVar33 = uVar42;
          if (uVar21 <= uVar42) {
            uVar33 = 0;
          }
          puVar29 = (undefined4 *)((long)local_278 + (ulong)uVar33 * 0x10 * 4);
          if (lVar25 == 0) {
            pvVar57 = malloc(8);
joined_r0x03d501c8:
            if (pvVar57 != (void *)0x0) {
              *(void **)(puVar29 + 2) = pvVar57;
              *puVar29 = 1;
            }
          }
          else {
            lVar58 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar26 = (long *)(lVar25 + 8);
            if (lVar58 != 0) {
              plVar26 = (long *)(lVar58 + 0xa8);
            }
            plVar26 = (long *)*plVar26;
            if (plVar26 != (long *)0x0) {
              pvVar57 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,8,0xfffffff8);
              goto joined_r0x03d501c8;
            }
          }
          lVar25 = *plVar22;
          if (lVar25 == 0) {
            pvVar57 = malloc(4);
joined_r0x03d501d8:
            if (pvVar57 != (void *)0x0) {
              *(void **)(puVar29 + 6) = pvVar57;
              puVar29[4] = 1;
            }
          }
          else {
            lVar58 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar26 = (long *)(lVar25 + 8);
            if (lVar58 != 0) {
              plVar26 = (long *)(lVar58 + 0xa8);
            }
            plVar26 = (long *)*plVar26;
            if (plVar26 != (long *)0x0) {
              pvVar57 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,4,0xfffffff8);
              goto joined_r0x03d501d8;
            }
          }
          lVar25 = *plVar22;
          if (lVar25 == 0) {
            pvVar57 = malloc(1);
joined_r0x03d501e8:
            if (pvVar57 != (void *)0x0) {
              *(void **)(puVar29 + 10) = pvVar57;
              puVar29[8] = 1;
            }
          }
          else {
            lVar58 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar26 = (long *)(lVar25 + 8);
            if (lVar58 != 0) {
              plVar26 = (long *)(lVar58 + 0xa8);
            }
            plVar26 = (long *)*plVar26;
            if (plVar26 != (long *)0x0) {
              pvVar57 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,1,0xfffffff8);
              goto joined_r0x03d501e8;
            }
          }
          lVar25 = *plVar22;
          if (lVar25 == 0) {
            pvVar57 = malloc(4);
joined_r0x03d501f8:
            if (pvVar57 != (void *)0x0) {
              *(void **)(puVar29 + 0xe) = pvVar57;
              puVar29[0xc] = 1;
            }
          }
          else {
            lVar58 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar26 = (long *)(lVar25 + 8);
            if (lVar58 != 0) {
              plVar26 = (long *)(lVar58 + 0xa8);
            }
            plVar26 = (long *)*plVar26;
            if (plVar26 != (long *)0x0) {
              pvVar57 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,4,0xfffffff8);
              goto joined_r0x03d501f8;
            }
          }
          local_1d8 = (short *)((ulong)local_1d8 & 0xffffffff00000000);
          if (*piVar35 == 1) {
            uVar30 = *(undefined8 *)(puVar29 + 2);
            uVar31 = *(undefined8 *)(puVar29 + 6);
            (**(code **)(*(long *)(piVar35 + 2) + 0x18))(piVar35 + 2);
            plVar22 = (long *)PTR_DAT_04bb2698;
            FUN_03d52654(param_1,uVar30,uVar31,&local_1d8,*(undefined8 *)(piVar35 + 4));
            uVar20 = (undefined4)local_1d8;
          }
          else {
            uVar20 = 0;
            if (*piVar35 == 2) {
              puVar27 = *(undefined8 **)(puVar29 + 2);
              puVar52 = *(undefined4 **)(puVar29 + 6);
              nn::os::GetSystemTick();
              if ((*(ushort *)(param_1 + 10) & 1) == 0) {
                nn::pl::RequestSharedFontLoad(0);
                *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
              }
              while (iVar19 = nn::pl::GetSharedFontLoadState(0), iVar19 != 1) {
                nn::os::ConvertToTimeSpan(lVar24 / 100);
                nn::os::SleepThread();
              }
              uVar20 = nn::pl::GetSharedFontSize(0);
              *puVar52 = uVar20;
              uVar30 = nn::pl::GetSharedFontAddress(0);
              *puVar27 = uVar30;
              uVar20 = 0;
            }
          }
          uVar42 = uVar42 + 1;
          **(undefined1 **)(puVar29 + 10) = *(undefined1 *)(lVar46 + (ulong)uVar37 * 0xb8 + 0xb0);
          **(undefined4 **)(puVar29 + 0xe) = uVar20;
        } while (uVar42 != uVar18);
        lVar24 = *plVar22;
        if (lVar24 != 0) goto LAB_03d50210;
LAB_03d4f548:
        pcVar56 = malloc(0x170e0);
      }
LAB_03d50260:
      FUN_00353610(pcVar56);
      if ((int)uVar18 < 1) {
        __ptr = (void *)0x0;
        pvVar57 = (void *)0x0;
        local_290 = (void *)0x0;
        pvVar60 = (void *)0x0;
        __ptr_00 = (void *)0x0;
      }
      else {
        lVar24 = *plVar22;
        sVar49 = uVar23 << 3;
        if (lVar24 == 0) {
          local_290 = malloc(sVar49);
          bVar14 = local_290 != (void *)0x0;
LAB_03d50350:
          pvVar57 = malloc(sVar49);
LAB_03d50358:
          lVar24 = *plVar22;
          if (lVar24 != 0) goto LAB_03d50364;
LAB_03d504e8:
          pvVar60 = malloc(sVar49);
          bVar15 = pvVar60 != (void *)0x0;
LAB_03d504fc:
          __ptr = malloc(sVar49);
        }
        else {
          lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar26 = (long *)(lVar24 + 8);
          if (lVar46 != 0) {
            plVar26 = (long *)(lVar46 + 0xa8);
          }
          plVar26 = (long *)*plVar26;
          local_290 = (void *)0x0;
          if (plVar26 != (long *)0x0) {
            local_290 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,sVar49,0xfffffff8);
          }
          lVar24 = *plVar22;
          bVar14 = local_290 != (void *)0x0;
          if (lVar24 == 0) goto LAB_03d50350;
          lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar26 = (long *)(lVar24 + 8);
          if (lVar46 != 0) {
            plVar26 = (long *)(lVar46 + 0xa8);
          }
          plVar26 = (long *)*plVar26;
          if (plVar26 != (long *)0x0) {
            pvVar57 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,sVar49,0xfffffff8);
            goto LAB_03d50358;
          }
          pvVar57 = (void *)0x0;
          lVar24 = *plVar22;
          if (lVar24 == 0) goto LAB_03d504e8;
LAB_03d50364:
          lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar24 + 8);
          if (lVar46 != 0) {
            plVar22 = (long *)(lVar46 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            pvVar60 = (void *)0x0;
          }
          else {
            pvVar60 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar49,0xfffffff8);
          }
          bVar15 = pvVar60 != (void *)0x0;
          lVar24 = *(long *)PTR_DAT_04bb2698;
          if (lVar24 == 0) goto LAB_03d504fc;
          lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar24 + 8);
          if (lVar46 != 0) {
            plVar22 = (long *)(lVar46 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            __ptr = (void *)0x0;
          }
          else {
            __ptr = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar49,0xfffffff8);
          }
        }
        lVar24 = *(long *)PTR_DAT_04bb2698;
        if (lVar24 == 0) {
          __ptr_00 = malloc(uVar23 << 2);
        }
        else {
          lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar24 + 8);
          if (lVar46 != 0) {
            plVar22 = (long *)(lVar46 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            __ptr_00 = (void *)0x0;
          }
          else {
            __ptr_00 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar23 << 2,0xfffffff8);
          }
        }
        uVar38 = 0;
        uVar50 = 0;
        if (__ptr_00 != (void *)0x0) {
          uVar50 = uVar23;
        }
        do {
          uVar43 = uVar38 & 0xffffffff;
          uVar44 = uVar43;
          if (uVar21 <= uVar38) {
            uVar44 = 0;
          }
          bVar13 = uVar38 < uVar23;
          puVar29 = (undefined4 *)((long)local_278 + uVar44 * 0x10 * 4);
          uVar44 = uVar38;
          if (!(bool)(bVar14 & bVar13)) {
            uVar44 = 0;
          }
          uVar6 = uVar38;
          if (pvVar57 == (void *)0x0 || !bVar13) {
            uVar6 = 0;
          }
          *(undefined8 *)((long)local_290 + uVar44 * 8) = *(undefined8 *)(puVar29 + 2);
          *(undefined8 *)((long)pvVar57 + uVar6 * 8) = *(undefined8 *)(puVar29 + 6);
          uVar44 = uVar38;
          if (!(bool)(bVar15 & bVar13)) {
            uVar44 = 0;
          }
          uVar6 = uVar38;
          if (__ptr == (void *)0x0 || !bVar13) {
            uVar6 = 0;
          }
          uVar3 = uVar38 + 1;
          if (uVar50 <= uVar38) {
            uVar43 = 0;
          }
          *(undefined8 *)((long)pvVar60 + uVar44 * 8) = *(undefined8 *)(puVar29 + 10);
          *(undefined8 *)((long)__ptr + uVar6 * 8) = *(undefined8 *)(puVar29 + 0xe);
          *(undefined4 *)((long)__ptr_00 + uVar43 * 4) = *puVar29;
          uVar38 = uVar3;
        } while (uVar23 != uVar3);
        uVar38 = 0;
        pcVar54 = pcVar56 + 0x3a18;
        pcVar59 = pcVar56;
        pcVar55 = pcVar56 + 0x2818;
        do {
          lVar24 = uVar38 * 8;
          *(undefined8 *)(pcVar59 + 0x18) = **(undefined8 **)((long)local_290 + lVar24);
          *(ulong *)(pcVar59 + 0x1018) = (ulong)**(uint **)((long)pvVar57 + lVar24);
          pcVar59 = pcVar59 + 0x80;
          *pcVar55 = **(char **)((long)pvVar60 + lVar24);
          *(undefined4 *)pcVar54 = **(undefined4 **)((long)__ptr + lVar24);
          uVar44 = uVar38 & 0xffffffff;
          if (uVar50 <= uVar38) {
            uVar44 = 0;
          }
          *(undefined4 *)(pcVar56 + (uVar38 + 0x5a07) * 4) =
               *(undefined4 *)((long)__ptr_00 + uVar44 * 4);
          uVar38 = uVar38 + 1;
          pcVar54 = pcVar54 + 0x40;
          pcVar55 = pcVar55 + 0x10;
        } while (uVar23 != uVar38);
      }
      *(uint *)(pcVar56 + 0x16818) = uVar18;
      puVar1 = PTR_DAT_04bb26b8;
      puVar29 = (undefined4 *)
                (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x70))(*(long **)PTR_DAT_04bb26b8,0);
      uVar20 = puVar29[1];
      *(undefined4 *)pcVar56 = *puVar29;
      *(undefined4 *)(pcVar56 + 4) = uVar20;
      plVar22 = *(long **)puVar1;
      uVar20 = (**(code **)(*plVar22 + 0x78))(plVar22,0);
      *(undefined4 *)(pcVar56 + 0x168b0) = uVar20;
      uVar23 = (**(code **)(**(long **)puVar1 + 0x18))();
      uVar18 = ((uint)(uVar23 >> 1) & 0x55555555) + ((uint)uVar23 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar18 = (uVar18 >> 4 & 0x7070707) + (uVar18 & 0x7070707);
      uVar18 = (uVar18 >> 8 & 0xf000f) + (uVar18 & 0xf000f);
      pcVar56[0x170b4] = (uVar18 & 0x1f) + (uVar18 >> 0x10) != 0;
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar24 == 0) {
        uVar18 = nn::os::GetCurrentCoreNumber();
      }
      else {
        uVar18 = (int)lVar24 - 1;
      }
      uVar42 = 1 << (ulong)(uVar18 & 0x1f) | (uint)uVar23;
      bVar14 = (uVar42 & 1) == 0;
      DAT_05af7d48 = -(uint)bVar14;
      uVar18 = 1;
      if (!bVar14) {
        uVar18 = 2;
      }
      DAT_05af7d4c = (uint)!bVar14;
      if ((uVar42 & 2) == 0) {
        uVar18 = DAT_05af7d4c;
        DAT_05af7d4c = 0xffffffff;
      }
      local_1d8 = (short *)CONCAT44(local_1d8._4_4_,2);
      DAT_05af7d50 = uVar18;
      if ((uVar42 & 4) == 0) {
        DAT_05af7d50 = 0xffffffff;
      }
      if (pcVar56[0x170b4] != '\0') {
        if ((uVar42 & 4) != 0) {
          uVar18 = uVar18 + 1;
        }
        *(uint *)(pcVar56 + 0x170b8) = uVar18;
        *(undefined1 **)(pcVar56 + 0x170c0) = &LAB_03d5295c;
      }
      uVar18 = *(uint *)(param_1[7] + 0x28);
      uVar23 = (ulong)uVar18;
      if ((int)uVar18 < 1) {
        puVar27 = (undefined8 *)0x0;
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        pbVar39 = (byte *)(*(long *)(param_1[7] + 0x30) + 0x116);
        do {
          if (pbVar39[-2] != 0) {
            uVar18 = uVar18 + *pbVar39;
          }
          uVar23 = uVar23 - 1;
          pbVar39 = pbVar39 + 0x120;
        } while (uVar23 != 0);
        if ((int)uVar18 < 1) {
          puVar27 = (undefined8 *)0x0;
        }
        else {
          uVar23 = (ulong)uVar18;
          sVar49 = (uVar23 + (ulong)uVar18 * 2) * 8;
          lVar24 = *(long *)PTR_DAT_04bb2698;
          if (lVar24 == 0) {
            puVar27 = malloc(sVar49);
            if (puVar27 != (undefined8 *)0x0) goto LAB_03d508a0;
LAB_03d50944:
            uVar42 = 0;
          }
          else {
            lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar22 = (long *)(lVar24 + 8);
            if (lVar46 != 0) {
              plVar22 = (long *)(lVar46 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) {
              uVar42 = 0;
              puVar27 = (undefined8 *)0x0;
            }
            else {
              puVar27 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar49,0xfffffff8);
              if (puVar27 == (undefined8 *)0x0) goto LAB_03d50944;
LAB_03d508a0:
              uVar50 = uVar23 * 0x18 - 0x18;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar50;
              puVar48 = puVar27;
              if ((SUB164(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
                puVar48 = puVar27 + 3;
                *puVar27 = 0;
                *(undefined4 *)(puVar27 + 1) = 0;
                *(undefined2 *)((long)puVar27 + 0xc) = 0;
                *(undefined4 *)(puVar27 + 2) = 0;
                *(undefined2 *)((long)puVar27 + 0x14) = 0;
              }
              if (0x17 < uVar50) {
                do {
                  *puVar48 = 0;
                  *(undefined4 *)(puVar48 + 1) = 0;
                  *(undefined2 *)((long)puVar48 + 0xc) = 0;
                  *(undefined4 *)(puVar48 + 2) = 0;
                  *(undefined2 *)((long)puVar48 + 0x14) = 0;
                  puVar48[3] = 0;
                  *(undefined4 *)(puVar48 + 4) = 0;
                  *(undefined2 *)((long)puVar48 + 0x24) = 0;
                  *(undefined4 *)(puVar48 + 5) = 0;
                  *(undefined2 *)((long)puVar48 + 0x2c) = 0;
                  puVar48 = puVar48 + 6;
                } while (puVar48 != puVar27 + uVar23 * 3);
              }
              uVar42 = uVar18;
            }
          }
          uVar37 = 0;
          do {
            uVar33 = *(uint *)(param_1[7] + 0x28);
            uVar23 = (ulong)uVar33;
            if (0 < (int)uVar33) {
              plVar22 = *(long **)(param_1[7] + 0x30);
              uVar33 = 0;
              do {
                if ((*(char *)((long)plVar22 + 0x114) != '\0') &&
                   (*(char *)((long)plVar22 + 0x116) != '\0')) {
                  if (uVar33 == uVar37) goto LAB_03d50974;
                  uVar33 = uVar33 + 1;
                }
                plVar22 = plVar22 + 0x24;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
            plVar22 = (long *)0x0;
LAB_03d50974:
            (**(code **)(*plVar22 + 0x18))(plVar22);
            uVar33 = uVar37;
            if (uVar42 <= uVar37) {
              uVar33 = 0;
            }
            uVar37 = uVar37 + 1;
            plVar26 = puVar27 + (ulong)uVar33 * 3;
            *plVar26 = plVar22[1];
            *(int *)(plVar26 + 1) = (int)plVar22[0x21];
            uVar17 = *(undefined2 *)((long)plVar22 + 0x112);
            *(undefined4 *)(plVar26 + 2) = 0;
            *(undefined2 *)((long)plVar26 + 0xc) = uVar17;
          } while (uVar37 != uVar18);
        }
      }
      local_1d8 = (short *)0x0;
      local_1d0 = (char *)0x0;
      local_c0 = (char *)((ulong)local_c0 & 0xffffffff00000000);
      local_1c8 = (undefined8 *)0x0;
      local_1c0 = 0x1100000000;
      local_1b8 = 1;
      lVar46 = *(long *)PTR_DAT_04bb2698;
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar22 = (long *)(lVar46 + 8);
      if (lVar24 != 0) {
        plVar22 = (long *)(lVar24 + 0xa8);
      }
      local_1d8 = (short *)*plVar22;
      local_1c0 = CONCAT44(local_1c0._4_4_,uVar18);
      local_258 = PTR_DAT_04bb2020 + 0x10;
      local_250 = "UpdateScalableFont";
      local_1d0 = pcVar56;
      local_1c8 = puVar27;
      FUN_03c53c60(&local_c0,&local_258);
      local_258 = (char *)CONCAT44(local_258._4_4_,local_c0._4_4_);
      local_1b8 = 1 << (ulong)(local_c0._4_4_ & 0x1f);
      local_1c0 = CONCAT44((uint)local_c0,(undefined4)local_1c0);
      FUN_03b0de50(param_1[2],&local_1d8);
      if (puVar27 != (undefined8 *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(puVar27);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar27);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,puVar27);
          }
        }
      }
      if (__ptr_00 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr_00);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,__ptr_00);
          }
        }
      }
      if (__ptr != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,__ptr);
          }
        }
      }
      if (pvVar60 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar60);
        }
        else {
          plVar22 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar60);
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22,pvVar60);
          }
        }
      }
      plVar22 = (long *)PTR_DAT_04bb2698;
      if (pvVar57 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar57);
        }
        else {
          plVar26 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar57);
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x38))(plVar26,pvVar57);
          }
        }
      }
      if (local_290 != (void *)0x0) {
        if (*plVar22 == 0) {
          free(local_290);
        }
        else {
          plVar26 = (long *)FUN_038cb610(*plVar22,local_290);
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x38))(plVar26,local_290);
          }
        }
      }
      if ((int)uVar21 < 1) {
        if (local_278 != (short *)0x0) goto LAB_03d50d64;
LAB_03d50d88:
        lVar24 = *plVar22;
      }
      else {
        uVar23 = (ulong)uVar21;
        puVar29 = (undefined4 *)((long)local_278 + 0x20);
        do {
          pvVar57 = *(void **)(puVar29 + 6);
          if (pvVar57 != (void *)0x0) {
            if (*plVar22 == 0) {
              free(pvVar57);
            }
            else {
              plVar26 = (long *)FUN_038cb610(*plVar22,pvVar57);
              if (plVar26 != (long *)0x0) {
                (**(code **)(*plVar26 + 0x38))(plVar26,pvVar57);
              }
            }
            *(undefined8 *)(puVar29 + 6) = 0;
            puVar29[4] = 0;
          }
          pvVar57 = *(void **)(puVar29 + 2);
          if (pvVar57 != (void *)0x0) {
            if (*plVar22 == 0) {
              free(pvVar57);
            }
            else {
              plVar26 = (long *)FUN_038cb610(*plVar22,pvVar57);
              if (plVar26 != (long *)0x0) {
                (**(code **)(*plVar26 + 0x38))(plVar26,pvVar57);
              }
            }
            *(undefined8 *)(puVar29 + 2) = 0;
            *puVar29 = 0;
          }
          pvVar57 = *(void **)(puVar29 + -2);
          if (pvVar57 != (void *)0x0) {
            if (*plVar22 == 0) {
              free(pvVar57);
            }
            else {
              plVar26 = (long *)FUN_038cb610(*plVar22,pvVar57);
              if (plVar26 != (long *)0x0) {
                (**(code **)(*plVar26 + 0x38))(plVar26,pvVar57);
              }
            }
            *(undefined8 *)(puVar29 + -2) = 0;
            puVar29[-4] = 0;
          }
          pvVar57 = *(void **)(puVar29 + -6);
          if (pvVar57 != (void *)0x0) {
            if (*plVar22 == 0) {
              free(pvVar57);
            }
            else {
              plVar26 = (long *)FUN_038cb610(*plVar22,pvVar57);
              if (plVar26 != (long *)0x0) {
                (**(code **)(*plVar26 + 0x38))(plVar26,pvVar57);
              }
            }
            *(undefined8 *)(puVar29 + -6) = 0;
            puVar29[-8] = 0;
          }
          uVar23 = uVar23 - 1;
          puVar29 = puVar29 + 0x10;
        } while (uVar23 != 0);
LAB_03d50d64:
        if (*plVar22 != 0) {
          plVar26 = (long *)FUN_038cb610(*plVar22,local_278);
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x38))(plVar26,local_278);
          }
          goto LAB_03d50d88;
        }
        free(local_278);
        lVar24 = *plVar22;
      }
      if (lVar24 == 0) {
LAB_03d50dc8:
        free(pcVar56);
      }
      else {
        plVar26 = (long *)FUN_038cb610(lVar24,pcVar56);
        if (plVar26 != (long *)0x0) {
          lVar24 = *plVar26;
LAB_03d50da8:
          (**(code **)(lVar24 + 0x38))(plVar26,pcVar56);
        }
      }
      goto LAB_03d50dd0;
    }
  }
  else {
    iVar19 = 0;
    pcVar56 = (char *)(*(long *)(lVar24 + 0x30) + 0x115);
    uVar50 = uVar23;
    do {
      if (*pcVar56 != '\0') {
        iVar19 = iVar19 + (uint)(byte)pcVar56[-1];
      }
      uVar50 = uVar50 - 1;
      pcVar56 = pcVar56 + 0x120;
    } while (uVar50 != 0);
    if (iVar19 < 1) goto LAB_03d4f3b4;
    uVar18 = 0;
    pcVar56 = (char *)(*(long *)(lVar24 + 0x30) + 0x115);
    do {
      if (*pcVar56 != '\0') {
        uVar18 = uVar18 + (byte)pcVar56[-1];
      }
      uVar23 = uVar23 - 1;
      pcVar56 = pcVar56 + 0x120;
    } while (uVar23 != 0);
    if (uVar18 == 0) goto LAB_03d50e00;
    local_1d8 = (short *)(PTR_DAT_04bb2020 + 0x10);
    local_1d0 = "ScalableFont";
    lVar24 = FUN_038c6d48(0,&local_1d8,0,8,1,0);
    *param_1 = lVar24;
    if (lVar24 == 0) {
      lVar24 = *plVar22;
      local_298 = 1;
      if (lVar24 == 0) goto LAB_03d4f5b0;
LAB_03d4f568:
      lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar22 = (long *)(lVar24 + 8);
      if (lVar46 != 0) {
        plVar22 = (long *)(lVar46 + 0xa8);
      }
      plVar22 = (long *)*plVar22;
      pcVar56 = (char *)0x0;
      if (plVar22 != (long *)0x0) goto LAB_03d4f594;
    }
    else {
      lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      local_298 = *(long *)(lVar46 + 0xa8);
      *(long *)(lVar46 + 0xa8) = lVar24;
      lVar24 = *plVar22;
      if (lVar24 == 0) {
LAB_03d4f5b0:
        pcVar56 = malloc(0x170e0);
      }
      else {
        plVar22 = (long *)*param_1;
        if (plVar22 == (long *)0x0) goto LAB_03d4f568;
LAB_03d4f594:
        pcVar56 = (char *)(**(code **)(*plVar22 + 0x30))(plVar22,0x170e0,0xfffffffc);
      }
    }
    FUN_00353610();
    local_1e8 = (short *)0x0;
    if (0 < (int)uVar18) {
      pcVar59 = (char *)((long)&local_1c8 + 4);
      uVar21 = 0;
      puVar1 = PTR_DAT_04bb2f70 + 0x10;
      pcVar54 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bb2870 + 0x10;
      do {
        uVar42 = *(uint *)(param_1[7] + 0x28);
        uVar23 = (ulong)uVar42;
        if (0 < (int)uVar42) {
          plVar22 = *(long **)(param_1[7] + 0x30);
          uVar42 = 0;
          do {
            if ((*(char *)((long)plVar22 + 0x115) != '\0') &&
               (*(char *)((long)plVar22 + 0x114) != '\0')) {
              if (uVar42 == uVar21) goto LAB_03d4f684;
              uVar42 = uVar42 + 1;
            }
            plVar22 = plVar22 + 0x24;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        plVar22 = (long *)0x0;
LAB_03d4f684:
        local_185 = 0;
        local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x40);
        local_1d8 = (short *)puVar1;
        local_1d0 = pcVar59;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        pcVar55 = (char *)plVar22[1];
        if (pcVar59 != pcVar55) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
          lVar24 = 0;
          do {
            if (*(char *)(plVar22[1] + lVar24) == '\0') goto LAB_03d4f70c;
            lVar46 = plVar22[1] + lVar24;
            if (*(char *)(lVar46 + 1) == '\0') {
              lVar24 = lVar24 + 1;
              goto LAB_03d4f70c;
            }
            if (*(char *)(lVar46 + 2) == '\0') {
              lVar24 = lVar24 + 2;
              goto LAB_03d4f70c;
            }
            lVar24 = lVar24 + 3;
          } while (lVar24 != 0x80001);
          lVar24 = 0;
LAB_03d4f70c:
          iVar19 = (int)lVar24;
          if ((int)local_1c8 <= (int)lVar24) {
            iVar19 = (int)local_1c8 + -1;
          }
          memcpy(pcVar59,pcVar55,(long)iVar19);
          pcVar59[iVar19] = '\0';
        }
        pcVar55 = local_1d0;
        lVar24 = 0;
        local_1d0[(long)(int)local_1c8 + -1] = '\0';
        do {
          if (local_1d0[lVar24] == '\0') goto LAB_03d4f794;
          if (local_1d0[lVar24 + 1] == '\0') {
            lVar24 = lVar24 + 1;
            goto LAB_03d4f794;
          }
          if (local_1d0[lVar24 + 2] == '\0') {
            lVar24 = lVar24 + 2;
            goto LAB_03d4f794;
          }
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
        lVar24 = 0;
LAB_03d4f794:
        iVar41 = (int)lVar24;
        iVar19 = iVar41;
        if (4 < iVar41) {
          iVar19 = 5;
        }
        local_1d0[iVar41 - iVar19] = '\0';
        local_b8 = ".bfcpx";
        local_1d8 = (short *)(puVar12 + 0x10);
        local_c0 = pcVar54;
        (**(code **)(puVar12 + 0x28))(&local_1d8);
        lVar24 = 0;
        do {
          if (local_1d0[lVar24] == '\0') goto LAB_03d4f814;
          if (local_1d0[lVar24 + 1] == '\0') {
            lVar24 = lVar24 + 1;
            goto LAB_03d4f814;
          }
          if (local_1d0[lVar24 + 2] == '\0') {
            lVar24 = lVar24 + 2;
            goto LAB_03d4f814;
          }
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
        lVar24 = 0;
LAB_03d4f814:
        uVar42 = (uint)lVar24 & ((int)(uint)lVar24 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_c0 + 0x18))(&local_c0);
        lVar24 = 0;
        do {
          if (local_b8[lVar24] == '\0') goto LAB_03d4f874;
          if (local_b8[lVar24 + 1] == '\0') {
            lVar24 = lVar24 + 1;
            goto LAB_03d4f874;
          }
          if (local_b8[lVar24 + 2] == '\0') {
            lVar24 = lVar24 + 2;
            goto LAB_03d4f874;
          }
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
        lVar24 = 0;
LAB_03d4f874:
        uVar37 = (uint)lVar24;
        if ((int)((int)local_1c8 - uVar42) <= (int)(uint)lVar24) {
          uVar37 = (int)local_1c8 + ~uVar42;
        }
        if (0 < (int)uVar37) {
          (**(code **)(local_c0 + 0x18))(&local_c0);
          memcpy(pcVar55 + uVar42,local_b8,(ulong)uVar37);
          pcVar55[(int)(uVar37 + uVar42)] = '\0';
        }
        plVar22 = (long *)param_1[5];
        if (((*PTR_DAT_04bb2868 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar19 != 0)) {
          *(undefined **)PTR_DAT_04bb2860 = puVar2;
          __cxa_guard_release(PTR_DAT_04bb2868);
        }
        uVar23 = (**(code **)*plVar22)(plVar22,PTR_DAT_04bb2860);
        if ((uVar23 & 1) == 0) {
          plVar22 = (long *)0x0;
        }
        lVar24 = (**(code **)(*plVar22 + 0x30))(plVar22,&local_1d8,&local_1e8);
        if (lVar24 != 0) {
          uVar17 = FUN_0038d284(pcVar56,&LAB_03d52910,0,lVar24);
          piVar35 = (int *)(lVar24 + 0x14 + (ulong)*(uint *)(lVar24 + 0x14));
          if (*piVar35 == 1) {
            iVar19 = piVar35[2];
            uVar32 = (undefined2)piVar35[5];
            iVar41 = (int)(float)piVar35[1];
          }
          else {
            iVar19 = 0;
            iVar41 = 0;
            uVar32 = 0;
          }
          lVar24 = param_1[7];
          if (0 < (int)*(uint *)(lVar24 + 0x28)) {
            uVar23 = 0;
            uVar42 = 0;
            pcVar55 = (char *)(*(long *)(lVar24 + 0x30) + 0x115);
            do {
              if ((*pcVar55 != '\0') && (pcVar55[-1] != '\0')) {
                if (uVar42 == uVar21) {
                  *(int *)(pcVar55 + -0xd) = iVar41;
                  uVar42 = (uint)uVar23;
                  uVar50 = uVar23;
                  if (*(uint *)(lVar24 + 0x28) <= uVar42) {
                    uVar50 = 0;
                  }
                  *(int *)(*(long *)(lVar24 + 0x30) + uVar50 * 0x120 + 0x10c) = iVar19;
                  uVar50 = uVar23;
                  if (*(uint *)(lVar24 + 0x28) <= uVar42) {
                    uVar50 = 0;
                  }
                  *(undefined2 *)(*(long *)(lVar24 + 0x30) + uVar50 * 0x120 + 0x110) = uVar32;
                  if (*(uint *)(lVar24 + 0x28) <= uVar42) {
                    uVar23 = 0;
                  }
                  *(undefined2 *)(*(long *)(lVar24 + 0x30) + uVar23 * 0x120 + 0x112) = uVar17;
                  break;
                }
                uVar42 = uVar42 + 1;
              }
              uVar23 = uVar23 + 1;
              pcVar55 = pcVar55 + 0x120;
            } while (*(uint *)(lVar24 + 0x28) != uVar23);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar18);
    }
    *(uint *)(pcVar56 + 0x16818) = uVar18;
    puVar1 = PTR_DAT_04bb26b8;
    puVar29 = (undefined4 *)
              (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x70))(*(long **)PTR_DAT_04bb26b8,0);
    uVar20 = puVar29[1];
    *(undefined4 *)pcVar56 = *puVar29;
    *(undefined4 *)(pcVar56 + 4) = uVar20;
    uVar20 = (**(code **)(**(long **)puVar1 + 0x78))(*(long **)puVar1,0);
    *(undefined4 *)(pcVar56 + 0x168b0) = uVar20;
    uVar30 = (**(code **)(**(long **)puVar1 + 0x80))(*(long **)puVar1,0);
    *(undefined8 *)(pcVar56 + 0x168a0) = uVar30;
    uVar30 = (**(code **)(**(long **)puVar1 + 0x88))(*(long **)puVar1,0);
    *(undefined8 *)(pcVar56 + 0x168a8) = uVar30;
    uVar23 = (**(code **)(**(long **)puVar1 + 0x18))();
    uVar21 = ((uint)(uVar23 >> 1) & 0x55555555) + ((uint)uVar23 & 0x55555555);
    uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
    uVar21 = (uVar21 >> 4 & 0x7070707) + (uVar21 & 0x7070707);
    uVar21 = (uVar21 >> 8 & 0xf000f) + (uVar21 & 0xf000f);
    pcVar56[0x170b4] = (uVar21 & 0x1f) + (uVar21 >> 0x10) != 0;
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar24 == 0) {
      uVar21 = nn::os::GetCurrentCoreNumber();
    }
    else {
      uVar21 = (int)lVar24 - 1;
    }
    plVar22 = (long *)PTR_DAT_04bb2698;
    uVar42 = 1 << (ulong)(uVar21 & 0x1f) | (uint)uVar23;
    bVar14 = (uVar42 & 1) == 0;
    DAT_05af7d48 = -(uint)bVar14;
    uVar21 = 1;
    if (!bVar14) {
      uVar21 = 2;
    }
    DAT_05af7d4c = (uint)!bVar14;
    if ((uVar42 & 2) == 0) {
      uVar21 = DAT_05af7d4c;
      DAT_05af7d4c = 0xffffffff;
    }
    local_1d8._0_4_ = 2;
    DAT_05af7d50 = uVar21;
    if ((uVar42 & 4) == 0) {
      DAT_05af7d50 = 0xffffffff;
    }
    if (pcVar56[0x170b4] != '\0') {
      if ((uVar42 & 4) != 0) {
        uVar21 = uVar21 + 1;
      }
      *(uint *)(pcVar56 + 0x170b8) = uVar21;
      *(undefined1 **)(pcVar56 + 0x170c0) = &LAB_03d5295c;
    }
    *(undefined1 **)(pcVar56 + 0x170c8) = &LAB_03d529b0;
    *(undefined1 **)(pcVar56 + 0x170d0) = &LAB_03d529d0;
    if ((int)uVar18 < 1) {
      puVar27 = (undefined8 *)0x0;
    }
    else {
      uVar23 = (ulong)uVar18;
      lVar24 = *plVar22;
      sVar49 = (uVar23 + (ulong)uVar18 * 2) * 8;
      if (lVar24 == 0) {
        puVar27 = malloc(sVar49);
        if (puVar27 != (undefined8 *)0x0) goto LAB_03d4fc44;
LAB_03d503bc:
        uVar21 = 0;
      }
      else {
        lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar26 = (long *)(lVar24 + 8);
        if (lVar46 != 0) {
          plVar26 = (long *)(lVar46 + 0xa8);
        }
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          uVar21 = 0;
          puVar27 = (undefined8 *)0x0;
        }
        else {
          puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,sVar49,8);
          if (puVar27 == (undefined8 *)0x0) goto LAB_03d503bc;
LAB_03d4fc44:
          uVar50 = uVar23 * 0x18 - 0x18;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar50;
          puVar48 = puVar27;
          if ((SUB164(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
            puVar48 = puVar27 + 3;
            *puVar27 = 0;
            *(undefined4 *)(puVar27 + 1) = 0;
            *(undefined2 *)((long)puVar27 + 0xc) = 0;
            *(undefined4 *)(puVar27 + 2) = 0;
            *(undefined2 *)((long)puVar27 + 0x14) = 0;
          }
          if (0x17 < uVar50) {
            do {
              *puVar48 = 0;
              *(undefined4 *)(puVar48 + 1) = 0;
              *(undefined2 *)((long)puVar48 + 0xc) = 0;
              *(undefined4 *)(puVar48 + 2) = 0;
              *(undefined2 *)((long)puVar48 + 0x14) = 0;
              puVar48[3] = 0;
              *(undefined4 *)(puVar48 + 4) = 0;
              *(undefined2 *)((long)puVar48 + 0x24) = 0;
              *(undefined4 *)(puVar48 + 5) = 0;
              *(undefined2 *)((long)puVar48 + 0x2c) = 0;
              puVar48 = puVar48 + 6;
            } while (puVar48 != puVar27 + uVar23 * 3);
          }
          uVar21 = uVar18;
        }
      }
      uVar42 = 0;
      do {
        uVar37 = *(uint *)(param_1[7] + 0x28);
        uVar23 = (ulong)uVar37;
        if (0 < (int)uVar37) {
          lVar24 = *(long *)(param_1[7] + 0x30);
          uVar37 = 0;
          do {
            if ((*(char *)(lVar24 + 0x115) != '\0') && (*(char *)(lVar24 + 0x114) != '\0')) {
              if (uVar37 == uVar42) goto LAB_03d50444;
              uVar37 = uVar37 + 1;
            }
            lVar24 = lVar24 + 0x120;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        lVar24 = 0;
LAB_03d50444:
        (**(code **)(*(long *)(lVar24 + 0x58) + 0x18))((long *)(lVar24 + 0x58));
        uVar37 = uVar42;
        if (uVar21 <= uVar42) {
          uVar37 = 0;
        }
        uVar42 = uVar42 + 1;
        puVar48 = puVar27 + (ulong)uVar37 * 3;
        *puVar48 = *(undefined8 *)(lVar24 + 0x60);
        *(undefined4 *)(puVar48 + 1) = *(undefined4 *)(lVar24 + 0x108);
        *(undefined2 *)((long)puVar48 + 0xc) = *(undefined2 *)(lVar24 + 0x112);
        *(undefined4 *)(puVar48 + 2) = *(undefined4 *)(lVar24 + 0x10c);
        *(undefined2 *)((long)puVar48 + 0x14) = *(undefined2 *)(lVar24 + 0x110);
      } while (uVar42 != uVar18);
    }
    local_1d8 = (short *)((ulong)local_1d8._4_4_ << 0x20);
    lVar46 = *plVar22;
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar26 = (long *)(lVar46 + 8);
    if (lVar24 != 0) {
      plVar26 = (long *)(lVar24 + 0xa8);
    }
    local_1d8 = (short *)*plVar26;
    local_1c0 = CONCAT44(local_1c0._4_4_,uVar18);
    local_258 = PTR_DAT_04bb2020 + 0x10;
    local_250 = "UpdateScalableFont";
    local_1d0 = pcVar56;
    local_1c8 = puVar27;
    FUN_03c53c60(&local_c0,&local_258);
    local_258 = (char *)CONCAT44(local_258._4_4_,local_c0._4_4_);
    local_1b8 = 1 << (ulong)(local_c0._4_4_ & 0x1f);
    local_1c0 = CONCAT44((uint)local_c0,(undefined4)local_1c0);
    FUN_03b0de50(param_1[2],&local_1d8);
    if (*plVar22 == 0) goto LAB_03d50dc8;
    plVar26 = (long *)FUN_038cb610(*plVar22,pcVar56);
    if (plVar26 != (long *)0x0) {
      lVar24 = *plVar26;
      goto LAB_03d50da8;
    }
LAB_03d50dd0:
    (**(code **)(*(long *)*param_1 + 0x28))();
    if (local_298 != 1) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      *(long *)(lVar24 + 0xa8) = local_298;
    }
  }
LAB_03d50e00:
  lVar46 = *plVar22;
  lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar27 = (undefined8 *)(lVar46 + 8);
  if (lVar24 != 0) {
    puVar27 = (undefined8 *)(lVar24 + 0xa8);
  }
  uVar30 = *puVar27;
  uVar18 = *(uint *)(param_1[7] + 0x38);
  if ((int)uVar18 < 1) goto LAB_03d50eec;
  lVar24 = *plVar22;
  if (lVar24 == 0) {
    pvVar57 = malloc((ulong)uVar18 << 3);
joined_r0x03d50f4c:
    if (pvVar57 != (void *)0x0) {
      *(uint *)(param_1 + 8) = uVar18;
      param_1[9] = (long)pvVar57;
    }
  }
  else {
    lVar46 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar22 = (long *)(lVar24 + 8);
    if (lVar46 != 0) {
      plVar22 = (long *)(lVar46 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) {
      pvVar57 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(ulong)uVar18 << 3,8);
      goto joined_r0x03d50f4c;
    }
  }
  uVar21 = 0;
  do {
    uVar42 = uVar21;
    if (*(uint *)(param_1[7] + 0x38) <= uVar21) {
      uVar42 = 0;
    }
    plVar22 = (long *)(*(long *)(param_1[7] + 0x40) + (ulong)uVar42 * 0x58);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    uVar42 = uVar21;
    if (*(uint *)(param_1 + 8) <= uVar21) {
      uVar42 = 0;
    }
    uVar21 = uVar21 + 1;
    *(long *)(param_1[9] + (ulong)uVar42 * 8) = plVar22[1];
  } while (uVar18 != uVar21);
LAB_03d50eec:
  lVar24 = param_1[3];
  if (lVar24 == 0) {
    lVar24 = param_1[2];
    uVar31 = 0;
    uVar20 = 0;
  }
  else {
    uVar31 = *(undefined8 *)(lVar24 + 8);
    uVar20 = *(undefined4 *)(lVar24 + 0x10);
    lVar24 = param_1[2];
  }
  FUN_03b10e10(param_1[1],uVar30,uVar31,uVar20,param_1 + 8,lVar24);
  return;
LAB_03d51db0:
  lVar24 = lVar24 + 1;
  goto LAB_03d51dbc;
LAB_03d51db8:
  lVar24 = lVar24 + 2;
LAB_03d51dbc:
  uVar42 = (uint)lVar24;
  if ((int)((int)plVar22[2] - uVar21) <= (int)(uint)lVar24) {
    uVar42 = (int)plVar22[2] + ~uVar21;
  }
  if (0 < (int)uVar42) {
    (**(code **)(local_c0 + 0x18))(&local_c0);
    memcpy((void *)(lVar25 + (ulong)uVar21),local_b8,(ulong)uVar42);
    *(undefined1 *)(lVar25 + (int)(uVar42 + uVar21)) = 0;
  }
LAB_03d517a0:
  uVar18 = uVar18 + 1;
  goto joined_r0x03d51794;
  while( true ) {
    if (local_1d0[lVar46 + 1] == '\0') goto LAB_03d5215c;
    if (local_1d0[lVar46 + 2] == '\0') goto LAB_03d52614;
    lVar46 = lVar46 + 3;
    if (lVar46 == 0x80001) break;
LAB_03d52580:
    if (local_1d0[lVar46] == '\0') goto LAB_03d52160;
  }
  goto LAB_03d5260c;
  while( true ) {
    if (local_b8[lVar46 + 1] == '\0') goto LAB_03d5215c;
    if (local_b8[lVar46 + 2] == '\0') goto LAB_03d52614;
    lVar46 = lVar46 + 3;
    if (lVar46 == 0x80001) break;
LAB_03d525e4:
    if (local_b8[lVar46] == '\0') goto LAB_03d52160;
  }
LAB_03d5260c:
  lVar46 = 0;
LAB_03d52160:
  iVar19 = (int)lVar46;
  if (*(int *)(lVar24 + 0x10) <= (int)lVar46) {
    iVar19 = *(int *)(lVar24 + 0x10) + -1;
  }
  memcpy(pcVar54,pcVar59,(long)iVar19);
  pcVar54[iVar19] = '\0';
LAB_03d52190:
  uVar18 = uVar18 + 1;
  goto LAB_03d52194;
LAB_03d5215c:
  lVar46 = lVar46 + 1;
  goto LAB_03d52160;
LAB_03d52614:
  lVar46 = lVar46 + 2;
  goto LAB_03d52160;
}

