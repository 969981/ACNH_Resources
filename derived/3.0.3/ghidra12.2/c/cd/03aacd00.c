
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03aacd00(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 long param_6)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  size_t __size;
  size_t __size_00;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 *puVar25;
  undefined *puVar26;
  long lVar27;
  long *plVar28;
  undefined4 *puVar29;
  long lVar30;
  ulong *puVar31;
  ulong *puVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  void *pvVar35;
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 *puVar39;
  long lVar40;
  ulong *puVar41;
  undefined8 *puVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  int iVar47;
  undefined *puVar48;
  size_t sVar49;
  byte *pbVar50;
  uint *puVar51;
  undefined1 *__dest;
  uint *puVar52;
  undefined8 *puVar53;
  int iVar54;
  ulong uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined *local_4c8;
  byte *local_4c0;
  undefined *local_4b8;
  byte *local_4b0;
  undefined4 local_4a8;
  undefined1 local_4a4 [31];
  undefined1 local_485;
  undefined8 local_480;
  byte *local_478;
  undefined4 local_470;
  byte local_46c [31];
  undefined1 local_44d;
  undefined1 local_6d;
  
  *(undefined8 *)(param_1 + 0x418) = param_3;
  *(undefined8 *)(param_1 + 0x440) = param_4;
  uVar36 = *(uint *)PTR_DAT_04bd0f28;
  if (0 < (int)uVar36) {
    sVar49 = (ulong)uVar36 * 0x28;
    lVar44 = *(long *)PTR_DAT_04bb2698;
    if (lVar44 == 0) {
      puVar29 = malloc(sVar49);
    }
    else {
      plVar28 = param_5;
      if (param_5 == (long *)0x0) {
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar28 = (long *)(lVar44 + 8);
        if (lVar27 != 0) {
          plVar28 = (long *)(lVar27 + 0xa8);
        }
        plVar28 = (long *)*plVar28;
        if (plVar28 == (long *)0x0) goto LAB_03aace74;
      }
      puVar29 = (undefined4 *)(**(code **)(*plVar28 + 0x30))(plVar28,sVar49,8);
    }
    if (puVar29 != (undefined4 *)0x0) {
      uVar37 = ((uint)((sVar49 - 0x28) / 0x28) & 0x7ffffff) + 1;
      uVar45 = (ulong)uVar37 & 3;
      puVar39 = puVar29;
      if ((uVar37 & 3) != 0) {
        do {
          *puVar39 = 5;
          uVar45 = uVar45 - 1;
          *(undefined8 *)(puVar39 + 6) = 0;
          *(undefined1 *)(puVar39 + 8) = 0;
          *(undefined8 *)(puVar39 + 2) = 0;
          *(undefined8 *)(puVar39 + 4) = 0;
          puVar39 = puVar39 + 10;
        } while (uVar45 != 0);
      }
      if (0x77 < sVar49 - 0x28) {
        do {
          *puVar39 = 5;
          *(undefined8 *)(puVar39 + 6) = 0;
          *(undefined1 *)(puVar39 + 8) = 0;
          puVar39[10] = 5;
          *(undefined8 *)(puVar39 + 0x10) = 0;
          *(undefined1 *)(puVar39 + 0x12) = 0;
          puVar39[0x14] = 5;
          *(undefined8 *)(puVar39 + 0x1a) = 0;
          *(undefined1 *)(puVar39 + 0x1c) = 0;
          puVar39[0x1e] = 5;
          *(undefined1 *)(puVar39 + 0x26) = 0;
          *(undefined8 *)(puVar39 + 0x20) = 0;
          *(undefined8 *)(puVar39 + 2) = 0;
          *(undefined8 *)(puVar39 + 4) = 0;
          *(undefined8 *)(puVar39 + 0xc) = 0;
          *(undefined8 *)(puVar39 + 0xe) = 0;
          *(undefined8 *)(puVar39 + 0x16) = 0;
          *(undefined8 *)(puVar39 + 0x18) = 0;
          *(undefined8 *)(puVar39 + 0x22) = 0;
          *(undefined8 *)(puVar39 + 0x24) = 0;
          puVar39 = puVar39 + 0x28;
        } while (puVar39 != puVar29 + (ulong)uVar36 * 10);
      }
      *(uint *)(param_1 + 0x7a8) = uVar36;
      *(undefined4 **)(param_1 + 0x7b0) = puVar29;
    }
  }
