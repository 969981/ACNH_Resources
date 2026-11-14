
byte FUN_01cb9480(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  void *pvVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  undefined4 *puVar28;
  long lVar29;
  undefined1 *puVar30;
  ulong uVar31;
  ushort *puVar32;
  undefined1 uVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint *puVar36;
  byte *pbVar37;
  undefined4 *puVar38;
  ushort uVar39;
  undefined8 uVar40;
  undefined8 *puVar41;
  int iVar42;
  uint *puVar43;
  ulong uVar44;
  undefined8 *puVar45;
  int *piVar46;
  char cVar47;
  uint uVar48;
  undefined8 *puVar49;
  ulong uVar50;
  int iVar51;
  undefined8 *puVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  ulong *puVar56;
  long lVar57;
  byte bVar58;
  long lVar59;
  long *plVar60;
  uint uVar61;
  long local_f90;
  uint *local_f88;
  ulong local_f80;
  undefined8 local_f58;
  undefined8 local_f50;
  long local_f48;
  undefined8 local_f38;
  undefined8 local_f30;
  uint *local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  uint local_7e0;
  uint local_7dc;
  undefined8 local_7d8;
  char *local_7d0;
  uint *local_7c8;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  plVar27 = (long *)PTR_DAT_04bb3350;
  lVar53 = *(long *)(*(long *)PTR_DAT_04bb47c8 + 8);
  if (lVar53 == 0) {
    lVar59 = 1;
  }
  else {
    lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar59 = *(long *)(lVar21 + 0xa8);
    *(long *)(lVar21 + 0xa8) = lVar53;
  }
  puVar1 = PTR_DAT_04bb39b0;
  pbVar37 = PTR_DAT_04bb32e0;
  puVar9 = PTR_DAT_04bb2020;
  switch(param_2) {
  case 0:
    if (((DAT_0535daa0 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_0535daa0), iVar16 != 0)) {
      FUN_01a44770(&DAT_0535d330);
      __cxa_guard_release(&DAT_0535daa0);
    }
    if ((DAT_0535daa8 & 1) == 0) {
      pvVar22 = (void *)(**(code **)(DAT_0535d330 + 0x18))(&DAT_0535d330);
      lVar53 = 0;
      while( true ) {
        *(uint *)((long)&local_7d8 + lVar53) = ~*(uint *)((long)pvVar22 + lVar53);
        if (lVar53 == 0x750) break;
        *(uint *)((long)&local_7d8 + lVar53 + 4) = ~*(uint *)((long)pvVar22 + lVar53 + 4);
        lVar53 = lVar53 + 8;
      }
      memcpy(pvVar22,&local_7d8,0x754);
      local_7d0 = (char *)&local_f58;
      local_f58 = (undefined **)CONCAT44(local_f58._4_4_,2);
      local_7d8 = &PTR_FUN_049ff588;
      uVar14 = 0;
      *(uint *)((long)pvVar22 + 0x750) = *(uint *)((long)pvVar22 + 0x750) & 0xffffff;
      puVar9 = PTR_DAT_04bb43c0;
      do {
        (**(code **)(DAT_0535d330 + 0x10))(&local_f38,&DAT_0535d330,uVar14);
        lVar53 = (**(code **)(DAT_0535d330 + 0x20))(&DAT_0535d330);
        uVar18 = 1 << (ulong)(uVar14 & 0x1f);
        if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) & uVar18) != 0) {
          lVar53 = *(long *)puVar9;
          uVar17 = FUN_0277d6c4(&local_f38);
          if (*(long *)puVar9 != 0) {
            lVar53 = *(long *)(lVar53 + 0x57e58);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
            if (((uVar17 < *(uint *)(lVar53 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
               (uVar55 = (*(code *)*local_7d8)(&local_7d8,&local_f38), (uVar55 & 1) == 0))
            goto LAB_01cba3a4;
          }
          lVar53 = (**(code **)(DAT_0535d330 + 0x18))(&DAT_0535d330);
          lVar21 = (ulong)(uVar14 >> 5) * 4;
          *(uint *)(lVar53 + lVar21) = *(uint *)(lVar53 + lVar21) & (uVar18 ^ 0xffffffff);
        }
LAB_01cba3a4:
        uVar14 = uVar14 + 1;
      } while (uVar14 != 15000);
      DAT_0535daa8 = 1;
    }
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    memcpy(&local_7d0,&DAT_0535d338,0x754);
    puVar1 = PTR_DAT_04bb5038;
    puVar9 = PTR_DAT_04bb39b0;
    pbVar37 = PTR_DAT_04bb32e0;
    local_f18 = 0;
    local_f28 = (uint *)0x0;
    uStack_f20 = 0;
    local_f38 = (undefined **)0x0;
    local_f30 = (char *)0x0;
    uVar14 = 0;
    do {
      uVar55 = FUN_01b16330(uVar14);
      if ((uVar55 & 1) != 0) {
        lVar53 = *(long *)puVar9;
        pbVar35 = pbVar37;
        if (lVar53 == 0) {
          if (7 < *pbVar37) goto LAB_01cba588;
LAB_01cba5f4:
          bVar12 = *pbVar35;
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
          local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        }
        else {
          if (*(int *)(lVar53 + 0x15c) != 0) {
            pbVar35 = (byte *)(lVar53 + 0x158);
          }
          if ((*pbVar35 < 8) ||
             (((*(int *)(lVar53 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar35 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar35 < 8))))
          goto LAB_01cba5f4;
LAB_01cba588:
          pbVar35 = puVar1;
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01cba5f4;
          lVar53 = **(long **)PTR_DAT_04bb27d0;
          bVar12 = *(byte *)(lVar53 + 0x473);
          pbVar34 = puVar1;
          if ((long)(char)bVar12 != 0xffffffffffffffff) {
            puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
            if (7 < bVar12) {
              puVar36 = (uint *)(lVar53 + 0x48);
            }
            if ((*puVar36 & 8) != 0) {
              pbVar34 = (byte *)(lVar53 + 0x471);
            }
          }
          bVar12 = *pbVar34;
          bVar11 = 7 < bVar12;
          if (bVar11) {
            bVar12 = 0xff;
          }
          local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
          if (bVar11) goto LAB_01cba5f4;
        }
        uVar15 = FUN_02582fe0(&local_f58);
        uVar55 = FUN_01b168d0(uVar14,uVar15);
        if (((uVar55 & 1) != 0) && (local_7e0 = uVar14, uVar14 < 0x13e)) {
          local_f58 = (undefined **)CONCAT44(local_f58._4_4_,uVar14);
          uVar18 = uVar14 + 7;
          if (-1 < (int)uVar14) {
            uVar18 = uVar14;
          }
          uVar18 = (int)uVar18 >> 3;
          if (uVar18 < 0x28) {
            local_f58 = (undefined **)CONCAT44(local_f58._4_4_,uVar14);
            *(byte *)((long)&local_f38 + (ulong)uVar18) =
                 *(byte *)((long)&local_f38 + (ulong)uVar18) | (byte)(1 << (ulong)(uVar14 & 7));
          }
        }
      }
      uVar55 = FUN_01b16720(uVar14);
      if (((uVar55 & 1) != 0) && (local_7e0 = uVar14, uVar14 < 0x13e)) {
        local_f58 = (undefined **)CONCAT44(local_f58._4_4_,uVar14);
        uVar18 = uVar14 + 7;
        if (-1 < (int)uVar14) {
          uVar18 = uVar14;
        }
        uVar18 = (int)uVar18 >> 3;
        if (uVar18 < 0x28) {
          local_f58 = (undefined **)CONCAT44(local_f58._4_4_,uVar14);
          *(byte *)((long)&local_f38 + (ulong)uVar18) =
               *(byte *)((long)&local_f38 + (ulong)uVar18) | (byte)(1 << (ulong)(uVar14 & 7));
        }
      }
      uVar18 = 0x13e;
      if ((int)uVar14 < 0x13e) {
        uVar18 = uVar14 + 1;
      }
      uVar14 = uVar18;
    } while (uVar18 != 0x13e);
    local_f50 = &local_f38;
    local_f58 = &PTR_FUN_049ff510;
    FUN_008a1ba0(&local_7d8,&local_f58);
    plVar27 = (long *)PTR_DAT_04bb3350;
    lVar53 = *(long *)puVar9;
    if (lVar53 == 0) {
      bVar12 = *pbVar37;
      if (7 < bVar12) goto LAB_01cba740;
LAB_01cbb684:
      local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      bVar12 = *pbVar37;
      if ((bVar12 < 8) ||
         (((*(int *)(lVar53 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (bVar12 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), bVar12 < 8)))) goto LAB_01cbb684;
LAB_01cba740:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cba7a8:
        bVar58 = *puVar1;
        bVar12 = bVar58;
        if (7 < bVar58) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (7 < bVar58) break;
      }
      else {
        lVar53 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar53 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar53 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar53 + 0x471);
          }
        }
        bVar58 = *pbVar37;
        bVar12 = bVar58;
        if (7 < bVar58) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (7 < bVar58) goto LAB_01cba7a8;
      }
    }
    uVar14 = FUN_02582d8c(&local_f58,1);
    if (((uVar14 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar14 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar14 * 0x13f0 + 0x13d6) != '\0')) {
      bVar12 = (byte)local_f58;
      if (7 < (byte)local_f58) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
      lVar53 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f38,1);
      if (lVar53 != 0) {
        lVar21 = lVar53 + 0x194b0;
        if (*(long *)(lVar53 + 0x194b8) == 0) {
          lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar21 + 0x1090) == (long *)0x0) ||
           (puVar24 = (undefined8 *)**(long **)(lVar21 + 0x1090), puVar24 == (undefined8 *)0x0)) {
          memcpy(&DAT_0535cbc8,(void *)(*(long *)(lVar21 + 0x1078) + *(long *)(lVar21 + 0x1070)),
                 0x754);
        }
        else {
          uVar55 = (**(code **)*puVar24)();
          memcpy(&DAT_0535cbc8,(void *)(*(long *)(lVar21 + 0x1078) + *(long *)(lVar21 + 0x1070)),
                 0x754);
          if ((((uVar55 & 1) != 0) && (*(long *)(lVar21 + 0x1090) != 0)) &&
             (puVar24 = *(undefined8 **)(*(long *)(lVar21 + 0x1090) + 8),
             puVar24 != (undefined8 *)0x0)) {
            (**(code **)*puVar24)();
          }
        }
        pvVar22 = (void *)(**(code **)(DAT_0535cbc0 + 0x18))();
        lVar21 = (*(code *)local_7d8[4])(&local_7d8);
        for (lVar53 = 0;
            *(uint *)((long)&local_f38 + lVar53) =
                 *(uint *)(lVar21 + lVar53) & *(uint *)((long)pvVar22 + lVar53), lVar53 != 0x750;
            lVar53 = lVar53 + 8) {
          *(uint *)((long)&local_f38 + lVar53 + 4) =
               *(uint *)(lVar21 + lVar53 + 4) & *(uint *)((long)pvVar22 + lVar53 + 4);
        }
        memcpy(pvVar22,&local_f38,0x754);
        *(uint *)((long)pvVar22 + 0x750) = *(uint *)((long)pvVar22 + 0x750) & 0xffffff;
        goto LAB_01cbb934;
      }
    }
    break;
  case 1:
    lVar53 = *(long *)PTR_DAT_04bb39b0;
    if (lVar53 == 0) {
LAB_01cba7d0:
      if (*pbVar37 < 8) goto LAB_01cba848;
LAB_01cba7dc:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cba840:
        pbVar37 = PTR_DAT_04bb5038;
        goto LAB_01cba848;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar37 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar37;
      bVar11 = 7 < bVar12;
      if (bVar11) {
        bVar12 = 0xff;
      }
      local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      if (bVar11) goto LAB_01cba840;
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      if (7 < *pbVar37) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cba7d0;
        }
        goto LAB_01cba7dc;
      }
LAB_01cba848:
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
    }
    lVar53 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f58,1);
    bVar12 = lVar53 != 0;
    if (lVar53 == 0) goto LAB_01cbf394;
    lVar21 = lVar53 + 0x194b0;
    if (*(long *)(lVar53 + 0x194b8) == 0) {
      lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long *)(lVar21 + 0x2c520) == 0) ||
       (puVar24 = *(undefined8 **)(*(long *)(lVar21 + 0x2c520) + 0x10), puVar24 == (undefined8 *)0x0
       )) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)*puVar24)();
    }
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    *param_1 = 0x220a002801;
    puVar9 = PTR_DAT_04bb32e0;
    iVar16 = 99;
    ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    do {
      local_f38 = (undefined **)0xfffe;
      FUN_0277d4ac(&local_f38);
      if ((*(long *)(lVar21 + 0x2c520) != 0) &&
         (plVar27 = *(long **)(*(long *)(lVar21 + 0x2c520) + 0x20), plVar27 != (long *)0x0)) {
        local_7d8 = *(undefined ***)(lVar21 + 0x2c500);
        local_7d0 = *(char **)(lVar21 + 0x2c508);
        local_7c8 = (uint *)0x644;
        (**(code **)(*plVar27 + 0x20))(plVar27,&local_7d8);
      }
      lVar53 = *(long *)PTR_DAT_04bb39b0;
      pbVar37 = puVar9;
      if (lVar53 == 0) {
        if (7 < (byte)*puVar9) goto LAB_01cba9e4;
LAB_01cbaa64:
        bVar58 = *pbVar37;
        if (7 < bVar58) {
          bVar58 = 0xff;
        }
        local_7d8 = (undefined **)CONCAT71(local_7d8._1_7_,bVar58);
      }
      else {
        if (*(int *)(lVar53 + 0x15c) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x158);
        }
        if ((*pbVar37 < 8) ||
           (((*(int *)(lVar53 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar37 < 8))))
        goto LAB_01cbaa64;
LAB_01cba9e4:
        pbVar37 = PTR_DAT_04bb5038;
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01cbaa64;
        lVar53 = **(long **)PTR_DAT_04bb27d0;
        bVar58 = *(byte *)(lVar53 + 0x473);
        pbVar35 = PTR_DAT_04bb5038;
        if ((long)(char)bVar58 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar58 & 0xffffffffU) * 0x20;
          if (7 < bVar58) {
            puVar36 = (uint *)(lVar53 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar35 = (byte *)(lVar53 + 0x471);
          }
        }
        bVar58 = *pbVar35;
        bVar11 = 7 < bVar58;
        if (bVar11) {
          bVar58 = 0xff;
        }
        local_7d8 = (undefined **)CONCAT71(local_7d8._1_7_,bVar58);
        if (bVar11) goto LAB_01cbaa64;
      }
      plVar27 = (long *)(*(long *)(lVar21 + 0x2c508) + *(long *)(lVar21 + 0x2c500));
      uVar18 = (iVar16 + (int)plVar27[200]) % 100;
      plVar26 = plVar27 + uVar18;
      if (99 < uVar18) {
        plVar26 = plVar27;
      }
      uVar55 = FUN_02582fe0(&local_7d8);
      uVar55 = FUN_027906a0(uVar55,plVar26,uVar55 & 0xffffffff);
      puVar1 = PTR_DAT_04bb43c0;
      if ((uVar55 & 1) != 0) {
        local_7d0 = (char *)*plVar26;
        local_f38 = (undefined **)*plVar26;
        lVar53 = *(long *)PTR_DAT_04bb43c0;
        local_7c8 = (uint *)0x0;
        local_7d8 = ppuVar2;
        uVar18 = FUN_0277d6c4(&local_7d0);
        if (*(long *)puVar1 == 0) {
LAB_01cbab94:
          if (local_7c8 != (uint *)0x0) goto LAB_01cbaba4;
        }
        else {
          lVar53 = *(long *)(lVar53 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
          if ((*(uint *)(lVar53 + 0x1d8) <= uVar18) ||
             (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) goto LAB_01cbab94;
          lVar53 = *(long *)PTR_DAT_04bc0428;
          uVar18 = FUN_0277d6c4(&local_f38);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
          if ((*(uint *)(lVar53 + 0x1d8) <= uVar18) ||
             (puVar36 = *(uint **)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar18 * 8),
             puVar36 == (uint *)0x0)) goto LAB_01cbab94;
          local_7c8 = puVar36;
LAB_01cbaba4:
          puVar36 = (uint *)((long)local_7c8 - (ulong)*local_7c8);
          if (((*local_7c8 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar18 = puVar36[1], uVar18 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar53 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar53 = 0x1c;
            }
            lVar53 = (long)puVar36 + lVar53 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar53 != 0) {
              uVar17 = 0;
              if ((ulong)uVar18 != 0) {
                uVar17 = (uint)((ulong)((long)local_7c8 - lVar53) / (ulong)uVar18);
              }
              if (*puVar36 <= uVar17) {
                uVar17 = 0xffffffff;
              }
              if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2) == 0x75))
              goto LAB_01cba924;
            }
          }
        }
        uVar13 = FUN_0277d6c4(&local_f38);
        puVar24 = (undefined8 *)((long)(param_1 + 1) + (ulong)*(uint *)((long)param_1 + 0x44) * 2);
        if (0x13 < *(uint *)((long)param_1 + 0x44)) {
          puVar24 = param_1 + 1;
        }
        *(undefined2 *)puVar24 = uVar13;
        iVar19 = FUN_01ad7260(&local_7d8);
        if (iVar19 == 0) {
          uVar33 = 0xff;
        }
        else {
          iVar19 = FUN_01ad7260(&local_7d8);
          if ((iVar19 == 0) ||
             (puVar32 = (ushort *)FUN_01afd600(&local_7d8), puVar32 == (ushort *)0x0)) {
            uVar33 = 0;
          }
          else {
            uVar18 = *puVar32 & 7;
            uVar17 = FUN_01ad7260(&local_7d8);
            if (uVar17 <= uVar18) {
              uVar18 = 0;
            }
            uVar33 = (undefined1)uVar18;
          }
        }
        puVar24 = (undefined8 *)((long)(param_1 + 6) + (ulong)*(uint *)((long)param_1 + 0x44));
        if (0x13 < *(uint *)((long)param_1 + 0x44)) {
          puVar24 = param_1 + 6;
        }
        *(undefined1 *)puVar24 = uVar33;
        uVar18 = *(int *)((long)param_1 + 0x44) + 1;
        *(uint *)((long)param_1 + 0x44) = uVar18;
        if (0x13 < uVar18) break;
      }
LAB_01cba924:
      iVar16 = iVar16 + -1;
    } while (iVar16 != -1);
    plVar27 = (long *)PTR_DAT_04bb3350;
    if ((uVar14 & 1) == 0) goto LAB_01cbf394;
    if (*(long *)(lVar21 + 0x2c520) == 0) goto LAB_01cbf394;
    puVar24 = *(undefined8 **)(*(long *)(lVar21 + 0x2c520) + 0x18);
joined_r0x01cbff5c:
    PTR_DAT_04bb3350 = (undefined *)plVar27;
    if (puVar24 != (undefined8 *)0x0) {
      (**(code **)*puVar24)();
    }
    goto LAB_01cbf394;
  case 2:
    param_1 = param_1 + 9;
    local_7d8 = &PTR_FUN_04b2a070;
    goto LAB_01cb9614;
  case 3:
    param_1 = param_1 + 0xd;
    local_7d8 = &PTR_FUN_04b2a098;
    goto LAB_01cb9614;
  case 4:
    param_1 = param_1 + 0x11;
    local_7d8 = &PTR_FUN_04b2a548;
    goto LAB_01cb9614;
  case 5:
    param_1 = param_1 + 0x15;
    local_7d8 = &PTR_FUN_04b2a1b0;
