
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a1600(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  MutexType *pMVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined2 uVar26;
  ushort uVar27;
  uint uVar28;
  undefined4 uVar29;
  int iVar30;
  undefined8 uVar31;
  undefined **ppuVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  char cVar36;
  byte bVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  undefined1 uVar41;
  int iVar42;
  long lVar43;
  long *plVar44;
  ulong uVar45;
  byte *pbVar46;
  undefined2 uVar47;
  long lVar48;
  long lVar49;
  undefined2 uVar50;
  long *plVar51;
  int *piVar52;
  long lVar53;
  uint *puVar54;
  int *piVar55;
  long *plVar56;
  undefined4 *puVar57;
  ulong uVar58;
  void *__dest;
  void *__src;
  long lVar59;
  uint *puVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  long local_260;
  uint local_228;
  long lStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined1 *puStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  char cStack_1ae;
  undefined1 uStack_1ad;
  undefined1 local_1ac;
  byte bStack_1ab;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined *local_b8;
  undefined8 *puStack_b0;
  int local_a4;
  undefined *local_a0;
  long *local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  uint local_6c [3];
  
  local_1f8 = *param_2;
  local_1f0 = param_2[1];
  bVar21 = (local_1f0 & 0xff) != 0;
  lVar43 = *(long *)PTR_DAT_04bb26a8;
  bVar22 = (local_1f0 >> 8 & 0xff) != 0;
  bVar1 = bVar21 && bVar22;
  local_1e8 = param_2[2];
  uStack_1e0 = param_2[3];
  nn::os::LockMutex((MutexType *)(lVar43 + 0x896c8));
  local_210 = *(undefined8 *)(lVar43 + 0x89690);
  uStack_208 = *(undefined8 *)(lVar43 + 0x89698);
  local_200 = *(undefined8 *)(lVar43 + 0x896a0);
  uVar31 = nn::os::UnlockMutex((MutexType *)(lVar43 + 0x896c8));
  cVar17 = local_210._2_1_;
  bVar23 = local_210._2_1_ != '\0';
  cVar18 = local_210._3_1_;
  bVar24 = local_210._1_1_ == '\0';
  bVar20 = bVar23 || bVar24;
  lStack_218 = (long)(*(long *)PTR_DAT_04bb29d0 *
                      (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                      (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000;
  cVar19 = local_210._4_1_;
  cVar36 = *(char *)(param_1 + 9);
  if ((cVar36 != '\0') && (local_1f0._2_1_ != '\0')) {
    FUN_029990c0(param_1 + 0xf0);
    uVar31 = FUN_0299dfd0(param_1);
    cVar36 = '\0';
    *(undefined2 *)(param_1 + 9) = 0;
  }
  if ((cVar36 == '\0') && (local_1f0._3_1_ != '\0')) {
    sVar12 = *(short *)PTR_DAT_04bb6298;
    if (sVar12 != -1) {
      local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
      if (0xff < (uint)(int)sVar12) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) {
        *(undefined1 *)(param_1 + 10) = 3;
        goto LAB_029a2f80;
      }
    }
    *(undefined1 *)(param_1 + 10) = 1;
    if (!bVar21 || !bVar22) goto LAB_029a3ac8;
LAB_029a17d4:
    local_260 = 0;
    lVar43 = param_1 + 0x62c60;
    local_228 = 0x84;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar33 = 0;
      do {
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(int)lVar33);
        local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)local_260);
        lVar53 = *(long *)PTR_DAT_04bb46b0;
        if (lVar53 == 0) {
LAB_029a1900:
          lVar53 = 0;
          plVar56 = plRam0000000000001e90;
          if (plRam0000000000001e90 == (long *)0x0) goto LAB_029a1970;
LAB_029a190c:
          if ((undefined8 *)*plVar56 == (undefined8 *)0x0) goto LAB_029a1970;
          uVar28 = (*(code *)**(undefined8 **)*plVar56)();
        }
        else {
          puVar34 = *(undefined8 **)(lVar53 + 0x10);
          if ((*(byte *)(lVar53 + 0x453) & 1) != 0) {
            if (((puVar34 != (undefined8 *)0x0) && ((long *)puVar34[0x26] != (long *)0x0)) &&
               (lVar53 = (**(code **)(*(long *)puVar34[0x26] + 0x38))(), lVar53 != 0))
            goto LAB_029a18ec;
            goto LAB_029a1900;
          }
          lVar53 = (**(code **)(*(long *)*puVar34 + 0x38))();
          if (lVar53 == 0) goto LAB_029a1900;
          lVar53 = lVar53 + 0x70;
LAB_029a18ec:
          if (7 < (uint)local_1c8) goto LAB_029a1900;
          lVar59 = lVar53 + 0x119228 + ((ulong)local_1c8 & 0xffffffff) * 0xfa08;
          if (7 < (uint)local_1c8) {
            lVar59 = lVar53 + 0x119228;
          }
          lVar53 = lVar59 + 0x1df8 + ((ulong)local_a0 & 0xffffffff) * 0x2488;
          if (5 < (uint)local_a0) {
            lVar53 = lVar59 + 0x1df8;
          }
          plVar56 = *(long **)(lVar53 + 0x1e90);
          if (plVar56 != (long *)0x0) goto LAB_029a190c;
LAB_029a1970:
          uVar28 = 0;
        }
        lVar59 = *(long *)(param_1 + 0xa0);
        iVar30 = 0;
        if (local_228 + 1 < *(uint *)(param_1 + 0x98)) {
          iVar30 = local_228 + 1;
        }
        lVar49 = lVar59 + (long)iVar30 * 400;
        *(byte *)(lVar49 + 8) =
             *(byte *)(*(long *)(lVar53 + 0x1e78) + *(long *)(lVar53 + 0x1e70) + 3) & 1;
        puVar54 = (uint *)(lVar49 + 0x18);
        *puVar54 = (int)*(char *)(*(long *)(lVar53 + 0x1e78) + *(long *)(lVar53 + 0x1e70) + 2);
        local_1b8 = local_1b8 & 0xffffffffffffff00;
        local_1c0 = 0x10000000000;
        uVar38 = (uint)*(short *)(*(long *)(lVar53 + 0x1e78) + *(long *)(lVar53 + 0x1e70));
        uVar38 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
        puStack_1d0 = &DAT_0405db6e;
        local_1d8 = puVar2;
        local_1c8 = &local_1b8;
        local_6c[0] = uVar38;
        FUN_02a21700(&local_1c8,&local_1d8,2,local_6c);
        local_a0 = (undefined *)0x0;
        local_98 = (long *)0x0;
        _local_90 = CONCAT62(stack0xffffffffffffff72,0xff);
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        puStack_b0 = local_1c8;
        local_b8 = puVar2;
        uVar58 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a0,&local_b8);
        plVar56 = (long *)0x0;
        if (((uVar58 & 1) != 0) && (plVar56 = local_98, local_98 != (long *)0x0)) {
          if (*(uint *)(local_98 + 3) == 0) {
            plVar56 = (long *)0x0;
          }
          else {
            plVar56 = (long *)((ulong)*(uint *)(local_98 + 3) + (long)local_98);
            if (*plVar56 != 0x101feff464e494d) {
              plVar56 = (long *)0x0;
            }
          }
        }
        uVar39 = *puVar54;
        puVar60 = (uint *)(lVar59 + (long)iVar30 * 400 + 0xc);
        *puVar60 = uVar38;
        if (*(int *)(param_1 + 0xe8) == 0) {
          if (((*(char *)(param_1 + 0x2794) != '\0') && (*(uint *)(param_1 + 0x2720) == uVar39)) &&
             (*(char *)(param_1 + 0x2624) != '\0')) {
            *(uint *)(param_1 + 0x2628) = uVar38;
            *(uint *)(param_1 + 0x2718) = uVar38;
          }
        }
        else if (((*(char *)(param_1 + 0x62ea0) != '\0') && (*(uint *)(param_1 + 0x62e2c) == uVar39)
                 ) && (*(char *)(param_1 + 0x62d30) != '\0')) {
          *(uint *)(param_1 + 0x62d34) = uVar38;
          *(uint *)(param_1 + 0x62e24) = uVar38;
        }
        if (plVar56 != (long *)0x0) {
          lVar49 = lVar59 + (long)iVar30 * 400;
          *(undefined4 *)(lVar49 + 0x124) = *(undefined4 *)((long)plVar56 + 0x14);
          *(int *)(lVar49 + 0x128) = (int)plVar56[3];
          *(undefined4 *)(lVar49 + 300) = *(undefined4 *)((long)plVar56 + 0x1c);
        }
        if ((int)*puVar60 < 0) {
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          ppuVar32 = (undefined **)&local_1c8;
        }
        else {
          local_a0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a0);
          uVar39 = *puVar60;
          uVar38 = 0;
          if (uVar39 != 99999 && -1 < (int)uVar39) {
            uVar38 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar49 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar49 != 0;
              lVar49 = *(long *)(lVar49 + 0x10)) {
            while ((int)uVar38 < *(int *)(lVar49 + 0x20)) {
              lVar49 = *(long *)(lVar49 + 8);
              if (lVar49 == 0) goto LAB_029a1bb0;
            }
            if ((int)uVar38 <= *(int *)(lVar49 + 0x20)) {
              local_1c8 = (undefined8 *)(ulong)(ushort)*(undefined4 *)(lVar49 + 0x2c);
              goto LAB_029a1be4;
            }
          }
LAB_029a1bb0:
          local_1c8 = (undefined8 *)0xfffe;
LAB_029a1be4:
          FUN_0277d4ac(&local_1c8);
          ppuVar32 = &local_a0;
          local_a0 = (undefined *)local_1c8;
        }
        uVar26 = FUN_0277d6c4(ppuVar32);
        *(undefined2 *)(lVar59 + (long)iVar30 * 400 + 0x122) = uVar26;
        if (bVar20) {
          lVar49 = lVar59 + (long)iVar30 * 400;
          if (*(long **)(lVar49 + 0x50) != (long *)(lVar49 + 0x48)) {
            lVar48 = lVar59 + (long)iVar30 * 400;
            piVar55 = (int *)(lVar48 + 0x58);
            plVar56 = (long *)(lVar48 + 0x60);
            plVar44 = *(long **)(lVar49 + 0x50);
            do {
              plVar7 = (long *)plVar44[1];
              plVar51 = plVar7;
              if (*plVar44 != 0) {
                *(long **)(*plVar44 + 8) = plVar7;
                plVar51 = (long *)plVar44[1];
              }
              if (plVar51 != (long *)0x0) {
                *plVar51 = *plVar44;
              }
              *plVar44 = 0;
              plVar44[1] = 0;
              *piVar55 = *piVar55 + -1;
              plVar44[-1] = *plVar56;
              *plVar56 = (long)(plVar44 + -1);
              plVar44 = plVar7;
            } while (plVar7 != (long *)(lVar49 + 0x48));
          }
          puVar57 = (undefined4 *)(lVar49 + 0x40);
          *puVar57 = 0xffffffff;
          if (*puVar54 != 0xffffffff) {
            local_1c8 = (undefined8 *)0xfffe;
            FUN_0277d4ac(&local_1c8);
            local_1c0 = 0xfffe;
            FUN_0277d4ac(&local_1c0);
            uVar29 = 0xffffffff;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1b0 = 0;
            cStack_1ae = 0;
            uStack_1ad = 0;
            local_1ac = 0;
            bStack_1ab = 0;
            local_1b8 = CONCAT44(0xffffffff,*puVar54);
            piVar55 = (int *)(lVar59 + (long)iVar30 * 400 + 4);
            if (0xffffffea < *piVar55 - 0xf9U) {
              uVar38 = *piVar55 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar38 + (char)((uVar38 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            local_1b8 = CONCAT44(uVar29,(undefined4)local_1b8);
            local_1b0 = 1;
            uStack_1ad = *piVar55 - 0x109U < 0x2a;
            local_1ac = *piVar55 - 0x133U < 0x20;
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              bStack_1ab = 0;
            }
            else {
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x20);
              puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
              if (0xff < (uint)(int)sVar12) {
                puVar3 = PTR_DAT_04bc39f8;
              }
              bStack_1ab = (byte)*(undefined4 *)(puVar3 + 4) & 1;
            }
            if (*puVar54 < 0xc) {
              puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
              local_1a8 = *puVar34;
              uStack_1a0 = puVar34[1];
            }
            else {
              local_1a8 = 0;
              uStack_1a0 = 0;
            }
            cStack_1ae = cVar19;
            FUN_0298b040(puVar57,&local_1c8);
            local_b8 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_b8);
            uVar39 = *puVar60;
            uVar38 = 0;
            if (uVar39 != 99999 && -1 < (int)uVar39) {
              uVar38 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
            }
            for (lVar59 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar59 != 0;
                lVar59 = *(long *)(lVar59 + 0x10)) {
              while ((int)uVar38 < *(int *)(lVar59 + 0x20)) {
                lVar59 = *(long *)(lVar59 + 8);
                if (lVar59 == 0) goto LAB_029a1e50;
              }
              if ((int)uVar38 <= *(int *)(lVar59 + 0x20)) {
                local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar59 + 0x2c);
                goto LAB_029a1e68;
              }
            }
LAB_029a1e50:
            local_a0 = (undefined *)0xfffe;
LAB_029a1e68:
            FUN_0277d4ac(&local_a0);
            local_b8 = local_a0;
            local_a0 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_a0);
            local_98 = (long *)0xfffe;
            FUN_0277d4ac(&local_98);
            uVar29 = 0xffffffff;
            local_88 = local_88 & 0xffff000000000000;
            local_80 = 0;
            local_78 = 0;
            local_a0 = local_b8;
            _local_90 = CONCAT44(0xffffffff,*puVar54);
            if (0xffffffea < *piVar55 - 0xf9U) {
              uVar38 = *piVar55 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar38 + (char)((uVar38 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            _local_90 = CONCAT44(uVar29,local_90);
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              bVar37 = 0;
            }
            else {
              local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x20);
              puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
              if (0xff < (uint)(int)sVar12) {
                puVar3 = PTR_DAT_04bc39f8;
              }
              bVar37 = (byte)*(undefined4 *)(puVar3 + 4) & 1;
            }
            local_88 = CONCAT26((short)(local_88 >> 0x30),
                                CONCAT15(bVar37,CONCAT14(*piVar55 - 0x133U < 0x20,
                                                         CONCAT13(*piVar55 - 0x109U < 0x2a,
                                                                  CONCAT12(cVar19,(short)local_88)))
                                        )) & 0xffffffffffffff00;
            if (*puVar54 < 0xc) {
              puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
              local_80 = *puVar34;
              local_78 = puVar34[1];
            }
            else {
              local_80 = 0;
              local_78 = 0;
            }
            FUN_0298b040(puVar57,&local_a0);
          }
        }
        if ((((uVar28 & 1) != 0) && (*(long *)(lVar53 + 0x1e90) != 0)) &&
           (puVar34 = *(undefined8 **)(*(long *)(lVar53 + 0x1e90) + 8), puVar34 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar34)();
        }
        if ((*(long **)(lVar53 + 0x2210) == (long *)0x0) ||
           (puVar34 = (undefined8 *)**(long **)(lVar53 + 0x2210), puVar34 == (undefined8 *)0x0)) {
          uVar28 = 0;
        }
        else {
          uVar28 = (**(code **)*puVar34)();
        }
        local_228 = local_228 + 2;
        lVar59 = *(long *)(param_1 + 0xa0);
        uVar38 = local_228;
        if (*(uint *)(param_1 + 0x98) <= local_228) {
          uVar38 = 0;
        }
        lVar49 = lVar59 + (long)(int)uVar38 * 400;
        *(undefined1 *)(lVar49 + 8) = 0;
        puVar54 = (uint *)(lVar49 + 0x18);
        *puVar54 = (int)*(char *)(*(long *)(lVar53 + 0x21f8) + *(long *)(lVar53 + 0x21f0) + 2);
        local_1b8 = local_1b8 & 0xffffffffffffff00;
        local_1c0 = 0x10000000000;
        uVar39 = (uint)*(short *)(*(long *)(lVar53 + 0x21f8) + *(long *)(lVar53 + 0x21f0));
        uVar39 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
        puVar3 = PTR_DAT_04bb2020 + 0x10;
        puStack_1d0 = &DAT_0405db6e;
        local_1d8 = puVar3;
        local_1c8 = &local_1b8;
        local_6c[0] = uVar39;
        FUN_02a21700(&local_1c8,&local_1d8,2,local_6c);
        local_a0 = (undefined *)0x0;
        local_98 = (long *)0x0;
        _local_90 = CONCAT62(stack0xffffffffffffff72,0xff);
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        puStack_b0 = local_1c8;
        local_b8 = puVar3;
        uVar58 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a0,&local_b8);
        plVar56 = (long *)0x0;
        if (((uVar58 & 1) != 0) && (plVar56 = local_98, local_98 != (long *)0x0)) {
          if (*(uint *)(local_98 + 3) == 0) {
            plVar56 = (long *)0x0;
          }
          else {
            plVar56 = (long *)((ulong)*(uint *)(local_98 + 3) + (long)local_98);
            if (*plVar56 != 0x101feff464e494d) {
              plVar56 = (long *)0x0;
            }
          }
        }
        uVar10 = *puVar54;
        puVar60 = (uint *)(lVar59 + (long)(int)uVar38 * 400 + 0xc);
        *puVar60 = uVar39;
        if (*(int *)(param_1 + 0xe8) == 0) {
          if (((*(char *)(param_1 + 0x2794) != '\0') && (*(uint *)(param_1 + 0x2720) == uVar10)) &&
             (*(char *)(param_1 + 0x2624) != '\0')) {
            *(uint *)(param_1 + 0x2628) = uVar39;
            *(uint *)(param_1 + 0x2718) = uVar39;
          }
        }
        else if (((*(char *)(param_1 + 0x62ea0) != '\0') && (*(uint *)(param_1 + 0x62e2c) == uVar10)
                 ) && (*(char *)(param_1 + 0x62d30) != '\0')) {
          *(uint *)(param_1 + 0x62d34) = uVar39;
          *(uint *)(param_1 + 0x62e24) = uVar39;
        }
        if (plVar56 != (long *)0x0) {
          lVar49 = lVar59 + (long)(int)uVar38 * 400;
          *(undefined4 *)(lVar49 + 0x124) = *(undefined4 *)((long)plVar56 + 0x14);
          *(int *)(lVar49 + 0x128) = (int)plVar56[3];
          *(undefined4 *)(lVar49 + 300) = *(undefined4 *)((long)plVar56 + 0x1c);
        }
        if ((int)*puVar60 < 0) {
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          ppuVar32 = (undefined **)&local_1c8;
        }
        else {
          local_a0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a0);
          uVar10 = *puVar60;
          uVar39 = 0;
          if (uVar10 != 99999 && -1 < (int)uVar10) {
            uVar39 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar49 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar49 != 0;
              lVar49 = *(long *)(lVar49 + 0x10)) {
            while ((int)uVar39 < *(int *)(lVar49 + 0x20)) {
              lVar49 = *(long *)(lVar49 + 8);
              if (lVar49 == 0) goto LAB_029a223c;
            }
            if ((int)uVar39 <= *(int *)(lVar49 + 0x20)) {
              local_1c8 = (undefined8 *)(ulong)(ushort)*(undefined4 *)(lVar49 + 0x2c);
              goto LAB_029a2268;
            }
          }