LAB_03aace74:
  puVar48 = PTR_DAT_04bb2028;
  lVar44 = *(long *)(param_1 + 8);
  if (*(char *)(lVar44 + 0xa10) != '\0') {
    iVar21 = *(int *)(lVar44 + 0x19a0);
    uVar38 = crc32b(0xffffffff,0x6c,0x4c11db7);
    lVar27 = param_1 + 0x4a8;
    *(undefined8 *)(param_1 + 0x548) = 0;
    local_470 = 0x20;
    local_46c[0] = 0;
    uVar38 = crc32b(uVar38,0x69,0x4c11db7);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    uVar56 = 4;
    if (iVar21 < 2) {
      uVar56 = 1;
    }
    puVar1 = puVar48 + 0x10;
    uVar38 = crc32b(uVar38,0x67,0x4c11db7);
    uVar38 = crc32b(uVar38,0x68,0x4c11db7);
    uVar38 = crc32b(uVar38,0x74,0x4c11db7);
    uVar38 = crc32b(uVar38,0x5f,0x4c11db7);
    uVar58 = crc32b(uVar38,0x6e,0x4c11db7);
    uVar58 = crc32b(uVar58,0x61,0x4c11db7);
    uVar58 = crc32b(uVar58,0x6d,0x4c11db7);
    uVar36 = crc32b(uVar58,0x65,0x4c11db7);
    *(uint *)(param_1 + 0x4b0) = ~uVar36;
    plVar28 = (long *)(param_1 + 0x450);
    if (*(long *)(param_1 + 0x458) != 0) {
      plVar28 = (long *)(*(long *)(param_1 + 0x458) + 0x10);
    }
    *plVar28 = lVar27;
    *(long *)(param_1 + 0x458) = lVar27;
    pbVar50 = *(byte **)(param_1 + 0x4c8);
    *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
    local_44d = 0;
    if (pbVar50 != local_46c) {
      local_480 = puVar1;
      local_478 = local_46c;
      (**(code **)(puVar48 + 0x28))(&local_480);
      lVar27 = 0;
      do {
        if (local_478[lVar27] == 0) goto LAB_03aacfdc;
        if (local_478[lVar27 + 1] == 0) {
          lVar27 = lVar27 + 1;
          goto LAB_03aacfdc;
        }
        if (local_478[lVar27 + 2] == 0) {
          lVar27 = lVar27 + 2;
          goto LAB_03aacfdc;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_03aacfdc:
      iVar54 = (int)lVar27;
      if (*(int *)(param_1 + 0x4d0) <= (int)lVar27) {
        iVar54 = *(int *)(param_1 + 0x4d0) + -1;
      }
      memcpy(pbVar50,local_46c,(long)iVar54);
      pbVar50[iVar54] = 0;
      lVar27 = *(long *)(param_1 + 0x458);
    }
    local_470 = 0x20;
    uVar38 = crc32b(uVar38,0x74,0x4c11db7);
    local_46c[0] = 0;
    *(undefined8 *)(param_1 + 0x508) = 0;
    uVar38 = crc32b(uVar38,0x79,0x4c11db7);
    uVar38 = crc32b(uVar38,0x70,0x4c11db7);
    uVar36 = crc32b(uVar38,0x65,0x4c11db7);
    *(uint *)(param_1 + 0x500) = ~uVar36;
    plVar28 = (long *)(param_1 + 0x450);
    if (lVar27 != 0) {
      plVar28 = (long *)(lVar27 + 0x10);
    }
    *plVar28 = param_1 + 0x4f8;
    *(long *)(param_1 + 0x458) = param_1 + 0x4f8;
    pbVar50 = *(byte **)(param_1 + 0x518);
    *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
    local_44d = 0;
    local_480 = puVar1;
    local_478 = local_46c;
    if (pbVar50 != local_46c) {
      (**(code **)(puVar48 + 0x28))(&local_480);
      lVar27 = 0;
      do {
        if (local_478[lVar27] == 0) goto LAB_03aad0ec;
        if (local_478[lVar27 + 1] == 0) {
          lVar27 = lVar27 + 1;
          goto LAB_03aad0ec;
        }
        if (local_478[lVar27 + 2] == 0) {
          lVar27 = lVar27 + 2;
          goto LAB_03aad0ec;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_03aad0ec:
      iVar54 = (int)lVar27;
      if (*(int *)(param_1 + 0x520) <= (int)lVar27) {
        iVar54 = *(int *)(param_1 + 0x520) + -1;
      }
      memcpy(pbVar50,local_46c,(long)iVar54);
      pbVar50[iVar54] = 0;
    }
    if (0 < (int)param_2) {
      sVar49 = (ulong)param_2 * 0xfc8 + 8;
      lVar27 = *(long *)PTR_DAT_04bb2698;
      if (lVar27 == 0) {
        puVar31 = malloc(sVar49);
joined_r0x03aad1a8:
        if (puVar31 != (ulong *)0x0) {
          lVar27 = (ulong)param_2 * 0xfc8;
          *puVar31 = (ulong)param_2;
          puVar41 = puVar31 + 1;
          do {
            FUN_03ac92c4(puVar41);
            puVar41 = puVar41 + 0x1f9;
            lVar27 = lVar27 + -0xfc8;
          } while (lVar27 != 0);
          *(ulong **)(param_1 + 0x480) = puVar31 + 1;
          *(uint *)(param_1 + 0x478) = param_2;
        }
      }
      else {
        plVar28 = param_5;
        if (param_5 != (long *)0x0) {
LAB_03aad178:
          puVar31 = (ulong *)(**(code **)(*plVar28 + 0x30))(plVar28,sVar49,8);
          goto joined_r0x03aad1a8;
        }
        lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar28 = (long *)(lVar27 + 8);
        if (lVar30 != 0) {
          plVar28 = (long *)(lVar30 + 0xa8);
        }
        plVar28 = (long *)*plVar28;
        if (plVar28 != (long *)0x0) goto LAB_03aad178;
      }
      iVar54 = param_2 << ((ulong)(1 < iVar21) << 1);
      uVar45 = (ulong)iVar54;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar45;
      sVar49 = (long)iVar54 * 0x68 + 8;
      if (0xfffffffffffffff7 < (ulong)((long)iVar54 * 0x68) ||
          SUB168(auVar23 * ZEXT816(0x68),8) != 0) {
        sVar49 = 0xffffffffffffffff;
      }
      lVar27 = *(long *)PTR_DAT_04bb2698;
      if (lVar27 == 0) {
        puVar31 = malloc(sVar49);
        puVar41 = (ulong *)PTR_DAT_04bb2f80;
joined_r0x03aad28c:
        PTR_DAT_04bb2f80 = (undefined *)puVar41;
        if (puVar31 != (ulong *)0x0) {
          puVar32 = puVar31 + 1;
          *puVar31 = uVar45;
          uVar55 = puVar41[2];
          uVar16 = puVar41[3];
          uVar43 = puVar41[4];
          uVar10 = puVar41[5];
          puVar48 = PTR_DAT_04bd0e98 + 0x10;
          uVar9 = *puVar41;
          uVar11 = puVar41[1];
          puVar31 = puVar32;
          do {
            puVar31[4] = uVar16;
            puVar31[5] = uVar43;
            puVar31[10] = uVar16;
            puVar31[2] = uVar11;
            puVar31[3] = uVar55;
            *puVar31 = (ulong)puVar48;
            puVar31[1] = uVar9;
            puVar31[6] = uVar10;
            puVar31[7] = uVar9;
            puVar31[0xb] = uVar43;
            puVar31[0xc] = uVar10;
            puVar31[8] = uVar11;
            puVar31[9] = uVar55;
            puVar31 = puVar31 + 0xd;
          } while (puVar31 != puVar32 + (long)iVar54 * 0xd);
          *(undefined4 *)(param_1 + 0x48c) = uVar56;
          *(uint *)(param_1 + 0x488) = param_2;
          *(ulong **)(param_1 + 0x490) = puVar32;
        }
      }
      else {
        plVar28 = param_5;
        if (param_5 != (long *)0x0) {
LAB_03aad268:
          puVar31 = (ulong *)(**(code **)(*plVar28 + 0x30))(plVar28,sVar49,8);
          puVar41 = (ulong *)PTR_DAT_04bb2f80;
          goto joined_r0x03aad28c;
        }
        lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar28 = (long *)(lVar27 + 8);
        if (lVar30 != 0) {
          plVar28 = (long *)(lVar30 + 0xa8);
        }
        plVar28 = (long *)*plVar28;
        if (plVar28 != (long *)0x0) goto LAB_03aad268;
      }
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar45;
      uVar55 = uVar45 * 0xf8;
      sVar49 = uVar55 + 8;
      if (0xfffffffffffffff7 < uVar55 || SUB168(auVar24 * ZEXT816(0xf8),8) != 0) {
        sVar49 = 0xffffffffffffffff;
      }
      lVar27 = *(long *)PTR_DAT_04bb2698;
      if (lVar27 == 0) {
        puVar31 = malloc(sVar49);
        puVar29 = (undefined4 *)PTR_DAT_04bd0ea8;
        puVar39 = (undefined4 *)PTR_DAT_04bd0eb0;
        puVar25 = (undefined4 *)PTR_DAT_04bd0eb8;
      }
      else {
        plVar28 = param_5;
        if (param_5 == (long *)0x0) {
          lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar28 = (long *)(lVar27 + 8);
          if (lVar30 != 0) {
            plVar28 = (long *)(lVar30 + 0xa8);
          }
          plVar28 = (long *)*plVar28;
          if (plVar28 == (long *)0x0) goto LAB_03aad444;
        }
        puVar31 = (ulong *)(**(code **)(*plVar28 + 0x30))(plVar28,sVar49,8);
        puVar29 = (undefined4 *)PTR_DAT_04bd0ea8;
        puVar39 = (undefined4 *)PTR_DAT_04bd0eb0;
        puVar25 = (undefined4 *)PTR_DAT_04bd0eb8;
      }
      PTR_DAT_04bd0ea8 = (undefined *)puVar29;
      PTR_DAT_04bd0eb0 = (undefined *)puVar39;
      PTR_DAT_04bd0eb8 = (undefined *)puVar25;
      if (puVar31 != (ulong *)0x0) {
        *puVar31 = uVar45;
        uVar57 = *puVar25;
        uVar38 = *puVar29;
        uVar58 = *puVar39;
        puVar48 = PTR_DAT_04bd0ed0 + 0x10;
        uVar33 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x20);
        uVar12 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x28);
        uVar6 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x30);
        uVar13 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x38);
        uVar7 = *(undefined8 *)PTR_DAT_04bbd558;
        uVar14 = *(undefined8 *)(PTR_DAT_04bbd558 + 8);
        uVar8 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x10);
        uVar15 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x18);
        uVar45 = 0;
        do {
          uVar43 = uVar45 + 0xf8;
          *(undefined1 *)((long)puVar31 + uVar45 + 0x11) = 1;
          *(undefined4 *)((long)puVar31 + uVar45 + 0x94) = uVar38;
          *(undefined4 *)((long)puVar31 + uVar45 + 0x98) = uVar58;
          *(undefined4 *)((long)puVar31 + uVar45 + 0x9c) = uVar57;
          *(undefined **)((long)puVar31 + uVar45 + 8) = puVar48;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xe0) = 0;
          *(undefined1 *)((long)puVar31 + uVar45 + 0xf8) = 1;
          *(undefined1 *)((long)puVar31 + uVar45 + 0x10) = 1;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xc0) = uVar33;
          *(undefined8 *)((long)puVar31 + uVar45 + 200) = uVar12;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xd0) = uVar6;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xd8) = uVar13;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xa0) = uVar7;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xa8) = uVar14;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xb0) = uVar8;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xb8) = uVar15;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xe8) = 0;
          *(undefined8 *)((long)puVar31 + uVar45 + 0xf0) = 0;
          uVar45 = uVar43;
        } while (uVar55 != uVar43);
        *(undefined4 *)(param_1 + 0x49c) = uVar56;
        *(uint *)(param_1 + 0x498) = param_2;
        *(ulong **)(param_1 + 0x4a0) = puVar31 + 1;
      }
    }
