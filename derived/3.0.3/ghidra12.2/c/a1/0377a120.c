
/* WARNING: Removing unreachable block (ram,0x0377a1e8) */
/* WARNING: Removing unreachable block (ram,0x0377a170) */
/* WARNING: Removing unreachable block (ram,0x0377ab04) */
/* WARNING: Removing unreachable block (ram,0x0377ad94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0377a120(undefined8 *param_1)

{
  undefined8 ****__dest;
  undefined *puVar1;
  undefined8 **ppuVar2;
  undefined8 ****__src;
  undefined8 *__src_00;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  ushort *puVar20;
  uint *puVar21;
  long lVar22;
  long *plVar23;
  char cVar24;
  ushort uVar25;
  uint uVar26;
  undefined8 ****ppppuVar27;
  ulong uVar28;
  void *pvVar29;
  uint *puVar30;
  int *piVar31;
  void *pvVar32;
  char cVar33;
  void *pvVar34;
  undefined8 *puVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  uint local_1b4;
  undefined8 local_1a0;
  undefined8 **local_198;
  undefined8 ****local_190;
  undefined1 local_188 [8];
  undefined8 ***local_180;
  undefined8 **local_178;
  undefined8 *local_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  ushort local_158;
  int local_154;
  undefined4 uStack_150;
  byte local_14c;
  undefined *local_140;
  ushort local_138;
  undefined8 local_130;
  undefined8 **local_128;
  undefined8 ****local_120;
  undefined8 local_118;
  undefined8 ***local_110;
  undefined8 **local_108;
  undefined8 *local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
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
  undefined4 local_6c;
  
  puVar1 = PTR_DAT_04bb46b0;
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (lVar18 == 0) {
    lVar18 = 0;
  }
  else {
    local_130._0_4_ = 1;
    if (((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar11 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar11 = 0;
    }
    lVar18 = 0;
    if (lVar11 != 0) {
      lVar18 = lVar11 + 0xa8;
    }
  }
  lVar11 = *(long *)PTR_DAT_04bb27f8;
  if (lVar11 == 0) {
    return;
  }
  lVar19 = *(long *)puVar1;
  if (lVar19 == 0) {
    return;
  }
  local_130 = CONCAT44(local_130._4_4_,1);
  if ((((*(byte *)(lVar19 + 0x50d) ^ 0xff) & 6) != 0) ||
     (lVar19 = (**(code **)(**(long **)(*(long *)(lVar19 + 0x10) + 0x188) + 0x38))(), lVar19 == 0))
  goto LAB_0377a714;
  if (*(long **)(lVar19 + 0x36620) == (long *)0x0) {
    uVar13 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar19 + 0x36620);
    uVar13 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar13 = (**(code **)*puVar12)();
    }
  }
  iVar15 = (int)*(char *)(*(long *)(lVar19 + 0x36608) + *(long *)(lVar19 + 0x36600));
  local_130._0_4_ = iVar15;
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar19 + 0x36620) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x36620) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bc3a48;
  if (iVar15 != 1) {
    uVar39 = *(ushort *)(lVar11 + 0xc0) >> 4 & 0xf;
    local_130 = CONCAT44(local_130._4_4_,(uint)*(ushort *)(lVar11 + 0xc0)) & 0xffffffff0000000f;
    if ((int)local_130 != 1) {
      uVar39 = 0;
    }
    local_1a0 = CONCAT44(local_1a0._4_4_,uVar39);
    if (((uVar39 != 2) || (*(int *)(lVar11 + 0x14) < 1)) || (3 < *(int *)(lVar11 + 0x14))) {
      uVar38 = 0;
      uVar13 = 0xffff;
      uVar39 = 0xffff;
      goto LAB_0377a720;
    }
    puVar20 = *(ushort **)PTR_DAT_04bc3a48;
    if (puVar20 != (ushort *)0x0) {
      if ((*puVar20 & 1) == 0) {
        if (*(int *)(lVar11 + 0x10) == 1) goto LAB_0377a69c;
      }
      else if (((*puVar20 ^ 0xffff) & 3) == 0) {
LAB_0377a69c:
        if ((((*puVar20 & 1) == 0) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar19 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar19 == 0)) goto LAB_0377b0c0;
        if ((*(long **)(lVar19 + 0x60) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar19 + 0x60), puVar12 == (undefined8 *)0x0)) {
          uVar25 = *(ushort *)(*(long *)(lVar19 + 0x48) + *(long *)(lVar19 + 0x40) + 2);
          puVar20 = *(ushort **)PTR_DAT_04bc3a48;
        }
        else {
          uVar13 = (**(code **)*puVar12)();
          uVar25 = *(ushort *)(*(long *)(lVar19 + 0x48) + *(long *)(lVar19 + 0x40) + 2);
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar19 + 0x60) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x60) + 8), puVar12 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar12)();
          }
          puVar20 = *(ushort **)puVar6;
        }
        goto joined_r0x0377b0c8;
      }
LAB_0377a714:
      uVar13 = 0xffff;
      uVar38 = 0;
      uVar39 = 0xffff;
      goto LAB_0377a720;
    }
    if (*(int *)(lVar11 + 0x10) != 1) goto LAB_0377a714;
LAB_0377b0c0:
    uVar25 = *(ushort *)(lVar11 + 0x2a);
    puVar20 = *(ushort **)PTR_DAT_04bc3a48;
joined_r0x0377b0c8:
    uVar13 = (ulong)uVar25;
    if (((puVar20 == (ushort *)0x0) || ((*puVar20 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) {
      uVar39 = (uint)*(ushort *)(lVar11 + 0x2c);
      if ((*(ushort *)(lVar11 + 0x28) & 0x80) != 0) {
        uVar39 = 0xffffffff;
      }
    }
    else {
      lVar19 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
      if ((*(long **)(lVar19 + 0x11b0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar19 + 0x11b0), puVar12 == (undefined8 *)0x0)) {
        uVar38 = (uint)*(ushort *)(lVar11 + 0xc0);
        uVar39 = (uint)*(ushort *)(*(long *)(lVar19 + 0x1198) + *(long *)(lVar19 + 0x1190) + 2);
        goto LAB_0377a720;
      }
      uVar14 = (**(code **)*puVar12)();
      uVar39 = (uint)*(ushort *)(*(long *)(lVar19 + 0x1198) + *(long *)(lVar19 + 0x1190) + 2);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar19 + 0x11b0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x11b0) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
        uVar38 = (uint)*(ushort *)(lVar11 + 0xc0);
        goto LAB_0377a720;
      }
    }
    uVar38 = (uint)*(ushort *)(lVar11 + 0xc0);
    goto LAB_0377a720;
  }
  if ((*(long **)(lVar19 + 0x36658) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar19 + 0x36658), puVar12 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar12)();
  }
  local_110 = &local_108;
  local_108 = &local_100;
  local_130 = 0;
  local_128 = (undefined8 **)0x0;
  lVar11 = *(long *)(lVar19 + 0x36640) + *(long *)(lVar19 + 0x36638);
  bVar8 = (*(byte *)(lVar11 + 0x48b5) & 1) != 0;
  local_100 = (undefined8 *)local_f8;
  local_f8 = (undefined1  [8])0x0;
  uVar38 = (uint)*(ushort *)(lVar11 + 0x48b2);
  if (bVar8) {
    uVar38 = (uint)*(ushort *)(lVar11 + 0x48b0);
  }
  uVar13 = (ulong)uVar38;
  uVar39 = (uint)*(ushort *)(lVar11 + 0x48b0);
  if (bVar8) {
    uVar39 = (uint)*(ushort *)(lVar11 + 0x48b2);
  }
  local_120 = &local_110;
  if (&local_f0 != (undefined8 *)0x0) {
    local_130 = 0x400000000;
    local_128 = (undefined8 **)&local_f0;
  }
  uVar16 = uVar39;
  if (((uVar38 ^ 0xffffffff) & 0xffff) != 0) {
    uVar16 = uVar38;
  }
  local_1a0 = CONCAT62(local_1a0._2_6_,(short)uVar16);
  local_118 = local_120;
  bVar9 = FUN_03770770(&local_1a0,&local_130);
  if ((bVar9 & 1) != 0) {
    uVar13 = (ulong)*(ushort *)*local_128;
    uVar39 = (uint)*(ushort *)local_128[1];
  }
  if ((*(long **)(lVar19 + 0x37c70) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar19 + 0x37c70), puVar12 == (undefined8 *)0x0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)*puVar12)();
    uVar14 = uVar14 & 0xffffffff;
  }
  local_130 = local_130 & 0xffffffffffff0000;
  FUN_0374a300(&local_130,
               *(undefined1 *)(*(long *)(lVar19 + 0x37c58) + *(long *)(lVar19 + 0x37c50) + 0x32));
  uVar38 = (uint)(ushort)local_130;
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar19 + 0x37c70) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x37c70) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((*(long **)(lVar19 + 0x36690) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar19 + 0x36690), puVar12 == (undefined8 *)0x0)) {
    local_1b4 = 0;
  }
  else {
    local_1b4 = (**(code **)*puVar12)();
  }
  puVar7 = PTR_DAT_04bc0678;
  puVar6 = PTR_DAT_04bc0670;
  local_110._0_4_ = (uint)(uint3)local_110;
  pvVar29 = (void *)((long)&local_118 + 4);
  local_100 = (undefined8 *)(local_f8 + 4);
  local_128 = (undefined8 **)(PTR_DAT_04bb3768 + 0x10);
  local_f0._0_4_ = (uint)(uint3)local_f0;
  local_e8 = local_e8 & 0xffffffff;
  local_118 = (undefined8 ****)CONCAT35(local_118._5_3_,8);
  lVar11 = *(long *)PTR_DAT_04bb4958;
  local_f8._0_5_ = 8;
  local_120 = pvVar29;
  local_108 = local_128;
  if (lVar11 != 0) {
    if ((uint)uVar13 < 500) {
      uVar25 = *(ushort *)(lVar11 + uVar13 * 2 + 0x620);
      if ((int)*(uint *)(lVar11 + 0x1c0) < 1) {
        if ((((*(long *)(lVar11 + 0xb0) != 0) &&
             (puVar21 = *(uint **)(*(long *)(lVar11 + 0xb0) + 8), puVar21 != (uint *)0x0)) &&
            ((uVar16 = (uint)uVar25, *(uint *)(lVar11 + 200) <= uVar16 ||
             (*(char *)(*(long *)(lVar11 + 0xd0) + (ulong)uVar16) != '\0')))) &&
           (((uVar16 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
          iVar15 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            iVar15 = 0x1c;
          }
          puVar21 = (uint *)((ulong)(puVar21[1] * uVar16 + (uint)(ushort)puVar21[2] * 8 + iVar15) +
                            (long)puVar21);
          goto joined_r0x0377a678;
        }
      }
      else if ((uint)uVar25 < *(uint *)(lVar11 + 0x1c0)) {
        uVar16 = (uint)uVar25;
        if (*(uint *)(lVar11 + 0x1b0) <= uVar16) {
          uVar16 = 0;
        }
        puVar21 = *(uint **)(*(long *)(lVar11 + 0x1b8) + (ulong)uVar16 * 8);
joined_r0x0377a678:
        if (puVar21 != (uint *)0x0) {
          if (*puVar21 != 0) {
            cVar33 = *PTR_DAT_04bc0670;
            do {
              if (cVar33 == '\0') {
                cVar33 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar16 = *(uint *)(puVar7 + 0x48);
                if (-1 < (int)uVar16) {
                  pvVar34 = (void *)((ulong)uVar16 + (long)puVar21);
                  goto LAB_0377a5b8;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar30 = (uint *)(ulong)*puVar21;
              pvVar34 = (void *)0x0;
              if ((*puVar21 == 0) || (puVar21 == puVar30)) goto LAB_0377a5b8;
              lVar22 = 0xc;
              if (*(char *)((long)puVar21 + (10 - (long)puVar30)) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar21 + (lVar22 - (long)puVar30);
              if (lVar22 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar30));
              *(undefined4 *)(puVar7 + 0x48) = 0xfffffffe;
              pvVar34 = (void *)0x0;
              if (uVar14 == 0) goto LAB_0377a5b8;
              piVar31 = (int *)(lVar22 + 4);
              while (piVar31[-1] != 0x34c8eed5) {
                piVar31 = piVar31 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  pvVar34 = (void *)0x0;
                  goto LAB_0377a5b8;
                }
              }
              iVar15 = 0;
              if (*piVar31 != -1) {
                iVar15 = *piVar31;
              }
              *(int *)(puVar7 + 0x48) = iVar15;
            } while (*puVar21 != 0);
          }
          pvVar34 = (void *)0x0;
LAB_0377a5b8:
          pvVar32 = *(void **)PTR_PTR_04bc0668;
          if (pvVar34 != (void *)0x0) {
            pvVar32 = pvVar34;
          }
          if (pvVar29 != pvVar32) {
            lVar22 = 0;
            do {
              if (*(char *)((long)pvVar32 + lVar22) == '\0') goto LAB_0377b148;
              if (*(char *)((long)pvVar32 + lVar22 + 1) == '\0') {
                lVar22 = lVar22 + 1;
                goto LAB_0377b148;
              }
              if (*(char *)((long)pvVar32 + lVar22 + 2) == '\0') {
                lVar22 = lVar22 + 2;
                goto LAB_0377b148;
              }
              lVar22 = lVar22 + 3;
            } while (lVar22 != 0x80001);
            lVar22 = 0;
LAB_0377b148:
            iVar15 = (int)lVar22;
            if (6 < iVar15) {
              iVar15 = 7;
            }
            memcpy(pvVar29,pvVar32,(long)iVar15);
            *(undefined1 *)((long)pvVar29 + (long)iVar15) = 0;
          }
        }
      }
    }
    puVar12 = local_100;
    puVar7 = PTR_DAT_04bc0678;
    puVar6 = PTR_DAT_04bc0670;
    if (uVar39 < 500) {
      uVar25 = *(ushort *)(lVar11 + (ulong)(ushort)uVar39 * 2 + 0x620);
      if ((int)*(uint *)(lVar11 + 0x1c0) < 1) {
        if ((((*(long *)(lVar11 + 0xb0) != 0) &&
             (puVar21 = *(uint **)(*(long *)(lVar11 + 0xb0) + 8), puVar21 != (uint *)0x0)) &&
            ((uVar16 = (uint)uVar25, *(uint *)(lVar11 + 200) <= uVar16 ||
             (*(char *)(*(long *)(lVar11 + 0xd0) + (ulong)uVar16) != '\0')))) &&
           (((uVar16 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
          iVar15 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            iVar15 = 0x1c;
          }
          puVar21 = (uint *)((ulong)(puVar21[1] * uVar16 + (uint)(ushort)puVar21[2] * 8 + iVar15) +
                            (long)puVar21);
          goto joined_r0x0377b350;
        }
      }
      else if ((uint)uVar25 < *(uint *)(lVar11 + 0x1c0)) {
        uVar16 = (uint)uVar25;
        if (*(uint *)(lVar11 + 0x1b0) <= uVar16) {
          uVar16 = 0;
        }
        puVar21 = *(uint **)(*(long *)(lVar11 + 0x1b8) + (ulong)uVar16 * 8);
joined_r0x0377b350:
        if (puVar21 != (uint *)0x0) {
          if (*puVar21 != 0) {
            cVar33 = *PTR_DAT_04bc0670;
            do {
              if (cVar33 == '\0') {
                cVar33 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar16 = *(uint *)(puVar7 + 0x48);
                if (-1 < (int)uVar16) {
                  puVar35 = (undefined8 *)((ulong)uVar16 + (long)puVar21);
                  goto LAB_0377b28c;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar30 = (uint *)(ulong)*puVar21;
              puVar35 = (undefined8 *)0x0;
              if ((*puVar21 == 0) || (puVar21 == puVar30)) goto LAB_0377b28c;
              lVar11 = 0xc;
              if (*(char *)((long)puVar21 + (10 - (long)puVar30)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar21 + (lVar11 - (long)puVar30);
              if (lVar11 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar30));
              *(undefined4 *)(puVar7 + 0x48) = 0xfffffffe;
              puVar35 = (undefined8 *)0x0;
              if (uVar14 == 0) goto LAB_0377b28c;
              piVar31 = (int *)(lVar11 + 4);
              while (piVar31[-1] != 0x34c8eed5) {
                piVar31 = piVar31 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  puVar35 = (undefined8 *)0x0;
                  goto LAB_0377b28c;
                }
              }
              iVar15 = 0;
              if (*piVar31 != -1) {
                iVar15 = *piVar31;
              }
              *(int *)(puVar7 + 0x48) = iVar15;
            } while (*puVar21 != 0);
          }
          puVar35 = (undefined8 *)0x0;
LAB_0377b28c:
          __src_00 = *(undefined8 **)PTR_PTR_04bc0668;
          if (puVar35 != (undefined8 *)0x0) {
            __src_00 = puVar35;
          }
          if (local_100 != __src_00) {
            lVar11 = 0;
            do {
              if (*(char *)((long)__src_00 + lVar11) == '\0') goto LAB_0377b364;
              if (*(char *)((long)__src_00 + lVar11 + 1) == '\0') {
                lVar11 = lVar11 + 1;
                goto LAB_0377b364;
              }
              if (*(char *)((long)__src_00 + lVar11 + 2) == '\0') {
                lVar11 = lVar11 + 2;
                goto LAB_0377b364;
              }
              lVar11 = lVar11 + 3;
            } while (lVar11 != 0x80001);
            lVar11 = 0;
LAB_0377b364:
            iVar15 = (int)lVar11;
            if ((int)local_f8._0_4_ <= (int)lVar11) {
              iVar15 = local_f8._0_4_ + -1;
            }
            memcpy(local_100,__src_00,(long)iVar15);
            *(undefined1 *)((long)puVar12 + (long)iVar15) = 0;
          }
        }
      }
    }
  }
  uVar17 = 1;
  if (((uVar39 ^ 0xffffffff) & 0xffff) != 0) {
    uVar17 = 2;
  }
  local_130 = CONCAT44(local_130._4_4_,uVar17);
  lVar11 = *(long *)(lVar19 + 0x36678) + *(long *)(lVar19 + 0x36670);
  local_e8 = CONCAT62(local_e8._2_6_,*(undefined2 *)(lVar11 + 2));
  local_e8 = CONCAT44((int)*(char *)(lVar11 + 4),(undefined4)local_e8);
  local_e0._0_5_ = CONCAT14(bVar9 & 1,0xffffffff);
  (**(code **)*param_1)(param_1,&local_130);
  if ((((local_1b4 & 1) != 0) && (*(long *)(lVar19 + 0x36690) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x36690) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar19 + 0x36658) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x36658) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
LAB_0377a720:
  lVar11 = *(long *)puVar1;
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
  local_e8 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = (undefined1  [8])0x0;
  local_110 = (undefined8 ***)0x0;
  local_108 = (undefined8 **)0x0;
  local_120 = (undefined8 ****)0x0;
  local_118 = (undefined8 ****)0x0;
  local_130 = 0;
  local_128 = (undefined8 **)0x0;
  if (lVar11 != 0) {
    FUN_026f61ec();
    lVar19 = 0;
    __dest = (undefined8 ****)(local_188 + 4);
    puVar12 = (undefined8 *)(local_168 + 4);
    uVar10 = uVar38 & 0xf;
    uVar38 = uVar38 >> 4 & 0xf;
    puVar1 = PTR_DAT_04bb7648 + 0x10;
    ppuVar2 = (undefined8 **)(PTR_DAT_04bb3768 + 0x10);
    do {
      local_138 = 0xffff;
      local_140 = puVar1;
      if (*(long **)(lVar18 + 0x36540) == (long *)0x0) {
        uVar14 = 0;
      }
      else {
        puVar35 = (undefined8 *)**(long **)(lVar18 + 0x36540);
        uVar14 = 0;
        if (puVar35 != (undefined8 *)0x0) {
          uVar14 = (**(code **)*puVar35)();
        }
      }
      local_138 = *(ushort *)
                   (*(long *)(lVar18 + 0x36528) + *(long *)(lVar18 + 0x36520) + lVar19 * 2);
      if (local_138 == 0) {
        local_1a0 = CONCAT44(local_1a0._4_4_,5);
      }
      else {
        uVar16 = (local_138 >> 10) - 1;
        if (6 < uVar16) {
          uVar16 = 5;
        }
        local_1a0 = CONCAT44(local_1a0._4_4_,uVar16);
        if ((uVar16 != 5) && (local_6c = uVar16, uVar16 != 6)) {
          local_138 = 0xffff;
        }
      }
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar18 + 0x36540) != 0)) &&
         (puVar35 = *(undefined8 **)(*(long *)(lVar18 + 0x36540) + 8), puVar35 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar35)();
      }
      lVar22 = FUN_0375f980(&local_140);
      if (lVar22 != 0) {
        if ((*(long **)(lVar22 + 0x1790) == (long *)0x0) ||
           (puVar35 = (undefined8 *)**(long **)(lVar22 + 0x1790), puVar35 == (undefined8 *)0x0)) {
          uVar14 = 0;
          plVar23 = *(long **)(lVar22 + 0x60);
          if (plVar23 != (long *)0x0) goto LAB_0377a90c;
LAB_0377a930:
          uVar40 = 0;
        }
        else {
          uVar14 = (**(code **)*puVar35)();
          uVar14 = uVar14 & 0xffffffff;
          plVar23 = *(long **)(lVar22 + 0x60);
          if (plVar23 == (long *)0x0) goto LAB_0377a930;
LAB_0377a90c:
          if ((undefined8 *)*plVar23 == (undefined8 *)0x0) goto LAB_0377a930;
          uVar40 = (*(code *)**(undefined8 **)*plVar23)();
          uVar40 = uVar40 & 0xffffffff;
        }
        local_1a0 = 0;
        local_198 = (undefined8 **)0x0;
        local_168 = (undefined1  [8])0x0;
        if ((undefined8 **)&local_160 != (undefined8 **)0x0) {
          local_1a0 = 0x400000000;
          local_198 = (undefined8 **)&local_160;
        }
        puVar20 = (ushort *)(*(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x40));
        uVar25 = puVar20[1];
        if (puVar20[2] != 0xffff && (*puVar20 & 1) == 0) {
          uVar25 = puVar20[2];
        }
        local_6c = CONCAT22(local_6c._2_2_,uVar25);
        local_190 = &local_180;
        local_188 = (undefined1  [8])&local_180;
        local_180 = &local_178;
        local_178 = &local_170;
        local_170 = (undefined8 *)local_168;
        bVar9 = FUN_03770770(&local_6c,&local_1a0);
        if ((bVar9 & 1) == 0) {
          puVar20 = (ushort *)(*(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x40));
          uVar3 = puVar20[2];
          uVar25 = uVar3;
          uVar16 = (uint)puVar20[1];
          if (uVar3 != 0xffff && (*puVar20 & 1) == 0) {
            uVar25 = puVar20[1];
            uVar16 = (uint)uVar3;
          }
        }
        else {
          uVar16 = (uint)*(ushort *)*local_198;
          uVar25 = *(ushort *)local_198[1];
        }
        local_6c = CONCAT22(uVar25,(ushort)uVar16);
        lVar37 = *(long *)(lVar22 + 0x1778) + *(long *)(lVar22 + 6000);
        uVar3 = *(ushort *)(lVar37 + 2);
        uVar42 = (ulong)uVar3;
        cVar33 = *(char *)(lVar37 + 4);
        lVar37 = *(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x40);
        uVar36 = (uint)uVar13;
        uVar26 = (uint)*(ushort *)(lVar37 + 2);
        if (uVar26 == uVar36) {
LAB_0377aa28:
          uVar26 = uVar38;
          if (uVar10 != 1) {
            uVar26 = 0;
          }
          uVar5 = 1;
          if (uVar26 != 1) {
            uVar26 = uVar38;
            if (uVar10 != 1) {
              uVar26 = 0;
            }
            local_1a0 = CONCAT44(local_1a0._4_4_,uVar26);
            uVar5 = uVar10;
            if (uVar26 == 2) {
              if (uVar36 != uVar16) {
                uVar25 = (ushort)uVar16;
              }
              local_6c = CONCAT22(0xffff,uVar25);
              goto LAB_0377aaa4;
            }
          }
          local_1a0 = CONCAT44(local_1a0._4_4_,uVar5);
        }
        else {
          uVar4 = *(ushort *)(lVar37 + 4);
          if ((((uVar4 != 0xffff) && (uVar4 == uVar36)) || (uVar26 == (uVar39 & 0xffff))) ||
             (uVar4 != 0xffff && (uint)uVar4 == (uVar39 & 0xffff))) goto LAB_0377aa28;
LAB_0377aaa4:
          local_180._0_4_ = (uint)(uint3)local_180;
          local_188._0_5_ = 8;
          lVar37 = 0;
          local_160._3_1_ = 0;
          local_168._0_5_ = 8;
          lVar41 = *(long *)PTR_DAT_04bb4958;
          local_154 = 0;
          local_198 = ppuVar2;
          local_190 = __dest;
          local_178 = ppuVar2;
          local_170 = puVar12;
          if (lVar41 != 0) {
            if ((ulong)(ushort)local_6c < 500) {
              uVar25 = *(ushort *)(lVar41 + (ulong)(ushort)local_6c * 2 + 0x620);
              if ((int)*(uint *)(lVar41 + 0x1c0) < 1) {
                if (((((*(long *)(lVar41 + 0xb0) != 0) &&
                      (puVar21 = *(uint **)(*(long *)(lVar41 + 0xb0) + 8), puVar21 != (uint *)0x0))
                     && ((uVar16 = (uint)uVar25, *(uint *)(lVar41 + 200) <= uVar16 ||
                         (*(char *)(*(long *)(lVar41 + 0xd0) + (ulong)uVar16) != '\0')))) &&
                    ((uVar16 < *puVar21 && (puVar21[1] != 0)))) && ((ushort)puVar21[2] != 0)) {
                  iVar15 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    iVar15 = 0x1c;
                  }
                  puVar21 = (uint *)((ulong)(puVar21[1] * uVar16 + (uint)(ushort)puVar21[2] * 8 +
                                            iVar15) + (long)puVar21);
                  goto joined_r0x0377ad30;
                }
              }
              else if ((uint)uVar25 < *(uint *)(lVar41 + 0x1c0)) {
                uVar16 = (uint)uVar25;
                if (*(uint *)(lVar41 + 0x1b0) <= uVar16) {
                  uVar16 = 0;
                }
                puVar21 = *(uint **)(*(long *)(lVar41 + 0x1b8) + (ulong)uVar16 * 8);
joined_r0x0377ad30:
                if (puVar21 != (uint *)0x0) {
                  if (*puVar21 != 0) {
                    cVar24 = *PTR_DAT_04bc0670;
                    do {
                      if (cVar24 == '\0') {
                        cVar24 = '\x01';
                        *PTR_DAT_04bc0670 = 1;
                        puVar6 = PTR_DAT_04bc0678;
                        *(undefined8 *)PTR_DAT_04bc0678 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
                        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                      }
                      else {
                        uVar16 = *(uint *)(PTR_DAT_04bc0678 + 0x48);
                        if (-1 < (int)uVar16) {
                          ppppuVar27 = (undefined8 ****)((ulong)uVar16 + (long)puVar21);
                          goto LAB_0377ac40;
                        }
                        if (uVar16 != 0xffffffff) break;
                      }
                      puVar30 = (uint *)(ulong)*puVar21;
                      ppppuVar27 = (undefined8 ****)0x0;
                      if ((*puVar21 == 0) || (puVar21 == puVar30)) goto LAB_0377ac40;
                      lVar37 = 0xc;
                      if (*(char *)((long)puVar21 + (10 - (long)puVar30)) != '\0') {
                        lVar37 = 0x1c;
                      }
                      lVar37 = (long)puVar21 + (lVar37 - (long)puVar30);
                      if (lVar37 == 0) break;
                      uVar28 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar30));
                      *(undefined4 *)(PTR_DAT_04bc0678 + 0x48) = 0xfffffffe;
                      ppppuVar27 = (undefined8 ****)0x0;
                      if (uVar28 == 0) goto LAB_0377ac40;
                      piVar31 = (int *)(lVar37 + 4);
                      while (piVar31[-1] != 0x34c8eed5) {
                        piVar31 = piVar31 + 2;
                        uVar28 = uVar28 - 1;
                        if (uVar28 == 0) {
                          ppppuVar27 = (undefined8 ****)0x0;
                          goto LAB_0377ac40;
                        }
                      }
                      iVar15 = 0;
                      if (*piVar31 != -1) {
                        iVar15 = *piVar31;
                      }
                      *(int *)(PTR_DAT_04bc0678 + 0x48) = iVar15;
                    } while (*puVar21 != 0);
                  }
                  ppppuVar27 = (undefined8 ****)0x0;
LAB_0377ac40:
                  __src = *(undefined8 *****)PTR_PTR_04bc0668;
                  if (ppppuVar27 != (undefined8 ****)0x0) {
                    __src = ppppuVar27;
                  }
                  if (__dest != __src) {
                    lVar37 = 0;
                    do {
                      if (*(char *)((long)__src + lVar37) == '\0') goto LAB_0377ad48;
                      if (*(char *)((long)__src + lVar37 + 1) == '\0') {
                        lVar37 = lVar37 + 1;
                        goto LAB_0377ad48;
                      }
                      if (*(char *)((long)__src + lVar37 + 2) == '\0') {
                        lVar37 = lVar37 + 2;
                        goto LAB_0377ad48;
                      }
                      lVar37 = lVar37 + 3;
                    } while (lVar37 != 0x80001);
                    lVar37 = 0;
LAB_0377ad48:
                    iVar15 = (int)lVar37;
                    if (6 < iVar15) {
                      iVar15 = 7;
                    }
                    memcpy(__dest,__src,(long)iVar15);
                    *(undefined1 *)((long)__dest + (long)iVar15) = 0;
                  }
                  lVar37 = 1;
                  goto LAB_0377ad80;
                }
              }
              lVar37 = 0;
            }
LAB_0377ad80:
            if ((ulong)local_6c._2_2_ < 500) {
              uVar25 = *(ushort *)(lVar41 + (ulong)local_6c._2_2_ * 2 + 0x620);
              if ((int)*(uint *)(lVar41 + 0x1c0) < 1) {
                if (*(long *)(lVar41 + 0xb0) != 0) {
                  puVar21 = *(uint **)(*(long *)(lVar41 + 0xb0) + 8);
                  if (puVar21 != (uint *)0x0) {
                    uVar16 = (uint)uVar25;
                    if (uVar16 < *(uint *)(lVar41 + 200)) {
                      if (*(char *)(*(long *)(lVar41 + 0xd0) + (ulong)uVar16) == '\0')
                      goto LAB_0377afb4;
                    }
                    if (((uVar16 < *puVar21) && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)) {
                      iVar15 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        iVar15 = 0x1c;
                      }
                      puVar21 = (uint *)((ulong)(puVar21[1] * uVar16 + (uint)(ushort)puVar21[2] * 8
                                                + iVar15) + (long)puVar21);
                      goto joined_r0x0377afa8;
                    }
                  }
                }
              }
              else if ((uint)uVar25 < *(uint *)(lVar41 + 0x1c0)) {
                uVar16 = (uint)uVar25;
                if (*(uint *)(lVar41 + 0x1b0) <= uVar16) {
                  uVar16 = 0;
                }
                puVar21 = *(uint **)(*(long *)(lVar41 + 0x1b8) + (ulong)uVar16 * 8);
joined_r0x0377afa8:
                if (puVar21 != (uint *)0x0) {
                  if (*puVar21 != 0) {
                    cVar24 = *PTR_DAT_04bc0670;
                    do {
                      if (cVar24 == '\0') {
                        cVar24 = '\x01';
                        *PTR_DAT_04bc0670 = 1;
                        puVar6 = PTR_DAT_04bc0678;
                        *(undefined8 *)PTR_DAT_04bc0678 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
                        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                      }
                      else {
                        uVar16 = *(uint *)(PTR_DAT_04bc0678 + 0x48);
                        if (-1 < (int)uVar16) {
                          pvVar29 = (void *)((ulong)uVar16 + (long)puVar21);
                          goto LAB_0377aed4;
                        }
                        if (uVar16 != 0xffffffff) break;
                      }
                      puVar30 = (uint *)(ulong)*puVar21;
                      pvVar29 = (void *)0x0;
                      if ((*puVar21 == 0) || (puVar21 == puVar30)) goto LAB_0377aed4;
                      lVar41 = 0xc;
                      if (*(char *)((long)puVar21 + (10 - (long)puVar30)) != '\0') {
                        lVar41 = 0x1c;
                      }
                      lVar41 = (long)puVar21 + (lVar41 - (long)puVar30);
                      if (lVar41 == 0) break;
                      uVar28 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar30));
                      *(undefined4 *)(PTR_DAT_04bc0678 + 0x48) = 0xfffffffe;
                      pvVar29 = (void *)0x0;
                      if (uVar28 == 0) goto LAB_0377aed4;
                      piVar31 = (int *)(lVar41 + 4);
                      while (piVar31[-1] != 0x34c8eed5) {
                        piVar31 = piVar31 + 2;
                        uVar28 = uVar28 - 1;
                        if (uVar28 == 0) {
                          pvVar29 = (void *)0x0;
                          goto LAB_0377aed4;
                        }
                      }
                      iVar15 = 0;
                      if (*piVar31 != -1) {
                        iVar15 = *piVar31;
                      }
                      *(int *)(PTR_DAT_04bc0678 + 0x48) = iVar15;
                    } while (*puVar21 != 0);
                  }
                  pvVar29 = (void *)0x0;
LAB_0377aed4:
                  pvVar32 = *(void **)(local_188 + lVar37 * 0x20 + -8);
                  pvVar34 = *(void **)PTR_PTR_04bc0668;
                  if (pvVar29 != (void *)0x0) {
                    pvVar34 = pvVar29;
                  }
                  if (pvVar32 != pvVar34) {
                    lVar41 = 0;
                    do {
                      if (*(char *)((long)pvVar34 + lVar41) == '\0') goto LAB_0377b054;
                      if (*(char *)((long)pvVar34 + lVar41 + 1) == '\0') {
                        lVar41 = lVar41 + 1;
                        goto LAB_0377b054;
                      }
                      if (*(char *)((long)pvVar34 + lVar41 + 2) == '\0') {
                        lVar41 = lVar41 + 2;
                        goto LAB_0377b054;
                      }
                      lVar41 = lVar41 + 3;
                    } while (lVar41 != 0x80001);
                    lVar41 = 0;
LAB_0377b054:
                    iVar15 = (int)lVar41;
                    if (*(int *)(local_188 + lVar37 * 0x20) <= (int)lVar41) {
                      iVar15 = *(int *)(local_188 + lVar37 * 0x20) + -1;
                    }
                    memcpy(pvVar32,pvVar34,(long)iVar15);
                    *(undefined1 *)((long)pvVar32 + (long)iVar15) = 0;
                  }
                  lVar37 = lVar37 + 1;
                }
              }
            }
          }
LAB_0377afb4:
          local_154 = (int)cVar33;
          local_1a0 = CONCAT44(local_1a0._4_4_,(int)lVar37);
          if (0x2f < uVar3) {
            uVar42 = 0;
          }
          lVar37 = uVar42 * 4;
          uStack_150 = *(undefined4 *)((long)&local_130 + lVar37);
          local_14c = bVar9 & 1;
          local_158 = uVar3;
          (**(code **)*param_1)(param_1,&local_1a0);
          *(int *)((long)&local_130 + lVar37) = *(int *)((long)&local_130 + lVar37) + 1;
        }
        if ((((uVar40 & 1) != 0) && (*(long *)(lVar22 + 0x60) != 0)) &&
           (puVar35 = *(undefined8 **)(*(long *)(lVar22 + 0x60) + 8), puVar35 != (undefined8 *)0x0))
        {
          (**(code **)*puVar35)();
        }
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar22 + 0x1790) != 0)) &&
           (puVar35 = *(undefined8 **)(*(long *)(lVar22 + 0x1790) + 8), puVar35 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar35)();
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x1fb);
    FUN_026f62d4(lVar11);
  }
  return;
}

