
/* WARNING: Type propagation algorithm not settling */

void FUN_039d2a00(long param_1,long param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined2 local_10c [2];
  undefined4 local_108;
  uint local_f0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  int local_6c;
  
  if (*(int *)(param_1 + 0xa70) != 0) {
    lVar16 = *(long *)PTR_DAT_04bbd510;
    FUN_039d15f4();
    *(undefined8 *)(param_1 + 0xad8) = 0;
    *(undefined8 *)(param_1 + 0xad0) = 0;
    *(undefined8 *)(param_1 + 0xac8) = 0;
    *(undefined8 *)(param_1 + 0xac0) = 0;
    *(undefined8 *)(param_1 + 0xab8) = 0;
    *(undefined8 *)(param_1 + 0xab0) = 0;
    *(undefined8 *)(param_1 + 0xaa8) = 0;
    *(undefined8 *)(param_1 + 0xaa0) = 0;
    lVar11 = *(long *)PTR_DAT_04bd1650;
    *(undefined8 *)(param_1 + 0xa98) = 0;
    lVar14 = 0;
    if (*(int *)(lVar11 + 0x38) != 0) {
      lVar14 = *(long *)(lVar11 + 0x40);
    }
    FUN_038e4cec(local_10c);
    fVar24 = *(float *)(param_1 + 0xa90);
    uVar12 = 0;
    fVar26 = *(float *)(param_1 + 0xa88);
    iVar17 = 0;
    uVar23 = 0;
    fVar27 = *(float *)(param_1 + 0xa8c);
    fVar25 = *(float *)(param_1 + 0xa94);
    local_10c[0] = 0;
    local_f0 = 0;
    local_108 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((*(uint *)(param_1 + 0xa70) >> (ulong)((uint)uVar12 & 0x1f) & 1) == 0) goto LAB_039d2b10;
      switch(uVar12 & 0xffffffff) {
      case 0:
        lVar11 = *(long *)(*(long *)(lVar14 + 8) + 0x38);
        break;
      case 1:
        lVar11 = *(long *)(*(long *)(lVar14 + 8) + 0x38) +
                 (ulong)(1 < *(uint *)(*(long *)(lVar14 + 8) + 0x30)) * 0x38;
        break;
      case 2:
        uVar6 = *(uint *)(*(long *)(lVar14 + 8) + 0x30);
        lVar11 = *(long *)(*(long *)(lVar14 + 8) + 0x38);
        bVar8 = 1 < uVar6;
        bVar9 = uVar6 == 2;
        lVar20 = 0x70;
        goto LAB_039d2bb8;
      case 3:
        uVar6 = *(uint *)(*(long *)(lVar14 + 8) + 0x30);
        lVar11 = *(long *)(*(long *)(lVar14 + 8) + 0x38);
        bVar8 = 2 < uVar6;
        bVar9 = uVar6 == 3;
        lVar20 = 0xa8;
LAB_039d2bb8:
        if (!bVar8 || bVar9) {
          lVar20 = 0;
        }
        lVar11 = lVar11 + lVar20;
        break;
      default:
        goto switchD_039d2b4c_default;
      }
      iVar17 = iVar17 + (uint)*(ushort *)(lVar11 + 0x30);
switchD_039d2b4c_default:
      iVar22 = (int)uVar23;
      local_90 = (&PTR_s_GBuffer_Albedo__04b6aff0)[uVar23];
      uVar4 = *(undefined2 *)(param_1 + (long)iVar22 * 0xe8 + 0xb0);
      local_98 = puVar1;
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar11 == 0) {
        local_6c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_6c = (int)lVar11 + -1;
      }
      puVar19 = (undefined8 *)(param_1 + 0x5e8 + (long)iVar22 * 0xe8);
      uVar10 = FUN_03948e10(lVar16,param_2,lVar16 + 0x10 + (long)local_6c * 0x290,&local_98,uVar4,1,
                            (int)(fVar24 - fVar26),(int)(fVar25 - fVar27),1,0,1,0,1,0,0,0);
      *puVar19 = uVar10;
      lVar11 = param_1 + 0xbc0 + (long)iVar22 * 0x100;
      FUN_01560750(lVar11 + 0x18,uVar10,*(undefined1 *)(lVar11 + 0xd6),
                   *(undefined2 *)(lVar11 + 0xd4));
      *(long *)(param_1 + 0xa98 + (long)*(char *)(lVar11 + 0xf8) * 8) = lVar11 + 0x18;
      puVar18 = (undefined4 *)*puVar19;
      lVar20 = param_1 + 0x5e8 + (long)iVar22 * 0xe8;
      local_f0 = 0xf << (ulong)(((int)*(char *)(lVar11 + 0xf8) & 7U) << 2) | local_f0;
      *(undefined4 *)(lVar20 + 8) = *puVar18;
      *(undefined4 *)(lVar20 + 0xc) = puVar18[1];
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(puVar18 + 2);
      *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(puVar18 + 4);
      *(undefined4 *)(lVar20 + 0x20) = puVar18[6];
      *(undefined4 *)(lVar20 + 0x24) = puVar18[7];
      *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(puVar18 + 8);
      *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)(puVar18 + 10);
      uVar13 = *(undefined8 *)((long)puVar18 + 0x47);
      uVar10 = *(undefined8 *)(puVar18 + 0xc);
      uVar15 = *(undefined8 *)(puVar18 + 0x10);
      *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(puVar18 + 0xe);
      *(undefined8 *)(lVar20 + 0x48) = uVar15;
      *(undefined8 *)(lVar20 + 0x38) = uVar10;
      *(undefined8 *)(lVar20 + 0x4f) = uVar13;
      FUN_038fd1e0(lVar20 + 0x58);
      FUN_038fd2f0(lVar20 + 0x58,puVar18 + 0x14);
      uVar3 = puVar18[0x26];
      *(undefined8 *)(lVar20 + 0x98) = *(undefined8 *)(puVar18 + 0x24);
      puVar2 = (uint *)(lVar20 + 0xdc);
      *(undefined4 *)(lVar20 + 0xa0) = uVar3;
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = *puVar2 | 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_039d2b10:
      uVar12 = uVar23 + 1;
      uVar23 = uVar12 & 0xffffffff;
    } while ((int)uVar12 != 5);
    lVar14 = *(long *)(lVar14 + 8);
    if (iVar17 < 1) {
      lVar14 = *(long *)(lVar14 + 0x18);
    }
    else {
      uVar6 = iVar17 - 1;
      if (*(uint *)(lVar14 + 0x20) <= uVar6) {
        uVar6 = 0;
      }
      lVar14 = *(long *)(lVar14 + 0x28) + (ulong)uVar6 * 0x150;
    }
    FUN_03907810(lVar14,param_2);
    FUN_01557430(lVar14,param_2,0,param_1 + 0x10c0,0);
    puVar2 = (uint *)(lVar14 + 0x14);
    lVar11 = *(long *)PTR_DAT_04bb29d0 / 1000000;
    uVar6 = *(uint *)(param_1 + 0xa70);
    if ((uVar6 & 1) != 0) {
      do {
        uVar6 = *puVar2;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar6 | 0x80000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar6 & 0x7fffffff) != 0) {
        if ((int)uVar6 < 0) {
          while ((int)*puVar2 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar14);
        }
      }
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_0390d290(param_1 + 0x18,param_2,*(undefined8 *)(lVar14 + 0x68),0xffffffff,0);
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      do {
        uVar6 = *puVar2;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar6 | 0x80000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar6 & 0x7fffffff) != 0) {
        if ((int)uVar6 < 0) {
          while ((int)*puVar2 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar14);
        }
      }
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_0390d290(param_1 + 0x100,param_2,
                   *(long *)(lVar14 + 0x68) + (ulong)(1 < *(uint *)(lVar14 + 0x60)) * 0x18,
                   0xffffffff,0);
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      do {
        uVar6 = *puVar2;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar6 | 0x80000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar6 & 0x7fffffff) != 0) {
        if ((int)uVar6 < 0) {
          while ((int)*puVar2 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar14);
        }
      }
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar16 = 0x30;
      if (*(uint *)(lVar14 + 0x60) < 3) {
        lVar16 = 0;
      }
      FUN_0390d290(param_1 + 0x1e8,param_2,*(long *)(lVar14 + 0x68) + lVar16,0xffffffff,0);
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      do {
        uVar6 = *puVar2;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar6 | 0x80000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar6 & 0x7fffffff) != 0) {
        if ((int)uVar6 < 0) {
          while ((int)*puVar2 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar14);
        }
      }
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar16 = 0x48;
      if (*(uint *)(lVar14 + 0x60) < 4) {
        lVar16 = 0;
      }
      FUN_0390d290(param_1 + 0x2d0,param_2,*(long *)(lVar14 + 0x68) + lVar16,0xffffffff,0);
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      do {
        uVar6 = *puVar2;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar6 | 0x80000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar6 & 0x7fffffff) != 0) {
        if ((int)uVar6 < 0) {
          while ((int)*puVar2 < 0) {
            nn::os::ConvertToTimeSpan(lVar11);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar14);
        }
      }
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = 0x60;
      if (*(uint *)(lVar14 + 0x60) < 5) {
        lVar11 = 0;
      }
      FUN_0390d290(param_1 + 0x3b8,param_2,*(long *)(lVar14 + 0x68) + lVar11,0xffffffff,0);
    }
    plVar21 = (long *)(param_1 + 0xa78);
    (**(code **)(*plVar21 + 0x38))(plVar21,param_2);
    local_88 = 0xff7fffffff7fffff;
    local_98 = PTR_DAT_04bd0f08 + 0x10;
    local_90 = (undefined *)0x7f7fffff7f7fffff;
    local_80 = *(uint *)PTR_DAT_04bd0ea8;
    local_7c = 0x3f80000000000000;
    if (local_80 < 6) {
      if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
        fVar24 = *(float *)(param_1 + 0xa84);
        fVar25 = *(float *)(param_1 + 0xa80);
      }
      else {
        fVar24 = *(float *)(param_1 + 0xa80);
        fVar25 = *(float *)(param_1 + 0xa84);
      }
      fVar27 = fVar24;
      fVar26 = 0.0;
      if (fVar24 <= 0.0) {
        fVar27 = 0.0;
        fVar26 = fVar24;
      }
      fVar28 = fVar25;
      fVar24 = 0.0;
      if (fVar25 <= 0.0) {
        fVar28 = 0.0;
        fVar24 = fVar25;
      }
      local_90 = (undefined *)CONCAT44(fVar24,fVar26);
      local_88 = CONCAT44(fVar28,fVar27);
    }
    FUN_038e77e4(&local_98,param_2,plVar21);
    FUN_038e4d90(local_10c,param_2);
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    lVar14 = *(long *)PTR_DAT_04bbd7e0;
    (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar14 + 0x1024);
    (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar14 + 0x1068);
    puVar7 = PTR_DAT_04bcf1e8;
    puVar1 = PTR_DAT_04bbd560;
    iVar17 = *(int *)(lVar14 + 0x1010);
    if (iVar17 != 0) {
      lVar14 = *(long *)(lVar14 + 0x1018);
      uVar12 = 0;
      uVar23 = 0;
      do {
        lVar11 = *(long *)(lVar14 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
        if (lVar11 != 0) {
          uVar13 = (**(code **)puVar1)(lVar11 + 8);
          (**(code **)puVar7)(uVar10,uVar12 & 0xffffffff,uVar13,*(undefined4 *)(lVar11 + 0x118));
        }
        uVar12 = uVar23 + 1;
        uVar23 = uVar12 & 0xffffffff;
      } while (iVar17 != (int)uVar12);
    }
    lVar14 = *(long *)PTR_DAT_04bbd7e8;
    iVar17 = *(int *)(lVar14 + 0x480);
    if (iVar17 != 0) {
      uVar3 = *(undefined4 *)(lVar14 + 0x464);
      uVar13 = *(undefined8 *)(param_2 + 0xb8);
      uVar10 = (**(code **)puVar1)(lVar14 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar13,uVar3,*(undefined4 *)(lVar14 + 0x460),iVar17,uVar10);
    }
    FUN_039d15f4(param_1,param_2);
    uVar6 = *(uint *)(param_1 + 0xa70);
    if ((uVar6 & 1) != 0) {
      FUN_01560750(param_1 + 0xbd8,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0xc96),
                   *(undefined2 *)(param_1 + 0xc94));
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      FUN_01560750(param_1 + 0xcd8,*(undefined8 *)(param_1 + 0xf8),*(undefined1 *)(param_1 + 0xd96),
                   *(undefined2 *)(param_1 + 0xd94));
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      FUN_01560750(param_1 + 0xdd8,*(undefined8 *)(param_1 + 0x1e0),*(undefined1 *)(param_1 + 0xe96)
                   ,*(undefined2 *)(param_1 + 0xe94));
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      FUN_01560750(param_1 + 0xed8,*(undefined8 *)(param_1 + 0x2c8),*(undefined1 *)(param_1 + 0xf96)
                   ,*(undefined2 *)(param_1 + 0xf94));
      uVar6 = *(uint *)(param_1 + 0xa70);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      FUN_01560750(param_1 + 0xfd8,*(undefined8 *)(param_1 + 0x3b0),
                   *(undefined1 *)(param_1 + 0x1096),*(undefined2 *)(param_1 + 0x1094));
    }
  }
  return;
}