LAB_03aad444:
    local_480 = (undefined *)CONCAT44(local_480._4_4_,uVar56);
    iVar54 = *(int *)(param_1 + 0x478);
    if (iVar54 != 0) {
      lVar27 = *(long *)(param_1 + 0x480);
      iVar47 = 0;
      do {
        lVar30 = lVar27 + (long)iVar47 * 0xfc8;
        FUN_03ac9ec0(lVar30,&local_480,param_5);
        *(long *)(lVar30 + 0xfa8) = param_1;
        *(undefined1 **)(lVar30 + 0xfb0) = &LAB_03aaef24;
        *(undefined8 *)(lVar30 + 0xfb8) = 0;
        *(undefined ***)(lVar30 + 4000) = &PTR_LAB_04b71038;
        *(long *)(lVar30 + 0xf98) = lVar30 + 4000;
        *(undefined4 *)(lVar30 + 0x3c8) = 0;
        *(undefined1 *)(lVar30 + 0x448) = *(undefined1 *)(lVar44 + 0x1860);
        iVar22 = *(int *)(lVar44 + 0x19a0);
        *(undefined1 *)(lVar30 + 0x468) = 1;
        if (*(int *)(lVar30 + 0x370) <= iVar22) {
          iVar22 = *(int *)(lVar30 + 0x370);
        }
        if (iVar22 < 2) {
          iVar22 = 1;
        }
        *(int *)(lVar30 + 0x238) = iVar22;
        plVar28 = (long *)(lVar30 + 0x318);
        *(uint *)(*(long *)(lVar30 + 0x378) + 0x68) = (uint)*(byte *)(lVar44 + 0x1980);
        **(undefined4 **)(lVar30 + 0x318) = *(undefined4 *)(lVar44 + 0x19c0);
        **(undefined4 **)(lVar30 + 0x360) = *(undefined4 *)(lVar44 + 0x1880);
        if (1 < iVar21) {
          puVar51 = (uint *)(lVar30 + 0x370);
          plVar2 = (long *)(lVar30 + 0x378);
          plVar3 = (long *)(lVar30 + 0x360);
          *(uint *)(*plVar2 + (ulong)(1 < *puVar51) * 0x5d0 + 0x68) =
               (uint)*(byte *)(lVar44 + 0x1980);
          *(undefined4 *)(*plVar28 + 4) = *(undefined4 *)(lVar44 + 0x19e0);
          *(undefined4 *)(*plVar3 + 4) = *(undefined4 *)(lVar44 + 0x1880);
          lVar46 = 0xba0;
          if (*puVar51 < 3) {
            lVar46 = 0;
          }
          *(uint *)(*plVar2 + lVar46 + 0x68) = (uint)*(byte *)(lVar44 + 0x1980);
          *(undefined4 *)(*plVar28 + 8) = *(undefined4 *)(lVar44 + 0x1a00);
          *(undefined4 *)(*plVar3 + 8) = *(undefined4 *)(lVar44 + 0x1880);
          lVar46 = 0x1170;
          if (*puVar51 < 4) {
            lVar46 = 0;
          }
          *(uint *)(*plVar2 + lVar46 + 0x68) = (uint)*(byte *)(lVar44 + 0x1980);
          *(undefined4 *)(*plVar28 + 0xc) = *(undefined4 *)(lVar44 + 0x1a20);
          *(undefined4 *)(*plVar3 + 0xc) = *(undefined4 *)(lVar44 + 0x1880);
        }
        *(undefined4 *)(*plVar28 + (long)*(int *)(lVar30 + 0x238) * 4) =
             *(undefined4 *)(lVar44 + 0x1a40);
        iVar47 = iVar47 + 1;
      } while (iVar54 != iVar47);
    }
    FUN_006d8678(&local_480,"depth_shadow_parameter_%d",0);
    uVar33 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      uVar33 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
    }
    *(undefined8 *)(param_1 + 0x470) = uVar33;
    (**(code **)(local_480 + 0x18))(&local_480);
    uVar36 = (uint)*local_478;
    if (*local_478 != 0) {
      uVar37 = 0xffffffff;
      pbVar50 = local_478;
      do {
        pbVar50 = pbVar50 + 1;
        uVar37 = crc32b(uVar37,uVar36,0x4c11db7);
        uVar36 = (uint)*pbVar50;
      } while (uVar36 != 0);
      uVar36 = ~uVar37;
    }
    *(uint *)(param_1 + 0x464) = uVar36;
    plVar28 = (long *)(param_1 + 0x250);
    if (*(long *)(param_1 + 600) != 0) {
      plVar28 = (long *)(*(long *)(param_1 + 600) + 0x20);
    }
    *plVar28 = param_1 + 0x448;
    *(long *)(param_1 + 600) = param_1 + 0x448;
    if (0 < (int)param_2) {
      uVar36 = 0;
      do {
        *(uint *)(param_1 + 0x550) = *(uint *)(param_1 + 0x550) | 1 << (ulong)(uVar36 & 0x1f);
        uVar37 = uVar36;
        if (*(uint *)(param_1 + 0x478) <= uVar36) {
          uVar37 = 0;
        }
        uVar36 = uVar36 + 1;
        uVar38 = 1;
        if (*(char *)(*(long *)(param_1 + 8) + 0x1820) != '\0') {
          uVar38 = 2;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x480) + (ulong)uVar37 * 0xfc8 + 0x298) = uVar38;
      } while (param_2 != uVar36);
    }
    puVar48 = PTR_DAT_04bb2028;
    uVar36 = *(uint *)(*(long *)(param_1 + 8) + 0x16e0);
    if ((uVar36 != 0) && (0 < (int)uVar36)) {
      sVar49 = (ulong)uVar36 * 0x14;
      lVar44 = *(long *)PTR_DAT_04bb2698;
      if (lVar44 == 0) {
        puVar34 = malloc(sVar49);
      }
      else {
        plVar28 = param_5;
        if (param_5 == (long *)0x0) {
          lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar28 = (long *)(lVar44 + 8);
          if (lVar27 != 0) {
            plVar28 = (long *)(lVar27 + 0xa8);
          }
          plVar28 = (long *)*plVar28;
          if (plVar28 == (long *)0x0) goto LAB_03aad80c;
        }
        puVar34 = (undefined8 *)(**(code **)(*plVar28 + 0x30))(plVar28,sVar49,8);
      }
      if (puVar34 != (undefined8 *)0x0) {
        uVar37 = ((uint)((sVar49 - 0x14) / 0x14) & 0xfffffff) + 1;
        uVar45 = (ulong)uVar37 & 3;
        puVar53 = puVar34;
        if ((uVar37 & 3) != 0) {
          puVar42 = puVar34;
          do {
            puVar53 = (undefined8 *)((long)puVar42 + 0x14);
            *puVar42 = 0x3f80000000000000;
            puVar42[1] = 0;
            uVar45 = uVar45 - 1;
            *(undefined1 *)(puVar42 + 2) = 0;
            puVar42 = puVar53;
          } while (uVar45 != 0);
        }
        if (0x3b < sVar49 - 0x14) {
          do {
            *puVar53 = 0x3f80000000000000;
            puVar53[1] = 0;
            *(undefined1 *)(puVar53 + 2) = 0;
            *(undefined8 *)((long)puVar53 + 0x14) = 0x3f80000000000000;
            *(undefined8 *)((long)puVar53 + 0x1c) = 0;
            *(undefined1 *)((long)puVar53 + 0x24) = 0;
            *(undefined1 *)(puVar53 + 7) = 0;
            *(undefined8 *)((long)puVar53 + 0x3c) = 0x3f80000000000000;
            *(undefined8 *)((long)puVar53 + 0x44) = 0;
            *(undefined1 *)((long)puVar53 + 0x4c) = 0;
            puVar53[5] = 0x3f80000000000000;
            puVar53[6] = 0;
            puVar53 = puVar53 + 10;
          } while (puVar53 != (undefined8 *)((long)puVar34 + sVar49));
        }
        *(uint *)(param_1 + 0x15f0) = uVar36;
        *(undefined8 **)(param_1 + 0x15f8) = puVar34;
      }
    }