LAB_01cb9614:
    bVar12 = FUN_01cb75a0(param_1,&local_7d8);
    goto LAB_01cbf394;
  case 6:
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar22 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar22,0,0x754);
    memcpy(&local_7d0,&DAT_0535cbc8,0x754);
    puVar9 = PTR_DAT_04bb43c0;
    local_f38 = &PTR_FUN_04a47d10;
    uVar14 = 0;
    do {
      (*(code *)local_7d8[2])(&local_f58,&local_7d8,uVar14);
      lVar53 = (*(code *)local_7d8[4])(&local_7d8);
      uVar18 = 1 << (ulong)(uVar14 & 0x1f);
      if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) & uVar18) != 0) {
        lVar53 = *(long *)puVar9;
        uVar17 = FUN_0277d6c4(&local_f58);
        if (*(long *)puVar9 != 0) {
          lVar53 = *(long *)(lVar53 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
          if (((uVar17 < *(uint *)(lVar53 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
             (uVar55 = (*(code *)*local_f38)(&local_f38,&local_f58), (uVar55 & 1) != 0))
          goto LAB_01cb9720;
        }
        lVar53 = (*(code *)local_7d8[3])(&local_7d8);
        lVar21 = (ulong)(uVar14 >> 5) * 4;
        *(uint *)(lVar53 + lVar21) = *(uint *)(lVar53 + lVar21) & (uVar18 ^ 0xffffffff);
      }
LAB_01cb9720:
      uVar14 = uVar14 + 1;
    } while (uVar14 != 15000);
    lVar53 = *(long *)PTR_DAT_04bb39b0;
    pbVar37 = PTR_DAT_04bb32e0;
    if (lVar53 == 0) {
LAB_01cbb0c8:
      if (*pbVar37 < 8) goto LAB_01cbb134;
LAB_01cbb0d4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbb12c:
        pbVar37 = PTR_DAT_04bb5038;
        goto LAB_01cbb134;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar37 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar37;
      if (7 < bVar12) goto LAB_01cbb12c;
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      if (7 < *pbVar37) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cbb0c8;
        }
        goto LAB_01cbb0d4;
      }
LAB_01cbb134:
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
    lVar53 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f38,1);
    if (lVar53 != 0) {
      local_f90 = lVar53 + 0x194b0;
      if (*(long *)(lVar53 + 0x194b8) == 0) {
        local_f90 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(local_f90 + 0x1100) == (long *)0x0) ||
         (puVar24 = (undefined8 *)**(long **)(local_f90 + 0x1100), puVar24 == (undefined8 *)0x0)) {
        local_f80 = 0;
      }
      else {
        local_f80 = (**(code **)*puVar24)();
        local_f80 = local_f80 & 0xffffffff;
      }
      lVar53 = *(long *)PTR_DAT_04bb46b0;
      if (lVar53 != 0) {
        lVar54 = *(long *)(local_f90 + 0x10e0);
        lVar21 = *(long *)(local_f90 + 0x10e8);
        puVar24 = *(undefined8 **)(lVar53 + 0x10);
        if ((*(byte *)(lVar53 + 0x453) & 1) == 0) {
          lVar53 = (**(code **)(*(long *)*puVar24 + 0x38))();
          if (lVar53 != 0) {
            lVar53 = lVar53 + 0x70;
            goto LAB_01cbc150;
          }
        }
        else if (((puVar24 != (undefined8 *)0x0) && ((long *)puVar24[0x26] != (long *)0x0)) &&
                (lVar53 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar53 != 0)) {
LAB_01cbc150:
          lVar21 = lVar21 + lVar54;
          if ((*(long **)(lVar53 + 0x1c2520) == (long *)0x0) ||
             (puVar24 = (undefined8 *)**(long **)(lVar53 + 0x1c2520), puVar24 == (undefined8 *)0x0))
          {
            uVar33 = *(undefined1 *)
                      (*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
            plVar27 = (long *)PTR_DAT_04bb3350;
          }
          else {
            uVar55 = (**(code **)*puVar24)();
            plVar27 = (long *)PTR_DAT_04bb3350;
            uVar33 = *(undefined1 *)
                      (*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
            if ((uVar55 & 1) != 0) {
              if (*(long *)(lVar53 + 0x1c2520) != 0) {
                puVar24 = *(undefined8 **)(*(long *)(lVar53 + 0x1c2520) + 8);
                if (puVar24 != (undefined8 *)0x0) {
                  (**(code **)*puVar24)();
                }
              }
            }
          }
          lVar54 = (*(code *)local_7d8[4])(&local_7d8);
          lVar53 = 0;
          uVar55 = 0;
          do {
            puVar36 = (uint *)(lVar54 + lVar53);
            lVar53 = lVar53 + 4;
            uVar14 = *puVar36 - (*puVar36 >> 1 & 0x55555555);
            uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
            uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
            uVar14 = uVar14 + (uVar14 >> 8);
            uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + (int)uVar55;
            uVar55 = (ulong)uVar14;
          } while (lVar53 != 0x754);
          if (uVar14 == 0) goto LAB_01cbd23c;
          lVar53 = *(long *)PTR_DAT_04bb2698;
          if (lVar53 == 0) {
            pvVar22 = malloc(uVar55 << 1);
          }
          else {
            lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
            plVar26 = (long *)(lVar53 + 8);
            if (lVar54 != 0) {
              plVar26 = (long *)(lVar54 + 0xa8);
            }
            plVar26 = (long *)*plVar26;
            if (plVar26 == (long *)0x0) goto LAB_01cbd778;
            pvVar22 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar55 << 1,8);
          }
          if (pvVar22 == (void *)0x0) {
LAB_01cbd778:
            bVar12 = false;
          }
          else {
            *(uint *)(param_1 + 0x19) = uVar14;
            puVar1 = PTR_DAT_04bb2698;
            param_1[0x1a] = pvVar22;
            lVar53 = *(long *)puVar1;
            if (lVar53 == 0) {
              puVar28 = malloc(uVar55 << 4);
            }
            else {
              lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
              plVar27 = (long *)(lVar53 + 8);
              if (lVar54 != 0) {
                plVar27 = (long *)(lVar54 + 0xa8);
              }
              plVar27 = (long *)*plVar27;
              if (plVar27 == (long *)0x0) goto LAB_01cbd778;
              puVar28 = (undefined4 *)(**(code **)(*plVar27 + 0x30))(plVar27,uVar55 << 4,8);
            }
            if (puVar28 == (undefined4 *)0x0) goto LAB_01cbf368;
            uVar44 = uVar55 & 3;
            puVar38 = puVar28;
            if ((uVar14 & 3) != 0) {
              do {
                *puVar38 = 0;
                uVar44 = uVar44 - 1;
                *(undefined8 *)(puVar38 + 2) = 0;
                puVar38 = puVar38 + 4;
              } while (uVar44 != 0);
            }
            if (2 < (uVar55 - 1 & 0xfffffffffffffff)) {
              do {
                *puVar38 = 0;
                *(undefined8 *)(puVar38 + 2) = 0;
                puVar38[4] = 0;
                *(undefined8 *)(puVar38 + 6) = 0;
                puVar38[8] = 0;
                *(undefined8 *)(puVar38 + 10) = 0;
                puVar38[0xc] = 0;
                *(undefined8 *)(puVar38 + 0xe) = 0;
                puVar38 = puVar38 + 0x10;
              } while (puVar38 != puVar28 + uVar55 * 4);
            }
            *(uint *)(param_1 + 0x1b) = uVar14;
            param_1[0x1c] = puVar28;
            lVar53 = (*(code *)local_7d8[4])(&local_7d8);
            uVar55 = 0;
            do {
              if ((*(uint *)(lVar53 + (uVar55 >> 5) * 4) >> (ulong)((uint)uVar55 & 0x1f) & 1) != 0)
              goto LAB_01cbe050;
              uVar14 = (uint)uVar55 + 1;
              uVar55 = (ulong)uVar14;
            } while (uVar14 != 15000);
            uVar55 = 0;
LAB_01cbe050:
            lVar54 = (*(code *)local_7d8[4])(&local_7d8);
            iVar16 = 15000;
            do {
              if ((*(uint *)(lVar54 + (ulong)(iVar16 - 1U >> 5) * 4) >> (ulong)(iVar16 - 1U & 0x1f)
                  & 1) != 0) break;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            bVar12 = true;
            if (iVar16 != (int)uVar55) {
              uVar14 = 0;
              ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
LAB_01cbe0d8:
              puVar36 = (uint *)(PTR_DAT_04bbfe58 + uVar55 * 8);
              if (0x752 < (uint)(uVar55 >> 3)) {
                puVar36 = (uint *)PTR_DAT_04bbfe58;
              }
              puVar43 = (uint *)PTR_DAT_04bb37e0;
              if ((uint)uVar55 < 0x3a99) {
                puVar43 = puVar36;
              }
              local_7e0 = *puVar43;
              local_7dc = puVar43[1];
              uVar13 = FUN_0277d6c4(&local_7e0);
              uVar18 = uVar14;
              if (*(uint *)(param_1 + 0x19) <= uVar14) {
                uVar18 = 0;
              }
              *(undefined2 *)(param_1[0x1a] + (ulong)uVar18 * 2) = uVar13;
              local_f28 = (uint *)0x0;
              lVar54 = *(long *)puVar9;
              local_f30 = (char *)CONCAT44(local_7dc,local_7e0);
              local_f38 = ppuVar2;
              uVar18 = FUN_0277d6c4(&local_f30);
              if (*(long *)puVar9 == 0) {
LAB_01cbe1d0:
                local_f88 = (uint *)0x0;
              }
              else {
                lVar54 = *(long *)(lVar54 + 0x57e58);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                if ((*(uint *)(lVar54 + 0x1d8) <= uVar18) ||
                   (*(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                goto LAB_01cbe1d0;
                lVar54 = *(long *)PTR_DAT_04bc0428;
                uVar18 = FUN_0277d6c4(&local_7e0);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                if ((*(uint *)(lVar54 + 0x1d8) <= uVar18) ||
                   (local_f88 = *(uint **)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8),
                   local_f88 == (uint *)0x0)) goto LAB_01cbe1d0;
                local_f28 = local_f88;
              }
              iVar19 = FUN_01ad7260(&local_f38);
              if (iVar19 != 0) {
                if ((local_f88 == (uint *)0x0) || (uVar18 = *local_f88, uVar18 == 0)) {
LAB_01cbe2ec:
                  uVar17 = 0;
                  uVar61 = 0;
                }
                else {
                  cVar47 = *PTR_DAT_04bbfe88;
                  do {
                    if (cVar47 != '\0') {
                      uVar17 = *(uint *)(PTR_DAT_04bbfe90 + 0x120);
                      if ((int)uVar17 < 0) {
                        if (uVar17 == 0xffffffff) goto LAB_01cbe254;
                        goto LAB_01cbe2ec;
                      }
                      if ((short *)((ulong)uVar17 + (long)local_f88) == (short *)0x0) {
LAB_01cbe338:
                        uVar61 = 0;
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = (uint)*(short *)((ulong)uVar17 + (long)local_f88);
                        uVar18 = uVar17 << 3;
                        uVar20 = (uVar17 & 0x1fffffff) >> 2;
                        if ((uVar17 >> 4 & 0x1ffffff) < 0x7d) {
                          uVar61 = *(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x18) &
                                   1;
                        }
                        else {
                          uVar61 = 0;
                        }
                        uVar48 = (uVar17 & 0x1fffffff) >> 4;
                        if ((uVar48 < 0x7d) &&
                           ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x19 | 1) & 1
                            ) != 0)) {
                          uVar17 = uVar61 + 1;
                          uVar61 = uVar61 | 2;
                        }
                        else {
                          uVar17 = uVar61;
                        }
                        if ((uVar48 < 0x7d) &&
                           ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1a | 2) & 1
                            ) != 0)) {
                          uVar17 = uVar17 + 1;
                          uVar61 = uVar61 | 4;
                        }
                        if ((uVar48 < 0x7d) &&
                           ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1b | 3) & 1
                            ) != 0)) {
                          uVar17 = uVar17 + 1;
                          uVar61 = uVar61 | 8;
                        }
                        if ((uVar48 < 0x7d) &&
                           ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1c | 4) & 1
                            ) != 0)) {
                          uVar17 = uVar17 + 1;
                          uVar61 = uVar61 | 0x10;
                        }
                        if ((uVar48 < 0x7d) &&
                           ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1d | 5) & 1
                            ) != 0)) {
                          uVar17 = uVar17 + 1;
                          uVar61 = uVar61 | 0x20;
                        }
                        if ((uVar48 < 0x7d) &&
                           ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1e | 6) & 1
                            ) != 0)) {
                          uVar17 = uVar17 + 1;
                          uVar61 = uVar61 | 0x40;
                        }
                        if ((uVar48 < 0x7d) &&
                           ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1f | 7) & 1
                            ) != 0)) {
                          uVar17 = uVar17 + 1;
                          uVar61 = uVar61 | 0x80;
                          goto LAB_01cbe350;
                        }
                      }
                      break;
                    }
                    cVar47 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    uVar18 = *local_f88;
LAB_01cbe254:
                    puVar36 = (uint *)(ulong)uVar18;
                    uVar17 = 0;
                    if (puVar36 == (uint *)0x0) {
                      uVar61 = 0;
                      break;
                    }
                    uVar61 = 0;
                    if (local_f88 == puVar36) break;
                    lVar54 = 0xc;
                    if (*(char *)((long)local_f88 + (10 - (long)puVar36)) != '\0') {
                      lVar54 = 0x1c;
                    }
                    lVar54 = (long)local_f88 + (lVar54 - (long)puVar36);
                    if (lVar54 == 0) {
                      uVar61 = 0;
                      uVar17 = 0;
                      break;
                    }
                    uVar44 = (ulong)*(ushort *)((long)local_f88 + (8 - (long)puVar36));
                    *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
                    if (uVar44 == 0) goto LAB_01cbe338;
                    piVar46 = (int *)(lVar54 + 4);
                    while (piVar46[-1] != -0x34a14cc1) {
                      piVar46 = piVar46 + 2;
                      uVar44 = uVar44 - 1;
                      if (uVar44 == 0) goto LAB_01cbe338;
                    }
                    uVar17 = 0;
                    uVar61 = 0;
                    iVar19 = 0;
                    if (*piVar46 != -1) {
                      iVar19 = *piVar46;
                    }
                    *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar19;
                    uVar18 = *local_f88;
                  } while (uVar18 != 0);
                }
                uVar61 = uVar61 | uVar17 == 0;
                if (uVar17 < 2) {
                  uVar17 = 1;
                }
LAB_01cbe350:
                uVar18 = *(uint *)(param_1 + 0x1b);
                lVar54 = param_1[0x1c];
                lVar25 = *(long *)PTR_DAT_04bb2698;
                if (lVar25 == 0) {
                  puVar30 = malloc((ulong)uVar17);
                }
                else {
                  lVar57 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar27 = (long *)(lVar25 + 8);
                  if (lVar57 != 0) {
                    plVar27 = (long *)(lVar57 + 0xa8);
                  }
                  plVar27 = (long *)*plVar27;
                  if (plVar27 == (long *)0x0) goto LAB_01cbfbf8;
                  puVar30 = (undefined1 *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar17,8);
                }
                if (puVar30 == (undefined1 *)0x0) goto LAB_01cbfbf8;
                uVar20 = uVar14;
                if (uVar18 <= uVar14) {
                  uVar20 = 0;
                }
                puVar36 = (uint *)(lVar54 + (ulong)uVar20 * 0x10);
                *puVar36 = uVar17;
                *(undefined1 **)(puVar36 + 2) = puVar30;
                iVar19 = FUN_01ad7260(&local_f38);
                if (((iVar19 == 0) || (uVar44 = FUN_01ae6580(&local_f38), (uVar44 & 1) == 0)) ||
                   (iVar19 = FUN_01afe130(&local_f38), iVar19 == 1)) {
                  bVar12 = 0;
                }
                else {
                  bVar12 = 1;
                }
                if (local_f88 == (uint *)0x0) goto LAB_01cbe508;
                uVar18 = *local_f88;
                uVar39 = 0;
                if ((uVar18 == 0) || (local_f88 == (uint *)(ulong)uVar18)) {
LAB_01cbe50c:
                  bVar11 = (bool)(bVar12 ^ 1);
                  if (uVar39 == 0x121) {
                    bVar11 = true;
                  }
                  if (bVar11) goto LAB_01cbe60c;
                  local_f58 = (undefined **)CONCAT71(local_f58._1_7_,uVar33);
                  FUN_01af193c(&local_7e0,&local_f58,PTR_LAB_04bc0418);
                  local_f48 = 0;
                  local_f50 = (undefined8 *)CONCAT44(local_7dc,local_7e0);
                  lVar54 = *(long *)puVar9;
                  local_f58 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                  uVar18 = FUN_0277d6c4(&local_f50);
                  if (*(long *)puVar9 != 0) {
                    lVar54 = *(long *)(lVar54 + 0x57e58);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                    if ((uVar18 < *(uint *)(lVar54 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                      lVar54 = *(long *)PTR_DAT_04bc0428;
                      uVar18 = FUN_0277d6c4(&local_7e0);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                      if (uVar18 < *(uint *)(lVar54 + 0x1d8)) {
                        lVar54 = *(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8);
                        if (lVar54 != 0) {
                          local_f48 = lVar54;
                        }
                      }
                    }
                  }
                  iVar19 = FUN_01ad7260(&local_f58);
                  if ((iVar19 == 0) ||
                     (puVar32 = (ushort *)FUN_01afd600(&local_f58), puVar32 == (ushort *)0x0)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = *puVar32 & 7;
                    uVar20 = FUN_01ad7260(&local_f58);
                    if (uVar20 <= uVar18) {
                      uVar18 = 0;
                    }
                  }
                  if ((1 << (ulong)uVar18 & uVar61) == 0) {
                    iVar19 = 0;
                  }
                  else {
                    uVar17 = uVar17 - 1;
                    *puVar30 = (char)uVar18;
                    if (uVar17 == 0) goto LAB_01cbe728;
                    uVar61 = uVar61 & (1 << (ulong)uVar18 ^ 0xffffffffU);
                    iVar19 = 1;
                  }
                }
                else {
                  puVar36 = (uint *)((long)local_f88 - (long)(ulong)uVar18);
                  uVar18 = *puVar36;
                  uVar39 = 0;
                  if (uVar18 == 0) goto LAB_01cbe50c;
                  uVar44 = (ulong)puVar36[1];
                  if ((puVar36[1] == 0) || (uVar31 = (ulong)(ushort)puVar36[2], uVar31 == 0))
                  goto LAB_01cbe508;
                  lVar54 = 0xc;
                  if (*(char *)((long)puVar36 + 10) != '\0') {
                    lVar54 = 0x1c;
                  }
                  lVar54 = (long)puVar36 + lVar54 + uVar31 * 8;
                  if (lVar54 == 0) {
LAB_01cbe4ac:
                    lVar54 = 0xc;
                    if (*(char *)((long)puVar36 + 10) != '\0') {
                      lVar54 = 0x1c;
                    }
                    lVar54 = (long)puVar36 + lVar54 + uVar31 * 8;
                    if (lVar54 != 0) {
                      uVar20 = 0;
                      if (uVar44 != 0) {
                        uVar20 = (uint)((ulong)((long)local_f88 - lVar54) / uVar44);
                      }
                      if (uVar18 <= uVar20) {
                        uVar20 = 0xffffffff;
                      }
                      if ((uVar20 < *(uint *)PTR_DAT_04bc0068) &&
                         (uVar39 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2),
                         uVar39 < 0x13e)) goto LAB_01cbe50c;
                    }
LAB_01cbe508:
                    uVar39 = 0;
                    goto LAB_01cbe50c;
                  }
                  uVar20 = 0;
                  if (uVar44 != 0) {
                    uVar20 = (uint)((ulong)((long)local_f88 - lVar54) / uVar44);
                  }
                  if (uVar18 <= uVar20) {
                    uVar20 = 0xffffffff;
                  }
                  if ((*(uint *)PTR_DAT_04bc0068 <= uVar20) ||
                     (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2) != 0x120))
                  goto LAB_01cbe4ac;
LAB_01cbe60c:
                  iVar19 = 0;
                }
                uVar18 = 1;
                uVar20 = uVar61 - (uVar61 >> 1 & 0x55555555);
                uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
                iVar42 = 2;
                uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
                uVar20 = uVar20 + (uVar20 >> 8);
                do {
                  if (uVar61 == 0) {
LAB_01cbe694:
                    cVar47 = -1;
                  }
                  else {
                    cVar47 = -1;
                    if (uVar18 <= (uVar20 + (uVar20 >> 0x10) & 0x3f)) {
                      iVar51 = iVar42;
                      uVar48 = uVar61;
                      do {
                        iVar51 = iVar51 + -1;
                        if (iVar51 < 2) {
                          uVar48 = uVar48 - 1 & (uVar48 ^ 0xffffffff);
                          uVar48 = uVar48 - (uVar48 >> 1 & 0x55555555);
                          uVar48 = (uVar48 >> 2 & 0x33333333) + (uVar48 & 0x33333333);
                          uVar48 = uVar48 + (uVar48 >> 4) & 0xf0f0f0f;
                          iVar51 = uVar48 + (uVar48 >> 8);
                          cVar47 = (char)iVar51 + (char)((uint)iVar51 >> 0x10);
                          goto LAB_01cbe698;
                        }
                        uVar48 = uVar48 - 1 & uVar48;
                      } while (uVar48 != 0);
                      goto LAB_01cbe694;
                    }
                  }
LAB_01cbe698:
                  puVar30[iVar19] = cVar47;
                  bVar11 = uVar18 != uVar17;
                  uVar18 = uVar18 + 1;
                  iVar19 = iVar19 + 1;
                  iVar42 = iVar42 + 1;
                } while (bVar11);
              }
LAB_01cbe728:
              do {
                uVar18 = (int)uVar55 + 1;
                uVar55 = (ulong)uVar18;
                if (0x752 < uVar18 >> 3) {
                  uVar18 = 0x3a95;
                  goto LAB_01cbe750;
                }
              } while ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1)
                       == 0);
              goto LAB_01cbe0c8;
            }
          }
          goto LAB_01cbf36c;
        }
      }
