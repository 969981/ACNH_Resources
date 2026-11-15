
/* WARNING: Removing unreachable block (ram,0x0201f338) */
/* WARNING: Removing unreachable block (ram,0x0201ed54) */
/* WARNING: Removing unreachable block (ram,0x0201e838) */
/* WARNING: Removing unreachable block (ram,0x0201e748) */
/* WARNING: Removing unreachable block (ram,0x0201e630) */
/* WARNING: Removing unreachable block (ram,0x0201f020) */
/* WARNING: Removing unreachable block (ram,0x0201e36c) */
/* WARNING: Removing unreachable block (ram,0x0201df58) */
/* WARNING: Removing unreachable block (ram,0x0201df10) */
/* WARNING: Removing unreachable block (ram,0x0201df50) */
/* WARNING: Removing unreachable block (ram,0x0201e360) */
/* WARNING: Removing unreachable block (ram,0x0201f010) */
/* WARNING: Removing unreachable block (ram,0x0201e628) */
/* WARNING: Removing unreachable block (ram,0x0201e740) */
/* WARNING: Removing unreachable block (ram,0x0201e830) */
/* WARNING: Removing unreachable block (ram,0x0201ed5c) */
/* WARNING: Removing unreachable block (ram,0x0201f340) */
/* WARNING: Removing unreachable block (ram,0x0201e5b4) */