LAB_029a223c:
          local_1c8 = (undefined8 *)0xfffe;
LAB_029a2268:
          FUN_0277d4ac(&local_1c8);
          ppuVar32 = &local_a0;
          local_a0 = (undefined *)local_1c8;
        }
        uVar26 = FUN_0277d6c4(ppuVar32);
        *(undefined2 *)(lVar59 + (long)(int)uVar38 * 400 + 0x122) = uVar26;
        if (bVar20) {
          lVar49 = lVar59 + (long)(int)uVar38 * 400;
          if (*(long **)(lVar49 + 0x50) != (long *)(lVar49 + 0x48)) {
            lVar48 = lVar59 + (long)(int)uVar38 * 400;
            piVar55 = (int *)(lVar48 + 0x58);
            plVar56 = (long *)(lVar48 + 0x60);
            plVar44 = *(long **)(lVar49 + 0x50);
            do {
              plVar7 = (long *)plVar44[1];
              plVar51 = plVar7;
              if (*plVar44 != 0) {
                *(long **)(*plVar44 + 8) = plVar7;
                plVar51 = (long *)plVar44[1];
              }
              if (plVar51 != (long *)0x0) {
                *plVar51 = *plVar44;
              }
              *plVar44 = 0;
              plVar44[1] = 0;
              *piVar55 = *piVar55 + -1;
              plVar44[-1] = *plVar56;
              *plVar56 = (long)(plVar44 + -1);
              plVar44 = plVar7;
            } while (plVar7 != (long *)(lVar49 + 0x48));
          }
          puVar57 = (undefined4 *)(lVar49 + 0x40);
          *puVar57 = 0xffffffff;
          if (*puVar54 != 0xffffffff) {
            local_1c8 = (undefined8 *)0xfffe;
            FUN_0277d4ac(&local_1c8);
            local_1c0 = 0xfffe;
            FUN_0277d4ac(&local_1c0);
            uVar29 = 0xffffffff;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1b0 = 0;
            cStack_1ae = 0;
            uStack_1ad = 0;
            local_1ac = 0;
            bStack_1ab = 0;
            local_1b8 = CONCAT44(0xffffffff,*puVar54);
            piVar55 = (int *)(lVar59 + (long)(int)uVar38 * 400 + 4);
            if (0xffffffea < *piVar55 - 0xf9U) {
              uVar38 = *piVar55 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar38 + (char)((uVar38 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            local_1b8 = CONCAT44(uVar29,(undefined4)local_1b8);
            local_1b0 = 1;
            uStack_1ad = *piVar55 - 0x109U < 0x2a;
            local_1ac = *piVar55 - 0x133U < 0x20;
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              bStack_1ab = 0;
            }
            else {
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x20);
              puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
              if (0xff < (uint)(int)sVar12) {
                puVar3 = PTR_DAT_04bc39f8;
              }
              bStack_1ab = (byte)*(undefined4 *)(puVar3 + 4) & 1;
            }
            if (*puVar54 < 0xc) {
              puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
              local_1a8 = *puVar34;
              uStack_1a0 = puVar34[1];
            }
            else {
              local_1a8 = 0;
              uStack_1a0 = 0;
            }
            cStack_1ae = cVar19;
            FUN_0298b040(puVar57,&local_1c8);
            local_b8 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_b8);
            uVar39 = *puVar60;
            uVar38 = 0;
            if (uVar39 != 99999 && -1 < (int)uVar39) {
              uVar38 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
            }
            for (lVar59 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar59 != 0;
                lVar59 = *(long *)(lVar59 + 0x10)) {
              while ((int)uVar38 < *(int *)(lVar59 + 0x20)) {
                lVar59 = *(long *)(lVar59 + 8);
                if (lVar59 == 0) goto LAB_029a24d0;
              }
              if ((int)uVar38 <= *(int *)(lVar59 + 0x20)) {
                local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar59 + 0x2c);
                goto LAB_029a24e8;
              }
            }
LAB_029a24d0:
            local_a0 = (undefined *)0xfffe;
LAB_029a24e8:
            FUN_0277d4ac(&local_a0);
            local_b8 = local_a0;
            local_a0 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_a0);
            local_98 = (long *)0xfffe;
            FUN_0277d4ac(&local_98);
            uVar29 = 0xffffffff;
            local_88 = local_88 & 0xffff000000000000;
            local_80 = 0;
            local_78 = 0;
            local_a0 = local_b8;
            _local_90 = CONCAT44(0xffffffff,*puVar54);
            if (0xffffffea < *piVar55 - 0xf9U) {
              uVar38 = *piVar55 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar38 + (char)((uVar38 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            _local_90 = CONCAT44(uVar29,local_90);
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              bVar37 = 0;
            }
            else {
              local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x20);
              puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
              if (0xff < (uint)(int)sVar12) {
                puVar3 = PTR_DAT_04bc39f8;
              }
              bVar37 = (byte)*(undefined4 *)(puVar3 + 4) & 1;
            }
            local_88 = CONCAT26((short)(local_88 >> 0x30),
                                CONCAT15(bVar37,CONCAT14(*piVar55 - 0x133U < 0x20,
                                                         CONCAT13(*piVar55 - 0x109U < 0x2a,
                                                                  CONCAT12(cVar19,(short)local_88)))
                                        )) & 0xffffffffffffff00;
            if (*puVar54 < 0xc) {
              puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
              local_80 = *puVar34;
              local_78 = puVar34[1];
            }
            else {
              local_80 = 0;
              local_78 = 0;
            }
            FUN_0298b040(puVar57,&local_a0);
          }
        }
        if ((((uVar28 & 1) != 0) && (*(long *)(lVar53 + 0x2210) != 0)) &&
           (puVar34 = *(undefined8 **)(*(long *)(lVar53 + 0x2210) + 8), puVar34 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar34)();
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 != 6);
      local_260 = local_260 + 1;
    } while (local_260 != 8);
    bVar25 = cVar19 != '\0';
    FUN_029a7f40(param_1,bVar20,bVar25);
    FUN_029a8860(param_1,bVar20,bVar25);
    FUN_029a98c0(param_1,bVar20,bVar25);
    iVar30 = 0;
    do {
      local_1c8 = (undefined8 *)CONCAT44(0xffffffff,(uint)local_1c8);
      uVar58 = FUN_016ca684(&local_1c8,iVar30);
      if ((uVar58 & 1) != 0) {
        uVar28 = iVar30 * 2 + 0x133;
        lVar43 = *(long *)(param_1 + 0xa0);
        if (*(uint *)(param_1 + 0x98) <= uVar28) {
          uVar28 = 0;
        }
        lVar33 = lVar43 + (ulong)uVar28 * 400;
        *(undefined1 *)(lVar33 + 8) = (undefined1)local_1c8;
        piVar55 = (int *)(lVar33 + 0x18);
        *piVar55 = local_1c8._4_4_;
        local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,(int)local_1c8._2_2_);
        FUN_029a7d90(param_1,lVar33,&local_1d8);
        puVar54 = (uint *)(lVar33 + 0xc);
        if ((int)*puVar54 < 0) {
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          uVar26 = FUN_0277d6c4(&local_1c8);
        }
        else {
          local_a0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a0);
          uVar39 = *puVar54;
          uVar38 = 0;
          if (uVar39 != 99999 && -1 < (int)uVar39) {
            uVar38 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar33 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar33 != 0;
              lVar33 = *(long *)(lVar33 + 0x10)) {
            while ((int)uVar38 < *(int *)(lVar33 + 0x20)) {
              lVar33 = *(long *)(lVar33 + 8);
              if (lVar33 == 0) goto LAB_029a27ec;
            }
            if ((int)uVar38 <= *(int *)(lVar33 + 0x20)) {
              local_1c8 = (undefined8 *)(ulong)(ushort)*(undefined4 *)(lVar33 + 0x2c);
              goto LAB_029a2820;
            }
          }
LAB_029a27ec:
          local_1c8 = (undefined8 *)0xfffe;
LAB_029a2820:
          FUN_0277d4ac(&local_1c8);
          local_a0 = (undefined *)local_1c8;
          uVar26 = FUN_0277d6c4(&local_a0);
        }
        *(undefined2 *)(lVar43 + (ulong)uVar28 * 400 + 0x122) = uVar26;
        if (bVar20) {
          lVar33 = lVar43 + (ulong)uVar28 * 400;
          if (*(long **)(lVar33 + 0x50) != (long *)(lVar33 + 0x48)) {
            lVar53 = lVar43 + (ulong)uVar28 * 400;
            piVar52 = (int *)(lVar53 + 0x58);
            plVar56 = (long *)(lVar53 + 0x60);
            plVar44 = *(long **)(lVar33 + 0x50);
            do {
              plVar7 = (long *)plVar44[1];
              plVar51 = plVar7;
              if (*plVar44 != 0) {
                *(long **)(*plVar44 + 8) = plVar7;
                plVar51 = (long *)plVar44[1];
              }
              if (plVar51 != (long *)0x0) {
                *plVar51 = *plVar44;
              }
              *plVar44 = 0;
              plVar44[1] = 0;
              *piVar52 = *piVar52 + -1;
              plVar44[-1] = *plVar56;
              *plVar56 = (long)(plVar44 + -1);
              plVar44 = plVar7;
            } while (plVar7 != (long *)(lVar33 + 0x48));
          }
          puVar57 = (undefined4 *)(lVar33 + 0x40);
          *puVar57 = 0xffffffff;
          if (*piVar55 != -1) {
            local_1c8 = (undefined8 *)0xfffe;
            FUN_0277d4ac(&local_1c8);
            local_1c0 = 0xfffe;
            FUN_0277d4ac(&local_1c0);
            local_1a8 = 0;
            uStack_1a0 = 0;
            uVar29 = 0xffffffff;
            local_1b0 = 0;
            cStack_1ae = 0;
            uStack_1ad = 0;
            local_1ac = 0;
            bStack_1ab = 0;
            local_1b8 = CONCAT44(0xffffffff,*piVar55);
            piVar52 = (int *)(lVar43 + (ulong)uVar28 * 400 + 4);
            if (0xffffffea < *piVar52 - 0xf9U) {
              uVar28 = *piVar52 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar28 + (char)((uVar28 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            local_1b8 = CONCAT44(uVar29,(undefined4)local_1b8);
            local_1b0 = 1;
            local_1ac = *piVar52 - 0x133U < 0x20;
            cStack_1ae = cVar19;
            FUN_0298b040(puVar57,&local_1c8);
            local_b8 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_b8);
            uVar38 = *puVar54;
            uVar28 = 0;
            if (uVar38 != 99999 && -1 < (int)uVar38) {
              uVar28 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
            }
            for (lVar43 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar43 != 0;
                lVar43 = *(long *)(lVar43 + 0x10)) {
              while ((int)uVar28 < *(int *)(lVar43 + 0x20)) {
                lVar43 = *(long *)(lVar43 + 8);
                if (lVar43 == 0) goto LAB_029a2a00;
              }
              if ((int)uVar28 <= *(int *)(lVar43 + 0x20)) {
                local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar43 + 0x2c);
                goto LAB_029a2a18;
              }
            }
LAB_029a2a00:
            local_a0 = (undefined *)0xfffe;
LAB_029a2a18:
            FUN_0277d4ac(&local_a0);
            local_b8 = local_a0;
            local_a0 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_a0);
            local_98 = (long *)0xfffe;
            FUN_0277d4ac(&local_98);
            local_80 = 0;
            local_78 = 0;
            uVar29 = 0xffffffff;
            local_88 = local_88 & 0xffff000000000000;
            local_a0 = local_b8;
            _local_90 = CONCAT44(0xffffffff,*piVar55);
            if (0xffffffea < *piVar52 - 0xf9U) {
              uVar28 = *piVar52 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar28 + (char)((uVar28 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            _local_90 = CONCAT44(uVar29,local_90);
            local_88 = CONCAT35((int3)(local_88 >> 0x28),
                                CONCAT14(*piVar52 - 0x133U < 0x20,
                                         (int)CONCAT53((int5)(local_88 >> 0x18),
                                                       CONCAT12(cVar19,(short)local_88)))) &
                       0xffffffffffffff00;
            FUN_0298b040(puVar57,&local_a0);
          }
        }
      }
      local_1c8 = (undefined8 *)CONCAT44(0xffffffff,(uint)local_1c8);
      uVar58 = FUN_016cabec(&local_1c8,iVar30);
      if ((uVar58 & 1) != 0) {
        uVar28 = iVar30 * 2 + 0x134;
        lVar43 = *(long *)(param_1 + 0xa0);
        if (*(uint *)(param_1 + 0x98) <= uVar28) {
          uVar28 = 0;
        }
        lVar33 = lVar43 + (ulong)uVar28 * 400;
        *(undefined1 *)(lVar33 + 8) = 0;
        piVar55 = (int *)(lVar33 + 0x18);
        *piVar55 = local_1c8._4_4_;
        local_6c[0] = (uint)(short)local_1c8;
        FUN_029a7d90(param_1,lVar33,local_6c);
        puVar54 = (uint *)(lVar33 + 0xc);
        if ((int)*puVar54 < 0) {
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          uVar26 = FUN_0277d6c4(&local_1c8);
        }
        else {
          local_a0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a0);
          uVar39 = *puVar54;
          uVar38 = 0;
          if (uVar39 != 99999 && -1 < (int)uVar39) {
            uVar38 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar33 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar33 != 0;
              lVar33 = *(long *)(lVar33 + 0x10)) {
            while ((int)uVar38 < *(int *)(lVar33 + 0x20)) {
              lVar33 = *(long *)(lVar33 + 8);
              if (lVar33 == 0) goto LAB_029a2ba0;
            }
            if ((int)uVar38 <= *(int *)(lVar33 + 0x20)) {
              local_1c8 = (undefined8 *)(ulong)(ushort)*(undefined4 *)(lVar33 + 0x2c);
              goto LAB_029a2bd4;
            }
          }
LAB_029a2ba0:
          local_1c8 = (undefined8 *)0xfffe;
LAB_029a2bd4:
          FUN_0277d4ac(&local_1c8);
          local_a0 = (undefined *)local_1c8;
          uVar26 = FUN_0277d6c4(&local_a0);
        }
        *(undefined2 *)(lVar43 + (ulong)uVar28 * 400 + 0x122) = uVar26;
        if (bVar20) {
          lVar33 = lVar43 + (ulong)uVar28 * 400;
          if (*(long **)(lVar33 + 0x50) != (long *)(lVar33 + 0x48)) {
            lVar53 = lVar43 + (ulong)uVar28 * 400;
            piVar52 = (int *)(lVar53 + 0x58);
            plVar56 = (long *)(lVar53 + 0x60);
            plVar44 = *(long **)(lVar33 + 0x50);
            do {
              plVar7 = (long *)plVar44[1];
              plVar51 = plVar7;
              if (*plVar44 != 0) {
                *(long **)(*plVar44 + 8) = plVar7;
                plVar51 = (long *)plVar44[1];
              }
              if (plVar51 != (long *)0x0) {
                *plVar51 = *plVar44;
              }
              *plVar44 = 0;
              plVar44[1] = 0;
              *piVar52 = *piVar52 + -1;
              plVar44[-1] = *plVar56;
              *plVar56 = (long)(plVar44 + -1);
              plVar44 = plVar7;
            } while (plVar7 != (long *)(lVar33 + 0x48));
          }
          puVar57 = (undefined4 *)(lVar33 + 0x40);
          *puVar57 = 0xffffffff;
          if (*piVar55 != -1) {
            local_1c8 = (undefined8 *)0xfffe;
            FUN_0277d4ac(&local_1c8);
            local_1c0 = 0xfffe;
            FUN_0277d4ac(&local_1c0);
            local_1a8 = 0;
            uStack_1a0 = 0;
            uVar29 = 0xffffffff;
            local_1b0 = 0;
            cStack_1ae = 0;
            uStack_1ad = 0;
            local_1ac = 0;
            bStack_1ab = 0;
            local_1b8 = CONCAT44(0xffffffff,*piVar55);
            piVar52 = (int *)(lVar43 + (ulong)uVar28 * 400 + 4);
            if (0xffffffea < *piVar52 - 0xf9U) {
              uVar28 = *piVar52 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar28 + (char)((uVar28 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            local_1b8 = CONCAT44(uVar29,(undefined4)local_1b8);
            local_1b0 = 1;
            local_1ac = *piVar52 - 0x133U < 0x20;
            cStack_1ae = cVar19;
            FUN_0298b040(puVar57,&local_1c8);
            local_b8 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_b8);
            uVar38 = *puVar54;
            uVar28 = 0;
            if (uVar38 != 99999 && -1 < (int)uVar38) {
              uVar28 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
            }
            for (lVar43 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar43 != 0;
                lVar43 = *(long *)(lVar43 + 0x10)) {
              while ((int)uVar28 < *(int *)(lVar43 + 0x20)) {
                lVar43 = *(long *)(lVar43 + 8);
                if (lVar43 == 0) goto LAB_029a2db0;
              }
              if ((int)uVar28 <= *(int *)(lVar43 + 0x20)) {
                local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar43 + 0x2c);
                goto LAB_029a2dc8;
              }
            }
LAB_029a2db0:
            local_a0 = (undefined *)0xfffe;
LAB_029a2dc8:
            FUN_0277d4ac(&local_a0);
            local_b8 = local_a0;
            local_a0 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_a0);
            local_98 = (long *)0xfffe;
            FUN_0277d4ac(&local_98);
            local_80 = 0;
            local_78 = 0;
            uVar29 = 0xffffffff;
            local_88 = local_88 & 0xffff000000000000;
            local_a0 = local_b8;
            _local_90 = CONCAT44(0xffffffff,*piVar55);
            if (0xffffffea < *piVar52 - 0xf9U) {
              uVar28 = *piVar52 + 0x1b;
              uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar28 + (char)((uVar28 & 0x80) >> 7))
                                    >> 1 & 0xff,0);
            }
            _local_90 = CONCAT44(uVar29,local_90);
            local_88 = CONCAT35((int3)(local_88 >> 0x28),
                                CONCAT14(*piVar52 - 0x133U < 0x20,
                                         (int)CONCAT53((int5)(local_88 >> 0x18),
                                                       CONCAT12(cVar19,(short)local_88)))) &
                       0xffffffffffffff00;
            FUN_0298b040(puVar57,&local_a0);
          }
        }
      }
      uVar16 = _UNK_04102888;
      uVar15 = _DAT_04102880;
      uVar14 = _UNK_041023d8;
      uVar13 = _DAT_041023d0;
      uVar35 = _UNK_04102208;
      uVar8 = _DAT_04102200;
      iVar30 = iVar30 + 1;
    } while (iVar30 != 0x10);
    uVar31 = 0xffffffffffffffff;
    iVar30 = *(int *)(param_1 + 0x2798);
    if (iVar30 != 0) {
      lVar43 = *(long *)(param_1 + 0x27a0);
      iVar42 = 0;
      do {
        lVar33 = lVar43 + (long)iVar42 * 0x228;
        lVar53 = *(long *)(lVar33 + 0x28);
        *(undefined1 *)(lVar33 + 0x38) = 0;
        *(undefined8 *)(lVar33 + 0x3c) = 0xffffffffffffffff;
        *(undefined2 *)(lVar33 + 0x39) = 0xff00;
        *(undefined8 *)(lVar33 + 0x44) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 0x4c) = 0x42f00000ffffffff;
        *(undefined8 *)(lVar33 + 0x54) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 0x5c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 100) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 0x6c) = 0xffffffffffffffff;
        *(undefined4 *)(lVar33 + 0x74) = 0xffffffff;
        *(undefined8 *)(lVar33 + 0x90) = uVar35;
        *(undefined8 *)(lVar33 + 0x88) = uVar8;
        *(undefined8 *)(lVar33 + 0xa0) = uVar16;
        *(undefined8 *)(lVar33 + 0x98) = uVar15;
        *(undefined8 *)(lVar33 + 0xb0) = uVar14;
        *(undefined8 *)(lVar33 + 0xa8) = uVar13;
        *(undefined8 *)(lVar33 + 0x78) = 0;
        *(undefined8 *)(lVar33 + 0x80) = 0;
        *(undefined1 *)(lVar33 + 0x38) = *(undefined1 *)(lVar53 + 8);
        *(undefined4 *)(lVar33 + 0x3c) = *(undefined4 *)(lVar53 + 0xc);
        lVar59 = *(long *)(lVar33 + 0x128);
        uVar29 = *(undefined4 *)(lVar53 + 0x18);
        *(undefined1 *)(lVar33 + 0x138) = 0;
        *(undefined4 *)(lVar33 + 0x174) = 0xffffffff;
        *(undefined4 *)(lVar33 + 0x44) = uVar29;
        *(undefined8 *)(lVar33 + 0x13c) = 0xffffffffffffffff;
        *(undefined2 *)(lVar33 + 0x139) = 0xff00;
        *(undefined8 *)(lVar33 + 0x144) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 0x14c) = 0x42f00000ffffffff;
        *(undefined8 *)(lVar33 + 0x16c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 0x164) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 0x15c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 0x154) = 0xffffffffffffffff;
        *(undefined8 *)(lVar33 + 400) = uVar35;
        *(undefined8 *)(lVar33 + 0x188) = uVar8;
        *(undefined8 *)(lVar33 + 0x1a0) = uVar16;
        *(undefined8 *)(lVar33 + 0x198) = uVar15;
        *(undefined8 *)(lVar33 + 0x178) = 0;
        *(undefined8 *)(lVar33 + 0x180) = 0;
        *(undefined8 *)(lVar33 + 0x1b0) = uVar14;
        *(undefined8 *)(lVar33 + 0x1a8) = uVar13;
        *(undefined1 *)(lVar33 + 0x138) = *(undefined1 *)(lVar59 + 8);
        *(undefined4 *)(lVar33 + 0x13c) = *(undefined4 *)(lVar59 + 0xc);
        iVar42 = iVar42 + 1;
        *(undefined4 *)(lVar33 + 0x144) = *(undefined4 *)(lVar59 + 0x18);
      } while (iVar30 != iVar42);
    }
    if (bVar20) {
      uVar31 = FUN_0299b2a0(param_1 + 0xf0,cVar18 != '\0');
    }