LAB_01cbf368:
      bVar12 = false;
      goto LAB_01cbf36c;
    }
    break;
  case 7:
    param_1 = param_1 + 0x1d;
    local_7d8 = &PTR_FUN_04b2a2a0;
    goto LAB_01cb9b5c;
  case 8:
    param_1 = param_1 + 0x21;
    local_7d8 = &PTR_FUN_04b2a2f0;
    goto LAB_01cb9b5c;
  case 9:
    param_1 = param_1 + 0x25;
    local_7d8 = &PTR_FUN_04b2a2c8;
    goto LAB_01cb9b5c;
  case 10:
    param_1 = param_1 + 0x29;
    local_7d8 = &PTR_FUN_04b2a250;
    goto LAB_01cb9b5c;
  case 0xb:
    param_1 = param_1 + 0x2d;
    local_7d8 = &PTR_FUN_04b2a278;
    goto LAB_01cb9b5c;
  case 0xc:
    param_1 = param_1 + 0x31;
    local_7d8 = &PTR_FUN_04b2a318;
    goto LAB_01cb9b5c;
  case 0xd:
    param_1 = param_1 + 0x35;
    local_7d8 = &PTR_FUN_04b2a340;
    goto LAB_01cb9b5c;
  case 0xe:
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar22 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar22,0,0x754);
    memcpy(&local_7d0,&DAT_0535cbc8,0x754);
    plVar26 = (long *)PTR_DAT_04bb43c0;
    local_f38 = &PTR_FUN_04a47d38;
    uVar14 = 0;
    do {
      (*(code *)local_7d8[2])(&local_f58,&local_7d8,uVar14);
      lVar53 = (*(code *)local_7d8[4])(&local_7d8);
      uVar18 = 1 << (ulong)(uVar14 & 0x1f);
      if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) & uVar18) != 0) {
        lVar53 = *plVar26;
        uVar17 = FUN_0277d6c4(&local_f58);
        if (*plVar26 != 0) {
          lVar53 = *(long *)(lVar53 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
          if (((uVar17 < *(uint *)(lVar53 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
             (uVar55 = (*(code *)*local_f38)(&local_f38,&local_f58), (uVar55 & 1) != 0))
          goto LAB_01cb9920;
        }
        lVar53 = (*(code *)local_7d8[3])(&local_7d8);
        lVar21 = (ulong)(uVar14 >> 5) * 4;
        *(uint *)(lVar53 + lVar21) = *(uint *)(lVar53 + lVar21) & (uVar18 ^ 0xffffffff);
      }
LAB_01cb9920:
      puVar9 = PTR_DAT_04bb2698;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 15000);
    lVar53 = *(long *)PTR_DAT_04bb2698;
    if (lVar53 == 0) {
      plVar23 = malloc(0x8910);
LAB_01cbb200:
      if (plVar23 != (long *)0x0) {
        plVar27 = plVar23 + 3;
        lVar53 = 0x5b6;
        do {
          plVar27[1] = (long)plVar27;
          plVar27[2] = -0x100000000;
          lVar53 = lVar53 + -2;
          plVar27[-3] = (long)(plVar27 + -3);
          *plVar27 = (long)plVar27;
          plVar27[-2] = (long)(plVar27 + -3);
          plVar27[-1] = -0x100000000;
          plVar27 = plVar27 + 6;
        } while (lVar53 != 0);
        lVar53 = 0x5b6;
        puVar28 = (undefined4 *)((long)plVar23 + 0x2c);
        do {
          puVar28[-6] = 8;
          lVar53 = lVar53 + -2;
          *puVar28 = 8;
          puVar28 = puVar28 + 0xc;
        } while (lVar53 != 0);
        lVar53 = (*(code *)local_7d8[4])(&local_7d8);
        uVar55 = 0;
        do {
          if ((*(uint *)(lVar53 + (uVar55 >> 5) * 4) >> (ulong)((uint)uVar55 & 0x1f) & 1) != 0)
          goto LAB_01cbb290;
          uVar14 = (uint)uVar55 + 1;
          uVar55 = (ulong)uVar14;
        } while (uVar14 != 15000);
        uVar55 = 0;
LAB_01cbb290:
        lVar21 = (*(code *)local_7d8[4])(&local_7d8);
        puVar1 = PTR_DAT_04bb37e0;
        iVar16 = 15000;
        do {
          if ((*(uint *)(lVar21 + (ulong)(iVar16 - 1U >> 5) * 4) >> (ulong)(iVar16 - 1U & 0x1f) & 1)
              != 0) break;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (iVar16 != (int)uVar55) {
          ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          puVar56 = (ulong *)PTR_DAT_04bbfe58;
LAB_01cbb9d0:
          local_f28 = (uint *)0x0;
          lVar21 = *plVar26;
          puVar3 = puVar56 + uVar55;
          if (0x752 < (uint)(uVar55 >> 3)) {
            puVar3 = puVar56;
          }
          puVar4 = (ulong *)puVar1;
          if ((uint)uVar55 < 0x3a99) {
            puVar4 = puVar3;
          }
          local_f30 = (char *)*puVar4;
          local_f58 = (undefined **)*puVar4;
          local_f38 = ppuVar2;
          uVar14 = FUN_0277d6c4(&local_f30);
          if (*plVar26 == 0) {
LAB_01cbbbd4:
            local_7e0 = 0;
            local_f58 = (undefined **)((ulong)local_f58 & 0xffffffff00000000);
          }
          else {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar14) ||
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar14 * 8) == 0))
            goto LAB_01cbbbd4;
            lVar21 = *(long *)PTR_DAT_04bc0428;
            uVar14 = FUN_0277d6c4(&local_f58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar14) ||
               (puVar36 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar14 * 8),
               puVar36 == (uint *)0x0)) goto LAB_01cbbbd4;
            uVar18 = 0;
            local_7e0 = 0;
            uVar14 = *puVar36;
            if ((uVar14 != 0) && (puVar36 != (uint *)(ulong)uVar14)) {
              puVar43 = (uint *)((long)puVar36 - (long)(ulong)uVar14);
              uVar18 = 0;
              if (*puVar43 != 0) {
                uVar14 = puVar43[1];
                if ((uVar14 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar43 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar43 + lVar21 + (ulong)(ushort)puVar43[2] * 8;
                  if (lVar21 != 0) {
                    uVar18 = 0;
                    if ((ulong)uVar14 != 0) {
                      uVar18 = (uint)((ulong)((long)puVar36 - lVar21) / (ulong)uVar14);
                    }
                    if (*puVar43 <= uVar18) {
                      uVar18 = 0xffffffff;
                    }
                    if ((uVar18 < *(uint *)PTR_DAT_04bc0020) &&
                       (uVar18 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar18 * 2),
                       uVar18 < 0x5b6)) goto LAB_01cbbb34;
                  }
                }
                uVar18 = 0;
              }
            }
LAB_01cbbb34:
            local_f58 = (undefined **)CONCAT44(local_f58._4_4_,uVar18);
            local_f28 = puVar36;
            if (uVar18 != 0) {
              uVar14 = *puVar36;
              uVar18 = 0;
              if ((uVar14 != 0) && (puVar36 != (uint *)(ulong)uVar14)) {
                puVar43 = (uint *)((long)puVar36 - (long)(ulong)uVar14);
                uVar18 = 0;
                if (*puVar43 != 0) {
                  uVar14 = puVar43[1];
                  if ((uVar14 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar21 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar21 = 0x1c;
                    }
                    lVar21 = (long)puVar43 + lVar21 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar21 != 0) {
                      uVar18 = 0;
                      if ((ulong)uVar14 != 0) {
                        uVar18 = (uint)((ulong)((long)puVar36 - lVar21) / (ulong)uVar14);
                      }
                      if (*puVar43 <= uVar18) {
                        uVar18 = 0xffffffff;
                      }
                      if ((uVar18 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar18 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar18 * 2),
                         uVar18 < 0x5b6)) goto LAB_01cbbbf0;
                    }
                  }
                  uVar18 = 0;
                }
              }
LAB_01cbbbf0:
              local_7e0 = 0;
              local_f58 = (undefined **)CONCAT44(local_f58._4_4_,uVar18);
              lVar21 = *(long *)puVar9;
              if (lVar21 == 0) {
                puVar24 = malloc(0x18);
LAB_01cbbc54:
                if (puVar24 != (undefined8 *)0x0) {
                  *puVar24 = 0;
                  puVar24[1] = 0;
                  puVar24[2] = 0;
                  *(undefined2 *)puVar24 = 0xfffe;
                  FUN_0277d4ac(puVar24);
                  puVar24[1] = 0;
                  puVar24[2] = 0;
                  uVar15 = *(undefined4 *)((long)puVar4 + 4);
                  *(int *)puVar24 = (int)*puVar4;
                  *(undefined4 *)((long)puVar24 + 4) = uVar15;
                  plVar27 = plVar23 + (ulong)uVar18 * 3;
                  if (0x5b5 < uVar18) {
                    plVar27 = plVar23;
                  }
                  lVar21 = *plVar27;
                  plVar26 = (long *)((long)*(int *)((long)plVar27 + 0x14) + (long)puVar24);
                  *plVar27 = (long)plVar26;
                  *plVar26 = lVar21;
                  plVar26[1] = (long)plVar27;
                  if (lVar21 != 0) {
                    *(long **)(lVar21 + 8) = plVar26;
                  }
                  *(int *)(plVar27 + 2) = (int)plVar27[2] + 1;
                  puVar56 = (ulong *)PTR_DAT_04bbfe58;
                  plVar26 = (long *)PTR_DAT_04bb43c0;
                  goto LAB_01cbbcd4;
                }
              }
              else {
                lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar27 = (long *)(lVar21 + 8);
                if (lVar54 != 0) {
                  plVar27 = (long *)(lVar54 + 0xa8);
                }
                plVar27 = (long *)*plVar27;
                if (plVar27 != (long *)0x0) {
                  puVar24 = (undefined8 *)(**(code **)(*plVar27 + 0x30))(plVar27,0x18,8);
                  goto LAB_01cbbc54;
                }
              }
              bVar12 = 0;
              plVar27 = (long *)PTR_DAT_04bb3350;
              goto LAB_01cbde18;
            }
          }
LAB_01cbbcd4:
          do {
            uVar14 = (int)uVar55 + 1;
            uVar55 = (ulong)uVar14;
            if (0x752 < uVar14 >> 3) {
              uVar14 = 0x3a95;
              goto LAB_01cbbd00;
            }
          } while ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) == 0
                  );
          goto LAB_01cbb9c8;
        }
LAB_01cbb2d4:
        uVar55 = 0;
        lVar53 = 0;
        plVar27 = (long *)PTR_DAT_04bb3350;
        do {
          plVar26 = plVar23 + lVar53 * 3;
          lVar21 = plVar26[1];
          if ((int)plVar26[2] < 1) {
            lVar21 = 0;
          }
          if (lVar21 != 0 && lVar21 != *(int *)((long)plVar26 + 0x14)) {
            uVar55 = (ulong)((int)uVar55 + 1);
            if (1 < (int)plVar26[2]) {
              plVar60 = *(long **)(plVar26[1] + 8);
              if (plVar60 != plVar26) {
                lVar21 = -(long)*(int *)((long)plVar26 + 0x14);
                do {
                  plVar27 = (long *)*plVar60;
                  plVar7 = (long *)plVar60[1];
                  iVar16 = FUN_0342caf0((long)plVar27 + lVar21,(long)plVar60 + lVar21);
                  if (0 < iVar16) {
                    do {
                      plVar27 = (long *)*plVar27;
                      if (plVar27 == plVar26) {
                        lVar54 = *plVar60;
                        plVar27 = plVar26;
                        goto joined_r0x01cbb3e8;
                      }
                      iVar16 = FUN_0342caf0((long)plVar27 + lVar21,(long)plVar60 + lVar21);
                    } while (0 < iVar16);
                    lVar54 = *plVar60;
joined_r0x01cbb3e8:
                    if (lVar54 != 0) {
                      *(long *)(lVar54 + 8) = plVar60[1];
                    }
                    if ((long *)plVar60[1] != (long *)0x0) {
                      *(long *)plVar60[1] = *plVar60;
                    }
                    *plVar60 = 0;
                    plVar60[1] = 0;
                    puVar24 = (undefined8 *)plVar27[1];
                    plVar27[1] = (long)plVar60;
                    *plVar60 = (long)plVar27;
                    plVar60[1] = (long)puVar24;
                    if (puVar24 != (undefined8 *)0x0) {
                      *puVar24 = plVar60;
                    }
                  }
                  plVar60 = plVar7;
                } while (plVar7 != plVar26);
                plVar27 = (long *)PTR_DAT_04bb3350;
              }
            }
          }
          lVar53 = lVar53 + 1;
        } while (lVar53 != 0x5b6);
        iVar16 = (int)uVar55;
        if (iVar16 == 0) {
LAB_01cbde14:
          bVar12 = 1;
        }
        else {
          if (0 < iVar16) {
            lVar53 = *(long *)puVar9;
            if (lVar53 == 0) {
              pvVar22 = malloc(uVar55 << 1);
            }
            else {
              lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
              plVar26 = (long *)(lVar53 + 8);
              if (lVar21 != 0) {
                plVar26 = (long *)(lVar21 + 0xa8);
              }
              plVar26 = (long *)*plVar26;
              if (plVar26 == (long *)0x0) goto LAB_01cbde0c;
              pvVar22 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar55 << 1,8);
            }
            if (pvVar22 != (void *)0x0) {
              *(int *)(param_1 + 0x39) = iVar16;
              param_1[0x3a] = pvVar22;
              lVar53 = *(long *)puVar9;
              if (lVar53 == 0) {
                puVar28 = malloc(uVar55 << 4);
              }
              else {
                lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
                plVar26 = (long *)(lVar53 + 8);
                if (lVar21 != 0) {
                  plVar26 = (long *)(lVar21 + 0xa8);
                }
                plVar26 = (long *)*plVar26;
                if (plVar26 == (long *)0x0) goto LAB_01cbde0c;
                puVar28 = (undefined4 *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar55 << 4,8);
              }
              if (puVar28 != (undefined4 *)0x0) {
                uVar44 = uVar55 & 3;
                puVar38 = puVar28;
                if (uVar44 != 0) {
                  do {
                    *puVar38 = 0;
                    uVar44 = uVar44 - 1;
                    *(undefined8 *)(puVar38 + 2) = 0;
                    puVar38 = puVar38 + 4;
                  } while (uVar44 != 0);
                }
                if (2 < (uVar55 - 1 & 0xfffffffffffffff)) {
                  do {
                    *puVar38 = 0;
                    *(undefined8 *)(puVar38 + 2) = 0;
                    puVar38[4] = 0;
                    *(undefined8 *)(puVar38 + 6) = 0;
                    puVar38[8] = 0;
                    *(undefined8 *)(puVar38 + 10) = 0;
                    puVar38[0xc] = 0;
                    *(undefined8 *)(puVar38 + 0xe) = 0;
                    puVar38 = puVar38 + 0x10;
                  } while (puVar38 != puVar28 + uVar55 * 4);
                }
                uVar14 = 0;
                iVar19 = 0;
                *(int *)(param_1 + 0x3b) = iVar16;
                param_1[0x3c] = puVar28;
                do {
                  plVar26 = plVar23 + (long)iVar19 * 3;
                  lVar53 = plVar26[1];
                  lVar21 = (long)*(int *)((long)plVar26 + 0x14);
                  if ((int)plVar26[2] < 1) {
                    lVar53 = 0;
                  }
                  lVar54 = lVar53 - lVar21;
                  if (lVar53 != 0 && lVar54 != 0) {
                    uVar55 = 0;
                    iVar16 = 0;
                    do {
                      iVar16 = iVar16 + 1;
                      plVar60 = *(long **)(lVar54 + lVar21 + 8);
                      uVar55 = (ulong)((int)uVar55 + 2);
                      lVar54 = (long)plVar60 - lVar21;
                    } while (plVar60 != plVar26 && lVar54 != 0);
                    uVar18 = uVar14;
                    if (*(uint *)(param_1 + 0x39) <= uVar14) {
                      uVar18 = 0;
                    }
                    *(short *)(param_1[0x3a] + (long)(int)uVar18 * 2) = (short)iVar19;
                    uVar18 = *(uint *)(param_1 + 0x3b);
                    lVar53 = param_1[0x3c];
                    lVar21 = *(long *)puVar9;
                    if (lVar21 == 0) {
                      pvVar22 = malloc(uVar55);
                    }
                    else {
                      lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
                      plVar60 = (long *)(lVar21 + 8);
                      if (lVar54 != 0) {
                        plVar60 = (long *)(lVar54 + 0xa8);
                      }
                      plVar60 = (long *)*plVar60;
                      if (plVar60 == (long *)0x0) {
                        bVar12 = 0;
                        goto LAB_01cbde18;
                      }
                      pvVar22 = (void *)(**(code **)(*plVar60 + 0x30))(plVar60,uVar55,8);
                    }
                    if (pvVar22 == (void *)0x0) {
                      bVar12 = 0;
                      goto LAB_01cbde18;
                    }
                    uVar17 = uVar14;
                    if (uVar18 <= uVar14) {
                      uVar17 = 0;
                    }
                    piVar46 = (int *)(lVar53 + (long)(int)uVar17 * 0x10);
                    *piVar46 = iVar16;
                    *(void **)(piVar46 + 2) = pvVar22;
                    uVar18 = uVar14;
                    if (*(uint *)(param_1 + 0x3b) <= uVar14) {
                      uVar18 = 0;
                    }
                    if ((long *)plVar26[1] != plVar26) {
                      uVar55 = 0;
                      lVar21 = (long)*(int *)((long)plVar26 + 0x14);
                      lVar53 = plVar26[1] - lVar21;
                      lVar54 = *(long *)(param_1[0x3c] + (long)(int)uVar18 * 0x10 + 8);
                      do {
                        uVar13 = FUN_0277d6c4(lVar53);
                        uVar44 = uVar55 << 1;
                        uVar31 = uVar55 >> 0x1f;
                        uVar55 = (ulong)((int)uVar55 + 1);
                        *(undefined2 *)(lVar54 + (-uVar31 & 0xfffffffe00000000 | uVar44)) = uVar13;
                        lVar53 = *(long *)(lVar53 + lVar21 + 8) - lVar21;
                      } while (lVar53 != (long)plVar26 - lVar21);
                    }
                    uVar14 = uVar14 + 1;
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar19 != 0x5b6);
                goto LAB_01cbde14;
              }
            }
          }
LAB_01cbde0c:
          bVar12 = 0;
        }
