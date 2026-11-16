
/* WARNING: Removing unreachable block (ram,0x029f3e6c) */

void FUN_029f2e10(long param_1,ulong param_2,byte param_3,uint param_4)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined *puVar9;
  short sVar10;
  int iVar11;
  ulong uVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  long lVar20;
  long lVar21;
  ushort uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  short sVar26;
  byte bVar27;
  short sVar28;
  short sVar29;
  uint uVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  long *plVar35;
  short sVar36;
  uint uVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  int iVar44;
  undefined1 *__src;
  short sVar45;
  uint uStack_194;
  undefined4 local_130;
  byte local_12c;
  byte local_128;
  ushort local_120;
  uint local_11c;
  uint local_108;
  undefined1 auStack_f4 [31];
  undefined1 local_d5;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined2 local_c0;
  undefined1 local_be;
  uint local_bc;
  undefined **local_b8;
  byte *pbStack_b0;
  undefined4 **local_a8;
  undefined4 *puStack_a0;
  byte local_98 [4];
  undefined4 local_94;
  undefined4 *local_90;
  undefined *local_88;
  int local_80;
  long local_78;
  int local_6c;
  
  if ((param_2 & 1) == 0) {
    local_130 = *(undefined4 *)(param_1 + 0x60);
    local_11c = *(uint *)(param_1 + 100);
  }
  else {
    *(undefined1 *)(param_1 + 0x5d) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0xffffffff00000003;
    local_130 = 3;
    local_11c = 0xffffffff;
  }
  sVar4 = *(short *)(param_1 + 0x18);
  sVar5 = *(short *)(param_1 + 0x3c);
  sVar6 = *(short *)(param_1 + 0x44);
  sVar7 = *(short *)(param_1 + 0x4a);
  local_128 = *(byte *)(param_1 + 0x4c);
  local_c0 = *(undefined2 *)(param_1 + 0x4d);
  sVar28 = *(short *)(param_1 + 0x1a);
  sVar29 = *(short *)(param_1 + 0x1c);
  sVar31 = *(short *)(param_1 + 0x1e);
  sVar32 = *(short *)(param_1 + 0x20);
  local_be = *(undefined1 *)(param_1 + 0x4f);
  sVar10 = *(short *)(param_1 + 0x22);
  sVar13 = *(short *)(param_1 + 0x24);
  local_12c = *(byte *)(param_1 + 0x54);
  sVar14 = *(short *)(param_1 + 0x26);
  sVar16 = *(short *)(param_1 + 0x28);
  sVar17 = *(short *)(param_1 + 0x2a);
  sVar18 = *(short *)(param_1 + 0x2c);
  sVar19 = *(short *)(param_1 + 0x2e);
  sVar34 = *(short *)(param_1 + 0x30);
  sVar39 = *(short *)(param_1 + 0x32);
  sVar33 = *(short *)(param_1 + 0x34);
  sVar36 = *(short *)(param_1 + 0x36);
  sVar42 = *(short *)(param_1 + 0x38);
  sVar45 = *(short *)(param_1 + 0x3a);
  sVar38 = *(short *)(param_1 + 0x3e);
  sVar40 = *(short *)(param_1 + 0x40);
  sVar41 = *(short *)(param_1 + 0x42);
  sVar26 = *(short *)(param_1 + 0x46);
  sVar43 = *(short *)(param_1 + 0x48);
  local_c4 = *(undefined2 *)(param_1 + 0x55);
  local_c2 = *(undefined1 *)(param_1 + 0x57);
  local_108 = *(uint *)(param_1 + 0x68);
  local_120 = *(ushort *)(param_1 + 0x5c);
  uVar24 = *(ulong *)(param_1 + 0x6c);
  iVar15 = *(int *)(param_1 + 0x74);
  if (local_108 == 3) {
    if (sVar28 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar28 = -1;
      }
      else {
        sVar28 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x77130016) goto LAB_029f2fb0;
          puVar25 = (undefined8 *)puVar25[1];
          sVar28 = sVar28 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar28 = -1;
      }
    }
LAB_029f2fb0:
    if (sVar4 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar4 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x6ca05206) goto LAB_029f3010;
          sVar4 = sVar4 + 1;
          puVar25 = (undefined8 *)puVar25[1];
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar4 = -1;
    }
LAB_029f3010:
    if (sVar29 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar29 = -1;
      }
      else {
        sVar29 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x41c7d05) goto joined_r0x029f30cc;
          puVar25 = (undefined8 *)puVar25[1];
          sVar29 = sVar29 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar29 = -1;
      }
    }