void FUN_0201dec0(long param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  short sVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  int *piVar23;
  uint *puVar24;
  undefined1 *__src;
  long lVar25;
  undefined8 *puVar26;
  char *pcVar27;
  long lVar28;
  uint *puVar29;
  ulong uVar30;
  byte *pbVar31;
  undefined1 *puVar32;
  long lVar33;
  char *pcVar34;
  undefined8 uVar35;
  void *__dest;
  void *__src_00;
  char cVar36;
  long lVar37;
  int iVar38;
  undefined *puVar39;
  undefined *local_180;
  undefined **local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined1 local_155;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined *local_c8;
  undefined1 local_c0;
  int local_bc;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined *local_a0;
  int local_98;
  long local_90;
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  
  local_a0 = PTR_DAT_04bc43f8 + 0x10;
  local_98 = DAT_05636e70;
  local_170 = (undefined **)CONCAT44(local_170._4_4_,1);
  local_c8 = PTR_DAT_04bc4608 + 0x10;
  local_c0 = PTR_DAT_04bbc570[8];
  local_bc = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_b0 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_a4 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  local_90 = param_1;
  if (DAT_05636e70 != 0) {
    local_80 = &local_a0;
    local_88 = &PTR_FUN_04a9b150;
    local_78 = &local_c8;
    puVar26 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar26 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar26[1] != 0) {
      plVar19 = (long *)(*(code *)**(undefined8 **)(puVar26[1] + 0x10))();
      iVar15 = (**(code **)(*plVar19 + 0x18))();
      if (0 < iVar15) {
        iVar38 = 0;
        do {
          FUN_01360490(&local_170,puVar26[1],iVar38);
          uVar20 = (*(code *)*local_88)(&local_88,&local_170);
          if ((uVar20 & 1) != 0) break;
          bVar14 = iVar15 + -1 != iVar38;
          iVar38 = iVar38 + 1;
        } while (bVar14);
      }
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x11050);
  if (local_bc != 0) {
    FUN_02a8f7b0(&local_c8,param_1 + 0x105a8);
  }
  puVar2 = PTR_PTR_04bb2238;
  lVar28 = param_1 + 0x105d0;
  iVar15 = 0;
  do {
    lVar33 = lVar28 + (long)iVar15 * 0x180;
    iVar38 = 0;
    do {
      lVar37 = lVar33 + (long)iVar38 * 0x30;
      __dest = *(void **)(lVar37 + 8);
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
      __src_00 = *(void **)(puVar2 + 8);
      if (__dest != __src_00) {
        (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
        lVar25 = 0;
        do {
          if (*(char *)(*(long *)(puVar2 + 8) + lVar25) == '\0') goto LAB_0201e0c8;
          lVar5 = *(long *)(puVar2 + 8) + lVar25;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar25 = lVar25 + 1;
            goto LAB_0201e0c8;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar25 = lVar25 + 2;
            goto LAB_0201e0c8;
          }
          lVar25 = lVar25 + 3;
        } while (lVar25 != 0x80001);
        lVar25 = 0;
LAB_0201e0c8:
        iVar8 = *(int *)(lVar37 + 0x10);
        iVar18 = (int)lVar25;
        if (iVar8 <= (int)lVar25) {
          iVar18 = iVar8 + -1;
        }
        memcpy(__dest,__src_00,(long)iVar18);
        *(undefined1 *)((long)__dest + (long)iVar18) = 0;
      }
      iVar18 = iVar38 + 1;
      lVar37 = lVar33 + (long)iVar38 * 0x30;
      *(undefined8 *)(lVar37 + 0x25) = 0;
      *(undefined8 *)(lVar37 + 0x20) = 0;
      *(undefined1 *)(lVar37 + 0x2d) = 0xff;
      iVar38 = iVar18;
    } while (iVar18 != 8);
    iVar15 = iVar15 + 1;
  } while (iVar15 != 7);
  *(undefined4 *)(param_1 + 0x11053) = 0;
  *puVar1 = 0;
  puVar12 = PTR_DAT_04bb46b0;
  puVar2 = PTR_DAT_04bb27d0;
  lVar33 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar33 == 0) || (*(long *)(lVar33 + 0x28) == 0)) || (*(int *)(lVar33 + 0x80) != 1)) {
    if ((param_3 & 1) != 0) {
      local_170 = &PTR_LAB_04a6ed50;
      local_160 = &local_90;
      local_168 = (char *)param_1;
      FUN_016d43e0(&local_170);
      return;
    }
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if ((param_2 & 1) == 0) {
      if (lVar28 == 0) {
LAB_0201e4ac:
        lVar28 = 0;
      }
      else {
        puVar26 = *(undefined8 **)(lVar28 + 0x10);
        if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
          lVar33 = (**(code **)(*(long *)*puVar26 + 0x38))();
          lVar28 = 0;
          if (lVar33 != 0) {
            lVar28 = lVar33 + 0x70;
          }
        }
        else {
          if (puVar26 == (undefined8 *)0x0) goto LAB_0201e4ac;
          lVar28 = 0;
          if ((long *)puVar26[0x26] != (long *)0x0) {
            lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
          }
        }
      }
      plVar19 = (long *)(lVar28 + 0x1bf240);
      lVar33 = *(long *)(lVar28 + 0x1bf260);
      if (lVar33 == 0) {
        uVar20 = 0;
      }
      else {
        if (*(undefined8 **)(lVar33 + 0x10) == (undefined8 *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = (**(code **)**(undefined8 **)(lVar33 + 0x10))();
          lVar33 = *(long *)(lVar28 + 0x1bf260);
          uVar20 = uVar20 & 0xffffffff;
          if (lVar33 == 0) goto LAB_0201e560;
        }
        plVar21 = *(long **)(lVar33 + 0x20);
        if (plVar21 != (long *)0x0) {
          local_170 = (undefined **)*plVar19;
          local_168 = *(char **)(lVar28 + 0x1bf248);
          local_160 = (long *)0x94;
          (**(code **)(*plVar21 + 0x20))(plVar21,&local_170);
        }
      }
LAB_0201e560:
      local_cc = FUN_028d56b0(*(long *)(lVar28 + 0x1bf248) + *plVar19);
      lVar33 = local_90;
      if (local_cc == 7) {
        local_170 = (undefined **)CONCAT44(local_170._4_4_,1);
        lVar37 = local_90 + 0x10750 + (ulong)*(byte *)(local_90 + 0x11051) * 0x30;
        if (7 < *(byte *)(local_90 + 0x11051)) {
          lVar37 = local_90 + 0x10750;
        }
        puVar32 = *(undefined1 **)(lVar37 + 8);
        if (puVar32 != &DAT_040ab1ef) {
          iVar15 = *(int *)(lVar37 + 0x10);
          __src = &DAT_040ab1ef;
LAB_0201e664:
          iVar38 = 3;
          if (iVar15 < 4) {
            iVar38 = iVar15 + -1;
          }
          memcpy(puVar32,__src,(long)iVar38);
          puVar32[iVar38] = 0;
        }
LAB_0201e688:
        uVar30 = (ulong)local_170 & 0xffffffff;
        if (6 < (uint)local_170) {
          uVar30 = 0;
        }
        *(char *)(lVar33 + 0x11050 + uVar30) = *(char *)(lVar33 + 0x11050 + uVar30) + '\x01';
      }
      else if (local_cc == 3) {
        local_170 = (undefined **)((ulong)local_170._4_4_ << 0x20);
        lVar37 = local_90 + 0x105d0 + (ulong)*(byte *)(local_90 + 0x11050) * 0x30;
        if (7 < *(byte *)(local_90 + 0x11050)) {
          lVar37 = local_90 + 0x105d0;
        }
        puVar32 = *(undefined1 **)(lVar37 + 8);
        if (puVar32 != &DAT_04086a24) {
          iVar15 = *(int *)(lVar37 + 0x10);
          __src = &DAT_04086a24;
          goto LAB_0201e664;
        }
        goto LAB_0201e688;
      }
      if ((*(long *)(lVar28 + 0x1bf260) != 0) &&
         (plVar21 = *(long **)(*(long *)(lVar28 + 0x1bf260) + 0x20), plVar21 != (long *)0x0)) {
        local_170 = (undefined **)*plVar19;
        local_168 = *(char **)(lVar28 + 0x1bf248);
        local_160 = (long *)0x94;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_170);
      }
      uVar30 = FUN_028d4428();
      puVar12 = PTR_DAT_04bb32e8;
      if ((((uVar30 & 1) != 0) &&
          (uVar30 = FUN_00a8117c(*(long *)PTR_DAT_04bb32e8 + 0x4060), (uVar30 & 1) == 0)) &&
         (*(byte *)(*(long *)puVar12 + 0x4064) - 5 < 7)) {
        local_170 = (undefined **)((ulong)local_170 & 0xffffffff00000000);
        pbVar31 = (byte *)(local_90 + 0x11050);
        lVar33 = local_90 + 0x105d0 + (ulong)*pbVar31 * 0x30;
        if (7 < *pbVar31) {
          lVar33 = local_90 + 0x105d0;
        }
        puVar32 = *(undefined1 **)(lVar33 + 8);
        if (puVar32 != &DAT_040eeb6e) {
          iVar15 = 3;
          if (*(int *)(lVar33 + 0x10) < 4) {
            iVar15 = *(int *)(lVar33 + 0x10) + -1;
          }
          memcpy(puVar32,&DAT_040eeb6e,(long)iVar15);
          puVar32[iVar15] = 0;
        }
        uVar30 = (ulong)local_170 & 0xffffffff;
        if (6 < (uint)local_170) {
          uVar30 = 0;
        }
        pbVar31[uVar30] = pbVar31[uVar30] + 1;
      }
      if ((*(long *)(lVar28 + 0x1bf260) != 0) &&
         (plVar21 = *(long **)(*(long *)(lVar28 + 0x1bf260) + 0x20), plVar21 != (long *)0x0)) {
        local_170 = (undefined **)*plVar19;
        local_168 = *(char **)(lVar28 + 0x1bf248);
        local_160 = (long *)0x94;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_170);
      }
      uVar30 = FUN_028d7a38(*(long *)(lVar28 + 0x1bf248) + *plVar19);
      if ((uVar30 & 1) != 0) {
        local_170 = (undefined **)CONCAT44(local_170._4_4_,5);
        lVar33 = local_90 + 0x11050;
        lVar37 = local_90 + 0x10d50 + (ulong)*(byte *)(local_90 + 0x11055) * 0x30;
        if (7 < *(byte *)(local_90 + 0x11055)) {
          lVar37 = local_90 + 0x10d50;
        }
        puVar32 = *(undefined1 **)(lVar37 + 8);
        if (puVar32 != &DAT_040f3cf9) {
          iVar15 = 3;
          if (*(int *)(lVar37 + 0x10) < 4) {
            iVar15 = *(int *)(lVar37 + 0x10) + -1;
          }
          memcpy(puVar32,&DAT_040f3cf9,(long)iVar15);
          puVar32[iVar15] = 0;
        }
        uVar30 = (ulong)local_170 & 0xffffffff;
        if (6 < (uint)local_170) {
          uVar30 = 0;
        }
        *(char *)(lVar33 + uVar30) = *(char *)(lVar33 + uVar30) + '\x01';
      }
      puVar39 = PTR_DAT_04bb6298;
      puVar12 = PTR_DAT_04bb2020;
      lVar33 = *(long *)puVar2;
      if (((lVar33 == 0) || (*(long *)(lVar33 + 0x28) == 0)) || (*(int *)(lVar33 + 0x80) != 1)) {
        sVar11 = *(short *)PTR_DAT_04bb6298;
        if (sVar11 != -1) {
          local_170 = (undefined **)CONCAT44(local_170._4_4_,0x20);
          puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8;
          if (0xff < (uint)(int)sVar11) {
            puVar3 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar3 + 4) & 1) != 0) goto LAB_0201edb8;
        }
        puVar3 = PTR_DAT_04bb2020 + 0x10;
        local_168 = "TodayGlobalEventId";
        local_170 = (undefined **)puVar3;
        iVar15 = FUN_0273ea30(&local_170);
        puVar13 = PTR_DAT_04bb32f0;
        if (iVar15 != 0xffff) {
          local_168 = "TodayGlobalEventId";
          lVar33 = *(long *)PTR_DAT_04bb32f0;
          local_170 = (undefined **)puVar3;
          uVar16 = FUN_0273ea30(&local_170);
          uVar10 = *(ushort *)(lVar33 + 0x420);
          uVar16 = (uVar16 & 0xffff) - (uint)uVar10;
          if (((*(uint *)(lVar33 + 0x400) <= uVar16) ||
              (puVar24 = *(uint **)(*(long *)(lVar33 + 0x408) + (long)(int)uVar16 * 8),
              puVar24 == (uint *)0x0)) &&
             (puVar24 = (uint *)0x0, -(uint)uVar10 < *(uint *)(lVar33 + 0x400))) {
            puVar24 = *(uint **)(*(long *)(lVar33 + 0x408) + (ulong)uVar10 * -8);
          }
          uVar22 = FUN_01d69460(*(undefined8 *)(*(long *)puVar2 + 0x10),*(undefined2 *)puVar39);
          puVar2 = PTR_DAT_04bb3250;
          if (puVar24 != (uint *)0x0) {
            uVar35 = *(undefined8 *)puVar13;
            if (*puVar24 != 0) {
              cVar36 = *PTR_DAT_04bb3248;
              do {
                if (cVar36 == '\0') {
                  cVar36 = '\x01';
                  *PTR_DAT_04bb3248 = 1;
                  memset(puVar2,0xff,0x288);
                }
                else {
                  uVar16 = *(uint *)(puVar2 + 0x148);
                  if (-1 < (int)uVar16) {
                    pcVar27 = (char *)((ulong)uVar16 + (long)puVar24);
                    goto LAB_0201ea9c;
                  }
                  if (uVar16 != 0xffffffff) break;
                }
                puVar29 = (uint *)(ulong)*puVar24;
                pcVar27 = (char *)0x0;
                if ((*puVar24 == 0) || (puVar24 == puVar29)) goto LAB_0201ea9c;
                lVar33 = 0xc;
                if (*(char *)((long)puVar24 + (10 - (long)puVar29)) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)puVar24 + (lVar33 - (long)puVar29);
                if (lVar33 == 0) break;
                uVar30 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar29));
                *(undefined4 *)(puVar2 + 0x148) = 0xfffffffe;
                pcVar27 = (char *)0x0;
                if (uVar30 == 0) goto LAB_0201ea9c;
                piVar23 = (int *)(lVar33 + 4);
                while (piVar23[-1] != 0x443c0fb7) {
                  piVar23 = piVar23 + 2;
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) {
                    pcVar27 = (char *)0x0;
                    goto LAB_0201ea9c;
                  }
                }
                iVar15 = 0;
                if (*piVar23 != -1) {
                  iVar15 = *piVar23;
                }
                *(int *)(puVar2 + 0x148) = iVar15;
              } while (*puVar24 != 0);
            }
            pcVar27 = (char *)0x0;