LAB_01cbde18:
        lVar53 = 0;
        do {
          while ((int)plVar23[lVar53 * 3 + 2] != 0) {
            if (0 < (int)plVar23[lVar53 * 3 + 2]) {
              plVar26 = (long *)plVar23[lVar53 * 3 + 1];
              if (*plVar26 != 0) {
                *(long *)(*plVar26 + 8) = plVar26[1];
              }
              if ((long *)plVar26[1] != (long *)0x0) {
                *(long *)plVar26[1] = *plVar26;
              }
              *plVar26 = 0;
              plVar26[1] = 0;
              *(int *)(plVar23 + lVar53 * 3 + 2) = (int)plVar23[lVar53 * 3 + 2] + -1;
              if ((plVar26 != (long *)0x0) &&
                 (pvVar22 = (void *)((long)plVar26 -
                                    (long)*(int *)((long)plVar23 + lVar53 * 0x18 + 0x14)),
                 pvVar22 != (void *)0x0)) {
                if (*(long *)puVar9 == 0) {
                  free(pvVar22);
                }
                else {
                  plVar26 = (long *)FUN_038cb610(*(long *)puVar9,pvVar22);
                  if (plVar26 != (long *)0x0) {
                    (**(code **)(*plVar26 + 0x38))(plVar26,pvVar22);
                  }
                }
              }
            }
          }
          lVar53 = lVar53 + 1;
        } while (lVar53 != 0x5b6);
        if (*(long *)puVar9 != 0) {
          plVar26 = (long *)FUN_038cb610(*(long *)puVar9,plVar23);
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x38))(plVar26,plVar23);
          }
          goto LAB_01cbf394;
        }
        free(plVar23);
        goto LAB_01cbdf00;
      }
    }
    else {
      lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
      plVar23 = (long *)(lVar53 + 8);
      if (lVar21 != 0) {
        plVar23 = (long *)(lVar21 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 != (long *)0x0) {
        plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x8910,8);
        goto LAB_01cbb200;
      }
    }
    bVar12 = 0;
    goto LAB_01cbf394;
  case 0xf:
    local_f38 = &PTR_FUN_04b2a598;
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar22 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar22,0,0x754);
    memcpy(&local_7d0,&DAT_0535cbc8,0x754);
    puVar9 = PTR_DAT_04bb43c0;
    uVar14 = 0;
    do {
      (*(code *)local_7d8[2])(&local_f58,&local_7d8,uVar14);
      lVar53 = (*(code *)local_7d8[4])(&local_7d8);
      uVar18 = 1 << (ulong)(uVar14 & 0x1f);
      if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) & uVar18) != 0) {
        lVar53 = *(long *)puVar9;
        uVar17 = FUN_0277d6c4(&local_f58);
        if (*(long *)puVar9 != 0) {
          lVar53 = *(long *)(lVar53 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
          if (((uVar17 < *(uint *)(lVar53 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
             (uVar55 = (*(code *)*local_f38)(&local_f38,&local_f58), (uVar55 & 1) != 0))
          goto LAB_01cb9ab0;
        }
        lVar53 = (*(code *)local_7d8[3])(&local_7d8);
        lVar21 = (ulong)(uVar14 >> 5) * 4;
        *(uint *)(lVar53 + lVar21) = *(uint *)(lVar53 + lVar21) & (uVar18 ^ 0xffffffff);
      }
LAB_01cb9ab0:
      uVar14 = uVar14 + 1;
    } while (uVar14 != 15000);
    lVar21 = (*(code *)local_7d8[4])(&local_7d8);
    plVar26 = (long *)PTR_DAT_04bb2698;
    lVar53 = 0;
    uVar55 = 0;
    do {
      puVar36 = (uint *)(lVar21 + lVar53);
      lVar53 = lVar53 + 4;
      uVar14 = *puVar36 - (*puVar36 >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + (int)uVar55;
      uVar55 = (ulong)uVar14;
    } while (lVar53 != 0x754);
    if (uVar14 == 0) goto LAB_01cbb934;
    lVar53 = *(long *)PTR_DAT_04bb2698;
    if (lVar53 == 0) {
      pvVar22 = malloc(uVar55 << 1);
    }
    else {
      lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
      plVar23 = (long *)(lVar53 + 8);
      if (lVar21 != 0) {
        plVar23 = (long *)(lVar21 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) break;
      pvVar22 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,uVar55 << 1,8);
    }
    if (pvVar22 != (void *)0x0) {
      *(uint *)(param_1 + 0x3d) = uVar14;
      lVar53 = *plVar26;
      param_1[0x3e] = pvVar22;
      if (lVar53 == 0) {
        puVar24 = malloc(uVar55 << 4);
      }
      else {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
        plVar23 = (long *)(lVar53 + 8);
        if (lVar21 != 0) {
          plVar23 = (long *)(lVar21 + 0xa8);
        }
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) break;
        puVar24 = (undefined8 *)(**(code **)(*plVar23 + 0x30))(plVar23,uVar55 << 4,8);
      }
      if (puVar24 != (undefined8 *)0x0) {
        if (uVar14 < 2) {
          uVar44 = 0;
        }
        else {
          uVar44 = (ulong)(uVar14 - 1);
          uVar31 = uVar44 & 3;
          if (uVar44 - 1 < 3) {
            lVar21 = 0;
          }
          else {
            lVar53 = 0;
            lVar21 = 0;
            do {
              puVar41 = (undefined8 *)((long)puVar24 + lVar53);
              lVar53 = lVar53 + 0x20;
              lVar21 = lVar21 + 4;
              puVar41[3] = puVar41 + 4;
              puVar41[2] = puVar41 + 3;
              puVar41[1] = puVar41 + 2;
              *puVar41 = puVar41 + 1;
            } while ((uVar44 & 0xfffffffc) * 8 != lVar53);
          }
          if ((uVar14 - 1 & 3) != 0) {
            puVar41 = puVar24 + lVar21;
            do {
              *puVar41 = puVar41 + 1;
              uVar31 = uVar31 - 1;
              puVar41 = puVar41 + 1;
            } while (uVar31 != 0);
          }
        }
        puVar24[uVar44] = 0;
        puVar41 = puVar24 + uVar55;
        uVar18 = 0;
        if (puVar41 != (undefined8 *)0x0) {
          uVar18 = uVar14;
        }
        lVar53 = (*(code *)local_7d8[4])(&local_7d8);
        uVar55 = 0;
        do {
          if ((*(uint *)(lVar53 + (uVar55 >> 5) * 4) >> (ulong)((uint)uVar55 & 0x1f) & 1) != 0)
          goto LAB_01cbd97c;
          uVar14 = (uint)uVar55 + 1;
          uVar55 = (ulong)uVar14;
        } while (uVar14 != 15000);
        uVar55 = 0;
LAB_01cbd97c:
        lVar21 = (*(code *)local_7d8[4])(&local_7d8);
        puVar1 = PTR_DAT_04bbfe58;
        puVar9 = PTR_DAT_04bb37e0;
        iVar16 = 15000;
        do {
          if ((*(uint *)(lVar21 + (ulong)(iVar16 - 1U >> 5) * 4) >> (ulong)(iVar16 - 1U & 0x1f) & 1)
              != 0) break;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (iVar16 != (int)uVar55) {
          uVar14 = 0;
          puVar45 = puVar24;
LAB_01cbd9f4:
          puVar5 = (undefined2 *)(puVar1 + uVar55 * 8);
          if (0x752 < (uint)(uVar55 >> 3)) {
            puVar5 = (undefined2 *)puVar1;
          }
          puVar6 = (undefined2 *)puVar9;
          if ((uint)uVar55 < 0x3a99) {
            puVar6 = puVar5;
          }
          puVar52 = puVar45;
          if ((int)uVar14 < (int)uVar18) {
            if (puVar45 == (undefined8 *)0x0) {
              puVar52 = (undefined8 *)0x0;
            }
            else {
              puVar52 = (undefined8 *)*puVar45;
            }
            uVar33 = *(undefined1 *)(puVar6 + 1);
            uVar8 = *(undefined1 *)((long)puVar6 + 3);
            uVar15 = *(undefined4 *)(puVar6 + 2);
            *(undefined2 *)puVar45 = *puVar6;
            *(undefined1 *)((long)puVar45 + 2) = uVar33;
            *(undefined1 *)((long)puVar45 + 3) = uVar8;
            *(undefined4 *)((long)puVar45 + 4) = uVar15;
            puVar41[(int)uVar14] = puVar45;
            uVar14 = uVar14 + 1;
          }
          do {
            uVar17 = (int)uVar55 + 1;
            uVar55 = (ulong)uVar17;
            if (0x752 < uVar17 >> 3) {
              uVar17 = 0x3a95;
              goto LAB_01cbda80;
            }
          } while ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) == 0
                  );
          goto LAB_01cbd9ec;
        }
        goto joined_r0x01cbdc0c;
      }
    }
    break;
  case 0x10:
    param_1 = param_1 + 0x3f;
    local_7d8 = &PTR_FUN_04b2a5c0;
LAB_01cb9b5c:
    bVar12 = FUN_01cb84b0(param_1,&local_7d8);
    goto LAB_01cbf394;
  case 0x11:
    param_1 = param_1 + 0x43;
    local_7d8 = &PTR_FUN_04b2a138;
    goto LAB_01cb9bbc;
  case 0x12:
    param_1 = param_1 + 0x45;
    local_7d8 = &PTR_FUN_04b2a110;
    goto LAB_01cb9bbc;
  case 0x13:
    param_1 = param_1 + 0x47;
    local_7d8 = &PTR_FUN_04b2a0e8;
    goto LAB_01cb9bbc;
  case 0x14:
    param_1 = param_1 + 0x49;
    local_7d8 = &PTR_FUN_04b2a638;
    goto LAB_01cb9bbc;
  case 0x15:
    param_1 = param_1 + 0x4b;
    local_7d8 = &PTR_FUN_04b2a610;
LAB_01cb9bbc:
    bVar12 = FUN_01cb9070(param_1,&local_7d8);
    goto LAB_01cbf394;
  case 0x16:
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar22 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar22,0,0x754);
    memcpy(&local_7d0,&DAT_0535cbc8,0x754);
    puVar9 = PTR_DAT_04bb43c0;
    local_f38 = &PTR_FUN_04a47d60;
    uVar14 = 0;
    do {
      (*(code *)local_7d8[2])(&local_f58,&local_7d8,uVar14);
      lVar53 = (*(code *)local_7d8[4])(&local_7d8);
      uVar18 = 1 << (ulong)(uVar14 & 0x1f);
      if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) & uVar18) != 0) {
        lVar53 = *(long *)puVar9;
        uVar17 = FUN_0277d6c4(&local_f58);
        if (*(long *)puVar9 != 0) {
          lVar53 = *(long *)(lVar53 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
          if (((uVar17 < *(uint *)(lVar53 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
             (uVar55 = (*(code *)*local_f38)(&local_f38,&local_f58), (uVar55 & 1) != 0))
          goto LAB_01cb9cc0;
        }
        lVar53 = (*(code *)local_7d8[3])(&local_7d8);
        lVar21 = (ulong)(uVar14 >> 5) * 4;
        *(uint *)(lVar53 + lVar21) = *(uint *)(lVar53 + lVar21) & (uVar18 ^ 0xffffffff);
      }
LAB_01cb9cc0:
      uVar14 = uVar14 + 1;
    } while (uVar14 != 15000);
    lVar53 = *(long *)PTR_DAT_04bb39b0;
    pbVar37 = PTR_DAT_04bb32e0;
    if (lVar53 == 0) {
LAB_01cbb408:
      if (*pbVar37 < 8) goto LAB_01cbb474;
LAB_01cbb414:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbb46c:
        pbVar37 = PTR_DAT_04bb5038;
        goto LAB_01cbb474;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar37 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar37;
      if (7 < bVar12) goto LAB_01cbb46c;
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      if (7 < *pbVar37) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cbb408;
        }
        goto LAB_01cbb414;
      }
LAB_01cbb474:
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
    lVar53 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f38,1);
    if (lVar53 != 0) {
      local_f90 = lVar53 + 0x194b0;
      if (*(long *)(lVar53 + 0x194b8) == 0) {
        local_f90 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(local_f90 + 0x1100) == (long *)0x0) ||
         (puVar24 = (undefined8 *)**(long **)(local_f90 + 0x1100), puVar24 == (undefined8 *)0x0)) {
        local_f80 = 0;
      }
      else {
        local_f80 = (**(code **)*puVar24)();
        local_f80 = local_f80 & 0xffffffff;
      }
      lVar53 = *(long *)PTR_DAT_04bb46b0;
      if (lVar53 == 0) goto LAB_01cbf368;
      lVar54 = *(long *)(local_f90 + 0x10e0);
      lVar21 = *(long *)(local_f90 + 0x10e8);
      puVar24 = *(undefined8 **)(lVar53 + 0x10);
      if ((*(byte *)(lVar53 + 0x453) & 1) != 0) {
        if (((puVar24 != (undefined8 *)0x0) && ((long *)puVar24[0x26] != (long *)0x0)) &&
           (lVar53 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar53 != 0))
        goto LAB_01cbc1d0;
        goto LAB_01cbf368;
      }
      lVar53 = (**(code **)(*(long *)*puVar24 + 0x38))();
      if (lVar53 == 0) goto LAB_01cbf368;
      lVar53 = lVar53 + 0x70;
LAB_01cbc1d0:
      lVar21 = lVar21 + lVar54;
      if ((*(long **)(lVar53 + 0x1c2520) == (long *)0x0) ||
         (puVar24 = (undefined8 *)**(long **)(lVar53 + 0x1c2520), puVar24 == (undefined8 *)0x0)) {
        uVar33 = *(undefined1 *)(*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
        plVar27 = (long *)PTR_DAT_04bb3350;
      }
      else {
        uVar55 = (**(code **)*puVar24)();
        plVar27 = (long *)PTR_DAT_04bb3350;
        uVar33 = *(undefined1 *)(*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
        if ((uVar55 & 1) != 0) {
          if (*(long *)(lVar53 + 0x1c2520) != 0) {
            puVar24 = *(undefined8 **)(*(long *)(lVar53 + 0x1c2520) + 8);
            if (puVar24 != (undefined8 *)0x0) {
              (**(code **)*puVar24)();
            }
          }
        }
      }
      lVar54 = (*(code *)local_7d8[4])(&local_7d8);
      lVar53 = 0;
      uVar55 = 0;
      do {
        puVar36 = (uint *)(lVar54 + lVar53);
        lVar53 = lVar53 + 4;
        uVar14 = *puVar36 - (*puVar36 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + (int)uVar55;
        uVar55 = (ulong)uVar14;
      } while (lVar53 != 0x754);
      if (uVar14 == 0) goto LAB_01cbd23c;
      lVar53 = *(long *)PTR_DAT_04bb2698;
      if (lVar53 == 0) {
        pvVar22 = malloc(uVar55 << 1);
      }
      else {
        lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
        plVar26 = (long *)(lVar53 + 8);
        if (lVar54 != 0) {
          plVar26 = (long *)(lVar54 + 0xa8);
        }
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) goto LAB_01cbd778;
        pvVar22 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar55 << 1,8);
      }
      if (pvVar22 != (void *)0x0) {
        *(uint *)(param_1 + 0x4d) = uVar14;
        puVar1 = PTR_DAT_04bb2698;
        param_1[0x4e] = pvVar22;
        lVar53 = *(long *)puVar1;
        if (lVar53 == 0) {
          puVar28 = malloc(uVar55 << 4);
        }
        else {
          lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar27 = (long *)(lVar53 + 8);
          if (lVar54 != 0) {
            plVar27 = (long *)(lVar54 + 0xa8);
          }
          plVar27 = (long *)*plVar27;
          if (plVar27 == (long *)0x0) goto LAB_01cbd778;
          puVar28 = (undefined4 *)(**(code **)(*plVar27 + 0x30))(plVar27,uVar55 << 4,8);
        }
        if (puVar28 != (undefined4 *)0x0) {
          uVar44 = uVar55 & 3;
          puVar38 = puVar28;
          if ((uVar14 & 3) != 0) {
            do {
              *puVar38 = 0;
              uVar44 = uVar44 - 1;
              *(undefined8 *)(puVar38 + 2) = 0;
              puVar38 = puVar38 + 4;
            } while (uVar44 != 0);
          }
          if (2 < (uVar55 - 1 & 0xfffffffffffffff)) {
            do {
              *puVar38 = 0;
              *(undefined8 *)(puVar38 + 2) = 0;
              puVar38[4] = 0;
              *(undefined8 *)(puVar38 + 6) = 0;
              puVar38[8] = 0;
              *(undefined8 *)(puVar38 + 10) = 0;
              puVar38[0xc] = 0;
              *(undefined8 *)(puVar38 + 0xe) = 0;
              puVar38 = puVar38 + 0x10;
            } while (puVar38 != puVar28 + uVar55 * 4);
          }
          *(uint *)(param_1 + 0x4f) = uVar14;
          param_1[0x50] = puVar28;
          lVar53 = (*(code *)local_7d8[4])(&local_7d8);
          uVar55 = 0;
          do {
            if ((*(uint *)(lVar53 + (uVar55 >> 5) * 4) >> (ulong)((uint)uVar55 & 0x1f) & 1) != 0)
            goto LAB_01cbe9a8;
            uVar14 = (uint)uVar55 + 1;
            uVar55 = (ulong)uVar14;
          } while (uVar14 != 15000);
          uVar55 = 0;
LAB_01cbe9a8:
          lVar54 = (*(code *)local_7d8[4])(&local_7d8);
          iVar16 = 15000;
          do {
            if ((*(uint *)(lVar54 + (ulong)(iVar16 - 1U >> 5) * 4) >> (ulong)(iVar16 - 1U & 0x1f) &
                1) != 0) break;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          bVar12 = true;
          if (iVar16 != (int)uVar55) {
            uVar14 = 0;
            ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
LAB_01cbea30:
            puVar36 = (uint *)(PTR_DAT_04bbfe58 + uVar55 * 8);
            if (0x752 < (uint)(uVar55 >> 3)) {
              puVar36 = (uint *)PTR_DAT_04bbfe58;
            }
            puVar43 = (uint *)PTR_DAT_04bb37e0;
            if ((uint)uVar55 < 0x3a99) {
              puVar43 = puVar36;
            }
            local_7e0 = *puVar43;
            local_7dc = puVar43[1];
            uVar13 = FUN_0277d6c4(&local_7e0);
            uVar18 = uVar14;
            if (*(uint *)(param_1 + 0x4d) <= uVar14) {
              uVar18 = 0;
            }
            *(undefined2 *)(param_1[0x4e] + (ulong)uVar18 * 2) = uVar13;
            local_f28 = (uint *)0x0;
            lVar54 = *(long *)puVar9;
            local_f30 = (char *)CONCAT44(local_7dc,local_7e0);
            local_f38 = ppuVar2;
            uVar18 = FUN_0277d6c4(&local_f30);
            if (*(long *)puVar9 == 0) {
LAB_01cbeb28:
              local_f88 = (uint *)0x0;
            }
            else {
              lVar54 = *(long *)(lVar54 + 0x57e58);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
              if ((*(uint *)(lVar54 + 0x1d8) <= uVar18) ||
                 (*(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
              goto LAB_01cbeb28;
              lVar54 = *(long *)PTR_DAT_04bc0428;
              uVar18 = FUN_0277d6c4(&local_7e0);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
              if ((*(uint *)(lVar54 + 0x1d8) <= uVar18) ||
                 (local_f88 = *(uint **)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8),
                 local_f88 == (uint *)0x0)) goto LAB_01cbeb28;
              local_f28 = local_f88;
            }
            iVar19 = FUN_01ad7260(&local_f38);
            if (iVar19 != 0) {
              if ((local_f88 == (uint *)0x0) || (uVar18 = *local_f88, uVar18 == 0)) {
LAB_01cbec44:
                uVar17 = 0;
                uVar61 = 0;
              }
              else {
                cVar47 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar47 != '\0') {
                    uVar17 = *(uint *)(PTR_DAT_04bbfe90 + 0x120);
                    if ((int)uVar17 < 0) {
                      if (uVar17 == 0xffffffff) goto LAB_01cbebac;
                      goto LAB_01cbec44;
                    }
                    if ((short *)((ulong)uVar17 + (long)local_f88) == (short *)0x0) {
LAB_01cbec90:
                      uVar61 = 0;
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = (uint)*(short *)((ulong)uVar17 + (long)local_f88);
                      uVar18 = uVar17 << 3;
                      uVar20 = (uVar17 & 0x1fffffff) >> 2;
                      if ((uVar17 >> 4 & 0x1ffffff) < 0x7d) {
                        uVar61 = *(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x18) & 1
                        ;
                      }
                      else {
                        uVar61 = 0;
                      }
                      uVar48 = (uVar17 & 0x1fffffff) >> 4;
                      if ((uVar48 < 0x7d) &&
                         ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x19 | 1) & 1)
                          != 0)) {
                        uVar17 = uVar61 + 1;
                        uVar61 = uVar61 | 2;
                      }
                      else {
                        uVar17 = uVar61;
                      }
                      if ((uVar48 < 0x7d) &&
                         ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1a | 2) & 1)
                          != 0)) {
                        uVar17 = uVar17 + 1;
                        uVar61 = uVar61 | 4;
                      }
                      if ((uVar48 < 0x7d) &&
                         ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1b | 3) & 1)
                          != 0)) {
                        uVar17 = uVar17 + 1;
                        uVar61 = uVar61 | 8;
                      }
                      if ((uVar48 < 0x7d) &&
                         ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1c | 4) & 1)
                          != 0)) {
                        uVar17 = uVar17 + 1;
                        uVar61 = uVar61 | 0x10;
                      }
                      if ((uVar48 < 0x7d) &&
                         ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1d | 5) & 1)
                          != 0)) {
                        uVar17 = uVar17 + 1;
                        uVar61 = uVar61 | 0x20;
                      }
                      if ((uVar48 < 0x7d) &&
                         ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1e | 6) & 1)
                          != 0)) {
                        uVar17 = uVar17 + 1;
                        uVar61 = uVar61 | 0x40;
                      }
                      if ((uVar48 < 0x7d) &&
                         ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1f | 7) & 1)
                          != 0)) {
                        uVar17 = uVar17 + 1;
                        uVar61 = uVar61 | 0x80;
                        goto LAB_01cbeca8;
                      }
                    }
                    break;
                  }
                  cVar47 = '\x01';
                  *PTR_DAT_04bbfe88 = 1;
                  memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                  uVar18 = *local_f88;
LAB_01cbebac:
                  puVar36 = (uint *)(ulong)uVar18;
                  uVar17 = 0;
                  if (puVar36 == (uint *)0x0) {
                    uVar61 = 0;
                    break;
                  }
                  uVar61 = 0;
                  if (local_f88 == puVar36) break;
                  lVar54 = 0xc;
                  if (*(char *)((long)local_f88 + (10 - (long)puVar36)) != '\0') {
                    lVar54 = 0x1c;
                  }
                  lVar54 = (long)local_f88 + (lVar54 - (long)puVar36);
                  if (lVar54 == 0) {
                    uVar61 = 0;
                    uVar17 = 0;
                    break;
                  }
                  uVar44 = (ulong)*(ushort *)((long)local_f88 + (8 - (long)puVar36));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
                  if (uVar44 == 0) goto LAB_01cbec90;
                  piVar46 = (int *)(lVar54 + 4);
                  while (piVar46[-1] != -0x34a14cc1) {
                    piVar46 = piVar46 + 2;
                    uVar44 = uVar44 - 1;
                    if (uVar44 == 0) goto LAB_01cbec90;
                  }
                  uVar17 = 0;
                  uVar61 = 0;
                  iVar19 = 0;
                  if (*piVar46 != -1) {
                    iVar19 = *piVar46;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar19;
                  uVar18 = *local_f88;
                } while (uVar18 != 0);
              }
              uVar61 = uVar61 | uVar17 == 0;
              if (uVar17 < 2) {
                uVar17 = 1;
              }
LAB_01cbeca8:
              uVar18 = *(uint *)(param_1 + 0x4f);
              lVar54 = param_1[0x50];
              lVar25 = *(long *)PTR_DAT_04bb2698;
              if (lVar25 == 0) {
                puVar30 = malloc((ulong)uVar17);
              }
              else {
                lVar57 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar27 = (long *)(lVar25 + 8);
                if (lVar57 != 0) {
                  plVar27 = (long *)(lVar57 + 0xa8);
                }
                plVar27 = (long *)*plVar27;
                if (plVar27 == (long *)0x0) goto LAB_01cbfbf8;
                puVar30 = (undefined1 *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar17,8);
              }
              if (puVar30 == (undefined1 *)0x0) goto LAB_01cbfbf8;
              uVar20 = uVar14;
              if (uVar18 <= uVar14) {
                uVar20 = 0;
              }
              puVar36 = (uint *)(lVar54 + (ulong)uVar20 * 0x10);
              *puVar36 = uVar17;
              *(undefined1 **)(puVar36 + 2) = puVar30;
              iVar19 = FUN_01ad7260(&local_f38);
              if (((iVar19 == 0) || (uVar44 = FUN_01ae6580(&local_f38), (uVar44 & 1) == 0)) ||
                 (iVar19 = FUN_01afe130(&local_f38), iVar19 == 1)) {
                bVar12 = 0;
              }
              else {
                bVar12 = 1;
              }
              if (local_f88 == (uint *)0x0) goto LAB_01cbee60;
              uVar18 = *local_f88;
              uVar39 = 0;
              if ((uVar18 == 0) || (local_f88 == (uint *)(ulong)uVar18)) {
LAB_01cbee64:
                bVar11 = (bool)(bVar12 ^ 1);
                if (uVar39 == 0x121) {
                  bVar11 = true;
                }
                if (bVar11) goto LAB_01cbef64;
                local_f58 = (undefined **)CONCAT71(local_f58._1_7_,uVar33);
                FUN_01af193c(&local_7e0,&local_f58,PTR_LAB_04bc0418);
                local_f48 = 0;
                local_f50 = (undefined8 *)CONCAT44(local_7dc,local_7e0);
                lVar54 = *(long *)puVar9;
                local_f58 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                uVar18 = FUN_0277d6c4(&local_f50);
                if (*(long *)puVar9 != 0) {
                  lVar54 = *(long *)(lVar54 + 0x57e58);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                  if ((uVar18 < *(uint *)(lVar54 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                    lVar54 = *(long *)PTR_DAT_04bc0428;
                    uVar18 = FUN_0277d6c4(&local_7e0);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                    if (uVar18 < *(uint *)(lVar54 + 0x1d8)) {
                      lVar54 = *(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8);
                      if (lVar54 != 0) {
                        local_f48 = lVar54;
                      }
                    }
                  }
                }
                iVar19 = FUN_01ad7260(&local_f58);
                if ((iVar19 == 0) ||
                   (puVar32 = (ushort *)FUN_01afd600(&local_f58), puVar32 == (ushort *)0x0)) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = *puVar32 & 7;
                  uVar20 = FUN_01ad7260(&local_f58);
                  if (uVar20 <= uVar18) {
                    uVar18 = 0;
                  }
                }
                if ((1 << (ulong)uVar18 & uVar61) == 0) {
                  iVar19 = 0;
                }
                else {
                  uVar17 = uVar17 - 1;
                  *puVar30 = (char)uVar18;
                  if (uVar17 == 0) goto LAB_01cbf078;
                  uVar61 = uVar61 & (1 << (ulong)uVar18 ^ 0xffffffffU);
                  iVar19 = 1;
                }
              }
              else {
                puVar36 = (uint *)((long)local_f88 - (long)(ulong)uVar18);
                uVar18 = *puVar36;
                uVar39 = 0;
                if (uVar18 == 0) goto LAB_01cbee64;
                uVar44 = (ulong)puVar36[1];
                if ((puVar36[1] == 0) || (uVar31 = (ulong)(ushort)puVar36[2], uVar31 == 0))
                goto LAB_01cbee60;
                lVar54 = 0xc;
                if (*(char *)((long)puVar36 + 10) != '\0') {
                  lVar54 = 0x1c;
                }
                lVar54 = (long)puVar36 + lVar54 + uVar31 * 8;
                if (lVar54 == 0) {
LAB_01cbee04:
                  lVar54 = 0xc;
                  if (*(char *)((long)puVar36 + 10) != '\0') {
                    lVar54 = 0x1c;
                  }
                  lVar54 = (long)puVar36 + lVar54 + uVar31 * 8;
                  if (lVar54 != 0) {
                    uVar20 = 0;
                    if (uVar44 != 0) {
                      uVar20 = (uint)((ulong)((long)local_f88 - lVar54) / uVar44);
                    }
                    if (uVar18 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar39 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2),
                       uVar39 < 0x13e)) goto LAB_01cbee64;
                  }
LAB_01cbee60:
                  uVar39 = 0;
                  goto LAB_01cbee64;
                }
                uVar20 = 0;
                if (uVar44 != 0) {
                  uVar20 = (uint)((ulong)((long)local_f88 - lVar54) / uVar44);
                }
                if (uVar18 <= uVar20) {
                  uVar20 = 0xffffffff;
                }
                if ((*(uint *)PTR_DAT_04bc0068 <= uVar20) ||
                   (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2) != 0x120))
                goto LAB_01cbee04;
LAB_01cbef64:
                iVar19 = 0;
              }
              uVar18 = 1;
              uVar20 = uVar61 - (uVar61 >> 1 & 0x55555555);
              uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
              iVar42 = 2;
              uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
              uVar20 = uVar20 + (uVar20 >> 8);
              do {
                if (uVar61 == 0) {
LAB_01cbefec:
                  cVar47 = -1;
                }
                else {
                  cVar47 = -1;
                  if (uVar18 <= (uVar20 + (uVar20 >> 0x10) & 0x3f)) {
                    iVar51 = iVar42;
                    uVar48 = uVar61;
                    do {
                      iVar51 = iVar51 + -1;
                      if (iVar51 < 2) {
                        uVar48 = uVar48 - 1 & (uVar48 ^ 0xffffffff);
                        uVar48 = uVar48 - (uVar48 >> 1 & 0x55555555);
                        uVar48 = (uVar48 >> 2 & 0x33333333) + (uVar48 & 0x33333333);
                        uVar48 = uVar48 + (uVar48 >> 4) & 0xf0f0f0f;
                        iVar51 = uVar48 + (uVar48 >> 8);
                        cVar47 = (char)iVar51 + (char)((uint)iVar51 >> 0x10);
                        goto LAB_01cbeff0;
                      }
                      uVar48 = uVar48 - 1 & uVar48;
                    } while (uVar48 != 0);
                    goto LAB_01cbefec;
                  }
                }
LAB_01cbeff0:
                puVar30[iVar19] = cVar47;
                bVar11 = uVar18 != uVar17;
                uVar18 = uVar18 + 1;
                iVar19 = iVar19 + 1;
                iVar42 = iVar42 + 1;
              } while (bVar11);
            }