LAB_03aad80c:
    lVar44 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar44 + 0xa50) != '\0') {
    local_480 = PTR_DAT_04bb2020 + 0x10;
    local_478 = (byte *)0x40ec00a;
    uVar33 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      uVar33 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
    }
    *(undefined8 *)(param_1 + 0x1338) = uVar33;
    (**(code **)(local_480 + 0x18))(&local_480);
    uVar36 = (uint)*local_478;
    if (*local_478 != 0) {
      uVar37 = 0xffffffff;
      do {
        local_478 = local_478 + 1;
        uVar37 = crc32b(uVar37,uVar36,0x4c11db7);
        uVar36 = (uint)*local_478;
      } while (uVar36 != 0);
      uVar36 = ~uVar37;
    }
    *(uint *)(param_1 + 0x132c) = uVar36;
    local_46c[0] = 0;
    plVar28 = (long *)(param_1 + 0x250);
    if (*(long *)(param_1 + 600) != 0) {
      plVar28 = (long *)(*(long *)(param_1 + 600) + 0x20);
    }
    local_470 = 0x20;
    local_480 = puVar48 + 0x10;
    *plVar28 = param_1 + 0x1310;
    *(long *)(param_1 + 600) = param_1 + 0x1310;
    uVar38 = crc32b(0xffffffff,0x6c,0x4c11db7);
    *(undefined8 *)(param_1 + 0x1350) = 0;
    uVar38 = crc32b(uVar38,0x69,0x4c11db7);
    uVar38 = crc32b(uVar38,0x67,0x4c11db7);
    uVar38 = crc32b(uVar38,0x68,0x4c11db7);
    uVar38 = crc32b(uVar38,0x74,0x4c11db7);
    uVar38 = crc32b(uVar38,0x5f,0x4c11db7);
    uVar38 = crc32b(uVar38,0x6e,0x4c11db7);
    uVar38 = crc32b(uVar38,0x61,0x4c11db7);
    uVar38 = crc32b(uVar38,0x6d,0x4c11db7);
    uVar36 = crc32b(uVar38,0x65,0x4c11db7);
    *(uint *)(param_1 + 0x1348) = ~uVar36;
    plVar28 = (long *)(param_1 + 0x1318);
    if (*(long *)(param_1 + 0x1320) != 0) {
      plVar28 = (long *)(*(long *)(param_1 + 0x1320) + 0x10);
    }
    *plVar28 = param_1 + 0x1340;
    *(long *)(param_1 + 0x1320) = param_1 + 0x1340;
    pbVar50 = *(byte **)(param_1 + 0x1360);
    *(int *)(param_1 + 0x1328) = *(int *)(param_1 + 0x1328) + 1;
    local_44d = 0;
    local_478 = local_46c;
    if (pbVar50 != local_46c) {
      (**(code **)(puVar48 + 0x28))(&local_480);
      lVar44 = 0;
      do {
        if (local_478[lVar44] == 0) goto LAB_03aad9dc;
        if (local_478[lVar44 + 1] == 0) {
          lVar44 = lVar44 + 1;
          goto LAB_03aad9dc;
        }
        if (local_478[lVar44 + 2] == 0) {
          lVar44 = lVar44 + 2;
          goto LAB_03aad9dc;
        }
        lVar44 = lVar44 + 3;
      } while (lVar44 != 0x80001);
      lVar44 = 0;
LAB_03aad9dc:
      iVar21 = (int)lVar44;
      if (*(int *)(param_1 + 0x1368) <= (int)lVar44) {
        iVar21 = *(int *)(param_1 + 0x1368) + -1;
      }
      memcpy(pbVar50,local_46c,(long)iVar21);
      pbVar50[iVar21] = 0;
    }
    lVar44 = *(long *)(param_1 + 8);
    local_480 = (undefined *)
                CONCAT44(*(undefined4 *)(lVar44 + 0xf60),*(undefined4 *)(lVar44 + 0x15a0));
    local_478 = (byte *)CONCAT44(local_478._4_4_,*(undefined4 *)(lVar44 + 0xf64));
    FUN_03ab4d20(param_1 + 0x7b8,&local_480,param_5);
    lVar44 = *(long *)(param_1 + 8);
    *(ushort *)(param_1 + 0x43c) = *(ushort *)(param_1 + 0x43c) | 1;
  }
  uVar36 = *(uint *)(lVar44 + 0x1ae0);
  if (0 < (int)uVar36) {
    sVar49 = (ulong)uVar36 * 0x7e8 + 8;
    lVar44 = *(long *)PTR_DAT_04bb2698;
    if (lVar44 == 0) {
      puVar31 = malloc(sVar49);
      uVar45 = _DAT_04102200;
      uVar55 = _UNK_04102208;
    }
    else {
      plVar28 = param_5;
      if (param_5 == (long *)0x0) {
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar28 = (long *)(lVar44 + 8);
        if (lVar27 != 0) {
          plVar28 = (long *)(lVar27 + 0xa8);
        }
        plVar28 = (long *)*plVar28;
        if (plVar28 == (long *)0x0) goto LAB_03aadc50;
      }
      puVar31 = (ulong *)(**(code **)(*plVar28 + 0x30))(plVar28,sVar49,8);
      uVar45 = _DAT_04102200;
      uVar55 = _UNK_04102208;
    }
    _DAT_04102200 = uVar45;
    _UNK_04102208 = uVar55;
    if (puVar31 != (ulong *)0x0) {
      uVar38 = crc32b(0xffffffff,100,0x4c11db7);
      puVar41 = puVar31 + 1;
      *puVar31 = (ulong)uVar36;
      uVar17 = _UNK_04102888;
      uVar11 = _DAT_04102880;
      uVar10 = _UNK_041023d8;
      uVar16 = _DAT_041023d0;
      uVar9 = DAT_04102218;
      uVar43 = DAT_04102210;
      uVar38 = crc32b(uVar38,0x65,0x4c11db7);
      uVar38 = crc32b(uVar38,0x66,0x4c11db7);
      uVar38 = crc32b(uVar38,0x61,0x4c11db7);
      uVar38 = crc32b(uVar38,0x75,0x4c11db7);
      uVar38 = crc32b(uVar38,0x6c,0x4c11db7);
      puVar1 = PTR_DAT_04bd11d0 + 0x10;
      puVar4 = PTR_DAT_04bd1078 + 0x10;
      puVar5 = PTR_DAT_04bd1088 + 0x10;
      uVar37 = crc32b(uVar38,0x74,0x4c11db7);
      uVar37 = ~uVar37;
      puVar31 = puVar41;
      do {
        FUN_03ab6820(puVar31);
        puVar31[0x8d] = 0;
        *(undefined4 *)(puVar31 + 0x93) = 0x20;
        puVar31[0x90] = 0;
        *(uint *)(puVar31 + 0x8f) = uVar37;
        puVar31[0x8e] = (ulong)puVar1;
        puVar31[0x92] = (long)puVar31 + 0x49c;
        *(undefined1 *)((long)puVar31 + 0x4bb) = 0;
        *(undefined1 *)((long)puVar31 + 0x49c) = 0;
        puVar31[0x91] = (ulong)(puVar48 + 0x10);
        puVar31[0x9a] = 0;
        *(uint *)(puVar31 + 0x99) = uVar37;
        puVar31[0x98] = (ulong)puVar4;
        *(undefined4 *)(puVar31 + 0x9b) = 0;
        puVar31[0x9e] = 0;
        *(uint *)(puVar31 + 0x9d) = uVar37;
        puVar31[0x9c] = (ulong)puVar4;
        *(undefined4 *)(puVar31 + 0x9f) = 0;
        puVar31[0xa2] = 0;
        *(uint *)(puVar31 + 0xa1) = uVar37;
        puVar31[0xa0] = (ulong)puVar5;
        *(undefined1 *)(puVar31 + 0xa3) = 0;
        *(undefined1 **)((long)puVar31 + 0x59c) = &DAT_3f8000003f800000;
        *(undefined4 *)((long)puVar31 + 0x5a4) = 0x3f800000;
        *(undefined2 *)(puVar31 + 0xb5) = 0x100;
        FUN_03941294(puVar31 + 0xb6);
        puVar31[0xb2] = 0;
        *(undefined4 *)(puVar31 + 0xb3) = 0x3f800000;
        puVar31[0xa5] = uVar55;
        puVar31[0xa4] = uVar45;
        puVar31[0xab] = uVar55;
        puVar31[0xaa] = uVar45;
        puVar31[0xa9] = uVar10;
        puVar31[0xa8] = uVar16;
        puVar31[0xa7] = uVar17;
        puVar31[0xa6] = uVar11;
        puVar31[0xad] = uVar17;
        puVar31[0xac] = uVar11;
        puVar31[0xaf] = uVar10;
        puVar31[0xae] = uVar16;
        puVar31[0xb1] = uVar9;
        puVar31[0xb0] = uVar43;
        puVar31 = puVar31 + 0xfd;
      } while (puVar31 != puVar41 + (ulong)uVar36 * 0xfd);
      *(ulong **)(param_1 + 0x15d8) = puVar41;
      *(uint *)(param_1 + 0x15d0) = uVar36;
      puVar48 = PTR_DAT_04bb2028;
    }
  }