LAB_0201ea9c:
            local_168 = *(char **)PTR_PTR_04bb3260;
            if (pcVar27 != (char *)0x0) {
              local_168 = pcVar27;
            }
            local_170 = (undefined **)(puVar12 + 0x10);
            uVar30 = FUN_00884390(uVar35,&local_170,uVar22);
            if ((uVar30 & 1) != 0) {
              iVar15 = 0;
              pcVar27 = PTR_DAT_04bb3248;
              do {
                local_d8 = 0;
                local_d0 = 0;
                if (*puVar24 != 0) {
                  cVar36 = *pcVar27;
                  do {
                    if (cVar36 == '\0') {
                      cVar36 = '\x01';
                      *pcVar27 = '\x01';
                      memset(puVar2,0xff,0x288);
                    }
                    else {
                      uVar16 = *(uint *)(puVar2 + 0x14c);
                      if (-1 < (int)uVar16) {
                        lVar33 = (ulong)uVar16 + (long)puVar24;
                        goto LAB_0201ebf4;
                      }
                      if (uVar16 != 0xffffffff) break;
                    }
                    puVar29 = (uint *)(ulong)*puVar24;
                    lVar33 = 0;
                    if ((*puVar24 == 0) || (puVar24 == puVar29)) goto LAB_0201ebf4;
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar24 + (10 - (long)puVar29)) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar37 = (long)puVar24 + (lVar33 - (long)puVar29);
                    if (lVar37 == 0) break;
                    uVar30 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar29));
                    *(undefined4 *)(puVar2 + 0x14c) = 0xfffffffe;
                    lVar33 = 0;
                    if (uVar30 == 0) goto LAB_0201ebf4;
                    piVar23 = (int *)(lVar37 + 4);
                    while (piVar23[-1] != -0x44991235) {
                      piVar23 = piVar23 + 2;
                      uVar30 = uVar30 - 1;
                      if (uVar30 == 0) {
                        lVar33 = 0;
                        goto LAB_0201ebf4;
                      }
                    }
                    iVar38 = 0;
                    if (*piVar23 != -1) {
                      iVar38 = *piVar23;
                    }
                    *(int *)(puVar2 + 0x14c) = iVar38;
                  } while (*puVar24 != 0);
                }
                lVar33 = 0;