LAB_01cbf078:
            do {
              uVar18 = (int)uVar55 + 1;
              uVar55 = (ulong)uVar18;
              if (0x752 < uVar18 >> 3) {
                uVar18 = 0x3a95;
                goto LAB_01cbf0a0;
              }
            } while ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) ==
                     0);
            goto LAB_01cbea20;
          }
          goto LAB_01cbf36c;
        }
        goto LAB_01cbf368;
      }
      goto LAB_01cbd778;
    }
    break;
  case 0x17:
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar22 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar22,0,0x754);
    memcpy(&local_7d0,&DAT_0535cbc8,0x754);
    puVar9 = PTR_DAT_04bb43c0;
    local_f38 = &PTR_FUN_04a47d88;
    uVar14 = 0;
    do {
      (*(code *)local_7d8[2])(&local_f58,&local_7d8,uVar14);
      lVar53 = (*(code *)local_7d8[4])(&local_7d8);
      uVar18 = 1 << (ulong)(uVar14 & 0x1f);
      if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) & uVar18) != 0) {
        lVar53 = *(long *)puVar9;
        uVar17 = FUN_0277d6c4(&local_f58);
        if (*(long *)puVar9 != 0) {
          lVar53 = *(long *)(lVar53 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
          if (((uVar17 < *(uint *)(lVar53 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
             (uVar55 = (*(code *)*local_f38)(&local_f38,&local_f58), (uVar55 & 1) != 0))
          goto LAB_01cb9e50;
        }
        lVar53 = (*(code *)local_7d8[3])(&local_7d8);
        lVar21 = (ulong)(uVar14 >> 5) * 4;
        *(uint *)(lVar53 + lVar21) = *(uint *)(lVar53 + lVar21) & (uVar18 ^ 0xffffffff);
      }
LAB_01cb9e50:
      uVar14 = uVar14 + 1;
    } while (uVar14 != 15000);
    lVar53 = *(long *)PTR_DAT_04bb39b0;
    pbVar37 = PTR_DAT_04bb32e0;
    if (lVar53 == 0) {
LAB_01cbb544:
      if (*pbVar37 < 8) goto LAB_01cbb5b0;
LAB_01cbb550:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbb5a8:
        pbVar37 = PTR_DAT_04bb5038;
        goto LAB_01cbb5b0;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar37 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar37;
      if (7 < bVar12) goto LAB_01cbb5a8;
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      if (7 < *pbVar37) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cbb544;
        }
        goto LAB_01cbb550;
      }
LAB_01cbb5b0:
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
    lVar53 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f38,1);
    if (lVar53 != 0) {
      local_f90 = lVar53 + 0x194b0;
      if (*(long *)(lVar53 + 0x194b8) == 0) {
        local_f90 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(local_f90 + 0x1100) == (long *)0x0) ||
         (puVar24 = (undefined8 *)**(long **)(local_f90 + 0x1100), puVar24 == (undefined8 *)0x0)) {
        local_f80 = 0;
      }
      else {
        local_f80 = (**(code **)*puVar24)();
        local_f80 = local_f80 & 0xffffffff;
      }
      lVar53 = *(long *)PTR_DAT_04bb46b0;
      if (lVar53 == 0) goto LAB_01cbf368;
      lVar54 = *(long *)(local_f90 + 0x10e0);
      lVar21 = *(long *)(local_f90 + 0x10e8);
      puVar24 = *(undefined8 **)(lVar53 + 0x10);
      if ((*(byte *)(lVar53 + 0x453) & 1) != 0) {
        if (((puVar24 != (undefined8 *)0x0) && ((long *)puVar24[0x26] != (long *)0x0)) &&
           (lVar53 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar53 != 0))
        goto LAB_01cbc250;
        goto LAB_01cbf368;
      }
      lVar53 = (**(code **)(*(long *)*puVar24 + 0x38))();
      if (lVar53 == 0) goto LAB_01cbf368;
      lVar53 = lVar53 + 0x70;
LAB_01cbc250:
      lVar21 = lVar21 + lVar54;
      if ((*(long **)(lVar53 + 0x1c2520) == (long *)0x0) ||
         (puVar24 = (undefined8 *)**(long **)(lVar53 + 0x1c2520), puVar24 == (undefined8 *)0x0)) {
        uVar33 = *(undefined1 *)(*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
        plVar27 = (long *)PTR_DAT_04bb3350;
      }
      else {
        uVar55 = (**(code **)*puVar24)();
        plVar27 = (long *)PTR_DAT_04bb3350;
        uVar33 = *(undefined1 *)(*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
        if ((uVar55 & 1) != 0) {
          if (*(long *)(lVar53 + 0x1c2520) != 0) {
            puVar24 = *(undefined8 **)(*(long *)(lVar53 + 0x1c2520) + 8);
            if (puVar24 != (undefined8 *)0x0) {
              (**(code **)*puVar24)();
            }
          }
        }
      }
      lVar54 = (*(code *)local_7d8[4])(&local_7d8);
      lVar53 = 0;
      uVar55 = 0;
      do {
        puVar36 = (uint *)(lVar54 + lVar53);
        lVar53 = lVar53 + 4;
        uVar14 = *puVar36 - (*puVar36 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + (int)uVar55;
        uVar55 = (ulong)uVar14;
      } while (lVar53 != 0x754);
      if (uVar14 != 0) {
        lVar53 = *(long *)PTR_DAT_04bb2698;
        if (lVar53 == 0) {
          pvVar22 = malloc(uVar55 << 1);
LAB_01cbd718:
          if (pvVar22 != (void *)0x0) {
            *(uint *)(param_1 + 0x51) = uVar14;
            puVar1 = PTR_DAT_04bb2698;
            param_1[0x52] = pvVar22;
            lVar53 = *(long *)puVar1;
            if (lVar53 == 0) {
              puVar28 = malloc(uVar55 << 4);
            }
            else {
              lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
              plVar27 = (long *)(lVar53 + 8);
              if (lVar54 != 0) {
                plVar27 = (long *)(lVar54 + 0xa8);
              }
              plVar27 = (long *)*plVar27;
              if (plVar27 == (long *)0x0) goto LAB_01cbd778;
              puVar28 = (undefined4 *)(**(code **)(*plVar27 + 0x30))(plVar27,uVar55 << 4,8);
            }
            if (puVar28 != (undefined4 *)0x0) {
              uVar44 = uVar55 & 3;
              puVar38 = puVar28;
              if ((uVar14 & 3) != 0) {
                do {
                  *puVar38 = 0;
                  uVar44 = uVar44 - 1;
                  *(undefined8 *)(puVar38 + 2) = 0;
                  puVar38 = puVar38 + 4;
                } while (uVar44 != 0);
              }
              if (2 < (uVar55 - 1 & 0xfffffffffffffff)) {
                do {
                  *puVar38 = 0;
                  *(undefined8 *)(puVar38 + 2) = 0;
                  puVar38[4] = 0;
                  *(undefined8 *)(puVar38 + 6) = 0;
                  puVar38[8] = 0;
                  *(undefined8 *)(puVar38 + 10) = 0;
                  puVar38[0xc] = 0;
                  *(undefined8 *)(puVar38 + 0xe) = 0;
                  puVar38 = puVar38 + 0x10;
                } while (puVar38 != puVar28 + uVar55 * 4);
              }
              *(uint *)(param_1 + 0x53) = uVar14;
              param_1[0x54] = puVar28;
              lVar53 = (*(code *)local_7d8[4])(&local_7d8);
              uVar55 = 0;
              do {
                if ((*(uint *)(lVar53 + (uVar55 >> 5) * 4) >> (ulong)((uint)uVar55 & 0x1f) & 1) != 0
                   ) goto LAB_01cbf2f8;
                uVar14 = (uint)uVar55 + 1;
                uVar55 = (ulong)uVar14;
              } while (uVar14 != 15000);
              uVar55 = 0;
LAB_01cbf2f8:
              lVar54 = (*(code *)local_7d8[4])(&local_7d8);
              iVar16 = 15000;
              do {
                if ((*(uint *)(lVar54 + (ulong)(iVar16 - 1U >> 5) * 4) >>
                     (ulong)(iVar16 - 1U & 0x1f) & 1) != 0) break;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
              bVar12 = true;
              if (iVar16 != (int)uVar55) {
                uVar14 = 0;
                ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
LAB_01cbf3e8:
                puVar36 = (uint *)(PTR_DAT_04bbfe58 + uVar55 * 8);
                if (0x752 < (uint)(uVar55 >> 3)) {
                  puVar36 = (uint *)PTR_DAT_04bbfe58;
                }
                puVar43 = (uint *)PTR_DAT_04bb37e0;
                if ((uint)uVar55 < 0x3a99) {
                  puVar43 = puVar36;
                }
                local_7e0 = *puVar43;
                local_7dc = puVar43[1];
                uVar13 = FUN_0277d6c4(&local_7e0);
                uVar18 = uVar14;
                if (*(uint *)(param_1 + 0x51) <= uVar14) {
                  uVar18 = 0;
                }
                *(undefined2 *)(param_1[0x52] + (ulong)uVar18 * 2) = uVar13;
                local_f28 = (uint *)0x0;
                lVar54 = *(long *)puVar9;
                local_f30 = (char *)CONCAT44(local_7dc,local_7e0);
                local_f38 = ppuVar2;
                uVar18 = FUN_0277d6c4(&local_f30);
                if (*(long *)puVar9 == 0) {
LAB_01cbf4e0:
                  local_f88 = (uint *)0x0;
                }
                else {
                  lVar54 = *(long *)(lVar54 + 0x57e58);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                  if ((*(uint *)(lVar54 + 0x1d8) <= uVar18) ||
                     (*(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                  goto LAB_01cbf4e0;
                  lVar54 = *(long *)PTR_DAT_04bc0428;
                  uVar18 = FUN_0277d6c4(&local_7e0);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                  if ((*(uint *)(lVar54 + 0x1d8) <= uVar18) ||
                     (local_f88 = *(uint **)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8),
                     local_f88 == (uint *)0x0)) goto LAB_01cbf4e0;
                  local_f28 = local_f88;
                }
                iVar19 = FUN_01ad7260(&local_f38);
                if (iVar19 != 0) {
                  if ((local_f88 == (uint *)0x0) || (uVar18 = *local_f88, uVar18 == 0)) {
LAB_01cbf5fc:
                    uVar17 = 0;
                    uVar61 = 0;
                  }
                  else {
                    cVar47 = *PTR_DAT_04bbfe88;
                    do {
                      if (cVar47 != '\0') {
                        uVar17 = *(uint *)(PTR_DAT_04bbfe90 + 0x120);
                        if ((int)uVar17 < 0) {
                          if (uVar17 == 0xffffffff) goto LAB_01cbf564;
                          goto LAB_01cbf5fc;
                        }
                        if ((short *)((ulong)uVar17 + (long)local_f88) == (short *)0x0) {
LAB_01cbf648:
                          uVar61 = 0;
                          uVar17 = 0;
                        }
                        else {
                          uVar17 = (uint)*(short *)((ulong)uVar17 + (long)local_f88);
                          uVar18 = uVar17 << 3;
                          uVar20 = (uVar17 & 0x1fffffff) >> 2;
                          if ((uVar17 >> 4 & 0x1ffffff) < 0x7d) {
                            uVar61 = *(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x18)
                                     & 1;
                          }
                          else {
                            uVar61 = 0;
                          }
                          uVar48 = (uVar17 & 0x1fffffff) >> 4;
                          if ((uVar48 < 0x7d) &&
                             ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x19 | 1) &
                              1) != 0)) {
                            uVar17 = uVar61 + 1;
                            uVar61 = uVar61 | 2;
                          }
                          else {
                            uVar17 = uVar61;
                          }
                          if ((uVar48 < 0x7d) &&
                             ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1a | 2) &
                              1) != 0)) {
                            uVar17 = uVar17 + 1;
                            uVar61 = uVar61 | 4;
                          }
                          if ((uVar48 < 0x7d) &&
                             ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1b | 3) &
                              1) != 0)) {
                            uVar17 = uVar17 + 1;
                            uVar61 = uVar61 | 8;
                          }
                          if ((uVar48 < 0x7d) &&
                             ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1c | 4) &
                              1) != 0)) {
                            uVar17 = uVar17 + 1;
                            uVar61 = uVar61 | 0x10;
                          }
                          if ((uVar48 < 0x7d) &&
                             ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1d | 5) &
                              1) != 0)) {
                            uVar17 = uVar17 + 1;
                            uVar61 = uVar61 | 0x20;
                          }
                          if ((uVar48 < 0x7d) &&
                             ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1e | 6) &
                              1) != 0)) {
                            uVar17 = uVar17 + 1;
                            uVar61 = uVar61 | 0x40;
                          }
                          if ((uVar48 < 0x7d) &&
                             ((*(uint *)(lVar21 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1f | 7) &
                              1) != 0)) {
                            uVar17 = uVar17 + 1;
                            uVar61 = uVar61 | 0x80;
                            goto LAB_01cbf660;
                          }
                        }
                        break;
                      }
                      cVar47 = '\x01';
                      *PTR_DAT_04bbfe88 = 1;
                      memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                      uVar18 = *local_f88;
LAB_01cbf564:
                      puVar36 = (uint *)(ulong)uVar18;
                      uVar17 = 0;
                      if (puVar36 == (uint *)0x0) {
                        uVar61 = 0;
                        break;
                      }
                      uVar61 = 0;
                      if (local_f88 == puVar36) break;
                      lVar54 = 0xc;
                      if (*(char *)((long)local_f88 + (10 - (long)puVar36)) != '\0') {
                        lVar54 = 0x1c;
                      }
                      lVar54 = (long)local_f88 + (lVar54 - (long)puVar36);
                      if (lVar54 == 0) {
                        uVar61 = 0;
                        uVar17 = 0;
                        break;
                      }
                      uVar44 = (ulong)*(ushort *)((long)local_f88 + (8 - (long)puVar36));
                      *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_01cbf648;
                      piVar46 = (int *)(lVar54 + 4);
                      while (piVar46[-1] != -0x34a14cc1) {
                        piVar46 = piVar46 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_01cbf648;
                      }
                      uVar17 = 0;
                      uVar61 = 0;
                      iVar19 = 0;
                      if (*piVar46 != -1) {
                        iVar19 = *piVar46;
                      }
                      *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar19;
                      uVar18 = *local_f88;
                    } while (uVar18 != 0);
                  }
                  uVar61 = uVar61 | uVar17 == 0;
                  if (uVar17 < 2) {
                    uVar17 = 1;
                  }
LAB_01cbf660:
                  uVar18 = *(uint *)(param_1 + 0x53);
                  lVar54 = param_1[0x54];
                  lVar25 = *(long *)PTR_DAT_04bb2698;
                  if (lVar25 == 0) {
                    puVar30 = malloc((ulong)uVar17);
                  }
                  else {
                    lVar57 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                    plVar27 = (long *)(lVar25 + 8);
                    if (lVar57 != 0) {
                      plVar27 = (long *)(lVar57 + 0xa8);
                    }
                    plVar27 = (long *)*plVar27;
                    if (plVar27 == (long *)0x0) goto LAB_01cbfbf8;
                    puVar30 = (undefined1 *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar17,8);
                  }
                  if (puVar30 == (undefined1 *)0x0) goto LAB_01cbfbf8;
                  uVar20 = uVar14;
                  if (uVar18 <= uVar14) {
                    uVar20 = 0;
                  }
                  puVar36 = (uint *)(lVar54 + (ulong)uVar20 * 0x10);
                  *puVar36 = uVar17;
                  *(undefined1 **)(puVar36 + 2) = puVar30;
                  iVar19 = FUN_01ad7260(&local_f38);
                  if (((iVar19 == 0) || (uVar44 = FUN_01ae6580(&local_f38), (uVar44 & 1) == 0)) ||
                     (iVar19 = FUN_01afe130(&local_f38), iVar19 == 1)) {
                    bVar12 = 0;
                  }
                  else {
                    bVar12 = 1;
                  }
                  if (local_f88 == (uint *)0x0) goto LAB_01cbf818;
                  uVar18 = *local_f88;
                  uVar39 = 0;
                  if ((uVar18 == 0) || (local_f88 == (uint *)(ulong)uVar18)) {
LAB_01cbf81c:
                    bVar11 = (bool)(bVar12 ^ 1);
                    if (uVar39 == 0x121) {
                      bVar11 = true;
                    }
                    if (bVar11) goto LAB_01cbf91c;
                    local_f58 = (undefined **)CONCAT71(local_f58._1_7_,uVar33);
                    FUN_01af193c(&local_7e0,&local_f58,PTR_LAB_04bc0418);
                    local_f48 = 0;
                    local_f50 = (undefined8 *)CONCAT44(local_7dc,local_7e0);
                    lVar54 = *(long *)puVar9;
                    local_f58 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                    uVar18 = FUN_0277d6c4(&local_f50);
                    if (*(long *)puVar9 != 0) {
                      lVar54 = *(long *)(lVar54 + 0x57e58);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                      if ((uVar18 < *(uint *)(lVar54 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                        lVar54 = *(long *)PTR_DAT_04bc0428;
                        uVar18 = FUN_0277d6c4(&local_7e0);
                        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar54 + 0x1f8);
                        if (uVar18 < *(uint *)(lVar54 + 0x1d8)) {
                          lVar54 = *(long *)(*(long *)(lVar54 + 0x1e0) + (long)(int)uVar18 * 8);
                          if (lVar54 != 0) {
                            local_f48 = lVar54;
                          }
                        }
                      }
                    }
                    iVar19 = FUN_01ad7260(&local_f58);
                    if ((iVar19 == 0) ||
                       (puVar32 = (ushort *)FUN_01afd600(&local_f58), puVar32 == (ushort *)0x0)) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = *puVar32 & 7;
                      uVar20 = FUN_01ad7260(&local_f58);
                      if (uVar20 <= uVar18) {
                        uVar18 = 0;
                      }
                    }
                    if ((1 << (ulong)uVar18 & uVar61) == 0) {
                      iVar19 = 0;
                    }
                    else {
                      uVar17 = uVar17 - 1;
                      *puVar30 = (char)uVar18;
                      if (uVar17 == 0) goto LAB_01cbfa38;
                      uVar61 = uVar61 & (1 << (ulong)uVar18 ^ 0xffffffffU);
                      iVar19 = 1;
                    }
                  }
                  else {
                    puVar36 = (uint *)((long)local_f88 - (long)(ulong)uVar18);
                    uVar18 = *puVar36;
                    uVar39 = 0;
                    if (uVar18 == 0) goto LAB_01cbf81c;
                    uVar44 = (ulong)puVar36[1];
                    if ((puVar36[1] == 0) || (uVar31 = (ulong)(ushort)puVar36[2], uVar31 == 0))
                    goto LAB_01cbf818;
                    lVar54 = 0xc;
                    if (*(char *)((long)puVar36 + 10) != '\0') {
                      lVar54 = 0x1c;
                    }
                    lVar54 = (long)puVar36 + lVar54 + uVar31 * 8;
                    if (lVar54 == 0) {
LAB_01cbf7bc:
                      lVar54 = 0xc;
                      if (*(char *)((long)puVar36 + 10) != '\0') {
                        lVar54 = 0x1c;
                      }
                      lVar54 = (long)puVar36 + lVar54 + uVar31 * 8;
                      if (lVar54 != 0) {
                        uVar20 = 0;
                        if (uVar44 != 0) {
                          uVar20 = (uint)((ulong)((long)local_f88 - lVar54) / uVar44);
                        }
                        if (uVar18 <= uVar20) {
                          uVar20 = 0xffffffff;
                        }
                        if ((uVar20 < *(uint *)PTR_DAT_04bc0068) &&
                           (uVar39 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2),
                           uVar39 < 0x13e)) goto LAB_01cbf81c;
                      }
LAB_01cbf818:
                      uVar39 = 0;
                      goto LAB_01cbf81c;
                    }
                    uVar20 = 0;
                    if (uVar44 != 0) {
                      uVar20 = (uint)((ulong)((long)local_f88 - lVar54) / uVar44);
                    }
                    if (uVar18 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((*(uint *)PTR_DAT_04bc0068 <= uVar20) ||
                       (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2) != 0x120
                       )) goto LAB_01cbf7bc;
LAB_01cbf91c:
                    iVar19 = 0;
                  }
                  uVar18 = 1;
                  uVar20 = uVar61 - (uVar61 >> 1 & 0x55555555);
                  uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
                  iVar42 = 2;
                  uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
                  uVar20 = uVar20 + (uVar20 >> 8);
                  do {
                    if (uVar61 == 0) {
LAB_01cbf9a4:
                      cVar47 = -1;
                    }
                    else {
                      cVar47 = -1;
                      if (uVar18 <= (uVar20 + (uVar20 >> 0x10) & 0x3f)) {
                        iVar51 = iVar42;
                        uVar48 = uVar61;
                        do {
                          iVar51 = iVar51 + -1;
                          if (iVar51 < 2) {
                            uVar48 = uVar48 - 1 & (uVar48 ^ 0xffffffff);
                            uVar48 = uVar48 - (uVar48 >> 1 & 0x55555555);
                            uVar48 = (uVar48 >> 2 & 0x33333333) + (uVar48 & 0x33333333);
                            uVar48 = uVar48 + (uVar48 >> 4) & 0xf0f0f0f;
                            iVar51 = uVar48 + (uVar48 >> 8);
                            cVar47 = (char)iVar51 + (char)((uint)iVar51 >> 0x10);
                            goto LAB_01cbf9a8;
                          }
                          uVar48 = uVar48 - 1 & uVar48;
                        } while (uVar48 != 0);
                        goto LAB_01cbf9a4;
                      }
                    }
LAB_01cbf9a8:
                    puVar30[iVar19] = cVar47;
                    bVar11 = uVar18 != uVar17;
                    uVar18 = uVar18 + 1;
                    iVar19 = iVar19 + 1;
                    iVar42 = iVar42 + 1;
                  } while (bVar11);
                }