joined_r0x029f30cc:
    if (sVar31 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar31 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x10cdc40c) goto LAB_029f30e0;
          puVar25 = (undefined8 *)puVar25[1];
          sVar31 = sVar31 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar31 = -1;
    }
LAB_029f30e0:
    if (sVar32 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar32 = -1;
      }
      else {
        sVar32 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x6d41fcf3) goto joined_r0x029f319c;
          puVar25 = (undefined8 *)puVar25[1];
          sVar32 = sVar32 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar32 = -1;
      }
    }
joined_r0x029f319c:
    if (sVar10 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar10 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x17df00c3) goto LAB_029f31b0;
          puVar25 = (undefined8 *)puVar25[1];
          sVar10 = sVar10 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar10 = -1;
    }
LAB_029f31b0:
    if (sVar13 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar13 = -1;
      }
      else {
        sVar13 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x7975b8e8) goto joined_r0x029f326c;
          puVar25 = (undefined8 *)puVar25[1];
          sVar13 = sVar13 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar13 = -1;
      }
    }
joined_r0x029f326c:
    if (sVar14 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar14 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x3e092032) goto LAB_029f3280;
          puVar25 = (undefined8 *)puVar25[1];
          sVar14 = sVar14 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar14 = -1;
    }
LAB_029f3280:
    if (sVar16 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar16 = -1;
      }
      else {
        sVar16 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x7fff3f46) goto joined_r0x029f333c;
          puVar25 = (undefined8 *)puVar25[1];
          sVar16 = sVar16 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar16 = -1;
      }
    }
joined_r0x029f333c:
    if (sVar17 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar17 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x7ad2e1aa) goto LAB_029f3350;
          puVar25 = (undefined8 *)puVar25[1];
          sVar17 = sVar17 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar17 = -1;
    }
LAB_029f3350:
    if (sVar18 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar18 = -1;
      }
      else {
        sVar18 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0xea9e7e3) goto joined_r0x029f340c;
          puVar25 = (undefined8 *)puVar25[1];
          sVar18 = sVar18 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar18 = -1;
      }
    }
joined_r0x029f340c:
    if (sVar19 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar19 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x74938232) goto LAB_029f3420;
          puVar25 = (undefined8 *)puVar25[1];
          sVar19 = sVar19 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar19 = -1;
    }
LAB_029f3420:
    if (sVar34 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar34 = -1;
      }
      else {
        sVar34 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x2c3fb610) goto joined_r0x029f34dc;
          puVar25 = (undefined8 *)puVar25[1];
          sVar34 = sVar34 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar34 = -1;
      }
    }
joined_r0x029f34dc:
    if (sVar39 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar39 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0xc672fa7) goto LAB_029f34f0;
          puVar25 = (undefined8 *)puVar25[1];
          sVar39 = sVar39 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar39 = -1;
    }
LAB_029f34f0:
    if (sVar33 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar33 = -1;
      }
      else {
        sVar33 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x5fbb6b26) goto joined_r0x029f35ac;
          puVar25 = (undefined8 *)puVar25[1];
          sVar33 = sVar33 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar33 = -1;
      }
    }
joined_r0x029f35ac:
    if (sVar36 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar36 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x483e4538) goto LAB_029f35c0;
          puVar25 = (undefined8 *)puVar25[1];
          sVar36 = sVar36 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar36 = -1;
    }
LAB_029f35c0:
    if (sVar42 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar42 = -1;
      }
      else {
        sVar42 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x5c2fda8c) goto joined_r0x029f367c;
          puVar25 = (undefined8 *)puVar25[1];
          sVar42 = sVar42 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar42 = -1;
      }
    }
joined_r0x029f367c:
    if (sVar45 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar45 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x756daeec) goto LAB_029f3690;
          puVar25 = (undefined8 *)puVar25[1];
          sVar45 = sVar45 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar45 = -1;
    }
LAB_029f3690:
    if (sVar5 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar5 = -1;
      }
      else {
        sVar5 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x6efba09b) goto joined_r0x029f3758;
          sVar5 = sVar5 + 1;
          puVar25 = (undefined8 *)puVar25[1];
        } while (puVar25 != &DAT_055c1b58);
        sVar5 = -1;
      }
    }
