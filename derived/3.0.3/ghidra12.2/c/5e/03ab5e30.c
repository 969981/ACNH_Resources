
void FUN_03ab5e30(long param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_198 [138];
  short local_10e;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_ec;
  undefined4 local_dc;
  uint local_d8;
  
  lVar18 = *(long *)PTR_DAT_04bbd510;
  if (*(int *)(param_1 + 0xd0) == -1) {
    lVar15 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar15 + 0x5c8) >> 3 & 1) == 0) {
      uVar3 = 0;
      if (~(uint)*(ushort *)(lVar15 + 0x3da) < *(uint *)(lVar15 + 0x368)) {
        uVar3 = ~(uint)*(ushort *)(lVar15 + 0x3da);
      }
      if ((*(uint *)(*(long *)(lVar15 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        goto LAB_03ab5ef8;
      }
    }
    if ((*(uint *)(lVar15 + 0x5c8) >> 5 & 1) == 0) {
      uVar14 = 0x112;
      uVar16 = 0x12;
    }
    else {
      uVar14 = 0x111;
      uVar16 = 0x11;
    }
    if ((*(uint *)(lVar15 + 800) & 2) != 0) {
      uVar16 = uVar14;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar16);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03ab5ef8:
  FUN_0390a734(param_1 + 0x698,1,*(undefined4 *)(param_1 + 0x8dc),*(undefined4 *)(param_1 + 0x8a8),
               *(undefined4 *)(param_1 + 0x8a8),1,1,0,0,1);
  bVar13 = false;
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_1 + 0x738);
  local_1e0 = *(char **)(param_1 + 0x740);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x748);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x73c);
  *(char **)(param_1 + 0x6a0) = local_1e0;
  *(undefined8 *)(param_1 + 0x6a8) = uStack_1d8;
  if ((*(byte *)(param_1 + 0x6e6) >> 1 & 1) != 0) {
    bVar13 = 0x11 < *(ushort *)(param_1 + 0x730) && *(ushort *)(param_1 + 0x730) - 0x59 < 0xffffffd6
    ;
  }
  lVar15 = param_1 + 0x6e8;
  local_1e8 = (undefined *)
              CONCAT44(*(undefined4 *)(param_1 + 0x73c),*(undefined4 *)(param_1 + 0x738));
  FUN_038fd3e0(lVar15,&local_1e8,param_1 + 0x6c8,0,*(undefined8 *)(param_1 + 0x728),bVar13,1);
  FUN_01560750(param_1 + 0x2b0,param_1 + 0x698,*(undefined1 *)(param_1 + 0x36e),
               *(undefined2 *)(param_1 + 0x36c));
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x698);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x6c0);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x69c);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x6a0);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x6b4);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x6b8);
  *(undefined8 *)(param_1 + 0x3d7) = *(undefined8 *)(param_1 + 0x6df);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x6d8);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x6c8);
  FUN_038fd1e0(param_1 + 0x3e0);
  FUN_038fd2f0(param_1 + 0x3e0,lVar15);
  puVar1 = (uint *)(param_1 + 0x464);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x728);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x730);
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_038e4cec(&local_dc);
  local_dc = (uint)local_dc._2_2_ << 0x10;
  local_d8 = local_d8 & 0xfffffffe;
  FUN_038e4d90(&local_dc,param_2);
  (**(code **)(*(long *)(param_1 + 0x248) + 0x38))(param_1 + 0x248,param_2);
  local_f8 = 0xff7fffffff7fffff;
  local_108 = PTR_DAT_04bd0f08 + 0x10;
  local_100 = 0x7f7fffff7f7fffff;
  local_f0 = *(uint *)PTR_DAT_04bd0ea8;
  local_ec = 0x3f80000000000000;
  if (local_f0 < 6) {
    if ((1 << (ulong)(local_f0 & 0x1f) & 0x39U) == 0) {
      fVar25 = *(float *)(param_1 + 0x254);
      fVar26 = *(float *)(param_1 + 0x250);
    }
    else {
      fVar25 = *(float *)(param_1 + 0x250);
      fVar26 = *(float *)(param_1 + 0x254);
    }
    fVar28 = fVar25;
    fVar9 = 0.0;
    if (fVar25 <= 0.0) {
      fVar28 = 0.0;
      fVar9 = fVar25;
    }
    fVar27 = fVar26;
    fVar25 = 0.0;
    if (fVar26 <= 0.0) {
      fVar27 = 0.0;
      fVar25 = fVar26;
    }
    local_100 = CONCAT44(fVar25,fVar9);
    local_f8 = CONCAT44(fVar27,fVar28);
  }
  FUN_038e77e4(&local_108,param_2,param_1 + 0x248);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x67) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x330);
  }
  FUN_03907810(lVar22,param_2);
  FUN_0390d120(&local_1e8,*(undefined8 *)(param_1 + 0x238));
  puVar2 = (uint *)(lVar22 + 0x14);
  do {
    uVar3 = *puVar2;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar13) {
      *puVar2 = uVar3 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar22);
    }
  }
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar13) {
      *puVar2 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_0390d290(&local_1e8,param_2,*(undefined8 *)(lVar22 + 0x68),0xffffffff,0);
  local_1f8 = *(float *)(param_1 + 0x8d0);
  fStack_1f4 = 1.0 - local_1f8 / *(float *)(param_1 + 0x8d4);
  fStack_1ec = 1.0 / (*(float *)(param_1 + 0x8d4) - local_1f8);
  do {
    uVar3 = *puVar2;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar13) {
      *puVar2 = uVar3 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_1f0 = local_1f8;
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar22);
    }
  }
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar13) {
      *puVar2 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (**(int **)(lVar22 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar22 + 0x38),
               0x10,&local_1f8);
  }
  uVar23 = *(undefined8 *)(param_2 + 0xb8);
  lVar22 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar23,0x10,lVar22 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar23,0x10,lVar22 + 0xe88);
  puVar11 = PTR_DAT_04bcf1e8;
  puVar10 = PTR_DAT_04bbd560;
  iVar4 = *(int *)(lVar22 + 0xe30);
  if (iVar4 != 0) {
    lVar22 = *(long *)(lVar22 + 0xe38);
    uVar24 = 0;
    uVar21 = 0;
    do {
      lVar20 = *(long *)(lVar22 + (-(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3));
      if (lVar20 != 0) {
        uVar12 = (**(code **)puVar10)(lVar20 + 8);
        (**(code **)puVar11)(uVar23,uVar24 & 0xffffffff,uVar12,*(undefined4 *)(lVar20 + 0x118));
      }
      uVar24 = uVar21 + 1;
      uVar21 = uVar24 & 0xffffffff;
    } while (iVar4 != (int)uVar24);
  }
  lVar22 = *(long *)PTR_DAT_04bbd7e8;
  iVar4 = *(int *)(lVar22 + 0x1f8);
  if (iVar4 != 0) {
    uVar16 = *(undefined4 *)(lVar22 + 0x1dc);
    uVar12 = *(undefined8 *)(param_2 + 0xb8);
    uVar23 = (**(code **)puVar10)(lVar22 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar12,uVar16,*(undefined4 *)(lVar22 + 0x1d8),iVar4,uVar23);
  }
  puVar10 = PTR_DAT_04bc1010;
  uVar3 = *(uint *)(param_1 + 0x308);
  if (uVar3 != 0xffffffff) {
    lVar22 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar22 + 0x5c8) >> 3 & 1) == 0) {
      uVar8 = uVar3 - *(ushort *)(lVar22 + 0x3da);
      if (*(uint *)(lVar22 + 0x368) <= uVar8) {
        uVar8 = 0;
      }
      if ((*(uint *)(*(long *)(lVar22 + 0x370) + (long)(int)uVar8 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        goto LAB_03ab649c;
      }
    }
    if ((*(uint *)(lVar22 + 0x5c8) >> 5 & 1) == 0) {
      uVar14 = 0x112;
      uVar16 = 0x12;
    }
    else {
      uVar14 = 0x111;
      uVar16 = 0x11;
    }
    if ((*(uint *)(lVar22 + 800) & 2) != 0) {
      uVar16 = uVar14;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar16);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03ab649c:
  if (local_10e != -1) {
    lVar22 = *(long *)puVar10;
    nn::os::LockMutex((MutexType *)(lVar22 + 0x580));
    uVar3 = (int)local_10e - (uint)*(ushort *)(lVar22 + 0x5c0);
    if (*(uint *)(lVar22 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar20 = *(long *)(lVar22 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar7 = *(short *)(lVar20 + 0x76) + -1;
    *(short *)(lVar20 + 0x76) = sVar7;
    if (sVar7 == 0) {
      *(short *)(lVar22 + 0x5c4) = *(short *)(lVar22 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar22 + 0x580));
    local_10e = -1;
  }
  FUN_038fd0e0(auStack_198);
  FUN_039499cc(lVar18,*(undefined8 *)(param_1 + 0x238));
  iVar4 = *(int *)(param_1 + 0x8dc);
  *(undefined8 *)(param_1 + 0x238) = 0;
  if (iVar4 == 1) {
    uVar23 = 1;
  }
  else if (iVar4 == 0x15) {
    uVar23 = 5;
  }
  else if (iVar4 == 0x19) {
    uVar23 = 9;
  }
  else {
    uVar23 = 0x14;
  }
  uVar16 = *(undefined4 *)(param_1 + 0x8a8);
  local_1e8 = PTR_DAT_04bb2020 + 0x10;
  uVar5 = *(undefined1 *)(param_1 + 0xb38);
  local_1e0 = "static_shadow_variance";
  lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar22 == 0) {
    local_dc = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_dc = (int)lVar22 + -1;
  }
  uVar23 = FUN_03948e10(lVar18,param_2,lVar18 + (long)local_dc * 0x290 + 0x10,&local_1e8,uVar23,1,
                        uVar16,uVar16,1,0,1,0,1,uVar5,0,0);
  *(undefined8 *)(param_1 + 0x240) = uVar23;
  FUN_01560750(param_1 + 0x4d8,uVar23,*(undefined1 *)(param_1 + 0x596),
               *(undefined2 *)(param_1 + 0x594));
  puVar19 = *(undefined4 **)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x5b8) = *puVar19;
  *(undefined4 *)(param_1 + 0x5bc) = puVar19[1];
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(puVar19 + 2);
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(puVar19 + 4);
  *(undefined4 *)(param_1 + 0x5d0) = puVar19[6];
  *(undefined4 *)(param_1 + 0x5d4) = puVar19[7];
  *(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)(puVar19 + 8);
  *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)(puVar19 + 10);
  uVar23 = *(undefined8 *)(puVar19 + 0xc);
  uVar12 = *(undefined8 *)(puVar19 + 0xe);
  uVar17 = *(undefined8 *)(puVar19 + 0x10);
  *(undefined8 *)(param_1 + 0x5ff) = *(undefined8 *)((long)puVar19 + 0x47);
  *(undefined8 *)(param_1 + 0x5f8) = uVar17;
  *(undefined8 *)(param_1 + 0x5f0) = uVar12;
  *(undefined8 *)(param_1 + 0x5e8) = uVar23;
  FUN_038fd1e0(param_1 + 0x608);
  FUN_038fd2f0(param_1 + 0x608,puVar19 + 0x14);
  uVar16 = puVar19[0x26];
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(puVar19 + 0x24);
  puVar2 = (uint *)(param_1 + 0x68c);
  *(undefined4 *)(param_1 + 0x650) = uVar16;
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar13) {
      *puVar2 = *puVar2 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_03ab58d0(param_1,param_2,0);
  FUN_03ab58d0(param_1,param_2,1);
  *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) & 0xfd;
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_1 + 0x460) = 0x1000302;
  *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) | 2;
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined2 *)(param_1 + 0x457) = 0x505;
  *(undefined1 *)(param_1 + 0x459) = 7;
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined1 **)(param_1 + 0x438) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x440) = &DAT_3f8000003f800000;
  do {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 & 0xffffffdf | 0x20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_1 + 0x6e2) = 0x1000302;
  if ((*(byte *)(param_1 + 0x6e6) >> 1 & 1) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = 0x11 < *(ushort *)(param_1 + 0x730) && *(ushort *)(param_1 + 0x730) - 0x59 < 0xffffffd6
    ;
  }
  local_1e8 = *(undefined **)(param_1 + 0x698);
  local_1e0 = *(char **)(param_1 + 0x6a0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x6a8);
  FUN_038fd3e0(lVar15,&local_1e8,param_1 + 0x6c8,0,*(undefined8 *)(param_1 + 0x728),bVar13,0);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0x8e0);
  FUN_039499cc(lVar18,*(undefined8 *)(param_1 + 0x240));
  *(undefined8 *)(param_1 + 0x240) = 0;
  return;
}