LAB_01cbfa38:
                do {
                  uVar18 = (int)uVar55 + 1;
                  uVar55 = (ulong)uVar18;
                  if (0x752 < uVar18 >> 3) {
                    uVar18 = 0x3a95;
                    goto LAB_01cbfa60;
                  }
                } while ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1
                         ) == 0);
                goto LAB_01cbf3d8;
              }
              goto LAB_01cbf36c;
            }
            goto LAB_01cbf368;
          }
        }
        else {
          lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar26 = (long *)(lVar53 + 8);
          if (lVar54 != 0) {
            plVar26 = (long *)(lVar54 + 0xa8);
          }
          plVar26 = (long *)*plVar26;
          if (plVar26 != (long *)0x0) {
            pvVar22 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar55 << 1,8);
            goto LAB_01cbd718;
          }
        }
        goto LAB_01cbd778;
      }
LAB_01cbd23c:
      bVar12 = true;
      goto LAB_01cbf36c;
    }
    break;
  case 0x18:
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar22 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar22,0,0x754);
    puVar9 = PTR_DAT_04bb39b0;
    lVar53 = *(long *)PTR_DAT_04bb39b0;
    if (lVar53 == 0) {
      bVar12 = *PTR_DAT_04bb32e0;
LAB_01cbad04:
      if (bVar12 < 8) goto LAB_01cbad0c;
LAB_01cbad14:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbad7c:
        bVar58 = *PTR_DAT_04bb5038;
        bVar12 = bVar58;
        if (7 < bVar58) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (7 < bVar58) break;
      }
      else {
        lVar53 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar53 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar53 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar53 + 0x471);
          }
        }
        bVar58 = *pbVar37;
        bVar12 = bVar58;
        if (7 < bVar58) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (7 < bVar58) goto LAB_01cbad7c;
      }
    }
    else {
      pbVar37 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar12 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cbad04;
        }
        goto LAB_01cbad14;
      }
LAB_01cbad0c:
      local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
    }
    uVar14 = FUN_02582d8c(&local_f58,1);
    if (((uVar14 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar14 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar14 * 0x13f0 + 0x13d6) != '\0')) {
      bVar12 = (byte)local_f58;
      if (7 < (byte)local_f58) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
      lVar53 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f38,1);
      if (lVar53 != 0) {
        lVar21 = lVar53 + 0x194b0;
        if (*(long *)(lVar53 + 0x194b8) == 0) {
          lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar21 + 0x1090) == (long *)0x0) ||
           (puVar24 = (undefined8 *)**(long **)(lVar21 + 0x1090), puVar24 == (undefined8 *)0x0)) {
          memcpy(&local_7d0,(void *)(*(long *)(lVar21 + 0x1078) + *(long *)(lVar21 + 0x1070)),0x754)
          ;
        }
        else {
          uVar55 = (**(code **)*puVar24)();
          memcpy(&local_7d0,(void *)(*(long *)(lVar21 + 0x1078) + *(long *)(lVar21 + 0x1070)),0x754)
          ;
          if ((((uVar55 & 1) != 0) && (*(long *)(lVar21 + 0x1090) != 0)) &&
             (puVar24 = *(undefined8 **)(*(long *)(lVar21 + 0x1090) + 8),
             puVar24 != (undefined8 *)0x0)) {
            (**(code **)*puVar24)();
          }
        }
        puVar1 = PTR_DAT_04bb43c0;
        local_f38 = &PTR_FUN_04a47db0;
        uVar14 = 0;
        do {
          (*(code *)local_7d8[2])(&local_f58,&local_7d8,uVar14);
          lVar53 = (*(code *)local_7d8[4])(&local_7d8);
          uVar18 = 1 << (ulong)(uVar14 & 0x1f);
          if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) & uVar18) != 0) {
            lVar53 = *(long *)puVar1;
            uVar17 = FUN_0277d6c4(&local_f58);
            if (*(long *)puVar1 != 0) {
              lVar53 = *(long *)(lVar53 + 0x57e58);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar53 + 0x1f8);
              if (((uVar17 < *(uint *)(lVar53 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar53 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
                 (uVar55 = (*(code *)*local_f38)(&local_f38,&local_f58), (uVar55 & 1) != 0))
              goto LAB_01cbd418;
            }
            lVar53 = (*(code *)local_7d8[3])(&local_7d8);
            lVar21 = (ulong)(uVar14 >> 5) * 4;
            *(uint *)(lVar53 + lVar21) = *(uint *)(lVar53 + lVar21) & (uVar18 ^ 0xffffffff);
          }
LAB_01cbd418:
          plVar27 = (long *)PTR_DAT_04bb3350;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 15000);
        lVar53 = *(long *)puVar9;
        pbVar37 = PTR_DAT_04bb32e0;
        if (lVar53 == 0) {
          if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01cbd7b0;
LAB_01cbd810:
          bVar12 = *pbVar37;
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
        }
        else {
          if (*(int *)(lVar53 + 0x15c) != 0) {
            pbVar37 = (byte *)(lVar53 + 0x158);
          }
          if ((*pbVar37 < 8) ||
             (((*(int *)(lVar53 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar37 < 8))))
          goto LAB_01cbd810;
LAB_01cbd7b0:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbd808:
            pbVar37 = PTR_DAT_04bb5038;
            goto LAB_01cbd810;
          }
          lVar53 = **(long **)PTR_DAT_04bb27d0;
          bVar12 = *(byte *)(lVar53 + 0x473);
          pbVar37 = PTR_DAT_04bb5038;
          if ((long)(char)bVar12 != 0xffffffffffffffff) {
            puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
            if (7 < bVar12) {
              puVar36 = (uint *)(lVar53 + 0x48);
            }
            if ((*puVar36 & 8) != 0) {
              pbVar37 = (byte *)(lVar53 + 0x471);
            }
          }
          bVar12 = *pbVar37;
          if (7 < bVar12) goto LAB_01cbd808;
        }
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
        lVar53 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f38,1);
        if (lVar53 == 0) break;
        lVar21 = lVar53 + 0x194b0;
        if (*(long *)(lVar53 + 0x194b8) == 0) {
          lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar21 + 0x1100) == (long *)0x0) ||
           (puVar24 = (undefined8 *)**(long **)(lVar21 + 0x1100), puVar24 == (undefined8 *)0x0)) {
          uVar55 = 0;
        }
        else {
          uVar55 = (**(code **)*puVar24)();
          uVar55 = uVar55 & 0xffffffff;
        }
        lVar53 = *(long *)PTR_DAT_04bb46b0;
        if (lVar53 == 0) {
LAB_01cbdf88:
          bVar12 = false;
        }
        else {
          lVar25 = *(long *)(lVar21 + 0x10e0);
          lVar54 = *(long *)(lVar21 + 0x10e8);
          puVar24 = *(undefined8 **)(lVar53 + 0x10);
          if ((*(byte *)(lVar53 + 0x453) & 1) == 0) {
            lVar53 = (**(code **)(*(long *)*puVar24 + 0x38))();
            if (lVar53 == 0) goto LAB_01cbdf88;
            lVar53 = lVar53 + 0x70;
          }
          else if (((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0)) ||
                  (lVar53 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar53 == 0))
          goto LAB_01cbdf88;
          lVar54 = lVar54 + lVar25;
          if ((*(long **)(lVar53 + 0x1c2520) == (long *)0x0) ||
             (puVar24 = (undefined8 *)**(long **)(lVar53 + 0x1c2520), puVar24 == (undefined8 *)0x0))
          {
            uVar33 = *(undefined1 *)
                      (*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
            plVar27 = (long *)PTR_DAT_04bb3350;
          }
          else {
            uVar44 = (**(code **)*puVar24)();
            plVar27 = (long *)PTR_DAT_04bb3350;
            uVar33 = *(undefined1 *)
                      (*(long *)(lVar53 + 0x1c2508) + *(long *)(lVar53 + 0x1c2500) + 1);
            if ((uVar44 & 1) != 0) {
              if (*(long *)(lVar53 + 0x1c2520) != 0) {
                puVar24 = *(undefined8 **)(*(long *)(lVar53 + 0x1c2520) + 8);
                if (puVar24 != (undefined8 *)0x0) {
                  (**(code **)*puVar24)();
                }
              }
            }
          }
          lVar25 = (*(code *)local_7d8[4])(&local_7d8);
          lVar53 = 0;
          uVar44 = 0;
          do {
            puVar36 = (uint *)(lVar25 + lVar53);
            lVar53 = lVar53 + 4;
            uVar14 = *puVar36 - (*puVar36 >> 1 & 0x55555555);
            uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
            uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
            uVar14 = uVar14 + (uVar14 >> 8);
            uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + (int)uVar44;
            uVar44 = (ulong)uVar14;
          } while (lVar53 != 0x754);
          if (uVar14 == 0) {
            bVar12 = true;
          }
          else {
            lVar53 = *(long *)PTR_DAT_04bb2698;
            if (lVar53 == 0) {
              pvVar22 = malloc(uVar44 << 1);
LAB_01cbfda4:
              if (pvVar22 != (void *)0x0) {
                *(uint *)(param_1 + 0x55) = uVar14;
                puVar9 = PTR_DAT_04bb2698;
                param_1[0x56] = pvVar22;
                lVar53 = *(long *)puVar9;
                if (lVar53 == 0) {
                  puVar28 = malloc(uVar44 << 4);
                }
                else {
                  lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
                  plVar27 = (long *)(lVar53 + 8);
                  if (lVar25 != 0) {
                    plVar27 = (long *)(lVar25 + 0xa8);
                  }
                  plVar27 = (long *)*plVar27;
                  if (plVar27 == (long *)0x0) goto LAB_01cbff38;
                  puVar28 = (undefined4 *)(**(code **)(*plVar27 + 0x30))(plVar27,uVar44 << 4,8);
                }
                if (puVar28 != (undefined4 *)0x0) {
                  uVar31 = uVar44 & 3;
                  puVar38 = puVar28;
                  if ((uVar14 & 3) != 0) {
                    do {
                      *puVar38 = 0;
                      uVar31 = uVar31 - 1;
                      *(undefined8 *)(puVar38 + 2) = 0;
                      puVar38 = puVar38 + 4;
                    } while (uVar31 != 0);
                  }
                  if (2 < (uVar44 - 1 & 0xfffffffffffffff)) {
                    do {
                      *puVar38 = 0;
                      *(undefined8 *)(puVar38 + 2) = 0;
                      puVar38[4] = 0;
                      *(undefined8 *)(puVar38 + 6) = 0;
                      puVar38[8] = 0;
                      *(undefined8 *)(puVar38 + 10) = 0;
                      puVar38[0xc] = 0;
                      *(undefined8 *)(puVar38 + 0xe) = 0;
                      puVar38 = puVar38 + 0x10;
                    } while (puVar38 != puVar28 + uVar44 * 4);
                  }
                  *(uint *)(param_1 + 0x57) = uVar14;
                  param_1[0x58] = puVar28;
                  lVar53 = (*(code *)local_7d8[4])(&local_7d8);
                  uVar44 = 0;
                  do {
                    if ((*(uint *)(lVar53 + (uVar44 >> 5) * 4) >> (ulong)((uint)uVar44 & 0x1f) & 1)
                        != 0) goto LAB_01cbfec0;
                    uVar14 = (uint)uVar44 + 1;
                    uVar44 = (ulong)uVar14;
                  } while (uVar14 != 15000);
                  uVar44 = 0;
LAB_01cbfec0:
                  lVar25 = (*(code *)local_7d8[4])(&local_7d8);
                  iVar16 = 15000;
                  do {
                    if ((*(uint *)(lVar25 + (ulong)(iVar16 - 1U >> 5) * 4) >>
                         (ulong)(iVar16 - 1U & 0x1f) & 1) != 0) break;
                    iVar16 = iVar16 + -1;
                  } while (iVar16 != 0);
                  bVar12 = true;
                  if (iVar16 != (int)uVar44) {
                    uVar14 = 0;
                    ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
LAB_01cbff7c:
                    puVar36 = (uint *)(PTR_DAT_04bbfe58 + uVar44 * 8);
                    if (0x752 < (uint)(uVar44 >> 3)) {
                      puVar36 = (uint *)PTR_DAT_04bbfe58;
                    }
                    puVar43 = (uint *)PTR_DAT_04bb37e0;
                    if ((uint)uVar44 < 0x3a99) {
                      puVar43 = puVar36;
                    }
                    local_7e0 = *puVar43;
                    local_7dc = puVar43[1];
                    uVar13 = FUN_0277d6c4(&local_7e0);
                    uVar18 = uVar14;
                    if (*(uint *)(param_1 + 0x55) <= uVar14) {
                      uVar18 = 0;
                    }
                    *(undefined2 *)(param_1[0x56] + (ulong)uVar18 * 2) = uVar13;
                    local_f28 = (uint *)0x0;
                    lVar25 = *(long *)puVar1;
                    local_f30 = (char *)CONCAT44(local_7dc,local_7e0);
                    local_f38 = ppuVar2;
                    uVar18 = FUN_0277d6c4(&local_f30);
                    if (*(long *)puVar1 == 0) {
LAB_01cc0078:
                      local_f88 = (uint *)0x0;
                    }
                    else {
                      lVar25 = *(long *)(lVar25 + 0x57e58);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                      if ((*(uint *)(lVar25 + 0x1d8) <= uVar18) ||
                         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                      goto LAB_01cc0078;
                      lVar25 = *(long *)PTR_DAT_04bc0428;
                      uVar18 = FUN_0277d6c4(&local_7e0);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                      if ((*(uint *)(lVar25 + 0x1d8) <= uVar18) ||
                         (local_f88 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8),
                         local_f88 == (uint *)0x0)) goto LAB_01cc0078;
                      local_f28 = local_f88;
                    }
                    iVar19 = FUN_01ad7260(&local_f38);
                    if (iVar19 == 0) {
LAB_01cc060c:
                      do {
                        uVar18 = (int)uVar44 + 1;
                        uVar44 = (ulong)uVar18;
                        if (0x752 < uVar18 >> 3) {
                          uVar18 = 0x3a95;
                          goto LAB_01cc0634;
                        }
                      } while ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >>
                                (ulong)(uVar18 & 0x1f) & 1) == 0);
                      goto LAB_01cbff6c;
                    }
                    if ((local_f88 == (uint *)0x0) || (uVar18 = *local_f88, uVar18 == 0)) {
LAB_01cc0194:
                      uVar17 = 0;
                      uVar61 = 0;
                    }
                    else {
                      cVar47 = *PTR_DAT_04bbfe88;
                      do {
                        if (cVar47 != '\0') {
                          uVar17 = *(uint *)(PTR_DAT_04bbfe90 + 0x120);
                          if ((int)uVar17 < 0) {
                            if (uVar17 == 0xffffffff) goto LAB_01cc00fc;
                            goto LAB_01cc0194;
                          }
                          if ((short *)((ulong)uVar17 + (long)local_f88) == (short *)0x0) {
LAB_01cc01e0:
                            uVar61 = 0;
                            uVar17 = 0;
                          }
                          else {
                            uVar17 = (uint)*(short *)((ulong)uVar17 + (long)local_f88);
                            uVar18 = uVar17 << 3;
                            uVar20 = (uVar17 & 0x1fffffff) >> 2;
                            if ((uVar17 >> 4 & 0x1ffffff) < 0x7d) {
                              uVar61 = *(uint *)(lVar54 + (ulong)uVar20 * 4) >>
                                       (ulong)(uVar18 & 0x18) & 1;
                            }
                            else {
                              uVar61 = 0;
                            }
                            uVar48 = (uVar17 & 0x1fffffff) >> 4;
                            if ((uVar48 < 0x7d) &&
                               ((*(uint *)(lVar54 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x19 | 1)
                                & 1) != 0)) {
                              uVar17 = uVar61 + 1;
                              uVar61 = uVar61 | 2;
                            }
                            else {
                              uVar17 = uVar61;
                            }
                            if ((uVar48 < 0x7d) &&
                               ((*(uint *)(lVar54 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1a | 2)
                                & 1) != 0)) {
                              uVar17 = uVar17 + 1;
                              uVar61 = uVar61 | 4;
                            }
                            if ((uVar48 < 0x7d) &&
                               ((*(uint *)(lVar54 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1b | 3)
                                & 1) != 0)) {
                              uVar17 = uVar17 + 1;
                              uVar61 = uVar61 | 8;
                            }
                            if ((uVar48 < 0x7d) &&
                               ((*(uint *)(lVar54 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1c | 4)
                                & 1) != 0)) {
                              uVar17 = uVar17 + 1;
                              uVar61 = uVar61 | 0x10;
                            }
                            if ((uVar48 < 0x7d) &&
                               ((*(uint *)(lVar54 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1d | 5)
                                & 1) != 0)) {
                              uVar17 = uVar17 + 1;
                              uVar61 = uVar61 | 0x20;
                            }
                            if ((uVar48 < 0x7d) &&
                               ((*(uint *)(lVar54 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1e | 6)
                                & 1) != 0)) {
                              uVar17 = uVar17 + 1;
                              uVar61 = uVar61 | 0x40;
                            }
                            if ((uVar48 < 0x7d) &&
                               ((*(uint *)(lVar54 + (ulong)uVar20 * 4) >> (ulong)(uVar18 & 0x1f | 7)
                                & 1) != 0)) {
                              uVar17 = uVar17 + 1;
                              uVar61 = uVar61 | 0x80;
                              goto LAB_01cc01f8;
                            }
                          }
                          break;
                        }
                        cVar47 = '\x01';
                        *PTR_DAT_04bbfe88 = 1;
                        memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                        uVar18 = *local_f88;
LAB_01cc00fc:
                        puVar36 = (uint *)(ulong)uVar18;
                        uVar17 = 0;
                        if (puVar36 == (uint *)0x0) {
                          uVar61 = 0;
                          break;
                        }
                        uVar61 = 0;
                        if (local_f88 == puVar36) break;
                        lVar25 = 0xc;
                        if (*(char *)((long)local_f88 + (10 - (long)puVar36)) != '\0') {
                          lVar25 = 0x1c;
                        }
                        lVar25 = (long)local_f88 + (lVar25 - (long)puVar36);
                        if (lVar25 == 0) {
                          uVar61 = 0;
                          uVar17 = 0;
                          break;
                        }
                        uVar31 = (ulong)*(ushort *)((long)local_f88 + (8 - (long)puVar36));
                        *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
                        if (uVar31 == 0) goto LAB_01cc01e0;
                        piVar46 = (int *)(lVar25 + 4);
                        while (piVar46[-1] != -0x34a14cc1) {
                          piVar46 = piVar46 + 2;
                          uVar31 = uVar31 - 1;
                          if (uVar31 == 0) goto LAB_01cc01e0;
                        }
                        uVar17 = 0;
                        uVar61 = 0;
                        iVar19 = 0;
                        if (*piVar46 != -1) {
                          iVar19 = *piVar46;
                        }
                        *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar19;
                        uVar18 = *local_f88;
                      } while (uVar18 != 0);
                    }
                    uVar61 = uVar61 | uVar17 == 0;
                    if (uVar17 < 2) {
                      uVar17 = 1;
                    }
LAB_01cc01f8:
                    uVar18 = *(uint *)(param_1 + 0x57);
                    lVar25 = param_1[0x58];
                    lVar57 = *(long *)PTR_DAT_04bb2698;
                    if (lVar57 == 0) {
                      puVar30 = malloc((ulong)uVar17);
LAB_01cc026c:
                      if (puVar30 != (undefined1 *)0x0) {
                        uVar20 = uVar14;
                        if (uVar18 <= uVar14) {
                          uVar20 = 0;
                        }
                        puVar36 = (uint *)(lVar25 + (ulong)uVar20 * 0x10);
                        *puVar36 = uVar17;
                        *(undefined1 **)(puVar36 + 2) = puVar30;
                        iVar19 = FUN_01ad7260(&local_f38);
                        if (((iVar19 == 0) || (uVar31 = FUN_01ae6580(&local_f38), (uVar31 & 1) == 0)
                            ) || (iVar19 = FUN_01afe130(&local_f38), iVar19 == 1)) {
                          bVar12 = 0;
                        }
                        else {
                          bVar12 = 1;
                        }
                        if (local_f88 == (uint *)0x0) {
LAB_01cc03e4:
                          uVar39 = 0;
LAB_01cc03f8:
                          bVar11 = (bool)(bVar12 ^ 1);
                          if (uVar39 == 0x121) {
                            bVar11 = true;
                          }
                          if (bVar11) {
                            iVar19 = 0;
                          }
                          else {
                            local_f58 = (undefined **)CONCAT71(local_f58._1_7_,uVar33);
                            FUN_01af193c(&local_7e0,&local_f58,PTR_LAB_04bc0418);
                            local_f48 = 0;
                            local_f50 = (undefined8 *)CONCAT44(local_7dc,local_7e0);
                            lVar25 = *(long *)puVar1;
                            local_f58 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                            uVar18 = FUN_0277d6c4(&local_f50);
                            if (*(long *)puVar1 != 0) {
                              lVar25 = *(long *)(lVar25 + 0x57e58);
                              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                              if ((uVar18 < *(uint *)(lVar25 + 0x1d8)) &&
                                 (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) != 0)
                                 ) {
                                lVar25 = *(long *)PTR_DAT_04bc0428;
                                uVar18 = FUN_0277d6c4(&local_7e0);
                                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                                if (uVar18 < *(uint *)(lVar25 + 0x1d8)) {
                                  lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) +
                                                    (long)(int)uVar18 * 8);
                                  if (lVar25 != 0) {
                                    local_f48 = lVar25;
                                  }
                                }
                              }
                            }
                            iVar19 = FUN_01ad7260(&local_f58);
                            if ((iVar19 == 0) ||
                               (puVar32 = (ushort *)FUN_01afd600(&local_f58),
                               puVar32 == (ushort *)0x0)) {
                              uVar18 = 0;
                            }
                            else {
                              uVar18 = *puVar32 & 7;
                              uVar20 = FUN_01ad7260(&local_f58);
                              if (uVar20 <= uVar18) {
                                uVar18 = 0;
                              }
                            }
                            if ((1 << (ulong)uVar18 & uVar61) == 0) {
                              iVar19 = 0;
                            }
                            else {
                              uVar17 = uVar17 - 1;
                              *puVar30 = (char)uVar18;
                              if (uVar17 == 0) goto LAB_01cc060c;
                              uVar61 = uVar61 & (1 << (ulong)uVar18 ^ 0xffffffffU);
                              iVar19 = 1;
                            }
                          }
                        }
                        else {
                          uVar18 = *local_f88;
                          uVar39 = 0;
                          if ((uVar18 == 0) || (local_f88 == (uint *)(ulong)uVar18))
                          goto LAB_01cc03f8;
                          puVar36 = (uint *)((long)local_f88 - (long)(ulong)uVar18);
                          uVar18 = *puVar36;
                          uVar39 = 0;
                          if (uVar18 == 0) goto LAB_01cc03f8;
                          uVar31 = (ulong)puVar36[1];
                          if ((puVar36[1] == 0) || (uVar50 = (ulong)(ushort)puVar36[2], uVar50 == 0)
                             ) {
LAB_01cc03ec:
                            uVar39 = 0;
                            goto LAB_01cc03f8;
                          }
                          lVar25 = 0xc;
                          if (*(char *)((long)puVar36 + 10) != '\0') {
                            lVar25 = 0x1c;
                          }
                          lVar25 = (long)puVar36 + lVar25 + uVar50 * 8;
                          if (lVar25 == 0) {
LAB_01cc037c:
                            lVar25 = 0xc;
                            if (*(char *)((long)puVar36 + 10) != '\0') {
                              lVar25 = 0x1c;
                            }
                            lVar25 = (long)puVar36 + lVar25 + uVar50 * 8;
                            if (lVar25 != 0) {
                              uVar20 = 0;
                              if (uVar31 != 0) {
                                uVar20 = (uint)((ulong)((long)local_f88 - lVar25) / uVar31);
                              }
                              if (uVar18 <= uVar20) {
                                uVar20 = 0xffffffff;
                              }
                              if (uVar20 < *(uint *)PTR_DAT_04bc0068) {
                                uVar39 = *(ushort *)
                                          (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2);
                                if (0x13d < uVar39) goto LAB_01cc03e4;
                                goto LAB_01cc03f8;
                              }
                            }
                            goto LAB_01cc03ec;
                          }
                          uVar20 = 0;
                          if (uVar31 != 0) {
                            uVar20 = (uint)((ulong)((long)local_f88 - lVar25) / uVar31);
                          }
                          if (uVar18 <= uVar20) {
                            uVar20 = 0xffffffff;
                          }
                          if ((*(uint *)PTR_DAT_04bc0068 <= uVar20) ||
                             (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar20 * 2) !=
                              0x120)) goto LAB_01cc037c;
                          iVar19 = 0;
                        }
                        uVar18 = 1;
                        uVar20 = uVar61 - (uVar61 >> 1 & 0x55555555);
                        uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
                        iVar42 = 2;
                        uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
                        uVar20 = uVar20 + (uVar20 >> 8);
                        do {
                          if (uVar61 == 0) {
LAB_01cc0580:
                            cVar47 = -1;
                          }
                          else {
                            cVar47 = -1;
                            if (uVar18 <= (uVar20 + (uVar20 >> 0x10) & 0x3f)) {
                              iVar51 = iVar42;
                              uVar48 = uVar61;
                              do {
                                iVar51 = iVar51 + -1;
                                if (iVar51 < 2) {
                                  uVar48 = uVar48 - 1 & (uVar48 ^ 0xffffffff);
                                  uVar48 = uVar48 - (uVar48 >> 1 & 0x55555555);
                                  uVar48 = (uVar48 >> 2 & 0x33333333) + (uVar48 & 0x33333333);
                                  uVar48 = uVar48 + (uVar48 >> 4) & 0xf0f0f0f;
                                  iVar51 = uVar48 + (uVar48 >> 8);
                                  cVar47 = (char)iVar51 + (char)((uint)iVar51 >> 0x10);
                                  goto LAB_01cc0584;
                                }
                                uVar48 = uVar48 - 1 & uVar48;
                              } while (uVar48 != 0);
                              goto LAB_01cc0580;
                            }
                          }
LAB_01cc0584:
                          puVar30[iVar19] = cVar47;
                          bVar11 = uVar18 != uVar17;
                          uVar18 = uVar18 + 1;
                          iVar19 = iVar19 + 1;
                          iVar42 = iVar42 + 1;
                        } while (bVar11);
                        goto LAB_01cc060c;
                      }
                    }
                    else {
                      lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
                      plVar27 = (long *)(lVar57 + 8);
                      if (lVar29 != 0) {
                        plVar27 = (long *)(lVar29 + 0xa8);
                      }
                      plVar27 = (long *)*plVar27;
                      if (plVar27 != (long *)0x0) {
                        puVar30 = (undefined1 *)
                                  (**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar17,8);
                        goto LAB_01cc026c;
                      }
                    }
                    bVar12 = false;
                  }
                  goto LAB_01cbff44;
                }
              }
            }
            else {
              lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
              plVar26 = (long *)(lVar53 + 8);
              if (lVar25 != 0) {
                plVar26 = (long *)(lVar25 + 0xa8);
              }
              plVar26 = (long *)*plVar26;
              if (plVar26 != (long *)0x0) {
                pvVar22 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar44 << 1,8);
                goto LAB_01cbfda4;
              }
            }