LAB_029a3e74:
    *(undefined2 *)(param_1 + 9) = 0x201;
  }
  else {
    if (*(char *)(param_1 + 10) == '\x03') {
LAB_029a2f80:
      if (bVar21 && bVar22) {
        sVar12 = *(short *)PTR_DAT_04bb6298;
        if (sVar12 != -1) {
          local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x20);
          puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
          if (0xff < (uint)(int)sVar12) {
            puVar2 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar2 + 4) & 1) != 0) {
            uVar28 = 0;
            uVar38 = 0x152;
            lVar43 = param_1 + 0x62c60;
            do {
              local_6c[0] = uVar28;
              lVar33 = FUN_02643020();
              if (lVar33 == 0) {
                lVar53 = 0;
                plVar56 = plRam0000000000001e90;
                if (plRam0000000000001e90 != (long *)0x0) goto LAB_029a3080;
LAB_029a30a0:
                uVar58 = 0;
              }
              else {
                lVar53 = lVar33 + 0xe0 + (ulong)local_6c[0] * 0x2488;
                if (5 < local_6c[0]) {
                  lVar53 = lVar33 + 0xe0;
                }
                plVar56 = *(long **)(lVar53 + 0x1e90);
                if (*(long **)(lVar53 + 0x1e90) == (long *)0x0) goto LAB_029a30a0;
LAB_029a3080:
                if ((undefined8 *)*plVar56 == (undefined8 *)0x0) goto LAB_029a30a0;
                uVar58 = (*(code *)**(undefined8 **)*plVar56)();
                uVar58 = uVar58 & 0xffffffff;
              }
              uVar39 = uVar38 | 1;
              lVar33 = *(long *)(param_1 + 0xa0);
              if (*(uint *)(param_1 + 0x98) <= uVar39) {
                uVar39 = 0;
              }
              lVar59 = lVar33 + (ulong)uVar39 * 400;
              *(byte *)(lVar59 + 8) =
                   *(byte *)(*(long *)(lVar53 + 0x1e78) + *(long *)(lVar53 + 0x1e70) + 3) & 1;
              puVar54 = (uint *)(lVar59 + 0x18);
              *puVar54 = (int)*(char *)(*(long *)(lVar53 + 0x1e78) + *(long *)(lVar53 + 0x1e70) + 2)
              ;
              local_70 = (int)*(short *)(*(long *)(lVar53 + 0x1e78) + *(long *)(lVar53 + 0x1e70));
              FUN_029a7d90(param_1,lVar59,&local_70);
              puVar60 = (uint *)(lVar59 + 0xc);
              if ((int)*puVar60 < 0) {
                local_1c8 = (undefined8 *)0xfffe;
                FUN_0277d4ac(&local_1c8);
                ppuVar32 = (undefined **)&local_1c8;
              }
              else {
                local_a0 = (undefined *)0xfffe;
                FUN_0277d4ac(&local_a0);
                uVar9 = *puVar60;
                uVar10 = 0;
                if (uVar9 != 99999 && -1 < (int)uVar9) {
                  uVar10 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
                }
                for (lVar59 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar59 != 0;
                    lVar59 = *(long *)(lVar59 + 0x10)) {
                  while ((int)uVar10 < *(int *)(lVar59 + 0x20)) {
                    lVar59 = *(long *)(lVar59 + 8);
                    if (lVar59 == 0) goto LAB_029a318c;
                  }
                  if ((int)uVar10 <= *(int *)(lVar59 + 0x20)) {
                    local_1c8 = (undefined8 *)(ulong)(ushort)*(undefined4 *)(lVar59 + 0x2c);
                    goto LAB_029a31b8;
                  }
                }
LAB_029a318c:
                local_1c8 = (undefined8 *)0xfffe;
LAB_029a31b8:
                FUN_0277d4ac(&local_1c8);
                ppuVar32 = &local_a0;
                local_a0 = (undefined *)local_1c8;
              }
              uVar26 = FUN_0277d6c4(ppuVar32);
              *(undefined2 *)(lVar33 + (ulong)uVar39 * 400 + 0x122) = uVar26;
              if (bVar20) {
                lVar59 = lVar33 + (ulong)uVar39 * 400;
                if (*(long **)(lVar59 + 0x50) != (long *)(lVar59 + 0x48)) {
                  lVar49 = lVar33 + (ulong)uVar39 * 400;
                  piVar55 = (int *)(lVar49 + 0x58);
                  plVar56 = (long *)(lVar49 + 0x60);
                  plVar44 = *(long **)(lVar59 + 0x50);
                  do {
                    plVar7 = (long *)plVar44[1];
                    plVar51 = plVar7;
                    if (*plVar44 != 0) {
                      *(long **)(*plVar44 + 8) = plVar7;
                      plVar51 = (long *)plVar44[1];
                    }
                    if (plVar51 != (long *)0x0) {
                      *plVar51 = *plVar44;
                    }
                    *plVar44 = 0;
                    plVar44[1] = 0;
                    *piVar55 = *piVar55 + -1;
                    plVar44[-1] = *plVar56;
                    *plVar56 = (long)(plVar44 + -1);
                    plVar44 = plVar7;
                  } while (plVar7 != (long *)(lVar59 + 0x48));
                }
                puVar57 = (undefined4 *)(lVar59 + 0x40);
                *puVar57 = 0xffffffff;
                if (*puVar54 != 0xffffffff) {
                  local_1c8 = (undefined8 *)0xfffe;
                  FUN_0277d4ac(&local_1c8);
                  local_1c0 = 0xfffe;
                  FUN_0277d4ac(&local_1c0);
                  uVar29 = 0xffffffff;
                  local_1a8 = 0;
                  uStack_1a0 = 0;
                  local_1b0 = 0;
                  cStack_1ae = 0;
                  uStack_1ad = 0;
                  local_1ac = 0;
                  bStack_1ab = 0;
                  local_1b8 = CONCAT44(0xffffffff,*puVar54);
                  piVar55 = (int *)(lVar33 + (ulong)uVar39 * 400 + 4);
                  if (0xffffffea < *piVar55 - 0xf9U) {
                    uVar39 = *piVar55 + 0x1b;
                    uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar39 +
                                                           (char)((uVar39 & 0x80) >> 7)) >> 1 & 0xff
                                          ,0);
                  }
                  puVar2 = PTR_DAT_04bb6298;
                  local_1b8 = CONCAT44(uVar29,(undefined4)local_1b8);
                  local_1b0 = 1;
                  cStack_1ae = '\0';
                  uStack_1ad = *piVar55 - 0x109U < 0x2a;
                  local_1ac = *piVar55 - 0x133U < 0x20;
                  sVar12 = *(short *)PTR_DAT_04bb6298;
                  if (sVar12 == -1) {
                    bStack_1ab = 0;
                  }
                  else {
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x20);
                    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
                    if (0xff < (uint)(int)sVar12) {
                      puVar3 = PTR_DAT_04bc39f8;
                    }
                    bStack_1ab = (byte)*(undefined4 *)(puVar3 + 4) & 1;
                  }
                  if (*puVar54 < 0xc) {
                    puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
                    local_1a8 = *puVar34;
                    uStack_1a0 = puVar34[1];
                  }
                  else {
                    local_1a8 = 0;
                    uStack_1a0 = 0;
                  }
                  FUN_0298b040(puVar57,&local_1c8);
                  local_b8 = (undefined *)0xfffe;
                  FUN_0277d4ac(&local_b8);
                  uVar10 = *puVar60;
                  uVar39 = 0;
                  if (uVar10 != 99999 && -1 < (int)uVar10) {
                    uVar39 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
                  }
                  for (lVar33 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar33 != 0;
                      lVar33 = *(long *)(lVar33 + 0x10)) {
                    while ((int)uVar39 < *(int *)(lVar33 + 0x20)) {
                      lVar33 = *(long *)(lVar33 + 8);
                      if (lVar33 == 0) goto LAB_029a342c;
                    }
                    if ((int)uVar39 <= *(int *)(lVar33 + 0x20)) {
                      local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar33 + 0x2c);
                      goto LAB_029a3444;
                    }
                  }
LAB_029a342c:
                  local_a0 = (undefined *)0xfffe;
LAB_029a3444:
                  FUN_0277d4ac(&local_a0);
                  local_b8 = local_a0;
                  local_a0 = (undefined *)0xfffe;
                  FUN_0277d4ac(&local_a0);
                  local_98 = (long *)0xfffe;
                  FUN_0277d4ac(&local_98);
                  uVar29 = 0xffffffff;
                  local_80 = 0;
                  local_78 = 0;
                  local_88 = local_88 & 0xffffffff00000000;
                  local_a0 = local_b8;
                  _local_90 = CONCAT44(0xffffffff,*puVar54);
                  if (0xffffffea < *piVar55 - 0xf9U) {
                    uVar39 = *piVar55 + 0x1b;
                    uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar39 +
                                                           (char)((uVar39 & 0x80) >> 7)) >> 1 & 0xff
                                          ,0);
                  }
                  _local_90 = CONCAT44(uVar29,local_90);
                  uVar45 = local_88 >> 0x30;
                  local_88._0_2_ = (ushort)local_88 & 0xff00;
                  local_88._0_3_ = (uint3)(ushort)local_88;
                  local_88._0_4_ = CONCAT13(*piVar55 - 0x109U < 0x2a,(uint3)local_88);
                  local_88._0_5_ = CONCAT14(*piVar55 - 0x133U < 0x20,(undefined4)local_88);
                  sVar12 = *(short *)puVar2;
                  if (sVar12 == -1) {
                    bVar37 = 0;
                  }
                  else {
                    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x20);
                    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
                    if (0xff < (uint)(int)sVar12) {
                      puVar2 = PTR_DAT_04bc39f8;
                    }
                    bVar37 = (byte)*(undefined4 *)(puVar2 + 4) & 1;
                  }
                  local_88._0_6_ = CONCAT15(bVar37,(undefined5)local_88);
                  local_88 = CONCAT26((short)uVar45,(undefined6)local_88);
                  if (*puVar54 < 0xc) {
                    puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
                    local_80 = *puVar34;
                    local_78 = puVar34[1];
                  }
                  else {
                    local_80 = 0;
                    local_78 = 0;
                  }
                  FUN_0298b040(puVar57,&local_a0);
                }
              }
              if ((((uVar58 & 1) != 0) && (*(long *)(lVar53 + 0x1e90) != 0)) &&
                 (puVar34 = *(undefined8 **)(*(long *)(lVar53 + 0x1e90) + 8),
                 puVar34 != (undefined8 *)0x0)) {
                (**(code **)*puVar34)();
              }
              if ((*(long **)(lVar53 + 0x2210) == (long *)0x0) ||
                 (puVar34 = (undefined8 *)**(long **)(lVar53 + 0x2210), puVar34 == (undefined8 *)0x0
                 )) {
                uVar58 = 0;
              }
              else {
                uVar58 = (**(code **)*puVar34)();
                uVar58 = uVar58 & 0xffffffff;
              }
              uVar38 = uVar38 + 2;
              lVar33 = *(long *)(param_1 + 0xa0);
              uVar39 = uVar38;
              if (*(uint *)(param_1 + 0x98) <= uVar38) {
                uVar39 = 0;
              }
              lVar59 = lVar33 + (ulong)uVar39 * 400;
              *(undefined1 *)(lVar59 + 8) = 0;
              puVar54 = (uint *)(lVar59 + 0x18);
              *puVar54 = (int)*(char *)(*(long *)(lVar53 + 0x21f8) + *(long *)(lVar53 + 0x21f0) + 2)
              ;
              local_a4 = (int)*(short *)(*(long *)(lVar53 + 0x21f8) + *(long *)(lVar53 + 0x21f0));
              FUN_029a7d90(param_1,lVar59,&local_a4);
              puVar60 = (uint *)(lVar59 + 0xc);
              if ((int)*puVar60 < 0) {
                local_1c8 = (undefined8 *)0xfffe;
                FUN_0277d4ac(&local_1c8);
                ppuVar32 = (undefined **)&local_1c8;
              }
              else {
                local_a0 = (undefined *)0xfffe;
                FUN_0277d4ac(&local_a0);
                uVar9 = *puVar60;
                uVar10 = 0;
                if (uVar9 != 99999 && -1 < (int)uVar9) {
                  uVar10 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
                }
                for (lVar59 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar59 != 0;
                    lVar59 = *(long *)(lVar59 + 0x10)) {
                  while ((int)uVar10 < *(int *)(lVar59 + 0x20)) {
                    lVar59 = *(long *)(lVar59 + 8);
                    if (lVar59 == 0) goto LAB_029a36ac;
                  }
                  if ((int)uVar10 <= *(int *)(lVar59 + 0x20)) {
                    local_1c8 = (undefined8 *)(ulong)(ushort)*(undefined4 *)(lVar59 + 0x2c);
                    goto LAB_029a36d8;
                  }
                }
LAB_029a36ac:
                local_1c8 = (undefined8 *)0xfffe;
LAB_029a36d8:
                FUN_0277d4ac(&local_1c8);
                ppuVar32 = &local_a0;
                local_a0 = (undefined *)local_1c8;
              }
              uVar31 = FUN_0277d6c4(ppuVar32);
              *(short *)(lVar33 + (ulong)uVar39 * 400 + 0x122) = (short)uVar31;
              if (bVar20) {
                lVar59 = lVar33 + (ulong)uVar39 * 400;
                if (*(long **)(lVar59 + 0x50) != (long *)(lVar59 + 0x48)) {
                  lVar49 = lVar33 + (ulong)uVar39 * 400;
                  piVar55 = (int *)(lVar49 + 0x58);
                  plVar56 = (long *)(lVar49 + 0x60);
                  plVar44 = *(long **)(lVar59 + 0x50);
                  do {
                    plVar7 = (long *)plVar44[1];
                    plVar51 = plVar7;
                    if (*plVar44 != 0) {
                      *(long **)(*plVar44 + 8) = plVar7;
                      plVar51 = (long *)plVar44[1];
                    }
                    if (plVar51 != (long *)0x0) {
                      *plVar51 = *plVar44;
                    }
                    *plVar44 = 0;
                    plVar44[1] = 0;
                    *piVar55 = *piVar55 + -1;
                    plVar44[-1] = *plVar56;
                    *plVar56 = (long)(plVar44 + -1);
                    plVar44 = plVar7;
                  } while (plVar7 != (long *)(lVar59 + 0x48));
                }
                puVar57 = (undefined4 *)(lVar59 + 0x40);
                *puVar57 = 0xffffffff;
                if (*puVar54 != 0xffffffff) {
                  local_1c8 = (undefined8 *)0xfffe;
                  FUN_0277d4ac(&local_1c8);
                  local_1c0 = 0xfffe;
                  FUN_0277d4ac(&local_1c0);
                  uVar29 = 0xffffffff;
                  local_1a8 = 0;
                  uStack_1a0 = 0;
                  local_1b0 = 0;
                  cStack_1ae = 0;
                  uStack_1ad = 0;
                  local_1ac = 0;
                  bStack_1ab = 0;
                  local_1b8 = CONCAT44(0xffffffff,*puVar54);
                  piVar55 = (int *)(lVar33 + (ulong)uVar39 * 400 + 4);
                  if (0xffffffea < *piVar55 - 0xf9U) {
                    uVar39 = *piVar55 + 0x1b;
                    uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar39 +
                                                           (char)((uVar39 & 0x80) >> 7)) >> 1 & 0xff
                                          ,0);
                  }
                  puVar2 = PTR_DAT_04bb6298;
                  local_1b8 = CONCAT44(uVar29,(undefined4)local_1b8);
                  local_1b0 = 1;
                  cStack_1ae = '\0';
                  uStack_1ad = *piVar55 - 0x109U < 0x2a;
                  local_1ac = *piVar55 - 0x133U < 0x20;
                  sVar12 = *(short *)PTR_DAT_04bb6298;
                  if (sVar12 == -1) {
                    bStack_1ab = 0;
                  }
                  else {
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x20);
                    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
                    if (0xff < (uint)(int)sVar12) {
                      puVar3 = PTR_DAT_04bc39f8;
                    }
                    bStack_1ab = (byte)*(undefined4 *)(puVar3 + 4) & 1;
                  }
                  if (*puVar54 < 0xc) {
                    puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
                    local_1a8 = *puVar34;
                    uStack_1a0 = puVar34[1];
                  }
                  else {
                    local_1a8 = 0;
                    uStack_1a0 = 0;
                  }
                  FUN_0298b040(puVar57,&local_1c8);
                  local_b8 = (undefined *)0xfffe;
                  FUN_0277d4ac(&local_b8);
                  uVar10 = *puVar60;
                  uVar39 = 0;
                  if (uVar10 != 99999 && -1 < (int)uVar10) {
                    uVar39 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
                  }
                  for (lVar33 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f820); lVar33 != 0;
                      lVar33 = *(long *)(lVar33 + 0x10)) {
                    while ((int)uVar39 < *(int *)(lVar33 + 0x20)) {
                      lVar33 = *(long *)(lVar33 + 8);
                      if (lVar33 == 0) goto LAB_029a394c;
                    }
                    if ((int)uVar39 <= *(int *)(lVar33 + 0x20)) {
                      local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar33 + 0x2c);
                      goto LAB_029a3964;
                    }
                  }
