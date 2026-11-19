
void FUN_03962ea0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  undefined2 uVar14;
  bool bVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  undefined4 uVar25;
  ulong uVar26;
  undefined4 local_12c;
  undefined8 local_120;
  long local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  uint local_88;
  int local_80;
  undefined4 uStack_7c;
  long local_78;
  long *plStack_70;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  lVar19 = *(long *)PTR_DAT_04bb29d0;
  local_100 = 0;
  uStack_f8 = 0;
  uVar21 = 0;
  local_110 = (long *)0x0;
  uStack_108 = 0;
  local_12c = 0x1d;
  local_120 = 0;
  local_118 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0x10000;
  uVar3 = *(undefined2 *)(param_1 + 0x318);
  local_d0[0] = 0xffffffff;
  local_98 = 0;
  param_1 = param_1 + 8;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  plVar11 = (long *)PTR_DAT_04bb2698;
  do {
    local_90 = (long)&DAT_041b3cd8 + (long)(int)(&DAT_041b3cd8)[uVar21];
    uVar7 = 0;
    uVar18 = 0x808080ff;
    uVar25 = 0x14;
    uVar6 = 0x3f800000;
    uVar14 = uVar3;
    switch(uVar21 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      uVar6 = FUN_038cd970(0xff);
      goto LAB_03962fe4;
    case 7:
    case 8:
    case 9:
      uVar6 = FUN_038cd970(0xffffffff);
      goto LAB_03962fe4;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      uVar6 = FUN_038cd970(0);
      goto LAB_03962fe4;
    case 0xf:
      uVar18 = 0xff0000ff;
      break;
    case 0x10:
      uVar18 = 0xff00ff;
      break;
    case 0x11:
      uVar18 = 0xffff;
      break;
    case 0x12:
      break;
    case 0x13:
      uVar18 = 0x8b0000ff;
      break;
    case 0x14:
      uVar18 = 0x6400ff;
      break;
    case 0x15:
      uVar18 = 0x8bff;
      break;
    case 0x16:
      goto switchD_03962fb8_caseD_16;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      goto switchD_03962fb8_caseD_17;
    default:
      uVar6 = 0;
LAB_03962fe4:
      uVar25 = local_12c;
switchD_03962fb8_caseD_17:
      uVar7 = uVar6;
      switch(uVar21 & 0xffffffff) {
      case 0:
      case 0xb:
        uVar18 = 0;
        goto LAB_039630a0;
      case 1:
      case 0xc:
        uVar18 = 3;
LAB_039630a0:
        uVar14 = 1;
        break;
      default:
        goto switchD_03962fb8_caseD_16;
      case 3:
      case 0xd:
      case 0x19:
        uVar18 = 4;
        break;
      case 4:
      case 0xe:
        uVar18 = 2;
        break;
      case 5:
      case 8:
      case 0x1a:
        uVar18 = 8;
        uVar16 = 6;
        goto LAB_03963138;
      case 6:
      case 9:
        FUN_0390c1b8(&local_120,uVar25,uVar3,uVar3,1,1,0);
        goto LAB_03963144;
      }
      goto LAB_03963134;
    }
    uVar7 = FUN_038cd970(uVar18);
    uVar25 = local_12c;
switchD_03962fb8_caseD_16:
    uVar18 = 1;
LAB_03963134:
    uVar16 = 1;
LAB_03963138:
    FUN_0390a734(&local_120,uVar18,uVar25,uVar3,uVar14,uVar16,1,0,0,1);
LAB_03963144:
    uVar6 = uStack_e8._4_4_;
    iVar22 = (uint)local_e0;
    uVar26 = local_e0 & 0xffffffff;
    lVar23 = *plVar11;
    if (lVar23 == 0) {
      plVar9 = malloc(0x38);
    }
    else {
      plVar9 = param_2;
      if (param_2 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar23 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x38,8);
    }
    bVar17 = 0;
    plVar9[6] = 0;
    plVar24 = plVar9 + 1;
    *plVar24 = 0;
    *(undefined2 *)((long)plVar9 + 0x2a) = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    *(undefined1 *)(plVar9 + 5) = 0;
    *plVar9 = (long)puVar1;
    plVar13 = param_2;
    if (param_2 == (long *)0x0) {
      lVar8 = *plVar11;
      lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar8 + 8);
      if (lVar23 != 0) {
        plVar13 = (long *)(lVar23 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      bVar17 = *(byte *)(plVar9 + 5);
    }
    plVar9[6] = 0;
    *(undefined2 *)((long)plVar9 + 0x2a) = 0;
    *(byte *)(plVar9 + 5) = bVar17 & 0xfe;
    *plVar24 = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    if (iVar22 == 0) {
      iVar22 = 0;
      *(undefined2 *)((long)plVar9 + 0x2a) = 8;
      lVar23 = 0;
LAB_03963280:
      uVar6 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar9,plVar13,uVar26,uVar6,8);
      *(undefined2 *)((long)plVar9 + 0x2a) = 8;
      lVar23 = plVar9[3];
      if (plVar9[4] == 0) {
        iVar22 = 0;
      }
      else {
        iVar22 = (int)*plVar24 - *(int *)(plVar9[4] + 0x10);
      }
      if (lVar23 == 0) goto LAB_03963280;
      uVar6 = *(undefined4 *)(lVar23 + 0x104);
    }
    uVar4 = (uint)local_e0;
    uVar26 = local_e0 & 0xfffffffc;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar12 = malloc(uVar26);
      uVar18 = uStack_d8;
    }
    else {
      plVar11 = param_2;
      if (param_2 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar8 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          pvVar12 = (void *)0x0;
          uVar18 = uStack_d8;
          goto joined_r0x03963314;
        }
      }
      pvVar12 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar26,0x10);
      uVar18 = uStack_d8;
    }
