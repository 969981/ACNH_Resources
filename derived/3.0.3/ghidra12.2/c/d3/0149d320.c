
/* WARNING: Removing unreachable block (ram,0x0149e2a0) */
/* WARNING: Removing unreachable block (ram,0x0149e270) */
/* WARNING: Removing unreachable block (ram,0x0149d560) */

undefined4 FUN_0149d320(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  byte *pbVar15;
  uint *puVar16;
  uint uVar17;
  undefined *puVar18;
  undefined *puVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  char *pcVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  uint *puVar34;
  long *plVar35;
  long *plVar36;
  long lVar37;
  char *pcVar38;
  int *piVar39;
  uint *puVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  byte *pbVar44;
  uint uVar45;
  char *pcVar46;
  int iVar47;
  undefined8 *puVar48;
  char cVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  uint uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uStack_c020c;
  undefined8 uStack_c0188;
  undefined8 uStack_c0180;
  undefined8 uStack_c0178;
  undefined *puStack_c0170;
  undefined8 uStack_c0168;
  undefined *puStack_c0160;
  int iStack_c0158;
  int iStack_c0154;
  int iStack_c0150;
  undefined *puStack_c0148;
  undefined8 uStack_c0140;
  undefined8 uStack_c0138;
  undefined *puStack_c0130;
  undefined8 uStack_c0128;
  undefined *puStack_c0120;
  undefined4 uStack_c0118;
  undefined4 uStack_c0114;
  byte bStack_c0110;
  char acStack_c0108 [8];
  long lStack_c0100;
  int aiStack_c00f8 [2];
  undefined2 auStack_c00f0 [4];
  long alStack_c00e8 [2];
  undefined2 auStack_c00d8 [4];
  long alStack_c00d0 [2];
  undefined2 auStack_c00c0 [4];
  long alStack_c00b8 [2];
  undefined2 auStack_c00a8 [4];
  long alStack_c00a0 [2];
  undefined2 auStack_c0090 [4];
  long alStack_c0088 [2];
  undefined2 auStack_c0078 [4];
  long alStack_c0070 [2];
  undefined2 auStack_c0060 [4];
  long alStack_c0058 [98282];
  undefined *local_108;
  int local_100;
  int iStack_fc;
  uint *local_f8;
  int local_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int local_b0;
  int iStack_ac;
  int local_a4;
  uint local_a0;
  undefined4 local_9c;
  
  lVar33 = 0;
  lVar37 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  do {
    lVar43 = 0x40;
    lVar41 = lVar33;
    do {
      lVar43 = lVar43 + -1;
      (acStack_c0108 + lVar41)[0] = '\0';
      (acStack_c0108 + lVar41)[1] = '\0';
      *(undefined **)(acStack_c0108 + lVar41 + 8) = puVar1;
      *(undefined8 *)((long)aiStack_c00f8 + lVar41) = 0;
      *(undefined2 *)((long)auStack_c00f0 + lVar41) = 0;
      *(undefined2 *)((long)auStack_c00d8 + lVar41) = 0;
      *(undefined2 *)((long)auStack_c00c0 + lVar41) = 0;
      *(undefined2 *)((long)auStack_c00a8 + lVar41) = 0;
      *(undefined2 *)((long)auStack_c0090 + lVar41) = 0;
      *(undefined2 *)((long)auStack_c0078 + lVar41) = 0;
      *(undefined2 *)((long)auStack_c0060 + lVar41) = 0;
      *(undefined **)((long)alStack_c00e8 + lVar41) = puVar1;
      *(undefined8 *)((long)alStack_c00e8 + lVar41 + 8) = 0;
      *(undefined **)((long)alStack_c00d0 + lVar41) = puVar1;
      *(undefined8 *)((long)alStack_c00d0 + lVar41 + 8) = 0;
      *(undefined **)((long)alStack_c00b8 + lVar41) = puVar1;
      *(undefined8 *)((long)alStack_c00b8 + lVar41 + 8) = 0;
      *(undefined **)((long)alStack_c00a0 + lVar41) = puVar1;
      *(undefined8 *)((long)alStack_c00a0 + lVar41 + 8) = 0;
      *(undefined **)((long)alStack_c0088 + lVar41) = puVar1;
      *(undefined8 *)((long)alStack_c0088 + lVar41 + 8) = 0;
      *(undefined **)((long)alStack_c0070 + lVar41) = puVar1;
      *(undefined8 *)((long)alStack_c0070 + lVar41 + 8) = 0;
      *(undefined **)((long)alStack_c0058 + lVar41) = puVar1;
      *(undefined8 *)((long)alStack_c0058 + lVar41 + 8) = 0;
      lVar41 = lVar41 + 0xc0;
    } while (lVar43 != 0);
    lVar37 = lVar37 + 1;
    lVar33 = lVar33 + 0x3000;
  } while (lVar37 != 0x40);
  uStack_c0118 = 0;
  lVar37 = *(long *)PTR_DAT_04bb2720;
  if (lVar37 == 0) {
    puVar48 = &DAT_055c04a0;
  }
  else {
    puVar48 = &DAT_055c04a0;
    if (*(long *)(lVar37 + 0x330) != 0) {
      puVar48 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar37 + 0x338));
      iVar22 = FUN_006bd550(*puVar48,0);
      puVar48 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar22 != 0x758f7eaf) {
        puVar48 = &DAT_055c04a0;
      }
    }
  }
  uStack_c0114 = *(undefined4 *)(puVar48 + 7);
  bStack_c0110 = FUN_017baf44();
  bStack_c0110 = bStack_c0110 & 1;
  uStack_c0140 = (undefined *)((ulong)uStack_c0140._4_4_ << 0x20);
  puVar1 = PTR_DAT_04bb3140 + 0x10;
  lVar37 = *(long *)PTR_DAT_04bb2720;
  puStack_c0120 = puVar1;
  if (lVar37 == 0) {
    puVar48 = &DAT_055c04a0;
  }
  else {
    puVar48 = &DAT_055c04a0;
    if (*(long *)(lVar37 + 0x330) != 0) {
      puVar48 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar37 + 0x338));
      iVar22 = FUN_006bd550(*puVar48,0);
      puVar48 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar22 != 0x758f7eaf) {
        puVar48 = &DAT_055c04a0;
      }
    }
  }
  uStack_c0140 = (undefined *)CONCAT44(*(undefined4 *)(puVar48 + 7),(undefined4)uStack_c0140);
  uVar21 = FUN_017baf44();
  uStack_c0138 = CONCAT71(uStack_c0138._1_7_,uVar21) & 0xffffffffffffff01;
  uStack_c0188 = (undefined *)((ulong)uStack_c0188._4_4_ << 0x20);
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,1);
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  puVar3 = PTR_DAT_04bc0510 + 0x10;
  puVar4 = PTR_DAT_04bbc1a0 + 0x10;
  iVar22 = 0;
  puStack_c0148 = puVar1;
  do {
    local_a4 = iVar22;
    lVar37 = FUN_01a4fa00(&puStack_c0148);
    iVar32 = *(int *)(lVar37 + 0x24) + 1;
    iVar53 = *(int *)(lVar37 + 0x14);
    if (iVar32 != iVar53) {
      iVar52 = *(int *)(lVar37 + 0x10);
      iVar47 = iVar52;
      do {
        local_b8 = puVar2;
        local_b0 = iVar47;
        iStack_ac = iVar53;
        FUN_01a50240(&local_c0,&puStack_c0148,local_a4,&local_b8);
        uVar25 = FUN_0277e294(&local_c0);
        puVar1 = PTR_DAT_04bb43c0;
        if ((uVar25 & 1) != 0) {
          local_c8 = (uint *)0x0;
          local_d0 = local_c0;
          uStack_cc = uStack_bc;
          lVar33 = *(long *)PTR_DAT_04bb43c0;
          local_d8 = puVar3;
          uVar23 = FUN_0277d6c4(&local_d0);
          if (*(long *)puVar1 != 0) {
            lVar33 = *(long *)(lVar33 + 0x57e58);
            uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((uVar23 < *(uint *)(lVar33 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
              lVar33 = *(long *)PTR_DAT_04bc0428;
              uVar23 = FUN_0277d6c4(&local_c0);
              uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
              if (uVar23 < *(uint *)(lVar33 + 0x1d8)) {
                puVar34 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8);
                if (puVar34 != (uint *)0x0) {
                  local_c8 = puVar34;
                }
              }
            }
          }
          uStack_c0178 = 0;
          puVar1 = PTR_DAT_04bb2010 + 0x10;
          uStack_c0168 = (undefined *)0x0;
          uStack_c0188 = puVar4;
          uStack_c0180 = puVar1;
          puStack_c0170 = puVar1;
          FUN_01afb480(&local_d8,&uStack_c0188);
          puVar34 = local_c8;
          uVar23 = (uint)uStack_c0178 + local_b0;
          uVar54 = uStack_c0178._4_4_ + iStack_ac;
          uStack_c0178 = CONCAT44(uVar54,uVar23);
          iVar51 = (int)uStack_c0168 + local_b0;
          iVar50 = uStack_c0168._4_4_ + iStack_ac;
          uStack_c0168 = (undefined *)CONCAT44(iVar50,iVar51);
          if (local_a4 == 1) {
            uStack_e0 = 0;
            local_e8 = puVar1;
            FUN_01a5033c(&local_f0,&puStack_c0148,0,&local_b8,&local_e8);
            uVar25 = FUN_0277e294(&local_f0);
            puVar1 = PTR_DAT_04bb43c0;
            if ((uVar25 & 1) == 0) {
              bVar20 = false;
              fVar56 = 0.0;
              fVar57 = 0.0;
            }
            else {
              local_f8 = (uint *)0x0;
              local_100 = local_f0;
              iStack_fc = iStack_ec;
              local_108 = PTR_DAT_04bc0510 + 0x10;
              lVar33 = *(long *)PTR_DAT_04bb43c0;
              uVar23 = FUN_0277d6c4(&local_100);
              fVar55 = 0.0;
              if (*(long *)puVar1 == 0) {
LAB_0149e118:
                puVar34 = (uint *)0x0;
LAB_0149e11c:
                bVar20 = true;
                fVar56 = 0.0;
              }
              else {
                lVar33 = *(long *)(lVar33 + 0x57e58);
                uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                if ((*(uint *)(lVar33 + 0x1d8) <= uVar23) ||
                   (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) == 0))
                goto LAB_0149e118;
                lVar33 = *(long *)PTR_DAT_04bc0428;
                uVar23 = FUN_0277d6c4(&local_f0);
                uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                if (*(uint *)(lVar33 + 0x1d8) <= uVar23) goto LAB_0149e118;
                puVar34 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8);
                if (puVar34 == (uint *)0x0) goto LAB_0149e11c;
                uVar23 = *puVar34;
                local_f8 = puVar34;
                if (uVar23 != 0) {
                  cVar49 = *PTR_DAT_04bbfe88;
                  do {
                    if (cVar49 == '\0') {
                      cVar49 = '\x01';
                      *PTR_DAT_04bbfe88 = 1;
                      memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                      uVar23 = *puVar34;
                    }
                    else {
                      uVar54 = *(uint *)(PTR_DAT_04bbfe90 + 0xf0);
                      if (-1 < (int)uVar54) {
                        if ((float *)((ulong)uVar54 + (long)puVar34) != (float *)0x0) {
                          fVar56 = *(float *)((ulong)uVar54 + (long)puVar34);
                          bVar20 = false;
                          goto LAB_0149e138;
                        }
                        break;
                      }
                      if (uVar54 != 0xffffffff) break;
                    }
                    puVar40 = (uint *)(ulong)uVar23;
                    if ((puVar40 == (uint *)0x0) || (puVar34 == puVar40)) break;
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar34 + (10 - (long)puVar40)) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar34 + (lVar33 - (long)puVar40);
                    if (lVar33 == 0) break;
                    uVar25 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar40));
                    *(undefined4 *)(PTR_DAT_04bbfe90 + 0xf0) = 0xfffffffe;
                    if (uVar25 == 0) break;
                    piVar39 = (int *)(lVar33 + 4);
                    while (piVar39[-1] != -0x499d99d4) {
                      piVar39 = piVar39 + 2;
                      uVar25 = uVar25 - 1;
                      if (uVar25 == 0) goto LAB_0149e908;
                    }
                    iVar51 = 0;
                    if (*piVar39 != -1) {
                      iVar51 = *piVar39;
                    }
                    *(int *)(PTR_DAT_04bbfe90 + 0xf0) = iVar51;
                    uVar23 = *puVar34;
                    if (uVar23 == 0) break;
                  } while( true );
                }
LAB_0149e908:
                bVar20 = false;
                fVar56 = 0.0;
              }
LAB_0149e138:
              puVar40 = local_c8;
              if ((local_c8 != (uint *)0x0) && (uVar23 = *local_c8, uVar23 != 0)) {
                cVar49 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar49 == '\0') {
                    cVar49 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    uVar23 = *puVar40;
                  }
                  else {
                    uVar54 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                    if (-1 < (int)uVar54) {
                      if ((float *)((ulong)uVar54 + (long)puVar40) != (float *)0x0) {
                        fVar55 = *(float *)((ulong)uVar54 + (long)puVar40);
                      }
                      break;
                    }
                    if (uVar54 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar23;
                  if ((puVar16 == (uint *)0x0) || (puVar40 == puVar16)) break;
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar40 + (10 - (long)puVar16)) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar40 + (lVar33 - (long)puVar16);
                  if (lVar33 == 0) break;
                  uVar25 = (ulong)*(ushort *)((long)puVar40 + (8 - (long)puVar16));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                  if (uVar25 == 0) break;
                  piVar39 = (int *)(lVar33 + 4);
                  while (piVar39[-1] != -0x3e783aea) {
                    piVar39 = piVar39 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_0149e244;
                  }
                  iVar51 = 0;
                  if (*piVar39 != -1) {
                    iVar51 = *piVar39;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar51;
                  uVar23 = *puVar40;
                  if (uVar23 == 0) break;
                } while( true );
              }
LAB_0149e244:
              fVar55 = fVar56 + fVar55;
              if (bVar20) {
                fVar57 = 0.0;
                if (0.0 <= fVar55) {
                  fVar57 = fVar55;
                }
                local_a0 = 0xbc;
              }
              else {
                uVar23 = *puVar34;
                if (uVar23 == 0) {
                  fVar57 = 0.0;
                  if (0.0 <= fVar55) {
                    fVar57 = fVar55;
                  }
                }
                else {
                  cVar49 = *PTR_DAT_04bbfe88;
                  while (cVar49 == '\0') {
                    cVar49 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    uVar23 = *puVar34;
LAB_0149e320:
                    fVar57 = 0.0;
                    lVar33 = (long)puVar34 - (ulong)uVar23;
                    if (((ulong)uVar23 == 0) || (lVar33 == 0)) goto LAB_0149e5a0;
                    lVar43 = 0xc;
                    if (*(char *)(lVar33 + 10) != '\0') {
                      lVar43 = 0x1c;
                    }
                    if (lVar43 + lVar33 == 0) goto LAB_0149e5a0;
                    uVar25 = (ulong)*(ushort *)(lVar33 + 8);
                    *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                    if (uVar25 == 0) goto LAB_0149e5a0;
                    piVar39 = (int *)(lVar43 + lVar33 + 4);
                    while (piVar39[-1] != -0x3e783aea) {
                      piVar39 = piVar39 + 2;
                      uVar25 = uVar25 - 1;
                      if (uVar25 == 0) goto LAB_0149e5a0;
                    }
                    iVar51 = 0;
                    if (*piVar39 != -1) {
                      iVar51 = *piVar39;
                    }
                    *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar51;
                    uVar23 = *puVar34;
                    if (uVar23 == 0) goto LAB_0149e5a0;
                  }
                  uVar54 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                  if ((int)uVar54 < 0) {
                    if (uVar54 == 0xffffffff) goto LAB_0149e320;
LAB_0149e59c:
                    fVar57 = 0.0;
                  }
                  else {
                    if ((float *)((ulong)uVar54 + (long)puVar34) == (float *)0x0) goto LAB_0149e59c;
                    fVar57 = *(float *)((ulong)uVar54 + (long)puVar34);
                  }
LAB_0149e5a0:
                  if (fVar57 <= fVar55) {
                    fVar57 = fVar55;
                  }
                }
                local_9c = 0x17;
                uVar29 = 0;
                uVar23 = *puVar34;
                if ((uVar23 != 0) && (puVar34 != (uint *)(ulong)uVar23)) {
                  puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar23);
                  uVar29 = 0;
                  if (*puVar40 != 0) {
                    uVar23 = puVar40[1];
                    if ((uVar23 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar40 + 10) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                      if (lVar33 != 0) {
                        uVar54 = 0;
                        if ((ulong)uVar23 != 0) {
                          uVar54 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar23);
                        }
                        if (*puVar40 <= uVar54) {
                          uVar54 = 0xffffffff;
                        }
                        if ((uVar54 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar29 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar54 * 2),
                           uVar29 < 0xbd)) goto LAB_0149e650;
                      }
                    }
                    uVar29 = 0;
                  }
                }
