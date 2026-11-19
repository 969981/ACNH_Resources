
void FUN_03af7210(long param_1,long param_2,uint param_3,uint param_4,ulong param_5,ulong param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined4 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined *local_f0;
  char *pcStack_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined4 local_c4;
  undefined1 local_7c;
  int local_6c;
  
  bVar7 = (param_6 & 1) == 0;
  uVar11 = 0x8000;
  if (bVar7) {
    uVar11 = 0x800;
  }
  uVar12 = 0x10000;
  if (bVar7) {
    uVar12 = 0x1000;
  }
  uVar13 = 0x18000;
  if (bVar7) {
    uVar13 = 0x1800;
  }
  if ((uVar13 & param_4) == 0) {
    return;
  }
  lVar20 = *(long *)(param_1 + 0x10);
  uVar13 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar13 = 0;
  }
  pbVar22 = (byte *)(lVar20 + (long)(int)uVar13 * 0x23c0);
  lVar27 = 1;
  if ((param_6 & 1) != 0) {
    lVar27 = 2;
  }
  pbVar23 = pbVar22 + lVar27 * 0x7c0 + 0x308;
  lVar15 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0x3f0;
  if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 4) {
    lVar15 = 0;
  }
  lVar25 = *(long *)PTR_DAT_04bbd510;
  FUN_038e4cec(local_e0);
  puVar28 = (undefined4 *)PTR_DAT_04bb3508;
  puVar19 = PTR_DAT_04bb2020;
  local_dc = 0;
  uVar3 = *(uint *)(*(long *)(lVar15 + 8) + 0x30);
  lVar14 = *(long *)(*(long *)(lVar15 + 8) + 0x38);
  lVar8 = 0x70;
  if (uVar3 < 3) {
    lVar8 = 0;
  }
  uVar21 = (uint)*(ushort *)(lVar14 + lVar8 + 0x30) & (int)((uint)*pbVar22 << 0x19) >> 0x1f;
  if ((param_5 & 1) != 0) {
    lVar8 = 0xa8;
    if (uVar3 < 4) {
      lVar8 = 0;
    }
    uVar21 = uVar21 + *(ushort *)(lVar14 + lVar8 + 0x30);
  }
  fVar29 = *(float *)(pbVar23 + 0x18);
  fVar30 = *(float *)(pbVar23 + 0x1c);
  fVar31 = *(float *)(pbVar23 + 0x10);
  fVar32 = *(float *)(pbVar23 + 0x14);
  if ((uVar11 & param_4) == 0) {
    pbVar23[0x20] = 0;
    pbVar23[0x21] = 0;
    pbVar23[0x22] = 0;
    pbVar23[0x23] = 0;
    pbVar23[0x24] = 0;
    pbVar23[0x25] = 0;
    pbVar23[0x26] = 0;
    pbVar23[0x27] = 0;
    local_c4 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(param_1 + 0x40);
    pcStack_e8 = "gsys::RenderBufferContext::NLD(quat)";
    if ((param_6 & 1) == 0) {
      pcStack_e8 = "gsys::RenderBufferContext::NLD(half)";
    }
    local_f0 = PTR_DAT_04bb2020 + 0x10;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar8 == 0) {
      local_6c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_6c = (int)lVar8 + -1;
    }
    uVar9 = FUN_03948e10(lVar25,param_2,lVar25 + (long)local_6c * 0x290 + 0x10,&local_f0,uVar17,1,
                         (int)(fVar29 - fVar31),(int)(fVar30 - fVar32),1,0,1,0,1,0,0,0);
    lVar8 = lVar27 * 0x7c0;
    *(undefined8 *)(pbVar22 + lVar8 + 0x700) = uVar9;
    FUN_01560750(pbVar22 + lVar8 + 0x450,uVar9,pbVar22[lVar8 + 0x50e],
                 *(undefined2 *)(pbVar22 + lVar8 + 0x50c));
    puVar28 = *(undefined4 **)(pbVar22 + lVar8 + 0x700);
    *(undefined4 *)(pbVar22 + lVar8 + 0x8c8) = *puVar28;
    *(undefined4 *)(pbVar22 + lVar8 + 0x8cc) = puVar28[1];
    *(undefined8 *)(pbVar22 + lVar8 + 0x8d0) = *(undefined8 *)(puVar28 + 2);
    *(undefined8 *)(pbVar22 + lVar8 + 0x8d8) = *(undefined8 *)(puVar28 + 4);
    *(undefined4 *)(pbVar22 + lVar8 + 0x8e0) = puVar28[6];
    *(undefined4 *)(pbVar22 + lVar8 + 0x8e4) = puVar28[7];
    *(undefined8 *)(pbVar22 + lVar8 + 0x8e8) = *(undefined8 *)(puVar28 + 8);
    *(undefined8 *)(pbVar22 + lVar8 + 0x8f0) = *(undefined8 *)(puVar28 + 10);
    uVar9 = *(undefined8 *)(puVar28 + 0xc);
    uVar10 = *(undefined8 *)(puVar28 + 0xe);
    uVar18 = *(undefined8 *)(puVar28 + 0x10);
    *(undefined8 *)(pbVar22 + lVar8 + 0x90f) = *(undefined8 *)((long)puVar28 + 0x47);
    *(undefined8 *)(pbVar22 + lVar8 + 0x908) = uVar18;
    *(undefined8 *)(pbVar22 + lVar8 + 0x900) = uVar10;
    *(undefined8 *)(pbVar22 + lVar8 + 0x8f8) = uVar9;
    FUN_038fd1e0(pbVar22 + lVar8 + 0x918);
    FUN_038fd2f0(pbVar22 + lVar8 + 0x918,puVar28 + 0x14);
    uVar17 = puVar28[0x26];
    *(undefined8 *)(pbVar22 + lVar8 + 0x958) = *(undefined8 *)(puVar28 + 0x24);
    puVar1 = (uint *)(pbVar22 + lVar8 + 0x99c);
    *(undefined4 *)(pbVar22 + lVar8 + 0x960) = uVar17;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar14 = lVar27 * 0x7c0;
    puVar28 = *(undefined4 **)(pbVar22 + lVar8 + 0x700);
    *(undefined4 *)(pbVar22 + lVar14 + 0x9a8) = *puVar28;
    *(undefined4 *)(pbVar22 + lVar14 + 0x9ac) = puVar28[1];
    *(undefined8 *)(pbVar22 + lVar14 + 0x9b0) = *(undefined8 *)(puVar28 + 2);
    *(undefined8 *)(pbVar22 + lVar14 + 0x9b8) = *(undefined8 *)(puVar28 + 4);
    *(undefined4 *)(pbVar22 + lVar14 + 0x9c0) = puVar28[6];
    *(undefined4 *)(pbVar22 + lVar14 + 0x9c4) = puVar28[7];
    *(undefined8 *)(pbVar22 + lVar14 + 0x9c8) = *(undefined8 *)(puVar28 + 8);
    *(undefined8 *)(pbVar22 + lVar14 + 0x9d0) = *(undefined8 *)(puVar28 + 10);
    uVar18 = *(undefined8 *)(puVar28 + 0x10);
    uVar9 = *(undefined8 *)(puVar28 + 0xc);
    uVar10 = *(undefined8 *)(puVar28 + 0xe);
    *(undefined8 *)(pbVar22 + lVar14 + 0x9ef) = *(undefined8 *)((long)puVar28 + 0x47);
    *(undefined8 *)(pbVar22 + lVar14 + 0x9e8) = uVar18;
    *(undefined8 *)(pbVar22 + lVar14 + 0x9e0) = uVar10;
    *(undefined8 *)(pbVar22 + lVar14 + 0x9d8) = uVar9;
    FUN_038fd1e0(pbVar22 + lVar14 + 0x9f8);
    FUN_038fd2f0(pbVar22 + lVar14 + 0x9f8,puVar28 + 0x14);
    uVar17 = puVar28[0x26];
    *(undefined8 *)(pbVar22 + lVar14 + 0xa38) = *(undefined8 *)(puVar28 + 0x24);
    puVar1 = (uint *)(pbVar22 + lVar14 + 0xa7c);
    *(undefined4 *)(pbVar22 + lVar14 + 0xa40) = uVar17;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(byte **)(pbVar23 + 0x20) = pbVar22 + lVar8 + 0x450;
    local_c4 = 0xf;
    uVar21 = uVar21 + *(ushort *)(*(long *)(*(long *)(lVar15 + 8) + 0x38) + 0x30);
    puVar19 = PTR_DAT_04bb2020;
    puVar28 = (undefined4 *)PTR_DAT_04bb3508;
  }
  if ((uVar12 & param_4) == 0) {
    FUN_03af8c88(param_1,param_3,uVar12);
    local_e0[0] = 0;
    pbVar23[0x60] = 0;
    pbVar23[0x61] = 0;
    pbVar23[0x62] = 0;
    pbVar23[99] = 0;
    pbVar23[100] = 0;
    pbVar23[0x65] = 0;
    pbVar23[0x66] = 0;
    pbVar23[0x67] = 0;
    lVar15 = *(long *)(lVar15 + 8);
    if (uVar21 == 0) goto LAB_03af76b4;
LAB_03af78b8:
    uVar21 = uVar21 - 1;
    if (*(uint *)(lVar15 + 0x20) <= uVar21) {
      uVar21 = 0;
    }
    lVar15 = *(long *)(lVar15 + 0x28) + (ulong)uVar21 * 0x150;
  }
  else {
    local_e0[0] = 0x101;
    local_7c = 8;
    pcStack_e8 = "gsys::RenderBufferContext::Depth(quat)";
    if ((param_6 & 1) == 0) {
      pcStack_e8 = "gsys::RenderBufferContext::Depth(half)";
    }
    local_f0 = puVar19 + 0x10;
    pbVar2 = (byte *)0x0;
    if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
      pbVar2 = pbVar22 + lVar27 * 0x7c0 + 0xa88;
    }
    lVar8 = nn::os::GetTlsValue(*puVar28);
    if (lVar8 == 0) {
      local_6c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_6c = (int)lVar8 + -1;
    }
    uVar9 = FUN_03948e10(lVar25,param_2,lVar25 + (long)local_6c * 0x290 + 0x10,&local_f0,0x5a,1,
                         (int)(fVar29 - fVar31),(int)(fVar30 - fVar32),1,0,1,pbVar2,1,0,0,0);
    lVar8 = lVar27 * 0x7c0;
    iVar4 = *(int *)(pbVar22 + lVar27 * 0x7c0 + 0xa88);
    *(undefined8 *)(pbVar22 + lVar8 + 0x6f8) = uVar9;
    if (((*(long *)(pbVar22 + lVar8 + 0xa90) != *(long *)(pbVar22 + lVar8 + 0x6e0)) ||
        (iVar4 != *(int *)(pbVar22 + lVar8 + 0x6d8))) ||
       (*(int *)(pbVar22 + lVar8 + 0xa8c) != *(int *)(pbVar22 + lVar8 + 0x6dc))) {
      lVar14 = lVar27 * 0x7c0;
      *(int *)(pbVar22 + lVar8 + 0x6d8) = iVar4;
      *(int *)(pbVar22 + lVar8 + 0x6dc) = *(int *)(pbVar22 + lVar8 + 0xa8c);
      *(long *)(pbVar22 + lVar8 + 0x6e0) = *(long *)(pbVar22 + lVar8 + 0xa90);
      *(undefined8 *)(pbVar22 + lVar14 + 0x6e8) = *(undefined8 *)(pbVar22 + lVar14 + 0xa98);
      puVar1 = (uint *)(pbVar22 + lVar14 + 0x6c8);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = *puVar1 & 0xfffffff7 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar14 = lVar27 * 0x7c0;
    FUN_0155a100(pbVar22 + lVar14 + 0x610,*(undefined8 *)(pbVar22 + lVar8 + 0x6f8),
                 pbVar22[lVar14 + 0x6ce],*(undefined2 *)(pbVar22 + lVar14 + 0x6cc));
    puVar28 = *(undefined4 **)(pbVar22 + lVar8 + 0x6f8);
    *(undefined4 *)(pbVar22 + lVar14 + 0x7e8) = *puVar28;
    *(undefined4 *)(pbVar22 + lVar14 + 0x7ec) = puVar28[1];
    *(undefined8 *)(pbVar22 + lVar14 + 0x7f0) = *(undefined8 *)(puVar28 + 2);
    *(undefined8 *)(pbVar22 + lVar14 + 0x7f8) = *(undefined8 *)(puVar28 + 4);
    *(undefined4 *)(pbVar22 + lVar14 + 0x800) = puVar28[6];
    *(undefined4 *)(pbVar22 + lVar14 + 0x804) = puVar28[7];
    *(undefined8 *)(pbVar22 + lVar14 + 0x808) = *(undefined8 *)(puVar28 + 8);
    *(undefined8 *)(pbVar22 + lVar14 + 0x810) = *(undefined8 *)(puVar28 + 10);
    uVar9 = *(undefined8 *)(puVar28 + 0xc);
    uVar10 = *(undefined8 *)(puVar28 + 0xe);
    uVar18 = *(undefined8 *)(puVar28 + 0x10);
    *(undefined8 *)(pbVar22 + lVar14 + 0x82f) = *(undefined8 *)((long)puVar28 + 0x47);
    *(undefined8 *)(pbVar22 + lVar14 + 0x828) = uVar18;
    *(undefined8 *)(pbVar22 + lVar14 + 0x820) = uVar10;
    *(undefined8 *)(pbVar22 + lVar14 + 0x818) = uVar9;
    FUN_038fd1e0(pbVar22 + lVar14 + 0x838);
    FUN_038fd2f0(pbVar22 + lVar14 + 0x838,puVar28 + 0x14);
    uVar17 = puVar28[0x26];
    *(undefined8 *)(pbVar22 + lVar14 + 0x878) = *(undefined8 *)(puVar28 + 0x24);
    puVar1 = (uint *)(pbVar22 + lVar14 + 0x8bc);
    *(undefined4 *)(pbVar22 + lVar14 + 0x880) = uVar17;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(byte **)(pbVar23 + 0x60) = pbVar22 + lVar14 + 0x610;
    lVar15 = *(long *)(lVar15 + 8);
    uVar21 = uVar21 + *(ushort *)
                       (*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x38 +
                       0x30);
    if (uVar21 != 0) goto LAB_03af78b8;
LAB_03af76b4:
    lVar15 = *(long *)(lVar15 + 0x18);
  }
  FUN_03907810(lVar15,param_2);
  FUN_01557430(lVar15,param_2,0,lVar20 + (long)(int)uVar13 * 0x23c0 + 0x1fb0,0);
  lVar8 = (param_6 & 1) * 0x7c0;
  puVar1 = (uint *)(pbVar22 + lVar8 + 0x8bc);
  if ((*(byte *)(param_1 + 0x1c) >> 5 & 1) == 0) {
    pbVar22[lVar8 + 0x8ac] = 0;
    pbVar22[lVar8 + 0x8ad] = 0;
    pbVar22[lVar8 + 0x8ae] = 0;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    pbVar22[lVar8 + 0x8ae] = 0;
    pbVar22[lVar8 + 0x8ac] = 1;
    pbVar22[lVar8 + 0x8ad] = 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar1 = (uint *)(lVar15 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar3 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar15);
    }
  }
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(pbVar22 + (param_6 & 1) * 0x7c0 + 0x7e8,param_2,*(undefined8 *)(lVar15 + 0x68),
               0xffffffff,0);
  FUN_038e4d90(local_e0,param_2);
  (**(code **)(*(long *)pbVar23 + 0x38))(pbVar23,param_2);
  FUN_038e77e4(pbVar22 + lVar27 * 0x7c0 + 0xaa0,param_2,pbVar23);
  if ((*(byte *)(param_1 + 0x1c) >> 1 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0xb8);
    lVar27 = *(long *)PTR_DAT_04bbd7e0;
    (**(code **)PTR_DAT_04bcf1a8)(uVar9,0x10,lVar27 + 0x1024);
    (**(code **)PTR_DAT_04bcf1b0)(uVar9,0x10,lVar27 + 0x1068);
    puVar6 = PTR_DAT_04bcf1e8;
    puVar19 = PTR_DAT_04bbd560;
    iVar4 = *(int *)(lVar27 + 0x1010);
    if (iVar4 != 0) {
      lVar27 = *(long *)(lVar27 + 0x1018);
      uVar26 = 0;
      uVar24 = 0;
      do {
        lVar15 = *(long *)(lVar27 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
        if (lVar15 != 0) {
          uVar10 = (**(code **)puVar19)(lVar15 + 8);
          (**(code **)puVar6)(uVar9,uVar26 & 0xffffffff,uVar10,*(undefined4 *)(lVar15 + 0x118));
        }
        uVar26 = uVar24 + 1;
        uVar24 = uVar26 & 0xffffffff;
      } while (iVar4 != (int)uVar26);
    }
    lVar27 = *(long *)PTR_DAT_04bbd7e8;
    iVar4 = *(int *)(lVar27 + 0x480);
    if (iVar4 != 0) {
      uVar17 = *(undefined4 *)(lVar27 + 0x464);
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      uVar9 = (**(code **)puVar19)(lVar27 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar10,uVar17,*(undefined4 *)(lVar27 + 0x460),iVar4,uVar9);
    }
  }
  puVar19 = PTR_DAT_04bc1010;
  if ((uVar11 & param_4) != 0) {
    lVar27 = lVar20 + (long)(int)uVar13 * 0x23c0;
    *(uint *)(lVar27 + 8) = *(uint *)(lVar27 + 8) | uVar11;
    uVar11 = *(uint *)(*(long *)(pbVar23 + 0x20) + 0x58);
    if (uVar11 != 0xffffffff) {
      lVar27 = *(long *)puVar19;
      if ((*(uint *)(lVar27 + 0x5c8) >> 3 & 1) == 0) {
        uVar3 = uVar11 - *(ushort *)(lVar27 + 0x3da);
        if (*(uint *)(lVar27 + 0x368) <= uVar3) {
          uVar3 = 0;
        }
        if ((*(uint *)(*(long *)(lVar27 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar11 & 0x3f);
          goto LAB_03af7c64;
        }
      }
      if ((*(uint *)(lVar27 + 0x5c8) >> 5 & 1) == 0) {
        uVar16 = 0x112;
        uVar17 = 0x12;
      }
      else {
        uVar16 = 0x111;
        uVar17 = 0x11;
      }
      if ((*(uint *)(lVar27 + 800) & 2) != 0) {
        uVar17 = uVar16;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar17);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03af7c64:
  if (((uVar12 & param_4) != 0) &&
     (lVar20 = lVar20 + (long)(int)uVar13 * 0x23c0,
     *(uint *)(lVar20 + 8) = *(uint *)(lVar20 + 8) | uVar12,
     *(int *)(*(long *)(pbVar23 + 0x60) + 0x58) == -1)) {
    lVar20 = *(long *)puVar19;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = 0;
      if (~(uint)*(ushort *)(lVar20 + 0x3da) < *(uint *)(lVar20 + 0x368)) {
        uVar11 = ~(uint)*(ushort *)(lVar20 + 0x3da);
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        goto LAB_03af7d18;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar16 = 0x112;
      uVar17 = 0x12;
    }
    else {
      uVar16 = 0x111;
      uVar17 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar17 = uVar16;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar17);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03af7d18:
  if ((param_6 & 1) == 0) {
    *(byte **)(pbVar23 + 0x20) = pbVar22 + 0xb30;
  }
  if ((*(byte *)(param_1 + 0x1c) >> 6 & 1) == 0) {
    uVar17 = 0x11;
    if ((*(uint *)(*(long *)puVar19 + 800) & 2) != 0) {
      uVar17 = 0x111;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar17);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