LAB_0201ebf4:
                lVar37 = *(long *)PTR_PTR_04bb3270;
                if (lVar33 != 0) {
                  lVar37 = lVar33;
                }
                FUN_0074fda4(&local_170,"E_%s_NPC_%d",lVar37,iVar15);
                (**(code **)((long)local_170 + 0x18))(&local_170);
                uVar17 = FUN_006bd550(local_168,0);
                uVar30 = FUN_0118b0a0(&local_d8,uVar17);
                if ((uVar30 & 1) != 0) {
                  FUN_0118b220(&local_88,&local_170);
                  local_178 = (undefined **)&DAT_04096555;
                  local_180 = puVar12 + 0x10;
                  (*(code *)local_88[3])(&local_88);
                  (*(code *)local_88[3])(&local_88);
                  ppuVar4 = local_80;
                  (**(code **)(local_180 + 0x18))(&local_180);
                  if (ppuVar4 == local_178) {
LAB_0201ed18:
                    local_180 = (undefined *)CONCAT44(local_180._4_4_,4);
                    lVar33 = local_90 + 0x11050;
                    lVar37 = local_90 + 0x10bd0 + (ulong)*(byte *)(local_90 + 0x11054) * 0x30;
                    if (7 < *(byte *)(local_90 + 0x11054)) {
                      lVar37 = local_90 + 0x10bd0;
                    }
                    puVar32 = *(undefined1 **)(lVar37 + 8);
                    if (puVar32 != &DAT_04096555) {
                      iVar38 = 3;
                      if (*(int *)(lVar37 + 0x10) < 4) {
                        iVar38 = *(int *)(lVar37 + 0x10) + -1;
                      }
                      memcpy(puVar32,&DAT_04096555,(long)iVar38);
                      puVar32[iVar38] = 0;
                    }
                    uVar30 = (ulong)local_180 & 0xffffffff;
                    if (6 < (uint)local_180) {
                      uVar30 = 0;
                    }
                    *(char *)(lVar33 + uVar30) = *(char *)(lVar33 + uVar30) + '\x01';
                    pcVar27 = PTR_DAT_04bb3248;
                  }
                  else {
                    uVar30 = 0;
                    bVar14 = true;
                    do {
                      pcVar27 = PTR_DAT_04bb3248;
                      if (*(char *)((long)local_80 + uVar30) != *(char *)((long)local_178 + uVar30))
                      break;
                      if (*(char *)((long)local_80 + uVar30) == '\0') {
                        if (bVar14) goto LAB_0201ed18;
                        break;
                      }
                      cVar36 = *(char *)((long)local_80 + uVar30 + 1);
                      if (cVar36 != *(char *)((long)local_178 + uVar30 + 1)) break;
                      if (cVar36 == '\0') goto LAB_0201ed18;
                      cVar36 = *(char *)((long)local_80 + uVar30 + 2);
                      if (cVar36 != *(char *)((long)local_178 + uVar30 + 2)) break;
                      if (cVar36 == '\0') goto LAB_0201ed18;
                      bVar14 = uVar30 < 0x7fffe;
                      uVar30 = uVar30 + 3;
                    } while (uVar30 != 0x80001);
                  }
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 != 4);
            }
          }
        }
      }