LAB_0149e650:
                if (uVar29 == 0x17) {
                  bVar20 = false;
                  local_a0 = 0x17;
                  goto LAB_0149e714;
                }
                local_a0 = 0;
                uVar23 = *puVar34;
                if ((uVar23 != 0) && (puVar34 != (uint *)(ulong)uVar23)) {
                  puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar23);
                  local_a0 = 0;
                  if (*puVar40 != 0) {
                    uVar23 = puVar40[1];
                    if ((uVar23 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar40 + 10) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                      if (lVar33 != 0) {
                        uVar54 = 0;
                        if ((ulong)uVar23 != 0) {
                          uVar54 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar23);
                        }
                        if (*puVar40 <= uVar54) {
                          uVar54 = 0xffffffff;
                        }
                        if ((uVar54 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_a0 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar54 * 2), local_a0 < 0xbd))
                        goto LAB_0149e700;
                      }
                    }
                    local_a0 = 0;
                  }
                }
              }
LAB_0149e700:
              local_9c = 0x15;
              bVar20 = local_a0 != 0x15;
            }
LAB_0149e714:
            uVar23 = (uint)uStack_c0178;
            uVar54 = uStack_c0178._4_4_;
            iVar51 = (int)uStack_c0168;
            iVar50 = uStack_c0168._4_4_;
          }
          else {
            if (local_c8 == (uint *)0x0) {
              local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0xbc);
              fVar57 = 0.0;
              local_108 = (undefined *)CONCAT44(local_108._4_4_,0x15);
              uVar31 = 0xbc;
            }
            else {
              uVar31 = *local_c8;
              if (uVar31 != 0) {
                cVar49 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar49 == '\0') {
                    cVar49 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    uVar31 = *puVar34;
                  }
                  else {
                    uVar30 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                    if (-1 < (int)uVar30) {
                      if ((float *)((ulong)uVar30 + (long)puVar34) == (float *)0x0) break;
                      fVar57 = *(float *)((ulong)uVar30 + (long)puVar34);
                      goto LAB_0149e400;
                    }
                    if (uVar30 != 0xffffffff) break;
                  }
                  puVar40 = (uint *)(ulong)uVar31;
                  fVar57 = 0.0;
                  if ((puVar40 == (uint *)0x0) || (fVar57 = 0.0, puVar34 == puVar40))
                  goto LAB_0149e400;
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar34 + (10 - (long)puVar40)) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar34 + (lVar33 - (long)puVar40);
                  if (lVar33 == 0) goto LAB_0149e400;
                  uVar25 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar40));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                  if (uVar25 == 0) goto LAB_0149e400;
                  piVar39 = (int *)(lVar33 + 4);
                  while (piVar39[-1] != -0x3e783aea) {
                    piVar39 = piVar39 + 2;
                    uVar25 = uVar25 - 1;
                    if (uVar25 == 0) goto LAB_0149e3fc;
                  }
                  iVar24 = 0;
                  if (*piVar39 != -1) {
                    iVar24 = *piVar39;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar24;
                  uVar31 = *puVar34;
                  if (uVar31 == 0) goto LAB_0149e400;
                } while( true );
              }
