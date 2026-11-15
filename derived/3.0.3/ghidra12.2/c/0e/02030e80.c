
/* WARNING: Type propagation algorithm not settling */

int FUN_02030e80(long param_1,long param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  char *pcVar24;
  char *pcVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined8 *puVar29;
  undefined8 ******ppppppuVar30;
  undefined1 *__src;
  long *plVar31;
  char *pcVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined *local_1398;
  char *local_1390;
  undefined *local_1388;
  char *local_1380;
  undefined *local_1378;
  char *local_1370;
  undefined4 local_1368;
  char local_1364 [15];
  undefined1 local_1355;
  undefined **local_1350;
  undefined4 local_1348;
  undefined *local_1340;
  undefined1 *puStack_1338;
  undefined *local_1330;
  undefined8 *local_1328;
  long lStack_1320;
  undefined4 local_1318;
  undefined8 local_1314;
  undefined8 uStack_130c;
  undefined *local_1300;
  undefined1 *puStack_12f8;
  int local_12f0;
  undefined1 auStack_12ec [127];
  undefined1 local_126d;
  long local_1268;
  long lStack_1260;
  undefined8 local_1258;
  undefined8 *local_1250;
  undefined8 *******local_1248;
  undefined8 *******pppppppuStack_1240;
  undefined8 *******local_1238 [27];
  undefined8 *******local_1160 [27];
  undefined8 *******local_1088 [27];
  undefined8 *******local_fb0 [27];
  undefined8 *******local_ed8 [27];
  undefined8 *******local_e00 [27];
  undefined8 *******local_d28 [27];
  undefined8 *******local_c50 [27];
  undefined8 *******local_b78 [27];
  undefined8 *******local_aa0 [27];
  undefined8 *******local_9c8 [27];
  undefined8 *******local_8f0 [27];
  undefined8 *******local_818 [27];
  undefined8 ******local_740 [27];
  undefined8 *****local_668 [27];
  undefined8 ****local_590 [27];
  undefined8 ***local_4b8 [27];
  undefined8 **local_3e0 [27];
  undefined8 *local_308 [27];
  undefined8 local_230 [27];
  undefined8 local_158 [20];
  long local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined *local_98;
  char *local_90;
  undefined4 local_88;
  char local_84 [15];
  undefined1 local_75;
  undefined1 local_6c [12];
  
  puVar4 = PTR_DAT_04bb2020;
  local_b0 = 0;
  local_88 = 0x10;
  local_90 = local_84;
  local_75 = 0;
  local_84[0] = '\0';
  local_b8 = param_2 + 0x30;
  local_98 = PTR_DAT_04bb2ab0 + 0x10;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  puStack_a0 = &DAT_04079e84;
  FUN_0076e020(&local_b8,&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  uVar13 = local_88;
  pcVar32 = local_90;
  lVar16 = 0;
  do {
    if (local_90[lVar16] == '\0') {
LAB_02030f60:
      iVar12 = (int)lVar16;
joined_r0x02030f64:
      pcVar28 = local_90;
      if (0 < iVar12) {
        do {
          if ((byte)(*pcVar28 + 0xbfU) < 4) {
            *pcVar28 = (&DAT_04074aae)[(byte)(*pcVar28 + 0xbf)];
          }
          lVar16 = lVar16 + -1;
          pcVar28 = pcVar28 + 1;
        } while (lVar16 != 0);
      }
      break;
    }
    if (local_90[lVar16 + 1] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_02030f60;
    }
    if (local_90[lVar16 + 2] == '\0') {
      lVar16 = lVar16 + 2;
      iVar12 = (int)lVar16;
      goto joined_r0x02030f64;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  local_1330 = puVar4 + 0x10;
  local_1250 = (undefined8 *)&DAT_040947d9;
  local_1328 = &DAT_0407ebb1;
  local_1378 = (undefined *)((ulong)local_1378 & 0xffffffffffffff00);
  local_1258 = local_1330;
  (**(code **)(local_98 + 0x18))(&local_98);
  pcVar28 = local_90;
  (**(code **)(local_98 + 0x18))(&local_98);
  lVar16 = 0;
  do {
    if (local_90[lVar16] == '\0') goto LAB_0203104c;
    if (local_90[lVar16 + 1] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_0203104c;
    }
    if (local_90[lVar16 + 2] == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_0203104c;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  lVar16 = 0;
LAB_0203104c:
  FUN_038d0770(pcVar32,0,uVar13,pcVar28,lVar16,&local_1258,&local_1330,&local_1378);
  local_1238[0] = local_1160;
  local_fb0[0] = local_ed8;
  local_e00[0] = local_d28;
  local_1160[0] = local_1088;
  local_c50[0] = local_b78;
  local_ed8[0] = local_e00;
  local_1248 = local_1238;
  lVar16 = *(long *)PTR_DAT_04bb3968;
  local_d28[0] = local_c50;
  local_1088[0] = local_fb0;
  local_b78[0] = local_aa0;
  local_1258 = (undefined *)0x0;
  local_1250 = (undefined8 *)0x0;
  puVar8 = (uint *)(lVar16 + 0x3cc0);
  local_aa0[0] = local_9c8;
  local_230[0] = 0;
  local_9c8[0] = local_8f0;
  local_8f0[0] = local_818;
  local_818[0] = local_740;
  local_740[0] = local_668;
  local_668[0] = local_590;
  local_590[0] = local_4b8;
  local_4b8[0] = local_3e0;
  local_3e0[0] = local_308;
  local_308[0] = local_230;
  uVar19 = 0;
  if (local_158 != (undefined8 *)0x0) {
    local_1258 = (undefined *)0x1400000000;
    uVar19 = 0x14;
    local_1250 = local_158;
  }
  pppppppuStack_1240 = local_1248;
  if ((uint *)&local_1258 != puVar8) {
    uVar15 = *puVar8;
    if ((int)uVar15 <= (int)uVar19) {
      uVar19 = uVar15;
    }
    if (0 < (int)uVar19) {
      uVar15 = 0;
      uVar33 = 0;
      ppppppuVar1 = (undefined8 ******)(PTR_DAT_04bb2e90 + 0x10);
      ppppppuVar2 = (undefined8 ******)(PTR_DAT_04bb2d88 + 0x10);
      do {
        pppppppuVar10 = local_1248;
        if ((int)uVar15 < local_1258._4_4_) {
          plVar27 = *(long **)(*(long *)(lVar16 + 0x3cc8) + uVar33 * 8);
          if (local_1248 != (undefined8 *******)0x0) {
            local_1248 = (undefined8 *******)*local_1248;
          }
          ppppppuVar30 = (undefined8 ******)plVar27[1];
          ppppppuVar3 = (undefined8 ******)((long)pppppppuVar10 + 0x44);
          ppppppuVar22 = (undefined8 ******)plVar27[2];
          *pppppppuVar10 = (undefined8 ******)*plVar27;
          pppppppuVar10[1] = ppppppuVar30;
          pppppppuVar10[2] = ppppppuVar22;
          *(int *)(pppppppuVar10 + 3) = (int)plVar27[3];
          uVar17 = *(undefined8 *)((long)plVar27 + 0x1c);
          uVar20 = *(undefined8 *)((long)plVar27 + 0x24);
          *(undefined1 *)((long)pppppppuVar10 + 0xc3) = 0;
          pppppppuVar10[6] = ppppppuVar1;
          pppppppuVar10[7] = ppppppuVar3;
          *(undefined8 *)((long)pppppppuVar10 + 0x1c) = uVar17;
          *(undefined8 *)((long)pppppppuVar10 + 0x24) = uVar20;
          *(undefined4 *)(pppppppuVar10 + 8) = 0x80;
          plVar31 = plVar27 + 6;
          (**(code **)(*plVar31 + 0x18))(plVar31);
          ppppppuVar30 = (undefined8 ******)plVar27[7];
          if (ppppppuVar3 != ppppppuVar30) {
            (**(code **)(plVar27[6] + 0x18))(plVar31);
            lVar18 = 0;
            do {
              if (*(char *)(plVar27[7] + lVar18) == '\0') goto LAB_0203127c;
              lVar9 = plVar27[7] + lVar18;
              if (*(char *)(lVar9 + 1) == '\0') {
                lVar18 = lVar18 + 1;
                goto LAB_0203127c;
              }
              if (*(char *)(lVar9 + 2) == '\0') {
                lVar18 = lVar18 + 2;
                goto LAB_0203127c;
              }
              lVar18 = lVar18 + 3;
            } while (lVar18 != 0x80001);
            lVar18 = 0;
LAB_0203127c:
            iVar12 = (int)lVar18;
            if (*(int *)(pppppppuVar10 + 8) <= (int)lVar18) {
              iVar12 = *(int *)(pppppppuVar10 + 8) + -1;
            }
            memcpy(ppppppuVar3,ppppppuVar30,(long)iVar12);
            *(undefined1 *)((long)ppppppuVar3 + (long)iVar12) = 0;
          }
          pppppppuVar10[6] = ppppppuVar2;
          ppppppuVar3 = (undefined8 ******)plVar27[0x1a];
          pppppppuVar10[0x19] = (undefined8 ******)plVar27[0x19];
          pppppppuVar10[0x1a] = ppppppuVar3;
          uVar15 = (uint)local_1258;
          if ((int)(uint)local_1258 < local_1258._4_4_) {
            local_1250[(int)(uint)local_1258] = pppppppuVar10;
            uVar15 = (uint)local_1258 + 1;
            local_1258 = (undefined *)CONCAT44(local_1258._4_4_,uVar15);
          }
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar19);
      if (uVar15 != 0) {
        puVar29 = local_1250 + (int)uVar15;
        puVar4 = PTR_DAT_04bb2e90 + 0x10;
        puVar5 = PTR_DAT_04bb2d88 + 0x10;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        puVar7 = PTR_DAT_04bb2ab0 + 0x10;
        puVar34 = local_1250;
        do {
          plVar27 = (long *)*puVar34;
          lStack_1320 = plVar27[2];
          local_1330 = (undefined *)*plVar27;
          local_1328 = (undefined8 *)plVar27[1];
          local_1318 = (undefined4)plVar27[3];
          uStack_130c = *(undefined8 *)((long)plVar27 + 0x24);
          local_1314 = *(undefined8 *)((long)plVar27 + 0x1c);
          local_126d = 0;
          local_12f0 = 0x80;
          plVar31 = plVar27 + 6;
          local_1300 = puVar4;
          puStack_12f8 = auStack_12ec;
          (**(code **)(*plVar31 + 0x18))(plVar31);
          __src = (undefined1 *)plVar27[7];
          if (auStack_12ec != __src) {
            (**(code **)(plVar27[6] + 0x18))(plVar31);
            lVar16 = 0;
            do {
              if (*(char *)(plVar27[7] + lVar16) == '\0') goto LAB_0203141c;
              lVar18 = plVar27[7] + lVar16;
              if (*(char *)(lVar18 + 1) == '\0') {
                lVar16 = lVar16 + 1;
                goto LAB_0203141c;
              }
              if (*(char *)(lVar18 + 2) == '\0') {
                lVar16 = lVar16 + 2;
                goto LAB_0203141c;
              }
              lVar16 = lVar16 + 3;
            } while (lVar16 != 0x80001);
            lVar16 = 0;
LAB_0203141c:
            iVar12 = (int)lVar16;
            if (local_12f0 <= (int)lVar16) {
              iVar12 = local_12f0 + -1;
            }
            memcpy(auStack_12ec,__src,(long)iVar12);
            auStack_12ec[iVar12] = 0;
          }
          local_1348 = 0;
          local_1355 = 0;
          local_1364[0] = '\0';
          local_1268 = plVar27[0x19];
          lStack_1260 = plVar27[0x1a];
          puStack_1338 = &DAT_04079e84;
          local_1368 = 0x10;
          local_1378 = puVar7;
          local_1370 = local_1364;
          local_1350 = &local_1300;
          local_1340 = puVar6;
          local_1300 = puVar5;
          FUN_0076e020(&local_1350,&local_1378);
          local_1380 = "ABCD";
          local_1390 = "AAAA";
          local_1398 = puVar6;
          local_1388 = puVar6;
          (**(code **)(local_1378 + 0x18))(&local_1378);
          uVar33 = 0;
          do {
            if (local_1370[uVar33] == '\0') {
LAB_02031500:
              uVar33 = uVar33 & 0xffffffff;
              goto LAB_02031504;
            }
            if (local_1370[uVar33 + 1] == '\0') {
              uVar33 = uVar33 + 1;
              goto LAB_02031500;
            }
            if (local_1370[uVar33 + 2] == '\0') {
              uVar33 = uVar33 + 2;
              goto LAB_02031500;
            }
            uVar33 = uVar33 + 3;
          } while (uVar33 != 0x80001);
          uVar33 = 0;
LAB_02031504:
          (**(code **)(local_1388 + 0x18))(&local_1388);
          lVar16 = 0;
          do {
            if (local_1380[lVar16] == '\0') goto LAB_0203155c;
            if (local_1380[lVar16 + 1] == '\0') {
              lVar16 = lVar16 + 1;
              goto LAB_0203155c;
            }
            if (local_1380[lVar16 + 2] == '\0') {
              lVar16 = lVar16 + 2;
              goto LAB_0203155c;
            }
            lVar16 = lVar16 + 3;
          } while (lVar16 != 0x80001);
          lVar16 = 0;
LAB_0203155c:
          (**(code **)(local_1398 + 0x18))(&local_1398);
          lVar18 = 0;
          do {
            if (local_1390[lVar18] == '\0') goto LAB_020315b0;
            if (local_1390[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_020315b0;
            }
            if (local_1390[lVar18 + 2] == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_020315b0;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_020315b0:
          uVar19 = (uint)lVar16;
          if ((int)(uint)lVar18 <= (int)(uint)lVar16) {
            uVar19 = (uint)lVar18;
          }
          uVar26 = (ulong)uVar19;
          (**(code **)(local_1388 + 0x18))(&local_1388);
          pcVar32 = local_1380;
          (**(code **)(local_1398 + 0x18))(&local_1398);
          uVar13 = local_1368;
          pcVar28 = local_1370;
          if ((0 < (int)uVar33) && (0 < (int)uVar19)) {
            if (uVar33 == 1) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              do {
                uVar23 = uVar26;
                pcVar24 = local_1390;
                pcVar25 = pcVar32;
                do {
                  if (local_1370[uVar21] == *pcVar25) {
                    local_1370[uVar21] = *pcVar24;
                    break;
                  }
                  pcVar24 = pcVar24 + 1;
                  uVar23 = uVar23 - 1;
                  pcVar25 = pcVar25 + 1;
                } while (uVar23 != 0);
                pcVar25 = pcVar32;
                pcVar24 = local_1390;
                uVar23 = uVar26;
                do {
                  if (local_1370[uVar21 | 1] == *pcVar25) {
                    local_1370[uVar21 | 1] = *pcVar24;
                    break;
                  }
                  pcVar24 = pcVar24 + 1;
                  uVar23 = uVar23 - 1;
                  pcVar25 = pcVar25 + 1;
                } while (uVar23 != 0);
                uVar21 = uVar21 + 2;
              } while (uVar21 != (uVar33 & 0xfffffffe));
            }
            if ((uVar33 & 1) != 0) {
              do {
                if (local_1370[uVar21] == *pcVar32) {
                  local_1370[uVar21] = *local_1390;
                  break;
                }
                local_1390 = local_1390 + 1;
                uVar26 = uVar26 - 1;
                pcVar32 = pcVar32 + 1;
              } while (uVar26 != 0);
            }
          }
          local_1398 = PTR_DAT_04bb2020 + 0x10;
          local_1390 = "";
          local_1380 = "A";
          local_6c[0] = 0;
          local_1388 = local_1398;
          (**(code **)(local_1378 + 0x18))(&local_1378);
          pcVar32 = local_1370;
          (**(code **)(local_1378 + 0x18))(&local_1378);
          lVar16 = 0;
          do {
            if (local_1370[lVar16] == '\0') goto LAB_0203175c;
            if (local_1370[lVar16 + 1] == '\0') {
              lVar16 = lVar16 + 1;
              goto LAB_0203175c;
            }
            if (local_1370[lVar16 + 2] == '\0') {
              lVar16 = lVar16 + 2;
              goto LAB_0203175c;
            }
            lVar16 = lVar16 + 3;
          } while (lVar16 != 0x80001);
          lVar16 = 0;
LAB_0203175c:
          FUN_038d0770(pcVar28,0,uVar13,pcVar32,lVar16,&local_1388,&local_1398,local_6c);
          (**(code **)(local_1378 + 0x18))(&local_1378);
          (**(code **)(local_1378 + 0x18))(&local_1378);
          pcVar32 = local_1370;
          (**(code **)(local_98 + 0x18))(&local_98);
          if (pcVar32 == local_90) {
            return 0;
          }
          uVar33 = 0;
          bVar11 = true;
          do {
            if (local_1370[uVar33] != local_90[uVar33]) break;
            if (local_1370[uVar33] == '\0') {
              if (bVar11) {
                return 0;
              }
              break;
            }
            if (local_1370[uVar33 + 1] != local_90[uVar33 + 1]) break;
            if (local_1370[uVar33 + 1] == '\0') {
              return 0;
            }
            if (local_1370[uVar33 + 2] != local_90[uVar33 + 2]) break;
            if (local_1370[uVar33 + 2] == '\0') {
              return 0;
            }
            bVar11 = uVar33 < 0x7fffe;
            uVar33 = uVar33 + 3;
          } while (uVar33 != 0x80001);
          puVar34 = puVar34 + 1;
        } while (puVar34 != puVar29);
      }
    }
  }
  iVar12 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,param_2,*(undefined4 *)(param_1 + 0x230),0);
  if (iVar12 != 0) {
    if (*(int *)(param_1 + 0xf400) < *(int *)(param_1 + 0xf404)) {
      FUN_02044020((int *)(param_1 + 0xf400),param_2);
    }
    uVar17 = *(undefined8 *)PTR_DAT_04bb4130;
    (**(code **)(local_98 + 0x18))(&local_98);
    uVar13 = FUN_006bd550(local_90,0);
    local_1330 = (undefined *)CONCAT44(local_1330._4_4_,uVar13);
    lVar16 = FUN_0079e4d0(uVar17,&local_1330);
    if (lVar16 != 0) {
      lVar16 = *(long *)PTR_DAT_04bb3968;
      lVar18 = *(long *)PTR_DAT_04bb2720;
      if (lVar18 == 0) {
        puVar29 = &DAT_055c04a0;
      }
      else {
        puVar29 = &DAT_055c04a0;
        if (*(long *)(lVar18 + 0x330) != 0) {
          puVar29 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
          iVar14 = FUN_006bd550(*puVar29,0);
          puVar29 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar14 != 0x758f7eaf) {
            puVar29 = &DAT_055c04a0;
          }
        }
      }
      FUN_02170da0(lVar16 + 0x4f18,&local_98,param_2 + 8,*(undefined4 *)(puVar29 + 7));
    }
  }
  return iVar12;
}