LAB_029a394c:
                  local_a0 = (undefined *)0xfffe;
LAB_029a3964:
                  FUN_0277d4ac(&local_a0);
                  local_b8 = local_a0;
                  local_a0 = (undefined *)0xfffe;
                  FUN_0277d4ac(&local_a0);
                  local_98 = (long *)0xfffe;
                  FUN_0277d4ac(&local_98);
                  uVar29 = 0xffffffff;
                  local_80 = 0;
                  local_78 = 0;
                  local_88 = local_88 & 0xffffffff00000000;
                  local_a0 = local_b8;
                  _local_90 = CONCAT44(0xffffffff,*puVar54);
                  if (0xffffffea < *piVar55 - 0xf9U) {
                    uVar39 = *piVar55 + 0x1b;
                    uVar29 = FUN_026641e0((uint)(int)(char)((char)uVar39 +
                                                           (char)((uVar39 & 0x80) >> 7)) >> 1 & 0xff
                                          ,0);
                  }
                  _local_90 = CONCAT44(uVar29,local_90);
                  uVar45 = local_88 >> 0x30;
                  local_88._0_2_ = (ushort)local_88 & 0xff00;
                  local_88._0_3_ = (uint3)(ushort)local_88;
                  local_88._0_4_ = CONCAT13(*piVar55 - 0x109U < 0x2a,(uint3)local_88);
                  local_88._0_5_ = CONCAT14(*piVar55 - 0x133U < 0x20,(undefined4)local_88);
                  sVar12 = *(short *)puVar2;
                  if (sVar12 == -1) {
                    bVar37 = 0;
                  }
                  else {
                    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x20);
                    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
                    if (0xff < (uint)(int)sVar12) {
                      puVar2 = PTR_DAT_04bc39f8;
                    }
                    bVar37 = (byte)*(undefined4 *)(puVar2 + 4) & 1;
                  }
                  local_88._0_6_ = CONCAT15(bVar37,(undefined5)local_88);
                  local_88 = CONCAT26((short)uVar45,(undefined6)local_88);
                  if (*puVar54 < 0xc) {
                    puVar34 = (undefined8 *)(lVar43 + (ulong)*puVar54 * 0x10);
                    local_80 = *puVar34;
                    local_78 = puVar34[1];
                  }
                  else {
                    local_80 = 0;
                    local_78 = 0;
                  }
                  uVar31 = FUN_0298b040(puVar57,&local_a0);
                }
              }
              if (((uVar58 & 1) != 0) && (*(long *)(lVar53 + 0x2210) != 0)) {
                puVar34 = *(undefined8 **)(*(long *)(lVar53 + 0x2210) + 8);
                uVar31 = 0;
                if (puVar34 != (undefined8 *)0x0) {
                  uVar31 = (**(code **)*puVar34)();
                }
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != 6);
          }
        }
        if (bVar20) {
          uVar31 = FUN_0299b840(param_1 + 0xf0,cVar18 != '\0');
        }
        uVar16 = _UNK_04102888;
        uVar15 = _DAT_04102880;
        uVar14 = _UNK_041023d8;
        uVar13 = _DAT_041023d0;
        uVar35 = _UNK_04102208;
        uVar8 = _DAT_04102200;
        if (0x67 < *(int *)(param_1 + 0x2798)) {
          lVar43 = *(long *)(param_1 + 0x27a0);
          *(undefined8 *)(lVar43 + 0xde90) = 0;
          *(undefined8 *)(lVar43 + 0xde98) = 0;
          lVar33 = *(long *)(lVar43 + 0xde40);
          *(undefined1 *)(lVar43 + 0xde50) = 0;
          *(undefined8 *)(lVar43 + 0xde54) = 0xffffffffffffffff;
          *(undefined2 *)(lVar43 + 0xde51) = 0xff00;
          *(undefined8 *)(lVar43 + 0xde5c) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xde64) = 0x42f00000ffffffff;
          *(undefined8 *)(lVar43 + 0xde6c) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xde74) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 57000) = uVar35;
          *(undefined8 *)(lVar43 + 0xdea0) = uVar8;
          *(undefined8 *)(lVar43 + 0xde7c) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xde84) = 0xffffffffffffffff;
          *(undefined4 *)(lVar43 + 0xde8c) = 0xffffffff;
          *(undefined8 *)(lVar43 + 0xdeb8) = uVar16;
          *(undefined8 *)(lVar43 + 0xdeb0) = uVar15;
          *(undefined8 *)(lVar43 + 0xdec8) = uVar14;
          *(undefined8 *)(lVar43 + 0xdec0) = uVar13;
          *(undefined1 *)(lVar43 + 0xde50) = *(undefined1 *)(lVar33 + 8);
          *(undefined4 *)(lVar43 + 0xde54) = *(undefined4 *)(lVar33 + 0xc);
          uVar29 = *(undefined4 *)(lVar33 + 0x18);
          *(undefined1 *)(lVar43 + 0xdf50) = 0;
          *(undefined8 *)(lVar43 + 0xdf54) = 0xffffffffffffffff;
          *(undefined2 *)(lVar43 + 0xdf51) = 0xff00;
          *(undefined8 *)(lVar43 + 0xdf5c) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xdf64) = 0x42f00000ffffffff;
          *(undefined4 *)(lVar43 + 0xdf8c) = 0xffffffff;
          *(undefined4 *)(lVar43 + 0xde5c) = uVar29;
          lVar33 = *(long *)(lVar43 + 0xdf40);
          *(undefined8 *)(lVar43 + 0xdf84) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xdf7c) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xdf74) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xdf6c) = 0xffffffffffffffff;
          *(undefined8 *)(lVar43 + 0xdf90) = 0;
          *(undefined8 *)(lVar43 + 0xdf98) = 0;
          *(undefined8 *)(lVar43 + 0xdfa8) = uVar35;
          *(undefined8 *)(lVar43 + 0xdfa0) = uVar8;
          *(undefined8 *)(lVar43 + 0xdfb8) = uVar16;
          *(undefined8 *)(lVar43 + 0xdfb0) = uVar15;
          *(undefined8 *)(lVar43 + 0xdfc8) = uVar14;
          *(undefined8 *)(lVar43 + 0xdfc0) = uVar13;
          *(undefined1 *)(lVar43 + 0xdf50) = *(undefined1 *)(lVar33 + 8);
          *(undefined4 *)(lVar43 + 0xdf54) = *(undefined4 *)(lVar33 + 0xc);
          *(undefined4 *)(lVar43 + 0xdf5c) = *(undefined4 *)(lVar33 + 0x18);
          if (0x68 < *(int *)(param_1 + 0x2798)) {
            lVar43 = *(long *)(param_1 + 0x27a0);
            lVar33 = *(long *)(lVar43 + 0xe068);
            *(undefined1 *)(lVar43 + 0xe078) = 0;
            *(undefined8 *)(lVar43 + 0xe07c) = 0xffffffffffffffff;
            *(undefined2 *)(lVar43 + 0xe079) = 0xff00;
            *(undefined8 *)(lVar43 + 0xe084) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe08c) = 0x42f00000ffffffff;
            *(undefined8 *)(lVar43 + 0xe094) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe09c) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe0a4) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe0ac) = 0xffffffffffffffff;
            *(undefined4 *)(lVar43 + 0xe0b4) = 0xffffffff;
            *(undefined8 *)(lVar43 + 0xe0f0) = uVar14;
            *(undefined8 *)(lVar43 + 0xe0e8) = uVar13;
            *(undefined8 *)(lVar43 + 0xe0b8) = 0;
            *(undefined8 *)(lVar43 + 0xe0c0) = 0;
            *(undefined8 *)(lVar43 + 0xe0d0) = uVar35;
            *(undefined8 *)(lVar43 + 0xe0c8) = uVar8;
            *(undefined8 *)(lVar43 + 0xe0e0) = uVar16;
            *(undefined8 *)(lVar43 + 0xe0d8) = uVar15;
            *(undefined1 *)(lVar43 + 0xe078) = *(undefined1 *)(lVar33 + 8);
            *(undefined4 *)(lVar43 + 0xe07c) = *(undefined4 *)(lVar33 + 0xc);
            uVar29 = *(undefined4 *)(lVar33 + 0x18);
            *(undefined2 *)(lVar43 + 0xe179) = 0xff00;
            *(undefined1 *)(lVar43 + 0xe178) = 0;
            *(undefined8 *)(lVar43 + 0xe17c) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe184) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe18c) = 0x42f00000ffffffff;
            *(undefined4 *)(lVar43 + 0xe1b4) = 0xffffffff;
            *(undefined8 *)(lVar43 + 0xe1ac) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe1a4) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe19c) = 0xffffffffffffffff;
            *(undefined8 *)(lVar43 + 0xe194) = 0xffffffffffffffff;
            *(undefined4 *)(lVar43 + 0xe084) = uVar29;
            lVar33 = *(long *)(lVar43 + 0xe168);
            *(undefined8 *)(lVar43 + 0xe1f0) = uVar14;
            *(undefined8 *)(lVar43 + 0xe1e8) = uVar13;
            *(undefined8 *)(lVar43 + 0xe1b8) = 0;
            *(undefined8 *)(lVar43 + 0xe1c0) = 0;
            *(undefined8 *)(lVar43 + 0xe1d0) = uVar35;
            *(undefined8 *)(lVar43 + 0xe1c8) = uVar8;
            *(undefined8 *)(lVar43 + 0xe1e0) = uVar16;
            *(undefined8 *)(lVar43 + 0xe1d8) = uVar15;
            *(undefined1 *)(lVar43 + 0xe178) = *(undefined1 *)(lVar33 + 8);
            *(undefined4 *)(lVar43 + 0xe17c) = *(undefined4 *)(lVar33 + 0xc);
            *(undefined4 *)(lVar43 + 0xe184) = *(undefined4 *)(lVar33 + 0x18);
            if (0x69 < *(int *)(param_1 + 0x2798)) {
              lVar43 = *(long *)(param_1 + 0x27a0);
              lVar33 = *(long *)(lVar43 + 58000);
              *(undefined1 *)(lVar43 + 0xe2a0) = 0;
              *(undefined8 *)(lVar43 + 0xe2a4) = 0xffffffffffffffff;
              *(undefined2 *)(lVar43 + 0xe2a1) = 0xff00;
              *(undefined8 *)(lVar43 + 0xe2ac) = 0xffffffffffffffff;
              *(undefined8 *)(lVar43 + 0xe2b4) = 0x42f00000ffffffff;
              *(undefined8 *)(lVar43 + 0xe2bc) = 0xffffffffffffffff;
              *(undefined8 *)(lVar43 + 0xe2c4) = 0xffffffffffffffff;
              *(undefined8 *)(lVar43 + 0xe2cc) = 0xffffffffffffffff;
              *(undefined8 *)(lVar43 + 0xe2d4) = 0xffffffffffffffff;
              *(undefined4 *)(lVar43 + 0xe2dc) = 0xffffffff;
              *(undefined8 *)(lVar43 + 0xe2e0) = 0;
              *(undefined8 *)(lVar43 + 0xe2e8) = 0;
              *(undefined8 *)(lVar43 + 0xe2f8) = uVar35;
              *(undefined8 *)(lVar43 + 0xe2f0) = uVar8;
              *(undefined8 *)(lVar43 + 0xe308) = uVar16;
              *(undefined8 *)(lVar43 + 0xe300) = uVar15;
              *(undefined8 *)(lVar43 + 0xe318) = uVar14;
              *(undefined8 *)(lVar43 + 0xe310) = uVar13;
              *(undefined1 *)(lVar43 + 0xe2a0) = *(undefined1 *)(lVar33 + 8);
              *(undefined4 *)(lVar43 + 0xe2a4) = *(undefined4 *)(lVar33 + 0xc);
              uVar29 = *(undefined4 *)(lVar33 + 0x18);
              *(undefined8 *)(lVar43 + 0xe3b4) = 0x42f00000ffffffff;
              *(undefined1 *)(lVar43 + 0xe3a0) = 0;
              *(undefined8 *)(lVar43 + 0xe3a4) = 0xffffffffffffffff;
              *(undefined2 *)(lVar43 + 0xe3a1) = 0xff00;
              *(undefined8 *)(lVar43 + 0xe3ac) = 0xffffffffffffffff;
              *(undefined4 *)(lVar43 + 0xe3dc) = 0xffffffff;
              *(undefined8 *)(lVar43 + 0xe3d4) = 0xffffffffffffffff;
              *(undefined8 *)(lVar43 + 0xe3cc) = 0xffffffffffffffff;
              *(undefined8 *)(lVar43 + 0xe3c4) = 0xffffffffffffffff;
              *(undefined8 *)(lVar43 + 0xe3bc) = 0xffffffffffffffff;
              *(undefined4 *)(lVar43 + 0xe2ac) = uVar29;
              lVar33 = *(long *)(lVar43 + 0xe390);
              *(undefined8 *)(lVar43 + 0xe3e0) = 0;
              *(undefined8 *)(lVar43 + 0xe3e8) = 0;
              *(undefined8 *)(lVar43 + 0xe3f8) = uVar35;
              *(undefined8 *)(lVar43 + 0xe3f0) = uVar8;
              *(undefined8 *)(lVar43 + 0xe408) = uVar16;
              *(undefined8 *)(lVar43 + 0xe400) = uVar15;
              *(undefined8 *)(lVar43 + 0xe418) = uVar14;
              *(undefined8 *)(lVar43 + 0xe410) = uVar13;
              *(undefined1 *)(lVar43 + 0xe3a0) = *(undefined1 *)(lVar33 + 8);
              *(undefined4 *)(lVar43 + 0xe3a4) = *(undefined4 *)(lVar33 + 0xc);
              *(undefined4 *)(lVar43 + 0xe3ac) = *(undefined4 *)(lVar33 + 0x18);
              if (((0x6a < *(int *)(param_1 + 0x2798)) &&
                  (uVar31 = FUN_02990918(*(long *)(param_1 + 0x27a0) + 0xe490),
                  0x6b < *(int *)(param_1 + 0x2798))) &&
                 (uVar31 = FUN_02990918(*(long *)(param_1 + 0x27a0) + 0xe6b8),
                 0x6c < *(int *)(param_1 + 0x2798))) {
                uVar31 = FUN_02990918(*(long *)(param_1 + 0x27a0) + 0xe8e0);
              }
            }
          }
        }
        goto LAB_029a3e74;
      }
    }
    else if ((*(char *)(param_1 + 10) == '\x01') && (bVar1)) goto LAB_029a17d4;
