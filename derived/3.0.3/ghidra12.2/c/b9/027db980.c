
/* WARNING: Removing unreachable block (ram,0x027dba68) */
/* WARNING: Removing unreachable block (ram,0x027dba9c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb0 : 0x027dbaa4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_027db980(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  undefined2 local_1b8;
  undefined1 local_1b6;
  undefined4 local_1b4;
  undefined *local_1b0;
  char *pcStack_1a8;
  uint local_19c;
  uint local_198 [36];
  uint local_108 [36];
  undefined8 local_78;
  ulong local_70 [2];
  
  puVar4 = PTR_DAT_04bb40b8;
  lVar19 = *(long *)PTR_DAT_04bb4138;
  if (lVar19 != 0) {
    uVar5 = *(uint *)(lVar19 + 0x1c0);
    if ((int)uVar5 < 1) {
      if ((*(long *)(lVar19 + 0xb0) == 0) ||
         (puVar7 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar7 == (uint *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar7;
      }
    }
    local_108[0] = 0;
    local_108[1] = 0;
    local_108[2] = 0;
    local_108[3] = 0;
    local_108[0x20] = 0;
    local_108[0x21] = 0;
    local_108[0x22] = 0;
    local_198[0x22] = 0;
    local_198[0xc] = 0;
    local_198[0xd] = 0;
    local_108[4] = 0;
    local_108[5] = 0;
    local_108[6] = 0;
    local_108[7] = 0;
    local_108[8] = 0;
    local_108[9] = 0;
    local_108[10] = 0;
    local_108[0xb] = 0;
    local_108[0xc] = 0;
    local_108[0xd] = 0;
    local_108[0xe] = 0;
    local_108[0xf] = 0;
    local_108[0x10] = 0;
    local_108[0x11] = 0;
    local_108[0x12] = 0;
    local_108[0x13] = 0;
    local_108[0x14] = 0;
    local_108[0x15] = 0;
    local_108[0x16] = 0;
    local_108[0x17] = 0;
    local_108[0x18] = 0;
    local_108[0x19] = 0;
    local_108[0x1a] = 0;
    local_108[0x1b] = 0;
    local_108[0x1c] = 0;
    local_108[0x1d] = 0;
    local_108[0x1e] = 0;
    local_108[0x1f] = 0;
    local_198[0x1e] = 0;
    local_198[0x1f] = 0;
    local_198[0x20] = 0;
    local_198[0x21] = 0;
    local_198[0x1a] = 0;
    local_198[0x1b] = 0;
    local_198[0x1c] = 0;
    local_198[0x1d] = 0;
    local_198[0x16] = 0;
    local_198[0x17] = 0;
    local_198[0x18] = 0;
    local_198[0x19] = 0;
    local_198[0x12] = 0;
    local_198[0x13] = 0;
    local_198[0x14] = 0;
    local_198[0x15] = 0;
    local_198[0xe] = 0;
    local_198[0xf] = 0;
    local_198[0x10] = 0;
    local_198[0x11] = 0;
    local_198[8] = 0;
    local_198[9] = 0;
    local_198[10] = 0;
    local_198[0xb] = 0;
    local_198[4] = 0;
    local_198[5] = 0;
    local_198[6] = 0;
    local_198[7] = 0;
    local_198[0] = 0;
    local_198[1] = 0;
    local_198[2] = 0;
    local_198[3] = 0;
    if (*(char *)(*(long *)PTR_DAT_04bb2118 + 0x54a) == '\0') {
      if (uVar5 != 0) {
        uVar21 = 0;
        uVar13 = 0;
        uVar8 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        puVar7 = (uint *)PTR_DAT_04bb6a50;
        pcVar16 = PTR_DAT_04bb40b0;
        plVar18 = (long *)PTR_PTR_04bc1178;
LAB_027dbec0:
        if ((int)*(uint *)(lVar19 + 0x1c0) < 1) {
          if ((((*(long *)(lVar19 + 0xb0) != 0) &&
               (puVar9 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
              ((*(uint *)(lVar19 + 200) <= uVar21 ||
               (*(char *)(*(long *)(lVar19 + 0xd0) + (long)(int)uVar21) != '\0')))) &&
             (((uVar21 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
            iVar17 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              iVar17 = 0x1c;
            }
            puVar9 = (uint *)((ulong)(puVar9[1] * uVar21 + (uint)(ushort)puVar9[2] * 8 + iVar17) +
                             (long)puVar9);
            goto joined_r0x027dc020;
          }
        }
        else if (uVar21 < *(uint *)(lVar19 + 0x1c0)) {
          uVar2 = uVar21;
          if (*(uint *)(lVar19 + 0x1b0) <= uVar21) {
            uVar2 = 0;
          }
          puVar9 = *(uint **)(*(long *)(lVar19 + 0x1b8) + (ulong)uVar2 * 8);
joined_r0x027dc020:
          if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
            cVar11 = *pcVar16;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *pcVar16 = '\x01';
                *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
              }
              else {
                uVar2 = *(uint *)(puVar4 + 0x78);
                if (-1 < (int)uVar2) {
                  if (((char *)((ulong)uVar2 + (long)puVar9) != (char *)0x0) &&
                     (*(char *)((ulong)uVar2 + (long)puVar9) != '\0')) {
                    uVar2 = *puVar9;
                    uVar12 = 0;
                    if ((uVar2 != 0) && (puVar9 != (uint *)(ulong)uVar2)) {
                      puVar14 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
                      uVar12 = 0;
                      if (*puVar14 != 0) {
                        uVar2 = puVar14[1];
                        if ((uVar2 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                          lVar10 = 0xc;
                          if (*(char *)((long)puVar14 + 10) != '\0') {
                            lVar10 = 0x1c;
                          }
                          lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
                          if (lVar10 != 0) {
                            uVar12 = 0;
                            if ((ulong)uVar2 != 0) {
                              uVar12 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar2);
                            }
                            if (*puVar14 <= uVar12) {
                              uVar12 = 0xffffffff;
                            }
                            if ((uVar12 < *puVar7) &&
                               (uVar12 = (uint)*(ushort *)
                                                (*(long *)(puVar7 + 2) + (long)(int)uVar12 * 2),
                               uVar12 < 8)) goto LAB_027dc0b4;
                          }
                        }
                        uVar12 = 0;
                      }
                    }
LAB_027dc0b4:
                    local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,uVar12);
                    local_70[0] = CONCAT44(local_70[0]._4_4_,uVar12);
                    if (uVar12 == 1) {
                      local_78 = (ulong)local_78._4_4_ << 0x20;
                      uVar2 = *puVar9;
                      if (uVar2 == 0) goto LAB_027dc270;
                      uVar20 = (ulong)*(uint *)(puVar4 + 0x80);
                      goto LAB_027dc200;
                    }
                    if (uVar12 == 7) {
                      local_78 = (ulong)local_78._4_4_ << 0x20;
                      uVar2 = *puVar9;
                      if (uVar2 == 0) goto LAB_027dc158;
                      uVar20 = (ulong)*(uint *)(puVar4 + 0x80);
                      goto LAB_027dc0e8;
                    }
                  }
                  break;
                }
                if (uVar2 != 0xffffffff) break;
              }
              lVar10 = (long)puVar9 - (ulong)*puVar9;
              if ((*puVar9 == 0) || (lVar10 == 0)) break;
              lVar3 = 0xc;
              if (*(char *)(lVar10 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar10 == 0) break;
              uVar20 = (ulong)*(ushort *)(lVar10 + 8);
              *(undefined4 *)(puVar4 + 0x78) = 0xfffffffe;
              if (uVar20 == 0) break;
              piVar15 = (int *)(lVar3 + lVar10 + 4);
              while (piVar15[-1] != 0x454b2adc) {
                piVar15 = piVar15 + 2;
                uVar20 = uVar20 - 1;
                if (uVar20 == 0) goto LAB_027dbeb4;
              }
              iVar17 = 0;
              if (*piVar15 != -1) {
                iVar17 = *piVar15;
              }
              *(int *)(puVar4 + 0x78) = iVar17;
              if (*puVar9 == 0) break;
            } while( true );
          }
        }
        goto LAB_027dbeb4;
      }
      uVar8 = 0;
      uVar13 = 0;
LAB_027dbb20:
      local_78 = uVar13;
      local_70[0] = uVar8;
    }
    else {
      local_108[10] = 0x20000;
      local_108[0xb] = 0;
      local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,0x12);
      local_78 = 0x40000;
      local_70[0] = 0x400;
      local_198[0x12] = 1;
      local_198[0x13] = 0;
    }
    uVar13 = local_70[0];
    uVar8 = local_78;
    puVar4 = PTR_DAT_04bb2020;
    lVar19 = param_1 + 0xbf5e0;
    local_1b8 = 0x23;
    local_1b6 = 8;
    if (DAT_05594b4c == '\x01') {
      uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar5;
    }
    else {
      uVar5 = nn::os::GetSystemTick();
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      uVar21 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
      uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 3;
      uVar5 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 4 ^ uVar5 * 0x800 ^ uVar5;
    }
    if ((int)uVar5 < 0) {
      FUN_027db620(&local_19c,&local_1b4,&local_78,local_198);
      uVar20 = (ulong)local_19c;
      FUN_020fd218(&local_1b8,uVar20,local_1b4);
      FUN_0268c7a0(param_1,&local_1b8,0,0);
      uVar8 = (ulong)(byte)local_1b8;
      if (0x22 < (byte)local_1b8) {
        uVar8 = 0;
      }
      *(uint *)(lVar19 + uVar8 * 4) =
           *(uint *)(lVar19 + uVar8 * 4) | 1 << (ulong)(local_1b8._1_1_ & 0x1f);
      uVar21 = (uint)(uVar13 >> 0x20);
      uVar5 = (int)uVar13 - ((uint)(uVar13 >> 1) & 0x55555555);
      uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
      uVar21 = uVar21 + (uVar21 >> 8);
      uVar8 = 1L << (uVar20 & 0x3f);
      if ((1 < (uVar21 + (uVar21 >> 0x10) & 0x3f) + (uVar5 + (uVar5 >> 0x10) & 0x3f)) ||
         ((uVar8 & uVar13) == 0)) {
        local_70[0] = uVar13 & (uVar8 ^ 0xffffffffffffffff);
      }
      puVar6 = local_70;
      puVar7 = local_108;
    }
    else {
      FUN_027db620(&local_19c,&local_1b4,local_70,local_108);
      uVar20 = (ulong)local_19c;
      FUN_020fd218(&local_1b8,uVar20,local_1b4);
      FUN_0268c7a0(param_1,&local_1b8,0,0);
      uVar13 = (ulong)(byte)local_1b8;
      if (0x22 < (byte)local_1b8) {
        uVar13 = 0;
      }
      *(uint *)(lVar19 + uVar13 * 4) =
           *(uint *)(lVar19 + uVar13 * 4) | 1 << (ulong)(local_1b8._1_1_ & 0x1f);
      uVar21 = (uint)(uVar8 >> 0x20);
      uVar5 = (int)uVar8 - ((uint)(uVar8 >> 1) & 0x55555555);
      uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
      uVar21 = uVar21 + (uVar21 >> 8);
      uVar13 = 1L << (uVar20 & 0x3f);
      if ((1 < (uVar21 + (uVar21 >> 0x10) & 0x3f) + (uVar5 + (uVar5 >> 0x10) & 0x3f)) ||
         ((uVar13 & uVar8) == 0)) {
        local_78 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
      }
      puVar6 = &local_78;
      puVar7 = local_198;
    }
    FUN_027db620(&local_19c,&local_1b4,puVar6,puVar7);
    FUN_020fd218(&local_1b8,local_19c,local_1b4);
    FUN_0268c7a0(param_1 + 0x13230,&local_1b8,0,0);
    uVar8 = (ulong)(byte)local_1b8;
    *(undefined1 *)(param_1 + 0x1e3361) = 1;
    pcStack_1a8 = "MoveInCompletion";
    if (0x22 < (byte)local_1b8) {
      uVar8 = 0;
    }
    *(uint *)(lVar19 + uVar8 * 4) =
         *(uint *)(lVar19 + uVar8 * 4) | 1 << (ulong)(local_1b8._1_1_ & 0x1f);
    local_1b0 = puVar4 + 0x10;
    FUN_02749650(param_1 + 0x1267c,0,&local_1b0,1,0);
    pcStack_1a8 = "MoveInCompletion";
    local_1b0 = puVar4 + 0x10;
    FUN_02749650(param_1 + 0x258ac,1,&local_1b0,1,0);
  }
  return;
LAB_027dc200:
  if (-1 < (int)uVar20) {
    lVar10 = uVar20 + (long)puVar9;
    goto LAB_027dc274;
  }
  if ((uVar20 != 0xffffffff) || (lVar10 = (long)puVar9 - (ulong)uVar2, lVar10 == 0))
  goto LAB_027dc270;
  lVar3 = 0xc;
  if (*(char *)(lVar10 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar10 == 0) goto LAB_027dc270;
  uVar20 = (ulong)*(ushort *)(lVar10 + 8);
  *(undefined4 *)(puVar4 + 0x80) = 0xfffffffe;
  if (uVar20 == 0) goto LAB_027dc270;
  puVar7 = (uint *)(lVar3 + lVar10 + 4);
  while (puVar7[-1] != 0x2f1b930d) {
    puVar7 = puVar7 + 2;
    uVar20 = uVar20 - 1;
    if (uVar20 == 0) goto LAB_027dc270;
  }
  uVar20 = 0;
  if (*puVar7 != 0xffffffff) {
    uVar20 = (ulong)*puVar7;
  }
  *(int *)(puVar4 + 0x80) = (int)uVar20;
  uVar2 = *puVar9;
  if (uVar2 == 0) goto LAB_027dc270;
  goto LAB_027dc200;
LAB_027dc270:
  lVar10 = 0;
LAB_027dc274:
  pcStack_1a8 = (char *)*plVar18;
  if (lVar10 != 0) {
    pcStack_1a8 = (char *)lVar10;
  }
  local_1b0 = puVar1;
  uVar20 = FUN_020fc100(&local_78,&local_19c,&local_1b0);
  puVar7 = (uint *)PTR_DAT_04bb6a50;
  pcVar16 = PTR_DAT_04bb40b0;
  plVar18 = (long *)PTR_PTR_04bc1178;
  if ((uVar20 & 1) != 0) {
    uVar13 = 1L << (local_78 & 0x3f) | uVar13;
    uVar20 = local_78 & 0xffffffff;
    if (local_19c < 0x20) {
      if (0x22 < (uint)local_78) {
        uVar20 = 0;
      }
      local_198[uVar20] = local_198[uVar20] | 1 << (ulong)(local_19c & 0x1f);
    }
  }
  goto LAB_027dbeb4;
LAB_027dc0e8:
  if (-1 < (int)uVar20) {
    lVar10 = uVar20 + (long)puVar9;
    goto LAB_027dc15c;
  }
  if ((uVar20 != 0xffffffff) || (lVar10 = (long)puVar9 - (ulong)uVar2, lVar10 == 0))
  goto LAB_027dc158;
  lVar3 = 0xc;
  if (*(char *)(lVar10 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar10 == 0) goto LAB_027dc158;
  uVar20 = (ulong)*(ushort *)(lVar10 + 8);
  *(undefined4 *)(puVar4 + 0x80) = 0xfffffffe;
  if (uVar20 == 0) goto LAB_027dc158;
  puVar7 = (uint *)(lVar3 + lVar10 + 4);
  while (puVar7[-1] != 0x2f1b930d) {
    puVar7 = puVar7 + 2;
    uVar20 = uVar20 - 1;
    if (uVar20 == 0) goto LAB_027dc158;
  }
  uVar20 = 0;
  if (*puVar7 != 0xffffffff) {
    uVar20 = (ulong)*puVar7;
  }
  *(int *)(puVar4 + 0x80) = (int)uVar20;
  uVar2 = *puVar9;
  if (uVar2 == 0) goto LAB_027dc158;
  goto LAB_027dc0e8;
LAB_027dc158:
  lVar10 = 0;
LAB_027dc15c:
  pcStack_1a8 = (char *)*plVar18;
  if (lVar10 != 0) {
    pcStack_1a8 = (char *)lVar10;
  }
  local_1b0 = PTR_DAT_04bb2020 + 0x10;
  uVar20 = FUN_020fc100(&local_78,&local_19c,&local_1b0);
  puVar7 = (uint *)PTR_DAT_04bb6a50;
  pcVar16 = PTR_DAT_04bb40b0;
  plVar18 = (long *)PTR_PTR_04bc1178;
  if ((uVar20 & 1) != 0) {
    uVar8 = 1L << (local_78 & 0x3f) | uVar8;
    uVar20 = local_78 & 0xffffffff;
    if (local_19c < 0x20) {
      if (0x22 < (uint)local_78) {
        uVar20 = 0;
      }
      local_108[uVar20] = local_108[uVar20] | 1 << (ulong)(local_19c & 0x1f);
    }
  }
LAB_027dbeb4:
  uVar21 = uVar21 + 1;
  if (uVar21 == uVar5) goto LAB_027dbb20;
  goto LAB_027dbec0;
}

