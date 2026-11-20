
undefined8
FUN_03f11f80(long param_1,short *param_2,long *param_3,undefined8 param_4,uint param_5,uint param_6)

{
  undefined *puVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined *puVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  void *pvVar33;
  undefined4 *puVar34;
  long *plVar35;
  undefined8 uVar36;
  long *plVar37;
  long *plVar38;
  ulong *puVar39;
  long lVar40;
  undefined1 uVar41;
  undefined4 uVar42;
  uint uVar43;
  int iVar44;
  ulong uVar45;
  short *psVar46;
  char *pcVar47;
  ulong *puVar48;
  uint *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  uint uVar52;
  ulong uVar53;
  ulong *puVar54;
  uint uVar55;
  char *pcVar56;
  ulong uVar57;
  size_t sVar58;
  undefined8 *puVar59;
  long lVar60;
  uint *puVar61;
  short *psVar62;
  undefined1 auVar63 [16];
  uint *local_108;
  undefined *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 auStack_d8 [16];
  uint *local_c8;
  uint *puStack_c0;
  undefined8 local_b8;
  uint *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  int local_64;
  
  plVar38 = (long *)PTR_DAT_04bb2698;
  uVar55 = param_5 - 1;
  if (0 < (int)param_5) {
    lVar60 = *(long *)PTR_DAT_04bb2698;
    if (lVar60 == 0) {
      pvVar33 = malloc((long)(int)(param_5 * 0x1a0));
    }
    else {
      plVar32 = param_3;
      if (param_3 == (long *)0x0) {
        lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar32 = (long *)(lVar60 + 8);
        if (lVar31 != 0) {
          plVar32 = (long *)(lVar31 + 0xa8);
        }
        plVar32 = (long *)*plVar32;
        if (plVar32 == (long *)0x0) goto LAB_03f120ac;
      }
      pvVar33 = (void *)(**(code **)(*plVar32 + 0x30))(plVar32,(long)(int)(param_5 * 0x1a0),8);
    }
    if (pvVar33 != (void *)0x0) {
      *(void **)(param_1 + 0x170) = pvVar33;
      if (1 < param_5) {
        if (uVar55 == 1) {
          uVar57 = 0;
        }
        else {
          uVar57 = 0;
          plVar32 = (long *)((long)pvVar33 + 0x1a0);
          do {
            uVar57 = uVar57 + 2;
            plVar32[-0x34] = (long)plVar32;
            *plVar32 = (long)(plVar32 + 0x34);
            plVar32 = plVar32 + 0x68;
          } while (((ulong)uVar55 & 0xfffffffe) != uVar57);
        }
        if ((uVar55 & 1) != 0) {
          plVar32 = (long *)((long)pvVar33 + uVar57 * 0x1a0);
          *plVar32 = (long)(plVar32 + 0x34);
        }
      }
      *(undefined8 *)((long)pvVar33 + (long)(int)(uVar55 * 0x34) * 8) = 0;
      *(void **)(param_1 + 0x178) = pvVar33;
      *(uint *)(param_1 + 0x180) = param_5;
    }
  }
LAB_03f120ac:
  uVar55 = param_6 - 1;
  if (0 < (int)param_6) {
    lVar60 = *plVar38;
    if (lVar60 == 0) {
      pvVar33 = malloc((long)(int)(param_6 * 0x50));
joined_r0x03f12120:
      if (pvVar33 != (void *)0x0) {
        *(void **)(param_1 + 0x1a0) = pvVar33;
        if (param_6 < 2) {
          lVar60 = 0;
        }
        else {
          if (uVar55 == 1) {
            uVar57 = 0;
          }
          else {
            uVar57 = 0;
            plVar32 = (long *)((long)pvVar33 + 0x50);
            do {
              uVar57 = uVar57 + 2;
              plVar32[-10] = (long)plVar32;
              *plVar32 = (long)(plVar32 + 10);
              plVar32 = plVar32 + 0x14;
            } while (((ulong)uVar55 & 0xfffffffe) != uVar57);
          }
          if ((uVar55 & 1) != 0) {
            plVar32 = (long *)((long)pvVar33 + uVar57 * 0x50);
            *plVar32 = (long)(plVar32 + 10);
          }
          lVar60 = (long)(int)(uVar55 * 10);
        }
        *(undefined8 *)((long)pvVar33 + lVar60 * 8) = 0;
        *(void **)(param_1 + 0x1a8) = pvVar33;
        *(uint *)(param_1 + 0x1b0) = param_6;
      }
      lVar60 = *plVar38;
      sVar58 = ((ulong)param_6 + (ulong)param_6 * 4) * 8;
      if (lVar60 == 0) goto LAB_03f1221c;
      if (param_3 == (long *)0x0) {
LAB_03f121d4:
        lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar32 = (long *)(lVar60 + 8);
        if (lVar31 != 0) {
          plVar32 = (long *)(lVar31 + 0xa8);
        }
        plVar32 = (long *)*plVar32;
        if (plVar32 == (long *)0x0) goto LAB_03f12294;
      }
      else {
        plVar32 = param_3;
      }
      pvVar33 = (void *)(**(code **)(*plVar32 + 0x30))(plVar32,sVar58,8);
    }
    else {
      plVar32 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03f120fc:
        pvVar33 = (void *)(**(code **)(*plVar32 + 0x30))(plVar32,(long)(int)(param_6 * 0x50),8);
        goto joined_r0x03f12120;
      }
      lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar32 = (long *)(lVar60 + 8);
      if (lVar31 != 0) {
        plVar32 = (long *)(lVar31 + 0xa8);
      }
      plVar32 = (long *)*plVar32;
      if (plVar32 != (long *)0x0) goto LAB_03f120fc;
      lVar60 = *plVar38;
      sVar58 = ((ulong)param_6 + (ulong)param_6 * 4) * 8;
      if (lVar60 != 0) goto LAB_03f121d4;
LAB_03f1221c:
      pvVar33 = malloc(sVar58);
    }
    if (pvVar33 != (void *)0x0) {
      *(void **)(param_1 + 0x1c8) = pvVar33;
      if (1 < param_6) {
        if (uVar55 == 1) {
          uVar57 = 0;
        }
        else {
          uVar57 = 0;
          plVar32 = (long *)((long)pvVar33 + 0x20);
          do {
            uVar57 = uVar57 + 2;
            plVar32[-4] = (long)plVar32;
            *plVar32 = (long)(plVar32 + 4);
            plVar32 = plVar32 + 8;
          } while (((ulong)uVar55 & 0xfffffffe) != uVar57);
        }
        if ((uVar55 & 1) != 0) {
          plVar32 = (long *)((long)pvVar33 + uVar57 * 0x20);
          *plVar32 = (long)(plVar32 + 4);
        }
      }
      *(undefined8 *)((long)pvVar33 + (long)(int)(uVar55 * 4) * 8) = 0;
      pvVar2 = (void *)((long)pvVar33 + (ulong)param_6 * 0x20);
      *(void **)(param_1 + 0x1d0) = pvVar33;
      if (pvVar2 != (void *)0x0) {
        *(void **)(param_1 + 0x1c0) = pvVar2;
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        *(uint *)(param_1 + 0x1bc) = param_6;
      }
    }
  }
LAB_03f12294:
  param_6 = param_6 * 2;
  uVar57 = (ulong)param_6;
  if ((int)param_6 < 1) {
LAB_03f12380:
    lVar60 = *plVar38;
    if (lVar60 == 0) {
LAB_03f129e4:
      puVar34 = malloc(0x100);
    }
    else {
LAB_03f12388:
      plVar32 = param_3;
      if (param_3 == (long *)0x0) goto LAB_03f12390;
LAB_03f123bc:
      puVar34 = (undefined4 *)(**(code **)(*plVar32 + 0x30))(plVar32,0x100,8);
    }
    if (puVar34 != (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0x1e8) = puVar34;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *puVar34 = 1;
      puVar34[8] = 2;
      puVar34[0x10] = 3;
      puVar34[0x18] = 4;
      puVar34[0x20] = 5;
      puVar34[0x28] = 6;
      puVar34[0x30] = 7;
      puVar34[0x38] = 0xffffffff;
    }
    lVar60 = *plVar38;
    if (lVar60 == 0) goto LAB_03f12494;
    if (param_3 != (long *)0x0) {
      plVar32 = param_3;
LAB_03f1246c:
      pvVar33 = (void *)(**(code **)(*plVar32 + 0x30))(plVar32,0x40,8);
      goto joined_r0x03f12480;
    }
LAB_03f12440:
    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar32 = (long *)(lVar60 + 8);
    if (lVar31 != 0) {
      plVar32 = (long *)(lVar31 + 0xa8);
    }
    plVar32 = (long *)*plVar32;
    if (plVar32 != (long *)0x0) goto LAB_03f1246c;
LAB_03f124a0:
    uVar57 = (ulong)*(uint *)(param_1 + 0x1f8);
    if (0 < (int)*(uint *)(param_1 + 0x1f8)) goto LAB_03f124ac;
  }
  else {
    lVar60 = *plVar38;
    if (lVar60 == 0) {
      puVar34 = malloc(uVar57 << 3);
joined_r0x03f1237c:
      if (puVar34 == (undefined4 *)0x0) goto LAB_03f12380;
      uVar45 = uVar57 & 6;
      puVar51 = puVar34;
      if ((param_6 & 6) != 0) {
        puVar50 = puVar34;
        do {
          uVar45 = uVar45 - 1;
          puVar51 = puVar50 + 2;
          *puVar50 = 0;
          puVar50 = puVar51;
        } while (uVar45 != 0);
      }
      if (6 < (uVar57 - 1 & 0x1fffffffffffffff)) {
        do {
          *puVar51 = 0;
          puVar51[2] = 0;
          puVar51[4] = 0;
          puVar51[6] = 0;
          puVar51[8] = 0;
          puVar51[10] = 0;
          puVar51[0xc] = 0;
          puVar51[0xe] = 0;
          puVar51 = puVar51 + 0x10;
        } while (puVar51 != puVar34 + uVar57 * 2);
      }
      *(undefined4 **)(param_1 + 0x1d8) = puVar34;
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      *(uint *)(param_1 + 0x1e4) = param_6;
      lVar60 = *plVar38;
      if (lVar60 != 0) goto LAB_03f12388;
      goto LAB_03f129e4;
    }
    plVar32 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03f122e0:
      puVar34 = (undefined4 *)(**(code **)(*plVar32 + 0x30))(plVar32,uVar57 << 3,8);
      goto joined_r0x03f1237c;
    }
    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar32 = (long *)(lVar60 + 8);
    if (lVar31 != 0) {
      plVar32 = (long *)(lVar31 + 0xa8);
    }
    plVar32 = (long *)*plVar32;
    if (plVar32 != (long *)0x0) goto LAB_03f122e0;
    lVar60 = *plVar38;
    if (lVar60 == 0) goto LAB_03f129e4;