LAB_029a3ac8:
    if (cVar36 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
      lVar43 = *(long *)PTR_DAT_04bb2720;
      if (lVar43 == 0) {
        puVar34 = &DAT_055c04a0;
      }
      else {
        puVar34 = &DAT_055c04a0;
        if (*(long *)(lVar43 + 0x330) != 0) {
          puVar34 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar43 + 0x338));
          iVar30 = FUN_006bd550(*puVar34,0);
          puVar34 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar30 != 0x758f7eaf) {
            puVar34 = &DAT_055c04a0;
          }
        }
      }
      if (((*(int *)(puVar34 + 7) == 0x1ca0c3e6) || (*(int *)(puVar34 + 7) == -0x78a1579c)) &&
         ((char)local_1f0 != '\0')) {
        *(undefined8 *)(param_1 + 0x50) = 0x10800000107;
        return;
      }
      *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
      return;
    }
  }
  cVar36 = *(char *)(param_1 + 8);
  *(bool *)(param_1 + 8) = bVar1;
  bVar25 = cVar36 == '\0';
  bVar20 = bVar25 && bVar1;
  if (bVar20) {
    lVar43 = *(long *)PTR_DAT_04bb2720;
    if (lVar43 == 0) {
      plVar56 = &DAT_055c04a0;
    }
    else {
      plVar56 = &DAT_055c04a0;
      if (*(long *)(lVar43 + 0x330) != 0) {
        puVar34 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar43 + 0x338));
        iVar30 = FUN_006bd550(*puVar34,0);
        plVar56 = (long *)PTR_DAT_04bc3a80;
        if (iVar30 != 0x758f7eaf) {
          plVar56 = &DAT_055c04a0;
        }
      }
    }
    __dest = *(void **)(param_1 + 0x18);
    (**(code **)(*plVar56 + 0x18))(plVar56);
    __src = (void *)plVar56[1];
    if (__dest != __src) {
      (**(code **)(*plVar56 + 0x18))(plVar56);
      lVar43 = 0;
      do {
        if (*(char *)(plVar56[1] + lVar43) == '\0') goto LAB_029a3fd0;
        lVar33 = plVar56[1] + lVar43;
        if (*(char *)(lVar33 + 1) == '\0') {
          lVar43 = lVar43 + 1;
          goto LAB_029a3fd0;
        }
        if (*(char *)(lVar33 + 2) == '\0') {
          lVar43 = lVar43 + 2;
          goto LAB_029a3fd0;
        }
        lVar43 = lVar43 + 3;
      } while (lVar43 != 0x80001);
      lVar43 = 0;
LAB_029a3fd0:
      iVar30 = (int)lVar43;
      if (*(int *)(param_1 + 0x20) <= (int)lVar43) {
        iVar30 = *(int *)(param_1 + 0x20) + -1;
      }
      memcpy(__dest,__src,(long)iVar30);
      *(undefined1 *)((long)__dest + (long)iVar30) = 0;
    }
    *(int *)(param_1 + 0x48) = (int)plVar56[7];
    uVar31 = FUN_029a50c8(param_1,&local_1e8);
  }
  uVar27 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar27 != 0xffffffffffffffff) {
    local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,3);
    puVar54 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar27 * 8);
    if (0xff < uVar27) {
      puVar54 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar54 >> 3 & 1) == 0) {
      local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar27 & 0xffffffffU) * 8;
      if (0xff < uVar27) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if (((*(uint *)(puVar2 + 4) & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848))
      goto LAB_029a40c4;
    }
    else {
LAB_029a40c4:
      uVar31 = FUN_029a50c8(param_1,&local_1e8);
      uVar27 = *(ushort *)PTR_DAT_04bb6298;
      if (uVar27 == 0xffff) goto LAB_029a42c8;
    }
    local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar27 & 0xffffffffU) * 8;
    if (0xff < uVar27) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      if (bVar23 || bVar24) {
        local_1c0 = param_1 + 0x62c18;
        local_1c8._0_2_ = CONCAT11(bVar1,bVar20);
        local_1b8 = param_1 + 0x62c30;
        FUN_02988830(param_1 + 0x62c60,&local_1c8);
      }
      else {
        lVar43 = *(long *)PTR_DAT_04bb39b0;
        pbVar40 = PTR_DAT_04bb32e0;
        if (lVar43 == 0) {
LAB_029a41c0:
          if (*pbVar40 < 8) goto LAB_029a422c;
LAB_029a41cc:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_029a4224:
            pbVar40 = PTR_DAT_04bb5038;
            goto LAB_029a422c;
          }
          lVar43 = **(long **)PTR_DAT_04bb27d0;
          bVar37 = *(byte *)(lVar43 + 0x473);
          pbVar40 = PTR_DAT_04bb5038;
          if ((long)(char)bVar37 != 0xffffffffffffffff) {
            puVar54 = (uint *)(lVar43 + 0x48) + ((long)(char)bVar37 & 0xffffffffU) * 0x20;
            if (7 < bVar37) {
              puVar54 = (uint *)(lVar43 + 0x48);
            }
            if ((*puVar54 & 8) != 0) {
              pbVar40 = (byte *)(lVar43 + 0x471);
            }
          }
          bVar37 = *pbVar40;
          if (7 < bVar37) goto LAB_029a4224;
        }
        else {
          if (*(int *)(lVar43 + 0x15c) != 0) {
            pbVar40 = (byte *)(lVar43 + 0x158);
          }
          if (7 < *pbVar40) {
            if ((*(int *)(lVar43 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              pbVar40 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_029a41c0;
            }
            goto LAB_029a41cc;
          }
LAB_029a422c:
          bVar37 = *pbVar40;
          if (7 < bVar37) {
            bVar37 = 0xff;
          }
        }
        if (*(char *)(param_1 + 0x62d24) != '\0' || bVar25 && (bVar21 && bVar22)) {
          if (7 < bVar37) {
            bVar37 = 0xff;
          }
          *(byte *)(param_1 + 0x62c18) = bVar37;
          *(undefined8 *)(param_1 + 0x62c1c) = 0;
          *(undefined8 *)(param_1 + 0x62c24) = 0;
          local_a0 = (undefined *)CONCAT71(local_a0._1_7_,bVar37);
          FUN_02988af0(uVar31,(undefined8 *)(param_1 + 0x62c1c),&local_a0);
          uVar58 = (ulong)local_1c8 >> 0x30;
          local_1c8 = (undefined8 *)CONCAT26((ushort)uVar58 & 0xff00,0xff0100000000);
          if (-1 < *(int *)(param_1 + 0x62c38)) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x62c38),&local_1c8,
                         param_1 + 0x62c18,0x14,0);
          }
          *(undefined1 *)(param_1 + 0x62d24) = 0;
        }
      }
    }
  }