LAB_03aadc50:
  puVar1 = PTR_DAT_04bb2020;
  iVar21 = *(int *)(param_1 + 0x15d0);
  if (iVar21 != 0) {
    lVar44 = *(long *)(param_1 + 0x15d8);
    uVar45 = 0;
    uVar55 = 0;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      FUN_006d8678(&local_480,"projection_shadow_%d",uVar45);
      iVar54 = (int)uVar55;
      lVar46 = lVar44 + (long)iVar54 * 0x7e8;
      lVar27 = lVar46 + 0x300;
      lVar30 = *(long *)(lVar46 + 8);
      if (lVar30 != 0) {
        if (lVar30 == lVar27) {
          lVar40 = 0;
        }
        else {
          do {
            lVar40 = lVar30;
            lVar30 = *(long *)(lVar40 + 0x20);
            if (lVar30 == 0) goto LAB_03aadd68;
          } while (lVar30 != lVar27);
        }
        plVar28 = (long *)(lVar46 + 8);
        if (lVar40 != 0) {
          plVar28 = (long *)(lVar40 + 0x20);
        }
        *plVar28 = *(long *)(lVar46 + 800);
        if (*(long *)(lVar46 + 800) == 0) {
          *(long *)(lVar46 + 0x10) = lVar40;
        }
        *(undefined8 *)(lVar46 + 800) = 0;
      }
LAB_03aadd68:
      uVar33 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar33 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
      }
      *(undefined8 *)(lVar46 + 0x328) = uVar33;
      (**(code **)(local_480 + 0x18))(&local_480);
      uVar36 = (uint)*local_478;
      if (*local_478 != 0) {
        uVar37 = 0xffffffff;
        pbVar50 = local_478;
        do {
          pbVar50 = pbVar50 + 1;
          uVar37 = crc32b(uVar37,uVar36,0x4c11db7);
          uVar36 = (uint)*pbVar50;
        } while (uVar36 != 0);
        uVar36 = ~uVar37;
      }
      *(uint *)(lVar46 + 0x31c) = uVar36;
      local_4a4[0] = 0;
      plVar28 = (long *)(param_1 + 0x250);
      if (*(long *)(param_1 + 600) != 0) {
        plVar28 = (long *)(*(long *)(param_1 + 600) + 0x20);
      }
      *plVar28 = lVar27;
      *(long *)(param_1 + 600) = lVar27;
      lVar27 = lVar44 + (long)iVar54 * 0x7e8;
      local_485 = 0;
      local_4a8 = 0x20;
      local_4c0 = (byte *)0x40bd53e;
      *(undefined8 *)(lVar27 + 0x480) = 0;
      local_4c8 = puVar4;
      local_4b8 = puVar48 + 0x10;
      local_4b0 = local_4a4;
      (**(code **)(puVar1 + 0x28))(&local_4c8);
      uVar36 = (uint)*local_4c0;
      if (*local_4c0 != 0) {
        uVar37 = 0xffffffff;
        pbVar50 = local_4c0;
        do {
          pbVar50 = pbVar50 + 1;
          uVar37 = crc32b(uVar37,uVar36,0x4c11db7);
          uVar36 = (uint)*pbVar50;
        } while (uVar36 != 0);
        uVar36 = ~uVar37;
      }
      plVar28 = (long *)(lVar46 + 0x308);
      *(uint *)(lVar27 + 0x478) = uVar36;
      plVar2 = plVar28;
      if (*(long *)(lVar46 + 0x310) != 0) {
        plVar2 = (long *)(*(long *)(lVar46 + 0x310) + 0x10);
      }
      *plVar2 = lVar27 + 0x470;
      *(long *)(lVar46 + 0x310) = lVar27 + 0x470;
      *(int *)(lVar46 + 0x318) = *(int *)(lVar46 + 0x318) + 1;
      __dest = *(undefined1 **)(lVar44 + (long)iVar54 * 0x7e8 + 0x490);
      (**(code **)(local_4b8 + 0x18))(&local_4b8);
      pbVar50 = local_4b0;
      if (__dest != local_4b0) {
        (**(code **)(local_4b8 + 0x18))(&local_4b8);
        lVar27 = 0;
        do {
          if (local_4b0[lVar27] == '\0') goto LAB_03aadf00;
          if (local_4b0[lVar27 + 1] == '\0') {
            lVar27 = lVar27 + 1;
            goto LAB_03aadf00;
          }
          if (local_4b0[lVar27 + 2] == '\0') {
            lVar27 = lVar27 + 2;
            goto LAB_03aadf00;
          }
          lVar27 = lVar27 + 3;
        } while (lVar27 != 0x80001);
        lVar27 = 0;
LAB_03aadf00:
        iVar22 = *(int *)(lVar44 + (long)iVar54 * 0x7e8 + 0x498);
        iVar47 = (int)lVar27;
        if (iVar22 <= (int)lVar27) {
          iVar47 = iVar22 + -1;
        }
        memcpy(__dest,pbVar50,(long)iVar47);
        __dest[iVar47] = 0;
      }
      puVar26 = PTR_DAT_04bb2020;
      lVar27 = lVar44 + (long)iVar54 * 0x7e8;
      puVar5 = PTR_DAT_04bb2020 + 0x10;
      local_4b0 = (byte *)0x405b12c;
      *(undefined8 *)(lVar27 + 0x4d0) = 0;
      local_4b8 = puVar5;
      (**(code **)(puVar26 + 0x28))(&local_4b8);
      uVar36 = (uint)*local_4b0;
      if (*local_4b0 != 0) {
        uVar37 = 0xffffffff;
        do {
          local_4b0 = local_4b0 + 1;
          uVar37 = crc32b(uVar37,uVar36,0x4c11db7);
          uVar36 = (uint)*local_4b0;
        } while (uVar36 != 0);
        uVar36 = ~uVar37;
      }
      lVar30 = lVar44 + (long)iVar54 * 0x7e8;
      *(uint *)(lVar27 + 0x4c8) = uVar36;
      plVar2 = plVar28;
      if (*(long *)(lVar46 + 0x310) != 0) {
        plVar2 = (long *)(*(long *)(lVar46 + 0x310) + 0x10);
      }
      *plVar2 = lVar27 + 0x4c0;
      *(long *)(lVar46 + 0x310) = lVar27 + 0x4c0;
      *(int *)(lVar46 + 0x318) = *(int *)(lVar46 + 0x318) + 1;
      *(undefined4 *)(lVar30 + 0x4d8) = 0x3f800000;
      local_4b0 = (byte *)0x4079b4d;
      *(undefined8 *)(lVar30 + 0x4f0) = 0;
      local_4b8 = puVar5;
      (**(code **)(puVar26 + 0x28))(&local_4b8);
      uVar36 = (uint)*local_4b0;
      if (*local_4b0 != 0) {
        uVar37 = 0xffffffff;
        do {
          local_4b0 = local_4b0 + 1;
          uVar37 = crc32b(uVar37,uVar36,0x4c11db7);
          uVar36 = (uint)*local_4b0;
        } while (uVar36 != 0);
        uVar36 = ~uVar37;
      }
      lVar27 = lVar44 + (long)iVar54 * 0x7e8;
      *(uint *)(lVar30 + 0x4e8) = uVar36;
      plVar2 = plVar28;
      if (*(long *)(lVar46 + 0x310) != 0) {
        plVar2 = (long *)(*(long *)(lVar46 + 0x310) + 0x10);
      }
      *plVar2 = lVar30 + 0x4e0;
      *(long *)(lVar46 + 0x310) = lVar30 + 0x4e0;
      *(int *)(lVar46 + 0x318) = *(int *)(lVar46 + 0x318) + 1;
      *(undefined4 *)(lVar27 + 0x4f8) = 0x3f800000;
      puVar5 = PTR_DAT_04bb2020;
      local_4b8 = PTR_DAT_04bb2020 + 0x10;
      local_4b0 = (byte *)0x4074580;
      *(undefined8 *)(lVar27 + 0x510) = 0;
      (**(code **)(puVar5 + 0x28))(&local_4b8);
      uVar37 = (uint)*local_4b0;
      uVar36 = 0;
      if (*local_4b0 != 0) {
        uVar36 = 0xffffffff;
        pbVar50 = local_4b0;
        do {
          pbVar50 = pbVar50 + 1;
          uVar36 = crc32b(uVar36,uVar37,0x4c11db7);
          uVar37 = (uint)*pbVar50;
        } while (uVar37 != 0);
        uVar36 = ~uVar36;
      }
      lVar30 = *(long *)(lVar46 + 0x310);
      uVar45 = uVar55 + 1;
      *(uint *)(lVar27 + 0x508) = uVar36;
      uVar55 = uVar45 & 0xffffffff;
      if (lVar30 != 0) {
        plVar28 = (long *)(lVar30 + 0x10);
      }
      *plVar28 = lVar27 + 0x500;
      *(long *)(lVar46 + 0x310) = lVar27 + 0x500;
      iVar47 = *(int *)(lVar46 + 0x318);
      *(undefined1 *)(lVar44 + (long)iVar54 * 0x7e8 + 0x518) = 0;
      *(int *)(lVar46 + 0x318) = iVar47 + 1;
    } while (iVar21 != (int)uVar45);
  }
  lVar44 = *(long *)(param_1 + 8);
  if (*(char *)(lVar44 + 0xb90) != '\0') {
    lVar44 = *(long *)PTR_DAT_04bb2698;
    if (lVar44 == 0) {
      pvVar35 = malloc(0x8d0);
    }
    else {
      plVar28 = param_5;
      if (param_5 == (long *)0x0) {
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar28 = (long *)(lVar44 + 8);
        if (lVar27 != 0) {
          plVar28 = (long *)(lVar27 + 0xa8);
        }
        plVar28 = (long *)*plVar28;
      }
      pvVar35 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,0x8d0,8);
    }
    FUN_03ab7490(pvVar35);
    *(void **)(param_1 + 0x420) = pvVar35;
    FUN_03ab80c0(pvVar35,param_2,param_5);
    lVar27 = *(long *)(param_1 + 0x420);
    lVar44 = *(long *)(lVar27 + 8);
    if (lVar44 != 0) {
      if (lVar44 == lVar27 + 0x678) {
        lVar30 = 0;
      }
      else {
        do {
          lVar30 = lVar44;
          lVar44 = *(long *)(lVar30 + 0x20);
          if (lVar44 == 0) goto LAB_03aae1a4;
        } while (lVar44 != lVar27 + 0x678);
      }
      plVar28 = (long *)(lVar27 + 8);
      if (lVar30 != 0) {
        plVar28 = (long *)(lVar30 + 0x20);
      }
      *plVar28 = *(long *)(lVar27 + 0x698);
      if (*(long *)(lVar27 + 0x698) == 0) {
        *(long *)(lVar27 + 0x10) = lVar30;
      }
      *(undefined8 *)(lVar27 + 0x698) = 0;
      lVar27 = *(long *)(param_1 + 0x420);
    }