joined_r0x029f3758:
    if (sVar38 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar38 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == -0x24a26848) goto LAB_029f3770;
          puVar25 = (undefined8 *)puVar25[1];
          sVar38 = sVar38 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar38 = -1;
    }
LAB_029f3770:
    if (sVar40 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar40 = -1;
      }
      else {
        sVar40 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x80e20d8) goto joined_r0x029f382c;
          puVar25 = (undefined8 *)puVar25[1];
          sVar40 = sVar40 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar40 = -1;
      }
    }
joined_r0x029f382c:
    if (sVar41 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar41 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x51b9e069) goto LAB_029f3840;
          puVar25 = (undefined8 *)puVar25[1];
          sVar41 = sVar41 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar41 = -1;
    }
LAB_029f3840:
    if (sVar6 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar6 = -1;
      }
      else {
        sVar6 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x2922957e) goto LAB_029f38b4;
          sVar6 = sVar6 + 1;
          puVar25 = (undefined8 *)puVar25[1];
        } while (puVar25 != &DAT_055c1b58);
        sVar6 = -1;
      }
    }
LAB_029f38b4:
    if (sVar26 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar26 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x1490248c) goto LAB_029f3908;
          puVar25 = (undefined8 *)puVar25[1];
          sVar26 = sVar26 + 1;
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar26 = -1;
    }
LAB_029f3908:
    if (sVar43 == -1) {
      if (DAT_055c1b60 == &DAT_055c1b58) {
        sVar43 = -1;
      }
      else {
        sVar43 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0xb6a5301) goto LAB_029f3974;
          puVar25 = (undefined8 *)puVar25[1];
          sVar43 = sVar43 + 1;
        } while (puVar25 != &DAT_055c1b58);
        sVar43 = -1;
      }
    }
LAB_029f3974:
    if (sVar7 == -1) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar7 = 0;
        puVar25 = DAT_055c1b60;
        do {
          if (*(int *)(puVar25 + -1) == 0x7a616e2f) goto LAB_029f39d4;
          sVar7 = sVar7 + 1;
          puVar25 = (undefined8 *)puVar25[1];
        } while (puVar25 != &DAT_055c1b58);
      }
      sVar7 = -1;
    }
  }