LAB_01cbff38:
            bVar12 = false;
          }
        }
LAB_01cbff44:
        if (((uVar55 & 1) == 0) || (*(long *)(lVar21 + 0x1100) == 0)) goto LAB_01cbf38c;
        puVar24 = *(undefined8 **)(*(long *)(lVar21 + 0x1100) + 8);
        plVar27 = (long *)PTR_DAT_04bb3350;
        goto joined_r0x01cbff5c;
      }
    }
    break;
  case 0x19:
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar14 = nn::os::GetSystemTick();
    local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar22 = (void *)FUN_01a451fc(&local_7d8);
    memset(pvVar22,0,0x754);
    puVar9 = PTR_DAT_04bb39b0;
    lVar53 = *(long *)PTR_DAT_04bb39b0;
    pbVar37 = PTR_DAT_04bb32e0;
    if (lVar53 == 0) {
LAB_01cbaea4:
      if (*pbVar37 < 8) goto LAB_01cbaf1c;
LAB_01cbaeb0:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbaf14:
        pbVar37 = PTR_DAT_04bb5038;
        goto LAB_01cbaf1c;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar37 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar37;
      bVar11 = 7 < bVar12;
      if (bVar11) {
        bVar12 = 0xff;
      }
      local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      if (bVar11) goto LAB_01cbaf14;
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      if (7 < *pbVar37) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cbaea4;
        }
        goto LAB_01cbaeb0;
      }
LAB_01cbaf1c:
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
    }
    local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_f30 = "TanuportAmiiboBromideUnlock";
    iVar16 = FUN_0274bce0(&local_f58,&local_f38);
    if (iVar16 == 0) goto LAB_01cbb934;
    lVar53 = *(long *)puVar9;
    pbVar37 = PTR_DAT_04bb32e0;
    if (lVar53 == 0) {
LAB_01cbbdb4:
      if (*pbVar37 < 8) goto LAB_01cbbe2c;
LAB_01cbbdc0:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbbe24:
        pbVar37 = PTR_DAT_04bb5038;
        goto LAB_01cbbe2c;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar37 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar37;
      bVar11 = 7 < bVar12;
      if (bVar11) {
        bVar12 = 0xff;
      }
      local_7e0 = CONCAT31(local_7e0._1_3_,bVar12);
      if (bVar11) goto LAB_01cbbe24;
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      if (7 < *pbVar37) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cbbdb4;
        }
        goto LAB_01cbbdc0;
      }
LAB_01cbbe2c:
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_7e0 = CONCAT31(local_7e0._1_3_,bVar12);
    }
    lVar53 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_7e0,1);
    if (lVar53 != 0) {
      lVar21 = lVar53 + 0x194b0;
      if (*(long *)(lVar53 + 0x194b8) == 0) {
        lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar21 + 0x2ab18) == (long *)0x0) ||
         (puVar24 = (undefined8 *)**(long **)(lVar21 + 0x2ab18), puVar24 == (undefined8 *)0x0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)*puVar24)();
      }
      puVar9 = PTR_DAT_04bb40a8;
      lVar53 = *(long *)(lVar21 + 0x2ab00) + *(long *)(lVar21 + 0x2aaf8);
      lVar54 = *(long *)PTR_DAT_04bb4130;
      uVar18 = *(uint *)(lVar54 + 0x1c0);
      if ((0 < (int)uVar18) ||
         (((*(long *)(lVar54 + 0xb0) != 0 &&
           (puVar36 = *(uint **)(*(long *)(lVar54 + 0xb0) + 8), puVar36 != (uint *)0x0)) &&
          (uVar18 = *puVar36, 0 < (int)uVar18)))) {
        uVar55 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          if ((int)*(uint *)(lVar54 + 0x1c0) < 1) {
            if (((((*(long *)(lVar54 + 0xb0) != 0) &&
                  (puVar36 = *(uint **)(*(long *)(lVar54 + 0xb0) + 8), puVar36 != (uint *)0x0)) &&
                 ((*(uint *)(lVar54 + 200) <= uVar55 ||
                  (*(char *)(*(long *)(lVar54 + 0xd0) + uVar55) != '\0')))) &&
                ((uVar55 < *puVar36 && (puVar36[1] != 0)))) && ((ushort)puVar36[2] != 0)) {
              iVar16 = 0xc;
              if (*(char *)((long)puVar36 + 10) != '\0') {
                iVar16 = 0x1c;
              }
              puVar36 = (uint *)((ulong)(puVar36[1] * (int)uVar55 + (uint)(ushort)puVar36[2] * 8 +
                                        iVar16) + (long)puVar36);
              goto joined_r0x01cbc124;
            }
          }
          else if (uVar55 < *(uint *)(lVar54 + 0x1c0)) {
            uVar44 = uVar55 & 0xffffffff;
            if (*(uint *)(lVar54 + 0x1b0) <= uVar55) {
              uVar44 = 0;
            }
            puVar36 = *(uint **)(*(long *)(lVar54 + 0x1b8) + uVar44 * 8);
joined_r0x01cbc124:
            if (puVar36 != (uint *)0x0) {
              uVar17 = *puVar36;
              if (uVar17 != 0) {
                cVar47 = *PTR_DAT_04bb40a0;
                do {
                  puVar10 = PTR_DAT_04bb40a0;
                  if (cVar47 == '\0') {
                    cVar47 = '\x01';
                    *(undefined8 *)puVar9 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar9 + 0x78) = 0xffffffff;
                    *puVar10 = 1;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                    uVar17 = *puVar36;
                  }
                  else {
                    uVar61 = *(uint *)(puVar9 + 0x50);
                    if (-1 < (int)uVar61) {
                      lVar25 = (ulong)uVar61 + (long)puVar36;
                      goto LAB_01cbc028;
                    }
                    if (uVar61 != 0xffffffff) break;
                  }
                  puVar43 = (uint *)(ulong)uVar17;
                  lVar25 = 0;
                  if ((puVar43 == (uint *)0x0) || (lVar25 = 0, puVar36 == puVar43))
                  goto LAB_01cbc028;
                  lVar25 = 0xc;
                  if (*(char *)((long)puVar36 + (10 - (long)puVar43)) != '\0') {
                    lVar25 = 0x1c;
                  }
                  lVar57 = (long)puVar36 + (lVar25 - (long)puVar43);
                  lVar25 = 0;
                  if (lVar57 == 0) goto LAB_01cbc028;
                  uVar44 = (ulong)*(ushort *)((long)puVar36 + (8 - (long)puVar43));
                  *(undefined4 *)(puVar9 + 0x50) = 0xfffffffe;
                  if (uVar44 == 0) break;
                  piVar46 = (int *)(lVar57 + 4);
                  while (piVar46[-1] != 0x2f1b930d) {
                    piVar46 = piVar46 + 2;
                    uVar44 = uVar44 - 1;
                    if (uVar44 == 0) goto LAB_01cbc024;
                  }
                  iVar16 = 0;
                  if (*piVar46 != -1) {
                    iVar16 = *piVar46;
                  }
                  *(int *)(puVar9 + 0x50) = iVar16;
                  uVar17 = *puVar36;
                  if (uVar17 == 0) break;
                } while( true );
              }
LAB_01cbc024:
              lVar25 = 0;
LAB_01cbc028:
              lVar57 = *(long *)PTR_PTR_04bc0550;
              if (lVar25 != 0) {
                lVar57 = lVar25;
              }
              local_f38 = (undefined **)puVar1;
              local_f30 = (char *)lVar57;
              uVar44 = FUN_028b5a70(lVar53,&local_f38);
              if ((uVar44 & 1) != 0) {
                local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                local_f30 = (char *)lVar57;
                FUN_021f6050(&local_f58,&local_f38);
                FUN_0277dedc(&local_f58);
                lVar25 = (*(code *)local_7d8[3])(&local_7d8);
                uVar17 = FUN_0277d6c4(&local_f58);
                if ((uVar17 >> 3 & 0x1fff) < 0x753) {
                  lVar57 = (ulong)((uVar17 & 0xffff) >> 5) * 4;
                  *(uint *)(lVar25 + lVar57) =
                       *(uint *)(lVar25 + lVar57) | 1 << (ulong)(uVar17 & 0x1f);
                }
              }
            }
          }
          uVar55 = uVar55 + 1;
        } while (uVar55 != uVar18);
      }
      puVar9 = PTR_DAT_04bb40b8;
      lVar54 = *(long *)PTR_DAT_04bb4138;
      uVar18 = *(uint *)(lVar54 + 0x1c0);
      if ((0 < (int)uVar18) ||
         (((*(long *)(lVar54 + 0xb0) != 0 &&
           (puVar36 = *(uint **)(*(long *)(lVar54 + 0xb0) + 8), puVar36 != (uint *)0x0)) &&
          (uVar18 = *puVar36, 0 < (int)uVar18)))) {
        uVar55 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          if ((int)*(uint *)(lVar54 + 0x1c0) < 1) {
            if ((((*(long *)(lVar54 + 0xb0) != 0) &&
                 (puVar36 = *(uint **)(*(long *)(lVar54 + 0xb0) + 8), puVar36 != (uint *)0x0)) &&
                ((*(uint *)(lVar54 + 200) <= uVar55 ||
                 (*(char *)(*(long *)(lVar54 + 0xd0) + uVar55) != '\0')))) &&
               (((uVar55 < *puVar36 && (puVar36[1] != 0)) && ((ushort)puVar36[2] != 0)))) {
              iVar16 = 0xc;
              if (*(char *)((long)puVar36 + 10) != '\0') {
                iVar16 = 0x1c;
              }
              puVar36 = (uint *)((ulong)(puVar36[1] * (int)uVar55 + (uint)(ushort)puVar36[2] * 8 +
                                        iVar16) + (long)puVar36);
              goto joined_r0x01cbc564;
            }
          }
          else if (uVar55 < *(uint *)(lVar54 + 0x1c0)) {
            uVar44 = uVar55 & 0xffffffff;
            if (*(uint *)(lVar54 + 0x1b0) <= uVar55) {
              uVar44 = 0;
            }
            puVar36 = *(uint **)(*(long *)(lVar54 + 0x1b8) + uVar44 * 8);
joined_r0x01cbc564:
            if (puVar36 != (uint *)0x0) {
              uVar17 = *puVar36;
              if (uVar17 != 0) {
                cVar47 = *PTR_DAT_04bb40b0;
                do {
                  puVar10 = PTR_DAT_04bb40b0;
                  if (cVar47 == '\0') {
                    cVar47 = '\x01';
                    *(undefined8 *)puVar9 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar9 + 0xa0) = 0xffffffff;
                    *puVar10 = 1;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                    uVar17 = *puVar36;
                  }
                  else {
                    uVar61 = *(uint *)(puVar9 + 0x80);
                    if (-1 < (int)uVar61) {
                      lVar25 = (ulong)uVar61 + (long)puVar36;
                      goto LAB_01cbc43c;
                    }
                    if (uVar61 != 0xffffffff) break;
                  }
                  puVar43 = (uint *)(ulong)uVar17;
                  lVar25 = 0;
                  if ((puVar43 == (uint *)0x0) || (lVar25 = 0, puVar36 == puVar43))
                  goto LAB_01cbc43c;
                  lVar25 = 0xc;
                  if (*(char *)((long)puVar36 + (10 - (long)puVar43)) != '\0') {
                    lVar25 = 0x1c;
                  }
                  lVar57 = (long)puVar36 + (lVar25 - (long)puVar43);
                  lVar25 = 0;
                  if (lVar57 == 0) goto LAB_01cbc43c;
                  uVar44 = (ulong)*(ushort *)((long)puVar36 + (8 - (long)puVar43));
                  *(undefined4 *)(puVar9 + 0x80) = 0xfffffffe;
                  if (uVar44 == 0) break;
                  piVar46 = (int *)(lVar57 + 4);
                  while (piVar46[-1] != 0x2f1b930d) {
                    piVar46 = piVar46 + 2;
                    uVar44 = uVar44 - 1;
                    if (uVar44 == 0) goto LAB_01cbc438;
                  }
                  iVar16 = 0;
                  if (*piVar46 != -1) {
                    iVar16 = *piVar46;
                  }
                  *(int *)(puVar9 + 0x80) = iVar16;
                  uVar17 = *puVar36;
                  if (uVar17 == 0) break;
                } while( true );
              }
LAB_01cbc438:
              lVar25 = 0;
LAB_01cbc43c:
              lVar57 = *(long *)PTR_PTR_04bc1178;
              if (lVar25 != 0) {
                lVar57 = lVar25;
              }
              local_f58 = (undefined **)CONCAT53(local_f58._3_5_,0x80023);
              local_f38 = (undefined **)puVar1;
              local_f30 = (char *)lVar57;
              FUN_020fd3a0(&local_f58,&local_f38);
              uVar44 = (ulong)local_f58 & 0xff;
              if (0x22 < (byte)local_f58) {
                uVar44 = 0;
              }
              if ((*(uint *)(lVar53 + 0x10 + uVar44 * 4) >> (ulong)(local_f58._1_1_ & 0x1f) & 1) !=
                  0) {
                local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                local_f30 = (char *)lVar57;
                FUN_021f6050(&local_f58,&local_f38);
                FUN_0277dedc(&local_f58);
                lVar25 = (*(code *)local_7d8[3])(&local_7d8);
                uVar17 = FUN_0277d6c4(&local_f58);
                if ((uVar17 >> 3 & 0x1fff) < 0x753) {
                  lVar57 = (ulong)((uVar17 & 0xffff) >> 5) * 4;
                  *(uint *)(lVar25 + lVar57) =
                       *(uint *)(lVar25 + lVar57) | 1 << (ulong)(uVar17 & 0x1f);
                }
              }
            }
          }
          uVar55 = uVar55 + 1;
        } while (uVar55 != uVar18);
      }
      puVar9 = PTR_DAT_04bb39b0;
      plVar27 = (long *)PTR_DAT_04bb3350;
      lVar54 = *(long *)PTR_DAT_04bb39b0;
      pbVar37 = PTR_DAT_04bb32e0;
      if (lVar54 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01cbc620;
LAB_01cbc68c:
        bVar12 = *pbVar37;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      }
      else {
        if (*(int *)(lVar54 + 0x15c) != 0) {
          pbVar37 = (byte *)(lVar54 + 0x158);
        }
        if ((*pbVar37 < 8) ||
           (((*(int *)(lVar54 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar37 < 8))))
        goto LAB_01cbc68c;
LAB_01cbc620:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbc684:
          pbVar37 = PTR_DAT_04bb5038;
          goto LAB_01cbc68c;
        }
        lVar54 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar54 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar54 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar54 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar54 + 0x471);
          }
        }
        bVar12 = *pbVar37;
        bVar11 = 7 < bVar12;
        if (bVar11) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (bVar11) goto LAB_01cbc684;
      }
      local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_f30 = "UnlockSanrioCollaboPoster";
      iVar16 = FUN_0274bce0(&local_f58,&local_f38);
      if (iVar16 != 0) {
        local_f38 = (undefined **)0x32e9;
        FUN_0277d4ac(&local_f38);
        FUN_0277dedc(&local_f38);
        lVar54 = (*(code *)local_7d8[3])(&local_7d8);
        uVar18 = FUN_0277d6c4(&local_f38);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar25 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar54 + lVar25) = *(uint *)(lVar54 + lVar25) | 1 << (ulong)(uVar18 & 0x1f);
        }
      }
      lVar54 = *(long *)puVar9;
      pbVar37 = PTR_DAT_04bb32e0;
      if (lVar54 == 0) {
LAB_01cbc780:
        if (*pbVar37 < 8) goto LAB_01cbc7f8;
LAB_01cbc78c:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbc7f0:
          pbVar37 = PTR_DAT_04bb5038;
          goto LAB_01cbc7f8;
        }
        lVar54 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar54 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar54 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar54 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar54 + 0x471);
          }
        }
        bVar12 = *pbVar37;
        bVar11 = 7 < bVar12;
        if (bVar11) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (bVar11) goto LAB_01cbc7f0;
      }
      else {
        if (*(int *)(lVar54 + 0x15c) != 0) {
          pbVar37 = (byte *)(lVar54 + 0x158);
        }
        if (7 < *pbVar37) {
          if ((*(int *)(lVar54 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01cbc780;
          }
          goto LAB_01cbc78c;
        }
LAB_01cbc7f8:
        bVar12 = *pbVar37;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      }
      local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_f30 = "UnlockSanrioCollaboPoster2";
      iVar16 = FUN_0274bce0(&local_f58,&local_f38);
      if (iVar16 != 0) {
        local_f38 = (undefined **)0x32ea;
        FUN_0277d4ac(&local_f38);
        FUN_0277dedc(&local_f38);
        lVar54 = (*(code *)local_7d8[3])(&local_7d8);
        uVar18 = FUN_0277d6c4(&local_f38);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar25 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar54 + lVar25) = *(uint *)(lVar54 + lVar25) | 1 << (ulong)(uVar18 & 0x1f);
        }
      }
      lVar54 = *(long *)puVar9;
      pbVar37 = PTR_DAT_04bb32e0;
      if (lVar54 == 0) {
LAB_01cbc8ec:
        if (*pbVar37 < 8) goto LAB_01cbc964;
LAB_01cbc8f8:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbc95c:
          pbVar37 = PTR_DAT_04bb5038;
          goto LAB_01cbc964;
        }
        lVar54 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar54 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar54 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar54 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar54 + 0x471);
          }
        }
        bVar12 = *pbVar37;
        bVar11 = 7 < bVar12;
        if (bVar11) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (bVar11) goto LAB_01cbc95c;
      }
      else {
        if (*(int *)(lVar54 + 0x15c) != 0) {
          pbVar37 = (byte *)(lVar54 + 0x158);
        }
        if (7 < *pbVar37) {
          if ((*(int *)(lVar54 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01cbc8ec;
          }
          goto LAB_01cbc8f8;
        }
LAB_01cbc964:
        bVar12 = *pbVar37;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      }
      local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_f30 = "UnlockSanrioCollaboPoster3";
      iVar16 = FUN_0274bce0(&local_f58,&local_f38);
      if (iVar16 != 0) {
        local_f38 = (undefined **)0x32eb;
        FUN_0277d4ac(&local_f38);
        FUN_0277dedc(&local_f38);
        lVar54 = (*(code *)local_7d8[3])(&local_7d8);
        uVar18 = FUN_0277d6c4(&local_f38);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar25 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar54 + lVar25) = *(uint *)(lVar54 + lVar25) | 1 << (ulong)(uVar18 & 0x1f);
        }
      }
      lVar54 = *(long *)puVar9;
      pbVar37 = PTR_DAT_04bb32e0;
      if (lVar54 == 0) {
LAB_01cbca58:
        if (*pbVar37 < 8) goto LAB_01cbcad0;
LAB_01cbca64:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbcac8:
          pbVar37 = PTR_DAT_04bb5038;
          goto LAB_01cbcad0;
        }
        lVar54 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar54 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar54 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar54 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar54 + 0x471);
          }
        }
        bVar12 = *pbVar37;
        bVar11 = 7 < bVar12;
        if (bVar11) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (bVar11) goto LAB_01cbcac8;
      }
      else {
        if (*(int *)(lVar54 + 0x15c) != 0) {
          pbVar37 = (byte *)(lVar54 + 0x158);
        }
        if (7 < *pbVar37) {
          if ((*(int *)(lVar54 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01cbca58;
          }
          goto LAB_01cbca64;
        }
LAB_01cbcad0:
        bVar12 = *pbVar37;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      }
      local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_f30 = "UnlockSanrioCollaboPoster4";
      iVar16 = FUN_0274bce0(&local_f58,&local_f38);
      if (iVar16 != 0) {
        local_f38 = (undefined **)0x32ec;
        FUN_0277d4ac(&local_f38);
        FUN_0277dedc(&local_f38);
        lVar54 = (*(code *)local_7d8[3])(&local_7d8);
        uVar18 = FUN_0277d6c4(&local_f38);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar25 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar54 + lVar25) = *(uint *)(lVar54 + lVar25) | 1 << (ulong)(uVar18 & 0x1f);
        }
      }
      lVar54 = *(long *)puVar9;
      pbVar37 = PTR_DAT_04bb32e0;
      if (lVar54 == 0) {
LAB_01cbcbc4:
        if (*pbVar37 < 8) goto LAB_01cbcc3c;
LAB_01cbcbd0:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbcc34:
          pbVar37 = PTR_DAT_04bb5038;
          goto LAB_01cbcc3c;
        }
        lVar54 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar54 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar54 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar54 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar54 + 0x471);
          }
        }
        bVar12 = *pbVar37;
        bVar11 = 7 < bVar12;
        if (bVar11) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (bVar11) goto LAB_01cbcc34;
      }
      else {
        if (*(int *)(lVar54 + 0x15c) != 0) {
          pbVar37 = (byte *)(lVar54 + 0x158);
        }
        if (7 < *pbVar37) {
          if ((*(int *)(lVar54 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01cbcbc4;
          }
          goto LAB_01cbcbd0;
        }
LAB_01cbcc3c:
        bVar12 = *pbVar37;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      }
      local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_f30 = "UnlockSanrioCollaboPoster5";
      iVar16 = FUN_0274bce0(&local_f58,&local_f38);
      if (iVar16 != 0) {
        local_f38 = (undefined **)0x32ed;
        FUN_0277d4ac(&local_f38);
        FUN_0277dedc(&local_f38);
        lVar54 = (*(code *)local_7d8[3])(&local_7d8);
        uVar18 = FUN_0277d6c4(&local_f38);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar25 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar54 + lVar25) = *(uint *)(lVar54 + lVar25) | 1 << (ulong)(uVar18 & 0x1f);
        }
      }
      lVar54 = *(long *)puVar9;
      pbVar37 = PTR_DAT_04bb32e0;
      if (lVar54 == 0) {
LAB_01cbcd38:
        if (*pbVar37 < 8) goto LAB_01cbcdb0;
LAB_01cbcd44:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbcda8:
          pbVar37 = PTR_DAT_04bb5038;
          goto LAB_01cbcdb0;
        }
        lVar54 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar54 + 0x473);
        pbVar37 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar36 = (uint *)(lVar54 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar36 = (uint *)(lVar54 + 0x48);
          }
          if ((*puVar36 & 8) != 0) {
            pbVar37 = (byte *)(lVar54 + 0x471);
          }
        }
        bVar12 = *pbVar37;
        bVar11 = 7 < bVar12;
        if (bVar11) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
        if (bVar11) goto LAB_01cbcda8;
      }
      else {
        if (*(int *)(lVar54 + 0x15c) != 0) {
          pbVar37 = (byte *)(lVar54 + 0x158);
        }
        if (7 < *pbVar37) {
          if ((*(int *)(lVar54 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01cbcd38;
          }
          goto LAB_01cbcd44;
        }
LAB_01cbcdb0:
        bVar12 = *pbVar37;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_f58 = (undefined **)CONCAT71(local_f58._1_7_,bVar12);
      }
      local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_f30 = "UnlockSanrioCollaboPoster6";
      iVar16 = FUN_0274bce0(&local_f58,&local_f38);
      if (iVar16 != 0) {
        local_f38 = (undefined **)0x32ee;
        FUN_0277d4ac(&local_f38);
        FUN_0277dedc(&local_f38);
        lVar54 = (*(code *)local_7d8[3])(&local_7d8);
        uVar18 = FUN_0277d6c4(&local_f38);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar25 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar54 + lVar25) = *(uint *)(lVar54 + lVar25) | 1 << (ulong)(uVar18 & 0x1f);
        }
      }
      if ((*(byte *)(lVar53 + 0x9c) & 1) != 0) {
        local_f38 = (undefined **)0x29f5;
        FUN_0277d4ac(&local_f38);
        FUN_0277dedc(&local_f38);
        lVar53 = (*(code *)local_7d8[3])(&local_7d8);
        uVar18 = FUN_0277d6c4(&local_f38);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar54 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar53 + lVar54) = *(uint *)(lVar53 + lVar54) | 1 << (ulong)(uVar18 & 0x1f);
        }
      }
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar21 + 0x2ab18) != 0)) &&
         (puVar24 = *(undefined8 **)(*(long *)(lVar21 + 0x2ab18) + 8), puVar24 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar24)();
      }
      lVar21 = (*(code *)local_7d8[4])(&local_7d8);
      lVar53 = 0;
      iVar16 = 0;
      do {
        puVar36 = (uint *)(lVar21 + lVar53);
        lVar53 = lVar53 + 4;
        uVar14 = *puVar36 - (*puVar36 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        iVar16 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar16;
      } while (lVar53 != 0x754);
      if (iVar16 == 0) goto LAB_01cbb934;
      lVar53 = *(long *)PTR_DAT_04bb2698;
      if (lVar53 == 0) {
        pvVar22 = malloc((ulong)(uint)(iVar16 * 2));
      }
      else {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
        plVar26 = (long *)(lVar53 + 8);
        if (lVar21 != 0) {
          plVar26 = (long *)(lVar21 + 0xa8);
        }
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) break;
        pvVar22 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,(ulong)(uint)(iVar16 * 2),8);
      }
      if (pvVar22 != (void *)0x0) {
        *(int *)(param_1 + 0x59) = iVar16;
        param_1[0x5a] = pvVar22;
        lVar53 = (*(code *)local_7d8[4])(&local_7d8);
        uVar55 = 0;
        do {
          if ((*(uint *)(lVar53 + (uVar55 >> 5) * 4) >> (ulong)((uint)uVar55 & 0x1f) & 1) != 0)
          goto LAB_01cbd298;
          uVar14 = (uint)uVar55 + 1;
          uVar55 = (ulong)uVar14;
        } while (uVar14 != 15000);
        uVar55 = 0;
LAB_01cbd298:
        lVar21 = (*(code *)local_7d8[4])(&local_7d8);
        puVar1 = PTR_DAT_04bbfe58;
        puVar9 = PTR_DAT_04bb37e0;
        iVar16 = 15000;
        do {
          if ((*(uint *)(lVar21 + (ulong)(iVar16 - 1U >> 5) * 4) >> (ulong)(iVar16 - 1U & 0x1f) & 1)
              != 0) break;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (iVar16 != (int)uVar55) {
          uVar44 = 0;
LAB_01cbd304:
          plVar26 = (long *)(puVar1 + uVar55 * 8);
          if (0x752 < (uint)(uVar55 >> 3)) {
            plVar26 = (long *)puVar1;
          }
          plVar23 = (long *)puVar9;
          if ((uint)uVar55 < 0x3a99) {
            plVar23 = plVar26;
          }
          local_f38 = (undefined **)*plVar23;
          uVar13 = FUN_0277d6c4(&local_f38);
          *(undefined2 *)((long)pvVar22 + (-(uVar44 >> 0x1f) & 0xfffffffe00000000 | uVar44 << 1)) =
               uVar13;
          do {
            uVar14 = (int)uVar55 + 1;
            uVar55 = (ulong)uVar14;
            if (0x752 < uVar14 >> 3) {
              uVar14 = 0x3a95;
              goto LAB_01cbd360;
            }
          } while ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) == 0
                  );
          goto LAB_01cbd2f8;
        }
        goto LAB_01cbb934;
      }
    }
    break;
  case 0x1a:
    lVar53 = *(long *)PTR_DAT_04bb39b0;
    pbVar35 = PTR_DAT_04bb32e0;
    if (lVar53 == 0) {
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01cbafb8;
LAB_01cbb024:
      bVar12 = *pbVar35;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar35 = (byte *)(lVar53 + 0x158);
      }
      if ((*pbVar35 < 8) ||
         (((*(int *)(lVar53 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar35 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar35 < 8))))
      goto LAB_01cbb024;
LAB_01cbafb8:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbb01c:
        pbVar35 = PTR_DAT_04bb5038;
        goto LAB_01cbb024;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar35 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar35 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar35;
      bVar11 = 7 < bVar12;
      if (bVar11) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
      if (bVar11) goto LAB_01cbb01c;
    }
    local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_7d0 = "AlpCommuneTalkBeforeFlag";
    iVar16 = FUN_0274bce0(&local_f38,&local_7d8);
    lVar53 = *(long *)puVar1;
    *(bool *)(param_1 + 0x5b) = iVar16 != 0;
    pbVar35 = pbVar37;
    if (lVar53 == 0) {
      if (7 < *pbVar37) goto LAB_01cbb794;
LAB_01cbb800:
      bVar12 = *pbVar35;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar35 = (byte *)(lVar53 + 0x158);
      }
      if ((*pbVar35 < 8) ||
         (((*(int *)(lVar53 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar35 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar35 < 8))))
      goto LAB_01cbb800;
LAB_01cbb794:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbb7f8:
        pbVar35 = PTR_DAT_04bb5038;
        goto LAB_01cbb800;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar35 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar35 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar35;
      bVar11 = 7 < bVar12;
      if (bVar11) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
      if (bVar11) goto LAB_01cbb7f8;
    }
    local_7d8 = (undefined **)(puVar9 + 0x10);
    local_7d0 = "FenceRemakeEnable";
    iVar16 = FUN_0274bce0(&local_f38,&local_7d8);
    *(bool *)((long)param_1 + 0x2d9) = iVar16 != 0;
    lVar53 = *(long *)puVar1;
    if (lVar53 == 0) {
LAB_01cbb880:
      if (*pbVar37 < 8) goto LAB_01cbb8f8;
LAB_01cbb88c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01cbb8f0:
        pbVar37 = PTR_DAT_04bb5038;
        goto LAB_01cbb8f8;
      }
      lVar53 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar53 + 0x473);
      pbVar37 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar36 = (uint *)(lVar53 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar36 = (uint *)(lVar53 + 0x48);
        }
        if ((*puVar36 & 8) != 0) {
          pbVar37 = (byte *)(lVar53 + 0x471);
        }
      }
      bVar12 = *pbVar37;
      bVar11 = 7 < bVar12;
      if (bVar11) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
      if (bVar11) goto LAB_01cbb8f0;
    }
    else {
      if (*(int *)(lVar53 + 0x15c) != 0) {
        pbVar37 = (byte *)(lVar53 + 0x158);
      }
      if (7 < *pbVar37) {
        if ((*(int *)(lVar53 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01cbb880;
        }
        goto LAB_01cbb88c;
      }
LAB_01cbb8f8:
      bVar12 = *pbVar37;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_f38 = (undefined **)CONCAT71(local_f38._1_7_,bVar12);
    }
    local_7d8 = (undefined **)(puVar9 + 0x10);
    local_7d0 = "ExplainIslandRegulation";
    iVar16 = FUN_0274bce0(&local_f38,&local_7d8);
    *(bool *)((long)param_1 + 0x2da) = iVar16 != 0;
    goto LAB_01cbb934;
  }
  bVar12 = 0;
LAB_01cbf394:
  if (lVar59 != 1) {
    lVar53 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
    *(long *)(lVar53 + 0xa8) = lVar59;
  }
  return bVar12 & 1;
  while( true ) {
    uVar18 = uVar14 + 1;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_01cbd2f0;
    if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
    goto LAB_01cbd2f4;
    uVar14 = uVar14 - 3;
    if (uVar14 == 0xfffffffd) break;
LAB_01cbd360:
    uVar18 = uVar14 + 2;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
LAB_01cbd2f0:
      uVar14 = uVar18;
LAB_01cbd2f4:
      uVar55 = (ulong)(uVar14 + 1);
      goto LAB_01cbd2f8;
    }
  }
  uVar55 = 0;