LAB_0201edb8:
      if ((uVar20 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar28 + 0x1bf260) == 0) {
        return;
      }
      puVar26 = *(undefined8 **)(*(long *)(lVar28 + 0x1bf260) + 0x18);
      goto joined_r0x0201edc8;
    }
    if (lVar28 == 0) {
      return;
    }
    puVar26 = *(undefined8 **)(lVar28 + 0x10);
    if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
      lVar28 = (**(code **)(*(long *)*puVar26 + 0x38))();
      if (lVar28 == 0) {
        return;
      }
      lVar28 = lVar28 + 0x70;
    }
    else {
      if (puVar26 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar26[0x26] == (long *)0x0) {
        return;
      }
      lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
      if (lVar28 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar28 + 0xd0) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0xd0), puVar26 == (undefined8 *)0x0)) {
      uVar16 = 1;
    }
    else {
      uVar16 = (**(code **)*puVar26)();
      uVar16 = uVar16 ^ 1;
    }
    puVar12 = PTR_DAT_04bb3968;
    uVar20 = 0;
    ppuVar4 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    puVar2 = PTR_DAT_04bb3768 + 0x10;
    do {
      if ((((uint)uVar20 < 10) && ((&DAT_053fee41)[uVar20 * 0xba0] != '\0')) &&
         (uVar30 = FUN_0219e890(&DAT_053fe348 + uVar20 * 0xba0), (uVar30 & 1) != 0)) {
        lVar33 = *(long *)puVar12;
        piVar23 = (int *)(**(code **)(*(long *)(lVar33 + 0x2418) + 0xf0))(lVar33 + 0x2418);
        lVar33 = *(long *)puVar12;
        iVar15 = *piVar23;
        piVar23 = (int *)(**(code **)(*(long *)(lVar33 + 0x2448) + 0xf0))(lVar33 + 0x2448);
        iVar38 = *piVar23;
        iVar18 = FUN_0203b2b0(param_1,uVar20 & 0xffffffff);
        if ((iVar18 == 6) || ((iVar18 == 4 && ((&DAT_053fe998)[uVar20 * 0x2e8] == 1)))) {
          puVar24 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar6 = *puVar24 ^ *puVar24 << 0xb;
          uVar7 = puVar24[3];
          *puVar24 = puVar24[1];
          puVar24[1] = puVar24[2];
          uVar6 = uVar6 >> 8 ^ uVar7 >> 0x13 ^ uVar6 ^ uVar7;
          puVar24[2] = uVar7;
          puVar24[3] = uVar6;
          if ((int)((ulong)uVar6 * 100 >> 0x20) < 100 - (iVar15 + iVar38)) {
            lVar33 = *(long *)(lVar28 + 0xb8) + *(long *)(lVar28 + 0xb0);
            pbVar31 = (byte *)(lVar33 + uVar20 * 0x13230);
            uVar30 = (ulong)*pbVar31;
            if (((uVar30 < 0x23) && (pbVar31[1] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(pbVar31[1] & 0x1f) & 1) != 0))
            {
              lVar33 = lVar33 + uVar20 * 0x13230 + 0x1267c;
              local_80 = (undefined **)0x40c490a;
              local_88 = ppuVar4;
              iVar15 = FUN_02749340(lVar33,&local_88);
              if (iVar15 < 2) {
                local_170 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                local_168 = "MoveInCompletion";
                iVar15 = FUN_02749340(lVar33,&local_170);
                if (iVar15 != 0) {
                  local_155 = 0;
                  local_160 = (long *)CONCAT35(local_160._5_3_,8);
                  *(ushort *)(param_1 + 0x105a0) =
                       *(ushort *)(param_1 + 0x105a0) | (ushort)(1 << (ulong)((uint)uVar20 & 0x1f));
                  local_170 = (undefined **)puVar2;
                  local_168 = (char *)((long)&local_160 + 4);
                  FUN_038d1270(&local_170,"-----");
                  if ((ulong)*pbVar31 < 0x23) {
                    FUN_038d1270(&local_170,"%s%02d",
                                 *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar31 * 8 + 0xb0),
                                 pbVar31[1]);
                  }
                  local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
                  pbVar31 = (byte *)(local_90 + 0x11050);
                  lVar33 = local_90 + 0x105d0 + (ulong)*pbVar31 * 0x30;
                  if (7 < *pbVar31) {
                    lVar33 = local_90 + 0x105d0;
                  }
                  pcVar34 = *(char **)(lVar33 + 8);
                  (**(code **)((long)local_170 + 0x18))(&local_170);
                  pcVar27 = local_168;
                  if (pcVar34 != local_168) {
                    (**(code **)((long)local_170 + 0x18))(&local_170);
                    lVar37 = 0;
                    do {
                      if (local_168[lVar37] == '\0') goto LAB_0201f0bc;
                      if (local_168[lVar37 + 1] == '\0') {
                        lVar37 = lVar37 + 1;
                        goto LAB_0201f0bc;
                      }
                      if (local_168[lVar37 + 2] == '\0') {
                        lVar37 = lVar37 + 2;
                        goto LAB_0201f0bc;
                      }
                      lVar37 = lVar37 + 3;
                    } while (lVar37 != 0x80001);
                    lVar37 = 0;
LAB_0201f0bc:
                    iVar15 = (int)lVar37;
                    if (*(int *)(lVar33 + 0x10) <= (int)lVar37) {
                      iVar15 = *(int *)(lVar33 + 0x10) + -1;
                    }
                    memcpy(pcVar34,pcVar27,(long)iVar15);
                    pcVar34[iVar15] = '\0';
                  }
                  uVar30 = (ulong)local_88 & 0xffffffff;
                  if (6 < (uint)local_88) {
                    uVar30 = 0;
                  }
                  pbVar31[uVar30] = pbVar31[uVar30] + 1;
                }
              }
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != 10);
    if ((uVar16 & 1) != 0) {
      return;
    }
    lVar28 = *(long *)(lVar28 + 0xd0);
  }
  else {
    iVar15 = 0;
    puVar2 = PTR_DAT_04bb3768 + 0x10;
    do {
      lVar33 = *(long *)puVar12;
      if ((lVar33 != 0) &&
         (lVar33 = FUN_026eec4c(lVar33,iVar15), lVar33 != 0 && DAT_05454164 != iVar15)) {
        local_155 = 0;
        local_160 = (long *)CONCAT35(local_160._5_3_,8);
        local_170 = (undefined **)puVar2;
        local_168 = (char *)((long)&local_160 + 4);
        FUN_038d13f0(&local_170,"NpcP%d",iVar15);
        local_88 = (undefined **)CONCAT44(local_88._4_4_,2);
        lVar33 = param_1 + 0x108d0 + (ulong)*(byte *)(param_1 + 0x11052) * 0x30;
        if (7 < *(byte *)(param_1 + 0x11052)) {
          lVar33 = param_1 + 0x108d0;
        }
        pcVar34 = *(char **)(lVar33 + 8);
        (**(code **)((long)local_170 + 0x18))(&local_170);
        pcVar27 = local_168;
        if (pcVar34 != local_168) {
          (**(code **)((long)local_170 + 0x18))(&local_170);
          lVar37 = 0;
          do {
            if (local_168[lVar37] == '\0') goto LAB_0201e274;
            if (local_168[lVar37 + 1] == '\0') {
              lVar37 = lVar37 + 1;
              goto LAB_0201e274;
            }
            if (local_168[lVar37 + 2] == '\0') {
              lVar37 = lVar37 + 2;
              goto LAB_0201e274;
            }
            lVar37 = lVar37 + 3;
          } while (lVar37 != 0x80001);
          lVar37 = 0;
LAB_0201e274:
          iVar38 = (int)lVar37;
          if (*(int *)(lVar33 + 0x10) <= (int)lVar37) {
            iVar38 = *(int *)(lVar33 + 0x10) + -1;
          }
          memcpy(pcVar34,pcVar27,(long)iVar38);
          pcVar34[iVar38] = '\0';
        }
        lVar33 = lVar28 + ((ulong)local_88 & 0xffffffff) * 0x180;
        if (6 < (uint)local_88) {
          lVar33 = lVar28;
        }
        uVar20 = (ulong)local_88 & 0xffffffff;
        if (6 < (uint)local_88) {
          uVar20 = 0;
        }
        lVar37 = lVar33 + (ulong)*(byte *)((long)puVar1 + uVar20) * 0x30;
        if (7 < *(byte *)((long)puVar1 + uVar20)) {
          lVar37 = lVar33;
        }
        *(char *)(lVar37 + 0x2d) = (char)iVar15;
        uVar20 = (ulong)local_88 & 0xffffffff;
        if (6 < (uint)local_88) {
          uVar20 = 0;
        }
        *(char *)((long)puVar1 + uVar20) = *(char *)((long)puVar1 + uVar20) + '\x01';
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != 8);
    lVar33 = *(long *)puVar12;
    if (lVar33 == 0) {
      return;
    }
    puVar26 = *(undefined8 **)(lVar33 + 0x10);
    if ((*(byte *)(lVar33 + 0x453) & 1) == 0) {
      lVar33 = (**(code **)(*(long *)*puVar26 + 0x38))();
      if (lVar33 == 0) {
        return;
      }
      lVar33 = lVar33 + 0x70;
    }
    else {
      if (puVar26 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar26[0x26] == (long *)0x0) {
        return;
      }
      lVar33 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
      if (lVar33 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar33 + 0xd0) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar33 + 0xd0), puVar26 == (undefined8 *)0x0)) {
      uVar16 = 1;
    }
    else {
      uVar16 = (**(code **)*puVar26)();
      uVar16 = uVar16 ^ 1;
    }
    puVar12 = PTR_DAT_04bc27f0;
    uVar20 = 0;
    ppuVar4 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    puVar2 = PTR_DAT_04bb3768 + 0x10;
    puVar39 = PTR_DAT_04bb2020;
    do {
      lVar37 = *(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0);
      pbVar31 = (byte *)(lVar37 + uVar20 * 0x13230);
      uVar30 = (ulong)*pbVar31;
      if (uVar30 < 0x23) {
        bVar9 = pbVar31[1];
        if ((bVar9 <= (byte)puVar12[uVar30]) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar9 & 0x1f) & 1) != 0)) {
          lVar37 = lVar37 + uVar20 * 0x13230 + 0x1267c;
          local_80 = (undefined **)0x40c490a;
          local_88 = ppuVar4;
          iVar15 = FUN_02749340(lVar37,&local_88);
          if (iVar15 < 2) {
            local_170 = (undefined **)(puVar39 + 0x10);
            local_168 = "MoveInCompletion";
            iVar15 = FUN_02749340(lVar37,&local_170);
            if ((iVar15 != 0) &&
               (((uint)(&DAT_05454168)[uVar20 >> 5 & 0x7ffffff] >> (ulong)((uint)uVar20 & 0x1f) & 1)
                == 0)) {
              local_155 = 0;
              local_160 = (long *)CONCAT35(local_160._5_3_,8);
              local_170 = (undefined **)puVar2;
              local_168 = (char *)((long)&local_160 + 4);
              FUN_038d13f0(&local_170,"DreamN%d",uVar20 & 0xffffffff);
              local_88 = (undefined **)CONCAT44(local_88._4_4_,3);
              lVar37 = param_1 + 0x10a50 + (ulong)*(byte *)(param_1 + 0x11053) * 0x30;
              if (7 < *(byte *)(param_1 + 0x11053)) {
                lVar37 = param_1 + 0x10a50;
              }
              pcVar34 = *(char **)(lVar37 + 8);
              (**(code **)((long)local_170 + 0x18))(&local_170);
              pcVar27 = local_168;
              if (pcVar34 != local_168) {
                (**(code **)((long)local_170 + 0x18))(&local_170);
                lVar25 = 0;
                do {
                  if (local_168[lVar25] == '\0') goto LAB_0201ee70;
                  if (local_168[lVar25 + 1] == '\0') {
                    lVar25 = lVar25 + 1;
                    goto LAB_0201ee70;
                  }
                  if (local_168[lVar25 + 2] == '\0') {
                    lVar25 = lVar25 + 2;
                    goto LAB_0201ee70;
                  }
                  lVar25 = lVar25 + 3;
                } while (lVar25 != 0x80001);
                lVar25 = 0;
LAB_0201ee70:
                iVar15 = (int)lVar25;
                if (*(int *)(lVar37 + 0x10) <= (int)lVar25) {
                  iVar15 = *(int *)(lVar37 + 0x10) + -1;
                }
                memcpy(pcVar34,pcVar27,(long)iVar15);
                pcVar34[iVar15] = '\0';
              }
              lVar37 = lVar28 + ((ulong)local_88 & 0xffffffff) * 0x180;
              if (6 < (uint)local_88) {
                lVar37 = lVar28;
              }
              uVar30 = (ulong)local_88 & 0xffffffff;
              if (6 < (uint)local_88) {
                uVar30 = 0;
              }
              lVar25 = lVar37 + (ulong)*(byte *)((long)puVar1 + uVar30) * 0x30;
              if (7 < *(byte *)((long)puVar1 + uVar30)) {
                lVar25 = lVar37;
              }
              *(char *)(lVar25 + 0x2d) = (char)uVar20;
              uVar30 = (ulong)local_88 & 0xffffffff;
              if (6 < (uint)local_88) {
                uVar30 = 0;
              }
              *(char *)((long)puVar1 + uVar30) = *(char *)((long)puVar1 + uVar30) + '\x01';
              puVar39 = PTR_DAT_04bb2020;
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != 10);
    if ((uVar16 & 1) != 0) {
      return;
    }
    lVar28 = *(long *)(lVar33 + 0xd0);
  }
  if (lVar28 == 0) {
    return;
  }
  puVar26 = *(undefined8 **)(lVar28 + 8);
joined_r0x0201edc8:
  if (puVar26 != (undefined8 *)0x0) {
    (**(code **)*puVar26)();
  }
  return;
}