LAB_029a42c8:
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 200));
  iVar30 = *(int *)(param_1 + 0x98);
  if (iVar30 != 0) {
    uVar58 = 0;
    uVar45 = 0;
    lVar43 = *(long *)(param_1 + 0xa0);
    do {
      lVar33 = lVar43 + (long)(int)uVar45 * 400;
      puVar34 = &DAT_055e1f18 + uVar45 * 6;
      if (0x15e < (uint)uVar58) {
        puVar34 = &DAT_055e1f18;
      }
      *puVar34 = *(undefined8 *)(lVar33 + 0x160);
      *(undefined4 *)(puVar34 + 1) = *(undefined4 *)(lVar33 + 0x168);
      uVar31 = *(undefined8 *)(lVar33 + 0x170);
      uVar8 = *(undefined8 *)(lVar33 + 0x178);
      uVar35 = *(undefined8 *)(lVar33 + 0x180);
      *(undefined8 *)((long)puVar34 + 0x25) = *(undefined8 *)(lVar33 + 0x185);
      puVar34[2] = uVar31;
      puVar34[3] = uVar8;
      puVar34[4] = uVar35;
      uVar58 = uVar45 + 1;
      *(undefined1 *)(lVar33 + 0x160) = 0;
      *(undefined1 *)(lVar33 + 0x163) = 0;
      *(undefined8 *)(lVar33 + 0x164) = 0xffffffffffffffff;
      *(undefined8 *)(lVar33 + 0x170) = 0xffffffffffffffff;
      *(undefined8 *)(lVar33 + 0x178) = 0xffffffffffffffff;
      *(undefined2 *)(lVar33 + 0x161) = 0;
      *(undefined8 *)(lVar33 + 0x180) = 0xfffeffffffff;
      uVar45 = uVar58 & 0xffffffff;
    } while (iVar30 != (int)uVar58);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 200));
  *(int *)(param_1 + 0x27b0) =
       (*(int *)(param_1 + 0x27a8) - *(int *)(param_1 + 0x27ac)) + *(int *)(param_1 + 0x27b0);
  *(undefined4 *)(param_1 + 0x27a8) = 0;
  *(undefined4 *)(param_1 + 0x27ac) = 0;
  *(int *)(param_1 + 0x27bc) =
       (*(int *)(param_1 + 0x27b4) - *(int *)(param_1 + 0x27b8)) + *(int *)(param_1 + 0x27bc);
  *(undefined4 *)(param_1 + 0x27b4) = 0;
  *(undefined4 *)(param_1 + 0x27b8) = 0;
  if ((0 < *(int *)(param_1 + 0xe8)) && (-1 < *(int *)(param_1 + 0x50))) {
    lVar43 = *(long *)PTR_DAT_04bb26a8;
    pMVar4 = (MutexType *)(lVar43 + 0x89660);
    nn::os::LockMutex(pMVar4);
    iVar30 = *(int *)(lVar43 + 0x89630);
    nn::os::UnlockMutex(pMVar4);
    if (iVar30 == 3) {
      uVar28 = *(uint *)(param_1 + 0x50);
      if (((0x29 < uVar28 - 0x109) && (uVar28 - 0x153 < 0xffffffe0)) &&
         (*(int *)(param_1 + 0x27b0) == 0)) {
        lVar43 = *(long *)(param_1 + 0xa0);
        uVar38 = uVar28;
        if (*(uint *)(param_1 + 0x98) <= uVar28) {
          uVar38 = 0;
        }
        lVar33 = lVar43 + (long)(int)uVar38 * 400;
        pbVar40 = (byte *)(lVar33 + 0x130);
        if (*(char *)(lVar33 + 0x131) == '\0') {
          puVar34 = &DAT_055e1f18 + (ulong)uVar28 * 6;
          if (0x15e < uVar28) {
            puVar34 = &DAT_055e1f18;
          }
          if (*(char *)((long)puVar34 + 1) != '\0') goto LAB_029a4488;
        }
        else {
LAB_029a4488:
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          lVar53 = *(long *)PTR_DAT_04bb26a8;
          uVar27 = FUN_0277d6c4(&local_1c8);
          for (lVar53 = *(long *)(lVar53 + 0x19f800); lVar53 != 0; lVar53 = *(long *)(lVar53 + 0x10)
              ) {
            while (uVar27 < *(ushort *)(lVar53 + 0x20)) {
              lVar53 = *(long *)(lVar53 + 8);
              if (lVar53 == 0) goto LAB_029a44ec;
            }
            if (uVar27 <= *(ushort *)(lVar53 + 0x20)) {
              uVar29 = *(undefined4 *)(lVar53 + 0x24);
              goto LAB_029a44f8;
            }
          }
LAB_029a44ec:
          uVar29 = 0;
LAB_029a44f8:
          lVar53 = lVar43 + (long)(int)uVar38 * 400;
          *(undefined4 *)(lVar53 + 0x138) = uVar29;
          *(undefined8 *)(lVar53 + 0x140) = 0xffffffffffffffff;
          *(undefined1 *)(lVar33 + 0x131) = 1;
          *(undefined1 *)(lVar53 + 0x132) = 1;
          puVar34 = &DAT_055e1f18 + (ulong)*(uint *)(param_1 + 0x50) * 6;
          local_1c8 = (undefined8 *)0xfffe;
          if (0x15e < *(uint *)(param_1 + 0x50)) {
            puVar34 = &DAT_055e1f18;
          }
          FUN_0277d4ac(&local_1c8);
          lVar53 = *(long *)PTR_DAT_04bb26a8;
          uVar27 = FUN_0277d6c4(&local_1c8);
          for (lVar53 = *(long *)(lVar53 + 0x19f800); lVar53 != 0; lVar53 = *(long *)(lVar53 + 0x10)
              ) {
            while (uVar27 < *(ushort *)(lVar53 + 0x20)) {
              lVar53 = *(long *)(lVar53 + 8);
              if (lVar53 == 0) goto LAB_029a4598;
            }
            if (uVar27 <= *(ushort *)(lVar53 + 0x20)) {
              uVar29 = *(undefined4 *)(lVar53 + 0x24);
              goto LAB_029a45a4;
            }
          }
LAB_029a4598:
          uVar29 = 0;
LAB_029a45a4:
          *(undefined4 *)(puVar34 + 1) = uVar29;
          *(undefined2 *)((long)puVar34 + 1) = 0x101;
          puVar34[2] = 0xffffffffffffffff;
        }
        if ((*pbVar40 >> 1 & 1) == 0) {
          pbVar46 = (byte *)(&DAT_055e1f18 + (ulong)*(uint *)(param_1 + 0x50) * 6);
          if (0x15e < *(uint *)(param_1 + 0x50)) {
            pbVar46 = (byte *)&DAT_055e1f18;
          }
          if ((*pbVar46 >> 1 & 1) != 0) goto LAB_029a45dc;
        }
        else {
LAB_029a45dc:
          *pbVar40 = *pbVar40 | 2;
          *(undefined1 *)(lVar43 + (long)(int)uVar38 * 400 + 0x133) = 0;
          pbVar46 = (byte *)(&DAT_055e1f18 + (ulong)*(uint *)(param_1 + 0x50) * 6);
          if (0x15e < *(uint *)(param_1 + 0x50)) {
            pbVar46 = (byte *)&DAT_055e1f18;
          }
          pbVar46[3] = 0;
          *pbVar46 = *pbVar46 | 2;
        }
        lVar53 = lVar43 + (long)(int)uVar38 * 400;
        if (0 < *(int *)(lVar53 + 0xc)) {
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          lVar59 = *(long *)PTR_DAT_04bb26a8;
          uVar27 = FUN_0277d6c4(&local_1c8);
          for (lVar59 = *(long *)(lVar59 + 0x19f800); lVar59 != 0; lVar59 = *(long *)(lVar59 + 0x10)
              ) {
            while (uVar27 < *(ushort *)(lVar59 + 0x20)) {
              lVar59 = *(long *)(lVar59 + 8);
              if (lVar59 == 0) goto LAB_029a4690;
            }
            if (uVar27 <= *(ushort *)(lVar59 + 0x20)) {
              uVar29 = *(undefined4 *)(lVar59 + 0x24);
              goto LAB_029a469c;
            }
          }
LAB_029a4690:
          uVar29 = 0;
LAB_029a469c:
          lVar59 = lVar43 + (long)(int)uVar38 * 400;
          *(undefined1 *)(lVar33 + 0x131) = 1;
          *(undefined4 *)(lVar59 + 0x138) = uVar29;
          *(undefined1 *)(lVar59 + 0x132) = 1;
          *(undefined8 *)(lVar59 + 0x140) = 0xffffffffffffffff;
        }
        if (*(char *)(lVar53 + 8) != '\0') {
          *pbVar40 = *pbVar40 | 2;
          *(undefined1 *)(lVar43 + (long)(int)uVar38 * 400 + 0x133) = 0;
        }
      }
      uVar28 = *(uint *)(param_1 + 0x54);
      if (((0x29 < uVar28 - 0x109) && (uVar28 - 0x153 < 0xffffffe0)) &&
         (*(int *)(param_1 + 0x27bc) == 0)) {
        lVar43 = *(long *)(param_1 + 0xa0);
        uVar38 = uVar28;
        if (*(uint *)(param_1 + 0x98) <= uVar28) {
          uVar38 = 0;
        }
        lVar33 = lVar43 + (long)(int)uVar38 * 400;
        pbVar40 = (byte *)(lVar33 + 0x130);
        if (*(char *)(lVar33 + 0x131) == '\0') {
          puVar34 = &DAT_055e1f18 + (ulong)uVar28 * 6;
          if (0x15e < uVar28) {
            puVar34 = &DAT_055e1f18;
          }
          if (*(char *)((long)puVar34 + 1) != '\0') goto LAB_029a4748;
        }
        else {
LAB_029a4748:
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          lVar53 = *(long *)PTR_DAT_04bb26a8;
          uVar27 = FUN_0277d6c4(&local_1c8);
          for (lVar53 = *(long *)(lVar53 + 0x19f800); lVar53 != 0; lVar53 = *(long *)(lVar53 + 0x10)
              ) {
            while (uVar27 < *(ushort *)(lVar53 + 0x20)) {
              lVar53 = *(long *)(lVar53 + 8);
              if (lVar53 == 0) goto LAB_029a47ac;
            }
            if (uVar27 <= *(ushort *)(lVar53 + 0x20)) {
              uVar29 = *(undefined4 *)(lVar53 + 0x24);
              goto LAB_029a47b8;
            }
          }
LAB_029a47ac:
          uVar29 = 0;
LAB_029a47b8:
          lVar53 = lVar43 + (long)(int)uVar38 * 400;
          *(undefined4 *)(lVar53 + 0x138) = uVar29;
          *(undefined8 *)(lVar53 + 0x140) = 0xffffffffffffffff;
          *(undefined1 *)(lVar33 + 0x131) = 1;
          *(undefined1 *)(lVar53 + 0x132) = 1;
          puVar34 = &DAT_055e1f18 + (ulong)*(uint *)(param_1 + 0x54) * 6;
          local_1c8 = (undefined8 *)0xfffe;
          if (0x15e < *(uint *)(param_1 + 0x54)) {
            puVar34 = &DAT_055e1f18;
          }
          FUN_0277d4ac(&local_1c8);
          lVar53 = *(long *)PTR_DAT_04bb26a8;
          uVar27 = FUN_0277d6c4(&local_1c8);
          lVar53 = *(long *)(lVar53 + 0x19f800);
          if (lVar53 == 0) {
            uVar29 = 0;
          }
          else {
            do {
              while (*(ushort *)(lVar53 + 0x20) <= uVar27) {
                if (uVar27 <= *(ushort *)(lVar53 + 0x20)) {
                  uVar29 = *(undefined4 *)(lVar53 + 0x24);
                  goto LAB_029a4870;
                }
                lVar53 = *(long *)(lVar53 + 0x10);
                if (lVar53 == 0) goto LAB_029a4858;
              }
              lVar53 = *(long *)(lVar53 + 8);
            } while (lVar53 != 0);
LAB_029a4858:
            uVar29 = 0;
          }
LAB_029a4870:
          *(undefined4 *)(puVar34 + 1) = uVar29;
          puVar34[2] = 0xffffffffffffffff;
          *(undefined2 *)((long)puVar34 + 1) = 0x101;
        }
        if ((*pbVar40 >> 1 & 1) == 0) {
          pbVar46 = (byte *)(&DAT_055e1f18 + (ulong)*(uint *)(param_1 + 0x54) * 6);
          if (0x15e < *(uint *)(param_1 + 0x54)) {
            pbVar46 = (byte *)&DAT_055e1f18;
          }
          if ((*pbVar46 >> 1 & 1) != 0) goto LAB_029a48a4;
        }
        else {
LAB_029a48a4:
          *pbVar40 = *pbVar40 | 2;
          *(undefined1 *)(lVar43 + (long)(int)uVar38 * 400 + 0x133) = 0;
          pbVar46 = (byte *)(&DAT_055e1f18 + (ulong)*(uint *)(param_1 + 0x54) * 6);
          if (0x15e < *(uint *)(param_1 + 0x54)) {
            pbVar46 = (byte *)&DAT_055e1f18;
          }
          pbVar46[3] = 0;
          *pbVar46 = *pbVar46 | 2;
        }
        lVar53 = lVar43 + (long)(int)uVar38 * 400;
        if (0 < *(int *)(lVar53 + 0xc)) {
          local_1c8 = (undefined8 *)0xfffe;
          FUN_0277d4ac(&local_1c8);
          lVar59 = *(long *)PTR_DAT_04bb26a8;
          uVar27 = FUN_0277d6c4(&local_1c8);
          for (lVar59 = *(long *)(lVar59 + 0x19f800); lVar59 != 0; lVar59 = *(long *)(lVar59 + 0x10)
              ) {
            while (uVar27 < *(ushort *)(lVar59 + 0x20)) {
              lVar59 = *(long *)(lVar59 + 8);
              if (lVar59 == 0) goto LAB_029a4958;
            }
            if (uVar27 <= *(ushort *)(lVar59 + 0x20)) {
              uVar29 = *(undefined4 *)(lVar59 + 0x24);
              goto LAB_029a4964;
            }
          }
LAB_029a4958:
          uVar29 = 0;
LAB_029a4964:
          lVar59 = lVar43 + (long)(int)uVar38 * 400;
          *(undefined1 *)(lVar33 + 0x131) = 1;
          *(undefined4 *)(lVar59 + 0x138) = uVar29;
          *(undefined1 *)(lVar59 + 0x132) = 1;
          *(undefined8 *)(lVar59 + 0x140) = 0xffffffffffffffff;
        }
        if (*(char *)(lVar53 + 8) != '\0') {
          *pbVar40 = *pbVar40 | 2;
          *(undefined1 *)(lVar43 + (long)(int)uVar38 * 400 + 0x133) = 0;
        }
      }
    }
  }
  uVar58 = (ulong)local_1c8 >> 0x10;
  local_1c8._0_2_ = CONCAT11(bVar20,bVar1);
  local_1c8 = (undefined8 *)(CONCAT62((int6)uVar58,(short)local_1c8) & 0xffffffffff00ffff);
  if (bVar1) {
    lVar43 = *(long *)PTR_DAT_04bb26a8;
    nn::os::LockMutex((MutexType *)(lVar43 + 0x89660));
    sVar12 = *(short *)(lVar43 + 0x895e2);
    iVar30 = *(int *)(lVar43 + 0x89620);
    nn::os::UnlockMutex((MutexType *)(lVar43 + 0x89660));
    if (sVar12 != -1) {
      local_1c8._0_3_ = CONCAT12(iVar30 == sVar12,(short)local_1c8);
    }
  }
  lVar43 = param_1 + 0x58;
  local_1c0 = lVar43;
  FUN_02993550(param_1 + 0xf0,&local_1c8);
  iVar30 = *(int *)(param_1 + 0x2798);
  if (iVar30 != 0) {
    iVar42 = 0;
    lVar33 = *(long *)(param_1 + 0x27a0);
    do {
      local_1c8._0_2_ = CONCAT11(bVar20,bVar1);
      local_1c0 = lVar43;
      FUN_029900c0(lVar33 + (long)iVar42 * 0x228,&local_1c8);
      iVar42 = iVar42 + 1;
    } while (iVar30 != iVar42);
  }
  iVar30 = *(int *)(param_1 + 0x98);
  puVar5 = (ushort *)(param_1 + 0x5ce20);
  uVar27 = *(ushort *)PTR_DAT_04bb6298;
  if (iVar30 != 0) {
    lVar33 = *(long *)(param_1 + 0xa0);
    iVar42 = 0;
    do {
      if (uVar27 == 0xffff) {
LAB_029a4b94:
        if (0xb < *(int *)(lVar33 + (long)iVar42 * 400 + 4) - 0x153U) goto LAB_029a4ba8;
      }
      else {
        local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x20);
        puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar27 & 0xffffffffU) * 8;
        if ((uVar27 & 0xff00) != 0) {
          puVar2 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_029a4b94;
LAB_029a4ba8:
        lVar53 = lVar33 + (long)iVar42 * 400;
        iVar11 = *(int *)(lVar53 + 0x18);
        pbVar40 = (byte *)(lVar53 + 0x130);
        if (((iVar11 == -1 || *(int *)(lVar53 + 0x150) != iVar11) || ((*pbVar40 >> 2 & 1) == 0)) &&
           ((iVar11 != -1 &&
            ((*(int *)(param_1 + 0x88) == iVar11 && ((*(byte *)(param_1 + 0x68) >> 2 & 1) != 0))))))
        {
          local_a0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a0);
          local_1c8 = (undefined8 *)(ulong)(ushort)*(undefined4 *)(param_1 + 0x8c);
          FUN_0277d4ac(&local_1c8);
          local_a0 = (undefined *)local_1c8;
          if ((short)local_1c8 != -2) {
            *(int *)(lVar53 + 0x150) = iVar11;
            uVar29 = FUN_0277d6c4(&local_a0);
            *(undefined4 *)(lVar33 + (long)iVar42 * 400 + 0x154) = uVar29;
            *pbVar40 = *pbVar40 | 4;
          }
          if ((*(byte *)(param_1 + 0x68) >> 3 & 1) != 0) {
            *(int *)(lVar53 + 0x150) = iVar11;
            *pbVar40 = *pbVar40 | 0xc;
          }
        }
        lVar53 = lVar33 + (long)iVar42 * 400;
        FUN_029a5a50(param_1,lVar53,pbVar40,0,bVar20,&lStack_218,cVar19 != '\0',&local_210);
        uVar28 = *(uint *)(lVar33 + (long)iVar42 * 400 + 4);
        puVar34 = &DAT_055e1f18 + (ulong)uVar28 * 6;
        if (0x15e < uVar28) {
          puVar34 = &DAT_055e1f18;
        }
        FUN_029a5a50(param_1,lVar53,puVar34,1,0,&lStack_218,cVar19 != '\0',&local_210);
        uVar27 = *(ushort *)PTR_DAT_04bb6298;
      }
      iVar42 = iVar42 + 1;
    } while (iVar30 != iVar42);
  }
  if (uVar27 != 0xffff) {
    local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar27 & 0xffffffffU) * 8;
    if ((uVar27 & 0xff00) != 0) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar2 + 4) & 1) != 0) && (*(char *)(param_1 + 0x62ea0) != '\0')) {
      uVar27 = *(ushort *)(param_1 + 0x62db0);
      if ((uVar27 & 1) == 0) {
LAB_029a4d0c:
        if ((uVar27 >> 2 & 1) == 0) goto LAB_029a4d10;
LAB_029a4d68:
        *(undefined1 *)(param_1 + 0x62d30) = *(undefined1 *)(param_1 + 0x62db2);
        *(undefined1 *)(param_1 + 0x62e20) = *(undefined1 *)(param_1 + 0x62db2);
        if ((uVar27 >> 1 & 1) != 0) goto LAB_029a4d78;
LAB_029a4d84:
        *(undefined2 *)(param_1 + 0x62db0) = 0;
        *(undefined1 *)(param_1 + 0x62db2) = 0;
        *(undefined8 *)(param_1 + 0x62db3) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x62dbb) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x62dc3) = 0xffffffffffffffff;
        *(undefined1 *)(param_1 + 0x62dcb) = 0xff;
        *(undefined8 *)(param_1 + 0x62dcc) = 0;
        *(undefined8 *)(param_1 + 0x62dd4) = 0;
        *(undefined8 *)(param_1 + 0x62ddc) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x62de4) = 0xffffffff;
      }
      else {
        if ((*(char *)(param_1 + 0x62d30) != '\0') && (*(char *)(param_1 + 0x62db2) == '\0')) {
          *(undefined4 *)(param_1 + 0x62d34) = *(undefined4 *)(param_1 + 0x62db4);
          goto LAB_029a4d0c;
        }
        *(undefined4 *)(param_1 + 0x62d34) = *(undefined4 *)(param_1 + 0x62db4);
        *(undefined4 *)(param_1 + 0x62e24) = *(undefined4 *)(param_1 + 0x62db4);
        if ((uVar27 >> 2 & 1) != 0) goto LAB_029a4d68;
LAB_029a4d10:
        if ((uVar27 >> 1 & 1) != 0) {
LAB_029a4d78:
          *(undefined4 *)(param_1 + 0x62d3c) = *(undefined4 *)(param_1 + 0x62dbc);
          *(undefined4 *)(param_1 + 0x62e2c) = *(undefined4 *)(param_1 + 0x62dbc);
          goto LAB_029a4d84;
        }
        *(undefined2 *)(param_1 + 0x62db0) = 0;
        *(undefined1 *)(param_1 + 0x62db2) = 0;
        *(undefined8 *)(param_1 + 0x62db3) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x62dbb) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x62dc3) = 0xffffffffffffffff;
        *(undefined1 *)(param_1 + 0x62dcb) = 0xff;
        *(undefined8 *)(param_1 + 0x62dcc) = 0;
        *(undefined8 *)(param_1 + 0x62dd4) = 0;
        *(undefined8 *)(param_1 + 0x62ddc) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x62de4) = 0xffffffff;
        if ((uVar27 & 1) == 0) goto LAB_029a4f88;
      }
      uVar27 = *puVar5;
      if (uVar27 < 600) {
        puVar57 = (undefined4 *)(param_1 + 0x5ce28 + (ulong)uVar27 * 0x28);
        *puVar57 = 0xf6f60000;
        *(undefined8 *)(puVar57 + 8) = 0xff7fffffff7fffff;
        *(undefined8 *)(puVar57 + 1) = 0xfff6fff6fff6fff6;
        puVar57[3] = 0xfffffff6;
        *(undefined8 *)(puVar57 + 4) = 0xfffffffffffffff6;
        *(undefined8 *)(puVar57 + 6) = 0xff7fffffff7fffff;
        if (*(char *)(param_1 + 0x62ea0) == '\0') {
          memset((void *)(param_1 + 0x62d28),0,0x178);
          iVar30 = -1;
          uVar41 = 0;
          *(undefined8 *)(param_1 + 0x62d70) = 0;
          *(undefined8 *)(param_1 + 0x62d78) = 0;
          uVar29 = 0;
          uVar61 = 0;
          *(undefined1 *)(param_1 + 0x62d32) = 0xff;
          *(undefined1 *)(param_1 + 0x62e22) = 0xff;
          *(undefined8 *)(param_1 + 0x62ddc) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62e14) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62d34) = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x62d48) = 0x42f00000;
          *(undefined4 *)(param_1 + 0x62e38) = 0x42f00000;
          uVar50 = (undefined2)*(undefined4 *)(param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x62d3c) = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x62d44) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x62d4c) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62d54) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62d5c) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62d64) = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x62d6c) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x62db3) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62dbb) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62dc3) = 0xffffffffffffffff;
          *(undefined1 *)(param_1 + 0x62dcb) = 0xff;
          *(undefined8 *)(param_1 + 0x62dd4) = 0;
          *(undefined8 *)(param_1 + 0x62dcc) = 0;
          *(undefined4 *)(param_1 + 0x62d2c) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x62e24) = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x62de4) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x62deb) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62df3) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62dfb) = 0xffffffffffffffff;
          *(undefined1 *)(param_1 + 0x62e03) = 0xff;
          *(undefined4 *)(param_1 + 0x62e1c) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x62e2c) = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x62e34) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x62e5c) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x62e68) = 0;
          *(undefined8 *)(param_1 + 0x62e60) = 0;
          *(undefined8 *)(param_1 + 0x62e04) = 0;
          *(undefined8 *)(param_1 + 0x62e0c) = 0;
          *(undefined8 *)(param_1 + 0x62e4c) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62e54) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62e3c) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x62e44) = 0xffffffffffffffff;
          uVar26 = 0xffff;
          uVar47 = 0xffff;
        }
        else {
          uVar29 = *(undefined4 *)(param_1 + 0x62d70);
          uVar61 = *(undefined4 *)(param_1 + 0x62d74);
          uVar41 = *(undefined1 *)(param_1 + 0x62d30);
          uVar26 = (undefined2)*(undefined4 *)(param_1 + 0x62d34);
          puVar6 = (undefined4 *)(param_1 + 0x54);
          if (*(int *)(param_1 + 0x62d40) != 4) {
            puVar6 = (undefined4 *)(param_1 + 0x50);
          }
          uVar47 = (undefined2)*(undefined4 *)(param_1 + 0x62d4c);
          iVar30 = (int)*(char *)(param_1 + 0x62d3c);
          uVar50 = (undefined2)*puVar6;
        }
        *(undefined2 *)puVar57 = uVar50;
        lVar33 = param_1 + 0x5ce28 + (ulong)uVar27 * 0x28;
        *(undefined1 *)(lVar33 + 2) = uVar41;
        uVar62 = *(undefined4 *)(param_1 + 0x62d44);
        *(undefined2 *)(lVar33 + 4) = uVar26;
        *(undefined2 *)(lVar33 + 6) = uVar47;
        *(undefined4 *)(lVar33 + 0x18) = uVar29;
        *(undefined4 *)(lVar33 + 0x1c) = uVar61;
        *(int *)(lVar33 + 0xc) = iVar30;
        uVar61 = *(undefined4 *)(param_1 + 0x62d7c);
        *puVar5 = uVar27 + 1;
        *(char *)(lVar33 + 3) = (char)uVar62;
        uVar62 = *(undefined4 *)(param_1 + 0x62d78);
        uVar29 = *(undefined4 *)(param_1 + 0x62d50);
        *(short *)(lVar33 + 10) = (short)*(undefined4 *)(param_1 + 0x62d54);
        *(short *)(lVar33 + 8) = (short)uVar29;
        *(undefined4 *)(lVar33 + 0x20) = uVar62;
        *(undefined4 *)(lVar33 + 0x24) = uVar61;
      }
    }
  }
