
void FUN_03a75d10(long param_1,long param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  long lVar14;
  undefined *puVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ushort *puVar33;
  long lVar34;
  undefined4 *puVar35;
  long lVar36;
  long lVar37;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined2 local_8c;
  
  uVar20 = param_3;
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    uVar20 = 0;
  }
  lVar21 = *(long *)(*(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x5e0) + 8);
  iVar16 = (uint)*(byte *)(param_1 + 0x21c) * (uint)*(ushort *)(*(long *)(lVar21 + 0x38) + 0x30);
  if (iVar16 == 0) {
    lVar21 = *(long *)(lVar21 + 0x18);
  }
  else {
    uVar24 = iVar16 - 1;
    if (*(uint *)(lVar21 + 0x20) <= uVar24) {
      uVar24 = 0;
    }
    lVar21 = *(long *)(lVar21 + 0x28) + (ulong)uVar24 * 0x150;
  }
  lVar36 = *(long *)(param_1 + 0x238);
  FUN_038e4cec(&local_f0);
  uVar31 = local_f0;
  uVar30 = (ulong)local_f0 >> 0x10;
  local_f0 = (undefined **)CONCAT62((uint6)uVar30 & 0xffffffffff00,0x101);
  uVar17 = local_f0;
  local_8c = 8;
  local_f0._4_4_ = SUB84(uVar31,4);
  local_f0._0_4_ = (undefined4)uVar17;
  local_f0 = (undefined **)(CONCAT44(local_f0._4_4_,(undefined4)local_f0) & 0xfffffffeffffffff);
  FUN_038e4d90(&local_f0,param_2);
  FUN_03907810(lVar21,param_2);
  uVar31 = *(undefined8 *)(param_2 + 0xb8);
  lVar34 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar31,0x10,lVar34 + 0x1024);
  (*DAT_04c62870)(uVar31,0x10,lVar34 + 0x1068);
  puVar15 = PTR_DAT_04bcf1e8;
  iVar16 = *(int *)(lVar34 + 0x1010);
  if (iVar16 != 0) {
    lVar34 = *(long *)(lVar34 + 0x1018);
    uVar30 = 0;
    uVar32 = 0;
    do {
      lVar37 = *(long *)(lVar34 + (-(uVar32 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3));
      if (lVar37 != 0) {
        uVar17 = (**(code **)PTR_DAT_04bbd560)(lVar37 + 8);
        (**(code **)puVar15)(uVar31,uVar30 & 0xffffffff,uVar17,*(undefined4 *)(lVar37 + 0x118));
      }
      uVar30 = uVar32 + 1;
      uVar32 = uVar30 & 0xffffffff;
    } while (iVar16 != (int)uVar30);
  }
  uVar11 = *(ushort *)(param_4 + 0xc);
  uVar24 = (uint)uVar11;
  if (uVar11 < 2) {
    uVar24 = 1;
  }
  uVar6 = *(uint *)(lVar36 + (long)(int)uVar20 * 0x6d0 + 0x28);
  if (uVar6 < uVar24 << 1) {
LAB_03a75f08:
    uVar30 = 0;
    bVar27 = true;
  }
  else {
    uVar11 = *(ushort *)((long)param_4 + 0x32);
    uVar7 = *(uint *)(lVar36 + (long)(int)uVar20 * 0x6d0 + 0x2c);
    uVar5 = (uint)uVar11;
    if (*(short *)((long)param_4 + 0x3a) != 3) {
      uVar5 = 1;
    }
    if (uVar5 == uVar11 || uVar5 < uVar11) {
      uVar5 = (uint)uVar11;
    }
    if (uVar7 < uVar5 << 1) goto LAB_03a75f08;
    bVar27 = false;
    uVar30 = 1;
    if ((uVar24 << 2 <= uVar6) && (uVar5 << 2 <= uVar7)) {
      bVar27 = false;
      uVar30 = 2;
      if ((uVar24 << 3 <= uVar6) && (uVar5 << 3 <= uVar7)) {
        bVar27 = false;
        uVar30 = 3;
        if ((uVar24 << 4 <= uVar6) && (uVar5 << 4 <= uVar7)) {
          bVar27 = false;
          uVar30 = 4;
          if ((uVar24 << 5 <= uVar6) && (uVar5 << 5 <= uVar7)) {
            bVar27 = false;
            uVar25 = 5;
            if (uVar5 << 6 <= uVar7 && uVar24 << 6 <= uVar6) {
              uVar25 = 6;
            }
            uVar30 = (ulong)uVar25;
          }
        }
      }
    }
  }
  lVar37 = lVar36 + (long)(int)uVar20 * 0x6d0;
  lVar34 = lVar37 + 0x220;
  *(undefined1 *)(lVar37 + 0x6b6) = 1;
  puVar1 = (uint *)(lVar37 + 0x6c4);
  *(undefined2 *)(lVar37 + 0x6b4) = 0;
  do {
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 | 4;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  uVar24 = (uint)(*(long *)(lVar37 + 0x220) != 0);
  if (*(long *)(lVar37 + 0x228) != 0) {
    uVar24 = 2;
  }
  if (*(long *)(lVar37 + 0x230) != 0) {
    uVar24 = 3;
  }
  if (*(long *)(lVar37 + 0x238) != 0) {
    uVar24 = 4;
  }
  if (*(long *)(lVar37 + 0x240) != 0) {
    uVar24 = 5;
  }
  if (*(long *)(lVar37 + 0x248) != 0) {
    uVar24 = 6;
  }
  lVar37 = lVar36 + (long)(int)uVar20 * 0x6d0;
  puVar2 = (undefined4 *)(lVar37 + 0x5f0);
  if ((!bVar27) && (*(long *)(lVar34 + uVar30 * 8) != 0)) {
    uVar8 = *(ushort *)(param_4 + 0xc);
    sVar9 = *(short *)((long)param_4 + 0x3a);
    uVar10 = *(ushort *)((long)param_4 + 0x32);
    *puVar2 = *param_4;
    uVar11 = uVar10;
    if (sVar9 != 3) {
      uVar11 = 1;
    }
    *(undefined4 *)(lVar37 + 0x5f4) = param_4[1];
    *(undefined8 *)(lVar37 + 0x5f8) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(lVar37 + 0x600) = *(undefined8 *)(param_4 + 4);
    *(undefined4 *)(lVar37 + 0x608) = param_4[6];
    *(undefined4 *)(lVar37 + 0x60c) = param_4[7];
    *(undefined8 *)(lVar37 + 0x610) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(lVar37 + 0x618) = *(undefined8 *)(param_4 + 10);
    uVar31 = *(undefined8 *)(param_4 + 0xc);
    uVar17 = *(undefined8 *)(param_4 + 0xe);
    uVar29 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(lVar37 + 0x637) = *(undefined8 *)((long)param_4 + 0x47);
    *(undefined8 *)(lVar37 + 0x628) = uVar17;
    *(undefined8 *)(lVar37 + 0x630) = uVar29;
    *(undefined8 *)(lVar37 + 0x620) = uVar31;
    FUN_038fd1e0(lVar37 + 0x640);
    FUN_038fd2f0(lVar37 + 0x640,param_4 + 0x14);
    uVar31 = *(undefined8 *)(param_4 + 0x24);
    *(undefined4 *)(lVar37 + 0x688) = param_4[0x26];
    *(undefined8 *)(lVar37 + 0x680) = uVar31;
    do {
      cVar12 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar27) {
        *puVar1 = *puVar1 | 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    puVar3 = (uint *)(lVar21 + 0x14);
    local_f0 = (undefined **)CONCAT44(1.0 / (float)uVar11,1.0 / (float)uVar8);
    do {
      uVar6 = *puVar3;
      cVar12 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar27) {
        *puVar3 = uVar6 | 0x80000000;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if ((uVar6 & 0x7fffffff) != 0) {
      if ((int)uVar6 < 0) {
        if ((int)*puVar3 < 0) {
          lVar22 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar22 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar21);
      }
    }
    do {
      cVar12 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar27) {
        *puVar3 = 0;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    lVar22 = 0xd8;
    if (*(uint *)(lVar21 + 0x30) < 10) {
      lVar22 = 0;
    }
    iVar16 = *(int *)(*(long *)(lVar21 + 0x38) + lVar22);
    if (iVar16 != -1) {
      (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                      *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                      *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar16,8,&local_f0);
    }
    do {
      uVar6 = *puVar3;
      cVar12 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar27) {
        *puVar3 = uVar6 | 0x80000000;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if ((uVar6 & 0x7fffffff) != 0) {
      if ((int)uVar6 < 0) {
        if ((int)*puVar3 < 0) {
          lVar22 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar22 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar21);
      }
    }
    do {
      cVar12 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar27) {
        *puVar3 = 0;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    FUN_0390d290(puVar2,param_2,*(undefined8 *)(lVar21 + 0x68),0xffffffff,0);
    lVar22 = lVar36 + (long)(int)uVar20 * 0x6d0 + uVar30 * 0x18;
    local_108 = *(undefined4 *)(lVar22 + 0x250);
    uStack_104 = *(undefined4 *)(lVar22 + 0x254);
    local_100 = *(undefined8 *)(lVar22 + 600);
    uStack_f8 = *(undefined8 *)(lVar22 + 0x260);
    FUN_03a75a00(param_1,param_2,param_3,0,*(undefined8 *)(lVar34 + uVar30 * 8),&local_108,0,1);
    lVar22 = DAT_05ae9100;
    iVar16 = *(int *)(DAT_05ae9100 + 0x480);
    if (iVar16 != 0) {
      uVar28 = *(undefined4 *)(DAT_05ae9100 + 0x464);
      uVar17 = *(undefined8 *)(param_2 + 0xb8);
      uVar31 = (**(code **)PTR_DAT_04bbd560)(DAT_05ae9100 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar17,uVar28,*(undefined4 *)(lVar22 + 0x460),iVar16,uVar31);
    }
    if (*(int *)(lVar36 + (long)(int)uVar20 * 0x6d0 + 0x568) == -1) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar6 = 0;
        if (~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da) < *(uint *)(DAT_05ae78f0 + 0x368)) {
          uVar6 = ~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0
           ) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
          goto LAB_03a763e4;
        }
      }
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
        uVar26 = 0x112;
        uVar28 = 0x12;
      }
      else {
        uVar26 = 0x111;
        uVar28 = 0x11;
      }
      if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
        uVar28 = uVar26;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar28);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03a763e4:
  uVar6 = (int)uVar30 + 1;
  uVar30 = (ulong)uVar6;
  if (uVar6 < uVar24) {
    puVar3 = (uint *)(lVar21 + 0x14);
    lVar22 = lVar37 + 0x640;
    lVar36 = lVar36 + (long)(int)uVar20 * 0x6d0;
    lVar14 = *(long *)PTR_DAT_04bb29d0 / 1000000;
    bVar27 = false;
    do {
      lVar4 = DAT_05ae90c0;
      puVar33 = (ushort *)(param_4 + 0xc);
      uVar11 = *(ushort *)((long)param_4 + 0x32);
      puVar35 = *(undefined4 **)(lVar34 + uVar30 * 8);
      uVar20 = (uint)*puVar33;
      if (*puVar33 < 2) {
        uVar20 = 1;
      }
      uVar6 = (uint)uVar11;
      if (*(short *)((long)param_4 + 0x3a) != 3) {
        uVar6 = 1;
      }
      if (uVar6 == uVar11 || uVar6 < uVar11) {
        uVar6 = (uint)uVar11;
      }
      if (puVar35 == (undefined4 *)0x0) {
        local_f0 = &PTR_LAB_048f9770;
        pcStack_e8 = "volume mask - temp depth";
        uVar5 = uVar20 >> 1;
        if (uVar5 < 2) {
          uVar5 = 1;
        }
        uVar7 = uVar6 >> 1;
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        lVar18 = nn::os::GetTlsValue(DAT_05ae7898);
        if (lVar18 == 0) {
          iVar16 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar16 = (int)lVar18 + -1;
        }
        puVar19 = (undefined4 *)
                  FUN_03948e10(lVar4,param_2,lVar4 + (long)iVar16 * 0x290 + 0x10,&local_f0,0x5a,1,
                               uVar5,uVar7,1,0,1,0,1,0,0,0);
        *puVar2 = *param_4;
        *(undefined4 *)(lVar37 + 0x5f4) = param_4[1];
        *(undefined8 *)(lVar37 + 0x5f8) = *(undefined8 *)(param_4 + 2);
        *(undefined8 *)(lVar37 + 0x600) = *(undefined8 *)(param_4 + 4);
        *(undefined4 *)(lVar37 + 0x608) = param_4[6];
        *(undefined4 *)(lVar37 + 0x60c) = param_4[7];
        *(undefined8 *)(lVar37 + 0x610) = *(undefined8 *)(param_4 + 8);
        *(undefined8 *)(lVar37 + 0x618) = *(undefined8 *)(param_4 + 10);
        uVar31 = *(undefined8 *)puVar33;
        uVar17 = *(undefined8 *)(param_4 + 0xe);
        uVar29 = *(undefined8 *)(param_4 + 0x10);
        *(undefined8 *)(lVar37 + 0x637) = *(undefined8 *)((long)param_4 + 0x47);
        *(undefined8 *)(lVar37 + 0x628) = uVar17;
        *(undefined8 *)(lVar37 + 0x630) = uVar29;
        *(undefined8 *)(lVar37 + 0x620) = uVar31;
        FUN_038fd1e0(lVar22);
        FUN_038fd2f0(lVar22,param_4 + 0x14);
        uVar31 = *(undefined8 *)(param_4 + 0x24);
        *(undefined4 *)(lVar37 + 0x688) = param_4[0x26];
        *(undefined8 *)(lVar37 + 0x680) = uVar31;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        local_f0 = (undefined **)CONCAT44(1.0 / (float)uVar6,1.0 / (float)uVar20);
        do {
          uVar20 = *puVar3;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = uVar20 | 0x80000000;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((uVar20 & 0x7fffffff) != 0) {
          if ((int)uVar20 < 0) {
            while ((int)*puVar3 < 0) {
              nn::os::ConvertToTimeSpan(lVar14);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar21);
          }
        }
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = 0;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        lVar4 = 0xd8;
        if (*(uint *)(lVar21 + 0x30) < 10) {
          lVar4 = 0;
        }
        iVar16 = *(int *)(*(long *)(lVar21 + 0x38) + lVar4);
        if (iVar16 != -1) {
          (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar16,8,&local_f0
                         );
        }
        do {
          uVar20 = *puVar3;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = uVar20 | 0x80000000;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((uVar20 & 0x7fffffff) != 0) {
          if ((int)uVar20 < 0) {
            while ((int)*puVar3 < 0) {
              nn::os::ConvertToTimeSpan(lVar14);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar21);
          }
        }
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = 0;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        FUN_0390d290(puVar2,param_2,*(undefined8 *)(lVar21 + 0x68),0xffffffff,0);
        local_120 = 0;
        local_118 = 0;
        local_110 = 0;
      }
      else {
        *puVar2 = *param_4;
        *(undefined4 *)(lVar37 + 0x5f4) = param_4[1];
        *(undefined8 *)(lVar37 + 0x5f8) = *(undefined8 *)(param_4 + 2);
        *(undefined8 *)(lVar37 + 0x600) = *(undefined8 *)(param_4 + 4);
        *(undefined4 *)(lVar37 + 0x608) = param_4[6];
        *(undefined4 *)(lVar37 + 0x60c) = param_4[7];
        *(undefined8 *)(lVar37 + 0x610) = *(undefined8 *)(param_4 + 8);
        *(undefined8 *)(lVar37 + 0x618) = *(undefined8 *)(param_4 + 10);
        uVar31 = *(undefined8 *)puVar33;
        uVar17 = *(undefined8 *)(param_4 + 0xe);
        uVar29 = *(undefined8 *)(param_4 + 0x10);
        *(undefined8 *)(lVar37 + 0x637) = *(undefined8 *)((long)param_4 + 0x47);
        *(undefined8 *)(lVar37 + 0x620) = uVar31;
        *(undefined8 *)(lVar37 + 0x628) = uVar17;
        *(undefined8 *)(lVar37 + 0x630) = uVar29;
        FUN_038fd1e0(lVar22);
        FUN_038fd2f0(lVar22,param_4 + 0x14);
        uVar31 = *(undefined8 *)(param_4 + 0x24);
        *(undefined4 *)(lVar37 + 0x688) = param_4[0x26];
        *(undefined8 *)(lVar37 + 0x680) = uVar31;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        local_f0 = (undefined **)CONCAT44(1.0 / (float)uVar6,1.0 / (float)uVar20);
        do {
          uVar20 = *puVar3;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = uVar20 | 0x80000000;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((uVar20 & 0x7fffffff) != 0) {
          if ((int)uVar20 < 0) {
            while ((int)*puVar3 < 0) {
              nn::os::ConvertToTimeSpan(lVar14);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar21);
          }
        }
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = 0;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        lVar4 = 0xd8;
        if (*(uint *)(lVar21 + 0x30) < 10) {
          lVar4 = 0;
        }
        iVar16 = *(int *)(*(long *)(lVar21 + 0x38) + lVar4);
        if (iVar16 != -1) {
          (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                          *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar16,8,&local_f0
                         );
        }
        do {
          uVar20 = *puVar3;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = uVar20 | 0x80000000;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((uVar20 & 0x7fffffff) != 0) {
          if ((int)uVar20 < 0) {
            while ((int)*puVar3 < 0) {
              nn::os::ConvertToTimeSpan(lVar14);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar21);
          }
        }
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = 0;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        FUN_0390d290(puVar2,param_2,*(undefined8 *)(lVar21 + 0x68),0xffffffff,0);
        puVar23 = (undefined8 *)(lVar36 + 0x250 + uVar30 * 0x18);
        local_120 = *puVar23;
        local_118 = puVar23[1];
        local_110 = puVar23[2];
        puVar19 = puVar35;
      }
      FUN_03a75a00(param_1,param_2,param_3,0,puVar19,&local_120,0,1);
      lVar4 = DAT_05ae9100;
      iVar16 = *(int *)(DAT_05ae9100 + 0x480);
      if (iVar16 != 0) {
        uVar28 = *(undefined4 *)(DAT_05ae9100 + 0x464);
        uVar17 = *(undefined8 *)(param_2 + 0xb8);
        uVar31 = (**(code **)PTR_DAT_04bbd560)(DAT_05ae9100 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar17,uVar28,*(undefined4 *)(lVar4 + 0x460),iVar16,uVar31);
      }
      if (bVar27) {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,param_4);
      }
      if (*(int *)(lVar36 + 0x568) == -1) {
        if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
          uVar20 = 0;
          if (~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da) < *(uint *)(DAT_05ae78f0 + 0x368)) {
            uVar20 = ~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
          }
          if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar20 * 0x20 + 4) >> 2 & 1)
              != 0) goto LAB_03a76770;
          uVar32 = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        }
        else {
LAB_03a76770:
          if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
            uVar26 = 0x112;
            uVar28 = 0x12;
          }
          else {
            uVar26 = 0x111;
            uVar28 = 0x11;
          }
          if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
            uVar28 = uVar26;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar28);
          uVar32 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar32;
      }
      uVar30 = uVar30 + 1;
      param_4 = puVar19;
      bVar27 = puVar35 == (undefined4 *)0x0;
    } while (uVar30 != uVar24);
    if (puVar35 == (undefined4 *)0x0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar19);
    }
  }
  return;
}