LAB_03aae1a4:
    local_480 = PTR_DAT_04bb2020 + 0x10;
    local_478 = (byte *)0x40ada58;
    uVar33 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      uVar33 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
    }
    *(undefined8 *)(lVar27 + 0x6a0) = uVar33;
    (**(code **)(local_480 + 0x18))(&local_480);
    uVar36 = (uint)*local_478;
    if (*local_478 != 0) {
      uVar37 = 0xffffffff;
      pbVar50 = local_478;
      do {
        pbVar50 = pbVar50 + 1;
        uVar37 = crc32b(uVar37,uVar36,0x4c11db7);
        uVar36 = (uint)*pbVar50;
      } while (uVar36 != 0);
      uVar36 = ~uVar37;
    }
    *(uint *)(lVar27 + 0x694) = uVar36;
    plVar28 = (long *)(param_1 + 0x250);
    if (*(long *)(param_1 + 600) != 0) {
      plVar28 = (long *)(*(long *)(param_1 + 600) + 0x20);
    }
    *plVar28 = lVar27 + 0x678;
    *(long *)(param_1 + 600) = lVar27 + 0x678;
    lVar44 = *(long *)(param_1 + 8);
  }
  if ((*(char *)(lVar44 + 0xa30) != '\0') && (*(char *)(lVar44 + 0xb10) != '\0')) {
    lVar44 = *(long *)PTR_DAT_04bb2698;
    if (lVar44 == 0) {
      puVar34 = malloc(0x5b8);
      if (puVar34 != (undefined8 *)0x0) goto LAB_03aae2a4;
LAB_03aae5d4:
      iVar21 = *(int *)(param_1 + 0x15e0);
      if (iVar21 == 0) goto LAB_03aaeb98;
      puVar53 = *(undefined8 **)(param_1 + 0x15e8);
    }
    else {
      plVar28 = param_5;
      if (param_5 == (long *)0x0) {
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar28 = (long *)(lVar44 + 8);
        if (lVar27 != 0) {
          plVar28 = (long *)(lVar27 + 0xa8);
        }
        plVar28 = (long *)*plVar28;
        if (plVar28 == (long *)0x0) goto LAB_03aae5d4;
      }
      puVar34 = (undefined8 *)(**(code **)(*plVar28 + 0x30))(plVar28,0x5b8,8);
      if (puVar34 == (undefined8 *)0x0) goto LAB_03aae5d4;
LAB_03aae2a4:
      *(undefined8 *)((long)puVar34 + 0x114) = 0;
      *(undefined8 *)((long)puVar34 + 0x11c) = 0;
      *(undefined8 *)((long)puVar34 + 0x124) = 0;
      *(undefined8 *)((long)puVar34 + 0x184) = 0;
      *(undefined8 *)((long)puVar34 + 0x18c) = 0;
      *(undefined8 *)((long)puVar34 + 0x17c) = 0;
      *(undefined8 *)((long)puVar34 + 0x1e4) = 0;
      puVar53 = puVar34 + 1;
      *(undefined4 *)puVar53 = 0;
      puVar34[0x40] = 0x42c800003f800000;
      puVar34[0x4d] = 0x42c800003f800000;
      puVar34[0x5a] = 0x42c800003f800000;
      puVar34[0x67] = 0x42c800003f800000;
      puVar34[0x74] = 0x42c800003f800000;
      puVar34[0x81] = 0x42c800003f800000;
      puVar34[0x8e] = 0x42c800003f800000;
      puVar34[0x9b] = 0x42c800003f800000;
      puVar34[0xa8] = 0x42c800003f800000;
      puVar34[0xb5] = 0x42c800003f800000;
      *puVar34 = 0xe;
      puVar34[2] = 0;
      *(undefined4 *)(puVar34 + 3) = 0;
      puVar34[4] = 0;
      *(undefined4 *)(puVar34 + 5) = 0;
      *(undefined1 *)(puVar34 + 8) = 0;
      *(undefined8 *)((long)puVar34 + 0x44) = 0;
      *(undefined8 *)((long)puVar34 + 0x4c) = 0;
      *(undefined8 *)((long)puVar34 + 0x54) = 0;
      *(undefined1 *)((long)puVar34 + 0x5c) = 0;
      *(undefined4 *)(puVar34 + 0xe) = 0;
      puVar34[0xf] = 0;
      *(undefined4 *)(puVar34 + 0x10) = 0;
      puVar34[0x11] = 0;
      *(undefined4 *)(puVar34 + 0x12) = 0;
      *(undefined1 *)(puVar34 + 0x15) = 0;
      *(undefined8 *)((long)puVar34 + 0xac) = 0;
      *(undefined8 *)((long)puVar34 + 0xb4) = 0;
      *(undefined8 *)((long)puVar34 + 0xbc) = 0;
      *(undefined1 *)((long)puVar34 + 0xc4) = 0;
      *(undefined4 *)(puVar34 + 0x1b) = 0;
      puVar34[0x1c] = 0;
      *(undefined4 *)(puVar34 + 0x1d) = 0;
      puVar34[0x1e] = 0;
      *(undefined4 *)(puVar34 + 0x1f) = 0;
      *(undefined1 *)(puVar34 + 0x22) = 0;
      *(undefined1 *)((long)puVar34 + 300) = 0;
      *(undefined4 *)(puVar34 + 0x28) = 0;
      puVar34[0x29] = 0;
      *(undefined4 *)(puVar34 + 0x2a) = 0;
      puVar34[0x2b] = 0;
      *(undefined4 *)(puVar34 + 0x2c) = 0;
      *(undefined1 *)(puVar34 + 0x2f) = 0;
      *(undefined1 *)((long)puVar34 + 0x194) = 0;
      *(undefined4 *)(puVar34 + 0x35) = 0;
      puVar34[0x36] = 0;
      *(undefined4 *)(puVar34 + 0x37) = 0;
      puVar34[0x38] = 0;
      *(undefined4 *)(puVar34 + 0x39) = 0;
      *(undefined1 *)(puVar34 + 0x3c) = 0;
      *(undefined1 *)((long)puVar34 + 0x1fc) = 0;
      puVar34[0x41] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x42) = 0;
      puVar34[0x43] = 0;
      *(undefined4 *)(puVar34 + 0x44) = 0;
      puVar34[0x45] = 0;
      *(undefined4 *)(puVar34 + 0x46) = 0;
      *(undefined1 *)(puVar34 + 0x49) = 0;
      puVar34[0x48] = 0;
      puVar34[0x47] = 0;
      *(undefined1 *)((long)puVar34 + 0x264) = 0;
      puVar34[0x4e] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x4f) = 0;
      puVar34[0x50] = 0;
      *(undefined4 *)(puVar34 + 0x51) = 0;
      puVar34[0x52] = 0;
      *(undefined4 *)(puVar34 + 0x53) = 0;
      *(undefined1 *)(puVar34 + 0x56) = 0;
      puVar34[0x55] = 0;
      puVar34[0x54] = 0;
      *(undefined1 *)((long)puVar34 + 0x2cc) = 0;
      puVar34[0x5b] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x5c) = 0;
      puVar34[0x5d] = 0;
      *(undefined4 *)(puVar34 + 0x5e) = 0;
      puVar34[0x5f] = 0;
      *(undefined4 *)(puVar34 + 0x60) = 0;
      *(undefined1 *)(puVar34 + 99) = 0;
      puVar34[0x62] = 0;
      puVar34[0x61] = 0;
      *(undefined1 *)((long)puVar34 + 0x334) = 0;
      puVar34[0x68] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x69) = 0;
      puVar34[0x6a] = 0;
      *(undefined4 *)(puVar34 + 0x6b) = 0;
      puVar34[0x6c] = 0;
      *(undefined4 *)(puVar34 + 0x6d) = 0;
      *(undefined1 *)(puVar34 + 0x70) = 0;
      puVar34[0x6f] = 0;
      puVar34[0x6e] = 0;
      *(undefined1 *)((long)puVar34 + 0x39c) = 0;
      puVar34[0x75] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x76) = 0;
      puVar34[0x77] = 0;
      *(undefined4 *)(puVar34 + 0x78) = 0;
      puVar34[0x79] = 0;
      *(undefined4 *)(puVar34 + 0x7a) = 0;
      *(undefined1 *)(puVar34 + 0x7d) = 0;
      puVar34[0x7c] = 0;
      puVar34[0x7b] = 0;
      *(undefined1 *)((long)puVar34 + 0x404) = 0;
      puVar34[0x82] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x83) = 0;
      puVar34[0x84] = 0;
      *(undefined4 *)(puVar34 + 0x85) = 0;
      puVar34[0x86] = 0;
      *(undefined4 *)(puVar34 + 0x87) = 0;
      *(undefined1 *)(puVar34 + 0x8a) = 0;
      puVar34[0x89] = 0;
      puVar34[0x88] = 0;
      *(undefined1 *)((long)puVar34 + 0x46c) = 0;
      puVar34[0x8f] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x90) = 0;
      puVar34[0x91] = 0;
      *(undefined4 *)(puVar34 + 0x92) = 0;
      puVar34[0x93] = 0;
      *(undefined4 *)(puVar34 + 0x94) = 0;
      *(undefined1 *)(puVar34 + 0x97) = 0;
      puVar34[0x96] = 0;
      puVar34[0x95] = 0;
      *(undefined1 *)((long)puVar34 + 0x4d4) = 0;
      puVar34[0x9c] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0x9d) = 0;
      puVar34[0x9e] = 0;
      *(undefined4 *)(puVar34 + 0x9f) = 0;
      puVar34[0xa0] = 0;
      *(undefined4 *)(puVar34 + 0xa1) = 0;
      *(undefined1 *)(puVar34 + 0xa4) = 0;
      puVar34[0xa3] = 0;
      puVar34[0xa2] = 0;
      *(undefined1 *)((long)puVar34 + 0x53c) = 0;
      puVar34[0xa9] = 0x3f3333333f800000;
      *(undefined4 *)(puVar34 + 0xaa) = 0;
      puVar34[0xab] = 0;
      *(undefined4 *)(puVar34 + 0xac) = 0;
      puVar34[0xad] = 0;
      *(undefined4 *)(puVar34 + 0xae) = 0;
      *(undefined1 *)(puVar34 + 0xb1) = 0;
      puVar34[0xb0] = 0;
      puVar34[0xaf] = 0;
      *(undefined1 *)((long)puVar34 + 0x5a4) = 0;
      puVar34[0xb6] = 0x3f3333333f800000;
      *(undefined8 *)((long)puVar34 + 0x1ec) = 0;
      *(undefined8 *)((long)puVar34 + 500) = 0;
      *(undefined8 *)((long)puVar34 + 0x24c) = 0;
      *(undefined8 *)((long)puVar34 + 0x254) = 0;
      *(undefined8 *)((long)puVar34 + 0x25c) = 0;
      *(undefined8 *)((long)puVar34 + 0x2b4) = 0;
      *(undefined8 *)((long)puVar34 + 700) = 0;
      *(undefined8 *)((long)puVar34 + 0x2c4) = 0;
      *(undefined8 *)((long)puVar34 + 0x31c) = 0;
      *(undefined8 *)((long)puVar34 + 0x324) = 0;
      *(undefined8 *)((long)puVar34 + 0x32c) = 0;
      *(undefined8 *)((long)puVar34 + 900) = 0;
      *(undefined8 *)((long)puVar34 + 0x38c) = 0;
      *(undefined8 *)((long)puVar34 + 0x394) = 0;
      *(undefined8 *)((long)puVar34 + 0x3ec) = 0;
      *(undefined8 *)((long)puVar34 + 0x3f4) = 0;
      *(undefined8 *)((long)puVar34 + 0x3fc) = 0;
      *(undefined8 *)((long)puVar34 + 0x454) = 0;
      *(undefined8 *)((long)puVar34 + 0x45c) = 0;
      *(undefined8 *)((long)puVar34 + 0x464) = 0;
      *(undefined8 *)((long)puVar34 + 0x4bc) = 0;
      *(undefined8 *)((long)puVar34 + 0x4c4) = 0;
      *(undefined8 *)((long)puVar34 + 0x4cc) = 0;
      *(undefined8 *)((long)puVar34 + 0x524) = 0;
      puVar34[0xc] = 0x42c800003f800000;
      puVar34[0xd] = 0x3f3333333f800000;
      puVar34[0x19] = 0x42c800003f800000;
      puVar34[0x1a] = 0x3f3333333f800000;
      puVar34[0x26] = 0x42c800003f800000;
      puVar34[0x27] = 0x3f3333333f800000;
      puVar34[0x33] = 0x42c800003f800000;
      puVar34[0x34] = 0x3f3333333f800000;
      iVar21 = 0xe;
      *(undefined8 *)((long)puVar34 + 0x52c) = 0;
      *(undefined8 *)((long)puVar34 + 0x534) = 0;
      *(undefined8 *)((long)puVar34 + 0x58c) = 0;
      puVar34[6] = 0;
      puVar34[7] = 0;
      puVar34[0x13] = 0;
      puVar34[0x14] = 0;
      puVar34[0x20] = 0;
      puVar34[0x21] = 0;
      puVar34[0x2d] = 0;
      puVar34[0x2e] = 0;
      puVar34[0x3a] = 0;
      puVar34[0x3b] = 0;
      *(undefined8 *)((long)puVar34 + 0x594) = 0;
      *(undefined8 *)((long)puVar34 + 0x59c) = 0;
      *(undefined4 *)(param_1 + 0x15e0) = 0xe;
      *(undefined8 **)(param_1 + 0x15e8) = puVar53;
    }
    puVar5 = PTR_DAT_04bbd558;
    puVar4 = PTR_DAT_04bb2f80;
    uVar45 = (ulong)param_2;
    uVar43 = (ulong)param_2 * 0x68 - 0x68;
    lVar44 = (ulong)param_2 * 0x100 + (ulong)param_2 * -8;
    uVar55 = lVar44 - 0xf8;
    sVar49 = (ulong)param_2 * 0x68 + 8;
    __size = lVar44 + 8;
    __size_00 = (ulong)param_2 * 0xfc8 + 8;
    puVar48 = PTR_DAT_04bd0e98 + 0x10;
    iVar54 = 0;
    puVar1 = PTR_DAT_04bd0ed0 + 0x10;
    do {
      puVar51 = (uint *)(puVar53 + (long)iVar54 * 0xd);
      if (0 < (int)param_2) {
        lVar44 = *(long *)PTR_DAT_04bb2698;
        if (lVar44 == 0) {
          puVar31 = malloc(__size_00);
joined_r0x03aae76c:
          if (puVar31 != (ulong *)0x0) {
            *puVar31 = uVar45;
            lVar44 = (ulong)param_2 * 0xfc8;
            puVar41 = puVar31 + 1;
            do {
              FUN_03ac92c4(puVar41);
              puVar41 = puVar41 + 0x1f9;
              lVar44 = lVar44 + -0xfc8;
            } while (lVar44 != 0);
            *(ulong **)(puVar51 + 2) = puVar31 + 1;
            *puVar51 = param_2;
          }
          puVar52 = (uint *)(puVar53 + (long)iVar54 * 0xd + 2);
          lVar44 = *(long *)PTR_DAT_04bb2698;
          if (lVar44 == 0) goto LAB_03aae840;
          if (param_5 != (long *)0x0) {
            plVar28 = param_5;
LAB_03aae81c:
            puVar31 = (ulong *)(**(code **)(*plVar28 + 0x30))(plVar28,sVar49,8);
            goto joined_r0x03aae830;
          }
LAB_03aae7f0:
          lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar28 = (long *)(lVar44 + 8);
          if (lVar27 != 0) {
            plVar28 = (long *)(lVar27 + 0xa8);
          }
          plVar28 = (long *)*plVar28;
          if (plVar28 != (long *)0x0) goto LAB_03aae81c;
          puVar52 = (uint *)(puVar53 + (long)iVar54 * 0xd + 4);
          lVar44 = *(long *)PTR_DAT_04bb2698;
          if (lVar44 != 0) goto LAB_03aae95c;
LAB_03aae9b0:
          puVar31 = malloc(__size);
        }
        else {
          plVar28 = param_5;
          if (param_5 != (long *)0x0) {
LAB_03aae738:
            puVar31 = (ulong *)(**(code **)(*plVar28 + 0x30))(plVar28,__size_00,8);
            goto joined_r0x03aae76c;
          }
          lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar28 = (long *)(lVar44 + 8);
          if (lVar27 != 0) {
            plVar28 = (long *)(lVar27 + 0xa8);
          }
          plVar28 = (long *)*plVar28;
          if (plVar28 != (long *)0x0) goto LAB_03aae738;
          puVar52 = (uint *)(puVar53 + (long)iVar54 * 0xd + 2);
          lVar44 = *(long *)PTR_DAT_04bb2698;
          if (lVar44 != 0) goto LAB_03aae7f0;
LAB_03aae840:
          puVar31 = malloc(sVar49);
joined_r0x03aae830:
          if (puVar31 != (ulong *)0x0) {
            puVar32 = puVar31 + 1;
            *puVar31 = uVar45;
            puVar41 = puVar32;
            if ((uVar43 / 0x68 & 1) == 0) {
              uVar9 = *(ulong *)(puVar4 + 0x10);
              uVar11 = *(ulong *)(puVar4 + 0x18);
              puVar31[0xb] = uVar11;
              uVar16 = *(ulong *)puVar4;
              uVar17 = *(ulong *)(puVar4 + 8);
              uVar10 = *(ulong *)(puVar4 + 0x20);
              uVar18 = *(ulong *)(puVar4 + 0x28);
              puVar31[3] = uVar17;
              puVar31[4] = uVar9;
              puVar31[9] = uVar17;
              puVar31[10] = uVar9;
              puVar41 = puVar31 + 0xe;
              puVar31[5] = uVar11;
              puVar31[6] = uVar10;
              puVar31[1] = (ulong)puVar48;
              puVar31[2] = uVar16;
              puVar31[7] = uVar18;
              puVar31[8] = uVar16;
              puVar31[0xc] = uVar10;
              puVar31[0xd] = uVar18;
            }
            puVar26 = PTR_DAT_04bd0e98;
            if (0x67 < uVar43) {
              do {
                uVar9 = *(ulong *)(puVar4 + 0x10);
                uVar11 = *(ulong *)(puVar4 + 0x18);
                uVar16 = *(ulong *)(puVar4 + 0x20);
                uVar17 = *(ulong *)(puVar4 + 0x28);
                uVar10 = *(ulong *)puVar4;
                uVar18 = *(ulong *)(puVar4 + 8);
                puVar41[4] = uVar11;
                puVar41[5] = uVar16;
                puVar41[2] = uVar18;
                puVar41[3] = uVar9;
                *puVar41 = (ulong)(puVar26 + 0x10);
                puVar41[1] = uVar10;
                puVar41[6] = uVar17;
                puVar41[7] = uVar10;
                puVar41[8] = uVar18;
                puVar41[9] = uVar9;
                puVar41[10] = uVar11;
                puVar41[0xb] = uVar16;
                puVar41[0x12] = uVar16;
                puVar41[0x13] = uVar17;
                puVar41[0x10] = uVar9;
                puVar41[0x11] = uVar11;
                puVar41[0xe] = uVar10;
                puVar41[0xf] = uVar18;
                puVar41[0xc] = uVar17;
                puVar41[0xd] = (ulong)(puVar26 + 0x10);
                puVar41[0x16] = uVar9;
                puVar41[0x17] = uVar11;
                puVar41[0x18] = uVar16;
                puVar41[0x19] = uVar17;
                puVar41[0x14] = uVar10;
                puVar41[0x15] = uVar18;
                puVar41 = puVar41 + 0x1a;
              } while (puVar41 != puVar32 + uVar45 * 0xd);
            }
            *puVar52 = param_2;
            puVar53[(long)iVar54 * 0xd + 3] = puVar32;
          }
          puVar52 = (uint *)(puVar53 + (long)iVar54 * 0xd + 4);
          lVar44 = *(long *)PTR_DAT_04bb2698;
          if (lVar44 == 0) goto LAB_03aae9b0;
          if (param_5 == (long *)0x0) {
LAB_03aae95c:
            lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar28 = (long *)(lVar44 + 8);
            if (lVar27 != 0) {
              plVar28 = (long *)(lVar27 + 0xa8);
            }
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) goto LAB_03aaeb0c;
          }
          else {
            plVar28 = param_5;
          }
          puVar31 = (ulong *)(**(code **)(*plVar28 + 0x30))(plVar28,__size,8);
        }
        puVar26 = PTR_DAT_04bd0ed0;
        if (puVar31 != (ulong *)0x0) {
          puVar32 = puVar31 + 1;
          *puVar31 = uVar45;
          uVar38 = *(undefined4 *)PTR_DAT_04bd0ea8;
          uVar56 = *(undefined4 *)PTR_DAT_04bd0eb0;
          uVar58 = *(undefined4 *)PTR_DAT_04bd0eb8;
          puVar41 = puVar32;
          if ((uVar55 / 0xf8 & 1) == 0) {
            *(undefined1 *)((long)puVar31 + 0x11) = 1;
            *(undefined4 *)((long)puVar31 + 0x94) = uVar38;
            *(undefined4 *)(puVar31 + 0x13) = uVar56;
            *(undefined4 *)((long)puVar31 + 0x9c) = uVar58;
            puVar31[0x1c] = 0;
            *(undefined1 *)(puVar31 + 0x1f) = 1;
            *(undefined1 *)(puVar31 + 2) = 1;
            puVar31[1] = (ulong)puVar1;
            uVar9 = *(ulong *)(puVar5 + 0x20);
            uVar16 = *(ulong *)(puVar5 + 0x28);
            puVar31[0x1d] = 0;
            puVar31[0x1e] = 0;
            puVar31[0x18] = uVar9;
            puVar31[0x19] = uVar16;
            uVar9 = *(ulong *)(puVar5 + 0x38);
            puVar31[0x1a] = *(ulong *)(puVar5 + 0x30);
            puVar31[0x1b] = uVar9;
            uVar9 = *(ulong *)(puVar5 + 8);
            puVar31[0x14] = *(ulong *)puVar5;
            puVar31[0x15] = uVar9;
            uVar9 = *(ulong *)(puVar5 + 0x18);
            puVar31[0x16] = *(ulong *)(puVar5 + 0x10);
            puVar31[0x17] = uVar9;
            puVar41 = puVar31 + 0x20;
          }
          if (0xf7 < uVar55) {
            do {
              uVar9 = *(ulong *)(puVar5 + 0x20);
              uVar17 = *(ulong *)(puVar5 + 0x28);
              uVar16 = *(ulong *)(puVar5 + 0x30);
              uVar18 = *(ulong *)(puVar5 + 0x38);
              *(undefined1 *)((long)puVar41 + 9) = 1;
              uVar10 = *(ulong *)puVar5;
              uVar19 = *(ulong *)(puVar5 + 8);
              *(undefined4 *)((long)puVar41 + 0x8c) = uVar38;
              uVar11 = *(ulong *)(puVar5 + 0x10);
              uVar20 = *(ulong *)(puVar5 + 0x18);
              *(undefined4 *)(puVar41 + 0x12) = uVar56;
              *(undefined4 *)((long)puVar41 + 0x94) = uVar58;
              *puVar41 = (ulong)(puVar26 + 0x10);
              puVar41[0x1b] = 0;
              *(undefined1 *)(puVar41 + 0x1e) = 1;
              *(undefined1 *)(puVar41 + 1) = 1;
              *(undefined1 *)((long)puVar41 + 0x101) = 1;
              *(undefined4 *)((long)puVar41 + 0x184) = uVar38;
              *(undefined4 *)(puVar41 + 0x31) = uVar56;
              *(undefined4 *)((long)puVar41 + 0x18c) = uVar58;
              puVar41[0x1f] = (ulong)(puVar26 + 0x10);
              puVar41[0x3a] = 0;
              *(undefined1 *)(puVar41 + 0x3d) = 1;
              *(undefined1 *)(puVar41 + 0x20) = 1;
              puVar41[0x17] = uVar9;
              puVar41[0x18] = uVar17;
              puVar41[0x19] = uVar16;
              puVar41[0x1a] = uVar18;
              puVar41[0x13] = uVar10;
              puVar41[0x14] = uVar19;
              puVar41[0x15] = uVar11;
              puVar41[0x16] = uVar20;
              puVar41[0x1c] = 0;
              puVar41[0x1d] = 0;
              puVar41[0x36] = uVar9;
              puVar41[0x37] = uVar17;
              puVar41[0x38] = uVar16;
              puVar41[0x39] = uVar18;
              puVar41[0x32] = uVar10;
              puVar41[0x33] = uVar19;
              puVar41[0x34] = uVar11;
              puVar41[0x35] = uVar20;
              puVar41[0x3b] = 0;
              puVar41[0x3c] = 0;
              puVar41 = puVar41 + 0x3e;
            } while (puVar41 != puVar32 + uVar45 * 0x1f);
          }
          *puVar52 = param_2;
          puVar53[(long)iVar54 * 0xd + 5] = puVar32;
        }
      }