LAB_029a4f88:
  uVar58 = (ulong)local_1c8 >> 0x10;
  local_1c8._0_2_ = CONCAT11(bVar20,bVar1);
  local_1c8 = (undefined8 *)(CONCAT62((int6)uVar58,(short)local_1c8) & 0xffffffffff00ffff);
  local_1c0 = lVar43;
  FUN_02997a60(param_1 + 0xf0,&local_1c8);
  iVar30 = *(int *)(param_1 + 0x2798);
  if (iVar30 != 0) {
    lVar43 = *(long *)(param_1 + 0x27a0);
    iVar42 = 0;
    do {
      lVar33 = lVar43 + (long)iVar42 * 0x228;
      lVar53 = *(long *)(lVar33 + 0x28);
      *(undefined4 *)(lVar33 + 0x3c) = *(undefined4 *)(lVar53 + 0xc);
      *(undefined4 *)(lVar33 + 0x44) = *(undefined4 *)(lVar53 + 0x18);
      lVar59 = *(long *)(lVar33 + 0x128);
      *(undefined1 *)(lVar33 + 0x38) = *(undefined1 *)(lVar53 + 8);
      *(undefined4 *)(lVar33 + 0x13c) = *(undefined4 *)(lVar59 + 0xc);
      *(undefined4 *)(lVar33 + 0x144) = *(undefined4 *)(lVar59 + 0x18);
      *(undefined1 *)(lVar33 + 0x138) = *(undefined1 *)(lVar59 + 8);
      iVar42 = iVar42 + 1;
    } while (iVar30 != iVar42);
  }
  if (*puVar5 != 0) {
    if (cVar17 == '\0') {
      if (cVar18 == '\0') goto LAB_029a5084;
      uVar26 = 0xff01;
    }
    else {
      uVar26 = 0xff00;
    }
    local_1c8 = (undefined8 *)
                ((ulong)(CONCAT22((short)((ulong)local_1c8 >> 0x30),uVar26) & 0xff00ffff) << 0x20);
    if (-1 < *(int *)(param_1 + 0x62bf0)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x62bf0),&local_1c8,puVar5
                   ,(uint)*puVar5 * 0x28 + 8,0);
    }
    *puVar5 = 0;
  }
LAB_029a5084:
  *(undefined8 *)(param_1 + 0x88) = 0xfffeffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  return;
}

