
void FUN_03a9e6d0(long param_1,undefined8 *param_2,uint param_3,long param_4,undefined4 *param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x380) >> 2 & 1) != 0) {
    return;
  }
  local_70 = 0;
  uStack_68 = 0x3f80000000000000;
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x180) <= param_3) {
    uVar2 = 0;
  }
  puVar19 = (undefined4 *)(*(long *)(param_1 + 0x188) + (long)(int)uVar2 * 0xd70);
  FUN_01560750(puVar19 + 0x21e,puVar19 + 0x270,*(undefined1 *)((long)puVar19 + 0x936),
               *(undefined2 *)(puVar19 + 0x24d));
  uVar2 = puVar19[0x1e5];
  *(undefined4 **)(puVar19 + 0x25e) = puVar19 + 0x21e;
  *(undefined8 *)(puVar19 + 0x26e) = 0;
  uVar5 = puVar19[0x1e4];
  puVar19[0x259] = (float)(int)uVar2;
  puVar19[600] = (float)(int)uVar5;
  puVar19[0x25a] = (float)(int)(uVar5 & (int)uVar5 >> 0x1f);
  puVar19[0x25c] = (float)(int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  puVar19[0x25b] = (float)(int)(uVar2 & (int)uVar2 >> 0x1f);
  puVar19[0x25d] = (float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  (**(code **)(*(long *)(puVar19 + 0x256) + 0x38))(puVar19 + 0x256,param_2);
  local_d8 = 0xff7fffffff7fffff;
  local_e8 = PTR_DAT_04bd0f08 + 0x10;
  local_e0 = 0x7f7fffff7f7fffff;
  local_cc = 0x3f80000000000000;
  local_d0 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_d0 < 6) {
    if ((1 << (ulong)(local_d0 & 0x1f) & 0x39U) == 0) {
      fVar24 = (float)puVar19[0x259];
      fVar25 = (float)puVar19[600];
    }
    else {
      fVar24 = (float)puVar19[600];
      fVar25 = (float)puVar19[0x259];
    }
    fVar27 = fVar24;
    fVar8 = 0.0;
    if (fVar24 <= 0.0) {
      fVar27 = 0.0;
      fVar8 = fVar24;
    }
    fVar26 = fVar25;
    fVar24 = 0.0;
    if (fVar25 <= 0.0) {
      fVar26 = 0.0;
      fVar24 = fVar25;
    }
    local_e0 = CONCAT44(fVar24,fVar8);
    local_d8 = CONCAT44(fVar26,fVar27);
  }
  FUN_038e77e4(&local_e8,param_2,puVar19 + 0x256);
  uVar2 = puVar19[0x234];
  if (uVar2 != 0xffffffff) {
    lVar17 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar17 + 0x5c8) >> 3 & 1) == 0) {
      uVar5 = uVar2 - *(ushort *)(lVar17 + 0x3da);
      if (*(uint *)(lVar17 + 0x368) <= uVar5) {
        uVar5 = 0;
      }
      if ((*(uint *)(*(long *)(lVar17 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) == 0) {
        param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03a9e8f0;
      }
    }
    if ((*(uint *)(lVar17 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar16 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar16 = 0x11;
    }
    if ((*(uint *)(lVar17 + 800) & 2) != 0) {
      uVar16 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar16);
    param_2[0x20] = 0;
  }
LAB_03a9e8f0:
  if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0f98);
  }
  uVar12 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
  puVar3 = param_2;
  if ((uVar12 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  (**(code **)PTR_DAT_04bcfd90)(puVar3[0x17],0,&local_70,0xf);
  FUN_038e4cec(&local_e8);
  local_c0 = 0x2020505;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffff0000 | 0x100000000);
  local_bc = 0x101;
  FUN_038e4d90(&local_e8,param_2);
  uVar2 = *(uint *)(param_1 + 0x380) >> 5 & 1;
  lVar17 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x458) + 8);
  lVar23 = *(long *)(lVar17 + 0x28);
  if (*(uint *)(lVar17 + 0x20) <= uVar2) {
    uVar2 = 0;
  }
  lVar17 = lVar23 + (ulong)uVar2 * 0x150;
  FUN_03907810(lVar17,param_2);
  FUN_03a9e2f0(param_1,param_2,param_3,lVar17);
  puVar4 = (undefined4 *)(*(long *)(param_4 + 0x20) + 8);
  if (param_5 != (undefined4 *)0x0) {
    puVar4 = param_5;
  }
  *puVar19 = *puVar4;
  puVar19[1] = puVar4[1];
  *(undefined8 *)(puVar19 + 2) = *(undefined8 *)(puVar4 + 2);
  *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(puVar4 + 4);
  puVar19[6] = puVar4[6];
  puVar19[7] = puVar4[7];
  *(undefined8 *)(puVar19 + 8) = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar19 + 10) = *(undefined8 *)(puVar4 + 10);
  uVar18 = *(undefined8 *)(puVar4 + 0x10);
  uVar20 = *(undefined8 *)(puVar4 + 0xc);
  uVar13 = *(undefined8 *)(puVar4 + 0xe);
  *(undefined8 *)((long)puVar19 + 0x47) = *(undefined8 *)((long)puVar4 + 0x47);
  *(undefined8 *)(puVar19 + 0xe) = uVar13;
  *(undefined8 *)(puVar19 + 0x10) = uVar18;
  *(undefined8 *)(puVar19 + 0xc) = uVar20;
  FUN_038fd1e0(puVar19 + 0x14);
  FUN_038fd2f0(puVar19 + 0x14,puVar4 + 0x14);
  uVar16 = puVar4[0x26];
  *(undefined8 *)(puVar19 + 0x24) = *(undefined8 *)(puVar4 + 0x24);
  puVar1 = puVar19 + 0x35;
  puVar19[0x26] = uVar16;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  puVar1 = (uint *)(lVar23 + (ulong)uVar2 * 0x150 + 0x14);
  do {
    uVar5 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar5 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar17);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  plVar21 = (long *)(lVar23 + (ulong)uVar2 * 0x150 + 0x68);
  FUN_0390d290(puVar19,param_2,*plVar21,0xffffffff,0);
  iVar11 = puVar19[0x358];
  do {
    uVar5 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar5 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar17);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_0390d290(puVar19 + (long)iVar11 * 0xba + 0x72,param_2,
               *plVar21 + (ulong)(1 < *(uint *)(lVar23 + (ulong)uVar2 * 0x150 + 0x60)) * 0x18,
               0xffffffff,0);
  (**(code **)PTR_DAT_04bcfdf8)(0x3f800000,param_2[0x17]);
  uVar20 = param_2[0x17];
  (**(code **)PTR_DAT_04bcf1a8)(uVar20,0x10,param_1 + 0x6e4);
  (**(code **)PTR_DAT_04bcf1b0)(uVar20,0x10,param_1 + 0x728);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar11 = *(int *)(param_1 + 0x6d0);
  if (iVar11 != 0) {
    lVar17 = *(long *)(param_1 + 0x6d8);
    uVar12 = 0;
    uVar22 = 0;
    do {
      lVar23 = *(long *)(lVar17 + (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
      if (lVar23 != 0) {
        uVar13 = (**(code **)puVar9)(lVar23 + 8);
        (**(code **)puVar10)(uVar20,uVar12 & 0xffffffff,uVar13,*(undefined4 *)(lVar23 + 0x118));
      }
      uVar12 = uVar22 + 1;
      uVar22 = uVar12 & 0xffffffff;
    } while (iVar11 != (int)uVar12);
  }
  iVar11 = *(int *)(param_1 + 0x960);
  if (iVar11 != 0) {
    uVar16 = *(undefined4 *)(param_1 + 0x944);
    uVar13 = param_2[0x17];
    uVar20 = (**(code **)puVar9)(param_1 + 0x968);
    (**(code **)PTR_DAT_04bbd568)(uVar13,uVar16,*(undefined4 *)(param_1 + 0x940),iVar11,uVar20);
  }
  uVar2 = puVar19[0x234];
  if (uVar2 != 0xffffffff) {
    lVar17 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar17 + 0x5c8) >> 3 & 1) == 0) {
      uVar5 = uVar2 - *(ushort *)(lVar17 + 0x3da);
      if (*(uint *)(lVar17 + 0x368) <= uVar5) {
        uVar5 = 0;
      }
      if ((*(uint *)(*(long *)(lVar17 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) == 0) {
        param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03a9eda4;
      }
    }
    if ((*(uint *)(lVar17 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar16 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar16 = 0x11;
    }
    if ((*(uint *)(lVar17 + 800) & 2) != 0) {
      uVar16 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar16);
    param_2[0x20] = 0;
  }
LAB_03a9eda4:
  puVar19[0x1e6] = puVar19[0x270];
  *(undefined8 *)(puVar19 + 0x1f0) = *(undefined8 *)(puVar19 + 0x27a);
  puVar19[0x1e7] = puVar19[0x271];
  *(undefined8 *)(puVar19 + 0x1e8) = *(undefined8 *)(puVar19 + 0x272);
  *(undefined8 *)(puVar19 + 0x1ea) = *(undefined8 *)(puVar19 + 0x274);
  puVar19[0x1ec] = puVar19[0x276];
  puVar19[0x1ed] = puVar19[0x277];
  *(undefined8 *)(puVar19 + 0x1ee) = *(undefined8 *)(puVar19 + 0x278);
  *(undefined8 *)((long)puVar19 + 0x7df) = *(undefined8 *)((long)puVar19 + 0xa07);
  *(undefined8 *)(puVar19 + 0x1f6) = *(undefined8 *)(puVar19 + 0x280);
  *(undefined8 *)(puVar19 + 500) = *(undefined8 *)(puVar19 + 0x27e);
  *(undefined8 *)(puVar19 + 0x1f2) = *(undefined8 *)(puVar19 + 0x27c);
  FUN_038fd1e0(puVar19 + 0x1fa);
  FUN_038fd2f0(puVar19 + 0x1fa,puVar19 + 0x284);
  *(undefined8 *)(puVar19 + 0x20a) = *(undefined8 *)(puVar19 + 0x294);
  puVar19[0x20c] = puVar19[0x296];
  puVar1 = puVar19 + 0x21b;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  return;
}