joined_r0x03963314:
    if (3 < uVar4) {
      if ((ulong)(uVar4 >> 2) - 1 < 7) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        puVar20 = (undefined4 *)((long)pvVar12 + 0x10);
        do {
          lVar8 = lVar8 + -8;
          puVar20[-4] = uVar7;
          puVar20[-3] = uVar7;
          puVar20[-2] = uVar7;
          puVar20[-1] = uVar7;
          *puVar20 = uVar7;
          puVar20[1] = uVar7;
          puVar20[2] = uVar7;
          puVar20[3] = uVar7;
          puVar20 = puVar20 + 8;
        } while (-lVar8 != ((ulong)(uVar4 >> 2) & 0x3ffffff8));
        lVar8 = -lVar8;
      }
      if ((uVar4 >> 2 & 7) != 0) {
        uVar26 = (ulong)(uVar4 >> 2) & 7;
        puVar20 = (undefined4 *)((long)pvVar12 + lVar8 * 4);
        do {
          uVar26 = uVar26 - 1;
          *puVar20 = uVar7;
          puVar20 = puVar20 + 1;
        } while (uVar26 != 0);
      }
    }
    uStack_d8._6_1_ = (byte)((ulong)uVar18 >> 0x30);
    local_120 = CONCAT44(uVar6,iVar22);
    if ((uStack_d8._6_1_ >> 1 & 1) == 0) {
      bVar15 = false;
    }
    else {
      bVar15 = 0x11 < (local_88 & 0xffff) && (local_88 & 0xffff) - 0x59 < 0xffffffd6;
    }
    local_118 = lVar23;
    local_110 = plVar9;
    uStack_d8 = uVar18;
    local_80 = iVar22;
    uStack_7c = uVar6;
    local_78 = lVar23;
    plStack_70 = plVar9;
    uVar18 = FUN_038fd3e0(local_d0,&local_80,&local_f0,0,local_90,bVar15,1);
    FUN_038faf2c(uVar18,&local_120,pvVar12,0);
    plVar11 = (long *)PTR_DAT_04bb2698;
    if (pvVar12 == (void *)0x0) {
LAB_0396341c:
      lVar23 = *plVar11;
      if (lVar23 != 0) goto LAB_03963424;
LAB_03963490:
      pvVar12 = malloc(0xe0);
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 != 0) {
        plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar12);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9,pvVar12);
        }
        goto LAB_0396341c;
      }
      free(pvVar12);
      lVar23 = *plVar11;
      if (lVar23 == 0) goto LAB_03963490;
LAB_03963424:
      plVar9 = param_2;
      if (param_2 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar23 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
      }
      pvVar12 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0xe0,8);
    }
    FUN_0390d120(pvVar12,&local_120);
    *(void **)(param_1 + uVar21 * 8) = pvVar12;
    if ((int)uVar21 - 0x18U < 3) {
      *(undefined2 *)((long)pvVar12 + 199) = 0x707;
      puVar2 = (uint *)((long)pvVar12 + 0xd4);
      *(undefined1 *)((long)pvVar12 + 0xc9) = 7;
      do {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar15) {
          *puVar2 = *puVar2 & 0xfffffffd | 2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar23 = *(long *)(param_1 + uVar21 * 8);
      *(byte *)(lVar23 + 0xd8) = *(byte *)(lVar23 + 0xd8) | 4;
      *(ushort *)(lVar23 + 0xce) = *(ushort *)(lVar23 + 0xce) | 1;
      puVar2 = (uint *)(lVar23 + 0xd4);
      do {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar15) {
          *puVar2 = *puVar2 & 0xffffffef | 0x10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar23 = *(long *)(param_1 + uVar21 * 8);
      *(undefined1 *)(lVar23 + 0xcb) = 8;
      *(byte *)(lVar23 + 0xd8) = *(byte *)(lVar23 + 0xd8) | 4;
      *(ushort *)(lVar23 + 0xce) = *(ushort *)(lVar23 + 0xce) | 1;
      puVar2 = (uint *)(lVar23 + 0xd4);
      do {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar15) {
          *puVar2 = *puVar2 & 0xffffffef | 0x10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pvVar12 = *(void **)(param_1 + uVar21 * 8);
    }
    puVar2 = (uint *)((long)pvVar12 + 0xd4);
    do {
      uVar4 = *puVar2;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar15) {
        *puVar2 = uVar4 | 0x80000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar4 & 0x7fffffff) != 0) {
      if ((int)uVar4 < 0) {
        while ((int)*puVar2 < 0) {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        }
      }
      else {
        FUN_0390d37c(pvVar12);
      }
    }
    do {
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar15) {
        *puVar2 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar21 = uVar21 + 1;
    local_12c = uVar25;
    if (uVar21 == 0x1b) {
      FUN_038fd0e0(local_d0);
      return;
    }
  } while( true );
}

