
/* WARNING: Removing unreachable block (ram,0x02a184cc) */
/* WARNING: Removing unreachable block (ram,0x02a139a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a10b00(long param_1,char *param_2)

{
  MutexType *pMVar1;
  undefined8 ****ppppuVar2;
  undefined ****ppppuVar3;
  int *piVar4;
  ushort uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  uint uVar30;
  undefined1 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  byte bVar44;
  int iVar45;
  int iVar51;
  int iVar46;
  int iVar47;
  undefined4 uVar48;
  int iVar49;
  int iVar50;
  undefined8 *puVar52;
  ulong uVar53;
  undefined8 uVar54;
  char cVar55;
  ushort uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  int *piVar61;
  long *plVar62;
  undefined1 uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  long lVar67;
  long *plVar68;
  byte *pbVar69;
  undefined *puVar70;
  char cVar71;
  ulong uVar72;
  long lVar73;
  char *pcVar74;
  long lVar75;
  char *pcVar76;
  undefined8 uVar77;
  undefined4 *puVar78;
  long *plVar79;
  undefined8 uVar80;
  byte bVar81;
  short *psVar82;
  long *plVar83;
  void *__dest;
  byte bVar84;
  void *__src;
  char cVar85;
  uint uVar86;
  long lVar87;
  long lVar88;
  undefined *puVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [12];
  int *local_260;
  long local_250;
  undefined1 local_200;
  undefined1 uStack_1ff;
  undefined2 uStack_1fe;
  undefined2 uStack_1fc;
  undefined2 uStack_1fa;
  undefined2 local_1f8;
  undefined2 uStack_1f6;
  undefined2 uStack_1f4;
  undefined2 uStack_1f2;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined1 local_1dc;
  undefined1 local_1ad;
  undefined ****local_168;
  char *local_160;
  undefined *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined ****local_e8;
  char *local_e0;
  undefined ****local_d8;
  char *local_d0;
  undefined8 ****local_c8;
  char *local_c0;
  ushort local_b8;
  undefined4 local_b6;
  byte local_b2;
  undefined8 ****local_b0;
  char *local_a8;
  long local_a0;
  
  pcVar76 = (char *)(param_1 + 0x1bc34);
  if (((**(byte **)(param_1 + 0x1a000) >> 3 & 1) != 0) &&
     ((*(long *)(param_1 + 0x1a018) == 0 ||
      (FUN_03f45838(param_1 + 0x1a008), *(long *)(param_1 + 0x1a000) != 0)))) {
    puVar89 = PTR_DAT_04bb28b0;
    *(undefined8 *)(param_1 + 0x1a000) = 0;
    FUN_03831710(*(long *)puVar89 + 0xe8);
  }
  *(undefined1 *)(param_1 + 0x1a058) = *(undefined1 *)(*(long *)PTR_DAT_04bb4508 + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x84) == '\0') {
    if ((*(char *)(*(long *)(param_2 + 8) + 0x85) != '\0') && (*(char *)(param_1 + 0x1bc58) != '\0')
       ) {
      *(undefined1 *)(param_1 + 0x1bc58) = 0;
      *(undefined8 *)(param_1 + 0x1bc60) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bc68) = 0xffffffffffffffff;
    }
  }
  else if (*(char *)(param_1 + 0x1bc58) == '\0') {
    *(undefined1 *)(param_1 + 0x1bc58) = 1;
  }
  lVar67 = *(long *)(param_2 + 8);
  if (*(char *)(lVar67 + 0x86) != '\0') {
    *(undefined4 *)(param_1 + 0x1bc5c) = *(undefined4 *)(lVar67 + 0x8c);
    lVar67 = *(long *)(param_2 + 8);
  }
  if (*(char *)(lVar67 + 0x84) != '\0') {
    *(undefined4 *)(param_1 + 0x1bc60) = *(undefined4 *)(lVar67 + 0x88);
    lVar67 = *(long *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x1bc64) = *(undefined4 *)(lVar67 + 0x90);
    *(undefined4 *)(param_1 + 0x1bc68) = *(undefined4 *)(lVar67 + 0x94);
    *(undefined4 *)(param_1 + 0x1bc6c) = *(undefined4 *)(lVar67 + 0x98);
    lVar67 = *(long *)(param_2 + 8);
  }
  *(undefined2 *)(lVar67 + 0x84) = 0;
  *(undefined1 *)(lVar67 + 0x86) = 0;
  *(undefined4 *)(lVar67 + 0x98) = 0xffffffff;
  *(undefined8 *)(lVar67 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(lVar67 + 0x90) = 0xffffffffffffffff;
  if (param_2[2] != '\0') {
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 0x1bc37);
    *(undefined4 *)(param_1 + 0x1bc30) = *(undefined4 *)(param_1 + 0x1bc3c);
    uVar59 = *(uint *)(param_1 + 0x38c);
    *(undefined4 *)(param_1 + 0x1bc2c) = *(undefined4 *)(param_1 + 0x1bc38);
    *pcVar76 = *(char *)(param_1 + 0x1bc40);
    *(undefined2 *)(param_1 + 0x1bc35) = *(undefined2 *)(param_1 + 0x1bc41);
    lVar67 = *(long *)(param_1 + 0x3c0);
    if (lVar67 == 0) {
      uVar53 = 0xffffffff;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x3cc);
      if (uVar9 != 0) {
        uVar60 = 0;
        if (uVar9 != 0) {
          uVar60 = 0x37033f90 / uVar9;
        }
        uVar60 = 0x37033f90 - uVar60 * uVar9;
        uVar10 = uVar60;
        do {
          iVar51 = *(int *)(lVar67 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar10 << 3));
          if (iVar51 == 0) break;
          if (iVar51 == 0x37033f90) {
            uVar53 = (ulong)*(uint *)(lVar67 + (long)(int)uVar10 * 8 + 4);
            goto joined_r0x02a10ccc;
          }
          uVar86 = 0;
          if ((int)(uVar10 + 1) < (int)uVar9) {
            uVar86 = uVar10 + 1;
          }
          uVar10 = uVar86;
        } while (uVar86 != uVar60);
      }
      uVar53 = 0xffffffff;
    }
joined_r0x02a10ccc:
    if (0 < (int)uVar59) {
      uVar72 = 0;
      piVar61 = (int *)(param_1 + 0x88);
      do {
        if (uVar53 != uVar72) {
          piVar4 = piVar61;
          if (0x7f < uVar72) {
            piVar4 = (int *)(param_1 + 0x88);
          }
          if ((-1 < (int)uVar72) && ((int)uVar72 < *(int *)(param_1 + 0x38c))) {
            if (*(int *)(*(long *)(param_1 + 0x3a8) + uVar72 * 4) != *piVar4) {
              *(int *)(*(long *)(param_1 + 0x3a8) + uVar72 * 4) = *piVar4;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + uVar72) = 1;
            }
          }
        }
        uVar72 = uVar72 + 1;
        piVar61 = piVar61 + 1;
      } while (uVar59 != uVar72);
    }
  }
  puVar70 = PTR_DAT_04bb2720;
  puVar89 = PTR_DAT_04bb2640;
  cVar55 = param_2[1];
  lVar67 = *(long *)PTR_DAT_04bb2720;
  if ((lVar67 == 0) || (*(long *)(lVar67 + 0x330) == 0)) {
    iVar45 = DAT_055c04d8;
    iVar51 = DAT_055c04d8;
  }
  else {
    puVar52 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar67 + 0x338));
    iVar45 = FUN_006bd550(*puVar52,0);
    lVar67 = *(long *)puVar70;
    iVar51 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if (iVar45 != 0x758f7eaf) {
      iVar51 = DAT_055c04d8;
    }
    iVar45 = DAT_055c04d8;
    if ((lVar67 != 0) && (*(long *)(lVar67 + 0x330) != 0)) {
      puVar52 = (undefined8 *)
                (**(code **)(**(long **)puVar89 + 0x18))
                          (*(long **)puVar89,*(undefined4 *)(lVar67 + 0x338));
      iVar45 = FUN_006bd550(*puVar52,0);
      piVar61 = (int *)(PTR_DAT_04bc3a88 + 0x38);
      if (iVar45 != 0x758f7eaf) {
        piVar61 = &DAT_055c04d8;
      }
      iVar45 = *piVar61;
    }
  }
  plVar83 = (long *)PTR_DAT_04bb26a8;
  bVar36 = cVar55 != '\0';
  bVar37 = *(char *)(param_1 + 8) == '\0';
  bVar43 = bVar37 && bVar36;
  *(bool *)(param_1 + 0x1a0c8) = iVar51 == -0x34cc18dd;
  lVar67 = *plVar83;
  nn::os::LockMutex((MutexType *)(lVar67 + 0x89660));
  uVar57 = (uint)*(short *)(lVar67 + 0x895e0);
  uVar60 = *(uint *)(lVar67 + 0x89618);
  uVar58 = (uint)*(short *)(lVar67 + 0x895e6);
  uVar64 = (uint)*(short *)(lVar67 + 0x895e4);
  uVar10 = *(uint *)(lVar67 + 0x89620);
  uVar13 = *(ushort *)(lVar67 + 0x895e8);
  uVar59 = *(uint *)(lVar67 + 0x8962c);
  uVar9 = *(uint *)(lVar67 + 0x89630);
  iVar50 = *(int *)(lVar67 + 0x89634);
  uVar65 = (uint)(short)uVar13;
  uVar86 = *(uint *)(lVar67 + 0x89638);
  nn::os::UnlockMutex((MutexType *)(lVar67 + 0x89660));
  bVar38 = *(int *)(param_1 + 0x1bcb4) != 2;
  iVar49 = *(int *)(param_1 + 0x1bcb4);
  bVar40 = uVar9 == 2;
  if (*(char *)(param_1 + 0x1bcb0) == '\0') {
    if (*(char *)(param_1 + 0x1bcb1) != '\0') goto LAB_02a10f30;
  }
  else {
    *(undefined2 *)(param_1 + 0x1bcb0) = 0x100;
LAB_02a10f30:
    switch(uVar9) {
    case 0:
    case 1:
    case 3:
      puVar89 = PTR_DAT_04bb2020 + 0x10;
      local_200 = SUB81(puVar89,0);
      uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
      local_1f8 = 0xad4d;
      uStack_1f6 = 0x40e;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,0);
      break;
    case 2:
      puVar89 = PTR_DAT_04bb2020 + 0x10;
      local_200 = SUB81(puVar89,0);
      uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
      local_1f8 = 0xad4d;
      uStack_1f6 = 0x40e;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,1);
      *(undefined1 *)(param_1 + 0x1bcb1) = 0;
    }
  }
  if ((uVar9 == 2) && (iVar50 == 3)) {
    lVar67 = *(long *)(param_2 + 8);
    local_200 = 0;
    uStack_1ff = 0;
    uStack_1fe = 0;
    plVar62 = (long *)(lVar67 + 0xc110);
    nn::os::LockMutex((MutexType *)(lVar67 + 0xc198));
    if (*(int *)(lVar67 + 0xc120) < *(int *)(lVar67 + 0xc138)) {
      puVar52 = *(undefined8 **)(lVar67 + 0xc128);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar67 + 0xc128) = *puVar52;
      }
      *(undefined8 *)((long)puVar52 + 0x14) = 0;
      *(undefined8 *)((long)puVar52 + 0x1c) = 0;
      *(undefined2 *)puVar52 = 1;
      *(undefined4 *)((long)puVar52 + 0x24) = 0;
      *(undefined1 **)((long)puVar52 + 4) = &DAT_3f8000003f800000;
      *(undefined4 *)((long)puVar52 + 0xc) = 0;
      *(uint *)(puVar52 + 2) = CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200));
      lVar73 = *plVar62;
      *plVar62 = (long)(puVar52 + 3);
      puVar52[3] = lVar73;
      puVar52[4] = plVar62;
      if (lVar73 != 0) {
        *(undefined8 **)(lVar73 + 8) = puVar52 + 3;
      }
      *(int *)(lVar67 + 0xc120) = *(int *)(lVar67 + 0xc120) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar67 + 0xc198));
  }
  local_200 = 0;
  uStack_1fc = 0;
  uStack_1fa = 0;
  local_1f8 = 0;
  uStack_1f6 = 0x3f80;
  uStack_1f4 = 0;
  uStack_1f2 = 0x3f80;
  local_1f0._0_4_ = 0x40000000;
  local_1f0._4_4_ = 0;
  if (*param_2 == '\0') {
    lVar67 = *(long *)(param_2 + 8);
    lVar73 = *(long *)(lVar67 + 0xc118);
    if (lVar73 != lVar67 + 0xc110) {
      lVar75 = lVar73 + -0x18;
      do {
        uVar53 = *(ulong *)(lVar73 + -0x18);
        fVar91 = *(float *)(lVar75 + 8);
        fVar92 = *(float *)(lVar75 + 0x14);
        uVar54 = *(undefined8 *)(lVar75 + 0xc);
        if ((uVar53 & 0xff00) != 0) {
          if (*(float *)(param_1 + 0x1bc70) <= 0.0) {
            fVar90 = -90.4;
          }
          else {
            fVar90 = log10f(*(float *)(param_1 + 0x1bc70));
            fVar90 = fVar90 * 20.0;
          }
          fVar90 = fVar91 + fVar90;
          fVar91 = 0.0;
          if (-90.309 <= fVar90) {
            fVar91 = powf(10.0,fVar90 * 0.05);
          }
        }
        *(ulong *)(param_1 + 0x1bc98) = uVar53 & 0xffffffffffff00ff;
        *(float *)(param_1 + 0x1bca0) = fVar91;
        *(int *)(param_1 + 0x1bca4) = (int)uVar54;
        *(int *)(param_1 + 0x1bca8) = (int)((ulong)uVar54 >> 0x20);
        if (0.0 <= fVar92) {
          *(int *)(param_1 + 0x1bcac) = (int)(fVar92 * 30.0);
        }
        lVar73 = *(long *)(lVar73 + 8);
        lVar75 = lVar73 + -0x18;
      } while (lVar75 != lVar67 + 0xc0f8);
    }
    iVar46 = *(int *)(param_1 + 0x1bcac);
    if (iVar46 == 0) {
      uVar54 = *(undefined8 *)(param_1 + 0x1bc98);
      local_200 = 1;
      uVar77 = *(undefined8 *)(param_1 + 0x1bca0);
      local_1f0._4_4_ = *(undefined4 *)(param_1 + 0x1bca8);
      *(undefined4 *)(param_1 + 0x1bc98) = 0;
      uStack_1fc = (undefined2)uVar54;
      uStack_1fa = (undefined2)((ulong)uVar54 >> 0x10);
      local_1f8 = (undefined2)((ulong)uVar54 >> 0x20);
      uStack_1f6 = (undefined2)((ulong)uVar54 >> 0x30);
      uStack_1f4 = (undefined2)uVar77;
      uStack_1f2 = (undefined2)((ulong)uVar77 >> 0x10);
      local_1f0._0_4_ = (undefined4)((ulong)uVar77 >> 0x20);
      *(undefined1 **)(param_1 + 0x1bc9c) = &DAT_3f8000003f800000;
      *(undefined8 *)(param_1 + 0x1bca4) = 0x40000000;
LAB_02a112dc:
      plVar83 = (long *)PTR_DAT_04bb26a8;
      *(int *)(param_1 + 0x1bcac) = iVar46 + -1;
    }
    else {
      plVar83 = (long *)PTR_DAT_04bb26a8;
      if (-1 < iVar46) goto LAB_02a112dc;
    }
    lVar67 = *(long *)(param_2 + 8);
    plVar62 = *(long **)(lVar67 + 0xc118);
    while (plVar62 != (long *)(lVar67 + 0xc110)) {
      plVar68 = (long *)plVar62[1];
      plVar79 = plVar68;
      if (*plVar62 != 0) {
        *(long **)(*plVar62 + 8) = plVar68;
        plVar79 = (long *)plVar62[1];
      }
      if (plVar79 != (long *)0x0) {
        *plVar79 = *plVar62;
      }
      *plVar62 = 0;
      plVar62[1] = 0;
      *(int *)(lVar67 + 0xc120) = *(int *)(lVar67 + 0xc120) + -1;
      plVar62[-3] = *(long *)(lVar67 + 0xc128);
      *(long **)(lVar67 + 0xc128) = plVar62 + -3;
      plVar62 = plVar68;
    }
  }
  FUN_029eb6a4(param_1 + 0x1bc70,&local_200);
  lVar67 = *(long *)(param_1 + 0x3c0);
  if ((lVar67 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
    uVar30 = 0;
    if (uVar66 != 0) {
      uVar30 = 0xdd946d6f / uVar66;
    }
    uVar30 = 0xdd946d6f - uVar30 * uVar66;
    uVar12 = uVar30;
    do {
      iVar46 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3
                                 ));
      if (iVar46 == -0x226b9291) {
        lVar73 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != *(int *)(param_1 + 0x1bc70)) {
          *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = *(int *)(param_1 + 0x1bc70);
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          lVar67 = *(long *)(param_1 + 0x3c0);
        }
        break;
      }
      if (iVar46 == 0) break;
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)uVar66) {
        uVar8 = uVar12 + 1;
      }
      uVar12 = uVar8;
    } while (uVar8 != uVar30);
  }
  if ((lVar67 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
    uVar30 = 0;
    if (uVar66 != 0) {
      uVar30 = 0x21956dd2 / uVar66;
    }
    uVar30 = 0x21956dd2 - uVar30 * uVar66;
    uVar12 = uVar30;
    while (iVar46 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar12 << 3)), iVar46 != 0) {
      if (iVar46 == 0x21956dd2) {
        lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
        uVar66 = (uint)(*(float *)(param_1 + 0x1bc78) != *(float *)(param_1 + 0x1bc7c) ||
                       -1 < *(int *)(param_1 + 0x1bcac));
        if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != uVar66) {
          *(uint *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = uVar66;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
        }
        break;
      }
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)uVar66) {
        uVar8 = uVar12 + 1;
      }
      uVar12 = uVar8;
      if (uVar8 == uVar30) break;
    }
  }
  puVar89 = PTR_DAT_04bb5008;
  if (bVar37 && bVar36) {
    if (iVar51 == 0x11889761) {
      uVar53 = 100;
      *(undefined1 *)(param_1 + 0x1a06d) = 1;
      *(undefined4 *)(param_1 + 0x1a070) = 100;
      *(undefined1 *)(param_1 + 0x1a080) = 1;
      *(undefined4 *)(param_1 + 0x1a084) = 100;
      iVar51 = 0x11889761;
    }
    else {
      local_168 = (undefined ****)CONCAT44(local_168._4_4_,3);
      local_c8 = &local_168;
      local_1f0 = (undefined *****)&local_c8;
      local_e8 = (undefined ****)CONCAT44(local_e8._4_4_,iVar51);
      uVar63 = *(undefined1 *)(param_1 + 0x1a06d);
      uVar66 = *(uint *)(param_1 + 0x1a070);
      local_b8 = local_b8 & 0xff00;
      local_200 = 0xb8;
      uStack_1ff = 0x4c;
      uStack_1fe = 0x4aa;
      uStack_1fc = 0;
      uStack_1fa = 0;
      local_1f8 = SUB82(&local_b8,0);
      uStack_1f6 = (undefined2)((ulong)&local_b8 >> 0x10);
      uStack_1f4 = (undefined2)((ulong)&local_b8 >> 0x20);
      uStack_1f2 = (undefined2)((ulong)&local_b8 >> 0x30);
      uStack_1e8 = &local_e8;
      ppppuVar2 = (undefined8 ****)(PTR_DAT_04bc4990 + 0x10);
      iVar46 = 0;
      do {
        local_d8 = (undefined ****)CONCAT44(local_d8._4_4_,iVar46);
        local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar46);
        local_a0 = 0;
        local_b0 = ppppuVar2;
        if (iVar46 != 0) {
          local_a0 = FUN_02a96aac(*(long *)puVar89 + 0x20,iVar46);
          if (local_a0 != 0) {
            (**(code **)CONCAT26(uStack_1fa,
                                 CONCAT24(uStack_1fc,
                                          CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)))))
                      (&local_200,&local_b0);
          }
        }
        plVar83 = (long *)PTR_DAT_04bb26a8;
        iVar47 = 0x27;
        if (iVar46 < 0x27) {
          iVar47 = iVar46 + 1;
        }
        iVar46 = iVar47;
      } while (iVar47 != 0x27);
      if ((char)local_b8 == '\0') {
        uVar53 = 0xffffffff;
      }
      else {
        uVar53 = (ulong)local_168 & 0xffffffff;
      }
      iVar46 = (int)uVar53;
      *(bool *)(param_1 + 0x1a06d) = iVar46 != -1;
      *(bool *)(param_1 + 0x1a080) = iVar46 != -1;
      *(int *)(param_1 + 0x1a070) = iVar46;
      *(int *)(param_1 + 0x1a084) = iVar46;
      if (iVar51 < 0x41c7d05) {
        if ((iVar51 != -0x6d41fcf3) && (iVar51 != -0x6ca05206)) goto LAB_02a11584;
LAB_02a11578:
        *(undefined1 *)(param_1 + 0x1a06d) = uVar63;
        uVar53 = (ulong)uVar66;
        *(uint *)(param_1 + 0x1a070) = uVar66;
      }
      else {
        if (iVar51 == 0x41c7d05) goto LAB_02a11578;
        if (iVar51 == 0x43080996) {
          *(undefined1 *)(param_1 + 0x1bc43) = 0;
          (**(code **)(DAT_055f4f08 + 0x18))(&DAT_055f4f08);
          uVar48 = FUN_006bd550(DAT_055f4f10,0);
          lVar67 = *plVar83;
          plVar62 = (long *)(lVar67 + 0xb3b78);
          nn::os::LockMutex((MutexType *)(lVar67 + 0xb3b58));
          if (*(int *)(lVar67 + 0xb3b88) < *(int *)(lVar67 + 0xb3ba0)) {
            puVar52 = *(undefined8 **)(lVar67 + 0xb3b90);
            if (puVar52 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar67 + 0xb3b90) = *puVar52;
            }
            *(undefined2 *)puVar52 = 0;
            plVar68 = puVar52 + 2;
            *plVar68 = 0;
            *(undefined1 *)((long)puVar52 + 2) = 0;
            *(undefined4 *)((long)puVar52 + 4) = uVar48;
            *(undefined4 *)(puVar52 + 1) = 0x3f800000;
            puVar52[3] = 0;
            lVar73 = *plVar62;
            *plVar62 = (long)plVar68;
            puVar52[3] = plVar62;
            *plVar68 = lVar73;
            if (lVar73 != 0) {
              *(long **)(lVar73 + 8) = plVar68;
            }
            *(int *)(lVar67 + 0xb3b88) = *(int *)(lVar67 + 0xb3b88) + 1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar67 + 0xb3b58));
          (**(code **)(DAT_055f4f18 + 0x18))(&DAT_055f4f18);
          uVar48 = FUN_006bd550(DAT_055f4f20,0);
          lVar67 = *plVar83;
          plVar62 = (long *)(lVar67 + 0xb3b78);
          nn::os::LockMutex((MutexType *)(lVar67 + 0xb3b58));
          if (*(int *)(lVar67 + 0xb3b88) < *(int *)(lVar67 + 0xb3ba0)) {
            puVar52 = *(undefined8 **)(lVar67 + 0xb3b90);
            if (puVar52 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar67 + 0xb3b90) = *puVar52;
            }
            *(undefined2 *)puVar52 = 0;
            plVar68 = puVar52 + 2;
            *plVar68 = 0;
            *(undefined1 *)((long)puVar52 + 2) = 0;
            *(undefined4 *)((long)puVar52 + 4) = uVar48;
            *(undefined4 *)(puVar52 + 1) = 0x3f800000;
            puVar52[3] = 0;
            lVar73 = *plVar62;
            *plVar62 = (long)plVar68;
            puVar52[3] = plVar62;
            *plVar68 = lVar73;
            if (lVar73 != 0) {
              *(long **)(lVar73 + 8) = plVar68;
            }
            *(int *)(lVar67 + 0xb3b88) = *(int *)(lVar67 + 0xb3b88) + 1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar67 + 0xb3b58));
          uVar53 = (ulong)*(uint *)(param_1 + 0x1a070);
        }
        else if (iVar51 == 0x10cdc40c) goto LAB_02a11578;
      }
LAB_02a11584:
      if ((int)uVar53 == 3) goto LAB_02a11598;
    }
LAB_02a115d0:
    local_260 = (int *)(param_1 + 0x1a070);
    if (*(char *)(param_1 + 0x1a06d) == '\0') {
      lVar67 = *(long *)(param_1 + 0x3c0);
      if (lVar67 != 0) {
        uVar66 = *(uint *)(param_1 + 0x3cc);
        if (uVar66 == 0) {
          iVar46 = -1;
        }
        else {
          uVar30 = 0;
          if (uVar66 != 0) {
            uVar30 = 0xce7dd434 / uVar66;
          }
          uVar30 = 0xce7dd434 - uVar30 * uVar66;
          iVar46 = -1;
          uVar12 = uVar30;
          do {
            iVar47 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar12 << 3));
            if (iVar47 == -0x31822bcc) {
              lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
              iVar46 = -1;
              if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != -1) {
                *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = 0xffffffff;
                *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
              }
              break;
            }
            if (iVar47 == 0) break;
            uVar8 = 0;
            if ((int)(uVar12 + 1) < (int)uVar66) {
              uVar8 = uVar12 + 1;
            }
            uVar12 = uVar8;
          } while (uVar8 != uVar30);
        }
        goto LAB_02a11758;
      }
    }
    else {
      iVar46 = -1;
      if (iVar51 < -0x3d400121) {
        if (iVar51 != -0x6d41fcf3) {
          if (iVar51 == -0x6ca05206) {
            iVar46 = *(int *)(param_1 + 0x1a074);
          }
          else if (iVar51 != -0x62dfe0a2) goto LAB_02a116a0;
        }
      }
      else if (((iVar51 != -0x3d400121) && (iVar51 != 0x41c7d05)) && (iVar51 != 0x10cdc40c)) {
LAB_02a116a0:
        iVar46 = FUN_02a18e80(uVar53,iVar51);
      }
      lVar67 = *(long *)(param_1 + 0x3c0);
      *(int *)(param_1 + 0x1a074) = iVar46;
      if ((lVar67 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
        uVar30 = 0;
        if (uVar66 != 0) {
          uVar30 = 0xce7dd434 / uVar66;
        }
        uVar30 = 0xce7dd434 - uVar30 * uVar66;
        uVar12 = uVar30;
        do {
          iVar47 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar12 << 3));
          if (iVar47 == -0x31822bcc) {
            lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != iVar46) {
              *(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = iVar46;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
            }
            break;
          }
          if (iVar47 == 0) break;
          uVar8 = 0;
          if ((int)(uVar12 + 1) < (int)uVar66) {
            uVar8 = uVar12 + 1;
          }
          uVar12 = uVar8;
        } while (uVar8 != uVar30);
      }
      iVar46 = *local_260;
LAB_02a11758:
      lVar67 = *(long *)(param_1 + 0x3c0);
      if ((lVar67 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
        uVar30 = 0;
        if (uVar66 != 0) {
          uVar30 = 0x2a24ac7f / uVar66;
        }
        uVar30 = 0x2a24ac7f - uVar30 * uVar66;
        uVar12 = uVar30;
        while (iVar47 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar12 << 3)), iVar47 != 0) {
          if (iVar47 == 0x2a24ac7f) {
            lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != iVar46) {
              *(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = iVar46;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
            }
            break;
          }
          uVar8 = 0;
          if ((int)(uVar12 + 1) < (int)uVar66) {
            uVar8 = uVar12 + 1;
          }
          uVar12 = uVar8;
          if (uVar8 == uVar30) break;
        }
      }
    }
    if (*(char *)(param_1 + 0x1a080) == '\0') {
      iVar46 = -1;
      lVar67 = *(long *)(param_1 + 0x3c0);
    }
    else {
      iVar46 = FUN_02a18e80(*(undefined4 *)(param_1 + 0x1a084),iVar51);
      lVar67 = *(long *)(param_1 + 0x3c0);
    }
    if ((lVar67 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0xe6bf6f1a / uVar66;
      }
      uVar30 = 0xe6bf6f1a - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar47 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar47 == -0x194090e6) {
          lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != iVar46) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = iVar46;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
          }
          break;
        }
        if (iVar47 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
    }
  }
  else if (*(int *)(param_1 + 0x1a070) == 3) {
LAB_02a11598:
    bVar39 = false;
    if (*(long *)PTR_DAT_04bb2808 != 0) {
      lVar67 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8);
      bVar39 = false;
      if (lVar67 != 0) {
        bVar39 = *(int *)(lVar67 + 0x1b0) == 3;
      }
    }
    cVar85 = *(char *)(param_1 + 9);
    *(bool *)(param_1 + 9) = bVar39;
    if ((bVar39 == false) && (cVar85 != '\0')) {
      uVar53 = 3;
      goto LAB_02a115d0;
    }
  }
  local_260 = (int *)(param_1 + 0x1a070);
  if ((((iVar51 == -0x6d41fcf3) || (iVar51 == 0x10cdc40c)) || (iVar51 == 0x41c7d05)) &&
     ((lVar67 = *(long *)(param_1 + 0x3c0), lVar67 != 0 &&
      (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)))) {
    uVar30 = 0;
    if (uVar66 != 0) {
      uVar30 = 0xce7dd434 / uVar66;
    }
    uVar30 = 0xce7dd434 - uVar30 * uVar66;
    uVar12 = uVar30;
    do {
      iVar46 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3
                                 ));
      if (iVar46 == -0x31822bcc) {
        lVar73 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != -1) {
          *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0xffffffff;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          lVar67 = *(long *)(param_1 + 0x3c0);
          if (lVar67 == 0) goto LAB_02a119b0;
          uVar66 = *(uint *)(param_1 + 0x3cc);
        }
        break;
      }
      if (iVar46 == 0) break;
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)uVar66) {
        uVar8 = uVar12 + 1;
      }
      uVar12 = uVar8;
    } while (uVar8 != uVar30);
    if (uVar66 != 0) {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0x2a24ac7f / uVar66;
      }
      uVar30 = 0x2a24ac7f - uVar30 * uVar66;
      uVar12 = uVar30;
      while (iVar46 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar12 << 3)), iVar46 != 0) {
        if (iVar46 == 0x2a24ac7f) {
          lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != -1) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = 0xffffffff;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
          }
          break;
        }
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
        if (uVar8 == uVar30) break;
      }
    }
  }
LAB_02a119b0:
  if (!bVar37 && !bVar36) {
    *(undefined4 *)(param_1 + 0x1a0a0) = 0;
    *(undefined8 *)(param_1 + 0x1a090) = 0;
    *(undefined8 *)(param_1 + 0x1a098) = 0;
    *(undefined8 *)(param_1 + 0x1a088) = 0;
    FUN_02a55844(&DAT_055f4f28,0);
    FUN_02a55844(&DAT_055f4f88,0);
    FUN_02a55844(&DAT_055f4f38,0);
    FUN_02a55844(&DAT_055f4f48,0);
    FUN_02a55844(&DAT_055f4f58,0);
    FUN_02a55844(&DAT_055f4f68,0);
    FUN_02a55844(&DAT_055f4f78,0);
    lVar67 = *(long *)(param_2 + 8);
    *(undefined4 *)(lVar67 + 0x4c) = 0;
    *(undefined4 *)(lVar67 + 0x50) = 0;
    *(undefined4 *)(lVar67 + 0x54) = 0;
    *(undefined4 *)(lVar67 + 0x58) = 0;
    *(undefined4 *)(lVar67 + 0x5c) = 0;
    *(undefined4 *)(lVar67 + 0x60) = 0;
    *(undefined4 *)(lVar67 + 100) = 0;
    *(undefined4 *)(lVar67 + 0x68) = 0;
    *(undefined4 *)(lVar67 + 0x6c) = 0;
    *(undefined4 *)(lVar67 + 0x70) = 0;
    *(undefined4 *)(lVar67 + 0x74) = 0;
    *(undefined4 *)(lVar67 + 0x78) = 0;
    *(undefined4 *)(lVar67 + 0x7c) = 0;
    *(undefined4 *)(lVar67 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x1a0a4) = 0;
    FUN_02a55844(&DAT_055f4f98,0);
    *(undefined4 *)(*(long *)(param_2 + 8) + 0x48) = 0;
    if (((*(char *)(param_1 + 0x1a06c) != '\0') &&
        (lVar67 = *(long *)(param_1 + 0x3c0), lVar67 != 0)) &&
       (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0xce7dd434 / uVar66;
      }
      uVar30 = 0xce7dd434 - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar46 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar46 == -0x31822bcc) {
          lVar73 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != -1) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0xffffffff;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            lVar67 = *(long *)(param_1 + 0x3c0);
            if (lVar67 == 0) goto LAB_02a11d40;
            uVar66 = *(uint *)(param_1 + 0x3cc);
          }
          break;
        }
        if (iVar46 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
      if (uVar66 != 0) {
        uVar30 = 0;
        if (uVar66 != 0) {
          uVar30 = 0x2a24ac7f / uVar66;
        }
        uVar30 = 0x2a24ac7f - uVar30 * uVar66;
        uVar12 = uVar30;
        while (iVar46 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar12 << 3)), iVar46 != 0) {
          if (iVar46 == 0x2a24ac7f) {
            lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != -1) {
              *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = 0xffffffff;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
            }
            break;
          }
          uVar8 = 0;
          if ((int)(uVar12 + 1) < (int)uVar66) {
            uVar8 = uVar12 + 1;
          }
          uVar12 = uVar8;
          if (uVar8 == uVar30) break;
        }
      }
    }
  }
LAB_02a11d40:
  *(char *)(param_1 + 8) = cVar55;
  puVar70 = PTR_DAT_04bb5008;
  puVar89 = PTR_DAT_04bb2020;
  if (((iVar45 != *(int *)(param_1 + 0x1a07c)) && (cVar55 != '\0')) && (DAT_055f4460 != iVar45)) {
    if (iVar45 == 0x11889761) {
      iVar46 = 100;
LAB_02a11d88:
      iVar47 = -1;
      if (((iVar51 != -0x6d41fcf3) && (iVar51 != 0x41c7d05)) && (iVar51 != 0x10cdc40c)) {
        iVar47 = FUN_02a18e80(iVar46,iVar45);
      }
LAB_02a11f30:
      *(int *)(param_1 + 0x1a078) = iVar47;
    }
    else {
      local_c8 = &local_168;
      local_e8 = (undefined ****)CONCAT44(local_e8._4_4_,iVar45);
      local_168 = (undefined ****)CONCAT44(local_168._4_4_,3);
      local_1f0 = (undefined *****)&local_c8;
      local_200 = 0xb8;
      uStack_1ff = 0x4c;
      uStack_1fe = 0x4aa;
      uStack_1fc = 0;
      uStack_1fa = 0;
      local_1f8 = SUB82(&local_b8,0);
      uStack_1f6 = (undefined2)((ulong)&local_b8 >> 0x10);
      uStack_1f4 = (undefined2)((ulong)&local_b8 >> 0x20);
      uStack_1f2 = (undefined2)((ulong)&local_b8 >> 0x30);
      uStack_1e8 = &local_e8;
      ppppuVar2 = (undefined8 ****)(PTR_DAT_04bc4990 + 0x10);
      local_b8 = local_b8 & 0xff00;
      iVar46 = 0;
      do {
        local_d8 = (undefined ****)CONCAT44(local_d8._4_4_,iVar46);
        local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar46);
        local_a0 = 0;
        local_b0 = ppppuVar2;
        if (iVar46 != 0) {
          local_a0 = FUN_02a96aac(*(long *)puVar70 + 0x20,iVar46);
          if (local_a0 != 0) {
            (**(code **)CONCAT26(uStack_1fa,
                                 CONCAT24(uStack_1fc,
                                          CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)))))
                      (&local_200,&local_b0);
          }
        }
        iVar47 = 0x27;
        if (iVar46 < 0x27) {
          iVar47 = iVar46 + 1;
        }
        iVar46 = iVar47;
      } while (iVar47 != 0x27);
      if ((char)local_b8 == '\0') {
        iVar46 = -1;
      }
      else {
        iVar46 = (int)local_168;
      }
      if (iVar45 < 0x41c7d05) {
        if ((iVar45 == -0x6d41fcf3) || (iVar45 == -0x6ca05206)) goto LAB_02a11ee4;
LAB_02a124ec:
        if (iVar46 != -1) {
LAB_02a11ef0:
          if (iVar45 < 0x41c7d05) {
            if (iVar45 != -0x6d41fcf3) {
              iVar47 = -0x6ca05206;
              goto LAB_02a11f24;
            }
          }
          else if (iVar45 != 0x10cdc40c) {
            iVar47 = 0x41c7d05;
LAB_02a11f24:
            if (iVar45 != iVar47) goto LAB_02a11d88;
          }
          iVar47 = *(int *)(param_1 + 0x1a078);
          goto LAB_02a11f30;
        }
        iVar47 = -1;
        iVar46 = -1;
      }
      else {
        if ((iVar45 != 0x10cdc40c) && (iVar45 != 0x41c7d05)) goto LAB_02a124ec;
LAB_02a11ee4:
        iVar46 = *local_260;
        if (-1 < iVar46) goto LAB_02a11ef0;
        iVar47 = -1;
      }
    }
    lVar67 = *(long *)(param_1 + 0x3c0);
    if ((lVar67 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0xf6a8836f / uVar66;
      }
      uVar30 = 0xf6a8836f - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar11 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar11 == -0x9577c91) {
          lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != iVar47) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = iVar47;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
          }
          break;
        }
        if (iVar11 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
    }
    iVar47 = *local_260;
    local_1f0._4_4_ = s_SystemBGM_NoFade_040786ad._0_4_;
    uStack_1e8._0_4_ = s_SystemBGM_NoFade_040786ad._4_4_;
    uStack_1e8._4_4_ = s_SystemBGM_NoFade_040786ad._8_4_;
    uStack_1e0 = s_SystemBGM_NoFade_040786ad._12_4_;
    if (iVar46 != iVar47) {
      local_1ad = 0;
      local_1f0._0_4_ = 0x40;
      local_1dc = 0;
      local_a8 = (char *)((long)&local_1f0 + 4);
      puVar89 = PTR_DAT_04bb2bc0 + 0x10;
      local_200 = SUB81(puVar89,0);
      uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
      local_1f8 = SUB82(local_a8,0);
      uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
      uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
      uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
      local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,1);
    }
    else {
      local_1ad = 0;
      local_1f0._0_4_ = 0x40;
      local_1dc = 0;
      local_a8 = (char *)((long)&local_1f0 + 4);
      puVar89 = PTR_DAT_04bb2bc0 + 0x10;
      local_200 = SUB81(puVar89,0);
      uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
      local_1f8 = SUB82(local_a8,0);
      uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
      uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
      uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
      local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,0);
    }
    *(bool *)(param_1 + 0x1a06c) = iVar46 != iVar47;
    puVar89 = PTR_DAT_04bb5008;
    if (iVar45 == 0x11889761) {
      uVar53 = 100;
LAB_02a12194:
      iVar46 = FUN_02a18e80(uVar53,iVar45);
    }
    else {
      local_c8 = &local_168;
      local_e8 = (undefined ****)CONCAT44(local_e8._4_4_,iVar45);
      local_168 = (undefined ****)CONCAT44(local_168._4_4_,3);
      local_1f0 = (undefined *****)&local_c8;
      local_200 = 0xb8;
      uStack_1ff = 0x4c;
      uStack_1fe = 0x4aa;
      uStack_1fc = 0;
      uStack_1fa = 0;
      local_1f8 = SUB82(&local_b8,0);
      uStack_1f6 = (undefined2)((ulong)&local_b8 >> 0x10);
      uStack_1f4 = (undefined2)((ulong)&local_b8 >> 0x20);
      uStack_1f2 = (undefined2)((ulong)&local_b8 >> 0x30);
      uStack_1e8 = &local_e8;
      ppppuVar2 = (undefined8 ****)(PTR_DAT_04bc4990 + 0x10);
      local_b8 = local_b8 & 0xff00;
      iVar46 = 0;
      do {
        local_d8 = (undefined ****)CONCAT44(local_d8._4_4_,iVar46);
        local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar46);
        local_a0 = 0;
        local_b0 = ppppuVar2;
        if (iVar46 != 0) {
          local_a0 = FUN_02a96aac(*(long *)puVar89 + 0x20,iVar46);
          if (local_a0 != 0) {
            (**(code **)CONCAT26(uStack_1fa,
                                 CONCAT24(uStack_1fc,
                                          CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)))))
                      (&local_200,&local_b0);
          }
        }
        iVar47 = 0x27;
        if (iVar46 < 0x27) {
          iVar47 = iVar46 + 1;
        }
        iVar46 = iVar47;
      } while (iVar47 != 0x27);
      if ((char)local_b8 == '\0') {
        iVar46 = -1;
      }
      else {
        uVar53 = (ulong)local_168 & 0xffffffff;
        iVar46 = (int)local_168;
        if ((int)local_168 != -1) goto LAB_02a12194;
      }
    }
    puVar89 = PTR_DAT_04bb2020;
    lVar67 = *(long *)(param_1 + 0x3c0);
    if ((lVar67 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0x8a1f809e / uVar66;
      }
      uVar30 = 0x8a1f809e - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar47 = *(int *)(lVar67 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar47 == -0x75e07f62) {
          lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != iVar46) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = iVar46;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
          }
          break;
        }
        if (iVar47 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
    }
  }
  *(int *)(param_1 + 0x1a07c) = iVar45;
  if (*(long *)PTR_DAT_04bb3240 == 0) {
    bVar39 = false;
  }
  else {
    bVar39 = *(long *)(*(long *)PTR_DAT_04bb3240 + 0x1da0) != 0;
  }
  lVar67 = param_1 + 0x288;
  cVar85 = *(char *)(param_1 + 0x1bd32);
  *(bool *)(param_1 + 0x1bd32) = bVar39;
  if ((*(long *)PTR_DAT_04bb2808 == 0) ||
     (lVar73 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar73 == 0)) {
    bVar35 = true;
  }
  else {
    bVar35 = *(uint *)(lVar73 + 0x1b0) < 2;
  }
  iVar46 = *(int *)(param_1 + 0x1a068);
  iVar45 = iVar46;
  if (iVar51 < 0x10cdc40c) {
    if (iVar51 < -0x24a26848) {
      if (iVar51 == -0x7a57de51) {
        if (uVar9 < 5) {
          iVar45 = *(int *)(&DAT_0417e4dc + (long)(int)uVar9 * 4);
        }
        else {
switchD_02a12484_default:
          iVar45 = -1;
        }
      }
      else {
        if (iVar51 == -0x6efba09b) goto LAB_02a123b0;
        if (iVar51 != -0x6d41fcf3) goto LAB_02a124b0;
        iVar45 = 7;
      }
    }
    else if ((iVar51 == -0x24a26848) || (iVar51 == -0x10e0fba8)) {
LAB_02a123b0:
      if (*(char *)(param_1 + 0x1a064) == '\0') {
        if (*(char *)(*(long *)(param_2 + 8) + 9) == '\0') {
LAB_02a124cc:
          if (uVar9 != 3) {
LAB_02a125f0:
            if (uVar9 != 0xffffffff) {
              uVar63 = 0;
              goto LAB_02a12600;
            }
          }
        }
        else {
          pcVar74 = *(char **)(*(long *)(param_2 + 8) + 0x18);
          if (pcVar74 == &DAT_040bbb5b) {
            if (uVar9 != 3) goto LAB_02a125f0;
LAB_02a125e8:
            uVar63 = 1;
LAB_02a12600:
            *(undefined1 *)(param_1 + 0x1a065) = uVar63;
          }
          else {
            if (*pcVar74 != -0x1d) goto LAB_02a124cc;
            uVar53 = 0;
            do {
              uVar72 = uVar53;
              uVar53 = uVar72;
              if (uVar72 == 0x80000) goto LAB_02a125d0;
              if (pcVar74[uVar72 + 1] != (&DAT_040bbb5c)[uVar72]) {
                uVar53 = 0;
                goto LAB_02a125d0;
              }
              uVar53 = uVar72 + 1;
            } while (pcVar74[uVar72 + 1] != '\0');
            uVar53 = 1;
LAB_02a125d0:
            if (uVar9 != 3) goto LAB_02a125f0;
            if (((uint)(uVar72 < 0x80000) & (uint)uVar53) != 0) goto LAB_02a125e8;
          }
        }
        lVar73 = *(long *)PTR_DAT_04bb39b0;
        pbVar69 = PTR_DAT_04bb32e0;
        if (lVar73 == 0) {
LAB_02a12668:
          if (*pbVar69 < 8) goto LAB_02a126d4;
LAB_02a12674:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02a126cc:
            pbVar69 = PTR_DAT_04bb5038;
            goto LAB_02a126d4;
          }
          lVar73 = **(long **)PTR_DAT_04bb27d0;
          bVar44 = *(byte *)(lVar73 + 0x473);
          pbVar69 = PTR_DAT_04bb5038;
          if ((long)(char)bVar44 != 0xffffffffffffffff) {
            puVar7 = (uint *)(lVar73 + 0x48) + ((long)(char)bVar44 & 0xffffffffU) * 0x20;
            if (7 < bVar44) {
              puVar7 = (uint *)(lVar73 + 0x48);
            }
            if ((*puVar7 & 8) != 0) {
              pbVar69 = (byte *)(lVar73 + 0x471);
            }
          }
          uVar66 = (uint)*pbVar69;
          if (7 < *pbVar69) goto LAB_02a126cc;
        }
        else {
          if (*(int *)(lVar73 + 0x15c) != 0) {
            pbVar69 = (byte *)(lVar73 + 0x158);
          }
          if (7 < *pbVar69) {
            if ((*(int *)(lVar73 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              pbVar69 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_02a12668;
            }
            goto LAB_02a12674;
          }
LAB_02a126d4:
          uVar66 = (uint)*pbVar69;
          if (7 < uVar66) {
            uVar66 = 0xff;
          }
        }
        lVar73 = *(long *)PTR_DAT_04bb4718;
        if ((lVar73 == 0) || (7 < uVar66)) {
          if ((DAT_054f0c70 & 1) == 0) {
            iVar47 = __cxa_guard_acquire(&DAT_054f0c70);
            psVar82 = &DAT_054f0c08;
            puVar89 = PTR_DAT_04bb2020;
            plVar83 = (long *)PTR_DAT_04bb26a8;
            cVar71 = DAT_054f0c6c;
            if (iVar47 != 0) {
              DAT_054f0c1c._0_4_ = 0;
              DAT_054f0c1c._4_4_ = 0;
              DAT_054f0c68 = 1;
              DAT_054f0c6c = '\0';
              DAT_054f0c24._0_4_ = 0;
              DAT_054f0c24._4_4_ = 0;
              DAT_054f0c2c._0_4_ = 0;
              DAT_054f0c2c._4_4_ = 0;
              _DAT_054f0c44 = 0;
              DAT_054f0c34._0_4_ = 0;
              DAT_054f0c34._4_4_ = 0;
              DAT_054f0c3c._0_4_ = 0;
              DAT_054f0c3c._4_4_ = 0;
              _DAT_054f0c08 = 0;
              _DAT_054f0c10 = 1;
              DAT_054f0c14._0_4_ = 0;
              DAT_054f0c14._4_4_ = 0;
              DAT_054f0c48 = 0;
              DAT_054f0c50 = 0;
              DAT_054f0c58 = 0;
              DAT_054f0c60 = 0;
              __cxa_guard_release(&DAT_054f0c70);
              puVar89 = PTR_DAT_04bb2020;
              plVar83 = (long *)PTR_DAT_04bb26a8;
              cVar71 = DAT_054f0c6c;
            }
            goto joined_r0x02a18dcc;
          }
          psVar82 = &DAT_054f0c08;
          if (DAT_054f0c6c != '\0') goto LAB_02a12740;
LAB_02a12764:
          uVar66 = 0;
        }
        else {
          lVar73 = lVar73 + (ulong)uVar66 * 0xd0 +
                   (ulong)(*(uint *)(lVar73 + (ulong)uVar66 * 4 + 0xd68) & 1) * 0x68;
          psVar82 = (short *)(lVar73 + 0x6e8);
          cVar71 = *(char *)(lVar73 + 0x74c);
joined_r0x02a18dcc:
          if (cVar71 == '\0') goto LAB_02a12764;
LAB_02a12740:
          if ((*psVar82 != *(short *)PTR_DAT_04bb6298) ||
             (uVar66 = *(uint *)(psVar82 + 2), 0x148 < uVar66)) goto LAB_02a12764;
        }
        if ((uVar66 == 0x18) || (*(char *)(param_1 + 0x1a065) == '\0')) {
          if (*(char *)(param_1 + 0x1a064) != '\0') {
            iVar45 = 1;
          }
        }
        else {
          iVar45 = 1;
          *(undefined2 *)(param_1 + 0x1a064) = 1;
        }
      }
      else {
        iVar45 = 1;
      }
    }
    else {
      if (iVar51 != 0x41c7d05) goto LAB_02a124b0;
      iVar45 = 0xb;
    }
  }
  else {
    uVar66 = uVar9 - 3;
    if (iVar51 < 0x565b4aba) {
      if (iVar51 == 0x10cdc40c) {
        iVar45 = 10;
      }
      else if (iVar51 == 0x43080996) {
        switch(*(undefined1 *)(param_1 + 0x1bc43)) {
        case 0:
          if (1 < uVar66) goto switchD_02a12484_caseD_3;
          *(undefined1 *)(param_1 + 0x1bc43) = 1;
          iVar45 = 2;
          break;
        case 1:
          if (uVar66 < 2) {
            lVar73 = *(long *)(param_1 + 0x1bc48);
            if ((lVar73 == 0) ||
               (auVar93._8_4_ = *(int *)(param_1 + 0x1bc50), auVar93._0_8_ = lVar73,
               *(int *)(param_1 + 0x1bc50) != *(int *)(lVar73 + 0x10))) {
              auVar93 = FUN_03f11080(lVar67,0x43080996);
              *(undefined1 (*) [12])(param_1 + 0x1bc48) = auVar93;
            }
            iVar45 = 2;
            if ((uVar9 == 4) && (iVar50 == 0)) {
              if ((auVar93._0_8_ != 0) && (auVar93._8_4_ == *(int *)(auVar93._0_8_ + 0x10))) {
                FUN_03b45ec0(0x3ea8f5c2,0);
              }
              *(undefined8 *)(param_1 + 0x1bc48) = 0;
              iVar45 = 2;
              *(undefined4 *)(param_1 + 0x1bc50) = 0;
            }
          }
          else {
            FUN_02a55844(&DAT_055f4f08,0);
            FUN_02a55844(&DAT_055f4f18,0);
            uVar63 = 2;
LAB_02a125c0:
            iVar45 = 0;
            *(undefined1 *)(param_1 + 0x1bc43) = uVar63;
          }
          break;
        case 2:
          if (uVar66 < 2) {
            uVar63 = 3;
            goto LAB_02a125c0;
          }
        case 3:
switchD_02a12484_caseD_3:
          iVar45 = 0;
          break;
        default:
          goto switchD_02a12484_default;
        }
      }
      else {
        if (iVar51 != 0x526b4f86) goto LAB_02a124b0;
        iVar45 = (uint)(uVar66 < 2) << 3;
      }
    }
    else if (iVar51 == 0x565b4aba) {
      iVar45 = (uint)(uVar66 < 2) << 2;
    }
    else if (iVar51 == 0x77130016) {
      iVar45 = 6;
      if (1 < uVar66) {
        iVar45 = 0;
      }
    }
    else {
      if (iVar51 == 0x6622bd46) goto LAB_02a123b0;
LAB_02a124b0:
      if (uVar10 != uVar57 || uVar57 == 0xffffffff) {
        iVar45 = 0;
      }
    }
  }
  puVar70 = PTR_PTR_04bb2238;
  if (uVar9 == 1) {
    if (uVar57 == 0xffffffff) {
      bVar41 = false;
    }
    else {
      bVar41 = (uVar60 == uVar57 || uVar10 == uVar57) || uVar59 == uVar57;
    }
    if ((uVar64 != 0xffffffff) && (uVar59 == uVar64)) {
      bVar41 = true;
    }
    if ((uVar58 != 0xffffffff) && (uVar59 == uVar58)) {
      bVar41 = true;
    }
    if ((uVar65 != 0xffffffff) && (uVar59 == uVar65)) {
      bVar41 = true;
    }
    if (!bVar41) {
      iVar46 = 0;
    }
    iVar45 = iVar46;
  }
  lVar73 = *(long *)(param_2 + 8);
  *(undefined1 *)(lVar73 + 9) = 0;
  *(undefined8 *)(lVar73 + 0x18) = *(undefined8 *)(puVar70 + 8);
  if (((bVar39 == false) && (cVar85 != '\0')) && (*(char *)(param_1 + 0x1bd31) != '\0')) {
    *(undefined1 *)(param_1 + 0x1bd31) = 0;
LAB_02a12868:
    lVar73 = *(long *)(param_1 + 0x3c0);
    if ((lVar73 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0xc3586195 / uVar66;
      }
      uVar30 = 0xc3586195 - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar46 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar46 == -0x3ca79e6b) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        if (iVar46 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
    }
    *(int *)(param_1 + 0x1a068) = iVar45;
    if (iVar45 != 0) goto LAB_02a128f0;
    *(undefined1 *)(param_1 + 0x1a064) = 0;
    lVar73 = *(long *)(param_1 + 0x70);
    if (lVar73 != 0) goto LAB_02a128f8;
LAB_02a129ec:
    *(undefined1 *)(param_1 + 0x1bcc8) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1a068) != iVar45) goto LAB_02a12868;
LAB_02a128f0:
    lVar73 = *(long *)(param_1 + 0x70);
    if (lVar73 == 0) goto LAB_02a129ec;
LAB_02a128f8:
    if (*(float *)(lVar73 + 0xb8) <= 0.0) goto LAB_02a129ec;
    cVar85 = *(char *)(param_1 + 0x1bcc8);
    uVar48 = FUN_006bd550(&DAT_040db2b3,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined2 *)puVar52 = 0x100;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
    puVar89 = PTR_DAT_04bb2020;
    if (cVar85 == '\0') {
      uVar48 = FUN_006bd550(&DAT_040db2b3,0);
      lVar73 = *plVar83;
      plVar62 = (long *)(lVar73 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
      puVar89 = PTR_DAT_04bb2020;
      if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
        puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
        if (puVar52 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
        }
        *(undefined2 *)puVar52 = 0;
        *(undefined1 *)((long)puVar52 + 2) = 1;
        puVar52[3] = 0;
        plVar68 = puVar52 + 2;
        *plVar68 = 0;
        *(undefined4 *)((long)puVar52 + 4) = uVar48;
        *(undefined4 *)(puVar52 + 1) = 0x3f800000;
        lVar75 = *plVar62;
        *plVar62 = (long)plVar68;
        puVar52[3] = plVar62;
        *plVar68 = lVar75;
        if (lVar75 != 0) {
          *(long **)(lVar75 + 8) = plVar68;
        }
        *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
    }
    else {
      puVar70 = PTR_DAT_04bb2020 + 0x10;
      local_200 = SUB81(puVar70,0);
      uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
      local_1f8 = 0xb2b3;
      uStack_1f6 = 0x40d;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      FUN_02a55844(&local_200,0);
    }
    *(char *)(param_1 + 0x1bcc8) = '\x01';
  }
  if ((!bVar35) &&
     (((uVar57 != 0xffffffff || (uVar64 != 0xffffffff)) ||
      ((uVar58 != 0xffffffff || (uVar65 != 0xffffffff)))))) {
    if ((((uVar59 == uVar57 || uVar59 == uVar64) || uVar59 == uVar58) || uVar59 == uVar65) ||
       (((uVar10 == uVar57 || uVar10 == uVar64) || uVar10 == uVar58) || uVar10 == uVar65)) {
      uVar54 = 0;
LAB_02a12b68:
      puVar70 = puVar89 + 0x10;
      local_200 = SUB81(puVar70,0);
      uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
      local_1f8 = 0xad4d;
      uStack_1f6 = 0x40e;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,uVar54);
    }
    else {
      if (((uVar60 != uVar57 && uVar60 != uVar64) && uVar60 != uVar58) && uVar60 != uVar65)
      goto LAB_02a12bbc;
      if (uVar9 == 2) {
        uVar54 = 1;
        goto LAB_02a12b68;
      }
    }
    if (((((uVar60 == uVar57 || uVar60 == uVar64) || uVar60 == uVar58) || uVar60 == uVar65) &&
        (((uVar10 == uVar57 || uVar10 == uVar64) || uVar10 == uVar58) || uVar10 == uVar65)) &&
        (((uVar59 == uVar57 || uVar59 == uVar64) || uVar59 == uVar58) || uVar59 == uVar65)) {
      puVar89 = puVar89 + 0x10;
      local_200 = SUB81(puVar89,0);
      uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
      local_1f8 = 0xad4d;
      uStack_1f6 = 0x40e;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,1);
    }
  }
LAB_02a12bbc:
  lVar73 = *plVar83;
  local_b8 = 0;
  local_b6 = 0x101;
  local_b2 = 0;
  pMVar1 = (MutexType *)(lVar73 + 0x89710);
  nn::os::LockMutex(pMVar1);
  uVar54 = *(undefined8 *)(lVar73 + 0x896e8);
  bVar84 = (byte)((ulong)uVar54 >> 0x20);
  bVar81 = (byte)((ulong)uVar54 >> 0x28);
  nn::os::UnlockMutex(pMVar1);
  puVar89 = PTR_DAT_04bb2020;
  lVar73 = *(long *)(param_1 + 0x3c0);
  local_b8 = (ushort)((ulong)uVar54 >> 0x30);
  cVar85 = (char)((ulong)uVar54 >> 8);
  cVar71 = (char)((ulong)uVar54 >> 0x10);
  bVar44 = (byte)((ulong)uVar54 >> 0x18);
  local_b6 = (uint)((ulong)uVar54 >> 8);
  if (lVar73 != 0) {
    uVar66 = *(uint *)(param_1 + 0x3cc);
    if (uVar66 != 0) {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0xa3d3a513 / uVar66;
      }
      uVar30 = 0xa3d3a513 - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar45 == -0x5c2c5aed) {
          lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != (int)(char)bVar44) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = (int)(char)bVar44;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
            lVar73 = *(long *)(param_1 + 0x3c0);
            if (lVar73 == 0) goto LAB_02a12e34;
            uVar66 = *(uint *)(param_1 + 0x3cc);
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
      if (uVar66 == 0) goto LAB_02a12e34;
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0xf86edefd / uVar66;
      }
      uVar30 = 0xf86edefd - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar45 == -0x7912103) {
          lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != (int)(char)bVar84) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = (int)(char)bVar84;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
            lVar73 = *(long *)(param_1 + 0x3c0);
            if ((lVar73 == 0) || (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 == 0))
            goto LAB_02a12e34;
            goto LAB_02a12d80;
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
    }
    if (uVar66 != 0) {
LAB_02a12d80:
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0x9fd7af97 / uVar66;
      }
      uVar30 = 0x9fd7af97 - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar45 == -0x60285069) {
          lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != (int)(char)bVar81) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = (int)(char)bVar81;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
            lVar73 = *(long *)(param_1 + 0x3c0);
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
    }
  }
LAB_02a12e34:
  if ((lVar73 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
    uVar30 = 0;
    if (uVar66 != 0) {
      uVar30 = 0x56141cf / uVar66;
    }
    fVar91 = (float)(int)((uint)bVar44 * 0xe10 + (int)(char)bVar81 + (uint)bVar84 * 0x3c);
    uVar30 = 0x56141cf - uVar30 * uVar66;
    uVar12 = uVar30;
    while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar12 << 3)), iVar45 != 0) {
      if (iVar45 == 0x56141cf) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
        if (*(float *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != fVar91) {
          *(float *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = fVar91;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)uVar66) {
        uVar8 = uVar12 + 1;
      }
      uVar12 = uVar8;
      if (uVar8 == uVar30) break;
    }
  }
  lVar73 = *(long *)(param_1 + 0x310);
  if (lVar73 == 0) {
    bVar35 = false;
    bVar39 = false;
  }
  else {
    uVar66 = *(uint *)(param_1 + 0x31c);
    if (uVar66 == 0) {
      bVar35 = false;
    }
    else {
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0x90755e55 / uVar66;
      }
      uVar30 = 0x90755e55 - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar45 == -0x6f8aa1ab) {
          uVar30 = *(uint *)(lVar73 + (long)(int)uVar12 * 8 + 4);
          if (uVar30 < *(uint *)(param_1 + 0x2e0)) {
            lVar75 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar30 * 8);
            bVar35 = false;
            if (lVar75 != 0) {
              bVar35 = *(int *)(lVar75 + 0x38) != 0;
            }
            goto LAB_02a12f74;
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
      bVar35 = false;
LAB_02a12f74:
      uVar30 = 0;
      if (uVar66 != 0) {
        uVar30 = 0x7bc3faaa / uVar66;
      }
      uVar30 = 0x7bc3faaa - uVar30 * uVar66;
      uVar12 = uVar30;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar12 << 3));
        if (iVar45 == 0) break;
        if (iVar45 == 0x7bc3faaa) {
          uVar66 = *(uint *)(lVar73 + (long)(int)uVar12 * 8 + 4);
          if (uVar66 < *(uint *)(param_1 + 0x2e0)) {
            lVar73 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar66 * 8);
            bVar39 = false;
            if (lVar73 != 0) {
              bVar39 = *(int *)(lVar73 + 0x38) != 0;
            }
            goto LAB_02a12ff4;
          }
          break;
        }
        uVar8 = 0;
        if ((int)(uVar12 + 1) < (int)uVar66) {
          uVar8 = uVar12 + 1;
        }
        uVar12 = uVar8;
      } while (uVar8 != uVar30);
    }
    bVar39 = false;
  }
LAB_02a12ff4:
  if (bVar84 == 0) {
    if (0x11 < bVar81) goto LAB_02a13010;
LAB_02a13040:
    if (bVar35) {
LAB_02a13044:
      lVar73 = *(long *)(param_1 + 0x3c0);
      if ((lVar73 != 0) && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
        uVar30 = 0;
        if (uVar66 != 0) {
          uVar30 = 0xc016f688 / uVar66;
        }
        uVar30 = 0xc016f688 - uVar30 * uVar66;
        uVar12 = uVar30;
        do {
          iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar12 << 3));
          if (iVar45 == -0x3fe90978) {
            lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 1) {
              *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 1;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            }
            break;
          }
          if (iVar45 == 0) break;
          uVar8 = 0;
          if ((int)(uVar12 + 1) < (int)uVar66) {
            uVar8 = uVar12 + 1;
          }
          uVar12 = uVar8;
        } while (uVar8 != uVar30);
      }
      goto LAB_02a130d0;
    }
  }
  else {
    if ((bVar84 == 0x3b) && (0x35 < bVar81)) goto LAB_02a13040;
LAB_02a13010:
    if ((*(int *)(param_1 + 0x1a068) == 0 || *(char *)(*(long *)(param_2 + 8) + 8) != '\0') &&
       (!(bool)(bVar35 ^ 1))) goto LAB_02a13044;
LAB_02a130d0:
    bVar39 = (bool)(bVar35 | bVar39);
  }
  if (((!bVar39) && (lVar73 = *(long *)(param_1 + 0x3c0), lVar73 != 0)) &&
     (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
    uVar30 = 0;
    if (uVar66 != 0) {
      uVar30 = 0xc016f688 / uVar66;
    }
    uVar30 = 0xc016f688 - uVar30 * uVar66;
    uVar12 = uVar30;
    do {
      iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3
                                 ));
      if (iVar45 == -0x3fe90978) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      if (iVar45 == 0) break;
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)uVar66) {
        uVar8 = uVar12 + 1;
      }
      uVar12 = uVar8;
    } while (uVar8 != uVar30);
  }
  if (((*(int *)(param_1 + 0x1bc28) - 5U < 3) && (lVar73 = *(long *)(param_1 + 0x3c0), lVar73 != 0))
     && (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
    uVar30 = 0;
    if (uVar66 != 0) {
      uVar30 = 0xc016f688 / uVar66;
    }
    uVar30 = 0xc016f688 - uVar30 * uVar66;
    uVar12 = uVar30;
    do {
      iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3
                                 ));
      if (iVar45 == -0x3fe90978) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      if (iVar45 == 0) break;
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)uVar66) {
        uVar8 = uVar12 + 1;
      }
      uVar12 = uVar8;
    } while (uVar8 != uVar30);
  }
  local_200 = (undefined1)uVar9;
  uStack_1ff = (undefined1)(uVar9 >> 8);
  uStack_1fe = (undefined2)(uVar9 >> 0x10);
  if (((uVar9 != 0xffffffff) && (lVar73 = *(long *)(param_1 + 0x3c0), lVar73 != 0)) &&
     (uVar66 = *(uint *)(param_1 + 0x3cc), uVar66 != 0)) {
    uVar30 = 0;
    if (uVar66 != 0) {
      uVar30 = 0x249f1617 / uVar66;
    }
    uVar30 = 0x249f1617 - uVar30 * uVar66;
    uVar12 = uVar30;
    while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar12 << 3)), iVar45 != 0) {
      if (iVar45 == 0x249f1617) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar12 * 8 + 4);
        if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != uVar9) {
          *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = uVar9;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)uVar66) {
        uVar8 = uVar12 + 1;
      }
      uVar12 = uVar8;
      if (uVar8 == uVar30) break;
    }
  }
  if (-1 < (int)uVar65) {
    uVar65 = 1;
    if ((uVar86 != uVar13) && (uVar86 != uVar64)) {
      uVar65 = (uint)(uVar86 == uVar58);
    }
    uVar86 = 0;
    if (uVar9 == 3) {
      uVar86 = uVar65;
    }
    lVar73 = *(long *)(param_1 + 0x3c0);
    uVar58 = 0;
    if (iVar50 == 0) {
      uVar58 = uVar86;
    }
    if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
      uVar64 = 0;
      if (uVar86 != 0) {
        uVar64 = 0x74e79e2c / uVar86;
      }
      uVar64 = 0x74e79e2c - uVar64 * uVar86;
      uVar65 = uVar64;
      while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar65 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar65 << 3)), iVar45 != 0) {
        if (iVar45 == 0x74e79e2c) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar65 * 8 + 4);
          if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != uVar58) {
            *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = uVar58;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        uVar66 = 0;
        if ((int)(uVar65 + 1) < (int)uVar86) {
          uVar66 = uVar65 + 1;
        }
        uVar65 = uVar66;
        if (uVar66 == uVar64) break;
      }
    }
  }
  local_b2 = bVar81;
  if (cVar55 == '\0') {
LAB_02a13a64:
    iVar46 = 0;
    lVar73 = *(long *)(param_1 + 0x3c0);
  }
  else {
    if (*pcVar76 == cVar85) {
      if ((*(char *)(param_1 + 0x1bc35) != cVar71) ||
         (cVar71 = *(char *)(param_1 + 0x1bc35), *(byte *)(param_1 + 0x1bc36) != bVar44 || bVar43))
      goto LAB_02a1338c;
    }
    else {
LAB_02a1338c:
      *pcVar76 = cVar85;
      uVar86 = *(uint *)(param_1 + 0x1bc2c);
      *(char *)(param_1 + 0x1bc35) = cVar71;
      *(byte *)(param_1 + 0x1bc36) = bVar44;
      lVar73 = *(long *)PTR_DAT_04bb27d0;
      if ((lVar73 == 0) || ((*(long *)(lVar73 + 0x28) == 0 || (*(int *)(lVar73 + 0x80) != 1)))) {
        puVar70 = puVar89 + 0x10;
        uVar54 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_200 = SUB81(puVar70,0);
        uVar63 = local_200;
        uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
        uVar31 = uStack_1ff;
        uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
        uVar32 = uStack_1fe;
        uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
        uVar33 = uStack_1fc;
        uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
        uVar34 = uStack_1fa;
        local_1f8 = 0xbdc2;
        uStack_1f6 = 0x405;
        uStack_1f4 = 0;
        uStack_1f2 = 0;
        iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
        if (iVar45 < 1) {
          local_1f8 = 0xeb86;
          uStack_1f6 = 0x40c;
          uStack_1f4 = 0;
          uStack_1f2 = 0;
          local_200 = uVar63;
          uStack_1ff = uVar31;
          uStack_1fe = uVar32;
          uStack_1fc = uVar33;
          uStack_1fa = uVar34;
          iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
          if (iVar45 == 1) {
            uVar58 = 1;
          }
          else {
            puVar70 = puVar89 + 0x10;
            local_200 = SUB81(puVar70,0);
            uVar63 = local_200;
            uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
            uVar31 = uStack_1ff;
            uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
            uVar32 = uStack_1fe;
            uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
            uVar33 = uStack_1fc;
            uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
            uVar34 = uStack_1fa;
            local_1f8 = 0x43a3;
            uStack_1f6 = 0x40d;
            uStack_1f4 = 0;
            uStack_1f2 = 0;
            iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
            if (iVar45 == 1) {
              uVar58 = 2;
            }
            else {
              local_1f8 = 0xf728;
              uStack_1f6 = 0x40b;
              uStack_1f4 = 0;
              uStack_1f2 = 0;
              local_200 = uVar63;
              uStack_1ff = uVar31;
              uStack_1fe = uVar32;
              uStack_1fc = uVar33;
              uStack_1fa = uVar34;
              iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
              if (iVar45 == 1) {
                uVar58 = 3;
              }
              else {
                puVar70 = puVar89 + 0x10;
                local_200 = SUB81(puVar70,0);
                uVar63 = local_200;
                uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
                uVar31 = uStack_1ff;
                uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
                uVar32 = uStack_1fe;
                uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
                uVar33 = uStack_1fc;
                uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
                uVar34 = uStack_1fa;
                local_1f8 = 0xb339;
                uStack_1f6 = 0x409;
                uStack_1f4 = 0;
                uStack_1f2 = 0;
                iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                if (iVar45 == 1) {
                  uVar58 = 4;
                }
                else {
                  local_1f8 = 0x6f3c;
                  uStack_1f6 = 0x406;
                  uStack_1f4 = 0;
                  uStack_1f2 = 0;
                  local_200 = uVar63;
                  uStack_1ff = uVar31;
                  uStack_1fe = uVar32;
                  uStack_1fc = uVar33;
                  uStack_1fa = uVar34;
                  iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                  if (iVar45 == 1) {
                    uVar58 = 5;
                  }
                  else {
                    puVar70 = puVar89 + 0x10;
                    local_200 = SUB81(puVar70,0);
                    uVar63 = local_200;
                    uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
                    uVar31 = uStack_1ff;
                    uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
                    uVar32 = uStack_1fe;
                    uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
                    uVar33 = uStack_1fc;
                    uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
                    uVar34 = uStack_1fa;
                    local_1f8 = 0x545;
                    uStack_1f6 = 0x40a;
                    uStack_1f4 = 0;
                    uStack_1f2 = 0;
                    iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                    if (iVar45 == 1) {
                      uVar58 = 6;
                    }
                    else {
                      local_1f8 = 0x1b0c;
                      uStack_1f6 = 0x406;
                      uStack_1f4 = 0;
                      uStack_1f2 = 0;
                      local_200 = uVar63;
                      uStack_1ff = uVar31;
                      uStack_1fe = uVar32;
                      uStack_1fc = uVar33;
                      uStack_1fa = uVar34;
                      iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                      if (iVar45 == 1) {
                        uVar58 = 7;
                      }
                      else {
                        puVar70 = puVar89 + 0x10;
                        local_200 = SUB81(puVar70,0);
                        uVar63 = local_200;
                        uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
                        uVar31 = uStack_1ff;
                        uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
                        uVar32 = uStack_1fe;
                        uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
                        uVar33 = uStack_1fc;
                        uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
                        uVar34 = uStack_1fa;
                        local_1f8 = 0x3dc9;
                        uStack_1f6 = 0x40e;
                        uStack_1f4 = 0;
                        uStack_1f2 = 0;
                        iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                        if (iVar45 == 1) {
                          uVar58 = 8;
                        }
                        else {
                          local_1f8 = 0x9875;
                          uStack_1f6 = 0x40d;
                          uStack_1f4 = 0;
                          uStack_1f2 = 0;
                          local_200 = uVar63;
                          uStack_1ff = uVar31;
                          uStack_1fe = uVar32;
                          uStack_1fc = uVar33;
                          uStack_1fa = uVar34;
                          iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                          if (iVar45 < 1) {
                            puVar70 = puVar89 + 0x10;
                            local_200 = SUB81(puVar70,0);
                            uVar63 = local_200;
                            uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
                            uVar31 = uStack_1ff;
                            uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
                            uVar32 = uStack_1fe;
                            uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
                            uVar33 = uStack_1fc;
                            uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
                            uVar34 = uStack_1fa;
                            local_1f8 = 0xb32e;
                            uStack_1f6 = 0x409;
                            uStack_1f4 = 0;
                            uStack_1f2 = 0;
                            iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                            if (iVar45 == 1) {
                              uVar58 = 0x52;
                            }
                            else {
                              local_1f8 = 0x3ddb;
                              uStack_1f6 = 0x40e;
                              uStack_1f4 = 0;
                              uStack_1f2 = 0;
                              local_200 = uVar63;
                              uStack_1ff = uVar31;
                              uStack_1fe = uVar32;
                              uStack_1fc = uVar33;
                              uStack_1fa = uVar34;
                              iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                              if (iVar45 == 1) {
                                uVar58 = 0x53;
                              }
                              else {
                                puVar89 = PTR_DAT_04bb2020 + 0x10;
                                local_200 = SUB81(puVar89,0);
                                uVar63 = local_200;
                                uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
                                uVar31 = uStack_1ff;
                                uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
                                uVar32 = uStack_1fe;
                                uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
                                uVar33 = uStack_1fc;
                                uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
                                uVar34 = uStack_1fa;
                                local_1f8 = 0x60df;
                                uStack_1f6 = 0x409;
                                uStack_1f4 = 0;
                                uStack_1f2 = 0;
                                iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                                if (iVar45 == 1) {
                                  uVar58 = 0x54;
                                }
                                else {
                                  local_1f8 = 0xec7c;
                                  uStack_1f6 = 0x40d;
                                  uStack_1f4 = 0;
                                  uStack_1f2 = 0;
                                  local_200 = uVar63;
                                  uStack_1ff = uVar31;
                                  uStack_1fe = uVar32;
                                  uStack_1fc = uVar33;
                                  uStack_1fa = uVar34;
                                  iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                                  if (iVar45 == 1) {
                                    uVar58 = 0x55;
                                  }
                                  else {
                                    puVar89 = PTR_DAT_04bb2020 + 0x10;
                                    local_200 = SUB81(puVar89,0);
                                    uVar63 = local_200;
                                    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
                                    uVar31 = uStack_1ff;
                                    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
                                    uVar32 = uStack_1fe;
                                    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
                                    uVar33 = uStack_1fc;
                                    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
                                    uVar34 = uStack_1fa;
                                    local_1f8 = 0xc382;
                                    uStack_1f6 = 0x406;
                                    uStack_1f4 = 0;
                                    uStack_1f2 = 0;
                                    iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                                    if (iVar45 == 1) {
                                      uVar58 = 0x56;
                                    }
                                    else {
                                      local_1f8 = 0xb32e;
                                      uStack_1f6 = 0x409;
                                      uStack_1f4 = 0;
                                      uStack_1f2 = 0;
                                      local_200 = uVar63;
                                      uStack_1ff = uVar31;
                                      uStack_1fe = uVar32;
                                      uStack_1fc = uVar33;
                                      uStack_1fa = uVar34;
                                      iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0);
                                      if (iVar45 != 0) {
                                        ppppuVar2 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
                                        local_a8 = "Fireworks2";
                                        local_b0 = ppppuVar2;
                                        iVar45 = FUN_00883150(uVar54,&local_b0,&local_b8,0);
                                        if (iVar45 != 0) {
                                          local_c0 = "Fireworks3";
                                          local_c8 = ppppuVar2;
                                          iVar45 = FUN_00883150(uVar54,&local_c8,&local_b8,0);
                                          if (iVar45 != 0) {
                                            ppppuVar3 = (undefined ****)(PTR_DAT_04bb2020 + 0x10);
                                            local_d0 = "Fireworks4";
                                            local_d8 = ppppuVar3;
                                            iVar45 = FUN_00883150(uVar54,&local_d8,&local_b8,0);
                                            if (iVar45 != 0) {
                                              local_e0 = "Fireworks5";
                                              local_e8 = ppppuVar3;
                                              iVar45 = FUN_00883150(uVar54,&local_e8,&local_b8,0);
                                              if (iVar45 != 0) {
                                                puVar89 = PTR_DAT_04bb2020 + 0x10;
                                                local_200 = SUB81(puVar89,0);
                                                uVar63 = local_200;
                                                uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
                                                uVar31 = uStack_1ff;
                                                uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
                                                uVar32 = uStack_1fe;
                                                uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
                                                uVar33 = uStack_1fc;
                                                uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
                                                uVar34 = uStack_1fa;
                                                local_1f8 = 0x4383;
                                                uStack_1f6 = 0x40d;
                                                uStack_1f4 = 0;
                                                uStack_1f2 = 0;
                                                iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,0)
                                                ;
                                                if (iVar45 == 1) {
                                                  uVar58 = 0xf;
                                                }
                                                else {
                                                  local_1f8 = 0x4383;
                                                  uStack_1f6 = 0x40d;
                                                  uStack_1f4 = 0;
                                                  uStack_1f2 = 0;
                                                  local_200 = uVar63;
                                                  uStack_1ff = uVar31;
                                                  uStack_1fe = uVar32;
                                                  uStack_1fc = uVar33;
                                                  uStack_1fa = uVar34;
                                                  iVar45 = FUN_00883150(uVar54,&local_200,&local_b8,
                                                                        0);
                                                  if (iVar45 == 0) {
                                                    uVar58 = 0xe;
                                                  }
                                                  else {
                                                    puVar89 = PTR_DAT_04bb2020 + 0x10;
                                                    local_200 = SUB81(puVar89,0);
                                                    uVar63 = local_200;
                                                    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
                                                    uVar31 = uStack_1ff;
                                                    uStack_1fe = (undefined2)
                                                                 ((ulong)puVar89 >> 0x10);
                                                    uVar32 = uStack_1fe;
                                                    uStack_1fc = (undefined2)
                                                                 ((ulong)puVar89 >> 0x20);
                                                    uVar33 = uStack_1fc;
                                                    uStack_1fa = (undefined2)
                                                                 ((ulong)puVar89 >> 0x30);
                                                    uVar34 = uStack_1fa;
                                                    local_1f8 = 0xbf35;
                                                    uStack_1f6 = 0x408;
                                                    uStack_1f4 = 0;
                                                    uStack_1f2 = 0;
                                                    iVar45 = FUN_00883150(uVar54,&local_200,
                                                                          &local_b8,0);
                                                    if (iVar45 == 1) {
                                                      uVar58 = 0x14;
                                                    }
                                                    else {
                                                      local_1f8 = 0xbf35;
                                                      uStack_1f6 = 0x408;
                                                      uStack_1f4 = 0;
                                                      uStack_1f2 = 0;
                                                      local_200 = uVar63;
                                                      uStack_1ff = uVar31;
                                                      uStack_1fe = uVar32;
                                                      uStack_1fc = uVar33;
                                                      uStack_1fa = uVar34;
                                                      iVar45 = FUN_00883150(uVar54,&local_200,
                                                                            &local_b8,0);
                                                      if (iVar45 == 0) {
                                                        uVar58 = 0x13;
                                                      }
                                                      else {
                                                        puVar89 = PTR_DAT_04bb2020 + 0x10;
                                                        local_200 = SUB81(puVar89,0);
                                                        uStack_1ff = (undefined1)
                                                                     ((ulong)puVar89 >> 8);
                                                        uStack_1fe = (undefined2)
                                                                     ((ulong)puVar89 >> 0x10);
                                                        uStack_1fc = (undefined2)
                                                                     ((ulong)puVar89 >> 0x20);
                                                        uStack_1fa = (undefined2)
                                                                     ((ulong)puVar89 >> 0x30);
                                                        local_1f8 = 0x9046;
                                                        uStack_1f6 = 0x40f;
                                                        uStack_1f4 = 0;
                                                        uStack_1f2 = 0;
                                                        iVar45 = FUN_00883150(uVar54,&local_200,
                                                                              &local_b8,0);
                                                        puVar89 = PTR_DAT_04bb2020;
                                                        if (iVar45 < 1) {
                                                          if ((char)local_b6 == '\x01') {
                                                            if (local_b6._1_1_ == '\x02') {
                                                              if (local_b6._2_1_ < 5)
                                                              goto LAB_02a18e18;
                                                            }
                                                            else if ((local_b6._1_1_ == '\x01') &&
                                                                    (4 < local_b6._2_1_)) {
LAB_02a18e18:
                                                              if (param_2[0x1d] != '\0') {
                                                                uVar58 = 0x12;
                                                                goto LAB_02a137c0;
                                                              }
                                                            }
                                                          }
                                                          puVar70 = PTR_DAT_04bb2020 + 0x10;
                                                          local_200 = SUB81(puVar70,0);
                                                          uStack_1ff = (undefined1)
                                                                       ((ulong)puVar70 >> 8);
                                                          uStack_1fe = (undefined2)
                                                                       ((ulong)puVar70 >> 0x10);
                                                          uStack_1fc = (undefined2)
                                                                       ((ulong)puVar70 >> 0x20);
                                                          uStack_1fa = (undefined2)
                                                                       ((ulong)puVar70 >> 0x30);
                                                          local_1f8 = 0x90fb;
                                                          uStack_1f6 = 0x40e;
                                                          uStack_1f4 = 0;
                                                          uStack_1f2 = 0;
                                                          iVar45 = FUN_00883150(uVar54,&local_200,
                                                                                &local_b8,0);
                                                          uVar58 = 0x18;
                                                          if (iVar45 < 1) {
                                                            uVar58 = 0;
                                                          }
                                                          plVar83 = (long *)PTR_DAT_04bb26a8;
                                                          goto LAB_02a137d8;
                                                        }
                                                        uVar58 = 0x11;
                                                      }
                                                    }
                                                  }
                                                }
                                                goto LAB_02a137c0;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      uVar58 = 0x51;
                                    }
                                  }
                                }
LAB_02a137c0:
                                plVar83 = (long *)PTR_DAT_04bb26a8;
                              }
                              puVar89 = PTR_DAT_04bb2020;
                            }
                          }
                          else {
                            uVar58 = 0x19;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar58 = 0x15;
        }
      }
      else {
        uVar58 = 0;
      }
LAB_02a137d8:
      uVar53 = FUN_00a8117c(&local_b8);
      lVar75 = *(long *)PTR_DAT_04bb47c8;
      lVar73 = *(long *)(lVar75 + 0x188);
      if (*(char *)(lVar75 + 0x1a0) == '\0') {
        lVar73 = -1;
      }
      if (-1 < lVar73) {
        lVar87 = *(long *)(lVar75 + 0x198);
        lVar88 = *(long *)PTR_DAT_04bb29d0;
        if (*(char *)(lVar75 + 0x1a0) == '\0') {
          lVar87 = -1;
        }
        lVar87 = (long)(lVar88 * (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                                 (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000 -
                 lVar87;
        if (lVar87 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar75 = 0;
          if (lVar88 != 0) {
            lVar75 = (lVar87 * 1000) / lVar88;
          }
        }
        else {
          lVar75 = 0;
          if (lVar88 != 0) {
            lVar75 = lVar87 / lVar88;
          }
          lVar75 = lVar75 * 1000;
        }
        lVar73 = lVar75 + lVar73;
      }
      if ((uVar53 & 1) == 0) {
        if (uVar58 != uVar86) goto LAB_02a138d8;
      }
      else if (((uVar58 != uVar86) && ((uVar86 & 0xfffffffe) != 0x18)) && (-1 < lVar73)) {
LAB_02a138d8:
        lVar73 = *(long *)(param_1 + 0x3c0);
        if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
          uVar64 = 0;
          if (uVar86 != 0) {
            uVar64 = 0xd34c7b58 / uVar86;
          }
          uVar64 = 0xd34c7b58 - uVar64 * uVar86;
          uVar65 = uVar64;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar65 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar65 << 3));
            if (iVar45 == -0x2cb384a8) {
              lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar65 * 8 + 4);
              if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != uVar58) {
                *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = uVar58;
                *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
              }
              break;
            }
            if (iVar45 == 0) break;
            uVar66 = 0;
            if ((int)(uVar65 + 1) < (int)uVar86) {
              uVar66 = uVar65 + 1;
            }
            uVar65 = uVar66;
          } while (uVar66 != uVar64);
        }
        uVar86 = uVar58;
      }
      *(uint *)(param_1 + 0x1bc2c) = uVar86;
      bVar44 = local_b6._2_1_;
    }
    cVar85 = DAT_0417fb5c;
    cVar71 = DAT_0417fb5b;
    local_b0 = (undefined8 ****)((ulong)local_b0 & 0xffffffff00000000);
    iVar45 = (char)bVar44 * 0xe10 + (local_b6 >> 0x18) * 0x3c + (uint)local_b2;
    if (DAT_0417fb5a == '\0') {
      puVar70 = puVar89 + 0x10;
      local_200 = SUB81(puVar70,0);
      uVar63 = local_200;
      uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
      uVar31 = uStack_1ff;
      uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
      uVar32 = uStack_1fe;
      uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
      uVar33 = uStack_1fc;
      uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
      uVar34 = uStack_1fa;
      local_1f8 = 0x95ae;
      uStack_1f6 = 0x40e;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      uVar53 = FUN_0273f0a0(&local_200);
      if ((uVar53 & 1) == 0) {
        local_1f8 = 0x4e8;
        uStack_1f6 = 0x40b;
        uStack_1f4 = 0;
        uStack_1f2 = 0;
        local_200 = uVar63;
        uStack_1ff = uVar31;
        uStack_1fe = uVar32;
        uStack_1fc = uVar33;
        uStack_1fa = uVar34;
        bVar44 = FUN_0273f0a0(&local_200);
        cVar85 = cVar85 + (bVar44 & cVar85 < '\x19');
      }
      else {
        cVar71 = cVar71 - ('\0' < cVar71);
      }
    }
    iVar46 = cVar85 * 0xe10 + -0x262;
    if (cVar71 * 0xe10 <= iVar45 && iVar45 < iVar46) goto LAB_02a13a64;
    iVar47 = cVar85 * 0xe10 + -600;
    if (iVar45 < iVar46 || iVar47 <= iVar45) {
      iVar46 = 2;
      if (cVar71 * 0xe10 + -10 <= iVar45 && iVar45 < iVar47) {
        iVar46 = 3;
      }
      lVar73 = *(long *)(param_1 + 0x3c0);
    }
    else {
      iVar46 = 1;
      lVar73 = *(long *)(param_1 + 0x3c0);
    }
  }
  if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
    uVar58 = 0;
    if (uVar86 != 0) {
      uVar58 = 0x9cf2e341 / uVar86;
    }
    uVar58 = 0x9cf2e341 - uVar58 * uVar86;
    uVar64 = uVar58;
    do {
      iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar64 << 3
                                 ));
      if (iVar45 == -0x630d1cbf) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar46) {
          *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar46;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      if (iVar45 == 0) break;
      uVar65 = 0;
      if ((int)(uVar64 + 1) < (int)uVar86) {
        uVar65 = uVar64 + 1;
      }
      uVar64 = uVar65;
    } while (uVar65 != uVar58);
  }
  lVar73 = *(long *)(param_2 + 8);
  if (*(char *)(lVar73 + 0xc16e) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc0) = 1;
    lVar73 = *(long *)(param_2 + 8);
  }
  if (*(char *)(lVar73 + 0xc16f) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc1) = 1;
    lVar73 = *(long *)(param_2 + 8);
  }
  if (*(char *)(lVar73 + 0xc170) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc2) = 1;
    lVar73 = *(long *)(param_2 + 8);
  }
  if (*(char *)(lVar73 + 0xc171) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc3) = 1;
    lVar73 = *(long *)(param_2 + 8);
  }
  *(undefined4 *)(lVar73 + 0xc16e) = 0;
  if (*(char *)(param_1 + 0x1bcc0) == '\0') {
    if (*(char *)(param_1 + 0x1bcc1) == '\0') {
      if (*(char *)(param_1 + 0x1bcc2) == '\0') {
        if (*(char *)(param_1 + 0x1bcc3) == '\0') {
          iVar45 = FUN_03f11010(lVar67,0xeafddbbb);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + (long)iVar45 * 4) == 3) {
            bVar39 = false;
            if (*(long *)(param_1 + 0x20) != 0) {
              bVar39 = 0.0 < *(float *)(*(long *)(param_1 + 0x20) + 0xb8);
            }
            bVar35 = false;
            if (*(long *)(param_1 + 0x28) != 0) {
              bVar35 = 0.0 < *(float *)(*(long *)(param_1 + 0x28) + 0xb8);
            }
            if (!(bool)(bVar39 | bVar35)) {
              FUN_03f10f90(lVar67,0xeafddbbb,0);
            }
          }
        }
        else if ((bVar38 && bVar40) || ((uVar9 != 4 && (*(int *)(param_1 + 0x1bcb4) == 4)))) {
          (**(code **)(DAT_055f4fa8 + 0x18))(&DAT_055f4fa8);
          uVar48 = FUN_006bd550(DAT_055f4fb0,0);
          lVar73 = *plVar83;
          plVar62 = (long *)(lVar73 + 0xb3b78);
          nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
          if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
            puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
            if (puVar52 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
            }
            *(undefined2 *)puVar52 = 0;
            plVar68 = puVar52 + 2;
            *plVar68 = 0;
            *(undefined1 *)((long)puVar52 + 2) = 0;
            *(undefined4 *)((long)puVar52 + 4) = uVar48;
            *(undefined4 *)(puVar52 + 1) = 0x3f800000;
            puVar52[3] = 0;
            lVar75 = *plVar62;
            *plVar62 = (long)plVar68;
            puVar52[3] = plVar62;
            *plVar68 = lVar75;
            if (lVar75 != 0) {
              *(long **)(lVar75 + 8) = plVar68;
            }
            *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
          lVar73 = *(long *)(param_1 + 0x3c0);
          if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
            uVar58 = 0;
            if (uVar86 != 0) {
              uVar58 = 0xeafddbbb / uVar86;
            }
            uVar58 = 0xeafddbbb - uVar58 * uVar86;
            uVar64 = uVar58;
            do {
              iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar64 << 3));
              if (iVar45 == -0x15022445) {
                lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
                if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 9) {
                  *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 9;
                  *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
                }
                break;
              }
              if (iVar45 == 0) break;
              uVar65 = 0;
              if ((int)(uVar64 + 1) < (int)uVar86) {
                uVar65 = uVar64 + 1;
              }
              uVar64 = uVar65;
            } while (uVar65 != uVar58);
          }
          *(undefined1 *)(param_1 + 0x1bcc3) = 0;
        }
      }
      else if ((bVar38 && bVar40) || ((uVar9 != 4 && (*(int *)(param_1 + 0x1bcb4) == 4)))) {
        (**(code **)(DAT_055f4fa8 + 0x18))(&DAT_055f4fa8);
        uVar48 = FUN_006bd550(DAT_055f4fb0,0);
        lVar73 = *plVar83;
        plVar62 = (long *)(lVar73 + 0xb3b78);
        nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
        if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
          puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
          if (puVar52 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
          }
          *(undefined2 *)puVar52 = 0;
          plVar68 = puVar52 + 2;
          *plVar68 = 0;
          *(undefined1 *)((long)puVar52 + 2) = 0;
          *(undefined4 *)((long)puVar52 + 4) = uVar48;
          *(undefined4 *)(puVar52 + 1) = 0x3f800000;
          puVar52[3] = 0;
          lVar75 = *plVar62;
          *plVar62 = (long)plVar68;
          puVar52[3] = plVar62;
          *plVar68 = lVar75;
          if (lVar75 != 0) {
            *(long **)(lVar75 + 8) = plVar68;
          }
          *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
        lVar73 = *(long *)(param_1 + 0x3c0);
        if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
          uVar58 = 0;
          if (uVar86 != 0) {
            uVar58 = 0xeafddbbb / uVar86;
          }
          uVar58 = 0xeafddbbb - uVar58 * uVar86;
          uVar64 = uVar58;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar64 << 3));
            if (iVar45 == -0x15022445) {
              lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
              if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 7) {
                *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 7;
                *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
              }
              break;
            }
            if (iVar45 == 0) break;
            uVar65 = 0;
            if ((int)(uVar64 + 1) < (int)uVar86) {
              uVar65 = uVar64 + 1;
            }
            uVar64 = uVar65;
          } while (uVar65 != uVar58);
        }
        *(undefined1 *)(param_1 + 0x1bcc2) = 0;
      }
    }
    else if ((bVar38 && bVar40) || ((uVar9 != 4 && (*(int *)(param_1 + 0x1bcb4) == 4)))) {
      (**(code **)(DAT_055f4fa8 + 0x18))(&DAT_055f4fa8);
      uVar48 = FUN_006bd550(DAT_055f4fb0,0);
      lVar73 = *plVar83;
      plVar62 = (long *)(lVar73 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
      if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
        puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
        if (puVar52 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
        }
        *(undefined2 *)puVar52 = 0;
        plVar68 = puVar52 + 2;
        *plVar68 = 0;
        *(undefined1 *)((long)puVar52 + 2) = 0;
        *(undefined4 *)((long)puVar52 + 4) = uVar48;
        *(undefined4 *)(puVar52 + 1) = 0x3f800000;
        puVar52[3] = 0;
        lVar75 = *plVar62;
        *plVar62 = (long)plVar68;
        puVar52[3] = plVar62;
        *plVar68 = lVar75;
        if (lVar75 != 0) {
          *(long **)(lVar75 + 8) = plVar68;
        }
        *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
      lVar73 = *(long *)(param_1 + 0x3c0);
      if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
        uVar58 = 0;
        if (uVar86 != 0) {
          uVar58 = 0xeafddbbb / uVar86;
        }
        uVar58 = 0xeafddbbb - uVar58 * uVar86;
        uVar64 = uVar58;
        do {
          iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar64 << 3));
          if (iVar45 == -0x15022445) {
            lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 8) {
              *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 8;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            }
            break;
          }
          if (iVar45 == 0) break;
          uVar65 = 0;
          if ((int)(uVar64 + 1) < (int)uVar86) {
            uVar65 = uVar64 + 1;
          }
          uVar64 = uVar65;
        } while (uVar65 != uVar58);
      }
      *(undefined1 *)(param_1 + 0x1bcc1) = 0;
    }
  }
  else if ((bVar38 && bVar40) || ((uVar9 != 4 && (*(int *)(param_1 + 0x1bcb4) == 4)))) {
    (**(code **)(DAT_055f4fa8 + 0x18))(&DAT_055f4fa8);
    uVar48 = FUN_006bd550(DAT_055f4fb0,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
    lVar73 = *(long *)(param_1 + 0x3c0);
    if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
      uVar58 = 0;
      if (uVar86 != 0) {
        uVar58 = 0xeafddbbb / uVar86;
      }
      uVar58 = 0xeafddbbb - uVar58 * uVar86;
      uVar64 = uVar58;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar64 << 3));
        if (iVar45 == -0x15022445) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 2) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 2;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar65 = 0;
        if ((int)(uVar64 + 1) < (int)uVar86) {
          uVar65 = uVar64 + 1;
        }
        uVar64 = uVar65;
      } while (uVar65 != uVar58);
    }
    *(undefined1 *)(param_1 + 0x1bcc0) = 0;
  }
  if (cVar55 != '\0') {
    iVar45 = 0;
    switch(*(undefined4 *)(param_2 + 0x18)) {
    case 2:
      iVar45 = 1;
      break;
    case 3:
      iVar45 = 2;
      break;
    case 4:
      iVar45 = 3;
      break;
    case 5:
      iVar45 = 4;
      break;
    case 7:
    case 8:
      iVar45 = 5;
      break;
    case 9:
    case 10:
      iVar45 = 6;
      break;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      iVar45 = 7;
      break;
    case 99:
      iVar45 = 99;
    }
    if (*(int *)(param_1 + 0x1bc30) != iVar45) {
      lVar73 = *(long *)(param_1 + 0x3c0);
      if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
        uVar58 = 0;
        if (uVar86 != 0) {
          uVar58 = 0x3299af9d / uVar86;
        }
        uVar58 = 0x3299af9d - uVar58 * uVar86;
        uVar64 = uVar58;
        while (iVar46 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar64 << 3)), iVar46 != 0) {
          if (iVar46 == 0x3299af9d) {
            lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
              *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            }
            break;
          }
          uVar65 = 0;
          if ((int)(uVar64 + 1) < (int)uVar86) {
            uVar65 = uVar64 + 1;
          }
          uVar64 = uVar65;
          if (uVar65 == uVar58) break;
        }
      }
      *(int *)(param_1 + 0x1bc30) = iVar45;
    }
    if (*(long *)PTR_DAT_04bb30a0 != 0) {
      iVar45 = FUN_00a8d8a8(*(long *)PTR_DAT_04bb30a0,&local_b8);
      local_200 = (undefined1)iVar45;
      uStack_1ff = (undefined1)((uint)iVar45 >> 8);
      uStack_1fe = (undefined2)((uint)iVar45 >> 0x10);
      if (iVar45 - 4U < 4) {
        iVar45 = *(int *)(&DAT_04102a40 + (long)(int)(iVar45 - 4U) * 4);
        lVar73 = *(long *)(param_1 + 0x3c0);
      }
      else {
        iVar45 = 0;
        lVar73 = *(long *)(param_1 + 0x3c0);
      }
      if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
        uVar58 = 0;
        if (uVar86 != 0) {
          uVar58 = 0xa6fe9bb3 / uVar86;
        }
        uVar58 = 0xa6fe9bb3 - uVar58 * uVar86;
        uVar64 = uVar58;
        do {
          iVar46 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar64 << 3));
          if (iVar46 == -0x5901644d) {
            lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
              *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            }
            break;
          }
          if (iVar46 == 0) break;
          uVar65 = 0;
          if ((int)(uVar64 + 1) < (int)uVar86) {
            uVar65 = uVar64 + 1;
          }
          uVar64 = uVar65;
        } while (uVar65 != uVar58);
      }
    }
  }
  local_f8 = puVar89 + 0x10;
  iVar46 = *(int *)(param_1 + 0x1a088);
  iVar45 = iVar46 + (*(int *)(*(long *)(param_2 + 8) + 0x4c) -
                    *(int *)(*(long *)(param_2 + 8) + 0x50));
  uStack_f0 = DAT_055f4f30;
  if ((iVar46 == 0) && (0 < iVar45)) {
    uVar48 = FUN_006bd550(DAT_055f4f30,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
  }
  else if ((0 < iVar46) && (iVar45 < 1)) {
    FUN_02a55844(&local_f8,0);
  }
  *(int *)(param_1 + 0x1a088) = iVar45;
  local_108 = puVar89 + 0x10;
  iVar46 = *(int *)(param_1 + 0x1a08c);
  iVar45 = iVar46 + (*(int *)(*(long *)(param_2 + 8) + 0x54) -
                    *(int *)(*(long *)(param_2 + 8) + 0x58));
  uStack_100 = DAT_055f4f40;
  if ((iVar46 == 0) && (0 < iVar45)) {
    uVar48 = FUN_006bd550(DAT_055f4f40,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
  }
  else if ((0 < iVar46) && (iVar45 < 1)) {
    FUN_02a55844(&local_108,0);
  }
  *(int *)(param_1 + 0x1a08c) = iVar45;
  local_118 = puVar89 + 0x10;
  iVar46 = *(int *)(param_1 + 0x1a090);
  iVar45 = iVar46 + (*(int *)(*(long *)(param_2 + 8) + 0x5c) -
                    *(int *)(*(long *)(param_2 + 8) + 0x60));
  uStack_110 = DAT_055f4f50;
  if ((iVar46 == 0) && (0 < iVar45)) {
    uVar48 = FUN_006bd550(DAT_055f4f50,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
  }
  else if ((0 < iVar46) && (iVar45 < 1)) {
    FUN_02a55844(&local_118,0);
  }
  *(int *)(param_1 + 0x1a090) = iVar45;
  local_128 = puVar89 + 0x10;
  iVar46 = *(int *)(param_1 + 0x1a094);
  iVar45 = iVar46 + (*(int *)(*(long *)(param_2 + 8) + 100) -
                    *(int *)(*(long *)(param_2 + 8) + 0x68));
  uStack_120 = DAT_055f4f60;
  if ((iVar46 == 0) && (0 < iVar45)) {
    uVar48 = FUN_006bd550(DAT_055f4f60,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
  }
  else if ((0 < iVar46) && (iVar45 < 1)) {
    FUN_02a55844(&local_128,0);
  }
  *(int *)(param_1 + 0x1a094) = iVar45;
  local_138 = puVar89 + 0x10;
  iVar46 = *(int *)(param_1 + 0x1a098);
  iVar45 = iVar46 + (*(int *)(*(long *)(param_2 + 8) + 0x6c) -
                    *(int *)(*(long *)(param_2 + 8) + 0x70));
  uStack_130 = DAT_055f4f70;
  if ((iVar46 == 0) && (0 < iVar45)) {
    uVar48 = FUN_006bd550(DAT_055f4f70,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
  }
  else if ((0 < iVar46) && (iVar45 < 1)) {
    FUN_02a55844(&local_138,0);
  }
  *(int *)(param_1 + 0x1a098) = iVar45;
  local_148 = puVar89 + 0x10;
  iVar46 = *(int *)(param_1 + 0x1a09c);
  iVar45 = iVar46 + (*(int *)(*(long *)(param_2 + 8) + 0x74) -
                    *(int *)(*(long *)(param_2 + 8) + 0x78));
  uStack_140 = DAT_055f4f80;
  if ((iVar46 == 0) && (0 < iVar45)) {
    uVar48 = FUN_006bd550(DAT_055f4f80,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
  }
  else if ((0 < iVar46) && (iVar45 < 1)) {
    FUN_02a55844(&local_148,0);
  }
  *(int *)(param_1 + 0x1a09c) = iVar45;
  local_158 = puVar89 + 0x10;
  iVar46 = *(int *)(param_1 + 0x1a0a0);
  iVar45 = iVar46 + (*(int *)(*(long *)(param_2 + 8) + 0x7c) -
                    *(int *)(*(long *)(param_2 + 8) + 0x80));
  uStack_150 = DAT_055f4f90;
  if ((iVar46 == 0) && (0 < iVar45)) {
    uVar48 = FUN_006bd550(DAT_055f4f90,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
  }
  else if ((0 < iVar46) && (iVar45 < 1)) {
    FUN_02a55844(&local_158,0);
  }
  *(int *)(param_1 + 0x1a0a0) = iVar45;
  lVar73 = *(long *)PTR_DAT_04bb28f8;
  if (lVar73 != 0) {
    if ((*(int *)(lVar73 + 0x50) != 0) ||
       (*(int *)(lVar73 + 0x2550) == 1 && 1 < *(int *)(lVar73 + 0x2554) + 1U)) {
      piVar61 = (int *)(*plVar83 + 0xa76a8);
      do {
        cVar85 = '\x01';
        bVar39 = (bool)ExclusiveMonitorPass(piVar61,0x10);
        if (bVar39) {
          *piVar61 = *piVar61 + 1;
          cVar85 = ExclusiveMonitorsStatus();
        }
      } while (cVar85 != '\0');
    }
  }
  iVar45 = *(int *)(*(long *)(param_2 + 8) + 0x48);
  local_c8 = (undefined8 ****)(puVar89 + 0x10);
  local_200 = SUB81(local_c8,0);
  uStack_1ff = (undefined1)((ulong)local_c8 >> 8);
  uStack_1fe = (undefined2)((ulong)local_c8 >> 0x10);
  uStack_1fc = (undefined2)((ulong)local_c8 >> 0x20);
  uStack_1fa = (undefined2)((ulong)local_c8 >> 0x30);
  pcVar76 = *(char **)(*plVar83 + 0x8b880);
  local_1f8 = SUB82(pcVar76,0);
  uStack_1f6 = (undefined2)((ulong)pcVar76 >> 0x10);
  uStack_1f4 = (undefined2)((ulong)pcVar76 >> 0x20);
  uStack_1f2 = (undefined2)((ulong)pcVar76 >> 0x30);
  local_a8 = *(char **)(*plVar83 + 0x8b8d8);
  if (pcVar76 == "SNPC_mnc_11_WherearenEvent_TakeOder") {
    uVar86 = 1;
  }
  else if (*pcVar76 == 'S') {
    uVar53 = 0;
    do {
      uVar72 = uVar53;
      uVar53 = uVar72;
      if (uVar72 == 0x80000) goto LAB_02a14aa8;
      if (pcVar76[uVar72 + 1] != "SNPC_mnc_11_WherearenEvent_TakeOder"[uVar72 + 1]) {
        uVar53 = 0;
        goto LAB_02a14aa8;
      }
      uVar53 = uVar72 + 1;
    } while (pcVar76[uVar72 + 1] != '\0');
    uVar53 = 1;
LAB_02a14aa8:
    uVar86 = (uint)(uVar72 < 0x80000) & (uint)uVar53;
  }
  else {
    uVar86 = 0;
  }
  local_c0 = "SNPC_doc_52_CommuneIsland";
  local_b0 = local_c8;
  FUN_006bd3a4(&local_200);
  pcVar76 = (char *)CONCAT26(uStack_1f2,CONCAT24(uStack_1f4,CONCAT22(uStack_1f6,local_1f8)));
  (*(code *)local_c8[3])(&local_c8);
  if (pcVar76 == local_c0) {
LAB_02a14b30:
    local_d8 = (undefined ****)(puVar89 + 0x10);
    local_d0 = "Doc_CommuneExpansionWalk";
    (*(code *)local_b0[3])(&local_b0);
    (*(code *)local_b0[3])(&local_b0);
    pcVar76 = local_a8;
    (*(code *)local_d8[3])(&local_d8);
    if (pcVar76 != local_d0) {
      uVar53 = 0;
      bVar39 = true;
      do {
        if (local_a8[uVar53] != local_d0[uVar53]) break;
        if (local_a8[uVar53] == '\0') {
          uVar58 = 1;
          if (bVar39) goto LAB_02a14d28;
          break;
        }
        bVar39 = uVar53 < 0x80000;
        uVar53 = uVar53 + 1;
      } while (uVar53 != 0x80001);
      goto LAB_02a14bc8;
    }
LAB_02a14d24:
    uVar58 = 1;
  }
  else {
    uVar53 = 0;
    bVar39 = true;
    do {
      cVar85 = *(char *)(CONCAT26(uStack_1f2,CONCAT24(uStack_1f4,CONCAT22(uStack_1f6,local_1f8))) +
                        uVar53);
      if (cVar85 != local_c0[uVar53]) break;
      if (cVar85 == '\0') {
        if (bVar39) goto LAB_02a14b30;
        break;
      }
      bVar39 = uVar53 < 0x80000;
      uVar53 = uVar53 + 1;
    } while (uVar53 != 0x80001);
LAB_02a14bc8:
    local_e0 = "SNPC_spn_11_Commune_LandExpansion";
    local_e8 = (undefined ****)(puVar89 + 0x10);
    (**(code **)(CONCAT26(uStack_1fa,
                          CONCAT24(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200))))
                + 0x18))(&local_200);
    (**(code **)(CONCAT26(uStack_1fa,
                          CONCAT24(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200))))
                + 0x18))(&local_200);
    pcVar76 = (char *)CONCAT26(uStack_1f2,CONCAT24(uStack_1f4,CONCAT22(uStack_1f6,local_1f8)));
    (*(code *)local_e8[3])(&local_e8);
    if (pcVar76 == local_e0) {
LAB_02a14c60:
      local_160 = "Root";
      local_168 = (undefined ****)(puVar89 + 0x10);
      (*(code *)local_b0[3])(&local_b0);
      (*(code *)local_b0[3])(&local_b0);
      pcVar76 = local_a8;
      (*(code *)local_168[3])(&local_168);
      if (pcVar76 == local_160) goto LAB_02a14d24;
      if (*local_a8 != *local_160) goto LAB_02a14d1c;
      if (*local_a8 == '\0') goto LAB_02a14d24;
      pcVar76 = local_a8 + 2;
      uVar53 = 0;
      do {
        uVar72 = uVar53;
        if (uVar72 == 0x80000) goto LAB_02a18ad8;
        if (pcVar76[uVar72 - 1] != local_160[uVar72 + 1]) {
          pcVar76 = (char *)0x0;
          goto LAB_02a18ad8;
        }
        if (pcVar76[uVar72 - 1] == '\0') goto LAB_02a14d14;
        if (pcVar76[uVar72] != local_160[uVar72 + 2]) {
          pcVar76 = (char *)0x0;
          uVar72 = uVar72 | 1;
          goto LAB_02a18ad8;
        }
        uVar53 = uVar72 + 2;
      } while (pcVar76[uVar72] != '\0');
      uVar72 = uVar72 + 1;
LAB_02a14d14:
      pcVar76 = (char *)0x1;
LAB_02a18ad8:
      uVar58 = (uint)(uVar72 < 0x80000) & (uint)pcVar76;
    }
    else {
      uVar53 = 0;
      bVar39 = true;
      do {
        cVar85 = *(char *)(CONCAT26(uStack_1f2,CONCAT24(uStack_1f4,CONCAT22(uStack_1f6,local_1f8)))
                          + uVar53);
        if (cVar85 != local_e0[uVar53]) break;
        if (cVar85 == '\0') {
          if (bVar39) goto LAB_02a14c60;
          break;
        }
        bVar39 = uVar53 < 0x80000;
        uVar53 = uVar53 + 1;
      } while (uVar53 != 0x80001);
LAB_02a14d1c:
      uVar58 = 0;
    }
  }
LAB_02a14d28:
  local_c0 = "SNPC_rco_13_HotelTutorial";
  local_c8 = (undefined8 ****)(puVar89 + 0x10);
  (**(code **)(CONCAT26(uStack_1fa,
                        CONCAT24(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)))) +
              0x18))(&local_200);
  (**(code **)(CONCAT26(uStack_1fa,
                        CONCAT24(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200)))) +
              0x18))(&local_200);
  pcVar76 = (char *)CONCAT26(uStack_1f2,CONCAT24(uStack_1f4,CONCAT22(uStack_1f6,local_1f8)));
  (*(code *)local_c8[3])(&local_c8);
  if (pcVar76 == local_c0) {
LAB_02a14dc0:
    local_e0 = "Conv_Prepare";
    local_e8 = (undefined ****)(puVar89 + 0x10);
    (*(code *)local_b0[3])(&local_b0);
    (*(code *)local_b0[3])(&local_b0);
    pcVar76 = local_a8;
    (*(code *)local_e8[3])(&local_e8);
    if (pcVar76 == local_e0) {
      uVar64 = 1;
    }
    else if (*local_a8 == *local_e0) {
      if (*local_a8 == '\0') {
        uVar64 = 1;
      }
      else {
        pcVar76 = local_a8 + 2;
        uVar53 = 0;
        do {
          uVar72 = uVar53;
          if (uVar72 == 0x80000) goto LAB_02a14ecc;
          if (pcVar76[uVar72 - 1] != local_e0[uVar72 + 1]) {
            pcVar76 = (char *)0x0;
            goto LAB_02a14ecc;
          }
          if (pcVar76[uVar72 - 1] == '\0') goto LAB_02a14e78;
          if (pcVar76[uVar72] != local_e0[uVar72 + 2]) {
            pcVar76 = (char *)0x0;
            uVar72 = uVar72 | 1;
            goto LAB_02a14ecc;
          }
          uVar53 = uVar72 + 2;
        } while (pcVar76[uVar72] != '\0');
        uVar72 = uVar72 + 1;
LAB_02a14e78:
        pcVar76 = (char *)0x1;
LAB_02a14ecc:
        uVar64 = (uint)(uVar72 < 0x80000) & (uint)pcVar76;
      }
    }
    else {
      uVar64 = 0;
    }
  }
  else {
    uVar53 = 0;
    bVar39 = true;
    do {
      cVar85 = *(char *)(CONCAT26(uStack_1f2,CONCAT24(uStack_1f4,CONCAT22(uStack_1f6,local_1f8))) +
                        uVar53);
      if (cVar85 != local_c0[uVar53]) break;
      if (cVar85 == '\0') {
        if (bVar39) goto LAB_02a14dc0;
        break;
      }
      bVar39 = uVar53 < 0x80000;
      uVar53 = uVar53 + 1;
    } while (uVar53 != 0x80001);
    uVar64 = 0;
  }
  uVar64 = uVar86 | uVar58 | uVar64;
  if (iVar45 < 1) {
    uVar64 = 1;
  }
  if (*(char *)(param_1 + 0x1a0a4) == '\0') {
    if (uVar64 == 0) {
      (**(code **)(DAT_055f4f98 + 0x18))(&DAT_055f4f98);
      uVar48 = FUN_006bd550(DAT_055f4fa0,0);
      lVar73 = *plVar83;
      plVar62 = (long *)(lVar73 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
      if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
        puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
        if (puVar52 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
        }
        *(undefined2 *)puVar52 = 0;
        plVar68 = puVar52 + 2;
        *plVar68 = 0;
        *(undefined1 *)((long)puVar52 + 2) = 0;
        *(undefined4 *)((long)puVar52 + 4) = uVar48;
        *(undefined4 *)(puVar52 + 1) = 0x3f800000;
        puVar52[3] = 0;
        lVar75 = *plVar62;
        *plVar62 = (long)plVar68;
        puVar52[3] = plVar62;
        *plVar68 = lVar75;
        if (lVar75 != 0) {
          *(long **)(lVar75 + 8) = plVar68;
        }
        *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
      iVar45 = 1;
      goto LAB_02a14fdc;
    }
    iVar45 = 0;
  }
  else if (uVar64 == 0) {
    iVar45 = 1;
  }
  else {
    FUN_02a55844(&DAT_055f4f98,0);
    iVar45 = 0;
LAB_02a14fdc:
    *(char *)(param_1 + 0x1a0a4) = (char)iVar45;
  }
  lVar73 = *(long *)(param_1 + 0x3c0);
  if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
    uVar58 = 0;
    if (uVar86 != 0) {
      uVar58 = 0x50397c67 / uVar86;
    }
    uVar58 = 0x50397c67 - uVar58 * uVar86;
    uVar64 = uVar58;
    while (iVar46 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar64 << 3)), iVar46 != 0) {
      if (iVar46 == 0x50397c67) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
          *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      uVar65 = 0;
      if ((int)(uVar64 + 1) < (int)uVar86) {
        uVar65 = uVar64 + 1;
      }
      uVar64 = uVar65;
      if (uVar65 == uVar58) break;
    }
  }
  *(undefined4 *)(*(long *)(param_2 + 8) + 0x48) = 0;
  lVar73 = *(long *)(param_1 + 0x3c0);
  if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
    uVar58 = 0;
    if (uVar86 != 0) {
      uVar58 = 0x74eb4c6e / uVar86;
    }
    uVar58 = 0x74eb4c6e - uVar58 * uVar86;
    uVar64 = uVar58;
    while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar64 << 3)), iVar45 != 0) {
      if (iVar45 == 0x74eb4c6e) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
        if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) !=
            (uint)*(byte *)(*(long *)(param_2 + 8) + 8)) {
          *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) =
               (uint)*(byte *)(*(long *)(param_2 + 8) + 8);
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      uVar65 = 0;
      if ((int)(uVar64 + 1) < (int)uVar86) {
        uVar65 = uVar64 + 1;
      }
      uVar64 = uVar65;
      if (uVar65 == uVar58) break;
    }
  }
  if (*(char *)(param_1 + 0x1bc58) == '\0') {
    lVar73 = *plVar83;
    uVar86 = *(uint *)(lVar73 + 0x728);
    if (uVar86 == 0xffffffff) {
      lVar75 = 0;
    }
    else {
      if (*(uint *)(lVar73 + 0x770) <= uVar86) {
        uVar86 = 0;
      }
      lVar75 = *(long *)(lVar73 + 0x778) + (long)(int)uVar86 * 400;
    }
    uVar86 = *(uint *)(lVar73 + 0x72c);
    pcVar76 = (char *)0x0;
    if (lVar75 != 0) {
      pcVar76 = (char *)(lVar75 + 8);
    }
    if (uVar86 == 0xffffffff) goto LAB_02a15244;
LAB_02a151f4:
    if (*(uint *)(lVar73 + 0x770) <= uVar86) {
      uVar86 = 0;
    }
    lVar75 = *(long *)(lVar73 + 0x778) + (long)(int)uVar86 * 400;
  }
  else {
    lVar73 = *plVar83;
    iVar45 = *(int *)(lVar73 + 0x7c0);
    if (iVar45 == 0) {
      lVar75 = FUN_029993c0(lVar73 + 0x7c8,param_1 + 0x1bc64,2);
      lVar73 = *plVar83;
      iVar45 = *(int *)(lVar73 + 0x7c0);
LAB_02a1519c:
      pcVar76 = (char *)0x0;
      if (lVar75 != 0) {
        pcVar76 = (char *)(lVar75 + 8);
      }
      if (iVar45 == 0) {
        lVar75 = FUN_029993c0(lVar73 + 0x7c8,param_1 + 0x1bc64,4);
        lVar73 = *plVar83;
      }
      else {
        if (iVar45 == -1) goto LAB_02a15238;
        uVar86 = iVar45 - 1;
        if (*(uint *)(lVar73 + 0x2e70) <= uVar86) {
          uVar86 = 0;
        }
        lVar75 = *(long *)(*(long *)(lVar73 + 0x2e78) + (long)(int)uVar86 * 0x228 + 0x128);
      }
    }
    else {
      if (iVar45 != -1) {
        uVar86 = iVar45 - 1;
        if (*(uint *)(lVar73 + 0x2e70) <= uVar86) {
          uVar86 = 0;
        }
        lVar75 = *(long *)(*(long *)(lVar73 + 0x2e78) + (long)(int)uVar86 * 0x228 + 0x28);
        goto LAB_02a1519c;
      }
      uVar86 = *(uint *)(lVar73 + 0x728);
      if (uVar86 == 0xffffffff) {
        lVar75 = 0;
      }
      else {
        if (*(uint *)(lVar73 + 0x770) <= uVar86) {
          uVar86 = 0;
        }
        lVar75 = *(long *)(lVar73 + 0x778) + (long)(int)uVar86 * 400;
      }
      pcVar76 = (char *)0x0;
      if (lVar75 != 0) {
        pcVar76 = (char *)(lVar75 + 8);
      }
LAB_02a15238:
      uVar86 = *(uint *)(lVar73 + 0x72c);
      if (uVar86 != 0xffffffff) goto LAB_02a151f4;
LAB_02a15244:
      lVar75 = 0;
    }
  }
  uVar86 = *(uint *)(FUN_0011e5e0 + lVar73);
  if (uVar86 == 0xffffffff) {
    lVar73 = 0;
    if (lVar75 == 0) goto LAB_02a15284;
LAB_02a152b0:
    iVar45 = *(int *)(param_1 + 0xc);
    if ((iVar45 < 1) && (*(int *)(param_1 + 0xc) = iVar45 + 1, iVar45 < 0)) goto LAB_02a152a0;
    fVar91 = 1.0;
    if (pcVar76 == (char *)0x0) {
      lVar87 = 0;
      uVar86 = 0xffffffff;
    }
    else {
      uVar86 = *(uint *)(pcVar76 + 0x20);
      if ((int)uVar86 < 0) {
        plVar62 = (long *)(pcVar76 + 0x18);
        uVar86 = 0;
        if (pcVar76[0x30] < '\x01') {
          uVar86 = *(uint *)(pcVar76 + 4);
        }
      }
      else {
        plVar62 = (long *)(pcVar76 + 0x28);
      }
      lVar87 = *plVar62;
      if (*pcVar76 != '\0') {
        fVar91 = (float)(int)(0xab - (uint)(byte)pcVar76[0x118]) / 171.0;
      }
    }
    if (lVar75 == 0) {
      lVar88 = 0;
      iVar45 = -1;
joined_r0x02a1535c:
      if (lVar73 != 0) goto LAB_02a15340;
LAB_02a15360:
      local_250 = 0;
      iVar46 = -1;
    }
    else {
      iVar45 = *(int *)(lVar75 + 0x28);
      if (iVar45 < 0) {
        lVar88 = *(long *)(lVar75 + 0x20);
        iVar45 = 0;
        if (*(char *)(lVar75 + 0x38) < '\x01') {
          iVar45 = *(int *)(lVar75 + 0xc);
        }
        goto joined_r0x02a1535c;
      }
      lVar88 = *(long *)(lVar75 + 0x30);
      if (lVar73 == 0) goto LAB_02a15360;
LAB_02a15340:
      iVar46 = *(int *)(lVar73 + 0x28);
      if (iVar46 < 0) {
        iVar46 = *(int *)(lVar73 + 0x14);
        local_250 = *(long *)(lVar73 + 0x20);
      }
      else {
        local_250 = *(long *)(lVar73 + 0x30);
      }
    }
  }
  else {
    if (*(uint *)(lVar73 + 0x11e608) <= uVar86) {
      uVar86 = 0;
    }
    lVar73 = *(long *)(lVar73 + 0x11e610) + (long)(int)uVar86 * 0x80;
    if (lVar75 != 0) goto LAB_02a152b0;
LAB_02a15284:
    if ((pcVar76 != (char *)0x0) || (lVar73 != 0)) goto LAB_02a152b0;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
LAB_02a152a0:
    local_250 = 0;
    fVar91 = 1.0;
    lVar88 = 0;
    lVar87 = 0;
    iVar46 = -1;
    iVar45 = -1;
    uVar86 = 0xffffffff;
  }
  if ((uVar9 == 1) && (iVar50 == 0)) {
    iVar45 = -1;
    iVar50 = -1;
    uVar58 = 0xffffffff;
  }
  else {
    uVar58 = 0;
    if (uVar86 != 99999 && -1 < (int)uVar86) {
      uVar58 = uVar86;
    }
    iVar50 = 0;
    if (iVar45 != 99999 && -1 < iVar45) {
      iVar50 = iVar45;
    }
    iVar45 = 0;
    if (iVar46 != 99999 && -1 < iVar46) {
      iVar45 = iVar46;
    }
  }
  lVar73 = *(long *)(param_1 + 0x3c0);
  if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
    uVar64 = 0;
    if (uVar86 != 0) {
      uVar64 = 0xa3af6beb / uVar86;
    }
    uVar64 = 0xa3af6beb - uVar64 * uVar86;
    uVar65 = uVar64;
    do {
      iVar46 = *(int *)(lVar73 + (-(ulong)(uVar65 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar65 << 3
                                 ));
      if (iVar46 == -0x5c509415) {
        lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar65 * 8 + 4);
        if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != uVar58) {
          *(uint *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = uVar58;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
          lVar73 = *(long *)(param_1 + 0x3c0);
          if (lVar73 == 0) goto LAB_02a154f8;
          uVar86 = *(uint *)(param_1 + 0x3cc);
        }
        break;
      }
      if (iVar46 == 0) break;
      uVar66 = 0;
      if ((int)(uVar65 + 1) < (int)uVar86) {
        uVar66 = uVar65 + 1;
      }
      uVar65 = uVar66;
    } while (uVar66 != uVar64);
    if (uVar86 != 0) {
      uVar64 = 0;
      if (uVar86 != 0) {
        uVar64 = 0xa0c83f77 / uVar86;
      }
      uVar64 = 0xa0c83f77 - uVar64 * uVar86;
      uVar65 = uVar64;
      do {
        iVar46 = *(int *)(lVar73 + (-(ulong)(uVar65 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar65 << 3));
        if (iVar46 == -0x5f37c089) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar65 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar50) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar50;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        if (iVar46 == 0) break;
        uVar66 = 0;
        if ((int)(uVar65 + 1) < (int)uVar86) {
          uVar66 = uVar65 + 1;
        }
        uVar65 = uVar66;
      } while (uVar66 != uVar64);
    }
  }
LAB_02a154f8:
  uVar86 = 0;
  while( true ) {
    while (uVar64 = uVar86, uVar64 == 0) {
      uVar86 = 1;
    }
    if (uVar64 == 6) break;
    local_200 = (undefined1)uVar64;
    uStack_1ff = (undefined1)(uVar64 >> 8);
    uStack_1fe = (undefined2)(uVar64 >> 0x10);
    uVar53 = (ulong)uVar64;
    piVar61 = (int *)(*(long *)(param_2 + 8) + 0x9c);
    piVar4 = (int *)(*(long *)(param_2 + 8) + 0xc4);
    if (5 < uVar64) {
      uVar53 = 0;
    }
    piVar6 = piVar61 + uVar64;
    if (9 < uVar64) {
      piVar6 = piVar61;
    }
    piVar61 = piVar4 + uVar64;
    if (9 < uVar64) {
      piVar61 = piVar4;
    }
    iVar46 = (*piVar6 - *piVar61) + *(int *)(param_1 + 0x1a0a8 + uVar53 * 4);
    uVar86 = uVar64;
    if (5 < uVar64) {
      uVar86 = 0;
    }
    uVar86 = (&DAT_0417e4c4)[(int)uVar86];
    if (((uVar86 != 0) && (lVar73 = *(long *)(param_1 + 0x3c0), lVar73 != 0)) &&
       (uVar65 = *(uint *)(param_1 + 0x3cc), uVar65 != 0)) {
      uVar66 = 0;
      if (uVar65 != 0) {
        uVar66 = uVar86 / uVar65;
      }
      uVar66 = uVar86 - uVar66 * uVar65;
      uVar30 = uVar66;
      do {
        uVar12 = *(uint *)(lVar73 + (-(ulong)(uVar30 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar30 << 3));
        if (uVar12 == uVar86) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar30 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar46) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar46;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        if (uVar12 == 0) break;
        uVar12 = 0;
        if ((int)(uVar30 + 1) < (int)uVar65) {
          uVar12 = uVar30 + 1;
        }
        uVar30 = uVar12;
      } while (uVar12 != uVar66);
    }
    uVar53 = (ulong)uVar64;
    if (5 < uVar64) {
      uVar53 = 0;
    }
    *(int *)(param_1 + 0x1a0a8 + uVar53 * 4) = iVar46;
    uVar86 = 6;
    if ((int)uVar64 < 6) {
      uVar86 = uVar64 + 1;
    }
  }
  lVar73 = *(long *)(param_2 + 0x10);
  *(bool *)lVar73 = 0 < (int)uVar58 || 0 < iVar50;
  *(uint *)(lVar73 + 4) = uVar58;
  *(int *)(lVar73 + 8) = iVar50;
  if (uVar58 != *(uint *)(param_1 + 0x1a0c0) || bVar43) {
    FUN_0074fda4(&local_200,"AudioFtr_%03d",uVar58 & ((int)uVar58 >> 0x1f ^ 0xffffffffU));
    lVar73 = SUB168(SEXT816((long)(*(long *)PTR_DAT_04bb29d0 *
                                   (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                                   (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5)) *
                    SEXT816(-0x20c49ba5e353f7cf),8);
    (**(code **)(CONCAT26(uStack_1fa,
                          CONCAT24(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200))))
                + 0x18))(&local_200);
    uVar48 = FUN_006bd550(CONCAT26(uStack_1f2,CONCAT24(uStack_1f4,CONCAT22(uStack_1f6,local_1f8))),0
                         );
    FUN_03f165ac(param_1 + 0x2a8,uVar48,((lVar73 >> 7) - (lVar73 >> 0x3f)) + lVar87);
  }
  if (iVar50 != *(int *)(param_1 + 0x1a0c4) || bVar37 && bVar36) {
    lVar73 = SUB168(SEXT816((long)(*(long *)PTR_DAT_04bb29d0 *
                                   (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                                   (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5)) *
                    SEXT816(-0x20c49ba5e353f7cf),8);
    uVar48 = FUN_006bd550("MusicBox",0);
    FUN_03f165ac(param_1 + 0x2a8,uVar48,((lVar73 >> 7) - (lVar73 >> 0x3f)) + lVar88);
  }
  lVar73 = *(long *)(param_1 + 0x3c0);
  if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
    uVar64 = 0;
    if (uVar86 != 0) {
      uVar64 = 0x77cba58 / uVar86;
    }
    uVar64 = 0x77cba58 - uVar64 * uVar86;
    uVar65 = uVar64;
    while (iVar46 = *(int *)(lVar73 + (-(ulong)(uVar65 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar65 << 3)), iVar46 != 0) {
      if (iVar46 == 0x77cba58) {
        lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar65 * 8 + 4);
        if (*(float *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != fVar91) {
          *(float *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = fVar91;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
          lVar73 = *(long *)(param_1 + 0x3c0);
        }
        break;
      }
      uVar66 = 0;
      if ((int)(uVar65 + 1) < (int)uVar86) {
        uVar66 = uVar65 + 1;
      }
      uVar65 = uVar66;
      if (uVar66 == uVar64) break;
    }
  }
  *(uint *)(param_1 + 0x1a0c0) = uVar58;
  *(int *)(param_1 + 0x1a0c4) = iVar50;
  if (iVar45 == -1) {
    if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
      uVar58 = 0;
      if (uVar86 != 0) {
        uVar58 = 0xae369f5a / uVar86;
      }
      uVar58 = 0xae369f5a - uVar58 * uVar86;
      uVar64 = uVar58;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar64 << 3));
        if (iVar45 == -0x51c960a6) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0;
            iVar50 = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            goto LAB_02a15998;
          }
          break;
        }
        iVar50 = 0;
        if (iVar45 == 0) goto LAB_02a15998;
        uVar65 = 0;
        if ((int)(uVar64 + 1) < (int)uVar86) {
          uVar65 = uVar64 + 1;
        }
        uVar64 = uVar65;
      } while (uVar65 != uVar58);
      iVar50 = 0;
      goto LAB_02a15998;
    }
  }
  else {
    if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
      uVar58 = 0;
      if (uVar86 != 0) {
        uVar58 = 0xae369f5a / uVar86;
      }
      uVar58 = 0xae369f5a - uVar58 * uVar86;
      uVar64 = uVar58;
      do {
        iVar50 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar64 << 3));
        if (iVar50 == -0x51c960a6) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        if (iVar50 == 0) break;
        uVar65 = 0;
        if ((int)(uVar64 + 1) < (int)uVar86) {
          uVar65 = uVar64 + 1;
        }
        uVar64 = uVar65;
      } while (uVar65 != uVar58);
    }
    if (iVar45 < 1) {
      iVar50 = 0;
    }
    else {
      iVar50 = 1;
      if (*(long *)PTR_DAT_04bb38d0 != 0) {
        uVar53 = FUN_008a6b24();
        iVar50 = 1;
        if ((uVar53 & 1) != 0) {
          iVar50 = 2;
        }
      }
      if (iVar45 != *(int *)(param_1 + 0x1a0cc) || bVar37 && bVar36) {
        lVar73 = SUB168(SEXT816((long)(*(long *)PTR_DAT_04bb29d0 *
                                       (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                                       (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5)) *
                        SEXT816(-0x20c49ba5e353f7cf),8);
        FUN_03f165ac(param_1 + 0x2a8,0x8229a40a,((lVar73 >> 7) - (lVar73 >> 0x3f)) + local_250);
      }
    }
LAB_02a15998:
    lVar73 = *(long *)(param_1 + 0x3c0);
    if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
      uVar58 = 0;
      if (uVar86 != 0) {
        uVar58 = 0x6676d4ce / uVar86;
      }
      uVar58 = 0x6676d4ce - uVar58 * uVar86;
      uVar64 = uVar58;
      while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar64 << 3)), iVar45 != 0) {
        if (iVar45 == 0x6676d4ce) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar50) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar50;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        uVar65 = 0;
        if ((int)(uVar64 + 1) < (int)uVar86) {
          uVar65 = uVar64 + 1;
        }
        uVar64 = uVar65;
        if (uVar65 == uVar58) break;
      }
    }
  }
  if (cVar55 != '\0') {
    iVar45 = *(int *)(param_1 + 0x1bc20) +
             (*(int *)(*(long *)(param_2 + 8) + 0x2c) - *(int *)(*(long *)(param_2 + 8) + 0x30));
    lVar73 = *(long *)(param_1 + 0x3c0);
    *(int *)(param_1 + 0x1bc20) = iVar45;
    if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
      uVar58 = 0;
      if (uVar86 != 0) {
        uVar58 = 0xe7ca5b92 / uVar86;
      }
      uVar58 = 0xe7ca5b92 - uVar58 * uVar86;
      uVar64 = uVar58;
      do {
        iVar50 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar64 << 3));
        if (iVar50 == -0x1835a46e) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        if (iVar50 == 0) break;
        uVar65 = 0;
        if ((int)(uVar64 + 1) < (int)uVar86) {
          uVar65 = uVar64 + 1;
        }
        uVar64 = uVar65;
      } while (uVar65 != uVar58);
    }
    lVar73 = *(long *)(param_2 + 8);
    if ((*(char *)(lVar73 + 0x20) != '\0') &&
       (iVar45 = *(int *)(lVar73 + 0x24), *(int *)(param_1 + 0x1bc18) != iVar45)) {
      lVar73 = *(long *)(param_1 + 0x3c0);
      if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
        uVar58 = 0;
        if (uVar86 != 0) {
          uVar58 = 0x9c474897 / uVar86;
        }
        uVar58 = 0x9c474897 - uVar58 * uVar86;
        uVar64 = uVar58;
        do {
          iVar50 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar64 << 3));
          if (iVar50 == -0x63b8b769) {
            lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
              *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            }
            break;
          }
          if (iVar50 == 0) break;
          uVar65 = 0;
          if ((int)(uVar64 + 1) < (int)uVar86) {
            uVar65 = uVar64 + 1;
          }
          uVar64 = uVar65;
        } while (uVar65 != uVar58);
      }
      FUN_03f165ac(param_1 + 0x2a8,0x593eebec,0);
      lVar73 = *(long *)(param_2 + 8);
    }
    if ((*(char *)(lVar73 + 0x21) != '\0') &&
       (iVar45 = *(int *)(lVar73 + 0x28), *(int *)(param_1 + 0x1bc1c) != iVar45)) {
      lVar73 = *(long *)(param_1 + 0x3c0);
      *(int *)(param_1 + 0x1bc1c) = iVar45;
      if ((lVar73 != 0) && (uVar86 = *(uint *)(param_1 + 0x3cc), uVar86 != 0)) {
        uVar58 = 0;
        if (uVar86 != 0) {
          uVar58 = 0x1d2f77a5 / uVar86;
        }
        uVar58 = 0x1d2f77a5 - uVar58 * uVar86;
        uVar64 = uVar58;
        while (iVar50 = *(int *)(lVar73 + (-(ulong)(uVar64 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar64 << 3)), iVar50 != 0) {
          if (iVar50 == 0x1d2f77a5) {
            lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar64 * 8 + 4);
            if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
              *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
              *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
            }
            break;
          }
          uVar65 = 0;
          if ((int)(uVar64 + 1) < (int)uVar86) {
            uVar65 = uVar64 + 1;
          }
          uVar64 = uVar65;
          if (uVar65 == uVar58) break;
        }
      }
      FUN_03f165ac(param_1 + 0x2a8,0x360c67d5,0);
    }
  }
  iVar45 = *(int *)(*plVar83 + 0x63804);
  if ((iVar45 == 2) &&
     ((uVar57 == 0xffffffff ||
      (((iVar45 = 2, uVar60 != uVar57 && (uVar10 != uVar57)) && (uVar59 != uVar57)))))) {
    if (*(long *)PTR_DAT_04bb2808 != 0) {
      lVar73 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8);
      iVar45 = 2;
      if ((lVar73 != 0) && (iVar45 = 2, *(int *)(lVar73 + 0x1b0) == 3)) {
        iVar45 = -1;
      }
      goto LAB_02a15ce0;
    }
    iVar45 = 2;
    lVar73 = *(long *)(param_1 + 0x3c0);
  }
  else {
LAB_02a15ce0:
    lVar73 = *(long *)(param_1 + 0x3c0);
  }
  if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0x14b4d595 / uVar59;
    }
    uVar60 = 0x14b4d595 - uVar60 * uVar59;
    uVar10 = uVar60;
    while (iVar50 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar10 << 3)), iVar50 != 0) {
      if (iVar50 == 0x14b4d595) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar45) {
          *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar45;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
      if (uVar86 == uVar60) break;
    }
  }
  *(int *)(param_1 + 0x1bc28) = iVar45;
  if (((cVar55 != '\0') && (lVar73 = *(long *)(param_1 + 0x3c0), lVar73 != 0)) &&
     (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0x99e0597 / uVar59;
    }
    uVar60 = 0x99e0597 - uVar60 * uVar59;
    uVar10 = uVar60;
    while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar10 << 3)), iVar45 != 0) {
      if (iVar45 == 0x99e0597) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
        if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != (uint)(byte)param_2[0x1c]) {
          *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = (uint)(byte)param_2[0x1c];
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
      if (uVar86 == uVar60) break;
    }
  }
  if (((bVar38 && bVar40) && (lVar73 = *(long *)(param_1 + 0x3c0), lVar73 != 0)) &&
     (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0x93119cb1 / uVar59;
    }
    uVar60 = 0x93119cb1 - uVar60 * uVar59;
    uVar10 = uVar60;
    do {
      iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3
                                 ));
      if (iVar45 == -0x6cee634f) {
        lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
          lVar73 = *(long *)(param_1 + 0x3c0);
          if (lVar73 == 0) goto LAB_02a15ef4;
          uVar59 = *(uint *)(param_1 + 0x3cc);
        }
        break;
      }
      if (iVar45 == 0) break;
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
    } while (uVar86 != uVar60);
    if (uVar59 != 0) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x24a4d70a / uVar59;
      }
      uVar60 = 0x24a4d70a - uVar60 * uVar59;
      uVar10 = uVar60;
      while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar10 << 3)), iVar45 != 0) {
        if (iVar45 == 0x24a4d70a) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
        if (uVar86 == uVar60) break;
      }
    }
  }
LAB_02a15ef4:
  lVar73 = *(long *)(param_2 + 8);
  if (*(char *)(lVar73 + 0xc168) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcb8) = 1;
    lVar73 = *(long *)(param_2 + 8);
  }
  if (*(char *)(lVar73 + 0xc169) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcb9) = 1;
    lVar73 = *(long *)(param_2 + 8);
  }
  *(undefined2 *)(lVar73 + 0xc168) = 0;
  if (*(char *)(param_1 + 0x1bcb8) != '\0' && (bVar38 && bVar40)) {
    uVar48 = FUN_006bd550(&DAT_040db2b3,0);
    lVar73 = *plVar83;
    plVar62 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar68;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
    lVar73 = *(long *)(param_1 + 0x3c0);
    if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x5366cd64 / uVar59;
      }
      uVar60 = 0x5366cd64 - uVar60 * uVar59;
      uVar10 = uVar60;
      while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar10 << 3)), iVar45 != 0) {
        if (iVar45 == 0x5366cd64) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 1) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 1;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
        if (uVar86 == uVar60) break;
      }
    }
    *(undefined1 *)(param_1 + 0x1bcb8) = 0;
  }
  if (*(char *)(param_1 + 0x1bcb9) != '\0') {
    if (iVar49 == 0 || uVar9 != 0) {
      if (bVar38 && bVar40) {
        lVar73 = *(long *)(param_1 + 0x3c0);
        if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0x5366cd64 / uVar59;
          }
          uVar60 = 0x5366cd64 - uVar60 * uVar59;
          uVar10 = uVar60;
          while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar10 << 3)), iVar45 != 0) {
            if (iVar45 == 0x5366cd64) {
              lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 0) {
                *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0;
                *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
              }
              break;
            }
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
            if (uVar86 == uVar60) break;
          }
        }
        *(undefined1 *)(param_1 + 0x1bcb9) = 0;
      }
    }
    else if (**(char **)(param_2 + 0x10) != '\0') {
      lVar73 = *(long *)(param_2 + 8);
      uStack_1fe = 0;
      uStack_1fc = 0;
      uStack_1fa = 0;
      local_1f8 = 0;
      uStack_1f6 = 0;
      uStack_1f4 = 0;
      plVar62 = (long *)(lVar73 + 0xc110);
      local_b0 = (undefined8 ****)((ulong)local_b0 & 0xffffffff00000000);
      nn::os::LockMutex((MutexType *)(lVar73 + 0xc198));
      if (*(int *)(lVar73 + 0xc120) < *(int *)(lVar73 + 0xc138)) {
        puVar52 = *(undefined8 **)(lVar73 + 0xc128);
        if (puVar52 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar73 + 0xc128) = *puVar52;
        }
        *(undefined8 *)((long)puVar52 + 0x14) = 0;
        *(undefined8 *)((long)puVar52 + 0x1c) = 0;
        *(undefined2 *)puVar52 = 1;
        *(undefined4 *)((long)puVar52 + 0x24) = 0;
        *(ulong *)((long)puVar52 + 2) =
             CONCAT26(uStack_1fa,
                      CONCAT24(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200))));
        puVar52[1] = CONCAT26(uStack_1f4,CONCAT24(uStack_1f6,CONCAT22(local_1f8,uStack_1fa)));
        *(undefined4 *)(puVar52 + 2) = local_b0._0_4_;
        lVar75 = *plVar62;
        *plVar62 = (long)(puVar52 + 3);
        puVar52[3] = lVar75;
        puVar52[4] = plVar62;
        if (lVar75 != 0) {
          *(undefined8 **)(lVar75 + 8) = puVar52 + 3;
        }
        *(int *)(lVar73 + 0xc120) = *(int *)(lVar73 + 0xc120) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar73 + 0xc198));
    }
  }
  lVar73 = *(long *)(param_2 + 8);
  pcVar76 = (char *)(lVar73 + 0xc16a);
  lVar75 = *plVar83;
  nn::os::LockMutex((MutexType *)(lVar75 + 0x89660));
  sVar14 = *(short *)(lVar75 + 0x895e0);
  sVar15 = *(short *)(lVar75 + 0x895e4);
  sVar16 = *(short *)(lVar75 + 0x895e6);
  sVar17 = *(short *)(lVar75 + 0x895f8);
  sVar18 = *(short *)(lVar75 + 0x895ea);
  sVar19 = *(short *)(lVar75 + 0x895f4);
  sVar20 = *(short *)(lVar75 + 0x895ec);
  sVar21 = *(short *)(lVar75 + 0x895ee);
  sVar22 = *(short *)(lVar75 + 0x895f0);
  sVar23 = *(short *)(lVar75 + 0x895f6);
  sVar24 = *(short *)(lVar75 + 0x895f2);
  iVar45 = *(int *)(lVar75 + 0x89620);
  sVar25 = *(short *)(lVar75 + 0x895fa);
  sVar26 = *(short *)(lVar75 + 0x895fc);
  sVar27 = *(short *)(lVar75 + 0x895fe);
  sVar28 = *(short *)(lVar75 + 0x89600);
  sVar29 = *(short *)(lVar75 + 0x89602);
  iVar50 = *(int *)(lVar75 + 0x89630);
  nn::os::UnlockMutex((MutexType *)(lVar75 + 0x89660));
  iVar49 = *(int *)(param_1 + 0x1bcb4);
  if (*pcVar76 != '\0') {
    *(undefined1 *)(param_1 + 0x1bcbb) = 1;
  }
  if (*(char *)(lVar73 + 0xc16b) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcbc) = 1;
  }
  if ((*(char *)(param_1 + 0x1bcbb) != '\0') && (*(char *)(param_1 + 0x1bcbc) != '\0')) {
    *(undefined2 *)(param_1 + 0x1bcbb) = 0;
  }
  pcVar76[0] = '\0';
  pcVar76[1] = '\0';
  if (*(char *)(param_1 + 0x1bcbb) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcbb) = 0;
    local_1f0._0_4_ = 0x40;
    local_1ad = 0;
    local_1dc = 0;
    local_a8 = (char *)((long)&local_1f0 + 4);
    local_1f0._4_4_ = s_SystemBGM_NoFade_040786ad._0_4_;
    uStack_1e8._0_4_ = s_SystemBGM_NoFade_040786ad._4_4_;
    uStack_1e8._4_4_ = s_SystemBGM_NoFade_040786ad._8_4_;
    uStack_1e0 = s_SystemBGM_NoFade_040786ad._12_4_;
    puVar89 = PTR_DAT_04bb2bc0 + 0x10;
    local_200 = SUB81(puVar89,0);
    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
    local_1f8 = SUB82(local_a8,0);
    uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
    uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
    uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
    local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
    FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,0);
    *(undefined1 *)(param_1 + 0x1bcba) = 1;
  }
  plVar83 = (long *)PTR_DAT_04bb26a8;
  if (*(char *)(param_1 + 0x1bcbc) == '\0' || (iVar49 == 0 || iVar50 != 0)) {
    uVar59 = (uint)*(byte *)(param_1 + 0x1bcba);
    if (((*(byte *)(param_1 + 0x1bcba) == 0) || (uVar59 = 1, iVar45 == sVar18)) ||
       (iVar45 == sVar20)) goto LAB_02a164b8;
    if ((iVar45 == sVar21) || (iVar45 == sVar22)) {
    }
    else if (((iVar45 != sVar24) && (iVar45 != sVar19)) &&
            ((iVar45 != sVar23 &&
             (((((iVar45 != sVar17 && (iVar45 != sVar25)) && (iVar45 != sVar26)) &&
               ((iVar45 != sVar27 && (iVar45 != sVar28)))) && (iVar45 != sVar29)))))) {
      if (iVar45 == sVar14) {
        lVar73 = *(long *)(param_1 + 0x3c0);
        if ((lVar73 == 0) || (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 == 0)) {
          lVar75 = -1;
        }
        else {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0x4c4ee8bf / uVar59;
          }
          uVar60 = 0x4c4ee8bf - uVar60 * uVar59;
          lVar75 = -1;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == 0) break;
            if (iVar45 == 0x4c4ee8bf) {
              lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              break;
            }
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
        }
        uVar59 = *(uint *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4);
      }
      else {
        uVar59 = 0;
        if ((iVar45 != sVar15) && (iVar45 != sVar16)) {
          local_1ad = 0;
          local_1f0._0_4_ = 0x40;
          local_1dc = 0;
          local_a8 = (char *)((long)&local_1f0 + 4);
          local_1f0._4_4_ = s_SystemBGM_NoFade_040786ad._0_4_;
          uStack_1e8._0_4_ = s_SystemBGM_NoFade_040786ad._4_4_;
          uStack_1e8._4_4_ = s_SystemBGM_NoFade_040786ad._8_4_;
          uStack_1e0 = s_SystemBGM_NoFade_040786ad._12_4_;
          puVar89 = PTR_DAT_04bb2bc0 + 0x10;
          local_200 = SUB81(puVar89,0);
          uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
          uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
          uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
          uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
          local_1f8 = SUB82(local_a8,0);
          uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
          uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
          uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
          local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
          FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,1);
          uVar59 = 0;
          *(undefined1 *)(param_1 + 0x1bcba) = 0;
        }
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1bcbc) = 0;
    local_1f0._0_4_ = 0x40;
    local_1ad = 0;
    local_1dc = 0;
    local_a8 = (char *)((long)&local_1f0 + 4);
    local_1f0._4_4_ = s_SystemBGM_NoFade_040786ad._0_4_;
    uStack_1e8._0_4_ = s_SystemBGM_NoFade_040786ad._4_4_;
    uStack_1e8._4_4_ = s_SystemBGM_NoFade_040786ad._8_4_;
    uStack_1e0 = s_SystemBGM_NoFade_040786ad._12_4_;
    puVar89 = PTR_DAT_04bb2bc0 + 0x10;
    local_200 = SUB81(puVar89,0);
    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
    local_1f8 = SUB82(local_a8,0);
    uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
    uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
    uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
    local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
    FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,1);
    uVar59 = 0;
    *(undefined1 *)(param_1 + 0x1bcba) = 0;
LAB_02a164b8:
    plVar83 = (long *)PTR_DAT_04bb26a8;
  }
  lVar73 = *(long *)(param_1 + 0x3c0);
  if ((lVar73 != 0) && (uVar60 = *(uint *)(param_1 + 0x3cc), uVar60 != 0)) {
    uVar10 = 0;
    if (uVar60 != 0) {
      uVar10 = 0x4c4ee8bf / uVar60;
    }
    uVar10 = 0x4c4ee8bf - uVar10 * uVar60;
    uVar86 = uVar10;
    while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar86 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar86 << 3)), iVar45 != 0) {
      if (iVar45 == 0x4c4ee8bf) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar86 * 8 + 4);
        if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != uVar59) {
          *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = uVar59;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      uVar57 = 0;
      if ((int)(uVar86 + 1) < (int)uVar60) {
        uVar57 = uVar86 + 1;
      }
      uVar86 = uVar57;
      if (uVar57 == uVar10) break;
    }
  }
  lVar73 = *(long *)(param_2 + 8);
  pcVar76 = (char *)(lVar73 + 0xc16c);
  lVar75 = *plVar83;
  nn::os::LockMutex((MutexType *)(lVar75 + 0x89660));
  sVar14 = *(short *)(lVar75 + 0x895e0);
  sVar15 = *(short *)(lVar75 + 0x895e4);
  sVar16 = *(short *)(lVar75 + 0x895e6);
  sVar17 = *(short *)(lVar75 + 0x895f6);
  sVar18 = *(short *)(lVar75 + 0x895ea);
  sVar19 = *(short *)(lVar75 + 0x895f2);
  sVar20 = *(short *)(lVar75 + 0x895ec);
  sVar21 = *(short *)(lVar75 + 0x895ee);
  sVar22 = *(short *)(lVar75 + 0x895f0);
  sVar23 = *(short *)(lVar75 + 0x895f4);
  iVar45 = *(int *)(lVar75 + 0x89620);
  uVar13 = *(ushort *)(lVar75 + 0x89624);
  sVar24 = *(short *)(lVar75 + 0x895f8);
  sVar25 = *(short *)(lVar75 + 0x895fa);
  sVar26 = *(short *)(lVar75 + 0x895fc);
  sVar27 = *(short *)(lVar75 + 0x895fe);
  sVar28 = *(short *)(lVar75 + 0x89600);
  sVar29 = *(short *)(lVar75 + 0x89602);
  local_c8 = (undefined8 ****)CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar75 + 0x89630));
  nn::os::UnlockMutex((MutexType *)(lVar75 + 0x89660));
  if (*pcVar76 != '\0') {
    *(undefined1 *)(param_1 + 0x1bcbe) = 1;
  }
  if (*(char *)(lVar73 + 0xc16d) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcbf) = 1;
  }
  if ((*(char *)(param_1 + 0x1bcbe) != '\0') && (*(char *)(param_1 + 0x1bcbf) != '\0')) {
    *(undefined2 *)(param_1 + 0x1bcbe) = 0;
  }
  pcVar76[0] = '\0';
  pcVar76[1] = '\0';
  if (*(char *)(param_1 + 0x1bcbe) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcbe) = 0;
    local_1f0._0_4_ = 0x40;
    local_1ad = 0;
    local_1dc = 0;
    local_a8 = (char *)((long)&local_1f0 + 4);
    local_1f0._4_4_ = s_SystemBGM_NoFade_040786ad._0_4_;
    uStack_1e8._0_4_ = s_SystemBGM_NoFade_040786ad._4_4_;
    uStack_1e8._4_4_ = s_SystemBGM_NoFade_040786ad._8_4_;
    uStack_1e0 = s_SystemBGM_NoFade_040786ad._12_4_;
    puVar89 = PTR_DAT_04bb2bc0 + 0x10;
    local_200 = SUB81(puVar89,0);
    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
    local_1f8 = SUB82(local_a8,0);
    uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
    uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
    uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
    local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
    FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,0);
    *(undefined1 *)(param_1 + 0x1bcbd) = 1;
  }
  if (((*(char *)(param_1 + 0x1bcbf) != '\0') && (*(int *)(param_1 + 0x1bcb4) != (int)local_c8)) &&
     (((int)local_c8 == 4 || ((int)local_c8 == 1)))) {
    *(undefined1 *)(param_1 + 0x1bcbf) = 0;
    local_1f0._0_4_ = 0x40;
    local_1ad = 0;
    local_1dc = 0;
    local_a8 = (char *)((long)&local_1f0 + 4);
    local_1f0._4_4_ = s_SystemBGM_NoFade_040786ad._0_4_;
    uStack_1e8._0_4_ = s_SystemBGM_NoFade_040786ad._4_4_;
    uStack_1e8._4_4_ = s_SystemBGM_NoFade_040786ad._8_4_;
    uStack_1e0 = s_SystemBGM_NoFade_040786ad._12_4_;
    puVar89 = PTR_DAT_04bb2bc0 + 0x10;
    local_200 = SUB81(puVar89,0);
    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
    local_1f8 = SUB82(local_a8,0);
    uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
    uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
    uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
    local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
    FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,1);
    *(undefined1 *)(param_1 + 0x1bcbd) = 0;
  }
  puVar89 = PTR_DAT_04bb26a8;
  if (*(char *)(param_1 + 0x1bcbd) == '\0') {
    iVar50 = 0;
  }
  else {
    iVar50 = 1;
    if (((((iVar45 != sVar18) && (iVar45 != sVar20)) && (iVar45 != sVar21)) &&
        ((iVar50 = 2, iVar45 != sVar22 && (iVar45 != sVar19)))) &&
       (((((iVar45 != sVar23 && ((iVar45 != sVar17 && (iVar45 != sVar24)))) && (iVar45 != sVar25))
         && (((iVar45 != sVar26 && (iVar45 != sVar27)) && (iVar45 != sVar28)))) &&
        (iVar45 != sVar29)))) {
      if (iVar45 == sVar14) {
        lVar73 = *(long *)(param_1 + 0x3c0);
        if ((lVar73 == 0) || (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 == 0)) {
          lVar75 = -1;
        }
        else {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0x6ba0e2ed / uVar59;
          }
          uVar60 = 0x6ba0e2ed - uVar60 * uVar59;
          lVar75 = -1;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == 0) break;
            if (iVar45 == 0x6ba0e2ed) {
              lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              break;
            }
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
        }
        iVar50 = *(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4);
      }
      else {
        iVar50 = 0;
        if ((iVar45 != sVar15) && (iVar45 != sVar16)) {
          local_1ad = 0;
          local_1f0._0_4_ = 0x40;
          local_1dc = 0;
          local_a8 = (char *)((long)&local_1f0 + 4);
          local_1f0._4_4_ = s_SystemBGM_NoFade_040786ad._0_4_;
          uStack_1e8._0_4_ = s_SystemBGM_NoFade_040786ad._4_4_;
          uStack_1e8._4_4_ = s_SystemBGM_NoFade_040786ad._8_4_;
          uStack_1e0 = s_SystemBGM_NoFade_040786ad._12_4_;
          puVar70 = PTR_DAT_04bb2bc0 + 0x10;
          local_200 = SUB81(puVar70,0);
          uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
          uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
          uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
          uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
          local_1f8 = SUB82(local_a8,0);
          uStack_1f6 = (undefined2)((ulong)local_a8 >> 0x10);
          uStack_1f4 = (undefined2)((ulong)local_a8 >> 0x20);
          uStack_1f2 = (undefined2)((ulong)local_a8 >> 0x30);
          local_b0 = (undefined8 ****)(PTR_DAT_04bb2020 + 0x10);
          FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_b0,1);
          iVar50 = 0;
          *(undefined1 *)(param_1 + 0x1bcbd) = 0;
        }
      }
    }
    if ((uVar13 & 0xff) != 0) {
      puVar70 = PTR_DAT_04bb2020 + 0x10;
      local_200 = SUB81(puVar70,0);
      uStack_1ff = (undefined1)((ulong)puVar70 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar70 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar70 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar70 >> 0x30);
      local_1f8 = 0x86ad;
      uStack_1f6 = 0x407;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,1);
    }
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    iVar50 = 0;
  }
  lVar73 = *(long *)(param_1 + 0x3c0);
  if (lVar73 != 0) {
    uVar59 = *(uint *)(param_1 + 0x3cc);
    if (uVar59 != 0) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x6ba0e2ed / uVar59;
      }
      uVar60 = 0x6ba0e2ed - uVar60 * uVar59;
      uVar10 = uVar60;
      while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar10 << 3)), iVar45 != 0) {
        if (iVar45 == 0x6ba0e2ed) {
          lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != iVar50) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = iVar50;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
            lVar73 = *(long *)(param_1 + 0x3c0);
            if (lVar73 == 0) goto LAB_02a16af8;
            uVar59 = *(uint *)(param_1 + 0x3cc);
          }
          break;
        }
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
        if (uVar86 == uVar60) break;
      }
    }
    if (uVar59 != 0) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x655761bd / uVar59;
      }
      uVar60 = 0x655761bd - uVar60 * uVar59;
      uVar10 = uVar60;
      while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar10 << 3)), iVar45 != 0) {
        if (iVar45 == 0x655761bd) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
          if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != (uint)(param_2[0x28] == '\0')) {
            *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = (uint)(param_2[0x28] == '\0');
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
        if (uVar86 == uVar60) break;
      }
    }
  }
LAB_02a16af8:
  lVar73 = *(long *)(param_2 + 8);
  pcVar76 = *(char **)(param_2 + 0x10);
  plVar83 = (long *)(lVar73 + 0xc110);
  lVar75 = *(long *)puVar89;
  nn::os::LockMutex((MutexType *)(lVar75 + 0x89660));
  sVar14 = *(short *)(lVar75 + 0x895e4);
  sVar15 = *(short *)(lVar75 + 0x895e6);
  sVar16 = *(short *)(lVar75 + 0x895e8);
  iVar45 = *(int *)(lVar75 + 0x89620);
  iVar50 = *(int *)(lVar75 + 0x89630);
  nn::os::UnlockMutex((MutexType *)(lVar75 + 0x89660));
  bVar39 = *(int *)(param_1 + 0x1bcb4) != 2;
  iVar49 = *(int *)(param_1 + 0x1bcb4);
  if (*(char *)(lVar73 + 0xc172) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc4) = 1;
  }
  if (*(char *)(lVar73 + 0xc173) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc5) = 1;
  }
  lVar75 = *(long *)(param_1 + 0x3c0);
  if ((lVar75 == 0) || (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 == 0)) {
    iVar46 = -1;
  }
  else {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0xb3032e98 / uVar59;
    }
    uVar60 = 0xb3032e98 - uVar60 * uVar59;
    iVar46 = -1;
    uVar10 = uVar60;
    do {
      iVar47 = *(int *)(lVar75 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3
                                 ));
      if (iVar47 == -0x4cfcd168) {
        iVar46 = *(int *)(lVar75 + (long)(int)uVar10 * 8 + 4);
        break;
      }
      if (iVar47 == 0) break;
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
    } while (uVar86 != uVar60);
  }
  iVar46 = *(int *)(*(long *)(param_1 + 0x3a8) + (long)iVar46 * 4);
  *(undefined2 *)(lVar73 + 0xc172) = 0;
  if (0 < iVar46) {
    *(char *)(param_1 + 0x1bccc) = (char)iVar46;
  }
  if (*(char *)(param_1 + 0x1bcc4) != '\0' && (bVar39 && iVar50 == 2)) {
    uVar48 = FUN_006bd550(&DAT_040db2b3,0);
    lVar75 = *(long *)PTR_DAT_04bb26a8;
    plVar62 = (long *)(lVar75 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar75 + 0xb3b58));
    if (*(int *)(lVar75 + 0xb3b88) < *(int *)(lVar75 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar75 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar75 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar87 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar87;
      if (lVar87 != 0) {
        *(long **)(lVar87 + 8) = plVar68;
      }
      *(int *)(lVar75 + 0xb3b88) = *(int *)(lVar75 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar75 + 0xb3b58));
    *(undefined1 *)(param_1 + 0x1bccc) = 1;
    *(undefined1 *)(param_1 + 0x1bcc4) = 0;
  }
  if (*(char *)(param_1 + 0x1bcc5) != '\0') {
    if (iVar49 == 0 || iVar50 != 0) {
      if (bVar39 && iVar50 == 2) {
        *(undefined1 *)(param_1 + 0x1bccc) = 0;
        *(undefined1 *)(param_1 + 0x1bcc5) = 0;
      }
    }
    else if (*pcVar76 != '\0') {
      uStack_1fe = 0;
      uStack_1fc = 0;
      uStack_1fa = 0;
      local_1f8 = 0;
      uStack_1f6 = 0;
      uStack_1f4 = 0;
      local_b0 = (undefined8 ****)((ulong)local_b0 & 0xffffffff00000000);
      nn::os::LockMutex((MutexType *)(lVar73 + 0xc198));
      if (*(int *)(lVar73 + 0xc120) < *(int *)(lVar73 + 0xc138)) {
        puVar52 = *(undefined8 **)(lVar73 + 0xc128);
        if (puVar52 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar73 + 0xc128) = *puVar52;
        }
        *(undefined8 *)((long)puVar52 + 0x14) = 0;
        *(undefined8 *)((long)puVar52 + 0x1c) = 0;
        *(undefined2 *)puVar52 = 1;
        *(undefined4 *)((long)puVar52 + 0x24) = 0;
        *(ulong *)((long)puVar52 + 2) =
             CONCAT26(uStack_1fa,
                      CONCAT24(uStack_1fc,CONCAT22(uStack_1fe,CONCAT11(uStack_1ff,local_200))));
        puVar52[1] = CONCAT26(uStack_1f4,CONCAT24(uStack_1f6,CONCAT22(local_1f8,uStack_1fa)));
        *(undefined4 *)(puVar52 + 2) = local_b0._0_4_;
        lVar75 = *plVar83;
        *plVar83 = (long)(puVar52 + 3);
        puVar52[3] = lVar75;
        puVar52[4] = plVar83;
        if (lVar75 != 0) {
          *(undefined8 **)(lVar75 + 8) = puVar52 + 3;
        }
        *(int *)(lVar73 + 0xc120) = *(int *)(lVar73 + 0xc120) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar73 + 0xc198));
    }
  }
  puVar89 = PTR_DAT_04bb26a8;
  lVar73 = *(long *)(param_1 + 0x3c0);
  iVar50 = 0;
  if ((iVar45 != sVar16 && iVar45 != sVar15) && iVar45 != sVar14) {
    iVar50 = (int)*(char *)(param_1 + 0x1bccc);
  }
  if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0xb3032e98 / uVar59;
    }
    uVar60 = 0xb3032e98 - uVar60 * uVar59;
    uVar10 = uVar60;
    do {
      iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3
                                 ));
      if (iVar45 == -0x4cfcd168) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar50) {
          *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar50;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      if (iVar45 == 0) break;
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
    } while (uVar86 != uVar60);
  }
  lVar73 = *(long *)(param_2 + 8);
  if (*(char *)(lVar73 + 0xc174) != '\0') {
    *(undefined1 *)(param_1 + 0x1bcc6) = 1;
    lVar73 = *(long *)(param_2 + 8);
  }
  *(undefined1 *)(lVar73 + 0xc174) = 0;
  if (*(char *)(param_1 + 0x1bcc6) != '\0' && (bVar38 && bVar40)) {
    uVar48 = FUN_006bd550(&DAT_040db2b3,0);
    lVar73 = *(long *)puVar89;
    plVar83 = (long *)(lVar73 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar73 + 0xb3b58));
    if (*(int *)(lVar73 + 0xb3b88) < *(int *)(lVar73 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar73 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar73 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      plVar62 = puVar52 + 2;
      *plVar62 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      puVar52[3] = 0;
      lVar75 = *plVar83;
      *plVar83 = (long)plVar62;
      puVar52[3] = plVar83;
      *plVar62 = lVar75;
      if (lVar75 != 0) {
        *(long **)(lVar75 + 8) = plVar62;
      }
      *(int *)(lVar73 + 0xb3b88) = *(int *)(lVar73 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar73 + 0xb3b58));
    *(undefined1 *)(param_1 + 0x1bcc6) = 0;
  }
  lVar73 = *(long *)(param_2 + 0x10);
  lVar75 = *(long *)puVar89;
  nn::os::LockMutex((MutexType *)(lVar75 + 0x89660));
  iVar50 = *(int *)(lVar75 + 0x89634);
  sVar14 = *(short *)(lVar75 + 0x895e4);
  sVar15 = *(short *)(lVar75 + 0x895e6);
  sVar16 = *(short *)(lVar75 + 0x895e8);
  iVar49 = *(int *)(lVar75 + 0x89620);
  uVar13 = *(ushort *)(lVar75 + 0x89624);
  uVar59 = *(uint *)(lVar75 + 0x8962c);
  iVar45 = *(int *)(lVar75 + 0x89630);
  nn::os::UnlockMutex((MutexType *)(lVar75 + 0x89660));
  puVar89 = PTR_DAT_04bc3a48;
  iVar46 = *(int *)(param_1 + 0x1bcb4);
  iVar47 = *(int *)(param_1 + 0x1bcb4);
  lVar75 = *(long *)PTR_DAT_04bb27f8;
  if (lVar75 == 0) {
    uVar56 = 0;
  }
  else {
    if (*(int *)(lVar75 + 0x14) == 2) {
      uVar56 = 1;
    }
    else {
      if (iVar45 == 0) {
        if (*(int *)(lVar75 + 0x14) != 3) goto LAB_02a17000;
      }
      else if ((iVar45 != 4) && (iVar45 != 1)) {
LAB_02a17000:
        uVar56 = (ushort)(*(char *)(param_1 + 0x1bccf) != '\0');
        goto LAB_02a1700c;
      }
      uVar56 = 0;
    }
LAB_02a1700c:
    *(char *)(param_1 + 0x1bccf) = (char)uVar56;
  }
  uVar5 = 0;
  if ((iVar49 != sVar14 && iVar49 != sVar15) && iVar49 != sVar16) {
    uVar5 = uVar56;
  }
  uVar56 = 0;
  if (*(ushort **)puVar89 != (ushort *)0x0) {
    uVar56 = **(ushort **)puVar89 & 1;
  }
  uVar5 = uVar5 & (uVar56 ^ 0xffff);
  if (*(long *)(param_1 + 0x48) == 0) {
    bVar38 = false;
  }
  else {
    bVar38 = 0.0 < *(float *)(*(long *)(param_1 + 0x48) + 0xb8);
  }
  cVar85 = *(char *)(param_1 + 0x1bccb);
  if (cVar85 == '\x02') {
    if (iVar45 == 0) {
      lVar75 = *(long *)PTR_DAT_04bb2720;
      if (lVar75 == 0) {
        puVar52 = &DAT_055c04a0;
      }
      else {
        puVar52 = &DAT_055c04a0;
        if (*(long *)(lVar75 + 0x330) != 0) {
          puVar52 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar75 + 0x338));
          iVar49 = FUN_006bd550(*puVar52,0);
          puVar52 = (undefined8 *)PTR_DAT_04bc3a88;
          if (iVar49 != 0x758f7eaf) {
            puVar52 = &DAT_055c04a0;
          }
        }
      }
      iVar49 = *(int *)(puVar52 + 7);
      if (((uVar59 ^ 0xffffffff) & 0xffff) == 0) {
LAB_02a1722c:
        if (iVar49 != 0x3411ee5c) {
          bVar40 = iVar49 == 0x11889761;
          goto LAB_02a17268;
        }
        bVar39 = false;
        bVar35 = false;
        bVar41 = false;
        bVar40 = true;
LAB_02a1740c:
        bVar42 = iVar49 == 0x617f19ef;
      }
      else {
        local_200 = 3;
        uStack_1ff = 0;
        uStack_1fe = 0;
        puVar7 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar59 & 0xffffffffU) * 8);
        if ((uVar59 & 0xff00) != 0) {
          puVar7 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar7 >> 3 & 1) == 0) goto LAB_02a1722c;
        bVar40 = true;
LAB_02a17268:
        if (iVar49 == -0x280cede1) {
          bVar39 = false;
          bVar41 = false;
          bVar35 = true;
          goto LAB_02a1740c;
        }
        bVar35 = iVar49 == -0x10e0fba8;
        if (iVar49 == 0x565b4aba) {
          bVar39 = false;
          bVar41 = true;
          goto LAB_02a1740c;
        }
        bVar41 = iVar49 == -0xbb9f562;
        bVar39 = true;
        if (((iVar49 == -0x7975b8e8) || (iVar49 == -0x17df00c3)) ||
           (bVar39 = iVar49 == -0x3e092032, iVar49 != -0x143208e5)) goto LAB_02a1740c;
        bVar42 = true;
      }
      cVar71 = '\0';
      if (((bVar35) || (bVar40)) || (bVar41)) goto LAB_02a17504;
      if (bVar38 && (!bVar39 && !bVar42)) goto LAB_02a1743c;
    }
    else if (bVar38) {
LAB_02a1743c:
      plVar83 = (long *)PTR_DAT_04bb26a8;
      if (uVar5 == 0) {
        if ((iVar45 == 3) && (2 < iVar50)) goto LAB_02a17500;
      }
      else if ((*(char *)(param_1 + 0x1a0a4) == '\0') && (iVar45 == 3)) {
        cVar71 = '\x01';
        goto LAB_02a17504;
      }
      goto LAB_02a17508;
    }
LAB_02a17500:
    cVar71 = '\0';
LAB_02a17504:
    plVar83 = (long *)PTR_DAT_04bb26a8;
    *(char *)(param_1 + 0x1bccb) = cVar71;
  }
  else if (cVar85 == '\x01') {
    if (iVar45 == 0) {
      lVar75 = *(long *)PTR_DAT_04bb2720;
      if (lVar75 == 0) {
        puVar52 = &DAT_055c04a0;
      }
      else {
        puVar52 = &DAT_055c04a0;
        if (*(long *)(lVar75 + 0x330) != 0) {
          puVar52 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar75 + 0x338));
          iVar50 = FUN_006bd550(*puVar52,0);
          puVar52 = (undefined8 *)PTR_DAT_04bc3a88;
          if (iVar50 != 0x758f7eaf) {
            puVar52 = &DAT_055c04a0;
          }
        }
      }
      iVar50 = *(int *)(puVar52 + 7);
      if (((uVar59 ^ 0xffffffff) & 0xffff) == 0) {
LAB_02a172f8:
        if (iVar50 != 0x3411ee5c) {
          bVar40 = iVar50 == 0x11889761;
          goto LAB_02a17334;
        }
        bVar39 = false;
        bVar35 = false;
        bVar41 = false;
        bVar40 = true;
LAB_02a174d0:
        bVar42 = iVar50 == 0x617f19ef;
      }
      else {
        local_200 = 3;
        uStack_1ff = 0;
        uStack_1fe = 0;
        puVar7 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar59 & 0xffffffffU) * 8);
        if ((uVar59 & 0xff00) != 0) {
          puVar7 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar7 >> 3 & 1) == 0) goto LAB_02a172f8;
        bVar40 = true;
LAB_02a17334:
        if (iVar50 == -0x280cede1) {
          bVar39 = false;
          bVar41 = false;
          bVar35 = true;
          goto LAB_02a174d0;
        }
        bVar35 = iVar50 == -0x10e0fba8;
        if (iVar50 == 0x565b4aba) {
          bVar39 = false;
          bVar41 = true;
          goto LAB_02a174d0;
        }
        bVar41 = iVar50 == -0xbb9f562;
        bVar39 = true;
        if (((iVar50 == -0x7975b8e8) || (iVar50 == -0x17df00c3)) ||
           (bVar39 = iVar50 == -0x3e092032, iVar50 != -0x143208e5)) goto LAB_02a174d0;
        bVar42 = true;
      }
      cVar71 = '\0';
      if (((bVar35) || (bVar40)) || (bVar41)) goto LAB_02a17504;
      if (!bVar38 || (bVar39 || bVar42)) goto LAB_02a17500;
    }
    else if (!bVar38) goto LAB_02a17500;
    uVar56 = 0;
    if (iVar45 != 4) {
      uVar56 = uVar5;
    }
    plVar83 = (long *)PTR_DAT_04bb26a8;
    if (uVar56 == 0) {
      cVar71 = (iVar45 == 4) << 1;
      goto LAB_02a17504;
    }
  }
  else {
    plVar83 = (long *)PTR_DAT_04bb26a8;
    if (((cVar85 == '\0') && (uVar5 != 0)) &&
       ((cVar71 = '\x01', *(char *)(param_1 + 0x1a0a4) == '\0' && iVar45 == 3 ||
        (cVar71 = '\x02', iVar45 == 2)))) goto LAB_02a17504;
  }
LAB_02a17508:
  if ((uVar13 & 0xff) == 0) {
    if (*(char *)(param_1 + 0x1bccb) < '\x01' || (iVar47 == 0 || iVar45 != 0)) {
      if ('\0' < cVar85 && *(char *)(param_1 + 0x1bccb) == '\0' || iVar46 != 2 && iVar45 == 2) {
        puVar89 = PTR_DAT_04bb2020 + 0x10;
        local_200 = SUB81(puVar89,0);
        uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
        uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
        uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
        uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
        local_1f8 = 0xad4d;
        uStack_1f6 = 0x40e;
        uStack_1f4 = 0;
        uStack_1f2 = 0;
        FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,1);
      }
    }
    else {
      puVar89 = PTR_DAT_04bb2020 + 0x10;
      local_200 = SUB81(puVar89,0);
      uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
      uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
      uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
      uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
      local_1f8 = 0xad4d;
      uStack_1f6 = 0x40e;
      uStack_1f4 = 0;
      uStack_1f2 = 0;
      FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,0);
    }
    lVar75 = *(long *)(param_1 + 0x3c0);
    if ((lVar75 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x1275be48 / uVar59;
      }
      uVar60 = 0x1275be48 - uVar60 * uVar59;
      uVar10 = uVar60;
      while (iVar45 = *(int *)(lVar75 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar10 << 3)), iVar45 != 0) {
        if (iVar45 == 0x1275be48) {
          lVar75 = (long)*(int *)(lVar75 + (long)(int)uVar10 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != (int)*(char *)(param_1 + 0x1bccb)
             ) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = (int)*(char *)(param_1 + 0x1bccb);
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
          }
          break;
        }
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
        if (uVar86 == uVar60) break;
      }
    }
  }
  else {
    puVar89 = PTR_DAT_04bb2020 + 0x10;
    local_200 = SUB81(puVar89,0);
    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
    local_1f8 = 0xad4d;
    uStack_1f6 = 0x40e;
    uStack_1f4 = 0;
    uStack_1f2 = 0;
    FUN_02a227e8(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18),&local_200,1);
  }
  *(bool *)(lVar73 + 0x70) = *(char *)(param_1 + 0x1bccb) == '\x01';
  lVar73 = *(long *)(param_2 + 8);
  pcVar76 = (char *)(lVar73 + 0xc176);
  if (*pcVar76 != '\0') {
    *(undefined1 *)(param_1 + 0x1bd29) = 1;
  }
  if (*(char *)(lVar73 + 0xc177) != '\0') {
    *(undefined1 *)(param_1 + 0x1bd2a) = 1;
  }
  if ((*(char *)(param_1 + 0x1bd29) != '\0') && (*(char *)(param_1 + 0x1bd2a) != '\0')) {
    *(undefined2 *)(param_1 + 0x1bd29) = 0;
  }
  pcVar76[0] = '\0';
  pcVar76[1] = '\0';
  if (*(char *)(param_1 + 0x1bd29) != '\0') {
    *(undefined2 *)(param_1 + 0x1bd28) = 1;
  }
  if (*(char *)(param_1 + 0x1bd2a) == '\0') {
    if ((cVar55 == '\0') && (*(char *)(param_1 + 0x1bd28) != '\0')) {
      lVar73 = *plVar83;
      nn::os::LockMutex((MutexType *)(lVar73 + 0x89660));
      sVar14 = *(short *)(lVar73 + 0x895e4);
      iVar45 = *(int *)(lVar73 + 0x89620);
      iVar50 = *(int *)(lVar73 + 0x8962c);
      iVar49 = *(int *)(lVar73 + 0x89638);
      nn::os::UnlockMutex((MutexType *)(lVar73 + 0x89660));
      uVar59 = 0;
      if ((iVar50 != sVar14) && ((iVar45 != sVar14 && (iVar49 != sVar14)))) goto LAB_02a175c0;
    }
    else {
      uVar59 = 0;
      if ((cVar55 != '\0') && (*(char *)(param_1 + 0x1bd28) != '\0')) {
        uVar59 = FUN_016cf9f0();
        uVar59 = uVar59 & 1;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1bd2a) = 0;
LAB_02a175c0:
    uVar59 = 0;
    *(undefined1 *)(param_1 + 0x1bd28) = 0;
  }
  lVar73 = *(long *)(param_1 + 0x3c0);
  if ((lVar73 != 0) && (uVar60 = *(uint *)(param_1 + 0x3cc), uVar60 != 0)) {
    uVar10 = 0;
    if (uVar60 != 0) {
      uVar10 = 0xdb53732f / uVar60;
    }
    uVar10 = 0xdb53732f - uVar10 * uVar60;
    uVar86 = uVar10;
    do {
      iVar45 = *(int *)(lVar73 + (-(ulong)(uVar86 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar86 << 3
                                 ));
      if (iVar45 == -0x24ac8cd1) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar86 * 8 + 4);
        if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != uVar59) {
          *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = uVar59;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      if (iVar45 == 0) break;
      uVar57 = 0;
      if ((int)(uVar86 + 1) < (int)uVar60) {
        uVar57 = uVar86 + 1;
      }
      uVar86 = uVar57;
    } while (uVar57 != uVar10);
  }
  if (((cVar55 == '\0') && (lVar73 = *(long *)(param_1 + 0x3c0), lVar73 != 0)) &&
     (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0xaa28746b / uVar59;
    }
    uVar60 = 0xaa28746b - uVar60 * uVar59;
    uVar10 = uVar60;
    do {
      iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3
                                 ));
      if (iVar45 == -0x55d78b95) {
        lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
        }
        break;
      }
      if (iVar45 == 0) break;
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
    } while (uVar86 != uVar60);
  }
  if (((*(int *)(param_1 + 0x1bc28) == 5) || (*(int *)(param_1 + 0x1bc28) == 6)) ||
     (*(int *)(param_1 + 0x1bc28) == 7)) {
    if (bVar37 && bVar36) {
      *(undefined4 *)(param_1 + 0x1bd2b) = 0x1e000001;
      lVar73 = *(long *)(param_1 + 0x3c0);
      if (lVar73 == 0) {
        *(char *)(param_1 + 0x1bd2f) = (char)*(undefined4 *)(*(long *)(param_1 + 0x3a8) + -4);
        uVar63 = (undefined1)*(undefined4 *)(*(long *)(param_1 + 0x3a8) + -4);
      }
      else {
        uVar59 = *(uint *)(param_1 + 0x3cc);
        if (uVar59 == 0) {
LAB_02a17948:
          lVar75 = -1;
LAB_02a17b98:
          lVar87 = *(long *)(param_1 + 0x3a8);
          puVar78 = (undefined4 *)(lVar87 + lVar75 * 4);
        }
        else {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0xa3d3a513 / uVar59;
          }
          uVar60 = 0xa3d3a513 - uVar60 * uVar59;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == -0x5c2c5aed) {
              lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              goto LAB_02a17b98;
            }
            if (iVar45 == 0) goto LAB_02a17948;
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
          lVar87 = *(long *)(param_1 + 0x3a8);
          puVar78 = (undefined4 *)(lVar87 + -4);
        }
        *(char *)(param_1 + 0x1bd2f) = (char)*puVar78;
        if (uVar59 != 0) {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0xa6fe9bb3 / uVar59;
          }
          uVar60 = 0xa6fe9bb3 - uVar60 * uVar59;
          lVar75 = -1;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == -0x5901644d) {
              lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              break;
            }
            if (iVar45 == 0) break;
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
          *(char *)(param_1 + 0x1bd30) = (char)*(undefined4 *)(lVar87 + lVar75 * 4);
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0x8c868f8d / uVar59;
          }
          uVar60 = 0x8c868f8d - uVar60 * uVar59;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == -0x73797073) {
              lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              if (*(int *)(lVar87 + lVar73 * 4) != 0) {
                *(undefined4 *)(lVar87 + lVar73 * 4) = 0;
                *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
              }
              break;
            }
            if (iVar45 == 0) break;
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
          goto LAB_02a17d50;
        }
        uVar63 = (undefined1)*(undefined4 *)(lVar87 + -4);
      }
      *(undefined1 *)(param_1 + 0x1bd30) = uVar63;
    }
    else {
      if (*(char *)(param_1 + 0x1bd2c) == '\0') {
        lVar73 = *(long *)(param_1 + 0x3c0);
        if ((lVar73 == 0) || (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 == 0)) {
          iVar45 = -1;
        }
        else {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0xa3d3a513 / uVar59;
          }
          uVar60 = 0xa3d3a513 - uVar60 * uVar59;
          iVar45 = -1;
          uVar10 = uVar60;
          do {
            iVar50 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar50 == -0x5c2c5aed) {
              iVar45 = *(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              break;
            }
            if (iVar50 == 0) break;
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
        }
        lVar75 = *(long *)(param_1 + 0x3a8);
        iVar45 = *(int *)(lVar75 + (long)iVar45 * 4);
        if (*(byte *)(param_1 + 0x1bd2f) - 6 < 0xc) {
          if (iVar45 - 0x12U < 0xfffffff4) goto LAB_02a17a4c;
LAB_02a17a34:
          bVar43 = true;
          if (lVar73 == 0) goto LAB_02a17ab0;
LAB_02a17a60:
          uVar59 = *(uint *)(param_1 + 0x3cc);
          if (uVar59 == 0) goto LAB_02a17ab0;
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0xa6fe9bb3 / uVar59;
          }
          uVar60 = 0xa6fe9bb3 - uVar60 * uVar59;
          lVar87 = -1;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == -0x5901644d) {
              lVar87 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              break;
            }
            if (iVar45 == 0) break;
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
        }
        else {
          if (0xb < iVar45 - 6U) goto LAB_02a17a34;
LAB_02a17a4c:
          bVar43 = false;
          *(char *)(param_1 + 0x1bd2f) = (char)iVar45;
          *(undefined2 *)(param_1 + 0x1bd2c) = 1;
          if (lVar73 != 0) goto LAB_02a17a60;
LAB_02a17ab0:
          lVar87 = -1;
        }
        iVar45 = *(int *)(lVar75 + lVar87 * 4);
        if (iVar45 != *(char *)(param_1 + 0x1bd30)) {
          *(char *)(param_1 + 0x1bd30) = (char)iVar45;
          *(undefined1 *)(param_1 + 0x1bd2c) = 1;
          goto LAB_02a17b24;
        }
        if (!bVar43) goto LAB_02a17b24;
        if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0x8c868f8d / uVar59;
          }
          uVar60 = 0x8c868f8d - uVar60 * uVar59;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == -0x73797073) {
              lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              if (*(int *)(lVar75 + lVar73 * 4) != 0) {
                *(undefined4 *)(lVar75 + lVar73 * 4) = 0;
                *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
              }
              break;
            }
            if (iVar45 == 0) break;
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
        }
      }
      else {
LAB_02a17b24:
        cVar55 = *(char *)(param_1 + 0x1bd2d);
        if ((-1 < cVar55) && (0x1e < *(byte *)(param_1 + 0x1bd2e))) {
          lVar73 = *(long *)(param_1 + 0x3c0);
          if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
            uVar60 = 0;
            if (uVar59 != 0) {
              uVar60 = 0x8c868f8d / uVar59;
            }
            uVar60 = 0x8c868f8d - uVar60 * uVar59;
            uVar10 = uVar60;
            do {
              iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar10 << 3));
              if (iVar45 == -0x73797073) {
                lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
                if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 1) {
                  *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 1;
                  *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
                }
                break;
              }
              if (iVar45 == 0) break;
              uVar86 = 0;
              if ((int)(uVar10 + 1) < (int)uVar59) {
                uVar86 = uVar10 + 1;
              }
              uVar10 = uVar86;
            } while (uVar86 != uVar60);
          }
          cVar55 = '\0';
          *(undefined1 *)(param_1 + 0x1bd2c) = 0;
          *(undefined1 *)(param_1 + 0x1bd2e) = 0;
        }
        *(char *)(param_1 + 0x1bd2d) = cVar55 + '\x01';
      }
      if (*(byte *)(param_1 + 0x1bd2e) < 0x1f) {
        *(byte *)(param_1 + 0x1bd2e) = *(byte *)(param_1 + 0x1bd2e) + 1;
      }
    }
  }
  else if ((((bVar43) && (*(char *)(param_1 + 0x1bd2b) != '\0')) &&
           (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d)) &&
          ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c ||
           (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 0)))) {
    lVar73 = *(long *)(param_1 + 0x3c0);
    if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x37033f90 / uVar59;
      }
      uVar60 = 0x37033f90 - uVar60 * uVar59;
      uVar10 = uVar60;
      while (iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar10 << 3)), iVar45 != 0) {
        if (iVar45 == 0x37033f90) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
        if (uVar86 == uVar60) break;
      }
    }
    *(undefined1 *)(param_1 + 0x1bd2b) = 0;
  }
LAB_02a17d50:
  lVar73 = SUB168(SEXT816((long)(*(long *)PTR_DAT_04bb29d0 *
                                 (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                                 (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5)) *
                  SEXT816(-0x20c49ba5e353f7cf),8);
  FUN_03f165ac(param_1 + 0x2a8,0xf79f9ba1,
               ((lVar73 >> 7) - (lVar73 >> 0x3f)) + *(long *)(*(long *)(*plVar83 + 0x6c8) + 0x78));
  piVar61 = *(int **)(param_2 + 0x30);
  if (piVar61 == (int *)0x0) {
    iVar45 = -1;
    iVar50 = -1;
  }
  else {
    iVar45 = *piVar61;
    iVar50 = piVar61[1];
  }
  lVar73 = *(long *)(param_1 + 0x3c0);
  if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0xc4185460 / uVar59;
    }
    uVar60 = 0xc4185460 - uVar60 * uVar59;
    uVar10 = uVar60;
    do {
      iVar49 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3
                                 ));
      if (iVar49 == -0x3be7aba0) {
        lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != iVar45) {
          *(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = iVar45;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
          lVar73 = *(long *)(param_1 + 0x3c0);
          if (lVar73 == 0) goto LAB_02a17ed8;
          uVar59 = *(uint *)(param_1 + 0x3cc);
        }
        break;
      }
      if (iVar49 == 0) break;
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
    } while (uVar86 != uVar60);
    if (uVar59 != 0) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0xad9ceed4 / uVar59;
      }
      uVar60 = 0xad9ceed4 - uVar60 * uVar59;
      uVar10 = uVar60;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar10 << 3));
        if (iVar45 == -0x5263112c) {
          lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != iVar50) {
            *(int *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = iVar50;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
      } while (uVar86 != uVar60);
    }
  }
LAB_02a17ed8:
  if (iVar51 == -0x10e0fba8) {
    if (param_2[0x1e] == '\0') {
      lVar73 = *plVar83;
      if (*(long *)(*(long *)(lVar73 + 0xb4510) + 0x50) == 0) {
        fVar91 = 0.0;
        fVar92 = 0.0;
      }
      else {
        fVar91 = *(float *)(lVar73 + 0xb44c8);
        fVar92 = *(float *)(lVar73 + 0xb44d0);
      }
      uVar60 = (int)((float)(int)fVar92 / 5.0) - (uint)(fVar92 < 0.0);
      iVar45 = -0x65;
      if (0.0 <= fVar91) {
        iVar45 = -100;
      }
      bVar43 = 0x5d < (uint)(iVar45 + (int)((float)(int)fVar91 / 5.0));
      if (*(char *)(param_1 + 0x1bd33) == '\0') {
        bVar36 = 0x93 < uVar60;
      }
      else {
        bVar36 = 0x96 < uVar60;
      }
      uVar59 = 0;
      if (!bVar36) {
        uVar59 = (uint)((!bVar43 && uVar60 != 0x3f) && (bVar43 || 0x3e < (int)uVar60));
      }
      lVar73 = *(long *)(param_1 + 0x3c0);
      goto joined_r0x02a17f08;
    }
    uVar59 = 1;
    lVar73 = *(long *)(param_1 + 0x3c0);
    if (lVar73 == 0) goto LAB_02a17ef4;
LAB_02a17f0c:
    uVar60 = *(uint *)(param_1 + 0x3cc);
    if (uVar60 != 0) {
      uVar10 = 0;
      if (uVar60 != 0) {
        uVar10 = 0xd1668c34 / uVar60;
      }
      uVar10 = 0xd1668c34 - uVar10 * uVar60;
      uVar86 = uVar10;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar86 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar86 << 3));
        if (iVar45 == -0x2e9973cc) {
          lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar86 * 8 + 4);
          if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != uVar59) {
            *(uint *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = uVar59;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
            lVar73 = *(long *)(param_1 + 0x3c0);
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar57 = 0;
        if ((int)(uVar86 + 1) < (int)uVar60) {
          uVar57 = uVar86 + 1;
        }
        uVar86 = uVar57;
      } while (uVar57 != uVar10);
    }
    *(char *)(param_1 + 0x1bd33) = (char)uVar59;
    if (*(int *)(param_1 + 0x1bc28) == -1) {
LAB_02a180b8:
      if (lVar73 != 0) {
        uVar59 = *(uint *)(param_1 + 0x3cc);
LAB_02a180c0:
        if (uVar59 != 0) {
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0x9b02a43c / uVar59;
          }
          uVar60 = 0x9b02a43c - uVar60 * uVar59;
          uVar10 = uVar60;
          do {
            iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3));
            if (iVar45 == -0x64fd5bc4) {
              lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
              uVar59 = (uint)*(byte *)(*(long *)(*plVar83 + 0x6d0) + 0x14);
              if (*(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != uVar59) {
                *(uint *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = uVar59;
                *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
              }
              break;
            }
            if (iVar45 == 0) break;
            uVar86 = 0;
            if ((int)(uVar10 + 1) < (int)uVar59) {
              uVar86 = uVar10 + 1;
            }
            uVar10 = uVar86;
          } while (uVar86 != uVar60);
        }
      }
    }
    else if ((lVar73 != 0) && (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x80c8d15e / uVar59;
      }
      uVar60 = 0x80c8d15e - uVar60 * uVar59;
      uVar10 = uVar60;
      do {
        iVar45 = *(int *)(lVar73 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar10 << 3));
        if (iVar45 == -0x7f372ea2) {
          lVar75 = (long)*(int *)(lVar73 + (long)(int)uVar10 * 8 + 4);
          if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar75 * 4) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar75) = 1;
            lVar73 = *(long *)(param_1 + 0x3c0);
            goto LAB_02a180b8;
          }
          break;
        }
        if (iVar45 == 0) break;
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
      } while (uVar86 != uVar60);
      goto LAB_02a180c0;
    }
  }
  else {
    uVar59 = 0;
    lVar73 = *(long *)(param_1 + 0x3c0);
joined_r0x02a17f08:
    if (lVar73 != 0) goto LAB_02a17f0c;
LAB_02a17ef4:
    *(char *)(param_1 + 0x1bd33) = (char)uVar59;
  }
  if (*param_2 == '\0') {
    lVar73 = *(long *)(param_2 + 8);
    uVar53 = *(ulong *)(lVar73 + 0xf0);
    if (uVar53 != 0) {
      lVar73 = *(long *)(uVar53 + 8);
      while (lVar73 != 0) {
        *(ulong *)(lVar73 + 0x18) = *(ulong *)(lVar73 + 0x18) & 1 | uVar53;
        uVar53 = *(ulong *)(uVar53 + 8);
        lVar73 = *(long *)(uVar53 + 8);
      }
      do {
        uVar59 = *(uint *)(uVar53 + 0x20);
        fVar91 = *(float *)(uVar53 + 0x24);
        if (uVar59 == 0xbd0309d1) {
          fVar91 = (float)(int)fVar91 * 0.00390625;
LAB_02a181c4:
          lVar73 = *(long *)(param_1 + 0x3c0);
          if ((lVar73 != 0) && (uVar60 = *(uint *)(param_1 + 0x3cc), uVar60 != 0)) {
            uVar10 = 0;
            if (uVar60 != 0) {
              uVar10 = uVar59 / uVar60;
            }
            uVar10 = uVar59 - uVar10 * uVar60;
            uVar86 = uVar10;
            do {
              uVar57 = *(uint *)(lVar73 + (-(ulong)(uVar86 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar86 << 3));
              if (uVar57 == uVar59) {
                lVar73 = (long)*(int *)(lVar73 + (long)(int)uVar86 * 8 + 4);
                if (*(float *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) != fVar91) {
                  *(float *)(*(long *)(param_1 + 0x3a8) + lVar73 * 4) = fVar91;
                  *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar73) = 1;
                }
                break;
              }
              if (uVar57 == 0) break;
              uVar57 = 0;
              if ((int)(uVar86 + 1) < (int)uVar60) {
                uVar57 = uVar86 + 1;
              }
              uVar86 = uVar57;
            } while (uVar57 != uVar10);
          }
        }
        else {
          if (uVar59 == 0xc3586195) {
            *(undefined1 *)(param_1 + 0x1bd31) = 1;
          }
          if (uVar59 != 0) goto LAB_02a181c4;
        }
        lVar73 = *(long *)(uVar53 + 0x10);
        if (lVar73 == 0) {
          uVar72 = uVar53;
          do {
            uVar53 = *(ulong *)(uVar72 + 0x18) & 0xfffffffffffffffe;
            if (uVar53 == 0) {
              lVar73 = *(long *)(param_2 + 8);
              goto LAB_02a182a8;
            }
            bVar43 = *(ulong *)(uVar53 + 8) != uVar72;
            uVar72 = uVar53;
          } while (bVar43);
        }
        else {
          *(ulong *)(lVar73 + 0x18) = *(ulong *)(lVar73 + 0x18) & 1 | uVar53;
          uVar53 = *(ulong *)(uVar53 + 0x10);
          lVar73 = *(long *)(uVar53 + 8);
          while (lVar73 != 0) {
            *(ulong *)(lVar73 + 0x18) = *(ulong *)(lVar73 + 0x18) & 1 | uVar53;
            uVar53 = *(ulong *)(uVar53 + 8);
            lVar73 = *(long *)(uVar53 + 8);
          }
        }
      } while( true );
    }
LAB_02a182a8:
    plVar62 = (long *)(lVar73 + 0xf0);
    local_1f0._0_4_ = SUB84(PTR_LAB_04bc42c8,0);
    local_1f0._4_4_ = (undefined4)((ulong)PTR_LAB_04bc42c8 >> 0x20);
    uStack_1e8._0_4_ = 0;
    uStack_1e8._4_4_ = 0;
    puVar89 = PTR_DAT_04bc42d8 + 0x10;
    local_200 = SUB81(puVar89,0);
    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
    local_1f8 = SUB82(plVar62,0);
    uStack_1f6 = (undefined2)((ulong)plVar62 >> 0x10);
    uStack_1f4 = (undefined2)((ulong)plVar62 >> 0x20);
    uStack_1f2 = (undefined2)((ulong)plVar62 >> 0x30);
    if (*plVar62 != 0) {
      FUN_02a0dd80(*plVar62,&local_200);
    }
    *(undefined4 *)(lVar73 + 0x108) = 0;
    *(undefined8 *)(lVar73 + 0xf0) = 0;
  }
  FUN_03f109c0(lVar67);
  uVar63 = 0;
  lVar67 = *(long *)(param_2 + 0x10);
  uVar54 = *(undefined8 *)(param_1 + 0x19e90);
  uVar77 = *(undefined8 *)(param_1 + 0x19ea0);
  uVar48 = *(undefined4 *)(param_1 + 0x148d0);
  uVar80 = *(undefined8 *)(param_1 + 0x148c8);
  *(undefined1 *)(lVar67 + 0x50) = *(undefined1 *)(param_1 + 0x19ea8);
  *(undefined8 *)(lVar67 + 0x38) = uVar54;
  *(undefined8 *)(lVar67 + 0x48) = uVar77;
  lVar67 = *(long *)(param_2 + 0x10);
  *(undefined4 *)(lVar67 + 0x68) = uVar48;
  *(long *)(lVar67 + 0x58) = param_1 + 0x131f0;
  *(undefined8 *)(lVar67 + 0x60) = uVar80;
  if ((iVar51 == 0x43080996) && (*(int *)(param_1 + 0x1a068) == 2)) {
    lVar67 = *(long *)(param_1 + 0x310);
    if ((lVar67 != 0) && (uVar59 = *(uint *)(param_1 + 0x31c), uVar59 != 0)) {
      uVar60 = 0;
      if (uVar59 != 0) {
        uVar60 = 0x43080996 / uVar59;
      }
      uVar60 = 0x43080996 - uVar60 * uVar59;
      uVar10 = uVar60;
      while (iVar51 = *(int *)(lVar67 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar10 << 3)), iVar51 != 0) {
        if (iVar51 == 0x43080996) {
          uVar59 = *(uint *)(lVar67 + (long)(int)uVar10 * 8 + 4);
          if (((uVar59 < *(uint *)(param_1 + 0x2e0)) &&
              (lVar67 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar59 * 8), lVar67 != 0))
             && (*(int *)(lVar67 + 0x38) != 0)) {
            uVar63 = 1;
            goto LAB_02a183d8;
          }
          break;
        }
        uVar86 = 0;
        if ((int)(uVar10 + 1) < (int)uVar59) {
          uVar86 = uVar10 + 1;
        }
        uVar10 = uVar86;
        if (uVar86 == uVar60) break;
      }
    }
    FUN_02a55844(&DAT_055f4f08,0);
    uVar63 = 0;
  }
LAB_02a183d8:
  fVar91 = -1.0;
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x10) = uVar63;
  lVar67 = *(long *)(param_1 + 0x310);
  if ((lVar67 != 0) && (uVar59 = *(uint *)(param_1 + 0x31c), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0xb10edbfc / uVar59;
    }
    uVar60 = 0xb10edbfc - uVar60 * uVar59;
    uVar10 = uVar60;
    do {
      iVar51 = *(int *)(lVar67 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3
                                 ));
      if (iVar51 == -0x4ef12404) {
        uVar59 = *(uint *)(lVar67 + (long)(int)uVar10 * 8 + 4);
        if ((uVar59 < *(uint *)(param_1 + 0x2e0)) &&
           (lVar67 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar59 * 8), lVar67 != 0)) {
          iVar51 = *(int *)(lVar67 + 0x38);
          *(bool *)(*(long *)(param_2 + 0x10) + 0x14) = iVar51 != 0;
          if (iVar51 == 0) goto LAB_02a184d8;
          lVar67 = *(long *)(param_1 + 0x310);
          if ((lVar67 == 0) || (uVar59 = *(uint *)(param_1 + 0x31c), uVar59 == 0))
          goto LAB_02a18b80;
          uVar60 = 0;
          if (uVar59 != 0) {
            uVar60 = 0xb10edbfc / uVar59;
          }
          uVar10 = 0xb10edbfc - uVar60 * uVar59;
          uVar60 = 48000;
          uVar86 = uVar10;
          goto LAB_02a18498;
        }
        break;
      }
      if (iVar51 == 0) break;
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
    } while (uVar86 != uVar60);
  }
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x14) = 0;
  goto LAB_02a184d8;
LAB_02a18b80:
  iVar51 = 0;
  uVar60 = 48000;
  goto LAB_02a18b84;
  while( true ) {
    if (iVar51 == 0) goto LAB_02a18b80;
    uVar57 = 0;
    if ((int)(uVar86 + 1) < (int)uVar59) {
      uVar57 = uVar86 + 1;
    }
    uVar86 = uVar57;
    if (uVar57 == uVar10) break;
LAB_02a18498:
    iVar51 = *(int *)(lVar67 + (-(ulong)(uVar86 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar86 << 3))
    ;
    if (iVar51 == -0x4ef12404) {
      uVar59 = *(uint *)(lVar67 + (long)(int)uVar86 * 8 + 4);
      if (((*(uint *)(param_1 + 0x2e0) <= uVar59) ||
          (lVar67 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar59 * 8), lVar67 == 0)) ||
         (*(long *)(lVar67 + 0x30) == 0)) goto LAB_02a18b80;
      auVar93 = FUN_03f1ee70();
      lVar67 = auVar93._0_8_;
      iVar51 = 0;
      if (lVar67 == 0) {
LAB_02a18c70:
        uVar60 = 48000;
      }
      else {
        iVar45 = *(int *)(lVar67 + 0x10);
        if (iVar45 == auVar93._8_4_) {
          iVar51 = FUN_03b46270(lVar67);
          iVar45 = *(int *)(lVar67 + 0x10);
        }
        else {
          iVar51 = 0;
        }
        if (iVar45 != auVar93._8_4_) goto LAB_02a18c70;
        lVar67 = *(long *)(*(long *)(lVar67 + 0x120) + 8);
        if (DAT_05aebc00 == '\0') {
          puVar52 = *(undefined8 **)(lVar67 + 0x38);
          if (puVar52 == (undefined8 *)0x0) goto LAB_02a18c70;
        }
        else {
          puVar52 = (undefined8 *)(lVar67 + 0x70);
        }
        if ((puVar52[1] == 0) || (*(char *)(puVar52[1] + 0x30) == '\0')) goto LAB_02a184d8;
        piVar61 = (int *)*puVar52;
        plVar83 = (long *)PTR_DAT_04bb26a8;
        if ((((piVar61 == (int *)0x0) || (*piVar61 != 0x56415742)) ||
            (((0xfe < (byte)(*(ushort *)(piVar61 + 1) >> 8) &&
              ((*(ushort *)(piVar61 + 1) & 0xff) == 0xfe)) || (*(short *)((long)piVar61 + 6) != 1)))
            ) || (*(short *)((long)piVar61 + 0xe) == 0)) goto LAB_02a184d8;
        uVar60 = piVar61[5];
      }
      if (iVar51 < 0) goto LAB_02a184d8;
      goto LAB_02a18b84;
    }
  }
  iVar51 = 0;
LAB_02a18b84:
  if (uVar60 != 0) {
    fVar91 = (float)iVar51 / (float)uVar60;
  }
LAB_02a184d8:
  *(float *)(*(long *)(param_2 + 0x10) + 0x18) = fVar91;
  if ((((*(long *)(param_1 + 0x30) == 0) || (*(float *)(*(long *)(param_1 + 0x30) + 0xb8) <= 0.0))
      && (lVar67 = *(long *)(param_1 + 0x3c0), lVar67 != 0)) &&
     (uVar59 = *(uint *)(param_1 + 0x3cc), uVar59 != 0)) {
    uVar60 = 0;
    if (uVar59 != 0) {
      uVar60 = 0xf47f3c72 / uVar59;
    }
    uVar60 = 0xf47f3c72 - uVar60 * uVar59;
    uVar10 = uVar60;
    do {
      iVar51 = *(int *)(lVar67 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3
                                 ));
      if (iVar51 == -0xb80c38e) {
        lVar67 = (long)*(int *)(lVar67 + (long)(int)uVar10 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar67 * 4) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x3a0) + lVar67) = 1;
        }
        break;
      }
      if (iVar51 == 0) break;
      uVar86 = 0;
      if ((int)(uVar10 + 1) < (int)uVar59) {
        uVar86 = uVar10 + 1;
      }
      uVar10 = uVar86;
    } while (uVar86 != uVar60);
  }
  lVar67 = *plVar83;
  nn::os::LockMutex((MutexType *)(lVar67 + 0x89660));
  sVar14 = *(short *)(lVar67 + 0x895e4);
  sVar15 = *(short *)(lVar67 + 0x895e6);
  sVar16 = *(short *)(lVar67 + 0x895e8);
  iVar45 = *(int *)(lVar67 + 0x89620);
  iVar51 = *(int *)(lVar67 + 0x8962c);
  uVar59 = *(uint *)(lVar67 + 0x89630);
  nn::os::UnlockMutex((MutexType *)(lVar67 + 0x89660));
  if ((uVar59 < 2) &&
     (((((iVar51 == sVar14 || iVar51 == sVar15) || iVar51 == sVar16) || iVar45 == sVar16) ||
      iVar45 == sVar14) || iVar45 == sVar15)) {
    if (*(char *)(param_1 + 0x1bccd) != '\0') {
      uVar48 = FUN_006bd550(&DAT_040c63c1,0);
      lVar67 = *plVar83;
      plVar62 = (long *)(lVar67 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar67 + 0xb3b58));
      if (*(int *)(lVar67 + 0xb3b88) < *(int *)(lVar67 + 0xb3ba0)) {
        puVar52 = *(undefined8 **)(lVar67 + 0xb3b90);
        if (puVar52 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar67 + 0xb3b90) = *puVar52;
        }
        *(undefined1 *)((long)puVar52 + 2) = 0;
        *(undefined2 *)puVar52 = 0x100;
        *(undefined4 *)((long)puVar52 + 4) = uVar48;
        *(undefined4 *)(puVar52 + 1) = 0x3f800000;
        plVar68 = puVar52 + 2;
        *plVar68 = 0;
        puVar52[3] = 0;
        lVar73 = *plVar62;
        *plVar62 = (long)plVar68;
        puVar52[3] = plVar62;
        *plVar68 = lVar73;
        if (lVar73 != 0) {
          *(long **)(lVar73 + 8) = plVar68;
        }
        *(int *)(lVar67 + 0xb3b88) = *(int *)(lVar67 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar67 + 0xb3b58));
    }
    goto LAB_02a188bc;
  }
  if (*(char *)(*plVar83 + 0x122ad6) == '\0') {
    *(undefined2 *)(param_1 + 0x1bccd) = 0;
    goto LAB_02a188bc;
  }
  if ((*(int *)(param_1 + 0x1bcb4) != 3) && (uVar59 == 3)) {
    *(undefined1 *)(param_1 + 0x1bcce) = 1;
  }
  puVar89 = PTR_DAT_04bb2020;
  if (((((*(long *)(param_1 + 0x50) != 0) && (0.0 < *(float *)(*(long *)(param_1 + 0x50) + 0xb8)))
       || ((*(long *)(param_1 + 0x58) != 0 && (0.0 < *(float *)(*(long *)(param_1 + 0x58) + 0xb8))))
       ) || ((*(long *)(param_1 + 0x60) != 0 && (0.0 < *(float *)(*(long *)(param_1 + 0x60) + 0xb8))
             ))) ||
     ((*(long *)(param_1 + 0x68) != 0 && (0.0 < *(float *)(*(long *)(param_1 + 0x68) + 0xb8))))) {
LAB_02a18744:
    bVar43 = false;
  }
  else {
    if ((*(long *)(param_1 + 0x78) == 0) || (*(float *)(*(long *)(param_1 + 0x78) + 0xb8) <= 0.0)) {
      if ((*(long *)(param_1 + 0x80) == 0) || (*(float *)(*(long *)(param_1 + 0x80) + 0xb8) <= 0.0))
      {
        *(undefined1 *)(param_1 + 0x1bccd) = 0;
        goto LAB_02a188bc;
      }
      goto LAB_02a18744;
    }
    if (*(char *)(param_1 + 0x1bcce) == '\0') goto LAB_02a18744;
    bVar43 = true;
    *(undefined1 *)(param_1 + 0x1bcce) = 0;
  }
  uVar48 = FUN_006bd550(&DAT_040c63c1,0);
  lVar67 = *plVar83;
  plVar62 = (long *)(lVar67 + 0xb3b78);
  nn::os::LockMutex((MutexType *)(lVar67 + 0xb3b58));
  if (*(int *)(lVar67 + 0xb3b88) < *(int *)(lVar67 + 0xb3ba0)) {
    puVar52 = *(undefined8 **)(lVar67 + 0xb3b90);
    if (puVar52 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar67 + 0xb3b90) = *puVar52;
    }
    *(undefined1 *)((long)puVar52 + 2) = 0;
    *(undefined2 *)puVar52 = 0x100;
    *(undefined4 *)((long)puVar52 + 4) = uVar48;
    *(undefined4 *)(puVar52 + 1) = 0x3f800000;
    plVar68 = puVar52 + 2;
    *plVar68 = 0;
    puVar52[3] = 0;
    lVar73 = *plVar62;
    *plVar62 = (long)plVar68;
    puVar52[3] = plVar62;
    *plVar68 = lVar73;
    if (lVar73 != 0) {
      *(long **)(lVar73 + 8) = plVar68;
    }
    *(int *)(lVar67 + 0xb3b88) = *(int *)(lVar67 + 0xb3b88) + 1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar67 + 0xb3b58));
  if (*(int *)(param_1 + 0x1bcb4) != 3 && uVar59 == 3) {
    bVar43 = true;
  }
  if (bVar43) {
    uVar48 = FUN_006bd550(&DAT_040c63c1,0);
    lVar67 = *plVar83;
    plVar62 = (long *)(lVar67 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar67 + 0xb3b58));
    if (*(int *)(lVar67 + 0xb3b88) < *(int *)(lVar67 + 0xb3ba0)) {
      puVar52 = *(undefined8 **)(lVar67 + 0xb3b90);
      if (puVar52 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar67 + 0xb3b90) = *puVar52;
      }
      *(undefined2 *)puVar52 = 0;
      *(undefined1 *)((long)puVar52 + 2) = 1;
      puVar52[3] = 0;
      plVar68 = puVar52 + 2;
      *plVar68 = 0;
      *(undefined4 *)((long)puVar52 + 4) = uVar48;
      *(undefined4 *)(puVar52 + 1) = 0x3f800000;
      lVar73 = *plVar62;
      *plVar62 = (long)plVar68;
      puVar52[3] = plVar62;
      *plVar68 = lVar73;
      if (lVar73 != 0) {
        *(long **)(lVar73 + 8) = plVar68;
      }
      *(int *)(lVar67 + 0xb3b88) = *(int *)(lVar67 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar67 + 0xb3b58));
  }
  else {
    puVar89 = puVar89 + 0x10;
    local_200 = SUB81(puVar89,0);
    uStack_1ff = (undefined1)((ulong)puVar89 >> 8);
    uStack_1fe = (undefined2)((ulong)puVar89 >> 0x10);
    uStack_1fc = (undefined2)((ulong)puVar89 >> 0x20);
    uStack_1fa = (undefined2)((ulong)puVar89 >> 0x30);
    local_1f8 = 0x63c1;
    uStack_1f6 = 0x40c;
    uStack_1f4 = 0;
    uStack_1f2 = 0;
    FUN_02a55844(&local_200,0);
  }
  *(undefined1 *)(param_1 + 0x1bccd) = 1;
LAB_02a188bc:
  lVar67 = *plVar83;
  nn::os::LockMutex((MutexType *)(lVar67 + 0x89660));
  sVar14 = *(short *)(lVar67 + 0x895e4);
  sVar15 = *(short *)(lVar67 + 0x895e6);
  sVar16 = *(short *)(lVar67 + 0x895e8);
  iVar45 = *(int *)(lVar67 + 0x89620);
  iVar51 = *(int *)(lVar67 + 0x8962c);
  uVar59 = *(uint *)(lVar67 + 0x89630);
  nn::os::UnlockMutex((MutexType *)(lVar67 + 0x89660));
  if ((uVar59 < 2) &&
     ((((iVar51 == sVar14 || (iVar51 == sVar15)) || (iVar51 == sVar16)) ||
      (((iVar45 == sVar16 || (iVar45 == sVar14)) || (iVar45 == sVar15)))))) {
    if (**(char **)(param_1 + 0x1bcd8) != '\0') {
      (**(code **)(*(long *)(param_1 + 0x1bcd0) + 0x18))((long *)(param_1 + 0x1bcd0));
      uVar48 = FUN_006bd550(*(undefined8 *)(param_1 + 0x1bcd8),0);
      lVar67 = *plVar83;
      plVar83 = (long *)(lVar67 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar67 + 0xb3b58));
      if (*(int *)(lVar67 + 0xb3b88) < *(int *)(lVar67 + 0xb3ba0)) {
        puVar52 = *(undefined8 **)(lVar67 + 0xb3b90);
        if (puVar52 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar67 + 0xb3b90) = *puVar52;
        }
        *(undefined1 *)((long)puVar52 + 2) = 0;
        *(undefined2 *)puVar52 = 0x100;
        *(undefined4 *)((long)puVar52 + 4) = uVar48;
        *(undefined4 *)(puVar52 + 1) = 0x3f800000;
        plVar62 = puVar52 + 2;
        *plVar62 = 0;
        puVar52[3] = 0;
        lVar73 = *plVar83;
        *plVar83 = (long)plVar62;
        puVar52[3] = plVar83;
        *plVar62 = lVar73;
        if (lVar73 != 0) {
          *(long **)(lVar73 + 8) = plVar62;
        }
        *(int *)(lVar67 + 0xb3b88) = *(int *)(lVar67 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar67 + 0xb3b58));
    }
  }
  else {
    __dest = *(void **)(param_1 + 0x1bcd8);
    (**(code **)(*(long *)(param_1 + 0x528) + 0x18))(param_1 + 0x528);
    __src = *(void **)(param_1 + 0x530);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x528) + 0x18))(param_1 + 0x528);
      lVar67 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x530) + lVar67) == '\0') goto LAB_02a18a6c;
        lVar73 = *(long *)(param_1 + 0x530) + lVar67;
        if (*(char *)(lVar73 + 1) == '\0') {
          lVar67 = lVar67 + 1;
          goto LAB_02a18a6c;
        }
        if (*(char *)(lVar73 + 2) == '\0') {
          lVar67 = lVar67 + 2;
          goto LAB_02a18a6c;
        }
        lVar67 = lVar67 + 3;
      } while (lVar67 != 0x80001);
      lVar67 = 0;
LAB_02a18a6c:
      iVar51 = (int)lVar67;
      if (*(int *)(param_1 + 0x1bce0) <= (int)lVar67) {
        iVar51 = *(int *)(param_1 + 0x1bce0) + -1;
      }
      memcpy(__dest,__src,(long)iVar51);
      *(undefined1 *)((long)__dest + (long)iVar51) = 0;
    }
  }
  *(uint *)(param_1 + 0x1bcb4) = uVar9;
  return;
}