LAB_03aaeb0c:
      local_480 = (undefined *)CONCAT44(local_480._4_4_,1);
      uVar36 = *puVar51;
      if (uVar36 != 0) {
        lVar44 = *(long *)(puVar51 + 2);
        uVar37 = 0;
        do {
          lVar27 = lVar44 + (long)(int)uVar37 * 0xfc8;
          FUN_03ac9ec0(lVar27,&local_480,param_5);
          *(long *)(lVar27 + 0xf98) = lVar27 + 4000;
          uVar37 = uVar37 + 1;
          *(undefined1 **)(lVar27 + 0xfb0) = &LAB_03aaef24;
          *(long *)(lVar27 + 0xfa8) = param_1;
          *(undefined8 *)(lVar27 + 0xfb8) = 0;
          *(undefined ***)(lVar27 + 4000) = &PTR_LAB_04b71038;
          *(undefined4 *)(lVar27 + 1000) = 0x100;
          *(undefined4 *)(lVar27 + 0x408) = 0x100;
          *(undefined4 *)(lVar27 + 0x3c8) = 0;
          *(undefined1 *)(lVar27 + 0x448) = 0;
          *(undefined1 *)(lVar27 + 0x468) = 1;
        } while (uVar36 != uVar37);
      }
      iVar54 = iVar54 + 1;
    } while (iVar21 != iVar54);
  }