LAB_01cbd2f8:
  uVar44 = (ulong)((int)uVar44 + 1);
  if (iVar16 == (int)uVar55) goto LAB_01cbd5d0;
  goto LAB_01cbd304;
LAB_01cbd5d0:
  bVar12 = 1;
  goto LAB_01cbf394;
  while( true ) {
    uVar17 = uVar18 + 1;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0)
    goto LAB_01cbff64;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_01cbff68;
    uVar18 = uVar18 - 3;
    if (uVar18 == 0xfffffffd) break;
LAB_01cc0634:
    uVar17 = uVar18 + 2;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0) {
LAB_01cbff64:
      uVar18 = uVar17;
LAB_01cbff68:
      uVar44 = (ulong)(uVar18 + 1);
      goto LAB_01cbff6c;
    }
  }
  uVar44 = 0;
LAB_01cbff6c:
  uVar14 = uVar14 + 1;
  bVar12 = true;
  if (iVar16 == (int)uVar44) goto LAB_01cbff44;
  goto LAB_01cbff7c;
  while( true ) {
    uVar17 = uVar18 + 1;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0)
    goto LAB_01cbf3d0;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_01cbf3d4;
    uVar18 = uVar18 - 3;
    if (uVar18 == 0xfffffffd) break;
LAB_01cbfa60:
    uVar17 = uVar18 + 2;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0) {
LAB_01cbf3d0:
      uVar18 = uVar17;
LAB_01cbf3d4:
      uVar55 = (ulong)(uVar18 + 1);
      goto LAB_01cbf3d8;
    }
  }
  uVar55 = 0;
LAB_01cbf3d8:
  uVar14 = uVar14 + 1;
  bVar12 = true;
  if (iVar16 == (int)uVar55) goto LAB_01cbf36c;
  goto LAB_01cbf3e8;
  while( true ) {
    uVar17 = uVar18 + 1;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0)
    goto LAB_01cbea18;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_01cbea1c;
    uVar18 = uVar18 - 3;
    if (uVar18 == 0xfffffffd) break;
LAB_01cbf0a0:
    uVar17 = uVar18 + 2;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0) {
LAB_01cbea18:
      uVar18 = uVar17;
LAB_01cbea1c:
      uVar55 = (ulong)(uVar18 + 1);
      goto LAB_01cbea20;
    }
  }
  uVar55 = 0;
LAB_01cbea20:
  uVar14 = uVar14 + 1;
  bVar12 = true;
  if (iVar16 == (int)uVar55) goto LAB_01cbf36c;
  goto LAB_01cbea30;
  while( true ) {
    uVar61 = uVar17 + 1;
    if ((*(uint *)(lVar53 + (ulong)(uVar61 >> 5) * 4) >> (ulong)(uVar61 & 0x1f) & 1) != 0)
    goto LAB_01cbd9e4;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0)
    goto LAB_01cbd9e8;
    uVar17 = uVar17 - 3;
    if (uVar17 == 0xfffffffd) break;
LAB_01cbda80:
    uVar61 = uVar17 + 2;
    if ((*(uint *)(lVar53 + (ulong)(uVar61 >> 5) * 4) >> (ulong)(uVar61 & 0x1f) & 1) != 0) {
LAB_01cbd9e4:
      uVar17 = uVar61;
LAB_01cbd9e8:
      uVar55 = (ulong)(uVar17 + 1);
      goto LAB_01cbd9ec;
    }
  }
  uVar55 = 0;
LAB_01cbd9ec:
  puVar45 = puVar52;
  if (iVar16 == (int)uVar55) goto LAB_01cbdacc;
  goto LAB_01cbd9f4;
LAB_01cbdacc:
  if (1 < (int)uVar14) {
    uVar17 = 0;
    uVar18 = uVar14 - 1;
    do {
      if ((int)uVar18 <= (int)uVar17) break;
      uVar44 = (ulong)uVar17;
      uVar31 = (ulong)uVar18;
      uVar55 = uVar44;
      uVar18 = uVar17;
      do {
        puVar45 = puVar41 + uVar55;
        iVar16 = FUN_01a4e630(*puVar45,puVar45[1]);
        if (0 < iVar16) {
          uVar40 = puVar45[1];
          uVar18 = (uint)uVar55;
          puVar45[1] = puVar41[uVar55];
          puVar41[uVar55] = uVar40;
        }
        uVar55 = uVar55 + 1;
      } while (uVar31 != uVar55);
      if ((int)uVar18 <= (int)uVar17) break;
      uVar55 = (ulong)uVar18;
      uVar17 = uVar18;
      do {
        puVar45 = puVar41 + uVar55;
        iVar16 = FUN_01a4e630(*puVar45,puVar45[-1]);
        if (iVar16 < 0) {
          uVar40 = puVar45[-1];
          uVar17 = (uint)uVar55;
          puVar45[-1] = puVar41[uVar55];
          puVar41[uVar55] = uVar40;
        }
        uVar55 = uVar55 - 1;
      } while ((long)uVar44 < (long)uVar55);
    } while (uVar17 != uVar18);
  }
  plVar26 = (long *)PTR_DAT_04bb2698;
  plVar27 = (long *)PTR_DAT_04bb3350;
  if (uVar14 != 0) {
    uVar55 = (ulong)(int)uVar14;
    uVar44 = 0;
    lVar53 = uVar55 << 3;
    lVar21 = param_1[0x3e];
    puVar45 = puVar41;
    do {
      uVar13 = FUN_0277d6c4(*puVar45);
      uVar31 = uVar44 << 1;
      uVar50 = uVar44 >> 0x1f;
      uVar44 = (ulong)((int)uVar44 + 1);
      lVar53 = lVar53 + -8;
      *(undefined2 *)(lVar21 + (-uVar50 & 0xfffffffe00000000 | uVar31)) = uVar13;
      plVar27 = (long *)PTR_DAT_04bb3350;
      puVar45 = puVar45 + 1;
    } while (lVar53 != 0);
    if (puVar41 != (undefined8 *)0x0) {
      if (0 < (int)uVar14) {
        uVar44 = uVar55 & 3;
        if (uVar14 < 4) {
          lVar53 = 0;
        }
        else {
          lVar53 = 0;
          puVar45 = puVar41 + 2;
          do {
            puVar49 = (undefined8 *)puVar45[-2];
            lVar53 = lVar53 + -4;
            *puVar49 = puVar52;
            puVar52 = (undefined8 *)puVar45[-1];
            *puVar52 = puVar49;
            puVar49 = (undefined8 *)*puVar45;
            *puVar49 = puVar52;
            puVar52 = (undefined8 *)puVar45[1];
            puVar45 = puVar45 + 4;
            *puVar52 = puVar49;
          } while (-lVar53 != (uVar55 & 0xfffffffffffffffc));
          lVar53 = -lVar53;
        }
        if (uVar44 != 0) {
          puVar41 = puVar41 + lVar53;
          do {
            puVar45 = (undefined8 *)*puVar41;
            uVar44 = uVar44 - 1;
            *puVar45 = puVar52;
            puVar41 = puVar41 + 1;
            puVar52 = puVar45;
          } while (uVar44 != 0);
        }
      }
      goto LAB_01cbfd50;
    }
    bVar12 = 1;
LAB_01cbdf00:
    goto LAB_01cbf394;
  }
joined_r0x01cbdc0c:
  if (puVar41 != (undefined8 *)0x0) {
LAB_01cbfd50:
    if (*plVar26 == 0) {
      free(puVar24);
    }
    else {
      plVar26 = (long *)FUN_038cb610(*plVar26,puVar24);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x38))(plVar26,puVar24);
      }
    }
  }
LAB_01cbb934:
  bVar12 = 1;
  goto LAB_01cbf394;
  while( true ) {
    uVar18 = uVar14 + 1;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_01cbb9c0;
    if ((*(uint *)(lVar53 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
    goto LAB_01cbb9c4;
    uVar14 = uVar14 - 3;
    if (uVar14 == 0xfffffffd) break;
LAB_01cbbd00:
    uVar18 = uVar14 + 2;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
LAB_01cbb9c0:
      uVar14 = uVar18;
LAB_01cbb9c4:
      uVar55 = (ulong)(uVar14 + 1);
      goto LAB_01cbb9c8;
    }
  }
  uVar55 = 0;
LAB_01cbb9c8:
  if (iVar16 == (int)uVar55) goto LAB_01cbb2d4;
  goto LAB_01cbb9d0;
LAB_01cbfbf8:
  bVar12 = false;
LAB_01cbf36c:
  if ((((local_f80 & 1) != 0) && (*(long *)(local_f90 + 0x1100) != 0)) &&
     (puVar24 = *(undefined8 **)(*(long *)(local_f90 + 0x1100) + 8), puVar24 != (undefined8 *)0x0))
  {
    (**(code **)*puVar24)();
  }
LAB_01cbf38c:
  plVar27 = (long *)PTR_DAT_04bb3350;
  goto LAB_01cbf394;
  while( true ) {
    uVar17 = uVar18 + 1;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0)
    goto LAB_01cbe0c0;
    if ((*(uint *)(lVar53 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_01cbe0c4;
    uVar18 = uVar18 - 3;
    if (uVar18 == 0xfffffffd) break;
LAB_01cbe750:
    uVar17 = uVar18 + 2;
    if ((*(uint *)(lVar53 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0) {
LAB_01cbe0c0:
      uVar18 = uVar17;
LAB_01cbe0c4:
      uVar55 = (ulong)(uVar18 + 1);
      goto LAB_01cbe0c8;
    }
  }
  uVar55 = 0;
LAB_01cbe0c8:
  uVar14 = uVar14 + 1;
  bVar12 = true;
  if (iVar16 == (int)uVar55) goto LAB_01cbf36c;
  goto LAB_01cbe0d8;
}

