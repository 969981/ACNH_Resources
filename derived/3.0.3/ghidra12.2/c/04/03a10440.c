
void FUN_03a10440(long param_1,undefined8 param_2)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ushort uVar11;
  short sVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  uint uVar31;
  long lVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 uVar39;
  undefined **local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  ulong local_d4;
  undefined1 local_8c;
  
  if (*(char *)(param_1 + 0x148) == '\0' && *(char *)(param_1 + 0x188) == '\0') {
    return;
  }
  uVar11 = *(ushort *)(param_1 + 0x278);
  iVar17 = *(int *)(param_1 + 0x68);
  iVar33 = *(int *)(param_1 + 0x88);
  uVar20 = 5;
  if (uVar11 != 0x59) {
    uVar20 = (uint)uVar11;
  }
  uVar21 = 0x14;
  if (uVar11 != 0x5a) {
    uVar21 = uVar20;
  }
  uVar23 = (ulong)uVar21;
  sVar12 = *(short *)(param_1 + 0x21a);
  uVar24 = uVar23 - 0x59;
  if (uVar24 < 4) {
    FUN_038e4cec(&local_f0);
    uVar10 = local_f0._4_4_;
    local_f0 = (undefined **)CONCAT62(local_f0._2_6_,0x101);
    local_8c = 8;
    local_f0 = (undefined **)(CONCAT44(uVar10,(undefined4)local_f0) & 0xfffffffeffffffff);
    local_d4 = local_d4 & 0xfffffffffffffff0;
    FUN_038e4d90(&local_f0,param_2);
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    *(undefined8 *)(param_1 + 0x6b0) = 0;
    lVar25 = param_1 + 0x7a0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
  }
  else {
    FUN_038e4cec(&local_f0);
    local_f0 = (undefined **)((ulong)local_f0 & 0xfffffffeffff0000);
    local_d4 = local_d4 & 0xfffffffffffffff0 | 1;
    FUN_038e4d90(&local_f0,param_2);
    lVar25 = 0;
    *(long *)(param_1 + 0x678) = param_1 + 0x6c0;
  }
  *(long *)(param_1 + 0x6b8) = lVar25;
  lVar25 = param_1 + 0x880;
  lVar1 = param_1 + 0x8d0;
  *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x8c7) = *(undefined8 *)(param_1 + 0x227);
  *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined8 *)(param_1 + 0x8c0) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x8b8) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x8b0) = *(undefined8 *)(param_1 + 0x210);
  FUN_038fd1e0(lVar1);
  FUN_038fd2f0(lVar1,param_1 + 0x230);
  puVar2 = (uint *)(param_1 + 0x954);
  *(undefined8 *)(param_1 + 0x910) = *(undefined8 *)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x278);
  do {
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar14) {
      *puVar2 = *puVar2 | 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (*(int *)(param_1 + 0xa8) == 3) {
    *(undefined2 *)(param_1 + 0x944) = 0;
    *(undefined1 *)(param_1 + 0x946) = 0;
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar14) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  else {
    *(undefined1 *)(param_1 + 0x946) = 0;
    *(undefined2 *)(param_1 + 0x944) = 0x101;
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar14) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  lVar3 = param_1 + 0x658;
  puVar4 = (uint *)(param_1 + 0x778);
  puVar5 = (uint *)(param_1 + 0x858);
  puVar6 = (uint *)(param_1 + 0x484);
  uVar20 = 0x1b;
  if (3 < uVar24) {
    uVar20 = 0x20;
  }
  uVar21 = 0x19;
  if (3 < uVar24) {
    uVar21 = 0x1e;
  }
  bVar14 = true;
  do {
    iVar7 = iVar17;
    if (iVar17 < 0) {
      iVar7 = iVar17 + 1;
    }
    iVar7 = iVar7 >> 1;
    iVar8 = iVar33;
    if (iVar33 < 0) {
      iVar8 = iVar33 + 1;
    }
    fVar34 = (float)iVar7;
    iVar8 = iVar8 >> 1;
    fVar36 = (float)iVar8;
    local_e8 = 0x7f7fffff7f7fffff;
    local_e0 = 0xff7fffffff7fffff;
    local_f0 = &PTR_LAB_04b65888;
    fVar37 = 0.0;
    if (iVar17 < 2) {
      fVar37 = fVar34;
    }
    *(float *)(param_1 + 0x660) = fVar34;
    *(float *)(param_1 + 0x664) = fVar36;
    *(float *)(param_1 + 0x668) = fVar37;
    puVar16 = PTR_DAT_04bd0ea8;
    fVar37 = fVar34;
    if (iVar17 < 2) {
      fVar37 = 0.0;
    }
    local_d4 = 0x3f80000000000000;
    *(float *)(param_1 + 0x670) = fVar37;
    fVar37 = 0.0;
    if (iVar33 < 2) {
      fVar37 = fVar36;
    }
    local_d8 = *(uint *)puVar16;
    *(float *)(param_1 + 0x66c) = fVar37;
    fVar37 = fVar36;
    if (iVar33 < 2) {
      fVar37 = 0.0;
    }
    *(float *)(param_1 + 0x674) = fVar37;
    if (local_d8 < 6) {
      if ((1 << (ulong)(local_d8 & 0x1f) & 0x39U) == 0) {
        fVar37 = 0.0;
        if (iVar33 < 2) {
          fVar37 = fVar36;
        }
        fVar35 = fVar36;
        if (iVar33 < 2) {
          fVar35 = 0.0;
        }
        fVar38 = 0.0;
        if (iVar17 < 2) {
          fVar38 = fVar34;
        }
        if (iVar17 < 2) {
          fVar34 = 0.0;
        }
      }
      else {
        fVar37 = 0.0;
        if (iVar17 < 2) {
          fVar37 = fVar34;
        }
        fVar35 = fVar34;
        if (iVar17 < 2) {
          fVar35 = 0.0;
        }
        fVar38 = 0.0;
        if (iVar33 < 2) {
          fVar38 = fVar36;
        }
        fVar34 = fVar36;
        if (iVar33 < 2) {
          fVar34 = 0.0;
        }
      }
      local_e8 = CONCAT44(fVar38,fVar37);
      local_e0 = CONCAT44(fVar34,fVar35);
    }
    FUN_038e77e4(&local_f0,param_2,lVar3);
    uVar28 = (uint)*(ushort *)(param_1 + 0x21a);
    if ((*(ushort *)(param_1 + 0x21a) < 10) && ((1 << (ulong)(uVar28 & 0x1f) & 0x350U) != 0)) {
      uVar22 = (uint)*(ushort *)(param_1 + 0x214);
      uVar29 = uVar22;
    }
    else {
      uVar22 = (uint)*(ushort *)(param_1 + 0x214);
      uVar29 = 1;
    }
    if (uVar29 <= uVar22) {
      uVar29 = uVar22;
    }
    lVar32 = 0x168;
    if (!bVar14) {
      lVar32 = 0x1a8;
    }
    if (*(uint *)(param_1 + lVar32) != 0xffffffff) {
      uVar29 = *(uint *)(param_1 + lVar32);
    }
    uVar31 = 1;
    if ((uVar28 < 10) && ((1 << (ulong)(uVar28 & 0x1f) & 0x350U) != 0)) {
      uVar31 = uVar22;
    }
    if (uVar31 <= uVar22) {
      uVar31 = uVar22;
    }
    if ((int)uVar31 <= (int)uVar29) {
      uVar29 = uVar31;
    }
    lVar32 = *(long *)PTR_DAT_04bbd510;
    if (sVar12 == 4) {
      if (*(char *)(param_1 + 0x108) == '\0') {
        local_100 = &PTR_LAB_048f9770;
        pcStack_f8 = "shadow_map_reduce_depth";
        lVar18 = nn::os::GetTlsValue(DAT_05ae7898);
        if (lVar18 == 0) {
          iVar17 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar17 = (int)lVar18 + -1;
        }
        lVar18 = lVar32 + (long)iVar17 * 0x290 + 0x10;
        uVar39 = 1;
      }
      else {
        lVar18 = lVar32 + 0x7c0;
        uVar39 = 0;
        local_100 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        pcStack_f8 = "shadow_map_reduce_depth";
      }
      puVar19 = (undefined4 *)
                FUN_03948e10(lVar32,param_2,lVar18,&local_100,uVar23,4,iVar7,iVar8,1,0,uVar29,0,
                             uVar39,0,0,0);
      if (0 < (int)uVar29) {
        if (uVar24 < 4) {
          uVar28 = 0;
          do {
            *(undefined4 *)(param_1 + 0x7a8) = *puVar19;
            *(undefined4 *)(param_1 + 0x7ac) = puVar19[1];
            *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(puVar19 + 2);
            *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(puVar19 + 4);
            *(undefined4 *)(param_1 + 0x7c0) = puVar19[6];
            *(undefined4 *)(param_1 + 0x7c4) = puVar19[7];
            *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(puVar19 + 8);
            *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(puVar19 + 10);
            uVar26 = *(undefined8 *)(puVar19 + 0xc);
            uVar9 = *(undefined8 *)(puVar19 + 0xe);
            uVar30 = *(undefined8 *)(puVar19 + 0x10);
            *(undefined8 *)(param_1 + 0x7ef) = *(undefined8 *)((long)puVar19 + 0x47);
            *(undefined8 *)(param_1 + 0x7e0) = uVar9;
            *(undefined8 *)(param_1 + 0x7e8) = uVar30;
            *(undefined8 *)(param_1 + 0x7d8) = uVar26;
            FUN_038fd1e0(param_1 + 0x7f8);
            FUN_038fd2f0(param_1 + 0x7f8,puVar19 + 0x14);
            uVar26 = *(undefined8 *)(puVar19 + 0x24);
            *(undefined4 *)(param_1 + 0x840) = puVar19[0x26];
            *(undefined8 *)(param_1 + 0x838) = uVar26;
            do {
              cVar13 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar15) {
                *puVar5 = *puVar5 & 0xfffffffb | 4;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (uVar28 != *(ushort *)(param_1 + 0x85c)) {
              do {
                cVar13 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                if (bVar15) {
                  *puVar5 = *puVar5 & 0xfffffffd | 2;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              *(short *)(param_1 + 0x85c) = (short)uVar28;
            }
            if (*(char *)(param_1 + 0x85e) != '\0') {
              do {
                cVar13 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                if (bVar15) {
                  *puVar5 = *puVar5 | 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              *(undefined1 *)(param_1 + 0x85e) = 0;
            }
            (**(code **)(*(long *)(param_1 + 0x7a0) + 0x10))(param_1 + 0x7a0);
            (**(code **)(*(long *)(param_1 + 0x658) + 0x38))(lVar3,param_2);
            iVar17 = *(int *)(param_1 + 0xa8);
            if (iVar17 - 2U < 2) {
              FUN_0394d790(param_2,lVar25,uVar28);
            }
            else {
              if (iVar17 == 0) {
                uVar26 = 0;
              }
              else {
                if (iVar17 != 1) goto LAB_03a10a80;
                uVar26 = 1;
              }
              FUN_0394d900(param_2,lVar25,uVar26,1,uVar28);
            }
LAB_03a10a80:
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar29);
        }
        else {
          uVar28 = 0;
          do {
            *(undefined4 *)(param_1 + 0x6c8) = *puVar19;
            *(undefined4 *)(param_1 + 0x6cc) = puVar19[1];
            *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(puVar19 + 2);
            *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(puVar19 + 4);
            *(undefined4 *)(param_1 + 0x6e0) = puVar19[6];
            *(undefined4 *)(param_1 + 0x6e4) = puVar19[7];
            *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(puVar19 + 8);
            *(undefined8 *)(param_1 + 0x6f0) = *(undefined8 *)(puVar19 + 10);
            uVar26 = *(undefined8 *)(puVar19 + 0xc);
            uVar9 = *(undefined8 *)(puVar19 + 0xe);
            uVar30 = *(undefined8 *)(puVar19 + 0x10);
            *(undefined8 *)(param_1 + 0x70f) = *(undefined8 *)((long)puVar19 + 0x47);
            *(undefined8 *)(param_1 + 0x700) = uVar9;
            *(undefined8 *)(param_1 + 0x708) = uVar30;
            *(undefined8 *)(param_1 + 0x6f8) = uVar26;
            FUN_038fd1e0(param_1 + 0x718);
            FUN_038fd2f0(param_1 + 0x718,puVar19 + 0x14);
            uVar26 = *(undefined8 *)(puVar19 + 0x24);
            *(undefined4 *)(param_1 + 0x760) = puVar19[0x26];
            *(undefined8 *)(param_1 + 0x758) = uVar26;
            do {
              cVar13 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar15) {
                *puVar4 = *puVar4 & 0xfffffffb | 4;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (uVar28 != *(ushort *)(param_1 + 0x77c)) {
              do {
                cVar13 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar15) {
                  *puVar4 = *puVar4 & 0xfffffffd | 2;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              *(short *)(param_1 + 0x77c) = (short)uVar28;
            }
            if (*(char *)(param_1 + 0x77e) != '\0') {
              do {
                cVar13 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar15) {
                  *puVar4 = *puVar4 | 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              *(undefined1 *)(param_1 + 0x77e) = 0;
            }
            (**(code **)(*(long *)(param_1 + 0x6c0) + 0x10))(param_1 + 0x6c0);
            (**(code **)(*(long *)(param_1 + 0x658) + 0x38))(lVar3,param_2);
            iVar17 = *(int *)(param_1 + 0xa8);
            if (iVar17 - 2U < 2) {
              FUN_0394d620(param_2,lVar25,uVar28);
            }
            else {
              if (iVar17 == 0) {
                uVar26 = 0;
              }
              else {
                if (iVar17 != 1) goto LAB_03a10c00;
                uVar26 = 1;
              }
              FUN_0394d900(param_2,lVar25,uVar26,0,uVar28);
            }
LAB_03a10c00:
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar29);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x108) == '\0') {
        local_100 = &PTR_LAB_048f9770;
        pcStack_f8 = "shadow_map_reduce_depth";
        lVar18 = nn::os::GetTlsValue(DAT_05ae7898);
        if (lVar18 == 0) {
          iVar17 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar17 = (int)lVar18 + -1;
        }
        lVar18 = lVar32 + (long)iVar17 * 0x290 + 0x10;
        uVar39 = 1;
      }
      else {
        lVar18 = lVar32 + 0x7c0;
        local_100 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        uVar39 = 0;
        pcStack_f8 = "shadow_map_reduce_depth";
      }
      puVar19 = (undefined4 *)
                FUN_03948e10(lVar32,param_2,lVar18,&local_100,uVar23,1,iVar7,iVar8,1,0,1,0,uVar39,0,
                             0,0);
      if (uVar24 < 4) {
        FUN_0155a100(param_1 + 0x7a0,puVar19,0,0);
      }
      else {
        FUN_01560750(param_1 + 0x6c0,puVar19,0,0);
      }
      (**(code **)(*(long *)(param_1 + 0x658) + 0x38))(lVar3,param_2);
      iVar17 = *(int *)(param_1 + 0xa8);
      if (iVar17 - 2U < 2) {
        if (uVar24 < 4) {
          if (*(uint *)(DAT_05ae9310 + 8) < 0x18) goto LAB_03a10ea0;
          puVar27 = (undefined8 *)(*(long *)(DAT_05ae9310 + 0x10) + 0xb8);
        }
        else {
          puVar27 = (undefined8 *)
                    (*(long *)(*(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x28) + 8) + 0x28);
        }
LAB_03a10eb8:
        uVar26 = *puVar27;
      }
      else {
        uVar28 = uVar20;
        if ((iVar17 != 0) && (uVar28 = uVar21, iVar17 != 1)) goto LAB_03a10ed8;
        if (uVar28 < *(uint *)(DAT_05ae9310 + 8)) {
          puVar27 = (undefined8 *)(*(long *)(DAT_05ae9310 + 0x10) + (ulong)uVar28 * 8);
          goto LAB_03a10eb8;
        }
LAB_03a10ea0:
        uVar26 = 0;
      }
      FUN_03907810(uVar26,param_2);
      FUN_0394a420(param_2,uVar26,lVar25);
    }
LAB_03a10ed8:
    if (!bVar14) {
      *(undefined4 **)(param_1 + 0x490) = puVar19;
      *(undefined4 *)(param_1 + 0x498) = *puVar19;
      *(undefined4 *)(param_1 + 0x49c) = puVar19[1];
      *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(puVar19 + 2);
      *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(puVar19 + 4);
      *(undefined4 *)(param_1 + 0x4b0) = puVar19[6];
      *(undefined4 *)(param_1 + 0x4b4) = puVar19[7];
      *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(puVar19 + 8);
      *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(puVar19 + 10);
      uVar26 = *(undefined8 *)(puVar19 + 0xc);
      uVar9 = *(undefined8 *)(puVar19 + 0xe);
      uVar30 = *(undefined8 *)(puVar19 + 0x10);
      *(undefined8 *)(param_1 + 0x4df) = *(undefined8 *)((long)puVar19 + 0x47);
      *(undefined8 *)(param_1 + 0x4d8) = uVar30;
      *(undefined8 *)(param_1 + 0x4d0) = uVar9;
      *(undefined8 *)(param_1 + 0x4c8) = uVar26;
      FUN_038fd1e0(param_1 + 0x4e8);
      FUN_038fd2f0(param_1 + 0x4e8,puVar19 + 0x14);
      uVar10 = puVar19[0x26];
      *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(puVar19 + 0x24);
      puVar2 = (uint *)(param_1 + 0x56c);
      *(undefined4 *)(param_1 + 0x530) = uVar10;
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar14) {
          *puVar2 = *puVar2 | 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_03a110d4:
      if (*(char *)(param_1 + 0x148) == '\0') {
        FUN_039499cc(DAT_05ae90c0,*(undefined8 *)(param_1 + 0x3a8));
        *(undefined8 *)(param_1 + 0x3a8) = 0;
        return;
      }
      return;
    }
    *(undefined4 **)(param_1 + 0x3a8) = puVar19;
    *(undefined4 *)(param_1 + 0x3b0) = *puVar19;
    *(undefined4 *)(param_1 + 0x3b4) = puVar19[1];
    *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(puVar19 + 2);
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(puVar19 + 4);
    *(undefined4 *)(param_1 + 0x3c8) = puVar19[6];
    *(undefined4 *)(param_1 + 0x3cc) = puVar19[7];
    *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(puVar19 + 8);
    *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(puVar19 + 10);
    uVar30 = *(undefined8 *)(puVar19 + 0xc);
    uVar26 = *(undefined8 *)(puVar19 + 0xe);
    uVar9 = *(undefined8 *)(puVar19 + 0x10);
    *(undefined8 *)(param_1 + 0x3f7) = *(undefined8 *)((long)puVar19 + 0x47);
    *(undefined8 *)(param_1 + 1000) = uVar26;
    *(undefined8 *)(param_1 + 0x3f0) = uVar9;
    *(undefined8 *)(param_1 + 0x3e0) = uVar30;
    FUN_038fd1e0(param_1 + 0x400);
    FUN_038fd2f0(param_1 + 0x400,puVar19 + 0x14);
    uVar10 = puVar19[0x26];
    *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(puVar19 + 0x24);
    *(undefined4 *)(param_1 + 0x448) = uVar10;
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar14) {
        *puVar6 = *puVar6 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    *(undefined4 *)(param_1 + 0x880) = *puVar19;
    *(undefined4 *)(param_1 + 0x884) = puVar19[1];
    *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(puVar19 + 2);
    *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(puVar19 + 4);
    *(undefined4 *)(param_1 + 0x898) = puVar19[6];
    *(undefined4 *)(param_1 + 0x89c) = puVar19[7];
    *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(puVar19 + 8);
    *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(puVar19 + 10);
    uVar26 = *(undefined8 *)(puVar19 + 0xc);
    uVar9 = *(undefined8 *)(puVar19 + 0xe);
    uVar30 = *(undefined8 *)(puVar19 + 0x10);
    *(undefined8 *)(param_1 + 0x8c7) = *(undefined8 *)((long)puVar19 + 0x47);
    *(undefined8 *)(param_1 + 0x8b8) = uVar9;
    *(undefined8 *)(param_1 + 0x8c0) = uVar30;
    *(undefined8 *)(param_1 + 0x8b0) = uVar26;
    FUN_038fd1e0(lVar1);
    FUN_038fd2f0(lVar1,puVar19 + 0x14);
    uVar26 = *(undefined8 *)(puVar19 + 0x24);
    *(undefined4 *)(param_1 + 0x918) = puVar19[0x26];
    *(undefined8 *)(param_1 + 0x910) = uVar26;
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar14) {
        *puVar2 = *puVar2 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (*(char *)(param_1 + 0x188) == '\0') goto LAB_03a110d4;
    bVar14 = false;
    iVar17 = iVar7;
    iVar33 = iVar8;
  } while( true );
}