LAB_0149e3fc:
              fVar57 = 0.0;
LAB_0149e400:
              uVar30 = 0;
              uVar31 = *puVar34;
              if ((uVar31 != 0) && (puVar34 != (uint *)(ulong)uVar31)) {
                puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar31);
                uVar30 = 0;
                if (*puVar40 != 0) {
                  uVar31 = puVar40[1];
                  if ((uVar31 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar40 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                    if (lVar33 != 0) {
                      uVar30 = 0;
                      if ((ulong)uVar31 != 0) {
                        uVar30 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar31);
                      }
                      if (*puVar40 <= uVar30) {
                        uVar30 = 0xffffffff;
                      }
                      if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar30 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar30 * 2),
                         uVar30 < 0xbd)) goto LAB_0149e498;
                    }
                  }
                  uVar30 = 0;
                }
              }
LAB_0149e498:
              local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar30);
              if (uVar30 == 0x17) {
                local_108 = (undefined *)CONCAT44(local_108._4_4_,0x17);
                fVar56 = 0.0;
                bVar20 = false;
                goto LAB_0149e71c;
              }
              uVar31 = 0;
              local_108 = (undefined *)CONCAT44(local_108._4_4_,0x15);
              uVar30 = *puVar34;
              if ((uVar30 != 0) && (puVar34 != (uint *)(ulong)uVar30)) {
                puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar30);
                uVar31 = 0;
                if (*puVar40 != 0) {
                  uVar31 = puVar40[1];
                  if ((uVar31 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar40 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                    if (lVar33 != 0) {
                      uVar30 = 0;
                      if ((ulong)uVar31 != 0) {
                        uVar30 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar31);
                      }
                      if (*puVar40 <= uVar30) {
                        uVar30 = 0xffffffff;
                      }
                      if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar31 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar30 * 2),
                         uVar31 < 0xbd)) goto LAB_0149e554;
                    }
                  }
                  uVar31 = 0;
                }
              }
            }
