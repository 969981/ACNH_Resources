
void FUN_03a31650(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  float fVar16;
  undefined *puVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined4 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  undefined8 local_10c;
  undefined2 local_fc [2];
  uint local_f8;
  
  if (*(uint *)(param_1 + 0x5c0) <= param_3) {
    param_3 = 0;
  }
  lVar27 = *(long *)(param_1 + 0x5c8) + (long)(int)param_3 * 0x808;
  lVar25 = lVar27 + 0x4f0;
  lVar2 = lVar27 + 0x410;
  FUN_038e4cec(local_fc);
  local_fc[0] = 0;
  local_f8 = local_f8 & 0xfffffffe;
  FUN_038e4d90(local_fc,param_2);
  uVar1 = param_4 + 1;
  if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) {
    puVar28 = *(undefined4 **)(lVar27 + 1000 + (ulong)param_4 * 8);
    *(undefined4 *)(lVar27 + 0x410) = *puVar28;
    *(undefined4 *)(lVar27 + 0x414) = puVar28[1];
    *(undefined8 *)(lVar27 + 0x418) = *(undefined8 *)(puVar28 + 2);
    *(undefined8 *)(lVar27 + 0x420) = *(undefined8 *)(puVar28 + 4);
    *(undefined4 *)(lVar27 + 0x428) = puVar28[6];
    *(undefined4 *)(lVar27 + 0x42c) = puVar28[7];
    *(undefined8 *)(lVar27 + 0x430) = *(undefined8 *)(puVar28 + 8);
    *(undefined8 *)(lVar27 + 0x438) = *(undefined8 *)(puVar28 + 10);
    uVar26 = *(undefined8 *)(puVar28 + 0xc);
    uVar8 = *(undefined8 *)(puVar28 + 0xe);
    uVar22 = *(undefined8 *)(puVar28 + 0x10);
    *(undefined8 *)(lVar27 + 0x457) = *(undefined8 *)((long)puVar28 + 0x47);
    *(undefined8 *)(lVar27 + 0x450) = uVar22;
    *(undefined8 *)(lVar27 + 0x448) = uVar8;
    *(undefined8 *)(lVar27 + 0x440) = uVar26;
    FUN_038fd1e0(lVar27 + 0x460);
    FUN_038fd2f0(lVar27 + 0x460,puVar28 + 0x14);
    uVar21 = puVar28[0x26];
    *(undefined8 *)(lVar27 + 0x4a0) = *(undefined8 *)(puVar28 + 0x24);
    puVar3 = (uint *)(lVar27 + 0x4e4);
    *(undefined4 *)(lVar27 + 0x4a8) = uVar21;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar12) {
        *puVar3 = *puVar3 | 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    FUN_01560750(lVar25,*(undefined8 *)(lVar27 + 1000 + (ulong)uVar1 * 8),
                 *(undefined1 *)(lVar27 + 0x5ae),*(undefined2 *)(lVar27 + 0x5ac));
    uVar19 = (uint)*(byte *)(lVar27 + 0x5ae);
  }
  else {
    puVar3 = (uint *)(lVar27 + 0x4e4);
    *(undefined4 *)(lVar27 + 0x4d0) = 0;
    *(float *)(lVar27 + 0x4c8) = (float)(int)param_4;
    *(float *)(lVar27 + 0x4cc) = (float)(int)param_4;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar12) {
        *puVar3 = *puVar3 & 0xfffffff7 | 8;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    uVar19 = (uint)*(byte *)(lVar27 + 0x5ae);
    if (uVar1 != *(byte *)(lVar27 + 0x5ae)) {
      puVar3 = (uint *)(lVar27 + 0x5a8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar12) {
          *puVar3 = *puVar3 | 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      *(char *)(lVar27 + 0x5ae) = (char)uVar1;
      uVar19 = uVar1;
    }
  }
  *(undefined8 *)(lVar27 + 0x390) = 0;
  plVar4 = (long *)(lVar27 + 0x380);
  uVar9 = *(ushort *)(lVar27 + 0x52a);
  uVar14 = *(ushort *)(lVar27 + 0x528) >> (ulong)(uVar19 & 0x1f);
  uVar15 = uVar9 >> (ulong)(uVar19 & 0x1f);
  if (uVar14 < 2) {
    uVar14 = 1;
  }
  fVar34 = (float)uVar14;
  if (*(short *)(lVar27 + 0x532) != 3) {
    uVar9 = 1;
  }
  if (uVar9 <= uVar15) {
    uVar9 = uVar15;
  }
  fVar33 = (float)uVar9;
  *(float *)(lVar27 + 0x388) = fVar34;
  *(float *)(lVar27 + 0x398) = fVar34;
  *(float *)(lVar27 + 0x38c) = fVar33;
  *(float *)(lVar27 + 0x39c) = fVar33;
  (**(code **)(*(long *)(lVar27 + 0x380) + 0x38))(plVar4,param_2);
  local_118 = 0xff7fffffff7fffff;
  local_128 = PTR_DAT_04bd0f08 + 0x10;
  local_120 = 0x7f7fffff7f7fffff;
  local_110 = *(uint *)PTR_DAT_04bd0ea8;
  local_10c = 0x3f80000000000000;
  if (local_110 < 6) {
    if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
      fVar29 = *(float *)(lVar27 + 0x38c);
      fVar30 = *(float *)(lVar27 + 0x388);
    }
    else {
      fVar29 = *(float *)(lVar27 + 0x388);
      fVar30 = *(float *)(lVar27 + 0x38c);
    }
    fVar32 = fVar29;
    fVar16 = 0.0;
    if (fVar29 <= 0.0) {
      fVar32 = 0.0;
      fVar16 = fVar29;
    }
    fVar31 = fVar30;
    fVar29 = 0.0;
    if (fVar30 <= 0.0) {
      fVar31 = 0.0;
      fVar29 = fVar30;
    }
    local_120 = CONCAT44(fVar29,fVar16);
    local_118 = CONCAT44(fVar31,fVar32);
  }
  FUN_038e77e4(&local_128,param_2,plVar4);
  puVar17 = PTR_DAT_04bbdd18;
  uVar26 = *(undefined8 *)
            (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x200) + 8) + 0x28);
  FUN_03907810(uVar26,param_2);
  FUN_03a31520(param_2,uVar26,lVar2);
  uVar19 = *(uint *)(lVar27 + 0x548);
  if (uVar19 != 0xffffffff) {
    lVar23 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar23 + 0x5c8) >> 3 & 1) == 0) {
      uVar13 = uVar19 - *(ushort *)(lVar23 + 0x3da);
      if (*(uint *)(lVar23 + 0x368) <= uVar13) {
        uVar13 = 0;
      }
      if ((*(uint *)(*(long *)(lVar23 + 0x370) + (long)(int)uVar13 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar19 & 0x3f);
        goto LAB_03a319d0;
      }
    }
    if ((*(uint *)(lVar23 + 0x5c8) >> 5 & 1) == 0) {
      uVar20 = 0x112;
      uVar21 = 0x12;
    }
    else {
      uVar20 = 0x111;
      uVar21 = 0x11;
    }
    if ((*(uint *)(lVar23 + 800) & 2) != 0) {
      uVar21 = uVar20;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar21);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a319d0:
  puVar3 = (uint *)(lVar27 + 0x548);
  if (*(uint *)(*(long *)puVar17 + 8) < 0x40) {
    lVar23 = 0;
  }
  else {
    lVar23 = *(long *)(*(long *)(*(long *)puVar17 + 0x10) + 0x1f8);
  }
  fVar34 = 1.0 / fVar34;
  local_138 = PTR_DAT_04bb2020 + 0x10;
  local_130 = 0x40d1a55;
  uStack_12c = 0;
  puVar28 = (undefined4 *)FUN_039a6304(lVar27 + 0x7d8,param_2,&local_138,0x1a,uVar14,uVar9,1,0,0,1);
  lVar5 = lVar27 + 0x460;
  *(undefined4 *)(lVar27 + 0x410) = *(undefined4 *)(lVar27 + 0x4f8);
  *(undefined4 *)(lVar27 + 0x414) = *(undefined4 *)(lVar27 + 0x4fc);
  *(undefined8 *)(lVar27 + 0x418) = *(undefined8 *)(lVar27 + 0x500);
  *(undefined8 *)(lVar27 + 0x420) = *(undefined8 *)(lVar27 + 0x508);
  *(undefined4 *)(lVar27 + 0x428) = *(undefined4 *)(lVar27 + 0x510);
  *(undefined4 *)(lVar27 + 0x42c) = *(undefined4 *)(lVar27 + 0x514);
  *(undefined8 *)(lVar27 + 0x430) = *(undefined8 *)(lVar27 + 0x518);
  *(undefined8 *)(lVar27 + 0x438) = *(undefined8 *)(lVar27 + 0x520);
  *(undefined8 *)(lVar27 + 0x457) = *(undefined8 *)(lVar27 + 0x53f);
  *(undefined8 *)(lVar27 + 0x450) = *(undefined8 *)(lVar27 + 0x538);
  *(undefined8 *)(lVar27 + 0x448) = *(undefined8 *)(lVar27 + 0x530);
  *(undefined8 *)(lVar27 + 0x440) = *(undefined8 *)(lVar27 + 0x528);
  FUN_038fd1e0(lVar5);
  FUN_038fd2f0(lVar5,puVar3);
  puVar6 = (uint *)(lVar27 + 0x4e4);
  *(undefined8 *)(lVar27 + 0x4a0) = *(undefined8 *)(lVar27 + 0x588);
  *(undefined4 *)(lVar27 + 0x4a8) = *(undefined4 *)(lVar27 + 0x590);
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar12) {
      *puVar6 = *puVar6 | 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) {
    uVar18 = *(undefined1 *)(lVar27 + 0x5ae);
  }
  else {
    *(undefined4 *)(lVar27 + 0x4d0) = 0;
    *(float *)(lVar27 + 0x4c8) = (float)(int)uVar1;
    *(float *)(lVar27 + 0x4cc) = (float)(int)uVar1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar12) {
        *puVar6 = *puVar6 & 0xfffffff7 | 8;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (*(char *)(lVar27 + 0x5ae) == '\0') {
      uVar18 = 0;
    }
    else {
      puVar7 = (uint *)(lVar27 + 0x5a8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar12) {
          *puVar7 = *puVar7 | 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      uVar18 = 0;
      *(undefined1 *)(lVar27 + 0x5ae) = 0;
    }
  }
  FUN_01560750(lVar25,puVar28,uVar18,*(undefined2 *)(lVar27 + 0x5ac));
  (**(code **)(*(long *)(lVar27 + 0x380) + 0x38))(plVar4,param_2);
  lVar23 = *(long *)(*(long *)(lVar23 + 8) + 0x18);
  FUN_03907810(lVar23,param_2);
  puVar7 = (uint *)(lVar23 + 0x14);
  local_138._4_4_ = 0.0;
  local_130 = 0;
  uStack_12c = 0;
  do {
    uVar19 = *puVar7;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar12) {
      *puVar7 = uVar19 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_138._0_4_ = fVar34;
  if ((uVar19 & 0x7fffffff) != 0) {
    if ((int)uVar19 < 0) {
      if ((int)*puVar7 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar7 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar12) {
      *puVar7 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar24 = 0x90;
  if (*(uint *)(lVar23 + 0x30) < 7) {
    lVar24 = 0;
  }
  iVar10 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
  if (iVar10 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar10,0x10,&local_138);
  }
  FUN_03a31520(param_2,lVar23,lVar2);
  uVar19 = *puVar3;
  if (uVar19 != 0xffffffff) {
    lVar24 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar24 + 0x5c8) >> 3 & 1) == 0) {
      uVar13 = uVar19 - *(ushort *)(lVar24 + 0x3da);
      if (*(uint *)(lVar24 + 0x368) <= uVar13) {
        uVar13 = 0;
      }
      if ((*(uint *)(*(long *)(lVar24 + 0x370) + (long)(int)uVar13 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar19 & 0x3f);
        goto LAB_03a31d44;
      }
    }
    if ((*(uint *)(lVar24 + 0x5c8) >> 5 & 1) == 0) {
      uVar20 = 0x112;
      uVar21 = 0x12;
    }
    else {
      uVar20 = 0x111;
      uVar21 = 0x11;
    }
    if ((*(uint *)(lVar24 + 800) & 2) != 0) {
      uVar21 = uVar20;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar21);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a31d44:
  if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) {
    FUN_01560750(lVar25,lVar2,*(undefined1 *)(lVar27 + 0x5ae),*(undefined2 *)(lVar27 + 0x5ac));
  }
  else {
    FUN_01560750(lVar25,lVar2,uVar1,0);
    *(undefined8 *)(lVar27 + 0x4c8) = 0;
    *(undefined4 *)(lVar27 + 0x4d0) = 0;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar12) {
        *puVar6 = *puVar6 & 0xfffffff7 | 8;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  *(undefined4 *)(lVar27 + 0x410) = *puVar28;
  *(undefined4 *)(lVar27 + 0x414) = puVar28[1];
  *(undefined8 *)(lVar27 + 0x418) = *(undefined8 *)(puVar28 + 2);
  *(undefined8 *)(lVar27 + 0x420) = *(undefined8 *)(puVar28 + 4);
  *(undefined4 *)(lVar27 + 0x428) = puVar28[6];
  *(undefined4 *)(lVar27 + 0x42c) = puVar28[7];
  *(undefined8 *)(lVar27 + 0x430) = *(undefined8 *)(puVar28 + 8);
  *(undefined8 *)(lVar27 + 0x438) = *(undefined8 *)(puVar28 + 10);
  uVar26 = *(undefined8 *)(puVar28 + 0xc);
  uVar8 = *(undefined8 *)(puVar28 + 0xe);
  uVar22 = *(undefined8 *)(puVar28 + 0x10);
  *(undefined8 *)(lVar27 + 0x457) = *(undefined8 *)((long)puVar28 + 0x47);
  *(undefined8 *)(lVar27 + 0x448) = uVar8;
  *(undefined8 *)(lVar27 + 0x450) = uVar22;
  *(undefined8 *)(lVar27 + 0x440) = uVar26;
  FUN_038fd1e0(lVar5);
  FUN_038fd2f0(lVar5,puVar28 + 0x14);
  uVar26 = *(undefined8 *)(puVar28 + 0x24);
  *(undefined4 *)(lVar27 + 0x4a8) = puVar28[0x26];
  *(undefined8 *)(lVar27 + 0x4a0) = uVar26;
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar12) {
      *puVar6 = *puVar6 | 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  fVar33 = 1.0 / fVar33;
  (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
  lVar25 = *(long *)(*(long *)(lVar23 + 8) + 0x28);
  FUN_03907810(lVar25,param_2);
  puVar7 = (uint *)(lVar25 + 0x14);
  local_138._0_4_ = 0.0;
  local_130 = 0;
  uStack_12c = 0;
  do {
    uVar1 = *puVar7;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar12) {
      *puVar7 = uVar1 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_138._4_4_ = fVar33;
  if ((uVar1 & 0x7fffffff) != 0) {
    if ((int)uVar1 < 0) {
      if ((int)*puVar7 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar7 < 0);
      }
    }
    else {
      FUN_03907b80(lVar25);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar12) {
      *puVar7 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar23 = 0x90;
  if (*(uint *)(lVar25 + 0x30) < 7) {
    lVar23 = 0;
  }
  iVar10 = *(int *)(*(long *)(lVar25 + 0x38) + lVar23);
  if (iVar10 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar10,0x10,&local_138);
  }
  FUN_03a31520(param_2,lVar25,lVar2);
  uVar1 = *puVar3;
  if (uVar1 != 0xffffffff) {
    lVar25 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar25 + 0x5c8) >> 3 & 1) == 0) {
      uVar19 = uVar1 - *(ushort *)(lVar25 + 0x3da);
      if (*(uint *)(lVar25 + 0x368) <= uVar19) {
        uVar19 = 0;
      }
      if ((*(uint *)(*(long *)(lVar25 + 0x370) + (long)(int)uVar19 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
        goto LAB_03a31ff0;
      }
    }
    if ((*(uint *)(lVar25 + 0x5c8) >> 5 & 1) == 0) {
      uVar20 = 0x112;
      uVar21 = 0x12;
    }
    else {
      uVar20 = 0x111;
      uVar21 = 0x11;
    }
    if ((*(uint *)(lVar25 + 800) & 2) != 0) {
      uVar21 = uVar20;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar21);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a31ff0:
  *(undefined4 *)(lVar27 + 0x410) = *(undefined4 *)(lVar27 + 0x4f8);
  *(undefined4 *)(lVar27 + 0x414) = *(undefined4 *)(lVar27 + 0x4fc);
  *(undefined8 *)(lVar27 + 0x418) = *(undefined8 *)(lVar27 + 0x500);
  *(undefined8 *)(lVar27 + 0x420) = *(undefined8 *)(lVar27 + 0x508);
  *(undefined4 *)(lVar27 + 0x428) = *(undefined4 *)(lVar27 + 0x510);
  *(undefined4 *)(lVar27 + 0x42c) = *(undefined4 *)(lVar27 + 0x514);
  *(undefined8 *)(lVar27 + 0x430) = *(undefined8 *)(lVar27 + 0x518);
  *(undefined8 *)(lVar27 + 0x438) = *(undefined8 *)(lVar27 + 0x520);
  *(undefined8 *)(lVar27 + 0x457) = *(undefined8 *)(lVar27 + 0x53f);
  *(undefined8 *)(lVar27 + 0x448) = *(undefined8 *)(lVar27 + 0x530);
  *(undefined8 *)(lVar27 + 0x450) = *(undefined8 *)(lVar27 + 0x538);
  *(undefined8 *)(lVar27 + 0x440) = *(undefined8 *)(lVar27 + 0x528);
  FUN_038fd1e0(lVar5);
  FUN_038fd2f0(lVar5,puVar3);
  *(undefined8 *)(lVar27 + 0x4a0) = *(undefined8 *)(lVar27 + 0x588);
  *(undefined4 *)(lVar27 + 0x4a8) = *(undefined4 *)(lVar27 + 0x590);
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar12) {
      *puVar6 = *puVar6 | 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((*(byte *)(lVar27 + 0x7e0) & 1) == 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar28);
  }
  return;
}

