
void FUN_03a799d0(long param_1,long param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 *puVar23;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  float local_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined1 local_7b;
  int local_6c;
  
  lVar22 = *(long *)(param_1 + 0x238);
  lVar21 = *(long *)(param_1 + 0x228);
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    uVar3 = 0;
  }
  uVar14 = param_4;
  if (*(uint *)(param_1 + 0x220) <= param_4) {
    uVar14 = 0;
  }
  FUN_038e4cec(&local_e0);
  local_e0._0_4_ = (int)((ulong)local_e0 >> 0x18) << 0x18;
  local_7b = 0;
  local_e0 = (undefined *)(CONCAT44(local_e0._4_4_,(int)local_e0) & 0xfffffffeffffffff);
  FUN_038e4d90(&local_e0,param_2);
  lVar15 = lVar22 + (long)(int)uVar3 * 0x6d0;
  uVar4 = param_4;
  if (*(uint *)(lVar15 + 0x210) <= param_4) {
    uVar4 = 0;
  }
  puVar23 = *(undefined4 **)(*(long *)(lVar15 + 0x218) + (long)(int)uVar4 * 8);
  uVar18 = *(undefined4 *)(param_1 + 0x240);
  lVar15 = *(long *)PTR_DAT_04bbd510;
  local_e0 = PTR_DAT_04bb2020 + 0x10;
  uVar8 = *(ushort *)(puVar23 + 0xc);
  pcStack_d8 = "volume mask - temp depth";
  uVar7 = *(ushort *)((long)puVar23 + 0x32);
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  uVar5 = uVar7;
  if (*(short *)((long)puVar23 + 0x3a) != 3) {
    uVar5 = 1;
  }
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar12 == 0) {
    local_6c = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_6c = (int)lVar12 + -1;
  }
  puVar13 = (undefined4 *)
            FUN_03948e10(lVar15,param_2,lVar15 + (long)local_6c * 0x290 + 0x10,&local_e0,uVar18,1,
                         uVar8,uVar5,1,0,1,0,1,0,0,0);
  local_d0 = (float)uVar8;
  local_c4 = 0x3f80000000000000;
  fStack_cc = (float)uVar5;
  local_c8 = *(undefined4 *)PTR_DAT_04bd0ea8;
  local_e0 = PTR_DAT_04bd0f08 + 0x10;
  pcStack_d8 = (char *)0x0;
  uVar14 = (uint)*(byte *)(lVar21 + (long)(int)uVar14 * 0x2c + 6);
  lVar21 = lVar22 + (long)(int)uVar3 * 0x6d0;
  *(undefined2 *)(lVar21 + 0x6b4) = 0x101;
  puVar1 = (uint *)(lVar21 + 0x6c4);
  *(undefined1 *)(lVar21 + 0x6b6) = 2;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = *puVar1 | 4;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar15 = lVar22 + (long)(int)uVar3 * 0x6d0;
  *(undefined4 *)(lVar15 + 0x5f0) = *puVar23;
  lVar21 = lVar15 + 0x640;
  puVar2 = (undefined4 *)(lVar15 + 0x5f0);
  *(undefined4 *)(lVar15 + 0x5f4) = puVar23[1];
  *(undefined8 *)(lVar15 + 0x5f8) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(lVar15 + 0x600) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(lVar15 + 0x608) = puVar23[6];
  *(undefined4 *)(lVar15 + 0x60c) = puVar23[7];
  *(undefined8 *)(lVar15 + 0x610) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(lVar15 + 0x618) = *(undefined8 *)(puVar23 + 10);
  uVar16 = *(undefined8 *)(puVar23 + 0xc);
  uVar6 = *(undefined8 *)(puVar23 + 0xe);
  uVar19 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(lVar15 + 0x637) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(lVar15 + 0x630) = uVar19;
  *(undefined8 *)(lVar15 + 0x628) = uVar6;
  *(undefined8 *)(lVar15 + 0x620) = uVar16;
  FUN_038fd1e0(lVar21);
  FUN_038fd2f0(lVar21,puVar23 + 0x14);
  uVar16 = *(undefined8 *)(puVar23 + 0x24);
  *(undefined4 *)(lVar15 + 0x688) = puVar23[0x26];
  *(undefined8 *)(lVar15 + 0x680) = uVar16;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = *puVar1 | 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_03a75a00(param_1,param_2,param_3,puVar13,0,&local_f8,0,1);
  uVar4 = uVar14 << 2 | 2;
  lVar12 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
  if (*(uint *)(lVar12 + 0x20) <= uVar4) {
    uVar4 = 0;
  }
  lVar12 = *(long *)(lVar12 + 0x28) + (ulong)uVar4 * 0x150;
  FUN_03907810(lVar12,param_2);
  FUN_03949e90(param_2,lVar12,puVar2,&local_e0,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
  lVar12 = lVar22 + (long)(int)uVar3 * 0x6d0;
  uVar4 = *(uint *)(lVar12 + 0x488);
  if (uVar4 != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = uVar4 - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
        goto LAB_03a79dc0;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar18 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar18);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a79dc0:
  uVar14 = uVar14 * 4;
  *puVar2 = *puVar13;
  *(undefined4 *)(lVar15 + 0x5f4) = puVar13[1];
  *(undefined8 *)(lVar15 + 0x5f8) = *(undefined8 *)(puVar13 + 2);
  *(undefined8 *)(lVar15 + 0x600) = *(undefined8 *)(puVar13 + 4);
  *(undefined4 *)(lVar15 + 0x608) = puVar13[6];
  *(undefined4 *)(lVar15 + 0x60c) = puVar13[7];
  *(undefined8 *)(lVar15 + 0x610) = *(undefined8 *)(puVar13 + 8);
  *(undefined8 *)(lVar15 + 0x618) = *(undefined8 *)(puVar13 + 10);
  uVar19 = *(undefined8 *)(puVar13 + 0x10);
  uVar16 = *(undefined8 *)(puVar13 + 0xc);
  uVar6 = *(undefined8 *)(puVar13 + 0xe);
  *(undefined8 *)(lVar15 + 0x637) = *(undefined8 *)((long)puVar13 + 0x47);
  *(undefined8 *)(lVar15 + 0x628) = uVar6;
  *(undefined8 *)(lVar15 + 0x630) = uVar19;
  *(undefined8 *)(lVar15 + 0x620) = uVar16;
  FUN_038fd1e0(lVar21);
  FUN_038fd2f0(lVar21,puVar13 + 0x14);
  uVar16 = *(undefined8 *)(puVar13 + 0x24);
  *(undefined4 *)(lVar15 + 0x688) = puVar13[0x26];
  *(undefined8 *)(lVar15 + 0x680) = uVar16;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = *puVar1 | 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  local_100 = 0;
  local_110 = 0;
  uStack_108 = 0;
  lVar22 = lVar22 + (long)(int)uVar3 * 0x6d0;
  if (*(uint *)(lVar22 + 0x18) <= param_4) {
    param_4 = 0;
  }
  FUN_03a75a00(param_1,param_2,param_3,
               *(undefined8 *)(*(long *)(lVar22 + 0x20) + (long)(int)param_4 * 8),0,&local_110,0,1);
  lVar22 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
  if (*(uint *)(lVar22 + 0x20) <= uVar14) {
    uVar14 = 0;
  }
  lVar22 = *(long *)(lVar22 + 0x28) + (ulong)uVar14 * 0x150;
  FUN_03907810(lVar22,param_2);
  FUN_03949e90(param_2,lVar22,puVar2,&local_e0,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
  uVar3 = *(uint *)(lVar12 + 0x488);
  if (uVar3 != 0xffffffff) {
    lVar22 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar22 + 0x5c8) >> 3 & 1) == 0) {
      uVar14 = uVar3 - *(ushort *)(lVar22 + 0x3da);
      if (*(uint *)(lVar22 + 0x368) <= uVar14) {
        uVar14 = 0;
      }
      if ((*(uint *)(*(long *)(lVar22 + 0x370) + (long)(int)uVar14 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        goto LAB_03a79fa4;
      }
    }
    if ((*(uint *)(lVar22 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar22 + 800) & 2) != 0) {
      uVar18 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar18);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a79fa4:
  FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar13);
  return;
}