LAB_03f12390:
    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar32 = (long *)(lVar60 + 8);
    if (lVar31 != 0) {
      plVar32 = (long *)(lVar31 + 0xa8);
    }
    plVar32 = (long *)*plVar32;
    if (plVar32 != (long *)0x0) goto LAB_03f123bc;
    lVar60 = *plVar38;
    if (lVar60 != 0) goto LAB_03f12440;
LAB_03f12494:
    pvVar33 = malloc(0x40);
joined_r0x03f12480:
    if (pvVar33 == (void *)0x0) goto LAB_03f124a0;
    uVar57 = 8;
    *(void **)(param_1 + 0x200) = pvVar33;
    *(undefined4 *)(param_1 + 0x1f8) = 8;
LAB_03f124ac:
    uVar45 = uVar57 & 3;
    if (uVar57 - 1 < 3) {
      uVar53 = 0;
    }
    else {
      uVar53 = 0;
      do {
        lVar60 = uVar53 * 8;
        uVar53 = uVar53 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x200) + lVar60) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x200) + lVar60 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x200) + lVar60 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x200) + lVar60 + 0x18) = 0;
      } while ((uVar57 & 0xfffffffc) != uVar53);
    }
    if (uVar45 != 0) {
      lVar60 = uVar53 << 3;
      do {
        uVar45 = uVar45 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x200) + lVar60) = 0;
        lVar60 = lVar60 + 8;
      } while (uVar45 != 0);
    }
  }
  if ((param_2 == (short *)0x0) || (uVar57 = FUN_03b36f10(param_2), (uVar57 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  else {
    uVar29 = *(uint *)(param_2 + 6);
    uVar55 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
    uVar55 = uVar55 >> 0x10 | uVar55 << 0x10;
    if (*param_2 != 0x5942) {
      uVar55 = uVar29;
    }
    lVar60 = 0;
    if (uVar55 != 0) {
      lVar60 = (long)param_2 + (ulong)uVar55;
    }
    *(short **)(param_1 + 0x10) = param_2;
    *(long *)(param_1 + 0x18) = lVar60;
  }
  plVar32 = (long *)(param_1 + 0x10);
  local_88._0_8_ = (ulong)(uint3)local_88._5_3_ << 0x28;
  uVar57 = FUN_03b36b40(plVar32,local_88,"Version");
  if (((uVar57 & 1) == 0) || (local_88[4] != -0x2f)) {
    uVar36 = 0;
    uVar42 = 3;
    goto LAB_03f129b4;
  }
  if (local_88._0_4_ != 3) {
    uVar36 = 0;
    uVar42 = 4;
    if (2 < (int)local_88._0_4_) {
      uVar42 = 5;
    }
    goto LAB_03f129b4;
  }
  local_88._0_8_ = local_88._0_8_ & 0xffffff0000000000;
  uVar57 = FUN_03b36b40(plVar32,local_88,"GlobalProperty");
  auVar10._8_8_ = local_98._8_8_;
  auVar10._0_8_ = local_98._0_8_;
  auVar9._8_8_ = local_98._8_8_;
  auVar9._0_8_ = local_98._0_8_;
  auVar8._8_8_ = local_98._8_8_;
  auVar8._0_8_ = local_98._0_8_;
  auVar63._8_8_ = local_98._8_8_;
  auVar63._0_8_ = local_98._0_8_;
  if ((uVar57 & 1) != 0) {
    local_98 = auVar10;
    if (local_88[4] - 0xc0 < 2) {
      psVar46 = (short *)*plVar32;
      local_88._8_8_ = (long)psVar46 + (local_88._0_8_ & 0xffffffff);
      local_88._0_8_ = psVar46;
      local_98 = auVar63;
      if ((psVar46 != (short *)0x0) && (local_98 = auVar8, (*(uint *)local_88._8_8_ & 0xfe) == 0xc0)
         ) {
        uVar55 = *(uint *)local_88._8_8_ >> 8;
        if (*psVar46 == 0x5942) {
          uVar55 = uVar55 & 0xff00 | *(uint *)local_88._8_8_ >> 0x18 | (uVar55 & 0xff) << 0x10;
        }
        uVar57 = (ulong)uVar55;
        local_98 = auVar9;
        if (uVar55 != 0) {
          lVar60 = *plVar38;
          *(uint *)(param_1 + 0xe4) = uVar55;
          if (lVar60 == 0) {
            pvVar33 = malloc(uVar57 << 3);
            *(void **)(param_1 + 0xe8) = pvVar33;
LAB_03f12a08:
            pvVar33 = malloc(uVar57);
            *(void **)(param_1 + 0xf0) = pvVar33;
LAB_03f12a14:
            pvVar33 = malloc(uVar57);
            *(void **)(param_1 + 0xf8) = pvVar33;
LAB_03f12a24:
            pvVar33 = malloc(uVar57 << 2);
          }
          else {
            plVar35 = param_3;
            if (param_3 == (long *)0x0) {
              lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar35 = (long *)(lVar60 + 8);
              if (lVar31 != 0) {
                plVar35 = (long *)(lVar31 + 0xa8);
              }
              plVar35 = (long *)*plVar35;
              if (plVar35 != (long *)0x0) goto LAB_03f12678;
              lVar60 = *plVar38;
              *(undefined8 *)(param_1 + 0xe8) = 0;
              if (lVar60 == 0) goto LAB_03f12a08;
LAB_03f14570:
              lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar35 = (long *)(lVar60 + 8);
              if (lVar31 != 0) {
                plVar35 = (long *)(lVar31 + 0xa8);
              }
              plVar35 = (long *)*plVar35;
              if (plVar35 != (long *)0x0) goto LAB_03f1459c;
              lVar60 = *plVar38;
              *(undefined8 *)(param_1 + 0xf0) = 0;
              if (lVar60 == 0) goto LAB_03f12a14;
LAB_03f14b14:
              lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar35 = (long *)(lVar60 + 8);
              if (lVar31 != 0) {
                plVar35 = (long *)(lVar31 + 0xa8);
              }
              plVar35 = (long *)*plVar35;
              if (plVar35 != (long *)0x0) goto LAB_03f14b40;
              lVar60 = *plVar38;
              *(undefined8 *)(param_1 + 0xf8) = 0;
              if (lVar60 == 0) goto LAB_03f12a24;
LAB_03f14b80:
              lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar35 = (long *)(lVar60 + 8);
              if (lVar31 != 0) {
                plVar35 = (long *)(lVar31 + 0xa8);
              }
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) {
                pvVar33 = (void *)0x0;
                goto LAB_03f12a30;
              }
            }
            else {
LAB_03f12678:
              uVar36 = (**(code **)(*plVar35 + 0x30))(plVar35,uVar57 << 3,8);
              lVar60 = *plVar38;
              *(undefined8 *)(param_1 + 0xe8) = uVar36;
              if (lVar60 == 0) goto LAB_03f12a08;
              if (param_3 == (long *)0x0) goto LAB_03f14570;
              plVar35 = param_3;
LAB_03f1459c:
              uVar36 = (**(code **)(*plVar35 + 0x30))(plVar35,uVar57,8);
              lVar60 = *plVar38;
              *(undefined8 *)(param_1 + 0xf0) = uVar36;
              if (lVar60 == 0) goto LAB_03f12a14;
              if (param_3 == (long *)0x0) goto LAB_03f14b14;
              plVar35 = param_3;
LAB_03f14b40:
              uVar36 = (**(code **)(*plVar35 + 0x30))(plVar35,uVar57,8);
              lVar60 = *plVar38;
              *(undefined8 *)(param_1 + 0xf8) = uVar36;
              if (lVar60 == 0) goto LAB_03f12a24;
              if (param_3 == (long *)0x0) goto LAB_03f14b80;
              plVar35 = param_3;
            }
            pvVar33 = (void *)(**(code **)(*plVar35 + 0x30))(plVar35,uVar57 << 2,8);
          }
LAB_03f12a30:
          local_108 = (uint *)(param_1 + 0xe8);
          memset(pvVar33,0,uVar57 << 2);
          *(void **)(param_1 + 0x100) = pvVar33;
          lVar60 = *plVar38;
          uVar55 = uVar55 << 1;
          sVar58 = (ulong)uVar55 << 3;
          if (lVar60 == 0) {
            puVar34 = malloc(sVar58);
LAB_03f13634:
            if (puVar34 != (undefined4 *)0x0) {
              uVar53 = uVar57 * 0x10 - 8;
              uVar29 = ((uint)(uVar53 >> 3) & 0x1fffffff) + 1;
              uVar45 = (ulong)uVar29 & 6;
              puVar51 = puVar34;
              if ((uVar29 & 6) != 0) {
                puVar50 = puVar34;
                do {
                  uVar45 = uVar45 - 1;
                  puVar51 = puVar50 + 2;
                  *puVar50 = 0;
                  puVar50 = puVar51;
                } while (uVar45 != 0);
              }
              if (0x37 < uVar53) {
                do {
                  *puVar51 = 0;
                  puVar51[2] = 0;
                  puVar51[4] = 0;
                  puVar51[6] = 0;
                  puVar51[8] = 0;
                  puVar51[10] = 0;
                  puVar51[0xc] = 0;
                  puVar51[0xe] = 0;
                  puVar51 = puVar51 + 0x10;
                } while (puVar51 != puVar34 + (ulong)uVar55 * 2);
              }
              *(undefined4 **)(param_1 + 0x118) = puVar34;
              *(undefined4 *)(param_1 + 0x120) = 0;
              *(uint *)(param_1 + 0x124) = uVar55;
            }
          }
          else {
            plVar38 = param_3;
            if (param_3 != (long *)0x0) {
LAB_03f12a88:
              puVar34 = (undefined4 *)(**(code **)(*plVar38 + 0x30))(plVar38,sVar58,8);
              goto LAB_03f13634;
            }
            lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar38 = (long *)(lVar60 + 8);
            if (lVar31 != 0) {
              plVar38 = (long *)(lVar31 + 0xa8);
            }
            plVar38 = (long *)*plVar38;
            if (plVar38 != (long *)0x0) goto LAB_03f12a88;
          }
          uVar45 = 0;
          uVar55 = 0;
          do {
            auVar63 = FUN_03b36a34(local_88,uVar45 & 0xffffffff);
            psVar46 = auVar63._0_8_;
            local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
            local_98 = auVar63;
            uVar53 = FUN_03b36b40(local_98,local_a8,&DAT_040a1c2c);
            lVar60 = 0;
            if (((uVar53 & 1) != 0) && (local_a8[4] == -0x60)) {
              uVar30 = *(uint *)(psVar46 + 4);
              uVar29 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
              uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
              if (*psVar46 != 0x5942) {
                uVar29 = uVar30;
              }
              if (uVar29 == 0) {
                lVar60 = 0;
              }
              else {
                uVar52 = *(uint *)((long)psVar46 +
                                  (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar29 + 4);
                uVar30 = (uVar52 & 0xff00ff00) >> 8 | (uVar52 & 0xff00ff) << 8;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                if (*psVar46 != 0x5942) {
                  uVar30 = uVar52;
                }
                lVar60 = (long)psVar46 + (ulong)uVar30 + (long)(int)uVar29;
              }
            }
            *(long *)(*(long *)local_108 + uVar45 * 8) = lVar60;
            uVar29 = FUN_006bd550(lVar60,0);
            if (uVar29 != 0) {
              uVar30 = *(uint *)(param_1 + 0x124);
              uVar52 = 0;
              if (uVar30 != 0) {
                uVar52 = uVar29 / uVar30;
              }
              uVar52 = uVar29 - uVar52 * uVar30;
              uVar43 = uVar52;
              do {
                uVar4 = *(uint *)(*(long *)(param_1 + 0x118) +
                                 (-(ulong)(uVar43 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar43 << 3
                                 ));
                if (uVar4 == 0) {
                  puVar49 = (uint *)(*(long *)(param_1 + 0x118) + (long)(int)uVar43 * 8);
                  *puVar49 = uVar29;
                  puVar49[1] = (uint)uVar45;
                  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
                  break;
                }
                if (uVar4 == uVar29) break;
                uVar4 = 0;
                if ((int)(uVar43 + 1) < (int)uVar30) {
                  uVar4 = uVar43 + 1;
                }
                uVar43 = uVar4;
              } while (uVar4 != uVar52);
            }
            local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
            uVar53 = FUN_03b36b40(local_98,local_a8,&DAT_040fe5ab);
            if (((uVar53 & 1) == 0) || (local_a8[4] != -0x60)) {
LAB_03f13860:
              pcVar47 = (char *)0x0;
LAB_03f13864:
              uVar53 = 0;
              bVar26 = true;
              do {
                if (pcVar47[uVar53] != (&DAT_040ae865)[uVar53]) break;
                if (pcVar47[uVar53] == '\0') {
                  if (bVar26) goto LAB_03f13a64;
                  break;
                }
                if (pcVar47[uVar53 + 1] != (&DAT_040ae866)[uVar53]) break;
                if (pcVar47[uVar53 + 1] == '\0') goto LAB_03f13a64;
                if (pcVar47[uVar53 + 2] != (&DAT_040ae867)[uVar53]) break;
                if (pcVar47[uVar53 + 2] == '\0') goto LAB_03f13a64;
                bVar26 = uVar53 < 0x7fffe;
                uVar53 = uVar53 + 3;
              } while (uVar53 != 0x80001);
              if (pcVar47 == "Float") {
LAB_03f13a6c:
                uVar41 = 1;
              }
              else {
                uVar53 = 0;
                bVar26 = true;
                do {
                  if (pcVar47[uVar53] != "Float"[uVar53]) break;
                  if (pcVar47[uVar53] == '\0') {
                    if (bVar26) goto LAB_03f13a6c;
                    break;
                  }
                  if (pcVar47[uVar53 + 1] != "Float"[uVar53 + 1]) break;
                  if (pcVar47[uVar53 + 1] == '\0') goto LAB_03f13a6c;
                  if (pcVar47[uVar53 + 2] != "Float"[uVar53 + 2]) break;
                  if (pcVar47[uVar53 + 2] == '\0') goto LAB_03f13a6c;
                  bVar26 = uVar53 < 0x7fffe;
                  uVar53 = uVar53 + 3;
                } while (uVar53 != 0x80001);
                if (pcVar47 == "String") {
LAB_03f139d0:
                  uVar41 = 2;
                }
                else {
                  uVar53 = 0;
                  bVar26 = true;
                  do {
                    if (pcVar47[uVar53] != "String"[uVar53]) break;
                    if (pcVar47[uVar53] == '\0') {
                      if (bVar26) goto LAB_03f139d0;
                      break;
                    }
                    if (pcVar47[uVar53 + 1] != "String"[uVar53 + 1]) break;
                    if (pcVar47[uVar53 + 1] == '\0') goto LAB_03f139d0;
                    if (pcVar47[uVar53 + 2] != "String"[uVar53 + 2]) break;
                    if (pcVar47[uVar53 + 2] == '\0') goto LAB_03f139d0;
                    bVar26 = uVar53 < 0x7fffe;
                    uVar53 = uVar53 + 3;
                  } while (uVar53 != 0x80001);
                  if (pcVar47 != "Bool") {
                    uVar53 = 0;
                    bVar26 = true;
                    do {
                      if (pcVar47[uVar53] != (&DAT_040656e4)[uVar53]) break;
                      if (pcVar47[uVar53] == '\0') {
                        if (bVar26) goto LAB_03f13a64;
                        break;
                      }
                      if (pcVar47[uVar53 + 1] != (&DAT_040656e5)[uVar53]) break;
                      if (pcVar47[uVar53 + 1] == '\0') goto LAB_03f13a64;
                      if (pcVar47[uVar53 + 2] != (&DAT_040656e6)[uVar53]) break;
                      if (pcVar47[uVar53 + 2] == '\0') goto LAB_03f13a64;
                      bVar26 = uVar53 < 0x7fffe;
                      uVar53 = uVar53 + 3;
                    } while (uVar53 != 0x80001);
                    goto LAB_03f13a6c;
                  }
LAB_03f13a64:
                  uVar41 = 0;
                }
              }
            }
            else {
              uVar30 = *(uint *)(psVar46 + 4);
              uVar29 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
              uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
              if (*psVar46 != 0x5942) {
                uVar29 = uVar30;
              }
              if (uVar29 == 0) goto LAB_03f13860;
              uVar52 = *(uint *)((long)psVar46 +
                                (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar29 + 4);
              uVar30 = (uVar52 & 0xff00ff00) >> 8 | (uVar52 & 0xff00ff) << 8;
              uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
              if (*psVar46 != 0x5942) {
                uVar30 = uVar52;
              }
              pcVar47 = (char *)((long)psVar46 + (ulong)uVar30 + (long)(int)uVar29);
              if (pcVar47 != "Int") goto LAB_03f13864;
              uVar41 = 0;
            }
            *(undefined1 *)(*(long *)(param_1 + 0xf0) + uVar45) = uVar41;
            *(undefined1 *)(*(long *)(param_1 + 0xf8) + uVar45) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x100) + uVar45 * 4) = 0;
            if (*(char *)(*(long *)(param_1 + 0xf0) + uVar45) == '\x02') {
              *(uint *)(*(long *)(param_1 + 0x100) + uVar45 * 4) = uVar55;
              uVar55 = uVar55 + 1;
            }
            plVar38 = (long *)PTR_DAT_04bb2698;
            uVar45 = uVar45 + 1;
          } while (uVar45 != uVar57);
          if (0 < (int)uVar55) {
            lVar60 = *(long *)PTR_DAT_04bb2698;
            sVar58 = (ulong)uVar55 * 0x58 + 8;
            if (lVar60 == 0) {
              puVar39 = malloc(sVar58);
LAB_03f13b34:
              if (puVar39 != (ulong *)0x0) {
                uVar57 = (ulong)uVar55;
                uVar45 = uVar57 * 0x58 - 0x58;
                puVar48 = puVar39 + 1;
                *puVar39 = uVar57;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar45;
                puVar54 = puVar48;
                if ((SUB164(auVar7 * ZEXT816(0x2e8ba2e8ba2e8ba3),8) >> 4 & 1) == 0) {
                  *(undefined1 *)((long)puVar39 + 0x1c) = 0;
                  puVar39[2] = (ulong)((long)puVar39 + 0x1c);
                  *(undefined4 *)(puVar39 + 3) = 0x40;
                  *(undefined1 *)((long)puVar39 + 0x5b) = 0;
                  puVar39[1] = (ulong)(PTR_DAT_04bb2bc0 + 0x10);
                  puVar54 = puVar39 + 0xc;
                }
                if (0x57 < uVar45) {
                  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
                  do {
                    *(undefined4 *)(puVar54 + 2) = 0x40;
                    *(undefined1 *)((long)puVar54 + 0x53) = 0;
                    *(undefined1 *)((long)puVar54 + 0x14) = 0;
                    *(undefined4 *)(puVar54 + 0xd) = 0x40;
                    *(undefined1 *)((long)puVar54 + 0xab) = 0;
                    *puVar54 = (ulong)puVar1;
                    puVar54[1] = (ulong)((long)puVar54 + 0x14);
                    *(undefined1 *)((long)puVar54 + 0x6c) = 0;
                    puVar54[0xb] = (ulong)puVar1;
                    puVar54[0xc] = (ulong)((long)puVar54 + 0x6c);
                    puVar54 = puVar54 + 0x16;
                  } while (puVar54 != puVar48 + uVar57 * 0xb);
                }
                *(uint *)(param_1 + 0x108) = uVar55;
                *(ulong **)(param_1 + 0x110) = puVar48;
              }
            }
            else {
              plVar35 = param_3;
              if (param_3 != (long *)0x0) {
LAB_03f13b0c:
                puVar39 = (ulong *)(**(code **)(*plVar35 + 0x30))(plVar35,sVar58,8);
                goto LAB_03f13b34;
              }
              lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar35 = (long *)(lVar60 + 8);
              if (lVar31 != 0) {
                plVar35 = (long *)(lVar31 + 0xa8);
              }
              plVar35 = (long *)*plVar35;
              if (plVar35 != (long *)0x0) goto LAB_03f13b0c;
            }
            uVar29 = 0;
            do {
              uVar30 = uVar29;
              if (*(uint *)(param_1 + 0x108) <= uVar29) {
                uVar30 = 0;
              }
              uVar29 = uVar29 + 1;
              **(undefined1 **)(*(long *)(param_1 + 0x110) + (ulong)uVar30 * 0x58 + 8) = 0;
            } while (uVar55 != uVar29);
          }
        }
      }
    }
  }
  local_64 = 0;
  local_88._0_8_ = local_88._0_8_ & 0xffffff0000000000;
  uVar57 = FUN_03b36b40(plVar32,local_88,"Hierarchy");
  auVar23._8_8_ = local_a8._8_8_;
  auVar23._0_8_ = local_a8._0_8_;
  auVar22._8_8_ = local_a8._8_8_;
  auVar22._0_8_ = local_a8._0_8_;
  auVar21._8_8_ = local_a8._8_8_;
  auVar21._0_8_ = local_a8._0_8_;
  auVar20._8_8_ = local_a8._8_8_;
  auVar20._0_8_ = local_a8._0_8_;
  auVar15._8_8_ = local_88._8_8_;
  auVar15._0_8_ = local_88._0_8_;
  auVar14._8_8_ = local_88._8_8_;
  auVar14._0_8_ = local_88._0_8_;
  auVar13._8_8_ = local_88._8_8_;
  auVar13._0_8_ = local_88._0_8_;
  auVar12._8_8_ = local_88._8_8_;
  auVar12._0_8_ = local_88._0_8_;
  auVar11._8_8_ = local_88._8_8_;
  auVar11._0_8_ = local_88._0_8_;
  if ((uVar57 & 1) != 0) {
    auVar11 = auVar15;
    local_a8 = auVar23;
    if (local_88[4] - 0xc0 < 2) {
      psVar46 = (short *)*plVar32;
      puVar49 = (uint *)((long)psVar46 + (local_88._0_8_ & 0xffffffff));
      local_b8 = psVar46;
      local_b0 = puVar49;
      auVar11 = auVar12;
      local_a8 = auVar20;
      if (psVar46 != (short *)0x0) {
        auVar11 = auVar13;
        local_a8 = auVar21;
        if ((*puVar49 & 0xfe) == 0xc0) {
          uVar30 = *puVar49;
          uVar29 = uVar30 >> 8;
          uVar55 = uVar29;
          if (*psVar46 == 0x5942) {
            uVar55 = uVar29 & 0xff00 | uVar30 >> 0x18 | (uVar29 & 0xff) << 0x10;
          }
          auVar11 = auVar14;
          local_a8 = auVar22;
          if (uVar55 != 0) {
            if ((uVar30 & 0xfe) == 0xc0) {
              if (*psVar46 == 0x5942) {
                uVar29 = uVar29 & 0xff00 | uVar30 >> 0x18 | (uVar29 & 0xff) << 0x10;
              }
              if (uVar29 != 0) {
                lVar60 = *plVar38;
                if (lVar60 == 0) {
                  pvVar33 = malloc((ulong)(uVar29 << 3));
                }
                else {
                  plVar35 = param_3;
                  if (param_3 == (long *)0x0) {
                    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                    plVar35 = (long *)(lVar60 + 8);
                    if (lVar31 != 0) {
                      plVar35 = (long *)(lVar31 + 0xa8);
                    }
                    plVar35 = (long *)*plVar35;
                    if (plVar35 == (long *)0x0) goto LAB_03f13f50;
                  }
                  pvVar33 = (void *)(**(code **)(*plVar35 + 0x30))(plVar35,(ulong)(uVar29 << 3),8);
                }
                if (pvVar33 != (void *)0x0) {
                  *(void **)(param_1 + 0x30) = pvVar33;
                  *(undefined4 *)(param_1 + 0x28) = 0;
                  *(uint *)(param_1 + 0x2c) = uVar29;
                }
              }
            }
LAB_03f13f50:
            uVar57 = 0;
            iVar44 = 0;
            puVar1 = PTR_DAT_04bb2020 + 0x10;
            while( true ) {
              iVar25 = local_64;
              if ((*puVar49 & 0xfe) == 0xc0) {
                uVar55 = *puVar49 >> 8;
                uVar45 = (ulong)uVar55;
                if (*psVar46 == 0x5942) {
                  uVar45 = (ulong)(uVar55 & 0xff00 | *puVar49 >> 0x18 | (uVar55 & 0xff) << 0x10);
                }
              }
              else {
                uVar45 = 0;
              }
              if (uVar45 <= uVar57) break;
              auVar63 = FUN_03b36a34(&local_b8,uVar57 & 0xffffffff);
              psVar62 = auVar63._0_8_;
              local_88._0_16_ = auVar63;
              if (psVar62 != (short *)0x0) {
                lVar60 = *plVar38;
                if (lVar60 == 0) {
                  plVar35 = malloc(0x28);
                }
                else {
                  plVar35 = param_3;
                  if (param_3 == (long *)0x0) {
                    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                    plVar35 = (long *)(lVar60 + 8);
                    if (lVar31 != 0) {
                      plVar35 = (long *)(lVar31 + 0xa8);
                    }
                    plVar35 = (long *)*plVar35;
                  }
                  plVar35 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x28,8);
                }
                *plVar35 = (long)puVar1;
                puVar24 = PTR_DAT_04bb2120;
                plVar35[3] = 0;
                plVar35[4] = 0;
                plVar35[1] = (long)puVar24;
                plVar35[2] = 0;
                if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
                  *(long **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) =
                       plVar35;
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                }
                local_98._0_8_ = local_98._0_8_ & 0xffffff0000000000;
                uVar45 = FUN_03b36b40(local_88,local_98,&DAT_040a1c2c);
                if (((uVar45 & 1) != 0) && (local_98[4] == -0x60)) {
                  uVar29 = *(uint *)(psVar62 + 4);
                  uVar55 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
                  uVar55 = uVar55 >> 0x10 | uVar55 << 0x10;
                  if (*psVar62 != 0x5942) {
                    uVar55 = uVar29;
                  }
                  if (uVar55 != 0) {
                    uVar30 = *(uint *)((long)psVar62 +
                                      (long)(int)local_98._0_4_ * 4 + (long)(int)uVar55 + 4);
                    uVar29 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
                    uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
                    if (*psVar62 != 0x5942) {
                      uVar29 = uVar30;
                    }
                    *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + uVar57 * 8) + 8) =
                         (long)psVar62 + (ulong)uVar29 + (long)(int)uVar55;
                  }
                }
                local_98._0_8_ = local_98._0_8_ & 0xffffff0000000000;
                uVar45 = FUN_03b36b40(local_88,local_98,"Underlayer");
                if ((uVar45 & 1) != 0) {
                  if (local_98[4] - 0xc0 < 2) {
                    puVar61 = (uint *)((long)psVar62 + (local_98._0_8_ & 0xffffffff));
                  }
                  else {
                    if (local_98[4] != 0xff) goto LAB_03f13f88;
                    puVar61 = (uint *)0x0;
                  }
                  if (uVar57 < *(uint *)(param_1 + 0x28)) {
                    lVar60 = *(long *)(*(long *)(param_1 + 0x30) + uVar57 * 8);
                  }
                  else {
                    lVar60 = 0;
                  }
                  if (puVar61 == (uint *)0x0) {
                    uVar55 = 0;
                  }
                  else {
                    if ((*puVar61 & 0xfe) == 0xc0) {
                      uVar55 = *puVar61 >> 8;
                      if (*psVar62 == 0x5942) {
                        uVar55 = uVar55 & 0xff00 | *puVar61 >> 0x18 | (uVar55 & 0xff) << 0x10;
                      }
                      if (uVar55 != 0) {
                        lVar31 = *(long *)PTR_DAT_04bb2698;
                        if (lVar31 == 0) {
                          pvVar33 = malloc((ulong)(uVar55 << 3));
                        }
                        else {
                          plVar38 = param_3;
                          if (param_3 == (long *)0x0) {
                            lVar40 = nn::os::GetTlsValue(*(undefined4 *)
                                                          (*(long *)PTR_DAT_04bb3350 + 0x68));
                            plVar38 = (long *)(lVar31 + 8);
                            if (lVar40 != 0) {
                              plVar38 = (long *)(lVar40 + 0xa8);
                            }
                            plVar38 = (long *)*plVar38;
                            if (plVar38 == (long *)0x0) goto LAB_03f14228;
                          }
                          pvVar33 = (void *)(**(code **)(*plVar38 + 0x30))
                                                      (plVar38,(ulong)(uVar55 << 3),8);
                        }
                        if (pvVar33 != (void *)0x0) {
                          *(void **)(lVar60 + 0x18) = pvVar33;
                          *(undefined4 *)(lVar60 + 0x10) = 0;
                          *(uint *)(lVar60 + 0x14) = uVar55;
                        }
                      }
                    }
LAB_03f14228:
                    if ((*puVar61 & 0xfe) == 0xc0) {
                      uVar55 = *puVar61 >> 8;
                      if (*psVar62 == 0x5942) {
                        uVar55 = uVar55 & 0xff00 | *puVar61 >> 0x18 | (uVar55 & 0xff) << 0x10;
                      }
                    }
                    else {
                      uVar55 = 0;
                    }
                  }
                  iVar44 = uVar55 + iVar44;
                  plVar38 = (long *)PTR_DAT_04bb2698;
                }
LAB_03f13f88:
                FUN_03f14bf0(local_88,&local_64);
              }
              uVar57 = uVar57 + 1;
            }
            auVar11 = (undefined1  [16])local_88._0_16_;
            if (local_64 != 0) {
              if (0 < iVar44) {
                lVar60 = *plVar38;
                if (lVar60 == 0) {
                  pvVar33 = malloc((long)(iVar44 << 3));
                }
                else {
                  plVar35 = param_3;
                  if (param_3 == (long *)0x0) {
                    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                    plVar35 = (long *)(lVar60 + 8);
                    if (lVar31 != 0) {
                      plVar35 = (long *)(lVar31 + 0xa8);
                    }
                    plVar35 = (long *)*plVar35;
                    if (plVar35 == (long *)0x0) goto LAB_03f14308;
                  }
                  pvVar33 = (void *)(**(code **)(*plVar35 + 0x30))(plVar35,(long)(iVar44 << 3),8);
                }
                if (pvVar33 != (void *)0x0) {
                  *(void **)(param_1 + 0x40) = pvVar33;
                  *(undefined4 *)(param_1 + 0x38) = 0;
                  *(int *)(param_1 + 0x3c) = iVar44;
                }
              }
LAB_03f14308:
              if (0 < iVar25) {
                lVar60 = *plVar38;
                if (lVar60 == 0) {
                  pvVar33 = malloc((long)iVar25 << 3);
                }
                else {
                  plVar35 = param_3;
                  if (param_3 == (long *)0x0) {
                    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                    plVar35 = (long *)(lVar60 + 8);
                    if (lVar31 != 0) {
                      plVar35 = (long *)(lVar31 + 0xa8);
                    }
                    plVar35 = (long *)*plVar35;
                    if (plVar35 == (long *)0x0) goto LAB_03f14380;
                  }
                  pvVar33 = (void *)(**(code **)(*plVar35 + 0x30))(plVar35,(long)iVar25 << 3,8);
                }
                if (pvVar33 != (void *)0x0) {
                  *(void **)(param_1 + 0x50) = pvVar33;
                  *(undefined4 *)(param_1 + 0x48) = 0;
                  *(int *)(param_1 + 0x4c) = iVar25;
                }
              }
LAB_03f14380:
              uVar55 = iVar44 * 2;
              uVar57 = (ulong)uVar55;
              if (0 < (int)uVar55) {
                lVar60 = *plVar38;
                if (lVar60 == 0) {
                  puVar34 = malloc(uVar57 << 3);
                }
                else {
                  plVar35 = param_3;
                  if (param_3 == (long *)0x0) {
                    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                    plVar35 = (long *)(lVar60 + 8);
                    if (lVar31 != 0) {
                      plVar35 = (long *)(lVar31 + 0xa8);
                    }
                    plVar35 = (long *)*plVar35;
                    if (plVar35 == (long *)0x0) goto LAB_03f14454;
                  }
                  puVar34 = (undefined4 *)(**(code **)(*plVar35 + 0x30))(plVar35,uVar57 << 3,8);
                }
                if (puVar34 != (undefined4 *)0x0) {
                  uVar45 = uVar57 & 6;
                  puVar51 = puVar34;
                  if ((uVar55 & 6) != 0) {
                    puVar50 = puVar34;
                    do {
                      uVar45 = uVar45 - 1;
                      puVar51 = puVar50 + 2;
                      *puVar50 = 0;
                      puVar50 = puVar51;
                    } while (uVar45 != 0);
                  }
                  if (6 < (uVar57 - 1 & 0x1fffffffffffffff)) {
                    do {
                      *puVar51 = 0;
                      puVar51[2] = 0;
                      puVar51[4] = 0;
                      puVar51[6] = 0;
                      puVar51[8] = 0;
                      puVar51[10] = 0;
                      puVar51[0xc] = 0;
                      puVar51[0xe] = 0;
                      puVar51 = puVar51 + 0x10;
                    } while (puVar51 != puVar34 + uVar57 * 2);
                  }
                  *(undefined4 **)(param_1 + 0x68) = puVar34;
                  *(undefined4 *)(param_1 + 0x70) = 0;
                  *(uint *)(param_1 + 0x74) = uVar55;
                }
              }
LAB_03f14454:
              local_88._0_8_ = local_88._0_8_ & 0xffffff0000000000;
              local_c8 = (uint *)0x0;
              puStack_c0 = (uint *)0x0;
              uVar57 = FUN_03b36b40(plVar32,local_88,&DAT_0406f6c9);
              if ((uVar57 & 1) != 0) {
                if (local_88[4] - 0xc0 < 2) {
                  local_108 = (uint *)*plVar32;
                  puVar61 = (uint *)((long)local_108 + (local_88._0_8_ & 0xffffffff));
                  local_c8 = local_108;
                  puStack_c0 = puVar61;
                  if (local_108 != (uint *)0x0) {
                    if ((*puVar61 & 0xfe) == 0xc0) {
                      uVar55 = *puVar61 >> 8;
                      if ((short)*local_108 == 0x5942) {
                        uVar55 = uVar55 & 0xff00 | *puVar61 >> 0x18 | (uVar55 & 0xff) << 0x10;
                      }
                      if (uVar55 != 0) {
                        lVar60 = *plVar38;
                        if (lVar60 == 0) {
                          pvVar33 = malloc((ulong)(uVar55 << 3));
                        }
                        else {
                          plVar38 = param_3;
                          if (param_3 == (long *)0x0) {
                            lVar31 = nn::os::GetTlsValue(*(undefined4 *)
                                                          (*(long *)PTR_DAT_04bb3350 + 0x68));
                            plVar38 = (long *)(lVar60 + 8);
                            if (lVar31 != 0) {
                              plVar38 = (long *)(lVar31 + 0xa8);
                            }
                            plVar38 = (long *)*plVar38;
                            if (plVar38 == (long *)0x0) goto LAB_03f145c8;
                          }
                          pvVar33 = (void *)(**(code **)(*plVar38 + 0x30))
                                                      (plVar38,(ulong)(uVar55 << 3),8);
                        }
                        bVar26 = false;
                        if (pvVar33 != (void *)0x0) {
                          *(void **)(param_1 + 0x60) = pvVar33;
                          *(undefined4 *)(param_1 + 0x58) = 0;
                          *(uint *)(param_1 + 0x5c) = uVar55;
                        }
                        goto LAB_03f145cc;
                      }
                    }
LAB_03f145c8:
                    bVar26 = false;
LAB_03f145cc:
                    uVar55 = 0;
                    puVar1 = PTR_DAT_04bb2020 + 0x10;
                    while( true ) {
                      if ((bVar26) || ((*puVar61 & 0xfe) != 0xc0)) {
                        uVar29 = 0;
                      }
                      else {
                        uVar29 = *puVar61 >> 8;
                        if ((short)*local_108 == 0x5942) {
                          uVar29 = uVar29 & 0xff00 | *puVar61 >> 0x18 | (uVar29 & 0xff) << 0x10;
                        }
                      }
                      if (uVar29 <= uVar55) break;
                      local_e0 = &DAT_0407ebb1;
                      uVar57 = FUN_03b36cbc(&local_c8,auStack_d8,&local_e0,uVar55);
                      if ((uVar57 & 1) != 0) {
                        local_e8 = local_e0;
                        local_f0 = puVar1;
                        if (*plVar32 == 0) {
LAB_03f14708:
                          pvVar33 = (void *)0x0;
                        }
                        else {
                          local_88._0_8_ = local_88._0_8_ & 0xffffff0000000000;
                          uVar57 = FUN_03b36b40(plVar32,local_88,&DAT_0406f6c9);
                          if ((uVar57 & 1) == 0) goto LAB_03f14708;
                          if (local_88[4] - 0xc0 < 2) {
                            psVar62 = (short *)*plVar32;
                            local_88._8_8_ = (long)psVar62 + (local_88._0_8_ & 0xffffffff);
                          }
                          else {
                            if (local_88[4] != 0xff) goto LAB_03f14708;
                            psVar62 = (short *)*plVar32;
                            local_88._8_8_ = 0;
                          }
                          local_88._0_8_ = psVar62;
                          if (psVar62 == (short *)0x0) {
LAB_03f147a0:
                            pvVar33 = (void *)0x0;
                          }
                          else {
                            (**(code **)(local_f0 + 0x18))(&local_f0);
                            local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
                            uVar57 = FUN_03b36b40(local_88,local_a8,local_e8);
                            if ((uVar57 & 1) == 0) goto LAB_03f147a0;
                            if (local_a8[4] - 0xc0 < 2) {
                              local_98._8_8_ = (long)psVar62 + (local_a8._0_8_ & 0xffffffff);
                            }
                            else {
                              if (local_a8[4] != 0xff) goto LAB_03f147a0;
                              local_98._8_8_ = 0;
                            }
                            lVar60 = *(long *)PTR_DAT_04bb2698;
                            local_98._0_8_ = psVar62;
                            if (lVar60 == 0) {
                              pvVar33 = malloc(0x158);
                            }
                            else {
                              plVar38 = param_3;
                              if (param_3 == (long *)0x0) {
                                lVar31 = nn::os::GetTlsValue(*(undefined4 *)
                                                              (*(long *)PTR_DAT_04bb3350 + 0x68));
                                plVar38 = (long *)(lVar60 + 8);
                                if (lVar31 != 0) {
                                  plVar38 = (long *)(lVar31 + 0xa8);
                                }
                                plVar38 = (long *)*plVar38;
                                if (plVar38 == (long *)0x0) {
                                  pvVar33 = (void *)0x0;
                                  goto LAB_03f147bc;
                                }
                              }
                              pvVar33 = (void *)(**(code **)(*plVar38 + 0x30))(plVar38,0x158,8);
                            }
LAB_03f147bc:
                            FUN_03f1874c(pvVar33,param_4);
                            (**(code **)(local_f0 + 0x18))(&local_f0);
                            *(undefined8 **)((long)pvVar33 + 0x10) = local_e8;
                            (**(code **)(local_f0 + 0x18))(&local_f0);
                            local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
                            uVar57 = FUN_03b36b40(local_98,local_a8,"SLinkUserName");
                            if (((uVar57 & 1) != 0) && (local_a8[4] == -0x60)) {
                              uVar30 = *(uint *)(psVar62 + 4);
                              uVar29 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
                              uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
                              if (*psVar62 != 0x5942) {
                                uVar29 = uVar30;
                              }
                              if (uVar29 != 0) {
                                uVar52 = *(uint *)((long)psVar62 +
                                                  (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar29
                                                  + 4);
                                uVar30 = (uVar52 & 0xff00ff00) >> 8 | (uVar52 & 0xff00ff) << 8;
                                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                                if (*psVar62 != 0x5942) {
                                  uVar30 = uVar52;
                                }
                                local_a8._8_8_ = (long)psVar62 + (ulong)uVar30 + (long)(int)uVar29;
                                local_a8._0_8_ = PTR_DAT_04bb2020 + 0x10;
                                lVar60 = FUN_03f11310(param_4,local_a8,param_3);
                                if (lVar60 != 0) {
                                  *(long *)((long)pvVar33 + 0x20) = lVar60;
                                }
                              }
                            }
                            FUN_03f18d40(pvVar33,param_3,local_98,param_4);
                            *(undefined8 *)((long)pvVar33 + 0x150) = 0;
                          }
                        }
                        if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x5c)) {
                          *(void **)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x58) * 8)
                               = pvVar33;
                          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                        }
                      }
                      uVar55 = uVar55 + 1;
                    }
                  }
                }
                else if (local_88[4] == 0xff) {
                  local_108 = (uint *)*plVar32;
                  puStack_c0 = (uint *)0x0;
                  local_c8 = local_108;
                  if (local_108 != (uint *)0x0) {
                    puVar61 = (uint *)0x0;
                    bVar26 = true;
                    goto LAB_03f145cc;
                  }
                }
              }
              uVar57 = 0;
              while( true ) {
                if ((*puVar49 & 0xfe) == 0xc0) {
                  uVar55 = *puVar49 >> 8;
                  uVar45 = (ulong)uVar55;
                  if (*psVar46 == 0x5942) {
                    uVar45 = (ulong)(uVar55 & 0xff00 | *puVar49 >> 0x18 | (uVar55 & 0xff) << 0x10);
                  }
                }
                else {
                  uVar45 = 0;
                }
                if (uVar45 <= uVar57) break;
                auVar63 = FUN_03b36a34(&local_b8,uVar57 & 0xffffffff);
                psVar62 = auVar63._0_8_;
                local_88._0_16_ = auVar63;
                auVar18 = local_98;
                if (psVar62 != (short *)0x0) {
                  local_98._0_8_ = local_98._0_8_ & 0xffffff0000000000;
                  uVar45 = FUN_03b36b40(local_88,local_98,"Underlayer");
                  auVar19._8_8_ = local_98._8_8_;
                  auVar19._0_8_ = local_98._0_8_;
                  auVar18._8_8_ = local_98._8_8_;
                  auVar18._0_8_ = local_98._0_8_;
                  if ((uVar45 & 1) != 0) {
                    if (local_98[4] - 0xc0 < 2) {
                      puVar61 = (uint *)((long)psVar62 + (local_98._0_8_ & 0xffffffff));
LAB_03f1497c:
                      uVar55 = 0;
                      local_98._0_8_ = psVar62;
                      local_98._8_8_ = puVar61;
                      do {
                        auVar18._8_8_ = local_98._8_8_;
                        auVar18._0_8_ = local_98._0_8_;
                        if (puVar61 == (uint *)0x0) {
                          uVar29 = 0;
                        }
                        else {
                          if ((*puVar61 & 0xfe) != 0xc0) goto LAB_03f148d0;
                          uVar29 = *puVar61 >> 8;
                          if (*psVar62 == 0x5942) {
                            uVar29 = uVar29 & 0xff00 | *puVar61 >> 0x18 | (uVar29 & 0xff) << 0x10;
                          }
                        }
                        if (uVar29 <= uVar55) goto LAB_03f148d0;
                        auVar63 = FUN_03b36a34(local_98,uVar55);
                        local_a8 = auVar63;
                        if (auVar63._0_8_ != 0) {
                          lVar60 = FUN_03f15010(param_1,local_a8,param_3,param_4);
                          uVar30 = FUN_006bd550(*(undefined8 *)(lVar60 + 0x10),0);
                          uVar29 = *(uint *)(param_1 + 0x38);
                          if (uVar30 != 0) {
                            uVar52 = *(uint *)(param_1 + 0x74);
                            uVar43 = 0;
                            if (uVar52 != 0) {
                              uVar43 = uVar30 / uVar52;
                            }
                            uVar43 = uVar30 - uVar43 * uVar52;
                            uVar4 = uVar43;
                            do {
                              uVar5 = *(uint *)(*(long *)(param_1 + 0x68) +
                                               (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)uVar4 << 3));
                              if (uVar5 == 0) {
                                puVar3 = (uint *)(*(long *)(param_1 + 0x68) + (long)(int)uVar4 * 8);
                                *puVar3 = uVar30;
                                puVar3[1] = uVar29;
                                *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
                                uVar29 = *(uint *)(param_1 + 0x38);
                                break;
                              }
                              if (uVar5 == uVar30) break;
                              uVar5 = 0;
                              if ((int)(uVar4 + 1) < (int)uVar52) {
                                uVar5 = uVar4 + 1;
                              }
                              uVar4 = uVar5;
                            } while (uVar5 != uVar43);
                          }
                          if ((int)uVar29 < *(int *)(param_1 + 0x3c)) {
                            *(long *)(*(long *)(param_1 + 0x40) + (long)(int)uVar29 * 8) = lVar60;
                            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
                          }
                          if (uVar57 < *(uint *)(param_1 + 0x28)) {
                            lVar31 = *(long *)(*(long *)(param_1 + 0x30) + uVar57 * 8);
                          }
                          else {
                            lVar31 = 0;
                          }
                          if (*(int *)(lVar31 + 0x10) < *(int *)(lVar31 + 0x14)) {
                            *(long *)(*(long *)(lVar31 + 0x18) + (long)*(int *)(lVar31 + 0x10) * 8)
                                 = lVar60;
                            *(int *)(lVar31 + 0x10) = *(int *)(lVar31 + 0x10) + 1;
                          }
                        }
                        uVar55 = uVar55 + 1;
                      } while( true );
                    }
                    auVar18 = auVar19;
                    if (local_98[4] == 0xff) {
                      puVar61 = (uint *)0x0;
                      goto LAB_03f1497c;
                    }
                  }
                }
LAB_03f148d0:
                local_98 = auVar18;
                uVar57 = uVar57 + 1;
              }
              plVar38 = (long *)PTR_DAT_04bb2698;
              auVar11 = (undefined1  [16])local_88._0_16_;
            }
          }
        }
      }
    }
  }
  local_88._8_8_ = auVar11._8_8_;
  local_88._0_8_ = auVar11._0_8_;
  local_88._0_8_ = local_88._0_8_ & 0xffffff0000000000;
  uVar57 = FUN_03b36b40(plVar32,local_88,"StaticSpeakerBalanceSupplier");
  if (((uVar57 & 1) != 0) && (local_88[4] - 0xc0 < 2)) {
    local_98._0_8_ = *plVar32;
    local_98._8_8_ = local_98._0_8_ + (local_88._0_8_ & 0xffffffff);
    auVar17._8_8_ = local_98._8_8_;
    auVar17._0_8_ = local_98._0_8_;
    auVar16._8_8_ = local_98._8_8_;
    auVar16._0_8_ = local_98._0_8_;
    if (((short *)local_98._0_8_ != (short *)0x0) &&
       (local_98 = auVar16, (*(uint *)local_98._8_8_ & 0xfe) == 0xc0)) {
      uVar55 = *(uint *)local_98._8_8_ >> 8;
      if (*(short *)local_98._0_8_ == 0x5942) {
        uVar55 = uVar55 & 0xff00 | *(uint *)local_98._8_8_ >> 0x18 | (uVar55 & 0xff) << 0x10;
      }
      local_98 = auVar17;
      if (uVar55 != 0) {
        plVar35 = (long *)(param_1 + 0x138);
        lVar60 = *plVar38;
        if (lVar60 == 0) {
          pvVar33 = malloc((ulong)(uVar55 * 0x68));
LAB_03f12aa8:
          if (pvVar33 != (void *)0x0) {
            *(uint *)(param_1 + 0x154) = uVar55;
            *(void **)(param_1 + 0x140) = pvVar33;
            if (uVar55 < 2) {
              lVar60 = 0;
            }
            else {
              uVar29 = uVar55 - 1;
              if (uVar29 == 1) {
                uVar57 = 0;
              }
              else {
                uVar57 = 0;
                plVar37 = (long *)((long)pvVar33 + 0x68);
                do {
                  uVar57 = uVar57 + 2;
                  plVar37[-0xd] = (long)plVar37;
                  *plVar37 = (long)(plVar37 + 0xd);
                  plVar37 = plVar37 + 0x1a;
                } while (((ulong)uVar29 & 0xfffffffe) != uVar57);
              }
              if ((uVar29 & 1) != 0) {
                plVar37 = (long *)((long)pvVar33 + uVar57 * 0x68);
                *plVar37 = (long)(plVar37 + 0xd);
              }
              lVar60 = (long)(int)(uVar29 * 0xd);
            }
            *(undefined8 *)((long)pvVar33 + lVar60 * 8) = 0;
            *(void **)(param_1 + 0x148) = pvVar33;
          }
        }
        else {
          plVar37 = param_3;
          if (param_3 != (long *)0x0) {
LAB_03f128ac:
            pvVar33 = (void *)(**(code **)(*plVar37 + 0x30))(plVar37,(ulong)(uVar55 * 0x68),8);
            goto LAB_03f12aa8;
          }
          lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar37 = (long *)(lVar60 + 8);
          if (lVar31 != 0) {
            plVar37 = (long *)(lVar31 + 0xa8);
          }
          plVar37 = (long *)*plVar37;
          if (plVar37 != (long *)0x0) goto LAB_03f128ac;
        }
        uVar29 = 0;
        psVar46 = (short *)(PTR_DAT_04bb2020 + 0x10);
        do {
          local_c8 = (uint *)0x0;
          local_a8._0_8_ = (short *)0x0;
          local_a8._8_8_ = 0;
          FUN_03b36cbc(local_98,local_a8,&local_c8,uVar29);
          if (((short *)local_a8._0_8_ != (short *)0x0) && (local_c8 != (uint *)0x0)) {
            local_88._0_8_ = local_88._0_8_ & 0xffffff0000000000;
            local_b0 = local_c8;
            local_b8 = psVar46;
            uVar57 = FUN_03b36b40(local_a8,local_88,&DAT_040fe5ab);
            if (((uVar57 & 1) == 0) || (local_88[4] != -0x60)) {
LAB_03f13d68:
              uVar36 = 0;
            }
            else {
              uVar52 = *(uint *)(local_a8._0_8_ + 8);
              uVar30 = (uVar52 & 0xff00ff00) >> 8 | (uVar52 & 0xff00ff) << 8;
              uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
              if (*(short *)local_a8._0_8_ != 0x5942) {
                uVar30 = uVar52;
              }
              if (uVar30 == 0) goto LAB_03f13d68;
              uVar43 = *(uint *)(local_a8._0_8_ +
                                (long)(int)local_88._0_4_ * 4 + (long)(int)uVar30 + 4);
              uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
              uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
              if (*(short *)local_a8._0_8_ != 0x5942) {
                uVar52 = uVar43;
              }
              local_88._8_8_ = local_a8._0_8_ + (ulong)uVar52 + (long)(int)uVar30;
              local_88._0_8_ = PTR_DAT_04bb2020 + 0x10;
              uVar36 = FUN_03f22830(param_3,local_88,local_a8);
            }
            if (*(int *)(param_1 + 0x150) < *(int *)(param_1 + 0x154)) {
              puVar59 = *(undefined8 **)(param_1 + 0x140);
              if (puVar59 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0x140) = *puVar59;
              }
              puVar49 = (uint *)(puVar59 + 8);
              puVar59[4] = PTR_DAT_04bb2020 + 0x10;
              puVar1 = PTR_DAT_04bb2120;
              puVar59[2] = 0;
              puVar59[3] = 0;
              *(undefined1 *)(puVar59 + 0xc) = 0;
              puVar59[5] = puVar1;
              puVar59[6] = uVar36;
              puVar59[7] = plVar35;
              *puVar59 = &PTR_LAB_04ba7eb0;
              puVar59[1] = 0;
              (**(code **)(local_b8 + 0xc))(&local_b8);
              puVar61 = local_b0;
              if (puVar49 != local_b0) {
                (**(code **)(local_b8 + 0xc))(&local_b8);
                lVar60 = 0;
                do {
                  if (*(char *)((long)local_b0 + lVar60) == '\0') {
LAB_03f13ee0:
                    iVar44 = (int)lVar60;
                    if (0x20 < iVar44) {
                      iVar44 = 0x20;
                    }
                    goto LAB_03f13eec;
                  }
                  if (*(char *)((long)local_b0 + lVar60 + 1) == '\0') {
                    lVar60 = lVar60 + 1;
                    goto LAB_03f13ee0;
                  }
                  if (*(char *)((long)local_b0 + lVar60 + 2) == '\0') {
                    lVar60 = lVar60 + 2;
                    goto LAB_03f13ee0;
                  }
                  lVar60 = lVar60 + 3;
                } while (lVar60 != 0x80001);
                iVar44 = 0;
LAB_03f13eec:
                memcpy(puVar49,puVar61,(long)iVar44);
                *(undefined1 *)((long)puVar49 + (long)iVar44) = 0;
                plVar38 = (long *)PTR_DAT_04bb2698;
              }
              puVar59[5] = puVar49;
              *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
              lVar60 = FUN_038b0320(plVar35,*(undefined8 *)(param_1 + 0x138),puVar59);
              *(long *)(param_1 + 0x138) = lVar60;
              *(undefined8 *)(lVar60 + 0x18) = 1;
            }
            else {
              for (lVar60 = *plVar35; lVar60 != 0; lVar60 = *(long *)(lVar60 + lVar31)) {
                (**(code **)(local_b8 + 0xc))(&local_b8);
                (**(code **)(local_b8 + 0xc))(&local_b8);
                puVar49 = local_b0;
                (**(code **)(*(long *)(lVar60 + 0x20) + 0x18))((long *)(lVar60 + 0x20));
                if (puVar49 == *(uint **)(lVar60 + 0x28)) {
LAB_03f13c88:
                  *(undefined8 *)(lVar60 + 0x30) = uVar36;
                  plVar38 = (long *)PTR_DAT_04bb2698;
                  break;
                }
                puVar49 = *(uint **)(lVar60 + 0x28);
                puVar61 = local_b0;
                lVar31 = 0x7ffff;
                while( true ) {
                  bVar28 = (byte)*puVar61;
                  if (bVar28 != (byte)*puVar49) break;
                  if (bVar28 == 0) goto LAB_03f13c88;
                  bVar26 = lVar31 == 0;
                  puVar49 = (uint *)((long)puVar49 + 1);
                  puVar61 = (uint *)((long)puVar61 + 1);
                  lVar31 = lVar31 + -1;
                  if (bVar26) goto LAB_03f13c88;
                }
                lVar31 = 8;
                if ((byte)*puVar49 <= bVar28) {
                  lVar31 = 0x10;
                }
                plVar38 = (long *)PTR_DAT_04bb2698;
              }
            }
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar55);
      }
    }
  }
  local_88._0_8_ = local_88._0_8_ & 0xffffff0000000000;
  uVar57 = FUN_03b36b40(plVar32,local_88,"LayerTransition");
  if (((uVar57 & 1) != 0) && (local_88[4] - 0xc0 < 2)) {
    psVar46 = (short *)*plVar32;
    local_88._8_8_ = (long)psVar46 + (local_88._0_8_ & 0xffffffff);
    if ((psVar46 != (short *)0x0) && ((*(uint *)local_88._8_8_ & 0xfe) == 0xc0)) {
      uVar55 = *(uint *)local_88._8_8_ >> 8;
      if (*psVar46 == 0x5942) {
        uVar55 = uVar55 & 0xff00 | *(uint *)local_88._8_8_ >> 0x18 | (uVar55 & 0xff) << 0x10;
      }
      if (uVar55 != 0) {
        lVar60 = *plVar38;
        uVar57 = (ulong)uVar55;
        sVar58 = (ulong)uVar55 * 0x58 + 8;
        local_88._0_8_ = psVar46;
        if (lVar60 == 0) {
          puVar39 = malloc(sVar58);
        }
        else {
          plVar38 = param_3;
          if (param_3 == (long *)0x0) {
            lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar38 = (long *)(lVar60 + 8);
            if (lVar31 != 0) {
              plVar38 = (long *)(lVar31 + 0xa8);
            }
            plVar38 = (long *)*plVar38;
          }
          puVar39 = (ulong *)(**(code **)(*plVar38 + 0x30))(plVar38,sVar58,8);
        }
        uVar53 = uVar57 * 0x58 - 0x58;
        puVar54 = puVar39 + 1;
        *puVar39 = uVar57;
        uVar29 = ((uint)(uVar53 / 0x58) & 0xfffffff) + 1;
        uVar45 = (ulong)uVar29 & 3;
        puVar39 = puVar54;
        if ((uVar29 & 3) != 0) {
          do {
            puVar39[8] = 0;
            puVar39[9] = 0;
            uVar45 = uVar45 - 1;
            *(undefined1 *)(puVar39 + 10) = 1;
            puVar39[6] = 0;
            puVar39[7] = 0;
            puVar39[4] = 0;
            puVar39[5] = 0;
            puVar39[2] = 0;
            puVar39[3] = 0;
            *puVar39 = 0;
            puVar39[1] = 0;
            puVar39 = puVar39 + 0xb;
          } while (uVar45 != 0);
        }
        if (0x107 < uVar53) {
          do {
            puVar39[8] = 0;
            puVar39[9] = 0;
            *(undefined1 *)(puVar39 + 10) = 1;
            *(undefined1 *)(puVar39 + 0x15) = 1;
            *(undefined1 *)(puVar39 + 0x20) = 1;
            *(undefined1 *)(puVar39 + 0x2b) = 1;
            puVar39[6] = 0;
            puVar39[7] = 0;
            puVar39[4] = 0;
            puVar39[5] = 0;
            puVar39[2] = 0;
            puVar39[3] = 0;
            *puVar39 = 0;
            puVar39[1] = 0;
            puVar39[0xb] = 0;
            puVar39[0xc] = 0;
            puVar39[0xd] = 0;
            puVar39[0xe] = 0;
            puVar39[0xf] = 0;
            puVar39[0x10] = 0;
            puVar39[0x11] = 0;
            puVar39[0x12] = 0;
            puVar39[0x13] = 0;
            puVar39[0x14] = 0;
            puVar39[0x16] = 0;
            puVar39[0x17] = 0;
            puVar39[0x18] = 0;
            puVar39[0x19] = 0;
            puVar39[0x1a] = 0;
            puVar39[0x1b] = 0;
            puVar39[0x1c] = 0;
            puVar39[0x1d] = 0;
            puVar39[0x1e] = 0;
            puVar39[0x1f] = 0;
            puVar39[0x21] = 0;
            puVar39[0x22] = 0;
            puVar39[0x23] = 0;
            puVar39[0x24] = 0;
            puVar39[0x25] = 0;
            puVar39[0x26] = 0;
            puVar39[0x27] = 0;
            puVar39[0x28] = 0;
            puVar39[0x29] = 0;
            puVar39[0x2a] = 0;
            puVar39 = puVar39 + 0x2c;
          } while (puVar39 != puVar54 + uVar57 * 0xb);
        }
        puVar1 = PTR_DAT_04bb2020;
        uVar29 = 0;
        *(uint *)(param_1 + 0x78) = uVar55;
        *(ulong **)(param_1 + 0x80) = puVar54;
        *(ulong **)(param_1 + 0x88) = puVar54;
        do {
          auVar63 = FUN_03b36a34(local_88,uVar29);
          psVar46 = auVar63._0_8_;
          lVar60 = *(long *)(param_1 + 0x80);
          uVar30 = uVar29;
          if (*(uint *)(param_1 + 0x78) <= uVar29) {
            uVar30 = 0;
          }
          plVar38 = (long *)(lVar60 + (ulong)uVar30 * 0x58);
          *plVar38 = 0;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          local_98 = auVar63;
          uVar57 = FUN_03b36b40(local_98,local_a8,&DAT_04089d33);
          if (((uVar57 & 1) == 0) || (local_a8[4] != -0x60)) {
LAB_03f12cc0:
            bVar26 = false;
          }
          else {
            uVar43 = *(uint *)(psVar46 + 4);
            uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar52 = uVar43;
            }
            if (uVar52 == 0) goto LAB_03f12cc0;
            uVar4 = *(uint *)((long)psVar46 + (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar52 + 4)
            ;
            uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar43 = uVar4;
            }
            pcVar47 = (char *)((long)psVar46 + (ulong)uVar43 + (long)(int)uVar52);
            if (*pcVar47 == '\0') goto LAB_03f12cc0;
            if (*(int *)(param_1 + 0x38) != 0) {
              plVar32 = *(long **)(param_1 + 0x40);
              plVar35 = plVar32 + *(int *)(param_1 + 0x38);
              do {
                pcVar56 = *(char **)(*plVar32 + 0x10);
                if (pcVar56 == pcVar47) {
LAB_03f1355c:
                  *plVar38 = *plVar32;
                  break;
                }
                uVar57 = 0;
                bVar26 = true;
                do {
                  if (pcVar56[uVar57] != pcVar47[uVar57]) break;
                  if (pcVar56[uVar57] == '\0') {
                    if (bVar26) goto LAB_03f1355c;
                    break;
                  }
                  if (pcVar56[uVar57 + 1] != pcVar47[uVar57 + 1]) break;
                  if (pcVar56[uVar57 + 1] == '\0') goto LAB_03f1355c;
                  if (pcVar56[uVar57 + 2] != pcVar47[uVar57 + 2]) break;
                  if (pcVar56[uVar57 + 2] == '\0') goto LAB_03f1355c;
                  bVar26 = uVar57 < 0x7fffe;
                  uVar57 = uVar57 + 3;
                } while (uVar57 != 0x80001);
                plVar32 = plVar32 + 1;
              } while (plVar32 != plVar35);
            }
            bVar26 = *plVar38 == 0;
          }
          plVar38 = (long *)(lVar60 + (ulong)uVar30 * 0x58 + 8);
          *plVar38 = 0;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          uVar57 = FUN_03b36b40(local_98,local_a8,&DAT_04066bd8);
          if (((uVar57 & 1) == 0) || (local_a8[4] != -0x60)) {
joined_r0x03f12d60:
            if (bVar26) {
LAB_03f12d64:
              *(undefined1 *)(lVar60 + (ulong)uVar30 * 0x58 + 0x50) = 0;
            }
          }
          else {
            uVar43 = *(uint *)(psVar46 + 4);
            uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar52 = uVar43;
            }
            if (uVar52 == 0) goto joined_r0x03f12d60;
            uVar4 = *(uint *)((long)psVar46 + (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar52 + 4)
            ;
            uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar43 = uVar4;
            }
            pcVar47 = (char *)((long)psVar46 + (ulong)uVar43 + (long)(int)uVar52);
            if (*pcVar47 == '\0') goto joined_r0x03f12d60;
            if (*(int *)(param_1 + 0x38) != 0) {
              plVar32 = *(long **)(param_1 + 0x40);
              plVar35 = plVar32 + *(int *)(param_1 + 0x38);
              do {
                pcVar56 = *(char **)(*plVar32 + 0x10);
                if (pcVar56 == pcVar47) {
LAB_03f135fc:
                  *plVar38 = *plVar32;
                  break;
                }
                uVar57 = 0;
                bVar27 = true;
                do {
                  if (pcVar56[uVar57] != pcVar47[uVar57]) break;
                  if (pcVar56[uVar57] == '\0') {
                    if (bVar27) goto LAB_03f135fc;
                    break;
                  }
                  if (pcVar56[uVar57 + 1] != pcVar47[uVar57 + 1]) break;
                  if (pcVar56[uVar57 + 1] == '\0') goto LAB_03f135fc;
                  if (pcVar56[uVar57 + 2] != pcVar47[uVar57 + 2]) break;
                  if (pcVar56[uVar57 + 2] == '\0') goto LAB_03f135fc;
                  bVar27 = uVar57 < 0x7fffe;
                  uVar57 = uVar57 + 3;
                } while (uVar57 != 0x80001);
                plVar32 = plVar32 + 1;
              } while (plVar32 != plVar35);
            }
            if (*plVar38 == 0) {
              bVar26 = true;
            }
            if (bVar26) goto LAB_03f12d64;
          }
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          uVar57 = FUN_03b36b40(local_98,local_a8,"ConditionBin");
          if ((uVar57 & 1) != 0) {
            if (local_a8[4] == -0x5e) {
              sVar6 = *psVar46;
              uVar43 = *(uint *)((long)psVar46 + (local_a8._0_8_ & 0xffffffff));
              uVar52 = local_a8._0_4_ + 8;
            }
            else {
              if (local_a8[4] != -0x5f) goto LAB_03f12e90;
              sVar6 = *psVar46;
              uVar43 = *(uint *)((long)psVar46 + (local_a8._0_8_ & 0xffffffff));
              uVar52 = local_a8._0_4_ + 4;
            }
            uVar4 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
            if (sVar6 != 0x5942) {
              uVar4 = uVar43;
            }
            if (*(short *)((long)psVar46 + (ulong)uVar52) == 0x3143) {
              uVar57 = (ulong)uVar4;
              lVar31 = *(long *)PTR_DAT_04bb2698;
              if (lVar31 == 0) {
                pvVar33 = malloc(uVar57);
              }
              else {
                plVar38 = param_3;
                if (param_3 == (long *)0x0) {
                  lVar40 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar38 = (long *)(lVar31 + 8);
                  if (lVar40 != 0) {
                    plVar38 = (long *)(lVar40 + 0xa8);
                  }
                  plVar38 = (long *)*plVar38;
                  if (plVar38 == (long *)0x0) {
                    pvVar33 = (void *)0x0;
                    goto LAB_03f12e6c;
                  }
                }
                pvVar33 = (void *)(**(code **)(*plVar38 + 0x30))(plVar38,uVar57,8);
              }
LAB_03f12e6c:
              memcpy(pvVar33,(short *)((long)psVar46 + (ulong)uVar52),uVar57);
            }
            else {
              pvVar33 = (void *)0x0;
            }
            *(void **)(lVar60 + (ulong)uVar30 * 0x58 + 0x48) = pvVar33;
          }
LAB_03f12e90:
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          uVar57 = FUN_03b36b40(local_98,local_a8,"SourceEndType");
          local_a8._8_8_ = 0;
          if (((uVar57 & 1) != 0) && (local_a8[4] == -0x60)) {
            uVar43 = *(uint *)(psVar46 + 4);
            uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar52 = uVar43;
            }
            if (uVar52 == 0) {
              local_a8._8_8_ = 0;
            }
            else {
              uVar4 = *(uint *)((long)psVar46 +
                               (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar52 + 4);
              uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
              if (*psVar46 != 0x5942) {
                uVar43 = uVar4;
              }
              local_a8._8_8_ = (long)psVar46 + (ulong)uVar43 + (long)(int)uVar52;
            }
          }
          local_c8 = (uint *)((ulong)local_c8 & 0xffffffff00000000);
          local_a8._0_8_ = puVar1 + 0x10;
          FUN_03f158dc(&local_c8,local_a8);
          *(undefined4 *)(lVar60 + (ulong)uVar30 * 0x58 + 0x10) = local_c8._0_4_;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          uVar57 = FUN_03b36b40(local_98,local_a8,"SourceEndMarker");
          lVar31 = 0;
          if (((uVar57 & 1) != 0) && (local_a8[4] == -0x60)) {
            uVar43 = *(uint *)(psVar46 + 4);
            uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar52 = uVar43;
            }
            if (uVar52 == 0) {
              lVar31 = 0;
            }
            else {
              uVar4 = *(uint *)((long)psVar46 +
                               (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar52 + 4);
              uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
              if (*psVar46 != 0x5942) {
                uVar43 = uVar4;
              }
              lVar31 = (long)psVar46 + (ulong)uVar43 + (long)(int)uVar52;
            }
          }
          lVar40 = lVar60 + (ulong)uVar30 * 0x58;
          *(long *)(lVar40 + 0x18) = lVar31;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          bVar28 = FUN_03b36b40(local_98,local_a8,"SourceEndOffset");
          uVar42 = local_a8._0_4_;
          if ((bVar28 & local_a8[4] == -0x2e) == 0) {
            uVar42 = 0;
          }
          *(undefined4 *)(lVar40 + 0x20) = uVar42;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          uVar57 = FUN_03b36b40(local_98,local_a8,"SourceFadeOut");
          if ((uVar57 & 1) == 0) {
LAB_03f13024:
            psVar62 = (short *)0x0;
            local_a8._8_8_ = 0;
          }
          else {
            if (local_a8[4] - 0xc0 < 2) {
              local_a8._8_8_ = (long)psVar46 + (local_a8._0_8_ & 0xffffffff);
            }
            else {
              if (local_a8[4] != 0xff) goto LAB_03f13024;
              local_a8._8_8_ = 0;
            }
            psVar62 = psVar46;
          }
          local_b8 = (short *)((ulong)local_b8 & 0xffffff0000000000);
          local_a8._0_8_ = psVar62;
          bVar28 = FUN_03b36b40(local_a8,&local_b8,"FadeTime");
          uVar42 = (int)local_b8;
          if ((bVar28 & local_b8._4_1_ == -0x2e) == 0) {
            uVar42 = 0;
          }
          *(undefined4 *)(lVar60 + (ulong)uVar30 * 0x58 + 0x24) = uVar42;
          local_b8 = (short *)((ulong)local_b8 & 0xffffff0000000000);
          uVar57 = FUN_03b36b40(local_a8,&local_b8,"FadeCurveType");
          if (((uVar57 & 1) != 0) && (local_b8._4_1_ == -0x60)) {
            uVar43 = *(uint *)(psVar62 + 4);
            uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
            if (*psVar62 != 0x5942) {
              uVar52 = uVar43;
            }
            if (uVar52 != 0) {
              uVar4 = *(uint *)((long)psVar62 + (long)(int)local_b8 * 4 + (long)(int)uVar52 + 4);
              uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
              if (*psVar62 != 0x5942) {
                uVar43 = uVar4;
              }
              local_b0 = (uint *)((long)psVar62 + (ulong)uVar43 + (long)(int)uVar52);
              local_b8 = (short *)(PTR_DAT_04bb2020 + 0x10);
              FUN_03f15c38(lVar60 + (ulong)uVar30 * 0x58 + 0x28,&local_b8);
            }
          }
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          FUN_03b36b40(local_98,local_a8,"DestinationStart");
          uVar43 = *(uint *)(psVar46 + 4);
          uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
          uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
          if (*psVar46 != 0x5942) {
            uVar52 = uVar43;
          }
          uVar4 = *(uint *)((long)psVar46 + (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar52 + 4);
          uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
          if (*psVar46 != 0x5942) {
            uVar43 = uVar4;
          }
          pcVar47 = (char *)((long)psVar46 + (ulong)uVar43 + (long)(int)uVar52);
          if (pcVar47 == PTR_s_SourceEnd_04bdefe8) {
LAB_03f13298:
            uVar52 = 0;
          }
          else if ((*pcVar47 == 'S') && (pcVar47[1] == 'o')) {
            if (((((pcVar47[2] != 'u') ||
                  ((((pcVar47[3] != 'r' || (pcVar47[4] != 'c')) || (pcVar47[5] != 'e')) ||
                   ((pcVar47[6] != 'E' || (pcVar47[7] != 'n')))))) || (pcVar47[8] != 'd')) ||
                (uVar52 = (uint)(byte)pcVar47[9], pcVar47[9] != 0)) &&
               (uVar52 = (uint)(pcVar47 == PTR_s_SourceEnd_04bdefe8 + 0xb),
               pcVar47 != PTR_s_SourceEnd_04bdefe8 + 0xb)) {
              if ((((pcVar47[2] != 'u') || (pcVar47[3] != 'r')) ||
                  ((pcVar47[4] != 'c' ||
                   (((pcVar47[5] != 'e' || (pcVar47[6] != 'F')) || (pcVar47[7] != 'i')))))) ||
                 (((pcVar47[8] != 'n' || (pcVar47[9] != 'i')) || (pcVar47[10] != 's'))))
              goto LAB_03f13298;
              if (((pcVar47[0xb] == 'h') && (pcVar47[0xc] == 'e')) && (pcVar47[0xd] == 'd')) {
                uVar52 = (uint)(pcVar47[0xe] == '\0');
              }
              else {
                uVar52 = 0;
              }
            }
          }
          else {
            uVar52 = (uint)(pcVar47 == PTR_s_SourceEnd_04bdefe8 + 0xb);
          }
          lVar31 = lVar60 + (ulong)uVar30 * 0x58;
          *(uint *)(lVar31 + 0x30) = uVar52;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          bVar28 = FUN_03b36b40(local_98,local_a8,"DestinationStartOffset");
          uVar42 = local_a8._0_4_;
          if ((bVar28 & local_a8[4] == -0x2e) == 0) {
            uVar42 = 0;
          }
          *(undefined4 *)(lVar31 + 0x3c) = uVar42;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          uVar57 = FUN_03b36b40(local_98,local_a8,"DestinationStartPositionType");
          local_a8._8_8_ = 0;
          if (((uVar57 & 1) != 0) && (local_a8[4] == -0x60)) {
            uVar43 = *(uint *)(psVar46 + 4);
            uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar52 = uVar43;
            }
            if (uVar52 == 0) {
              local_a8._8_8_ = 0;
            }
            else {
              uVar4 = *(uint *)((long)psVar46 +
                               (long)(int)local_a8._0_4_ * 4 + (long)(int)uVar52 + 4);
              uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
              if (*psVar46 != 0x5942) {
                uVar43 = uVar4;
              }
              local_a8._8_8_ = (long)psVar46 + (ulong)uVar43 + (long)(int)uVar52;
            }
          }
          local_c8 = (uint *)((ulong)local_c8 & 0xffffffff00000000);
          local_a8._0_8_ = PTR_DAT_04bb2020 + 0x10;
          FUN_03f15e74(&local_c8,local_a8);
          lVar31 = lVar60 + (ulong)uVar30 * 0x58;
          *(undefined4 *)(lVar31 + 0x34) = local_c8._0_4_;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          bVar28 = FUN_03b36b40(local_98,local_a8,"DestinationStartPosition");
          uVar42 = local_a8._0_4_;
          if ((bVar28 & local_a8[4] == -0x2e) == 0) {
            uVar42 = 0;
          }
          *(undefined4 *)(lVar31 + 0x38) = uVar42;
          local_a8._0_8_ = local_a8._0_8_ & 0xffffff0000000000;
          uVar57 = FUN_03b36b40(local_98,local_a8,"DestinationFadeIn");
          if ((uVar57 & 1) == 0) {
LAB_03f13400:
            psVar46 = (short *)0x0;
LAB_03f13404:
            local_a8._8_8_ = 0;
          }
          else {
            if (1 < local_a8[4] - 0xc0) {
              if (local_a8[4] != 0xff) goto LAB_03f13400;
              goto LAB_03f13404;
            }
            local_a8._8_8_ = (long)psVar46 + (local_a8._0_8_ & 0xffffffff);
          }
          local_b8 = (short *)((ulong)local_b8 & 0xffffff0000000000);
          local_a8._0_8_ = psVar46;
          bVar28 = FUN_03b36b40(local_a8,&local_b8,"FadeTime");
          uVar42 = (int)local_b8;
          if ((bVar28 & local_b8._4_1_ == -0x2e) == 0) {
            uVar42 = 0;
          }
          *(undefined4 *)(lVar60 + (ulong)uVar30 * 0x58 + 0x40) = uVar42;
          local_b8 = (short *)((ulong)local_b8 & 0xffffff0000000000);
          uVar57 = FUN_03b36b40(local_a8,&local_b8,"FadeCurveType");
          if (((uVar57 & 1) != 0) && (local_b8._4_1_ == -0x60)) {
            uVar43 = *(uint *)(psVar46 + 4);
            uVar52 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
            uVar52 = uVar52 >> 0x10 | uVar52 << 0x10;
            if (*psVar46 != 0x5942) {
              uVar52 = uVar43;
            }
            if (uVar52 != 0) {
              uVar4 = *(uint *)((long)psVar46 + (long)(int)local_b8 * 4 + (long)(int)uVar52 + 4);
              uVar43 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
              if (*psVar46 != 0x5942) {
                uVar43 = uVar4;
              }
              local_b0 = (uint *)((long)psVar46 + (ulong)uVar43 + (long)(int)uVar52);
              local_b8 = (short *)(PTR_DAT_04bb2020 + 0x10);
              FUN_03f15c38(lVar60 + (ulong)uVar30 * 0x58 + 0x44,&local_b8);
            }
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar55);
      }
    }
  }
  uVar42 = 1;
  uVar36 = 1;
LAB_03f129b4:
  *(undefined4 *)(param_1 + 0x20) = uVar42;
  return uVar36;
}