LAB_0149e554:
            local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar31);
            fVar56 = 0.0;
            bVar20 = uVar31 != (uint)local_108;
          }
LAB_0149e71c:
          fVar56 = fVar56 / 5.0;
          fVar57 = fVar57 / 5.0;
          uVar31 = 0;
          if (fVar56 != (float)(int)fVar56) {
            uVar31 = (uint)(fVar56 < 0.0);
          }
          uVar30 = 0;
          if (fVar57 != (float)(int)fVar57) {
            uVar30 = (uint)(fVar57 < 0.0);
          }
          iVar10 = (int)fVar57 - uVar30;
          iVar24 = iVar10;
          if (6 < iVar10) {
            iVar24 = 7;
          }
          uVar30 = iVar50 + 1;
          if (!bVar20) {
            iVar24 = iVar10;
          }
          uVar45 = uVar23;
          if ((int)((int)fVar56 - uVar31) < iVar24) {
            if (uVar30 != uVar54) {
              uVar42 = uVar23;
              do {
                uVar25 = (ulong)uVar45;
                pcVar9 = acStack_c0108 + uVar25 * 0x3000;
                if (0x3f < uVar45) {
                  pcVar9 = acStack_c0108;
                }
                pcVar28 = pcVar9 + (ulong)uVar54 * 0xc0;
                pcVar46 = pcVar28;
                if (0x3f < uVar54) {
                  pcVar46 = pcVar9;
                }
                if ((int)uVar45 < 0x40) {
                  if ((int)uVar54 < 0x40) {
                    pcVar9 = (char *)((ulong)acStack_c0108 | 1);
                    if (uVar45 < 0x40) {
                      pcVar9 = acStack_c0108 + uVar25 * 0x3000 + 1;
                    }
                    piVar39 = aiStack_c00f8 + uVar25 * 0xc00 + 1;
                    piVar12 = aiStack_c00f8 + uVar25 * 0xc00;
                    if (uVar45 >= 0x40) {
                      piVar39 = aiStack_c00f8 + 1;
                      piVar12 = aiStack_c00f8;
                    }
                    if (uVar54 < 0x40) {
                      pcVar9 = pcVar28 + 1;
                      piVar39 = (int *)(pcVar28 + 0x14);
                      piVar12 = (int *)(pcVar28 + 0x10);
                    }
                    uVar42 = (int)fVar56 - uVar31;
                    do {
                      if (((int)uVar42 < 8) && (-1 < (int)(uVar54 | uVar45 | uVar42))) {
                        pcVar28 = pcVar46 + (ulong)uVar42 * 0x18;
                        if (7 < uVar42) {
                          pcVar38 = pcVar9;
                          pcVar13 = pcVar46;
                        }
                        else {
                          pcVar38 = pcVar28 + 1;
                          pcVar13 = pcVar28;
                        }
                        *pcVar13 = '\x01';
                        piVar8 = (int *)(pcVar28 + 0x14);
                        piVar14 = (int *)(pcVar28 + 0x10);
                        if (7 < uVar42) {
                          piVar8 = piVar39;
                          piVar14 = piVar12;
                        }
                        *pcVar38 = (char)local_a4;
                        *piVar14 = local_b0;
                        *piVar8 = iStack_ac;
                      }
                      uVar42 = uVar42 + 1;
                    } while ((int)uVar42 < iVar24);
                    iVar51 = (int)uStack_c0168;
                    uVar42 = (uint)uStack_c0178;
                  }
                }
                if ((int)uVar45 < iVar51) {
                  uVar45 = uVar45 + 1;
                }
                else {
                  uVar54 = uVar54 + 1;
                  uVar45 = uVar42;
                }
              } while ((uVar23 != uVar45) || (uVar30 != uVar54));
            }
          }
          else {
            while (uVar30 != uVar54) {
              do {
                if ((int)uVar45 < iVar51) {
                  uVar45 = uVar45 + 1;
                }
                else {
                  uVar54 = uVar54 + 1;
                  uVar45 = uVar23;
                }
              } while (uVar23 != uVar45);
            }
          }
        }
        if (iVar47 < *(int *)(lVar37 + 0x20)) {
          iVar47 = iVar47 + 1;
        }
        else {
          iVar53 = iVar53 + 1;
          iVar47 = *(int *)(lVar37 + 0x10);
        }
      } while ((iVar52 != iVar47) || (iVar32 != iVar53));
    }
    iVar32 = 8;
    if (iVar22 < 8) {
      iVar32 = iVar22 + 1;
    }
    iVar22 = iVar32;
  } while (iVar32 != 2);
  uStack_c0188 = (undefined *)CONCAT44(uStack_c0188._4_4_,2);
  puVar19 = uStack_c0188;
  puStack_c0148 = (undefined *)CONCAT44(puStack_c0148._4_4_,5);
  uStack_c0188._0_4_ = 2;
  uStack_c020c = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bbfe68 + 0x10;
  puVar5 = PTR_DAT_04bb5438 + 0x10;
  puVar6 = PTR_DAT_04bb2e18 + 0x10;
  plVar35 = (long *)PTR_DAT_04bb43c0;
  iVar22 = (int)uStack_c0188;
  uStack_c0188 = puVar19;
  do {
    local_c0 = iVar22;
    lVar37 = FUN_01a4fa00(&puStack_c0120);
    iVar32 = *(int *)(lVar37 + 0x24) + 1;
    iVar53 = *(int *)(lVar37 + 0x14);
    if (iVar32 != iVar53) {
      iVar52 = *(int *)(lVar37 + 0x10);
      iVar47 = iVar52;
      do {
        local_108 = puVar1;
        local_100 = iVar47;
        iStack_fc = iVar53;
        FUN_01a50240(&local_b8,&puStack_c0120,local_c0,&local_108);
        uVar25 = FUN_0277e294(&local_b8);
        if ((uVar25 & 1) != 0) {
          lVar33 = *plVar35;
          local_c8 = (uint *)0x0;
          local_d0 = (int)local_b8;
          uStack_cc = local_b8._4_4_;
          local_d8 = puVar2;
          uVar23 = FUN_0277d6c4(&local_d0);
          if (*plVar35 != 0) {
            lVar33 = *(long *)(lVar33 + 0x57e58);
            uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((uVar23 < *(uint *)(lVar33 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
              lVar33 = *(long *)PTR_DAT_04bc0428;
              uVar23 = FUN_0277d6c4(&local_b8);
              uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
              if (uVar23 < *(uint *)(lVar33 + 0x1d8)) {
                puVar34 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8);
                if (puVar34 != (uint *)0x0) {
                  local_c8 = puVar34;
                }
              }
            }
          }
          local_f0 = FUN_01ae7550(&local_d8);
          if (local_f0 == 0xc) {
            uVar23 = 2;
            bVar20 = true;
          }
          else if (local_f0 == 0xb) {
            bVar20 = true;
            uVar23 = 1;
          }
          else {
            if (local_f0 == 10) goto LAB_0149ebc8;
            bVar20 = false;
            uVar23 = 0;
          }
          uStack_c0138 = 0;
          uStack_c0140 = PTR_DAT_04bb2010 + 0x10;
          uStack_c0128 = 0;
          puStack_c0148 = puVar3;
          puStack_c0130 = uStack_c0140;
          FUN_01afb480(&local_d8,&puStack_c0148);
          iVar50 = uStack_c0138._4_4_ + iStack_fc;
          uVar54 = (uint)uStack_c0138 + local_100;
          uStack_c0138 = CONCAT44(iVar50,uVar54);
          uStack_c0128._0_4_ = (int)uStack_c0128 + local_100;
          iVar51 = uStack_c0128._4_4_ + iStack_fc + 1;
          uStack_c0128 = CONCAT44(uStack_c0128._4_4_ + iStack_fc,(int)uStack_c0128);
          uVar31 = uVar54;
          if (bVar20) {
            if (uVar23 < 2) {
              uVar23 = 1;
            }
            if (iVar51 != iVar50) {
              do {
                uVar30 = 0;
                do {
                  puVar48 = &DAT_055c04a0;
                  uStack_c0180 = (undefined *)((ulong)uStack_c0180 & 0xffffffff00000000);
                  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_c0);
                  lVar33 = *(long *)PTR_DAT_04bb2720;
                  uStack_c0188 = puVar4;
                  if ((lVar33 != 0) && (*(long *)(lVar33 + 0x330) != 0)) {
                    puVar26 = (undefined8 *)
                              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar33 + 0x338))
                    ;
                    iVar24 = FUN_006bd550(*puVar26,0);
                    puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                    if (iVar24 != 0x758f7eaf) {
                      puVar26 = puVar48;
                    }
                    puVar48 = puVar26;
                  }
                  uStack_c0180 = (undefined *)
                                 CONCAT44(*(undefined4 *)(puVar48 + 7),(undefined4)uStack_c0180);
                  uVar21 = FUN_017baf44();
                  uStack_c0178 = CONCAT71(uStack_c0178._1_7_,uVar21) & 0xffffffffffffff01;
                  uStack_c0188 = puVar5;
                  lVar33 = FUN_015001e0(&uStack_c0188);
                  iVar24 = *(int *)(lVar33 + 0x20);
                  lVar33 = *(long *)PTR_DAT_04bb5ce0;
                  if (lVar33 == 0) {
                    fVar57 = 0.0;
                    fVar55 = 0.0;
                    fVar56 = 85.0;
                    fVar58 = 85.0;
                  }
                  else {
                    fVar55 = (float)*(int *)(lVar33 + 0xd88) * 5.0;
                    fVar57 = (float)*(int *)(lVar33 + 0xd8c) * 5.0;
                    fVar56 = (float)*(int *)(lVar33 + 0xd98) * 5.0 + 5.0;
                    fVar58 = (float)*(int *)(lVar33 + 0xd9c) * 5.0 + 5.0;
                  }
                  lVar33 = FUN_01a4fa00(&uStack_c0188);
                  iVar10 = *(int *)(lVar33 + 0x14);
                  FUN_01a4fa00(&uStack_c0188);
                  uVar45 = (iVar10 - iVar50) + 7;
                  if ((-1 < (int)uVar45) && ((int)local_e8 - 2U < 4)) {
                    iVar10 = (int)((float)(int)fVar57 / 5.0) - (uint)(fVar57 < 0.0);
                    iVar11 = (int)((float)(int)fVar58 / 5.0) - (uint)(fVar58 < 0.0);
                    switch((int)local_e8) {
                    case 2:
                      uVar42 = uVar30 + iVar10;
                      uVar17 = uVar31;
                      break;
                    case 3:
                      uVar42 = iVar10 + ~uVar31 + iVar11;
                      uVar17 = uVar30 + ((int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0));
                      break;
                    case 4:
                      uVar42 = iVar11 + ~uVar30;
                      uVar17 = iVar24 - uVar31;
                      break;
                    case 5:
                      uVar17 = (~uVar30 - (uint)(fVar56 < 0.0)) + (int)((float)(int)fVar56 / 5.0);
                      uVar42 = uVar31;
                    }
                    if (((((int)uVar17 < 0x40) && (-1 < (int)(uVar17 | uVar45 | uVar42))) &&
                        (uVar45 < 8)) && ((int)uVar42 < 0x40)) {
                      pcVar9 = acStack_c0108 + (ulong)uVar17 * 0x3000;
                      if (0x3f < uVar17) {
                        pcVar9 = acStack_c0108;
                      }
                      pcVar46 = pcVar9 + (ulong)uVar42 * 0xc0;
                      if (0x3f < uVar42) {
                        pcVar46 = pcVar9;
                      }
                      if (pcVar46[(ulong)uVar45 * 0x18] != '\0') {
                        uStack_c0168 = *(undefined **)PTR_DAT_04bb37e0;
                        uStack_c0188 = *(undefined **)PTR_DAT_04bb37e0;
                        iStack_c0158 = *(int *)(PTR_DAT_04bb5d40 + 8);
                        iStack_c0154 = *(int *)(PTR_DAT_04bb5d40 + 0xc);
                        uStack_c0178 = *(ulong *)(pcVar46 + (ulong)uVar45 * 0x18 + 0x10);
                        iStack_c0150 = 0;
                        uStack_c0180 = PTR_DAT_04bb2010 + 0x10;
                        puStack_c0170 =
                             (undefined *)
                             CONCAT44((int)((ulong)puStack_c0170 >> 0x20),
                                      (uint)(byte)pcVar46[(ulong)uVar45 * 0x18 + 1]);
                        puStack_c0160 = uStack_c0180;
                        FUN_01a5033c(&local_e8,&puStack_c0120,pcVar46[(ulong)uVar45 * 0x18 + 1],
                                     &uStack_c0180,0);
                        uStack_c0188 = local_e8;
                        puVar19 = uStack_c0188;
                        iStack_c0154 = iStack_fc;
                        iStack_c0150 = local_c0;
                        iStack_c0158 = local_100;
                        if ((int)param_1[5] <= (int)param_1[2]) {
                          return 1;
                        }
                        plVar35 = (long *)param_1[3];
                        if (plVar35 != (long *)0x0) {
                          param_1[3] = *plVar35;
                        }
                        *(undefined2 *)plVar35 = (undefined2)local_e8;
                        uStack_c0188._2_1_ = (undefined1)((ulong)local_e8 >> 0x10);
                        plVar35[1] = (long)puVar6;
                        *(undefined1 *)((long)plVar35 + 2) = uStack_c0188._2_1_;
                        uStack_c0188._3_1_ = (undefined1)((ulong)local_e8 >> 0x18);
                        *(undefined1 *)((long)plVar35 + 3) = uStack_c0188._3_1_;
                        *(undefined4 *)((long)plVar35 + 4) = local_e8._4_4_;
                        *(uint *)(plVar35 + 2) = (uint)uStack_c0178;
                        *(uint *)((long)plVar35 + 0x14) = uStack_c0178._4_4_;
                        puVar18 = PTR_DAT_04bb2010;
                        plVar35[5] = (long)puVar6;
                        plVar35[1] = (long)(puVar18 + 0x10);
                        *(undefined4 *)(plVar35 + 3) = puStack_c0170._0_4_;
                        uStack_c0168._0_2_ = SUB82(local_b8,0);
                        *(undefined2 *)(plVar35 + 4) = (undefined2)uStack_c0168;
                        uStack_c0168._2_1_ = (undefined1)((ulong)local_b8 >> 0x10);
                        *(undefined1 *)((long)plVar35 + 0x22) = uStack_c0168._2_1_;
                        uStack_c0168._3_1_ = (undefined1)((ulong)local_b8 >> 0x18);
                        *(undefined1 *)((long)plVar35 + 0x23) = uStack_c0168._3_1_;
                        *(undefined4 *)((long)plVar35 + 0x24) = local_b8._4_4_;
                        *(int *)(plVar35 + 6) = local_100;
                        plVar35[5] = (long)(puVar18 + 0x10);
                        *(int *)((long)plVar35 + 0x34) = iStack_fc;
                        *(int *)(plVar35 + 7) = local_c0;
                        plVar36 = plVar35 + 8;
                        *plVar36 = 0;
                        plVar35[9] = 0;
                        lVar33 = *param_1;
                        *param_1 = (long)plVar36;
                        *plVar36 = lVar33;
                        plVar35[9] = (long)param_1;
                        plVar35 = (long *)PTR_DAT_04bb43c0;
                        if (lVar33 != 0) {
                          *(long **)(lVar33 + 8) = plVar36;
                        }
                        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                        uStack_c020c = 1;
                        uStack_c0188 = puVar19;
                        uStack_c0168 = local_b8;
                        goto LAB_0149ebc8;
                      }
                      pcVar46[(ulong)uVar45 * 0x18] = '\x01';
                      pcVar46[(ulong)uVar45 * 0x18 + 1] = (char)local_c0;
                      *(int *)(pcVar46 + (ulong)uVar45 * 0x18 + 0x10) = local_100;
                      *(int *)(pcVar46 + (ulong)uVar45 * 0x18 + 0x14) = iStack_fc;
                    }
                  }
                  uVar30 = uVar30 + 1;
                } while (uVar23 != uVar30);
                if ((int)uVar31 < (int)uStack_c0128) {
                  uVar31 = uVar31 + 1;
                }
                else {
                  iVar50 = iVar50 + 1;
                  uVar31 = (uint)uStack_c0138;
                }
              } while ((uVar54 != uVar31) || (plVar35 = (long *)PTR_DAT_04bb43c0, iVar51 != iVar50))
              ;
            }
          }
          else {
            while (iVar51 != iVar50) {
              do {
                if ((int)uVar31 < (int)uStack_c0128) {
                  uVar31 = uVar31 + 1;
                }
                else {
                  iVar50 = iVar50 + 1;
                  uVar31 = uVar54;
                }
              } while (uVar54 != uVar31);
            }
          }
        }
LAB_0149ebc8:
        if (iVar47 < *(int *)(lVar37 + 0x20)) {
          iVar47 = iVar47 + 1;
        }
        else {
          iVar53 = iVar53 + 1;
          iVar47 = *(int *)(lVar37 + 0x10);
        }
      } while ((iVar52 != iVar47) || (iVar32 != iVar53));
    }
    iVar32 = 8;
    if (iVar22 < 8) {
      iVar32 = iVar22 + 1;
    }
    iVar22 = iVar32;
  } while (iVar32 != 6);
  local_c0 = 7;
  lVar37 = FUN_01a4fa00(&puStack_c0120);
  iVar22 = *(int *)(lVar37 + 0x24) + 1;
  iVar32 = *(int *)(lVar37 + 0x14);
  if (iVar22 != iVar32) {
    iVar53 = *(int *)(lVar37 + 0x10);
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar4 = PTR_DAT_04bb2e18 + 0x10;
    iVar52 = iVar53;
    do {
      local_108 = puVar1;
      local_100 = iVar52;
      iStack_fc = iVar32;
      FUN_01a50240(&local_b8,&puStack_c0120,local_c0,&local_108);
      uVar25 = FUN_0277e294(&local_b8);
      puVar5 = PTR_DAT_04bb43c0;
      if ((uVar25 & 1) != 0) {
        local_c8 = (uint *)0x0;
        local_d0 = (int)local_b8;
        uStack_cc = local_b8._4_4_;
        lVar33 = *(long *)PTR_DAT_04bb43c0;
        local_d8 = puVar2;
        uVar23 = FUN_0277d6c4(&local_d0);
        if (*(long *)puVar5 != 0) {
          lVar33 = *(long *)(lVar33 + 0x57e58);
          uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((uVar23 < *(uint *)(lVar33 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
            lVar33 = *(long *)PTR_DAT_04bc0428;
            uVar23 = FUN_0277d6c4(&local_b8);
            uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if (uVar23 < *(uint *)(lVar33 + 0x1d8)) {
              puVar34 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8);
              if (puVar34 != (uint *)0x0) {
                local_c8 = puVar34;
              }
            }
          }
        }
        uStack_c0138 = 0;
        uStack_c0140 = PTR_DAT_04bb2010 + 0x10;
        uStack_c0128 = 0;
        puStack_c0148 = puVar3;
        puStack_c0130 = uStack_c0140;
        FUN_01afb480(&local_d8,&puStack_c0148);
        puVar34 = local_c8;
        fVar55 = 0.0;
        if ((local_c8 != (uint *)0x0) && (uVar23 = *local_c8, uVar23 != 0)) {
          cVar49 = *PTR_DAT_04bbfe88;
          do {
            if (cVar49 == '\0') {
              cVar49 = '\x01';
              *PTR_DAT_04bbfe88 = 1;
              memset(PTR_DAT_04bbfe90,0xff,0x1ac);
              uVar23 = *puVar34;
            }
            else {
              uVar54 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
              if (-1 < (int)uVar54) {
                if ((float *)((ulong)uVar54 + (long)puVar34) != (float *)0x0) {
                  fVar55 = *(float *)((ulong)uVar54 + (long)puVar34);
                }
                break;
              }
              if (uVar54 != 0xffffffff) break;
            }
            puVar40 = (uint *)(ulong)uVar23;
            if ((puVar40 == (uint *)0x0) || (puVar34 == puVar40)) break;
            lVar33 = 0xc;
            if (*(char *)((long)puVar34 + (10 - (long)puVar40)) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar34 + (lVar33 - (long)puVar40);
            if (lVar33 == 0) break;
            uVar25 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar40));
            *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
            if (uVar25 == 0) break;
            piVar39 = (int *)(lVar33 + 4);
            while (piVar39[-1] != -0x3e783aea) {
              piVar39 = piVar39 + 2;
              uVar25 = uVar25 - 1;
              if (uVar25 == 0) goto LAB_0149d810;
            }
            iVar47 = 0;
            if (*piVar39 != -1) {
              iVar47 = *piVar39;
            }
            *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar47;
            uVar23 = *puVar34;
            if (uVar23 == 0) break;
          } while( true );
        }
LAB_0149d810:
        fVar55 = fVar55 / 5.0;
        uStack_c0138._0_4_ = (uint)uStack_c0138 + local_100;
        uStack_c0128._0_4_ = (int)uStack_c0128 + local_100;
        uVar23 = 0;
        if (fVar55 != (float)(int)fVar55) {
          uVar23 = (uint)(0.0 <= fVar55);
        }
        uVar31 = uVar23 + (int)fVar55;
        uStack_c0128._4_4_ = uStack_c0128._4_4_ + iStack_fc;
        uVar30 = uStack_c0138._4_4_ + iStack_fc;
        uVar54 = uStack_c0128._4_4_ + 1;
        uStack_c0138 = CONCAT44(uVar30,(uint)uStack_c0138);
        uVar45 = (uint)uStack_c0138;
        if (uVar31 == 0 || (int)uVar31 < 0 != SCARRY4(uVar23,(int)fVar55)) {
          while (uVar54 != uVar30) {
            do {
              if ((int)uVar45 < (int)uStack_c0128) {
                uVar45 = uVar45 + 1;
              }
              else {
                uVar30 = uVar30 + 1;
                uVar45 = (uint)uStack_c0138;
              }
            } while ((uint)uStack_c0138 != uVar45);
          }
        }
        else if (uVar54 != uVar30) {
          uVar23 = (uint)uStack_c0138;
          do {
            uVar25 = (ulong)uVar23;
            pcVar46 = acStack_c0108 + uVar25 * 0x3000;
            pcVar9 = pcVar46;
            if (0x3f < uVar23) {
              pcVar9 = acStack_c0108;
            }
            pcVar28 = pcVar9 + (ulong)uVar30 * 0xc0;
            if (0x3f < uVar23) {
              pcVar46 = acStack_c0108;
            }
            pbVar44 = (byte *)((ulong)pcVar28 | 1);
            pbVar7 = pbVar44;
            pcVar38 = pcVar28;
            if (0x3f < uVar30) {
              pbVar7 = (byte *)((ulong)pcVar46 | 1);
              pcVar38 = pcVar9;
            }
            if (((int)uVar30 < 0x40) && ((int)uVar23 < 0x40)) {
              uVar27 = 0;
              piVar39 = aiStack_c00f8 + uVar25 * 0xc00 + 1;
              piVar12 = aiStack_c00f8 + uVar25 * 0xc00;
              if (0x3f < uVar23) {
                piVar39 = aiStack_c00f8 + 1;
                piVar12 = aiStack_c00f8;
              }
              piVar8 = (int *)(pcVar28 + 0x14);
              piVar14 = (int *)(pcVar28 + 0x10);
              if (0x3f < uVar30) {
                piVar8 = piVar39;
                piVar14 = piVar12;
              }
              uVar45 = 7;
              do {
                if ((uVar27 < 8) && (-1 < (int)(uVar23 | uVar30 | uVar45))) {
                  uVar25 = (ulong)uVar45;
                  pcVar46 = pcVar38 + (ulong)uVar45 * 0x18;
                  if (7 < uVar45) {
                    pcVar46 = pcVar38;
                  }
                  if (*pcVar46 != '\0') {
                    uStack_c0168 = *(undefined **)PTR_DAT_04bb37e0;
                    uStack_c0188 = *(undefined **)PTR_DAT_04bb37e0;
                    piVar39 = (int *)(pcVar28 + 0x10);
                    if (0x3f < uVar30) {
                      pbVar44 = (byte *)(pcVar9 + 1);
                      piVar39 = (int *)(pcVar9 + 0x10);
                    }
                    iStack_c0158 = *(int *)(PTR_DAT_04bb5d40 + 8);
                    iStack_c0154 = *(int *)(PTR_DAT_04bb5d40 + 0xc);
                    pcVar38 = pcVar38 + uVar25 * 0x18;
                    if (0x3f < uVar30) {
                      pcVar28 = pcVar9;
                    }
                    iStack_c0150 = 0;
                    if (uVar45 < 8) {
                      pbVar44 = (byte *)(pcVar38 + 1);
                    }
                    uStack_c0180 = PTR_DAT_04bb2010 + 0x10;
                    piVar12 = (int *)(pcVar38 + 0x10);
                    if (uVar45 >= 8) {
                      piVar12 = piVar39;
                      pcVar38 = pcVar28;
                    }
                    puStack_c0170 =
                         (undefined *)CONCAT44((int)((ulong)puStack_c0170 >> 0x20),(uint)*pbVar44);
                    uStack_c0178 = CONCAT44(*(undefined4 *)(pcVar38 + 0x14),*piVar12);
                    puStack_c0160 = uStack_c0180;
                    FUN_01a5033c(&local_e8,&puStack_c0120,*pbVar44,&uStack_c0180,0);
                    uStack_c0188 = local_e8;
                    puVar5 = uStack_c0188;
                    iStack_c0154 = iStack_fc;
                    iStack_c0150 = local_c0;
                    iStack_c0158 = local_100;
                    if ((int)param_1[5] <= (int)param_1[2]) {
                      return 1;
                    }
                    plVar35 = (long *)param_1[3];
                    if (plVar35 != (long *)0x0) {
                      param_1[3] = *plVar35;
                    }
                    *(undefined2 *)plVar35 = (undefined2)local_e8;
                    uStack_c0188._2_1_ = (undefined1)((ulong)local_e8 >> 0x10);
                    plVar35[1] = (long)puVar4;
                    *(undefined1 *)((long)plVar35 + 2) = uStack_c0188._2_1_;
                    uStack_c0188._3_1_ = (undefined1)((ulong)local_e8 >> 0x18);
                    *(undefined1 *)((long)plVar35 + 3) = uStack_c0188._3_1_;
                    *(undefined4 *)((long)plVar35 + 4) = local_e8._4_4_;
                    *(uint *)(plVar35 + 2) = (uint)uStack_c0178;
                    *(uint *)((long)plVar35 + 0x14) = uStack_c0178._4_4_;
                    puVar6 = PTR_DAT_04bb2010;
                    plVar35[5] = (long)puVar4;
                    plVar35[1] = (long)(puVar6 + 0x10);
                    *(undefined4 *)(plVar35 + 3) = puStack_c0170._0_4_;
                    uStack_c0168._0_2_ = SUB82(local_b8,0);
                    *(undefined2 *)(plVar35 + 4) = (undefined2)uStack_c0168;
                    uStack_c0168._2_1_ = (undefined1)((ulong)local_b8 >> 0x10);
                    *(undefined1 *)((long)plVar35 + 0x22) = uStack_c0168._2_1_;
                    uStack_c0168._3_1_ = (undefined1)((ulong)local_b8 >> 0x18);
                    *(undefined1 *)((long)plVar35 + 0x23) = uStack_c0168._3_1_;
                    *(undefined4 *)((long)plVar35 + 0x24) = local_b8._4_4_;
                    *(int *)(plVar35 + 6) = local_100;
                    plVar35[5] = (long)(puVar6 + 0x10);
                    *(int *)((long)plVar35 + 0x34) = iStack_fc;
                    *(int *)(plVar35 + 7) = local_c0;
                    plVar36 = plVar35 + 8;
                    *plVar36 = 0;
                    plVar35[9] = 0;
                    lVar33 = *param_1;
                    *param_1 = (long)plVar36;
                    *plVar36 = lVar33;
                    plVar35[9] = (long)param_1;
                    if (lVar33 != 0) {
                      *(long **)(lVar33 + 8) = plVar36;
                    }
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    uStack_c020c = 1;
                    uStack_c0188 = puVar5;
                    uStack_c0168 = local_b8;
                    goto LAB_0149dbc0;
                  }
                  *pcVar46 = '\x01';
                  if (uVar45 < 8) {
                    piVar39 = (int *)(pcVar38 + uVar25 * 0x18 + 0x14);
                    piVar12 = (int *)(pcVar38 + uVar25 * 0x18 + 0x10);
                    pbVar15 = (byte *)(pcVar38 + uVar25 * 0x18 + 1);
                  }
                  else {
                    piVar39 = piVar8;
                    piVar12 = piVar14;
                    pbVar15 = pbVar7;
                  }
                  *pbVar15 = (byte)local_c0;
                  *piVar12 = local_100;
                  *piVar39 = iStack_fc;
                }
                uVar27 = uVar27 + 1;
                uVar45 = uVar45 - 1;
              } while (uVar31 != uVar27);
            }
            if ((int)uVar23 < (int)uStack_c0128) {
              uVar23 = uVar23 + 1;
            }
            else {
              uVar30 = uVar30 + 1;
              uVar23 = (uint)uStack_c0138;
            }
          } while (((uint)uStack_c0138 != uVar23) || (uVar54 != uVar30));
        }
      }
LAB_0149dbc0:
      if (iVar52 < *(int *)(lVar37 + 0x20)) {
        iVar52 = iVar52 + 1;
      }
      else {
        iVar32 = iVar32 + 1;
        iVar52 = *(int *)(lVar37 + 0x10);
      }
    } while ((iVar53 != iVar52) || (iVar22 != iVar32));
  }
  return uStack_c020c;
}