LAB_03aaeb98:
  if (param_6 != 0) {
    local_6d = 0;
    local_470 = 0x400;
    local_478 = local_46c;
    local_46c[0] = 0;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_04098eac);
  }
  lVar44 = *(long *)(param_1 + 8);
  if (*(char *)(lVar44 + 0xd70) == '\0') goto LAB_03aaecdc;
  lVar44 = *(long *)PTR_DAT_04bb2698;
  if (lVar44 == 0) {
    plVar28 = malloc(0x838);
  }
  else {
    plVar28 = param_5;
    if (param_5 == (long *)0x0) {
      lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar44 + 8);
      if (lVar27 != 0) {
        plVar28 = (long *)(lVar27 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_03aaec54;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x838,8);
  }
LAB_03aaec54:
  puVar48 = PTR_DAT_04bd1490;
  *(undefined4 *)(plVar28 + 2) = 0;
  plVar28[3] = 0;
  *(undefined4 *)(plVar28 + 1) = 0x10;
  *(undefined4 *)(plVar28 + 4) = 0;
  plVar28[5] = 0;
  *plVar28 = (long)(puVar48 + 0x10);
  FUN_0390e190(plVar28 + 6);
  FUN_0390e190(plVar28 + 0x42);
  FUN_0390e190(plVar28 + 0x7e);
  *(undefined4 *)(plVar28 + 0xbb) = 0;
  plVar28[0xba] = 0x3f80000000000000;
  FUN_03941294(plVar28 + 0xbc);
  plVar28[0x103] = 0x3f80000000000000;
  *(undefined4 *)(plVar28 + 0x104) = 8;
  *(undefined4 *)(plVar28 + 0x105) = 0;
  plVar28[0x106] = 0;
  *(long **)(param_1 + 0x428) = plVar28;
  FUN_03abcf10(plVar28,param_2,0x80,param_5);
  lVar44 = *(long *)(param_1 + 8);
LAB_03aaecdc:
  if (*(char *)(lVar44 + 0xb30) != '\0') {
    lVar44 = *(long *)PTR_DAT_04bb2698;
    if (lVar44 == 0) {
      pvVar35 = malloc(0x828);
    }
    else {
      plVar28 = param_5;
      if (param_5 == (long *)0x0) {
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar28 = (long *)(lVar44 + 8);
        if (lVar27 != 0) {
          plVar28 = (long *)(lVar27 + 0xa8);
        }
        plVar28 = (long *)*plVar28;
      }
      pvVar35 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,0x828,8);
    }
    FUN_03ac0580();
    *(void **)(param_1 + 0x430) = pvVar35;
    FUN_03ac1840(pvVar35,param_2,param_5);
  }
  puVar34 = *(undefined8 **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x548) = 0;
  if (puVar34 != &DAT_0407ebb1) {
    iVar21 = 0;
    if (*(int *)(param_1 + 0x4d0) < 1) {
      iVar21 = *(int *)(param_1 + 0x4d0) + -1;
    }
    memset(puVar34,0,(long)iVar21);
    *(undefined1 *)((long)puVar34 + (long)iVar21) = 0;
  }
  puVar34 = *(undefined8 **)(param_1 + 0x518);
  if (puVar34 != &DAT_0407ebb1) {
    iVar21 = 0;
    if (*(int *)(param_1 + 0x520) < 1) {
      iVar21 = *(int *)(param_1 + 0x520) + -1;
    }
    memset(puVar34,0,(long)iVar21);
    *(undefined1 *)((long)puVar34 + (long)iVar21) = 0;
  }
  puVar34 = *(undefined8 **)(param_1 + 0x1360);
  if (puVar34 != &DAT_0407ebb1) {
    iVar21 = 0;
    if (*(int *)(param_1 + 0x1368) < 1) {
      iVar21 = *(int *)(param_1 + 0x1368) + -1;
    }
    memset(puVar34,0,(long)iVar21);
    *(undefined1 *)((long)puVar34 + (long)iVar21) = 0;
  }
  iVar21 = *(int *)(param_1 + 0x15d0);
  *(undefined8 *)(param_1 + 0x1390) = 0;
  if (iVar21 != 0) {
    lVar44 = *(long *)(param_1 + 0x15d8);
    iVar54 = 0;
    do {
      lVar27 = lVar44 + (long)iVar54 * 0x7e8;
      puVar34 = *(undefined8 **)(lVar27 + 0x490);
      *(undefined1 **)(lVar27 + 0x350) = &DAT_3f8000003f800000;
      *(undefined4 *)(lVar27 + 0x430) = 0;
      *(undefined8 *)(lVar27 + 0x3f0) = 0;
      *(undefined8 *)(lVar27 + 0x370) = 0;
      *(undefined4 *)(lVar27 + 0x410) = 0;
      *(undefined8 *)(lVar27 + 0x3d0) = 0;
      *(undefined4 *)(lVar27 + 0x390) = 0;
      *(undefined4 *)(lVar27 + 0x3b0) = 0;
      *(undefined8 *)(lVar27 + 0x2e0) = 0;
      *(undefined8 *)(lVar27 + 0x2e8) = 0;
      *(undefined8 *)(lVar27 + 0x2f0) = 0;
      *(undefined4 *)(lVar27 + 0x2f8) = 0;
      *(undefined8 *)(lVar27 + 0x2b0) = 0x800000003f000000;
      *(undefined8 *)(lVar27 + 0x2b8) = 0x3f00000000000000;
      *(undefined8 *)(lVar27 + 0x2c0) = 0xbf00000000000000;
      *(undefined8 *)(lVar27 + 0x2c8) = 0x3f00000000000000;
      *(undefined8 *)(lVar27 + 0x2d0) = 0x8000000080000000;
      *(undefined8 *)(lVar27 + 0x2d8) = 0x3f800000;
      *(undefined8 *)(lVar27 + 0x468) = 0;
      if (puVar34 != &DAT_0407ebb1) {
        iVar47 = 0;
        if (*(int *)(lVar27 + 0x498) < 1) {
          iVar47 = *(int *)(lVar27 + 0x498) + -1;
        }
        memset(puVar34,0,(long)iVar47);
        *(undefined1 *)((long)puVar34 + (long)iVar47) = 0;
      }
      iVar54 = iVar54 + 1;
    } while (iVar21 != iVar54);
  }
  return;
}