LAB_029f39d4:
  sVar8 = *(short *)PTR_DAT_04bbdeb0;
  uVar23 = (uint)sVar8;
  if (*(uint *)(param_1 + 0x50) == (int)sVar8) {
    uVar23 = *(uint *)(param_1 + 0x50);
  }
  else if ((int)sVar8 == 0xffffffff) {
    local_128 = 0;
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar23 * 8);
    if (0xff < uVar23) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    local_128 = (byte)(*puVar2 >> 0x12) & 1;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  uVar37 = (uint)sVar8;
  if (*(uint *)(param_1 + 0x58) == (int)sVar8) {
    uVar37 = *(uint *)(param_1 + 0x58);
  }
  else if ((int)sVar8 == 0xffffffff) {
    local_12c = 0;
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar37 * 8);
    if (0xff < uVar37) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    local_12c = (byte)(*puVar2 >> 0x12) & 1;
  }
  uVar22 = local_120 >> 8;
  sVar8 = *(short *)PTR_DAT_04bc39f0;
  local_bc = local_108;
  if (local_11c != (int)sVar8) {
    if ((int)sVar8 == 0xffffffff) {
      local_11c = 0xffffffff;
    }
    else {
      local_11c = (uint)sVar8;
      puVar3 = (undefined4 *)(PTR_DAT_04bc39f8 + (ulong)local_11c * 8);
      if (0xff < local_11c) {
        puVar3 = (undefined4 *)PTR_DAT_04bc39f8;
      }
      local_120 = (ushort)((uint)*puVar3 >> 0x12) & 1;
      if ((param_4 & 1) != 0) {
        local_c8 = 3;
        lVar20 = *(long *)PTR_DAT_04bb2720;
        if (lVar20 == 0) {
          plVar35 = &DAT_055c04a0;
        }
        else {
          plVar35 = &DAT_055c04a0;
          if (*(long *)(lVar20 + 0x330) != 0) {
            puVar25 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
            iVar11 = FUN_006bd550(*puVar25,0);
            plVar35 = (long *)PTR_DAT_04bc3a88;
            if (iVar11 != 0x758f7eaf) {
              plVar35 = &DAT_055c04a0;
            }
          }
        }
        local_d5 = 0;
        (**(code **)(*plVar35 + 0x18))(plVar35);
        __src = (undefined1 *)plVar35[1];
        if (auStack_f4 != __src) {
          (**(code **)(*plVar35 + 0x18))(plVar35);
          lVar20 = 0;
          do {
            if (*(char *)(plVar35[1] + lVar20) == '\0') goto LAB_029f412c;
            lVar21 = plVar35[1] + lVar20;
            if (*(char *)(lVar21 + 1) == '\0') {
              lVar20 = lVar20 + 1;
              goto LAB_029f412c;
            }
            if (*(char *)(lVar21 + 2) == '\0') {
              lVar20 = lVar20 + 2;
              goto LAB_029f412c;
            }
            lVar20 = lVar20 + 3;
          } while (lVar20 != 0x80001);
          lVar20 = 0;
LAB_029f412c:
          iVar11 = (int)lVar20;
          if (0x1f < (int)lVar20) {
            iVar11 = 0x1f;
          }
          memcpy(auStack_f4,__src,(long)iVar11);
          auStack_f4[iVar11] = 0;
        }
        puVar9 = PTR_DAT_04bb5008;
        local_90 = &local_c8;
        pbStack_b0 = local_98;
        local_b8 = &PTR_FUN_04aa4cb8;
        local_d0 = (undefined4)plVar35[7];
        local_a8 = &local_90;
        puStack_a0 = &local_94;
        local_98[0] = 0;
        puVar1 = PTR_DAT_04bc4990 + 0x10;
        iVar11 = 0;
        local_94 = local_d0;
        do {
          local_78 = 0;
          local_88 = puVar1;
          local_80 = iVar11;
          local_6c = iVar11;
          if ((iVar11 != 0) &&
             (local_78 = FUN_02a96aac(*(long *)puVar9 + 0x20,iVar11), local_78 != 0)) {
            (*(code *)*local_b8)(&local_b8,&local_88);
          }
          iVar44 = 0x27;
          if (iVar11 < 0x27) {
            iVar44 = iVar11 + 1;
          }
          iVar11 = iVar44;
        } while (iVar44 != 0x27);
        uVar22 = (ushort)local_98[0];
        local_130 = local_c8;
      }
    }
  }
  lVar20 = *(long *)PTR_DAT_04bb2720;
  uVar12 = uVar24 >> 0x20;
  uStack_194 = (uint)(uVar24 >> 0x20);
  if ((param_3 & 1) == 0) {
    iVar11 = 0x191;
    bVar27 = 1;
    do {
      if ((bVar27 & 1) == 0) break;
      switch(local_108) {
      case 0:
        local_108 = 1;
        bVar27 = param_3 ^ 1;
        break;
      case 1:
      case 2:
        bVar27 = 0;
        break;
      case 3:
        local_108 = 4;
      default:
switchD_029f3cfc_default:
        bVar27 = 1;
        break;
      case 4:
        bVar27 = 0;
        if ((*(char *)(lVar20 + 0x344) != '\0') && (-1 < *(int *)(lVar20 + 0x33c))) {
          local_108 = 0;
          goto switchD_029f3cfc_default;
        }
        break;
      case 0xffffffff:
        bVar27 = 1;
        local_108 = 1;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  else {
    bVar27 = 1;
    lVar21 = *(long *)PTR_DAT_04bb2808;
    iVar11 = 0x191;
    do {
      if ((bVar27 & 1) == 0) break;
      switch(local_108) {
      case 0:
        bVar27 = param_3 ^ 1;
        break;
      case 1:
        if (lVar21 == 0) goto LAB_029f3bb4;
        bVar27 = 0;
        if (*(long *)(lVar21 + 8) != 0) {
          if (*(uint *)(*(long *)(lVar21 + 8) + 0x1b0) < 2) goto LAB_029f3bb4;
          local_108 = 2;
          bVar27 = 1;
        }
        break;
      case 2:
        if (((lVar21 != 0) && (*(long *)(lVar21 + 8) != 0)) &&
           (1 < *(uint *)(*(long *)(lVar21 + 8) + 0x1b0))) goto LAB_029f3bb4;
LAB_029f3c60:
        local_108 = 4;
        bVar27 = 1;
        break;
      case 3:
        if (lVar21 != 0) {
          bVar27 = 0;
          if (*(long *)(lVar21 + 8) == 0) break;
          if (1 < *(uint *)(*(long *)(lVar21 + 8) + 0x1b0)) goto LAB_029f3c60;
        }
LAB_029f3bb4:
        bVar27 = 0;
        break;
      case 4:
        if (((lVar21 == 0) || (*(long *)(lVar21 + 8) == 0)) ||
           (*(uint *)(*(long *)(lVar21 + 8) + 0x1b0) < 2)) {
          uVar30 = 3;
LAB_029f3c88:
          local_108 = uVar30;
          bVar27 = 1;
        }
        else {
          bVar27 = 0;
          if (*(char *)(lVar20 + 0x344) != '\0') {
            uVar30 = 0;
            bVar27 = 0;
            if (-1 < *(int *)(lVar20 + 0x33c)) goto LAB_029f3c88;
          }
        }
        break;
      case 0xffffffff:
        bVar27 = 1;
        local_108 = 1;
        break;
      default:
        bVar27 = 1;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (local_bc == 0) {
    if (local_108 != 0) {
      uStack_194 = uVar37;
    }
    uVar12 = (ulong)uStack_194;
  }
  if (((uVar37 == (int)sVar38) || (uVar37 == (int)sVar40)) ||
     ((uVar37 == (int)sVar41 ||
      ((((uVar37 == (int)sVar6 || (uVar37 == (int)sVar26)) || (uVar37 == (int)sVar43)) ||
       (uVar37 == (int)sVar7)))))) {
    if ((local_108 < 4) && (local_108 != 1)) {
      if (0x7ffffffc < iVar15) {
        iVar15 = 0x7ffffffd;
      }
      iVar15 = iVar15 + 1;
    }
  }
  else if ((((local_108 == 2) || (local_108 == 3)) &&
           ((0 < iVar15 && (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d)))) &&
          ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c ||
           (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 0)))) {
    iVar15 = 0;
  }
  iVar11 = (int)uVar24;
  if (0x7ffffffc < (int)uVar24) {
    iVar11 = 0x7ffffffd;
  }
  uVar30 = 0;
  if (local_bc == local_108) {
    uVar30 = iVar11 + 1;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x98));
  *(uint *)(param_1 + 0x58) = uVar37;
  *(short *)(param_1 + 0x3e) = sVar38;
  *(short *)(param_1 + 0x40) = sVar40;
  *(short *)(param_1 + 0x42) = sVar41;
  *(short *)(param_1 + 0x48) = sVar43;
  *(uint *)(param_1 + 0x68) = local_108;
  *(int *)(param_1 + 0x74) = iVar15;
  *(ushort *)(param_1 + 0x5c) = local_120 & 0xff | uVar22 << 8;
  *(short *)(param_1 + 0x18) = sVar4;
  *(short *)(param_1 + 0x1a) = sVar28;
  *(short *)(param_1 + 0x1c) = sVar29;
  *(short *)(param_1 + 0x1e) = sVar31;
  *(short *)(param_1 + 0x20) = sVar32;
  *(short *)(param_1 + 0x22) = sVar10;
  *(short *)(param_1 + 0x24) = sVar13;
  *(short *)(param_1 + 0x26) = sVar14;
  *(short *)(param_1 + 0x28) = sVar16;
  *(short *)(param_1 + 0x2a) = sVar17;
  *(short *)(param_1 + 0x2c) = sVar18;
  *(short *)(param_1 + 0x2e) = sVar19;
  *(short *)(param_1 + 0x30) = sVar34;
  *(short *)(param_1 + 0x32) = sVar39;
  *(short *)(param_1 + 0x34) = sVar33;
  *(short *)(param_1 + 0x36) = sVar36;
  *(short *)(param_1 + 0x38) = sVar42;
  *(short *)(param_1 + 0x3a) = sVar45;
  *(short *)(param_1 + 0x3c) = sVar5;
  *(short *)(param_1 + 0x44) = sVar6;
  *(short *)(param_1 + 0x46) = sVar26;
  *(short *)(param_1 + 0x4a) = sVar7;
  *(byte *)(param_1 + 0x4c) = local_128;
  *(undefined1 *)(param_1 + 0x4f) = local_be;
  *(undefined2 *)(param_1 + 0x4d) = local_c0;
  *(uint *)(param_1 + 0x50) = uVar23;
  *(byte *)(param_1 + 0x54) = local_12c;
  *(undefined1 *)(param_1 + 0x57) = local_c2;
  *(undefined2 *)(param_1 + 0x55) = local_c4;
  *(undefined4 *)(param_1 + 0x60) = local_130;
  *(uint *)(param_1 + 100) = local_11c;
  *(ulong *)(param_1 + 0x6c) = (ulong)uVar30 | uVar12 << 0x20;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x98));
  return;
}

