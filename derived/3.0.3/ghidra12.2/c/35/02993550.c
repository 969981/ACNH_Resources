
/* WARNING: Removing unreachable block (ram,0x02995b48) */
/* WARNING: Removing unreachable block (ram,0x02994e5c) */
/* WARNING: Removing unreachable block (ram,0x02995704) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02993550(long param_1,byte *param_2)

{
  MutexType *pMVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined4 uVar24;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  ushort uVar32;
  undefined2 uVar33;
  uint uVar34;
  undefined4 uVar35;
  long lVar36;
  long lVar37;
  int *piVar38;
  int iVar39;
  long *plVar40;
  undefined2 *puVar41;
  int iVar42;
  long lVar43;
  long *plVar44;
  undefined8 *puVar45;
  undefined1 *puVar46;
  undefined2 *puVar47;
  long *plVar48;
  long *plVar49;
  undefined8 *puVar50;
  long lVar51;
  char cVar52;
  undefined1 uVar53;
  long lVar54;
  long *plVar55;
  uint uVar56;
  int *piVar57;
  undefined1 *puVar58;
  undefined1 *puVar59;
  byte *pbVar60;
  ulong uVar61;
  int iVar62;
  long local_1bf0;
  int local_1b94;
  byte local_1b90 [4];
  undefined4 local_1b8c;
  undefined2 local_1b88;
  uint local_1b84;
  undefined4 local_1b80;
  undefined2 local_1b7c;
  ulong local_1b78;
  undefined8 uStack_1b70;
  undefined8 local_1b68;
  undefined8 uStack_1b60;
  undefined8 local_1b58;
  undefined8 uStack_1b50;
  undefined8 local_1b48;
  undefined8 uStack_1b40;
  undefined8 local_1b38;
  undefined8 uStack_1b30;
  undefined8 local_1b28;
  undefined8 local_1b20;
  undefined8 uStack_1b18;
  undefined8 local_1b10;
  undefined8 uStack_1b08;
  undefined1 local_1b00;
  undefined1 local_1af8 [8];
  undefined4 local_1af0;
  undefined4 uStack_1aec;
  byte bStack_1ae8;
  undefined8 uStack_1ae4;
  undefined8 local_1adc;
  undefined4 local_1ad4 [4];
  undefined4 local_1ac4 [1681];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar36 = DAT_055f6860;
  bVar7 = param_2[1];
  bVar8 = *param_2;
  bVar9 = param_2[2];
  pbVar60 = *(byte **)(param_2 + 8);
  pMVar1 = (MutexType *)(DAT_055f6860 + 0x896c8);
  puVar50 = (undefined8 *)(DAT_055f6860 + 0x89690);
  nn::os::LockMutex(pMVar1);
  local_80 = *puVar50;
  local_78 = *(undefined8 *)(lVar36 + 0x89698);
  local_70 = *(undefined8 *)(lVar36 + 0x896a0);
  nn::os::UnlockMutex(pMVar1);
  bVar22 = local_80._2_1_ != '\0';
  bVar23 = local_80._1_1_ == '\0';
  bVar10 = *pbVar60;
  if ((bVar10 & 1) != 0) {
    uVar35 = *(undefined4 *)(pbVar60 + 8);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(pbVar60 + 4);
    *(undefined4 *)(param_1 + 0x5c) = uVar35;
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 1;
    bVar10 = *pbVar60;
  }
  if ((bVar10 >> 1 & 1) == 0) {
    uVar34 = (uint)*(byte *)(param_1 + 0x54);
  }
  else {
    uVar34 = *(byte *)(param_1 + 0x54) | 2;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(pbVar60 + 4);
    *(char *)(param_1 + 0x54) = (char)uVar34;
  }
  cVar52 = local_80._3_1_;
  if ((uVar34 & 1) != 0) {
    lVar36 = *(long *)(param_1 + 0x100);
    uVar35 = *(undefined4 *)(param_1 + 0x58);
    uVar34 = *(uint *)(param_1 + 0x5c);
    if (lVar36 != param_1 + 0xf8) {
      do {
        lVar43 = *(long *)(lVar36 + -8);
        *(undefined4 *)(lVar43 + 0x98) = uVar35;
        *(uint *)(lVar43 + 0x90) = uVar34;
        *(ushort *)(lVar43 + 0x88) = *(ushort *)(lVar43 + 0x88) | 0x200;
        lVar36 = *(long *)(lVar36 + 8);
      } while (lVar36 + -8 != param_1 + 0xf0);
    }
    local_1b78 = 0xfffe;
    FUN_0277d4ac(&local_1b78);
    uVar25 = 0;
    if (uVar34 != 99999 && -1 < (int)uVar34) {
      uVar25 = uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU);
    }
    for (lVar36 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar36 != 0;
        lVar36 = *(long *)(lVar36 + 8)) {
      while (*(int *)(lVar36 + 0x20) <= (int)uVar25) {
        if ((int)uVar25 <= *(int *)(lVar36 + 0x20)) {
          local_1af8._2_6_ = 0;
          local_1af8._0_2_ = (ushort)*(undefined4 *)(lVar36 + 0x2c);
          goto LAB_02993718;
        }
        lVar36 = *(long *)(lVar36 + 0x10);
        if (lVar36 == 0) goto LAB_029936fc;
      }
    }
LAB_029936fc:
    local_1af8 = (undefined1  [8])0xfffe;
LAB_02993718:
    FUN_0277d4ac(local_1af8);
    local_1b78 = (ulong)local_1af8;
    iVar39 = *(int *)(param_1 + 0x198);
    if (iVar39 != 0) {
      iVar62 = 0;
      lVar36 = *(long *)(param_1 + 0x1a0);
      do {
        lVar43 = *(long *)(lVar36 + (long)iVar62 * 0x50 + 0x18);
        *(undefined4 *)(lVar43 + 0x150) = uVar35;
        uVar24 = FUN_0277d6c4(&local_1b78);
        *(undefined4 *)(lVar43 + 0x154) = uVar24;
        *(byte *)(lVar43 + 0x130) = *(byte *)(lVar43 + 0x130) | 4;
        iVar62 = iVar62 + 1;
      } while (iVar39 != iVar62);
    }
    uVar34 = (uint)*(byte *)(param_1 + 0x54);
  }
  pcVar2 = (char *)(param_1 + 0x24b0);
  if (((uVar34 >> 1 & 1) != 0) && (iVar39 = *(int *)(param_1 + 0x198), iVar39 != 0)) {
    uVar35 = *(undefined4 *)(param_1 + 0x58);
    iVar62 = 0;
    lVar36 = *(long *)(param_1 + 0x1a0);
    do {
      lVar43 = *(long *)(lVar36 + (long)iVar62 * 0x50 + 0x18);
      *(undefined4 *)(lVar43 + 0x150) = uVar35;
      *(byte *)(lVar43 + 0x130) = *(byte *)(lVar43 + 0x130) | 0xc;
      iVar62 = iVar62 + 1;
    } while (iVar39 != iVar62);
  }
  puVar47 = (undefined2 *)local_1af8;
  *(undefined1 *)(param_1 + 0x54) = 0;
  lVar36 = 0x79;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0xffffffffffffffff;
  do {
    *puVar47 = 0;
    lVar36 = lVar36 + -1;
    *(undefined1 *)(puVar47 + 1) = 0;
    *(undefined8 *)((long)puVar47 + 3) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar47 + 0xb) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar47 + 0x13) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar47 + 0x1b) = 0xff;
    *(undefined8 *)(puVar47 + 0xe) = 0;
    *(undefined8 *)(puVar47 + 0x12) = 0;
    *(undefined8 *)(puVar47 + 0x16) = 0xffffffffffffffff;
    *(undefined4 *)(puVar47 + 0x1a) = 0xffffffff;
    puVar47 = puVar47 + 0x1c;
  } while (lVar36 != 0);
  nn::os::LockMutex((MutexType *)(param_1 + 0x1d8));
  iVar39 = *(int *)(param_1 + 0x70);
  if (iVar39 != 0) {
    iVar62 = 0;
    lVar36 = *(long *)(param_1 + 0x78);
    do {
      lVar43 = lVar36 + (long)iVar62 * 0xf8;
      uVar29 = (ulong)*(uint *)(lVar43 + 4);
      bVar21 = 0x78 < *(uint *)(lVar43 + 4);
      puVar3 = (undefined4 *)((long)local_1af8 + uVar29 * 0xe * 4);
      if (bVar21) {
        puVar3 = (undefined4 *)local_1af8;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xc0);
      puVar50 = &uStack_1ae4 + uVar29 * 7 + -2;
      if (bVar21) {
        puVar50 = (undefined8 *)(local_1af8 + 4);
      }
      *(undefined4 *)puVar50 = *(undefined4 *)(lVar43 + 0xc4);
      puVar3 = (undefined4 *)((long)&uStack_1ae4 + (uVar29 * 0xe + -3) * 4);
      if (bVar21) {
        puVar3 = &local_1af0;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 200);
      puVar50 = &uStack_1ae4 + uVar29 * 7 + -1;
      if (bVar21) {
        puVar50 = (undefined8 *)&uStack_1aec;
      }
      *puVar50 = *(undefined8 *)(lVar43 + 0xcc);
      puVar50 = &uStack_1ae4 + uVar29 * 7;
      if (bVar21) {
        puVar50 = &uStack_1ae4;
      }
      *(undefined4 *)puVar50 = *(undefined4 *)(lVar43 + 0xd4);
      puVar3 = (undefined4 *)((long)&uStack_1ae4 + (uVar29 * 0xe + 1) * 4);
      if (bVar21) {
        puVar3 = (undefined4 *)((long)&uStack_1ae4 + 4);
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xd8);
      puVar50 = &uStack_1ae4 + uVar29 * 7 + 1;
      if (bVar21) {
        puVar50 = &local_1adc;
      }
      *(undefined4 *)puVar50 = *(undefined4 *)(lVar43 + 0xdc);
      puVar3 = local_1ad4 + uVar29 * 0xe + -1;
      if (bVar21) {
        puVar3 = (undefined4 *)((long)&local_1adc + 4);
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xe0);
      puVar3 = local_1ad4 + uVar29 * 0xe;
      if (bVar21) {
        puVar3 = local_1ad4;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xe4);
      puVar3 = local_1ad4 + uVar29 * 0xe + 1;
      if (bVar21) {
        puVar3 = local_1ad4 + 1;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xe8);
      puVar3 = local_1ad4 + uVar29 * 0xe + 2;
      if (bVar21) {
        puVar3 = local_1ad4 + 2;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xec);
      puVar3 = local_1ad4 + uVar29 * 0xe + 3;
      if (bVar21) {
        puVar3 = local_1ad4 + 3;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xf0);
      puVar3 = local_1ad4 + uVar29 * 0xe + 4;
      if (bVar21) {
        puVar3 = local_1ad4 + 4;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xf4);
      iVar62 = iVar62 + 1;
      *(undefined2 *)(lVar43 + 0xc0) = 0;
      *(undefined1 *)(lVar43 + 0xc2) = 0;
      *(undefined8 *)(lVar43 + 0xc3) = 0xffffffffffffffff;
      *(undefined8 *)(lVar43 + 0xcb) = 0xffffffffffffffff;
      *(undefined8 *)(lVar43 + 0xd3) = 0xffffffffffffffff;
      *(undefined1 *)(lVar43 + 0xdb) = 0xff;
      *(undefined8 *)(lVar43 + 0xdc) = 0;
      *(undefined8 *)(lVar43 + 0xe4) = 0;
      *(undefined8 *)(lVar43 + 0xec) = 0xffffffffffffffff;
      *(undefined4 *)(lVar43 + 0xf4) = 0xffffffff;
    } while (iVar39 != iVar62);
  }
  iVar39 = *(int *)(param_1 + 0xb0);
  if (iVar39 != 0) {
    iVar62 = 0;
    lVar36 = *(long *)(param_1 + 0xb8);
    do {
      lVar43 = lVar36 + (long)iVar62 * 0xf8;
      uVar29 = (ulong)*(uint *)(lVar43 + 4);
      bVar21 = 0x78 < *(uint *)(lVar43 + 4);
      puVar3 = (undefined4 *)((long)local_1af8 + uVar29 * 0xe * 4);
      if (bVar21) {
        puVar3 = (undefined4 *)local_1af8;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xc0);
      puVar50 = &uStack_1ae4 + uVar29 * 7 + -2;
      if (bVar21) {
        puVar50 = (undefined8 *)(local_1af8 + 4);
      }
      *(undefined4 *)puVar50 = *(undefined4 *)(lVar43 + 0xc4);
      puVar3 = (undefined4 *)((long)&uStack_1ae4 + (uVar29 * 0xe + -3) * 4);
      if (bVar21) {
        puVar3 = &local_1af0;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 200);
      puVar50 = &uStack_1ae4 + uVar29 * 7 + -1;
      if (bVar21) {
        puVar50 = (undefined8 *)&uStack_1aec;
      }
      *puVar50 = *(undefined8 *)(lVar43 + 0xcc);
      puVar50 = &uStack_1ae4 + uVar29 * 7;
      if (bVar21) {
        puVar50 = &uStack_1ae4;
      }
      *(undefined4 *)puVar50 = *(undefined4 *)(lVar43 + 0xd4);
      puVar3 = (undefined4 *)((long)&uStack_1ae4 + (uVar29 * 0xe + 1) * 4);
      if (bVar21) {
        puVar3 = (undefined4 *)((long)&uStack_1ae4 + 4);
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xd8);
      puVar50 = &uStack_1ae4 + uVar29 * 7 + 1;
      if (bVar21) {
        puVar50 = &local_1adc;
      }
      *(undefined4 *)puVar50 = *(undefined4 *)(lVar43 + 0xdc);
      puVar3 = local_1ad4 + uVar29 * 0xe + -1;
      if (bVar21) {
        puVar3 = (undefined4 *)((long)&local_1adc + 4);
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xe0);
      puVar3 = local_1ad4 + uVar29 * 0xe;
      if (bVar21) {
        puVar3 = local_1ad4;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xe4);
      puVar3 = local_1ad4 + uVar29 * 0xe + 1;
      if (bVar21) {
        puVar3 = local_1ad4 + 1;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xe8);
      puVar3 = local_1ad4 + uVar29 * 0xe + 2;
      if (bVar21) {
        puVar3 = local_1ad4 + 2;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xec);
      puVar3 = local_1ad4 + uVar29 * 0xe + 3;
      if (bVar21) {
        puVar3 = local_1ad4 + 3;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xf0);
      puVar3 = local_1ad4 + uVar29 * 0xe + 4;
      if (bVar21) {
        puVar3 = local_1ad4 + 4;
      }
      *puVar3 = *(undefined4 *)(lVar43 + 0xf4);
      iVar62 = iVar62 + 1;
      *(undefined2 *)(lVar43 + 0xc0) = 0;
      *(undefined1 *)(lVar43 + 0xc2) = 0;
      *(undefined8 *)(lVar43 + 0xc3) = 0xffffffffffffffff;
      *(undefined8 *)(lVar43 + 0xcb) = 0xffffffffffffffff;
      *(undefined8 *)(lVar43 + 0xd3) = 0xffffffffffffffff;
      *(undefined1 *)(lVar43 + 0xdb) = 0xff;
      *(undefined8 *)(lVar43 + 0xdc) = 0;
      *(undefined8 *)(lVar43 + 0xe4) = 0;
      *(undefined8 *)(lVar43 + 0xec) = 0xffffffffffffffff;
      *(undefined4 *)(lVar43 + 0xf4) = 0xffffffff;
    } while (iVar39 != iVar62);
  }
  local_1b10 = *(undefined8 *)(param_1 + 0x2519);
  uStack_1b08 = *(undefined8 *)(param_1 + 0x2521);
  local_1b00 = *(undefined1 *)(param_1 + 0x2529);
  uStack_1b30 = *(undefined8 *)(param_1 + 0x24f9);
  uStack_1b18 = *(undefined8 *)(param_1 + 0x2511);
  local_1b38 = *(undefined8 *)(param_1 + 0x24f1);
  cVar11 = *pcVar2;
  local_1b28 = *(undefined8 *)(param_1 + 0x2501);
  local_1b20 = *(undefined8 *)(param_1 + 0x2509);
  local_1b58 = *(undefined8 *)(param_1 + 0x24d1);
  uStack_1b50 = *(undefined8 *)(param_1 + 0x24d9);
  local_1b48 = *(undefined8 *)(param_1 + 0x24e1);
  uStack_1b40 = *(undefined8 *)(param_1 + 0x24e9);
  local_1b78 = *(ulong *)(param_1 + 0x24b1);
  uStack_1b70 = *(undefined8 *)(param_1 + 0x24b9);
  local_1b68 = *(undefined8 *)(param_1 + 0x24c1);
  uStack_1b60 = *(undefined8 *)(param_1 + 0x24c9);
  pcVar2[0] = '\0';
  pcVar2[1] = -1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1d8));
  if (cVar52 != '\0' && cVar11 != '\0') {
    plVar40 = *(long **)(param_1 + 0x100);
    plVar49 = (long *)(param_1 + 0xf8);
    if (plVar40 != plVar49) {
      do {
        lVar36 = plVar40[-1];
        if (*(int *)(lVar36 + 4) < *(int *)(param_1 + 0x70)) {
          if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0xa8)) {
            plVar26 = *(long **)(param_1 + 0x98);
            plVar44 = (long *)(param_1 + 0x80);
            plVar31 = (long *)(param_1 + 0x98);
            piVar57 = (int *)(param_1 + 0x90);
            if (plVar26 != (long *)0x0) goto LAB_02993c54;
            goto LAB_02993c70;
          }
        }
        else if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xe8)) {
          plVar26 = *(long **)(param_1 + 0xd8);
          plVar44 = (long *)(param_1 + 0xc0);
          plVar31 = (long *)(param_1 + 0xd8);
          piVar57 = (int *)(param_1 + 0xd0);
          if (plVar26 != (long *)0x0) {
LAB_02993c54:
            *plVar31 = *plVar26;
          }
LAB_02993c70:
          *plVar26 = lVar36;
          plVar26[2] = 0;
          plVar31 = plVar26 + 1;
          *plVar31 = 0;
          lVar36 = *plVar44;
          *plVar44 = (long)plVar31;
          plVar26[2] = (long)plVar44;
          *plVar31 = lVar36;
          if (lVar36 != 0) {
            *(long **)(lVar36 + 8) = plVar31;
          }
          *piVar57 = *piVar57 + 1;
        }
        plVar40 = (long *)plVar40[1];
      } while (plVar40 + -1 != (long *)(param_1 + 0xf0));
      plVar40 = *(long **)(param_1 + 0x100);
    }
    while (plVar40 != plVar49) {
      plVar44 = (long *)plVar40[1];
      plVar31 = plVar44;
      if (*plVar40 != 0) {
        *(long **)(*plVar40 + 8) = plVar44;
        plVar31 = (long *)plVar40[1];
      }
      if (plVar31 != (long *)0x0) {
        *plVar31 = *plVar40;
      }
      *plVar40 = 0;
      plVar40[1] = 0;
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
      plVar40[-1] = *(long *)(param_1 + 0x110);
      *(long **)(param_1 + 0x110) = plVar40 + -1;
      plVar40 = plVar44;
    }
    iVar62 = *(int *)(param_1 + 0x70);
    iVar39 = 0;
    do {
      cVar12 = *(char *)((long)&local_1b78 + (long)iVar39);
      uVar34 = (uint)cVar12;
      if ((int)uVar34 < 0) break;
      uVar25 = uVar34 - iVar62;
      if ((int)uVar34 < iVar62) {
        uVar25 = (uint)cVar12;
        if (*(uint *)(param_1 + 0x70) < uVar34 || *(uint *)(param_1 + 0x70) == uVar25) {
          uVar25 = 0;
        }
        lVar36 = *(long *)(param_1 + 0x78) + (long)(int)uVar25 * 0xf8;
        plVar40 = (long *)(param_1 + 0x80);
        do {
          plVar40 = (long *)plVar40[1];
          if (plVar40 == (long *)(param_1 + 0x80)) goto LAB_02993d50;
          plVar44 = plVar40 + -1;
        } while (lVar36 != *plVar44);
      }
      else {
        if (*(uint *)(param_1 + 0xb0) <= uVar25) {
          uVar25 = 0;
        }
        lVar36 = *(long *)(param_1 + 0xb8) + (long)(int)uVar25 * 0xf8;
        plVar40 = (long *)(param_1 + 0xc0);
        do {
          plVar40 = (long *)plVar40[1];
          if (plVar40 == (long *)(param_1 + 0xc0)) goto LAB_02993d50;
          plVar44 = plVar40 + -1;
        } while (lVar36 != *plVar44);
      }
      if ((plVar40 != (long *)0x0) && (plVar44 != (long *)0x0)) {
        if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x120)) {
          plVar31 = *(long **)(param_1 + 0x110);
          if (plVar31 != (long *)0x0) {
            *(long *)(param_1 + 0x110) = *plVar31;
          }
          *plVar31 = lVar36;
          plVar31[2] = 0;
          plVar26 = plVar31 + 1;
          *plVar26 = 0;
          lVar36 = *plVar49;
          *plVar49 = (long)plVar26;
          plVar31[2] = (long)plVar49;
          *plVar26 = lVar36;
          if (lVar36 != 0) {
            *(long **)(lVar36 + 8) = plVar26;
          }
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
        }
        if (*plVar40 != 0) {
          *(long *)(*plVar40 + 8) = plVar40[1];
        }
        if ((long *)plVar40[1] != (long *)0x0) {
          *(long *)plVar40[1] = *plVar40;
        }
        *plVar40 = 0;
        plVar40[1] = 0;
        lVar36 = 0x90;
        if (iVar62 <= cVar12) {
          lVar36 = 0xd0;
        }
        *(int *)(param_1 + lVar36) = *(int *)(param_1 + lVar36) + -1;
        lVar36 = 0x98;
        if (iVar62 <= cVar12) {
          lVar36 = 0xd8;
        }
        *plVar44 = *(long *)(param_1 + lVar36);
        *(long **)(param_1 + lVar36) = plVar44;
      }
LAB_02993d50:
      iVar39 = iVar39 + 1;
    } while (iVar39 != 0x79);
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  iVar39 = *(int *)(param_1 + 0x1a8);
  if (iVar39 != 0) {
    lVar36 = *(long *)(param_1 + 0x1b0);
    iVar62 = 0;
    do {
      lVar43 = lVar36 + (long)iVar62 * 0x50;
      plVar49 = (long *)(lVar43 + 0x18);
      lVar54 = *plVar49;
      lVar51 = *(long *)(lVar43 + 0x28);
      if (lVar51 != lVar43 + 0x20) {
        bVar10 = *(byte *)(lVar54 + 0x130);
        uVar35 = *(undefined4 *)(lVar54 + 0x134);
        uVar53 = *(undefined1 *)(lVar54 + 0x133);
        if (*(char *)(lVar54 + 0x131) == '\0') {
          do {
            lVar43 = *(long *)(lVar51 + -8);
            if ((bVar10 & 1) != 0) {
              *(undefined4 *)(lVar43 + 0x94) = uVar35;
              *(ushort *)(lVar43 + 0x88) = *(ushort *)(lVar43 + 0x88) | 2;
            }
            if ((bVar10 >> 1 & 1) != 0) {
              *(undefined1 *)(lVar43 + 0x8a) = uVar53;
              *(ushort *)(lVar43 + 0x88) = *(ushort *)(lVar43 + 0x88) | 4;
            }
            lVar51 = *(long *)(lVar51 + 8);
          } while ((long *)(lVar51 + -8) != plVar49);
        }
        else {
          uVar24 = *(undefined4 *)(lVar54 + 0x138);
          if ((bVar10 & 1) == 0) {
            if ((bVar10 >> 1 & 1) == 0) {
              do {
                lVar43 = *(long *)(lVar51 + -8);
                *(undefined4 *)(lVar43 + 0x8c) = uVar24;
                *(ushort *)(lVar43 + 0x88) = *(ushort *)(lVar43 + 0x88) | 1;
                lVar51 = *(long *)(lVar51 + 8);
              } while ((long *)(lVar51 + -8) != plVar49);
            }
            else {
              do {
                lVar43 = *(long *)(lVar51 + -8);
                *(undefined4 *)(lVar43 + 0x8c) = uVar24;
                *(undefined1 *)(lVar43 + 0x8a) = uVar53;
                *(ushort *)(lVar43 + 0x88) = *(ushort *)(lVar43 + 0x88) | 5;
                lVar51 = *(long *)(lVar51 + 8);
              } while ((long *)(lVar51 + -8) != plVar49);
            }
          }
          else if ((bVar10 >> 1 & 1) == 0) {
            do {
              lVar43 = *(long *)(lVar51 + -8);
              *(undefined4 *)(lVar43 + 0x8c) = uVar24;
              *(undefined4 *)(lVar43 + 0x94) = uVar35;
              *(ushort *)(lVar43 + 0x88) = *(ushort *)(lVar43 + 0x88) | 3;
              lVar51 = *(long *)(lVar51 + 8);
            } while ((long *)(lVar51 + -8) != plVar49);
          }
          else {
            do {
              lVar43 = *(long *)(lVar51 + -8);
              *(undefined4 *)(lVar43 + 0x8c) = uVar24;
              *(undefined4 *)(lVar43 + 0x94) = uVar35;
              *(undefined1 *)(lVar43 + 0x8a) = uVar53;
              *(ushort *)(lVar43 + 0x88) = *(ushort *)(lVar43 + 0x88) | 7;
              lVar51 = *(long *)(lVar51 + 8);
            } while ((long *)(lVar51 + -8) != plVar49);
          }
        }
      }
      iVar62 = iVar62 + 1;
    } while (iVar39 != iVar62);
  }
  plVar44 = *(long **)(param_1 + 0x100);
  plVar49 = (long *)(param_1 + 0xf8);
  plVar40 = (long *)(param_1 + 0xf0);
  if (plVar44 != plVar49) {
    do {
      lVar36 = plVar44[-1];
      if ((bVar7 & 1) == 0) goto LAB_02994064;
      if (DAT_04c487d4 == -1) {
LAB_02994290:
        if ((*(int *)(lVar36 + 0x14) != -1) && (DAT_05574040 != 0)) {
          puVar50 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar43 = (**(code **)(*(long *)*puVar50 + 0x38))();
            if (lVar43 != 0) {
              lVar43 = lVar43 + 0x70;
              goto LAB_029942f4;
            }
          }
          else if (((puVar50 != (undefined8 *)0x0) && ((long *)puVar50[0x26] != (long *)0x0)) &&
                  (lVar43 = (**(code **)(*(long *)puVar50[0x26] + 0x38))(), lVar43 != 0)) {
LAB_029942f4:
            if (*(long **)(lVar43 + 0x28) == (long *)0x0) {
              uVar29 = 0;
            }
            else {
              puVar50 = (undefined8 *)**(long **)(lVar43 + 0x28);
              uVar29 = 0;
              if (puVar50 != (undefined8 *)0x0) {
                uVar29 = (**(code **)*puVar50)();
              }
            }
            if (*(uint *)(lVar36 + 0x14) < 8) {
              lVar51 = *(long *)(lVar43 + 0x10) + *(long *)(lVar43 + 8) +
                       (ulong)*(uint *)(lVar36 + 0x14) * 0x48;
              bVar21 = *(long *)(lVar51 + 0x1e33b0) != 0 || *(long *)(lVar51 + 0x1e33b8) != 0;
            }
            else {
              bVar21 = false;
            }
            if ((((uVar29 & 1) != 0) && (*(long *)(lVar43 + 0x28) != 0)) &&
               (puVar50 = *(undefined8 **)(*(long *)(lVar43 + 0x28) + 8),
               puVar50 != (undefined8 *)0x0)) {
              (**(code **)*puVar50)();
            }
            if (!bVar21) {
              uVar32 = *(ushort *)(lVar36 + 0x88);
              goto LAB_0299404c;
            }
          }
        }
      }
      else {
        local_1b84 = 0x20;
        puVar6 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar6 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar6 + 4) & 1) == 0) goto LAB_02994290;
        iVar39 = *(int *)(lVar36 + 0x14);
        if ((iVar39 == -1) || (iVar39 == 0xd)) goto LAB_02994064;
        FUN_02507c6c(&local_1b84,7,1,0,0);
        uVar34 = local_1b84 & 0xff;
        local_1b90[0] = 0xff;
        if ((local_1b84 & 0xff) < 8) {
          local_1b90[0] = (byte)local_1b84;
        }
        local_1b8c = local_1b80;
        local_1b88 = local_1b7c;
        if ((local_1b84 & 0xff) < 8) {
          bVar10 = (byte)local_1b84;
          while ((int)(char)iVar39 != uVar34) {
            uVar29 = (ulong)bVar10;
            do {
              uVar61 = uVar29;
              if (uVar61 == 7) goto LAB_02994040;
              uVar27 = FUN_02507924(local_1b90,PTR_DAT_04bb5038 + uVar61 + 1);
              uVar29 = uVar61 + 1;
            } while ((uVar27 & 1) == 0);
            bVar10 = (&DAT_0548e169)[uVar61];
            if (7 < bVar10) goto LAB_02994040;
            local_1b90[0] = bVar10;
            uVar34 = (uint)bVar10;
          }
          goto LAB_02994064;
        }
LAB_02994040:
        uVar32 = *(ushort *)(lVar36 + 0x88);
        if (*(char *)(lVar36 + 8) == '\0') {
          *(ushort *)(lVar36 + 0x88) = uVar32 | 2;
          uVar35 = 0xd;
        }
        else {
LAB_0299404c:
          *(undefined1 *)(lVar36 + 0x8a) = 0;
          *(undefined4 *)(lVar36 + 0x8c) = 0;
          *(ushort *)(lVar36 + 0x88) = uVar32 | 7;
          uVar35 = 0xffffffff;
        }
        *(undefined4 *)(lVar36 + 0x94) = uVar35;
      }
LAB_02994064:
      FUN_02995da0(param_1,lVar36,lVar36 + 0x88,0,bVar8 & 1,&local_80);
      *(undefined8 *)(lVar36 + 0x8b) = 0xffffffffffffffff;
      *(undefined8 *)(lVar36 + 0x93) = 0xffffffffffffffff;
      *(undefined8 *)(lVar36 + 0x9b) = 0xffffffffffffffff;
      *(undefined1 *)(lVar36 + 0xa3) = 0xff;
      uVar29 = (ulong)*(uint *)(lVar36 + 4);
      puVar41 = (undefined2 *)((long)local_1af8 + uVar29 * 0x1c * 2);
      bVar21 = 0x78 < *(uint *)(lVar36 + 4);
      *(undefined8 *)(lVar36 + 0xb4) = 0xffffffffffffffff;
      *(undefined2 *)(lVar36 + 0x88) = 0;
      puVar47 = puVar41;
      if (bVar21) {
        puVar47 = (undefined2 *)local_1af8;
      }
      *(undefined1 *)(lVar36 + 0x8a) = 0;
      *(undefined8 *)(lVar36 + 0xa4) = 0;
      puVar14 = puVar41;
      if (bVar21) {
        puVar14 = (undefined2 *)local_1af8;
      }
      *(undefined8 *)(lVar36 + 0xac) = 0;
      if (bVar21) {
        puVar41 = (undefined2 *)local_1af8;
      }
      puVar50 = (undefined8 *)((ulong)puVar41 | 3);
      *(undefined4 *)(lVar36 + 0xbc) = 0xffffffff;
      puVar45 = &uStack_1ae4 + uVar29 * 7 + 1;
      if (bVar21) {
        puVar45 = &local_1adc;
      }
      puVar3 = local_1ad4 + uVar29 * 0xe + 2;
      if (bVar21) {
        puVar3 = local_1ad4 + 2;
      }
      puVar4 = local_1ad4 + uVar29 * 0xe + 3;
      if (bVar21) {
        puVar4 = local_1ad4 + 3;
      }
      puVar5 = local_1ad4 + uVar29 * 0xe + 4;
      if (bVar21) {
        puVar5 = local_1ad4 + 4;
      }
      FUN_02995da0(param_1,lVar36,puVar47,1,bVar8 & 1,&local_80);
      *puVar47 = 0;
      *(undefined1 *)(puVar50 + 3) = 0xff;
      *puVar50 = 0xffffffffffffffff;
      *(undefined1 *)((ulong)puVar14 | 2) = 0;
      *puVar5 = 0xffffffff;
      puVar50[1] = 0xffffffffffffffff;
      puVar50[2] = 0xffffffffffffffff;
      *puVar3 = 0xffffffff;
      *puVar4 = 0xffffffff;
      *puVar45 = 0;
      puVar45[1] = 0;
      plVar44 = (long *)plVar44[1];
    } while (plVar44 + -1 != plVar40);
  }
  if (DAT_04c487d4 == -1) goto LAB_02994648;
  local_1af8._0_4_ = 0x20;
  puVar6 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar6 = PTR_DAT_04bc39f8;
  }
  if (((*(uint *)(puVar6 + 4) & 1) == 0) || (*(char *)(param_1 + 0x26a4) == '\0'))
  goto LAB_02994648;
  uVar32 = *(ushort *)(param_1 + 0x25b4);
  if ((uVar32 & 1) == 0) {
LAB_0299441c:
    if ((uVar32 >> 2 & 1) == 0) goto LAB_02994420;
LAB_02994470:
    *(undefined1 *)(param_1 + 0x2534) = *(undefined1 *)(param_1 + 0x25b6);
    *(undefined1 *)(param_1 + 0x2624) = *(undefined1 *)(param_1 + 0x25b6);
    if ((uVar32 >> 1 & 1) != 0) goto LAB_02994480;
LAB_0299448c:
    *(undefined2 *)(param_1 + 0x25b4) = 0;
    *(undefined1 *)(param_1 + 0x25b6) = 0;
    *(undefined8 *)(param_1 + 0x25d0) = 0;
    *(undefined8 *)(param_1 + 0x25d8) = 0;
    *(undefined8 *)(param_1 + 0x25b7) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25bf) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25c7) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x25cf) = 0xff;
    *(undefined8 *)(param_1 + 0x25e0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x25e8) = 0xffffffff;
  }
  else {
    if ((*(char *)(param_1 + 0x2534) != '\0') && (*(char *)(param_1 + 0x25b6) == '\0')) {
      *(undefined4 *)(param_1 + 0x2538) = *(undefined4 *)(param_1 + 0x25b8);
      goto LAB_0299441c;
    }
    *(undefined4 *)(param_1 + 0x2538) = *(undefined4 *)(param_1 + 0x25b8);
    *(undefined4 *)(param_1 + 0x2628) = *(undefined4 *)(param_1 + 0x25b8);
    if ((uVar32 >> 2 & 1) != 0) goto LAB_02994470;
LAB_02994420:
    if ((uVar32 >> 1 & 1) != 0) {
LAB_02994480:
      *(undefined4 *)(param_1 + 0x2540) = *(undefined4 *)(param_1 + 0x25c0);
      *(undefined4 *)(param_1 + 0x2630) = *(undefined4 *)(param_1 + 0x25c0);
      goto LAB_0299448c;
    }
    *(undefined2 *)(param_1 + 0x25b4) = 0;
    *(undefined1 *)(param_1 + 0x25b6) = 0;
    *(undefined8 *)(param_1 + 0x25d0) = 0;
    *(undefined8 *)(param_1 + 0x25d8) = 0;
    *(undefined8 *)(param_1 + 0x25b7) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25bf) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25c7) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x25cf) = 0xff;
    *(undefined8 *)(param_1 + 0x25e0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x25e8) = 0xffffffff;
    if ((uVar32 & 1) == 0) goto LAB_02994648;
  }
  puVar50 = (undefined8 *)(param_1 + 0x274 + (ulong)*(byte *)(param_1 + 0x1f8) * 0x24);
  if (0xf1 < *(byte *)(param_1 + 0x1f8)) {
    puVar50 = (undefined8 *)(param_1 + 0x274);
  }
  *puVar50 = 0xf6f6f6f6ffff0000;
  puVar50[1] = 0xfff6fff6fff6fff6;
  *(undefined4 *)(puVar50 + 2) = 0xfff6fff6;
  *(undefined8 *)((long)puVar50 + 0x14) = 0xff7fffffff7fffff;
  *(undefined8 *)((long)puVar50 + 0x1c) = 0xff7fffffff7fffff;
  if (*(char *)(param_1 + 0x26a4) == '\0') {
    memset((void *)(param_1 + 0x252c),0,0x178);
    *(undefined8 *)(param_1 + 0x2538) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x2536) = 0xff;
    *(undefined1 *)(param_1 + 0x2626) = 0xff;
    uVar33 = 0xffff;
    *(undefined4 *)(param_1 + 0x2530) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2540) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x2548) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x254c) = 0x42f00000;
    *(undefined8 *)(param_1 + 0x2550) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2558) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2560) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2568) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x2570) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x25b7) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25bf) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25c7) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x25cf) = 0xff;
    *(undefined8 *)(param_1 + 0x25d0) = 0;
    *(undefined8 *)(param_1 + 0x25d8) = 0;
    *(undefined8 *)(param_1 + 0x25e0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x25e8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x25ef) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25f7) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x25ff) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x2607) = 0xff;
    *(undefined8 *)(param_1 + 0x2608) = 0;
    *(undefined8 *)(param_1 + 0x2610) = 0;
    *(undefined8 *)(param_1 + 0x2618) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x2620) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2628) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2630) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x2638) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x263c) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x2660) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2658) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2650) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2648) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2640) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2574) = 0;
    *(undefined8 *)(param_1 + 0x257c) = 0;
    *(undefined8 *)(param_1 + 0x2664) = 0;
    *(undefined8 *)(param_1 + 0x266c) = 0;
  }
  else {
    uVar33 = (undefined2)*(undefined4 *)(param_1 + 0x2538);
  }
  *(undefined2 *)(puVar50 + 1) = uVar33;
  *(char *)((long)puVar50 + 7) = (char)*(undefined4 *)(param_1 + 0x2540);
  *(undefined1 *)((long)puVar50 + 4) = *(undefined1 *)(param_1 + 0x2534);
  *(char *)((long)puVar50 + 5) = (char)*(undefined4 *)(param_1 + 0x2544);
  *(char *)((long)puVar50 + 6) = (char)*(undefined4 *)(param_1 + 0x2548);
  *(undefined4 *)((long)puVar50 + 0x14) = *(undefined4 *)(param_1 + 0x2574);
  *(undefined4 *)(puVar50 + 3) = *(undefined4 *)(param_1 + 0x2578);
  *(undefined4 *)((long)puVar50 + 0x1c) = *(undefined4 *)(param_1 + 0x257c);
  *(undefined4 *)(puVar50 + 4) = *(undefined4 *)(param_1 + 0x2580);
  *(short *)((long)puVar50 + 10) = (short)*(undefined4 *)(param_1 + 0x2550);
  *(short *)((long)puVar50 + 0xc) = (short)*(undefined4 *)(param_1 + 0x2554);
  *(short *)((long)puVar50 + 0xe) = (short)*(undefined4 *)(param_1 + 0x2558);
  *(char *)(param_1 + 0x1f8) = *(char *)(param_1 + 0x1f8) + '\x01';
LAB_02994648:
  if (cVar52 != '\0' && cVar11 != '\0') {
    plVar26 = *(long **)(param_1 + 0x160);
    plVar44 = (long *)(param_1 + 0x158);
    plVar31 = (long *)(param_1 + 0x150);
    if (plVar26 != plVar44) {
      plVar30 = (long *)(param_1 + 0x128);
      do {
        puVar47 = (undefined2 *)plVar26[-1];
        *(undefined1 *)(puVar47 + 4) = 0;
        *(undefined4 *)(puVar47 + 6) = 0;
        *(undefined8 *)(puVar47 + 8) = 0xffffffffffffffff;
        *puVar47 = 0;
        *(undefined4 *)(puVar47 + 2) = 0;
        plVar48 = *(long **)(puVar47 + 0x14);
        while (plVar48 != (long *)(puVar47 + 0x10)) {
          plVar28 = (long *)plVar48[1];
          plVar55 = plVar28;
          if (*plVar48 != 0) {
            *(long **)(*plVar48 + 8) = plVar28;
            plVar55 = (long *)plVar48[1];
          }
          if (plVar55 != (long *)0x0) {
            *plVar55 = *plVar48;
          }
          *plVar48 = 0;
          plVar48[1] = 0;
          *(int *)(puVar47 + 0x18) = *(int *)(puVar47 + 0x18) + -1;
          plVar48[-1] = *(long *)(puVar47 + 0x1c);
          *(long **)(puVar47 + 0x1c) = plVar48 + -1;
          plVar48 = plVar28;
        }
        if (*(int *)(param_1 + 0x138) < *(int *)(param_1 + 0x150)) {
          puVar50 = *(undefined8 **)(param_1 + 0x140);
          if (puVar50 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x140) = *puVar50;
          }
          *puVar50 = puVar47;
          puVar50[2] = 0;
          plVar48 = puVar50 + 1;
          *plVar48 = 0;
          lVar36 = *plVar30;
          *plVar30 = (long)plVar48;
          puVar50[2] = plVar30;
          *plVar48 = lVar36;
          if (lVar36 != 0) {
            *(long **)(lVar36 + 8) = plVar48;
          }
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
        }
        plVar26 = (long *)plVar26[1];
      } while (plVar26 + -1 != plVar31);
      plVar26 = *(long **)(param_1 + 0x160);
    }
    while (plVar26 != plVar44) {
      plVar30 = (long *)plVar26[1];
      plVar48 = plVar30;
      if (*plVar26 != 0) {
        *(long **)(*plVar26 + 8) = plVar30;
        plVar48 = (long *)plVar26[1];
      }
      if (plVar48 != (long *)0x0) {
        *plVar48 = *plVar26;
      }
      *plVar26 = 0;
      plVar26[1] = 0;
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
      plVar26[-1] = *(long *)(param_1 + 0x170);
      *(long **)(param_1 + 0x170) = plVar26 + -1;
      plVar26 = plVar30;
    }
    iVar39 = *(int *)(param_1 + 0x198);
    if (iVar39 != 0) {
      lVar36 = *(long *)(param_1 + 0x1a0);
      iVar62 = 0;
      do {
        puVar47 = (undefined2 *)(lVar36 + (long)iVar62 * 0x50);
        *(undefined1 *)(puVar47 + 4) = 1;
        *(undefined4 *)(puVar47 + 6) = 0;
        *(undefined8 *)(puVar47 + 8) = 0xffffffffffffffff;
        *puVar47 = 0;
        *(undefined4 *)(puVar47 + 2) = 0;
        if (*(long **)(puVar47 + 0x14) != (long *)(puVar47 + 0x10)) {
          plVar26 = (long *)(lVar36 + (long)iVar62 * 0x50 + 0x38);
          plVar30 = *(long **)(puVar47 + 0x14);
          do {
            plVar48 = (long *)plVar30[1];
            plVar28 = plVar48;
            if (*plVar30 != 0) {
              *(long **)(*plVar30 + 8) = plVar48;
              plVar28 = (long *)plVar30[1];
            }
            if (plVar28 != (long *)0x0) {
              *plVar28 = *plVar30;
            }
            *plVar30 = 0;
            plVar30[1] = 0;
            lVar43 = *plVar26;
            *(int *)(puVar47 + 0x18) = *(int *)(puVar47 + 0x18) + -1;
            plVar30[-1] = lVar43;
            *plVar26 = (long)(plVar30 + -1);
            plVar30 = plVar48;
          } while (plVar48 != (long *)(puVar47 + 0x10));
        }
        iVar62 = iVar62 + 1;
      } while (iVar39 != iVar62);
    }
    iVar39 = *(int *)(param_1 + 0x1a8);
    if (iVar39 != 0) {
      lVar36 = *(long *)(param_1 + 0x1b0);
      iVar62 = 0;
      do {
        puVar47 = (undefined2 *)(lVar36 + (long)iVar62 * 0x50);
        *(undefined1 *)(puVar47 + 4) = 1;
        *(undefined4 *)(puVar47 + 6) = 0;
        *(undefined8 *)(puVar47 + 8) = 0xffffffffffffffff;
        *puVar47 = 0;
        *(undefined4 *)(puVar47 + 2) = 0;
        if (*(long **)(puVar47 + 0x14) != (long *)(puVar47 + 0x10)) {
          plVar26 = (long *)(lVar36 + (long)iVar62 * 0x50 + 0x38);
          plVar30 = *(long **)(puVar47 + 0x14);
          do {
            plVar48 = (long *)plVar30[1];
            plVar28 = plVar48;
            if (*plVar30 != 0) {
              *(long **)(*plVar30 + 8) = plVar48;
              plVar28 = (long *)plVar30[1];
            }
            if (plVar28 != (long *)0x0) {
              *plVar28 = *plVar30;
            }
            *plVar30 = 0;
            plVar30[1] = 0;
            lVar43 = *plVar26;
            *(int *)(puVar47 + 0x18) = *(int *)(puVar47 + 0x18) + -1;
            plVar30[-1] = lVar43;
            *plVar26 = (long)(plVar30 + -1);
            plVar30 = plVar48;
          } while (plVar48 != (long *)(puVar47 + 0x10));
        }
        iVar62 = iVar62 + 1;
      } while (iVar39 != iVar62);
    }
    lVar36 = *(long *)(param_1 + 0x100);
    if ((long *)(lVar36 + -8) != plVar40) {
      do {
        lVar43 = *(long *)(lVar36 + -8);
        uVar34 = *(uint *)(lVar43 + 0x10);
        if (uVar34 != 0xffffffff) {
          uVar25 = *(uint *)(param_1 + 0x188);
          if ((int)uVar34 < 0) {
LAB_02994a40:
            if (*(int *)(lVar43 + 0xc) < 1) goto LAB_0299495c;
            if (uVar25 <= uVar34) {
              uVar34 = 0;
            }
            lVar51 = param_1 + 0x128;
            do {
              lVar51 = *(long *)(lVar51 + 8);
              if (lVar51 == param_1 + 0x128) {
                lVar51 = 0;
                break;
              }
            } while (*(long *)(param_1 + 400) + (long)(int)uVar34 * 0x50 != *(long *)(lVar51 + -8));
            plVar26 = (long *)0x0;
            if (lVar51 != 0) {
              plVar26 = (long *)(lVar51 + -8);
            }
            lVar54 = *plVar26;
            plVar30 = plVar26 + 1;
            if (*plVar30 != 0) {
              *(long *)(*plVar30 + 8) = plVar26[2];
            }
            if ((long *)plVar26[2] != (long *)0x0) {
              *(long *)plVar26[2] = *plVar30;
            }
            *plVar30 = 0;
            plVar26[2] = 0;
            *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
            *plVar26 = *(long *)(param_1 + 0x140);
            *(long **)(param_1 + 0x140) = plVar26;
            uVar53 = 1;
            if (*(int *)(lVar43 + 0x18) == 4) {
              uVar53 = 2;
            }
            *(undefined1 *)(lVar54 + 8) = uVar53;
            uVar35 = *(undefined4 *)(lVar43 + 0xc);
            *(undefined8 *)(lVar54 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(lVar54 + 0xc) = uVar35;
            if (*(int *)(param_1 + 0x168) < *(int *)(param_1 + 0x180)) {
              plVar26 = *(long **)(param_1 + 0x170);
              if (plVar26 != (long *)0x0) {
                *(long *)(param_1 + 0x170) = *plVar26;
              }
              *plVar26 = lVar54;
              plVar26[2] = 0;
              plVar30 = plVar26 + 1;
              *plVar30 = 0;
              lVar51 = *plVar44;
              *plVar44 = (long)plVar30;
              plVar26[2] = (long)plVar44;
              *plVar30 = lVar51;
              if (lVar51 != 0) {
                *(long **)(lVar51 + 8) = plVar30;
              }
              *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
            }
          }
          else {
            uVar13 = uVar34 - uVar25;
            if ((int)uVar34 < (int)uVar25) {
              lVar51 = *(long *)(param_1 + 0x160);
              cVar52 = '\x01';
              if (*(int *)(lVar43 + 0x18) == 4) {
                cVar52 = '\x02';
              }
              if ((long *)(lVar51 + -8) != plVar31) {
                do {
                  lVar54 = *(long *)(lVar51 + -8);
                  if ((*(char *)(lVar54 + 8) == cVar52) &&
                     (*(int *)(lVar54 + 0xc) == *(int *)(lVar43 + 0xc))) goto LAB_02994b40;
                  lVar51 = *(long *)(lVar51 + 8);
                } while ((long *)(lVar51 + -8) != plVar31);
              }
              goto LAB_02994a40;
            }
            iVar39 = *(uint *)(param_1 + 0x198) + uVar25;
            uVar56 = uVar34 - iVar39;
            if (iVar39 <= (int)uVar34) {
              if ((int)uVar34 < (int)(iVar39 + *(uint *)(param_1 + 0x1a8))) {
                if (*(uint *)(param_1 + 0x1a8) <= uVar56) {
                  uVar56 = 0;
                }
                lVar54 = *(long *)(param_1 + 0x1b0);
                if (lVar54 != 0) goto LAB_02994a30;
              }
              goto LAB_02994a40;
            }
            if (*(uint *)(param_1 + 0x198) <= uVar13) {
              uVar13 = 0;
            }
            lVar54 = *(long *)(param_1 + 0x1a0);
            uVar56 = uVar13;
            if (lVar54 == 0) goto LAB_02994a40;
LAB_02994a30:
            lVar54 = lVar54 + (long)(int)uVar56 * 0x50;
          }
LAB_02994b40:
          *(undefined4 *)(lVar43 + 0x10) = *(undefined4 *)(*(long *)(lVar54 + 0x18) + 4);
          piVar57 = (int *)(lVar54 + 0x30);
          if (*piVar57 < *(int *)(lVar54 + 0x48)) {
            plVar30 = *(long **)(lVar54 + 0x38);
            plVar26 = (long *)(lVar54 + 0x20);
            if (plVar30 != (long *)0x0) {
              *(long *)(lVar54 + 0x38) = *plVar30;
            }
            *plVar30 = lVar43;
            plVar30[2] = 0;
            plVar48 = plVar30 + 1;
            *plVar48 = 0;
            lVar43 = *plVar26;
            *plVar26 = (long)plVar48;
            plVar30[2] = (long)plVar26;
            *plVar48 = lVar43;
            if (lVar43 != 0) {
              *(long **)(lVar43 + 8) = plVar48;
            }
            *piVar57 = *piVar57 + 1;
          }
        }
LAB_0299495c:
        lVar36 = *(long *)(lVar36 + 8);
      } while ((long *)(lVar36 + -8) != plVar40);
    }
  }
  if ((bVar9 & 1) == 0 && (bVar22 || bVar23)) {
    if (DAT_04c487d4 == -1) {
      lVar36 = 1;
    }
    else {
      puVar6 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar6 = PTR_DAT_04bc39f8;
      }
      lVar36 = 0x32;
      if ((*(uint *)(puVar6 + 4) & 1) == 0) {
        lVar36 = 1;
      }
    }
    local_1af8 = (undefined1  [8])(PTR_DAT_04bbfe68 + 0x10);
    local_1af0 = (undefined4)lVar36;
    uStack_1aec = (&DAT_0516b108)[lVar36];
    bStack_1ae8 = FUN_017baf44();
    uVar20 = _UNK_04102888;
    uVar19 = _DAT_04102880;
    uVar18 = _UNK_041023d8;
    uVar17 = _DAT_041023d0;
    uVar16 = _UNK_04102208;
    uVar15 = _DAT_04102200;
    lVar36 = param_1 + 0x150;
    bStack_1ae8 = bStack_1ae8 & 1;
    if (*(long *)(param_1 + 0x160) != param_1 + 0x158) {
      lVar43 = *(long *)(param_1 + 0x160);
      do {
        local_1bf0 = *(long *)(lVar43 + 8);
        puVar58 = *(undefined1 **)(lVar43 + -8);
        iVar39 = *(int *)(puVar58 + 0xc);
        uVar34 = (int)(char)puVar58[1] - 1;
        if (0 < (char)puVar58[1]) {
          if ((uVar34 & 0xff) == 0) {
            lVar51 = *(long *)(puVar58 + 0x18);
            *(undefined4 *)(lVar51 + 0x138) = *(undefined4 *)(puVar58 + 4);
            *(undefined8 *)(lVar51 + 0x140) = 0xffffffffffffffff;
            *(undefined2 *)(lVar51 + 0x131) = 0x101;
            *puVar58 = 0;
            *(undefined4 *)(puVar58 + 4) = 0;
          }
          puVar58[1] = (char)uVar34;
        }
        plVar40 = *(long **)(puVar58 + 0x28);
        if (plVar40 != (long *)(puVar58 + 0x20)) {
          plVar44 = plVar40 + -1;
LAB_02994d70:
          plVar26 = (long *)plVar40[1];
          puVar59 = (undefined1 *)plVar40[-1];
          plVar31 = plVar49;
          if (*param_2 == 0) {
LAB_02995120:
            uVar34 = *(uint *)(puVar59 + 0x14);
            if (puVar59[8] != '\0') {
              plVar31 = (long *)plVar40[1];
              if (*plVar40 != 0) {
                *(long **)(*plVar40 + 8) = plVar31;
                plVar31 = (long *)plVar40[1];
              }
              if (plVar31 != (long *)0x0) {
                *plVar31 = *plVar40;
              }
              *plVar40 = 0;
              plVar40[1] = 0;
              *(int *)(puVar58 + 0x30) = *(int *)(puVar58 + 0x30) + -1;
              *plVar44 = *(long *)(puVar58 + 0x38);
              *(long **)(puVar58 + 0x38) = plVar44;
              *(undefined4 *)(puVar59 + 0x10) = 0xffffffff;
              lVar51 = *(long *)(param_1 + 0x1a0);
              uVar25 = uVar34;
              if (*(uint *)(param_1 + 0x198) <= uVar34) {
                uVar25 = 0;
              }
              puVar47 = (undefined2 *)(lVar51 + (long)(int)uVar25 * 0x50);
              lVar54 = *(long *)(puVar47 + 0xc);
              *(undefined4 *)(lVar54 + 0x138) = 0;
              *(undefined1 *)(lVar54 + 0x131) = 1;
              *(undefined8 *)(lVar54 + 0x140) = 0xffffffffffffffff;
              *(undefined2 *)(lVar54 + 0x132) = 1;
              *(uint *)(lVar54 + 0x134) = uVar34;
              *(byte *)(lVar54 + 0x130) = *(byte *)(lVar54 + 0x130) | 3;
              *(undefined4 *)(puVar47 + 2) = 0xffffffff;
              *(undefined4 *)(puVar47 + 6) = 0;
              *(undefined8 *)(puVar47 + 8) = 0xffffffffffffffff;
              *puVar47 = 0x201;
              *(undefined4 *)(puVar59 + 0x10) = *(undefined4 *)(*(long *)(puVar47 + 0xc) + 4);
              if (*(int *)(puVar47 + 0x18) < *(int *)(puVar47 + 0x24)) {
                puVar45 = (undefined8 *)(lVar51 + (long)(int)uVar25 * 0x50 + 0x38);
                puVar50 = (undefined8 *)*puVar45;
                if (puVar50 != (undefined8 *)0x0) {
                  *puVar45 = *puVar50;
                }
                *puVar50 = puVar59;
                puVar50[2] = 0;
                plVar44 = puVar50 + 1;
                *plVar44 = 0;
                plVar40 = (long *)(puVar47 + 0x10);
                lVar51 = *plVar40;
                *plVar40 = (long)plVar44;
                puVar50[2] = plVar40;
                *plVar44 = lVar51;
                if (lVar51 != 0) {
                  *(long **)(lVar51 + 8) = plVar44;
                }
                *(int *)(puVar47 + 0x18) = *(int *)(puVar47 + 0x18) + 1;
              }
              goto LAB_02994d60;
            }
            iVar62 = *(int *)(puVar59 + 0xc);
            if (iVar62 != 0) {
              if (iVar62 != iVar39) {
                plVar31 = (long *)plVar40[1];
                if (*plVar40 != 0) {
                  *(long **)(*plVar40 + 8) = plVar31;
                  plVar31 = (long *)plVar40[1];
                }
                if (plVar31 != (long *)0x0) {
                  *plVar31 = *plVar40;
                }
                *plVar40 = 0;
                plVar40[1] = 0;
                *(int *)(puVar58 + 0x30) = *(int *)(puVar58 + 0x30) + -1;
                *plVar44 = *(long *)(puVar58 + 0x38);
                *(long **)(puVar58 + 0x38) = plVar44;
                *(undefined4 *)(puVar59 + 0x10) = 0xffffffff;
                lVar51 = *(long *)(param_1 + 0x160);
                cVar52 = '\x01';
                if (*(int *)(puVar59 + 0x18) == 4) {
                  cVar52 = '\x02';
                }
                for (; lVar51 + -8 != lVar36; lVar51 = *(long *)(lVar51 + 8)) {
                  puVar47 = *(undefined2 **)(lVar51 + -8);
                  if ((*(char *)(puVar47 + 4) == cVar52) && (*(int *)(puVar47 + 6) == iVar62))
                  goto LAB_02995340;
                }
                local_1b94 = iVar62;
                puVar47 = (undefined2 *)FUN_029973b0(param_1,&local_1b94,uVar34,0);
                local_1bf0 = *(long *)(lVar43 + 8);
                if (puVar47 == (undefined2 *)0x0) {
                  if (*(int *)(param_1 + 0x198) != 0) {
                    iVar42 = 0;
                    do {
                      if (*(int *)(*(long *)(param_1 + 0x1a0) + (long)iVar42 * 0x50 + 0xc) == iVar62
                         ) {
                        puVar47 = (undefined2 *)0x0;
                        bVar22 = false;
                        goto LAB_02995344;
                      }
                      iVar42 = iVar42 + 1;
                    } while (*(int *)(param_1 + 0x198) != iVar42);
                  }
                }
                else {
LAB_02995340:
                  bVar22 = true;
LAB_02995344:
                  lVar51 = *(long *)(puVar47 + 0xc);
                  *(undefined4 *)(lVar51 + 0x138) = 0;
                  *(undefined1 *)(lVar51 + 0x131) = 1;
                  *(undefined8 *)(lVar51 + 0x140) = 0xffffffffffffffff;
                  *(undefined2 *)(lVar51 + 0x132) = 1;
                  *(uint *)(lVar51 + 0x134) = uVar34;
                  *(byte *)(lVar51 + 0x130) = *(byte *)(lVar51 + 0x130) | 3;
                  *(int *)(puVar47 + 2) = iVar62;
                  *(int *)(puVar47 + 6) = iVar62;
                  *(undefined8 *)(puVar47 + 8) = 0xffffffffffffffff;
                  *puVar47 = 0x100;
                  if ((bVar22) &&
                     (*(undefined4 *)(puVar59 + 0x10) =
                           *(undefined4 *)(*(long *)(puVar47 + 0xc) + 4),
                     *(int *)(puVar47 + 0x18) < *(int *)(puVar47 + 0x24))) {
                    puVar50 = *(undefined8 **)(puVar47 + 0x1c);
                    if (puVar50 != (undefined8 *)0x0) {
                      *(undefined8 *)(puVar47 + 0x1c) = *puVar50;
                    }
                    plVar40 = (long *)(puVar47 + 0x10);
                    *puVar50 = puVar59;
                    plVar44 = puVar50 + 1;
                    *plVar44 = 0;
                    puVar50[2] = 0;
                    lVar51 = *plVar40;
                    *plVar40 = (long)plVar44;
                    puVar50[2] = plVar40;
                    *plVar44 = lVar51;
                    if (lVar51 != 0) {
                      *(long **)(lVar51 + 8) = plVar44;
                    }
                    *(int *)(puVar47 + 0x18) = *(int *)(puVar47 + 0x18) + 1;
                  }
                }
              }
              goto LAB_02994d60;
            }
            do {
              plVar31 = (long *)plVar31[1];
              if (plVar31 == plVar49) goto LAB_0299541c;
            } while ((undefined1 *)plVar31[-1] != puVar59);
            goto LAB_02995420;
          }
          uVar29 = FUN_02996dc0(puVar59 + 8,local_1af8);
          lVar51 = DAT_055f6860;
          if ((uVar29 & 1) == 0) goto LAB_02995120;
          if (DAT_04c487d4 != -1) {
            local_1b78 = CONCAT44(local_1b78._4_4_,0x20);
            puVar6 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar6 = PTR_DAT_04bc39f8;
            }
            if ((*(uint *)(puVar6 + 4) & 1) == 0) goto LAB_02994e60;
            lVar54 = *(long *)PTR_DAT_04bb5008;
            local_1b78 = CONCAT44(local_1b78._4_4_,7);
            if ((*(ushort *)(lVar54 + 0x26998) >> 7 & 1) != 0) {
              bVar22 = false;
              if (((*(int *)(lVar54 + 0x26980) <= *(int *)(puVar59 + 0x24)) &&
                  (*(int *)(puVar59 + 0x24) <= *(int *)(lVar54 + 0x26990))) &&
                 (*(int *)(lVar54 + 0x26984) <= *(int *)(puVar59 + 0x28))) {
                bVar22 = *(int *)(puVar59 + 0x28) <= *(int *)(lVar54 + 0x26994);
              }
              if (bVar22) goto LAB_02995120;
            }
            if (puVar59[9] != '\0') goto LAB_02995120;
            pMVar1 = (MutexType *)(DAT_055f6860 + 0x896c8);
            nn::os::LockMutex(pMVar1);
            cVar52 = *(char *)(lVar51 + 0x89692);
            nn::os::UnlockMutex(pMVar1);
            if (cVar52 != '\0') {
              bVar7 = *(byte *)(param_1 + 0x1f8);
              if (bVar7 < 0xf2) {
                puVar46 = (undefined1 *)(param_1 + 0x274 + (ulong)bVar7 * 0x24);
                uVar35 = *(undefined4 *)(puVar59 + 4);
                *(undefined2 *)(puVar46 + 2) = 0xffff;
                puVar46[1] = 0;
                *puVar46 = (char)uVar35;
                *(undefined4 *)(puVar46 + 4) = 0xf6f6f6f6;
                *(undefined4 *)(puVar46 + 0x10) = 0xfff6fff6;
                *(undefined8 *)(puVar46 + 0x14) = 0xff7fffffff7fffff;
                *(undefined8 *)(puVar46 + 0x1c) = 0xff7fffffff7fffff;
                *(undefined8 *)(puVar46 + 8) = 0xfff6fff6fff60000;
                *(short *)(puVar46 + 2) = (short)*(undefined4 *)(puVar59 + 0x10);
                *(short *)(puVar46 + 0x10) = (short)*(undefined4 *)(puVar59 + 0x3c);
                *(short *)(puVar46 + 0x12) = (short)*(undefined4 *)(puVar59 + 0x40);
                *(short *)(puVar46 + 10) = (short)*(undefined4 *)(puVar59 + 0x24);
                *(short *)(puVar46 + 0xc) = (short)*(undefined4 *)(puVar59 + 0x28);
                uVar35 = *(undefined4 *)(puVar59 + 0x2c);
                *(byte *)(param_1 + 0x1f8) = bVar7 + 1;
                *(short *)(puVar46 + 0xe) = (short)uVar35;
              }
            }
            do {
              plVar31 = (long *)plVar31[1];
              if (plVar31 == plVar49) goto LAB_0299541c;
            } while ((undefined1 *)plVar31[-1] != puVar59);
            goto LAB_02995420;
          }
LAB_02994e60:
          do {
            plVar31 = (long *)plVar31[1];
            if (plVar31 == plVar49) {
              plVar31 = (long *)0x0;
              lVar51 = *plVar40;
              goto joined_r0x02994fa4;
            }
          } while ((undefined1 *)plVar31[-1] != puVar59);
          lVar51 = *plVar40;
joined_r0x02994fa4:
          if (lVar51 != 0) {
            *(long *)(lVar51 + 8) = plVar40[1];
          }
          if ((long *)plVar40[1] != (long *)0x0) {
            *(long *)plVar40[1] = *plVar40;
          }
          *plVar40 = 0;
          plVar40[1] = 0;
          *(int *)(puVar58 + 0x30) = *(int *)(puVar58 + 0x30) + -1;
          *plVar44 = *(long *)(puVar58 + 0x38);
          *(long **)(puVar58 + 0x38) = plVar44;
          *(undefined8 *)(puVar59 + 0x60) = uVar16;
          *(undefined8 *)(puVar59 + 0x58) = uVar15;
          puVar59[10] = 0xff;
          *(undefined2 *)(puVar59 + 8) = 0;
          *(undefined8 *)(puVar59 + 0xc) = 0xffffffffffffffff;
          *(undefined8 *)(puVar59 + 0x14) = 0xffffffffffffffff;
          *(undefined8 *)(puVar59 + 0x24) = 0xffffffffffffffff;
          *(undefined8 *)(puVar59 + 0x2c) = 0xffffffffffffffff;
          *(undefined8 *)(puVar59 + 0x34) = 0xffffffffffffffff;
          *(undefined8 *)(puVar59 + 0x3c) = 0xffffffffffffffff;
          *(undefined4 *)(puVar59 + 0x44) = 0xffffffff;
          *(undefined8 *)(puVar59 + 0x1c) = 0x42f00000ffffffff;
          *puVar59 = 1;
          *(undefined8 *)(puVar59 + 0x48) = 0;
          *(undefined8 *)(puVar59 + 0x50) = 0;
          *(undefined8 *)(puVar59 + 0x70) = uVar20;
          *(undefined8 *)(puVar59 + 0x68) = uVar19;
          *(undefined8 *)(puVar59 + 0x80) = uVar18;
          *(undefined8 *)(puVar59 + 0x78) = uVar17;
          if ((plVar31 != (long *)0x0) && (plVar31 + -1 != (long *)0x0)) {
            if (*plVar31 != 0) {
              *(long *)(*plVar31 + 8) = plVar31[1];
            }
            if ((long *)plVar31[1] != (long *)0x0) {
              *(long *)plVar31[1] = *plVar31;
            }
            *plVar31 = 0;
            plVar31[1] = 0;
            *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
            plVar31[-1] = *(long *)(param_1 + 0x110);
            *(long **)(param_1 + 0x110) = plVar31 + -1;
            *(undefined1 *)(param_1 + 0xf0) = 1;
          }
          if (*(int *)(puVar59 + 4) < *(int *)(param_1 + 0x70)) {
            if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0xa8)) {
              puVar45 = *(undefined8 **)(param_1 + 0x98);
              piVar57 = (int *)(param_1 + 0x90);
              plVar40 = (long *)(param_1 + 0x80);
              puVar50 = (undefined8 *)(param_1 + 0x98);
              if (puVar45 != (undefined8 *)0x0) goto LAB_02994fd0;
              goto LAB_02994fe0;
            }
          }
          else if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xe8)) {
            puVar45 = *(undefined8 **)(param_1 + 0xd8);
            piVar57 = (int *)(param_1 + 0xd0);
            plVar40 = (long *)(param_1 + 0xc0);
            puVar50 = (undefined8 *)(param_1 + 0xd8);
            if (puVar45 != (undefined8 *)0x0) {
LAB_02994fd0:
              *puVar50 = *puVar45;
            }
LAB_02994fe0:
            *puVar45 = puVar59;
            puVar45[2] = 0;
            plVar44 = puVar45 + 1;
            *plVar44 = 0;
            lVar51 = *plVar40;
            *plVar40 = (long)plVar44;
            puVar45[2] = plVar40;
            *plVar44 = lVar51;
            if (lVar51 != 0) {
              *(long **)(lVar51 + 8) = plVar44;
            }
            *piVar57 = *piVar57 + 1;
          }
          goto LAB_02994d60;
        }
LAB_02994cd0:
        lVar43 = local_1bf0;
      } while (local_1bf0 + -8 != lVar36);
    }
    uVar20 = _UNK_04102888;
    uVar19 = _DAT_04102880;
    uVar18 = _UNK_041023d8;
    uVar17 = _DAT_041023d0;
    uVar16 = _UNK_04102208;
    uVar15 = _DAT_04102200;
    iVar39 = *(int *)(param_1 + 0x198);
    if (iVar39 != 0) {
      lVar43 = *(long *)(param_1 + 0x1a0);
      iVar62 = 0;
      do {
        puVar58 = (undefined1 *)(lVar43 + (long)iVar62 * 0x50);
        uVar34 = (int)(char)puVar58[1] - 1;
        if (0 < (char)puVar58[1]) {
          if ((uVar34 & 0xff) == 0) {
            lVar51 = *(long *)(lVar43 + (long)iVar62 * 0x50 + 0x18);
            *(byte *)(lVar51 + 0x130) = *(byte *)(lVar51 + 0x130) | 2;
            *(undefined1 *)(lVar51 + 0x133) = 1;
            *puVar58 = 0;
            *(undefined4 *)(puVar58 + 4) = 0;
          }
          puVar58[1] = (char)uVar34;
        }
        lVar51 = lVar43 + (long)iVar62 * 0x50;
        plVar40 = *(long **)(lVar51 + 0x28);
        if (plVar40 != (long *)(lVar51 + 0x20)) {
          plVar31 = plVar40 + -1;
          lVar54 = lVar43 + (long)iVar62 * 0x50;
          piVar57 = (int *)(lVar54 + 0x30);
          plVar44 = (long *)(lVar54 + 0x38);
          do {
            plVar26 = (long *)plVar40[1];
            puVar59 = (undefined1 *)plVar40[-1];
            if (*param_2 == 0) {
LAB_02995584:
              if (puVar59[8] == '\0') {
                plVar30 = plVar49;
                do {
                  plVar30 = (long *)plVar30[1];
                  if (plVar30 == plVar49) {
                    plVar30 = (long *)0x0;
                    break;
                  }
                } while ((undefined1 *)plVar30[-1] != puVar59);
                plVar48 = (long *)0x0;
                if (plVar30 != (long *)0x0) {
                  plVar48 = plVar30 + -1;
                }
                if (lVar43 != 0) {
                  plVar30 = (long *)plVar40[1];
                  if (*plVar40 != 0) {
                    *(long **)(*plVar40 + 8) = plVar30;
                    plVar30 = (long *)plVar40[1];
                  }
joined_r0x029956d8:
                  if (plVar30 != (long *)0x0) {
                    *plVar30 = *plVar40;
                  }
                  *plVar40 = 0;
                  plVar40[1] = 0;
                  *piVar57 = *piVar57 + -1;
                  *plVar31 = *plVar44;
                  *plVar44 = (long)plVar31;
                }
LAB_02995760:
                puVar59[10] = 0xff;
                *(undefined8 *)(puVar59 + 0xc) = 0xffffffffffffffff;
                *(undefined8 *)(puVar59 + 0x14) = 0xffffffffffffffff;
                *(undefined8 *)(puVar59 + 0x24) = 0xffffffffffffffff;
                *(undefined8 *)(puVar59 + 0x2c) = 0xffffffffffffffff;
                *(undefined8 *)(puVar59 + 0x34) = 0xffffffffffffffff;
                *(undefined8 *)(puVar59 + 0x3c) = 0xffffffffffffffff;
                *(undefined4 *)(puVar59 + 0x44) = 0xffffffff;
                *(undefined2 *)(puVar59 + 8) = 0;
                *(undefined8 *)(puVar59 + 0x1c) = 0x42f00000ffffffff;
                *puVar59 = 1;
                *(undefined8 *)(puVar59 + 0x60) = uVar16;
                *(undefined8 *)(puVar59 + 0x58) = uVar15;
                *(undefined8 *)(puVar59 + 0x48) = 0;
                *(undefined8 *)(puVar59 + 0x50) = 0;
                *(undefined8 *)(puVar59 + 0x70) = uVar20;
                *(undefined8 *)(puVar59 + 0x68) = uVar19;
                *(undefined8 *)(puVar59 + 0x80) = uVar18;
                *(undefined8 *)(puVar59 + 0x78) = uVar17;
                if (plVar48 != (long *)0x0) {
                  plVar40 = plVar48 + 1;
                  if (*plVar40 != 0) {
                    *(long *)(*plVar40 + 8) = plVar48[2];
                  }
                  if ((long *)plVar48[2] != (long *)0x0) {
                    *(long *)plVar48[2] = *plVar40;
                  }
                  *plVar40 = 0;
                  plVar48[2] = 0;
                  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
                  *plVar48 = *(long *)(param_1 + 0x110);
                  *(long **)(param_1 + 0x110) = plVar48;
                  *(undefined1 *)(param_1 + 0xf0) = 1;
                }
                if (*(int *)(puVar59 + 4) < *(int *)(param_1 + 0x70)) {
                  if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0xa8)) {
                    puVar45 = *(undefined8 **)(param_1 + 0x98);
                    piVar38 = (int *)(param_1 + 0x90);
                    plVar40 = (long *)(param_1 + 0x80);
                    puVar50 = (undefined8 *)(param_1 + 0x98);
                    if (puVar45 != (undefined8 *)0x0) goto LAB_02995868;
                    goto LAB_02995880;
                  }
                }
                else if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xe8)) {
                  puVar45 = *(undefined8 **)(param_1 + 0xd8);
                  piVar38 = (int *)(param_1 + 0xd0);
                  plVar40 = (long *)(param_1 + 0xc0);
                  puVar50 = (undefined8 *)(param_1 + 0xd8);
                  if (puVar45 != (undefined8 *)0x0) {
LAB_02995868:
                    *puVar50 = *puVar45;
                  }
LAB_02995880:
                  plVar31 = puVar45 + 1;
                  *plVar31 = 0;
                  *puVar45 = puVar59;
                  puVar45[2] = 0;
                  lVar54 = *plVar40;
                  *plVar40 = (long)plVar31;
                  *plVar31 = lVar54;
                  puVar45[2] = plVar40;
                  if (lVar54 != 0) {
                    *(long **)(lVar54 + 8) = plVar31;
                  }
                  *piVar38 = *piVar38 + 1;
                }
              }
            }
            else {
              uVar29 = FUN_02996dc0(puVar59 + 8,local_1af8);
              lVar54 = DAT_055f6860;
              if ((uVar29 & 1) == 0) goto LAB_02995584;
              plVar30 = plVar49;
              if (DAT_04c487d4 == -1) {
LAB_02995710:
                do {
                  plVar30 = (long *)plVar30[1];
                  if (plVar30 == plVar49) {
                    plVar30 = (long *)0x0;
                    break;
                  }
                } while ((undefined1 *)plVar30[-1] != puVar59);
                plVar48 = (long *)0x0;
                if (plVar30 != (long *)0x0) {
                  plVar48 = plVar30 + -1;
                }
                if (lVar43 != 0) {
                  if (*plVar40 != 0) {
                    *(long *)(*plVar40 + 8) = plVar40[1];
                  }
                  plVar30 = (long *)plVar40[1];
                  goto joined_r0x029956d8;
                }
                goto LAB_02995760;
              }
              local_1b78 = CONCAT44(local_1b78._4_4_,0x20);
              puVar6 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
              if (0xff < (uint)(int)DAT_04c487d4) {
                puVar6 = PTR_DAT_04bc39f8;
              }
              if ((*(uint *)(puVar6 + 4) & 1) == 0) goto LAB_02995710;
              lVar37 = *(long *)PTR_DAT_04bb5008;
              local_1b78 = CONCAT44(local_1b78._4_4_,7);
              if ((*(ushort *)(lVar37 + 0x26998) >> 7 & 1) != 0) {
                bVar22 = false;
                if (((*(int *)(lVar37 + 0x26980) <= *(int *)(puVar59 + 0x24)) &&
                    (*(int *)(puVar59 + 0x24) <= *(int *)(lVar37 + 0x26990))) &&
                   (*(int *)(lVar37 + 0x26984) <= *(int *)(puVar59 + 0x28))) {
                  bVar22 = *(int *)(puVar59 + 0x28) <= *(int *)(lVar37 + 0x26994);
                }
                if (bVar22) goto LAB_02995584;
              }
              if (puVar59[9] != '\0') goto LAB_02995584;
              pMVar1 = (MutexType *)(DAT_055f6860 + 0x896c8);
              nn::os::LockMutex(pMVar1);
              cVar52 = *(char *)(lVar54 + 0x89692);
              nn::os::UnlockMutex(pMVar1);
              if (cVar52 != '\0') {
                bVar7 = *(byte *)(param_1 + 0x1f8);
                if (bVar7 < 0xf2) {
                  puVar46 = (undefined1 *)(param_1 + 0x274 + (ulong)bVar7 * 0x24);
                  uVar35 = *(undefined4 *)(puVar59 + 4);
                  *(undefined2 *)(puVar46 + 2) = 0xffff;
                  puVar46[1] = 0;
                  *puVar46 = (char)uVar35;
                  *(undefined4 *)(puVar46 + 4) = 0xf6f6f6f6;
                  *(undefined4 *)(puVar46 + 0x10) = 0xfff6fff6;
                  *(undefined8 *)(puVar46 + 0x14) = 0xff7fffffff7fffff;
                  *(undefined8 *)(puVar46 + 0x1c) = 0xff7fffffff7fffff;
                  *(undefined8 *)(puVar46 + 8) = 0xfff6fff6fff60000;
                  *(short *)(puVar46 + 2) = (short)*(undefined4 *)(puVar59 + 0x10);
                  *(short *)(puVar46 + 0x10) = (short)*(undefined4 *)(puVar59 + 0x3c);
                  *(short *)(puVar46 + 0x12) = (short)*(undefined4 *)(puVar59 + 0x40);
                  *(short *)(puVar46 + 10) = (short)*(undefined4 *)(puVar59 + 0x24);
                  *(short *)(puVar46 + 0xc) = (short)*(undefined4 *)(puVar59 + 0x28);
                  uVar35 = *(undefined4 *)(puVar59 + 0x2c);
                  *(byte *)(param_1 + 0x1f8) = bVar7 + 1;
                  *(short *)(puVar46 + 0xe) = (short)uVar35;
                }
              }
              plVar40 = plVar49;
              do {
                plVar40 = (long *)plVar40[1];
                if (plVar40 == plVar49) {
                  plVar40 = (long *)0x0;
                  break;
                }
              } while ((undefined1 *)plVar40[-1] != puVar59);
              plVar30 = (long *)0x0;
              if (plVar40 != (long *)0x0) {
                plVar30 = plVar40 + -1;
              }
              FUN_0299b110(param_1,puVar59,puVar58,plVar31,plVar30);
            }
            plVar31 = plVar26 + -1;
            plVar40 = plVar26;
          } while (plVar31 != (long *)(lVar51 + 0x18));
        }
        iVar62 = iVar62 + 1;
      } while (iVar39 != iVar62);
    }
    lVar43 = *(long *)(param_1 + 0x160);
    uVar15 = _DAT_04102200;
    uVar16 = _UNK_04102208;
    uVar17 = _DAT_041023d0;
    uVar18 = _UNK_041023d8;
    uVar19 = _DAT_04102880;
    uVar20 = _UNK_04102888;
    while( true ) {
      _DAT_04102200 = uVar15;
      _UNK_04102208 = uVar16;
      _DAT_041023d0 = uVar17;
      _UNK_041023d8 = uVar18;
      _DAT_04102880 = uVar19;
      _UNK_04102888 = uVar20;
      if (lVar43 + -8 == lVar36) break;
      lVar51 = *(long *)(lVar43 + 8);
      plVar40 = (long *)(lVar43 + -8);
      lVar43 = lVar51;
      if (*(int *)(*plVar40 + 0x30) == 0) {
        FUN_02997890(param_1);
        uVar15 = _DAT_04102200;
        uVar16 = _UNK_04102208;
        uVar17 = _DAT_041023d0;
        uVar18 = _UNK_041023d8;
        uVar19 = _DAT_04102880;
        uVar20 = _UNK_04102888;
      }
    }
    iVar39 = *(int *)(param_1 + 0x1a8);
    if (iVar39 != 0) {
      lVar36 = *(long *)(param_1 + 0x1b0);
      iVar62 = 0;
      do {
        puVar58 = (undefined1 *)(lVar36 + (long)iVar62 * 0x50);
        uVar34 = (int)(char)puVar58[1] - 1;
        if (0 < (char)puVar58[1]) {
          if ((uVar34 & 0xff) == 0) {
            lVar43 = *(long *)(lVar36 + (long)iVar62 * 0x50 + 0x18);
            *(undefined4 *)(lVar43 + 0x138) = *(undefined4 *)(puVar58 + 4);
            *(undefined8 *)(lVar43 + 0x140) = 0xffffffffffffffff;
            *(undefined2 *)(lVar43 + 0x131) = 0x101;
            *puVar58 = 0;
            *(undefined4 *)(puVar58 + 4) = 0;
          }
          puVar58[1] = (char)uVar34;
        }
        lVar43 = lVar36 + (long)iVar62 * 0x50;
        plVar40 = *(long **)(lVar43 + 0x28);
        if (plVar40 != (long *)(lVar43 + 0x20)) {
          plVar44 = (long *)plVar40[1];
          if (*param_2 != 0) {
            plVar26 = plVar40 + -1;
            lVar51 = lVar36 + (long)iVar62 * 0x50;
            piVar57 = (int *)(lVar51 + 0x30);
            plVar31 = (long *)(lVar51 + 0x38);
            do {
              puVar58 = (undefined1 *)plVar40[-1];
              uVar29 = FUN_02996dc0(puVar58 + 8,local_1af8);
              if ((uVar29 & 1) != 0) {
                plVar30 = plVar49;
                do {
                  plVar30 = (long *)plVar30[1];
                  if (plVar30 == plVar49) {
                    plVar30 = (long *)0x0;
                    break;
                  }
                } while ((undefined1 *)plVar30[-1] != puVar58);
                plVar48 = (long *)0x0;
                if (plVar30 != (long *)0x0) {
                  plVar48 = plVar30 + -1;
                }
                if (lVar36 != 0) {
                  if (*plVar40 != 0) {
                    *(long *)(*plVar40 + 8) = plVar40[1];
                  }
                  if ((long *)plVar40[1] != (long *)0x0) {
                    *(long *)plVar40[1] = *plVar40;
                  }
                  *plVar40 = 0;
                  plVar40[1] = 0;
                  *piVar57 = *piVar57 + -1;
                  *plVar26 = *plVar31;
                  *plVar31 = (long)plVar26;
                }
                puVar58[10] = 0xff;
                *(undefined8 *)(puVar58 + 0xc) = 0xffffffffffffffff;
                *(undefined8 *)(puVar58 + 0x14) = 0xffffffffffffffff;
                *(undefined8 *)(puVar58 + 0x24) = 0xffffffffffffffff;
                *(undefined8 *)(puVar58 + 0x2c) = 0xffffffffffffffff;
                *(undefined8 *)(puVar58 + 0x34) = 0xffffffffffffffff;
                *(undefined8 *)(puVar58 + 0x3c) = 0xffffffffffffffff;
                *(undefined4 *)(puVar58 + 0x44) = 0xffffffff;
                *(undefined2 *)(puVar58 + 8) = 0;
                *(undefined8 *)(puVar58 + 0x1c) = 0x42f00000ffffffff;
                *puVar58 = 1;
                *(undefined8 *)(puVar58 + 0x60) = uVar16;
                *(undefined8 *)(puVar58 + 0x58) = uVar15;
                *(undefined8 *)(puVar58 + 0x48) = 0;
                *(undefined8 *)(puVar58 + 0x50) = 0;
                *(undefined8 *)(puVar58 + 0x70) = uVar20;
                *(undefined8 *)(puVar58 + 0x68) = uVar19;
                *(undefined8 *)(puVar58 + 0x80) = uVar18;
                *(undefined8 *)(puVar58 + 0x78) = uVar17;
                if (plVar48 != (long *)0x0) {
                  plVar40 = plVar48 + 1;
                  if (*plVar40 != 0) {
                    *(long *)(*plVar40 + 8) = plVar48[2];
                  }
                  if ((long *)plVar48[2] != (long *)0x0) {
                    *(long *)plVar48[2] = *plVar40;
                  }
                  *plVar40 = 0;
                  plVar48[2] = 0;
                  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
                  *plVar48 = *(long *)(param_1 + 0x110);
                  *(long **)(param_1 + 0x110) = plVar48;
                  *(undefined1 *)(param_1 + 0xf0) = 1;
                }
                if (*(int *)(puVar58 + 4) < *(int *)(param_1 + 0x70)) {
                  if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0xa8)) {
                    puVar45 = *(undefined8 **)(param_1 + 0x98);
                    piVar38 = (int *)(param_1 + 0x90);
                    plVar40 = (long *)(param_1 + 0x80);
                    puVar50 = (undefined8 *)(param_1 + 0x98);
                    if (puVar45 != (undefined8 *)0x0) goto LAB_02995d04;
                    goto LAB_02995d14;
                  }
                }
                else if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xe8)) {
                  puVar45 = *(undefined8 **)(param_1 + 0xd8);
                  piVar38 = (int *)(param_1 + 0xd0);
                  plVar40 = (long *)(param_1 + 0xc0);
                  puVar50 = (undefined8 *)(param_1 + 0xd8);
                  if (puVar45 != (undefined8 *)0x0) {
LAB_02995d04:
                    *puVar50 = *puVar45;
                  }
LAB_02995d14:
                  *puVar45 = puVar58;
                  puVar45[2] = 0;
                  plVar26 = puVar45 + 1;
                  *plVar26 = 0;
                  lVar51 = *plVar40;
                  *plVar40 = (long)plVar26;
                  puVar45[2] = plVar40;
                  *plVar26 = lVar51;
                  if (lVar51 != 0) {
                    *(long **)(lVar51 + 8) = plVar26;
                  }
                  *piVar38 = *piVar38 + 1;
                }
              }
              do {
                plVar40 = plVar44;
                plVar26 = plVar40 + -1;
                if (plVar26 == (long *)(lVar43 + 0x18)) goto LAB_02995a90;
                plVar44 = (long *)plVar40[1];
              } while (*param_2 == 0);
            } while( true );
          }
          do {
            plVar40 = plVar44 + -1;
            plVar44 = (long *)plVar44[1];
          } while (plVar40 != (long *)(lVar43 + 0x18));
        }
LAB_02995a90:
        iVar62 = iVar62 + 1;
      } while (iVar39 != iVar62);
    }
  }
  return;
LAB_0299541c:
  plVar31 = (long *)0x0;
LAB_02995420:
  plVar40 = (long *)0x0;
  if (plVar31 != (long *)0x0) {
    plVar40 = plVar31 + -1;
  }
  FUN_0299b110(param_1,puVar59,puVar58,plVar44,plVar40);
LAB_02994d60:
  plVar44 = plVar26 + -1;
  plVar40 = plVar26;
  if (plVar44 == (long *)(puVar58 + 0x18)) goto LAB_02994cd0;
  goto LAB_02994d70;
}

