
void FUN_03a9f890(long param_1,undefined8 *param_2,uint param_3,long param_4,undefined4 *param_5)

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
  long lVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar10 = PTR_DAT_04bd0f08;
  puVar9 = PTR_DAT_04bd0ea8;
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x380);
  if ((uVar5 >> 2 & 1) == 0) {
    return;
  }
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x180) <= param_3) {
    uVar2 = 0;
  }
  puVar20 = (undefined4 *)(*(long *)(param_1 + 0x188) + (long)(int)uVar2 * 0xd70);
  lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x458) + 8) +
                    0x18);
  if ((uVar5 & 0x18) != 8) {
    *(uint *)(param_1 + 0x380) = uVar5 | 8;
    local_70 = 0x3f0000003f000000;
    uStack_68 = 0x3f0000003f000000;
    iVar11 = puVar20[0x358];
    FUN_01560750(puVar20 + (long)iVar11 * 0xba + 0xaa,puVar20 + (long)iVar11 * 0xba + 0xfc,
                 *(undefined1 *)((long)puVar20 + (long)iVar11 * 0x2e8 + 0x366),
                 *(undefined2 *)(puVar20 + (long)iVar11 * 0xba + 0xd9));
    uVar5 = puVar20[(long)iVar11 * 0xba + 0x71];
    *(undefined4 **)(puVar20 + (long)iVar11 * 0xba + 0xea) = puVar20 + (long)iVar11 * 0xba + 0xaa;
    *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0xfa) = 0;
    uVar2 = puVar20[(long)iVar11 * 0xba + 0x70];
    puVar20[(long)iVar11 * 0xba + 0xe5] = (float)(int)uVar5;
    puVar20[(long)iVar11 * 0xba + 0xe4] = (float)(int)uVar2;
    puVar20[(long)iVar11 * 0xba + 0xe6] = (float)(int)(uVar2 & (int)uVar2 >> 0x1f);
    puVar20[(long)iVar11 * 0xba + 0xe8] = (float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    lVar14 = *(long *)(puVar20 + (long)iVar11 * 0xba + 0xe2);
    puVar20[(long)iVar11 * 0xba + 0xe7] = (float)(int)(uVar5 & (int)uVar5 >> 0x1f);
    puVar20[(long)iVar11 * 0xba + 0xe9] = (float)(int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
    (**(code **)(lVar14 + 0x38))(puVar20 + (long)iVar11 * 0xba + 0xe2,param_2);
    local_cc = 0x3f80000000000000;
    local_e0 = 0x7f7fffff7f7fffff;
    local_d8 = 0xff7fffffff7fffff;
    local_e8 = puVar10 + 0x10;
    local_d0 = *(uint *)puVar9;
    if (local_d0 < 6) {
      if ((1 << (ulong)(local_d0 & 0x1f) & 0x39U) == 0) {
        fVar24 = (float)puVar20[(long)iVar11 * 0xba + 0xe4];
        fVar23 = (float)puVar20[(long)iVar11 * 0xba + 0xe5];
      }
      else {
        fVar23 = (float)puVar20[(long)iVar11 * 0xba + 0xe4];
        fVar24 = (float)puVar20[(long)iVar11 * 0xba + 0xe5];
      }
      fVar26 = fVar23;
      fVar8 = 0.0;
      if (fVar23 <= 0.0) {
        fVar26 = 0.0;
        fVar8 = fVar23;
      }
      fVar25 = fVar24;
      fVar23 = 0.0;
      if (fVar24 <= 0.0) {
        fVar25 = 0.0;
        fVar23 = fVar24;
      }
      local_e0 = CONCAT44(fVar23,fVar8);
      local_d8 = CONCAT44(fVar25,fVar26);
    }
    FUN_038e77e4(&local_e8,param_2,puVar20 + (long)iVar11 * 0xba + 0xe2);
    uVar5 = puVar20[(long)iVar11 * 0xba + 0xc0];
    if (uVar5 != 0xffffffff) {
      lVar14 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
        uVar2 = uVar5 - *(ushort *)(lVar14 + 0x3da);
        if (*(uint *)(lVar14 + 0x368) <= uVar2) {
          uVar2 = 0;
        }
        if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
          param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar5 & 0x3f);
          goto LAB_03a9fae8;
        }
      }
      if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
        uVar15 = 0x112;
        uVar17 = 0x12;
      }
      else {
        uVar15 = 0x111;
        uVar17 = 0x11;
      }
      if ((*(uint *)(lVar14 + 800) & 2) != 0) {
        uVar17 = uVar15;
      }
      (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar17);
      param_2[0x20] = 0;
    }
LAB_03a9fae8:
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
  }
  iVar11 = puVar20[0x359];
  FUN_01560750(puVar20 + (long)iVar11 * 0xba + 0xaa,puVar20 + (long)iVar11 * 0xba + 0xfc,
               *(undefined1 *)((long)puVar20 + (long)iVar11 * 0x2e8 + 0x366),
               *(undefined2 *)(puVar20 + (long)iVar11 * 0xba + 0xd9));
  uVar5 = puVar20[(long)iVar11 * 0xba + 0x71];
  *(undefined4 **)(puVar20 + (long)iVar11 * 0xba + 0xea) = puVar20 + (long)iVar11 * 0xba + 0xaa;
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0xfa) = 0;
  uVar2 = puVar20[(long)iVar11 * 0xba + 0x70];
  puVar20[(long)iVar11 * 0xba + 0xe5] = (float)(int)uVar5;
  puVar20[(long)iVar11 * 0xba + 0xe4] = (float)(int)uVar2;
  puVar20[(long)iVar11 * 0xba + 0xe6] = (float)(int)(uVar2 & (int)uVar2 >> 0x1f);
  puVar20[(long)iVar11 * 0xba + 0xe8] = (float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  lVar14 = *(long *)(puVar20 + (long)iVar11 * 0xba + 0xe2);
  puVar20[(long)iVar11 * 0xba + 0xe7] = (float)(int)(uVar5 & (int)uVar5 >> 0x1f);
  puVar20[(long)iVar11 * 0xba + 0xe9] = (float)(int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  (**(code **)(lVar14 + 0x38))(puVar20 + (long)iVar11 * 0xba + 0xe2,param_2);
  local_cc = 0x3f80000000000000;
  local_e0 = 0x7f7fffff7f7fffff;
  local_d8 = 0xff7fffffff7fffff;
  local_e8 = puVar10 + 0x10;
  local_d0 = *(uint *)puVar9;
  if (local_d0 < 6) {
    if ((1 << (ulong)(local_d0 & 0x1f) & 0x39U) == 0) {
      fVar24 = (float)puVar20[(long)iVar11 * 0xba + 0xe4];
      fVar23 = (float)puVar20[(long)iVar11 * 0xba + 0xe5];
    }
    else {
      fVar23 = (float)puVar20[(long)iVar11 * 0xba + 0xe4];
      fVar24 = (float)puVar20[(long)iVar11 * 0xba + 0xe5];
    }
    fVar26 = fVar23;
    fVar8 = 0.0;
    if (fVar23 <= 0.0) {
      fVar26 = 0.0;
      fVar8 = fVar23;
    }
    fVar25 = fVar24;
    fVar23 = 0.0;
    if (fVar24 <= 0.0) {
      fVar25 = 0.0;
      fVar23 = fVar24;
    }
    local_e0 = CONCAT44(fVar23,fVar8);
    local_d8 = CONCAT44(fVar25,fVar26);
  }
  FUN_038e77e4(&local_e8,param_2,puVar20 + (long)iVar11 * 0xba + 0xe2);
  uVar5 = puVar20[(long)iVar11 * 0xba + 0xc0];
  if (uVar5 != 0xffffffff) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar5 - *(ushort *)(lVar14 + 0x3da);
      if (*(uint *)(lVar14 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
        param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar5 & 0x3f);
        goto LAB_03a9fce8;
      }
    }
    if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar17 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar17 = 0x11;
    }
    if ((*(uint *)(lVar14 + 800) & 2) != 0) {
      uVar17 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar17);
    param_2[0x20] = 0;
  }
LAB_03a9fce8:
  FUN_038e4cec(&local_e8);
  local_e8 = (undefined *)((ulong)local_e8 & 0xfffffffeffff0000);
  FUN_038e4d90(&local_e8,param_2);
  FUN_03907810(lVar16,param_2);
  FUN_03a9e2f0(param_1,param_2,param_3,lVar16);
  puVar4 = (undefined4 *)(*(long *)(param_4 + 0x20) + 8);
  if (param_5 != (undefined4 *)0x0) {
    puVar4 = param_5;
  }
  *puVar20 = *puVar4;
  puVar20[1] = puVar4[1];
  *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar4 + 2);
  *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar4 + 4);
  puVar20[6] = puVar4[6];
  puVar20[7] = puVar4[7];
  *(undefined8 *)(puVar20 + 8) = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar20 + 10) = *(undefined8 *)(puVar4 + 10);
  uVar21 = *(undefined8 *)(puVar4 + 0xc);
  uVar13 = *(undefined8 *)(puVar4 + 0xe);
  uVar18 = *(undefined8 *)(puVar4 + 0x10);
  *(undefined8 *)((long)puVar20 + 0x47) = *(undefined8 *)((long)puVar4 + 0x47);
  *(undefined8 *)(puVar20 + 0xe) = uVar13;
  *(undefined8 *)(puVar20 + 0x10) = uVar18;
  *(undefined8 *)(puVar20 + 0xc) = uVar21;
  FUN_038fd1e0(puVar20 + 0x14);
  FUN_038fd2f0(puVar20 + 0x14,puVar4 + 0x14);
  uVar17 = puVar4[0x26];
  *(undefined8 *)(puVar20 + 0x24) = *(undefined8 *)(puVar4 + 0x24);
  puVar1 = puVar20 + 0x35;
  puVar20[0x26] = uVar17;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  puVar1 = (uint *)(lVar16 + 0x14);
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
      FUN_03907b80(lVar16);
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
  FUN_0390d290(puVar20,param_2,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
  iVar11 = puVar20[0x358];
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
      FUN_03907b80(lVar16);
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
  FUN_0390d290(puVar20 + (long)iVar11 * 0xba + 0x72,param_2,
               *(long *)(lVar16 + 0x68) + (ulong)(1 < *(uint *)(lVar16 + 0x60)) * 0x18,0xffffffff,0)
  ;
  uVar21 = param_2[0x17];
  lVar16 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar21,0x10,lVar16 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar21,0x10,lVar16 + 0x1068);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar11 = *(int *)(lVar16 + 0x1010);
  if (iVar11 != 0) {
    lVar16 = *(long *)(lVar16 + 0x1018);
    uVar12 = 0;
    uVar22 = 0;
    do {
      lVar14 = *(long *)(lVar16 + (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
      if (lVar14 != 0) {
        uVar13 = (**(code **)puVar9)(lVar14 + 8);
        (**(code **)puVar10)(uVar21,uVar12 & 0xffffffff,uVar13,*(undefined4 *)(lVar14 + 0x118));
      }
      uVar12 = uVar22 + 1;
      uVar22 = uVar12 & 0xffffffff;
    } while (iVar11 != (int)uVar12);
  }
  lVar16 = *(long *)PTR_DAT_04bbd7e8;
  iVar11 = *(int *)(lVar16 + 0x480);
  if (iVar11 != 0) {
    uVar17 = *(undefined4 *)(lVar16 + 0x464);
    uVar13 = param_2[0x17];
    uVar21 = (**(code **)puVar9)(lVar16 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar13,uVar17,*(undefined4 *)(lVar16 + 0x460),iVar11,uVar21);
  }
  uVar5 = puVar20[(long)(int)puVar20[0x359] * 0xba + 0xc0];
  if (uVar5 != 0xffffffff) {
    lVar16 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar5 - *(ushort *)(lVar16 + 0x3da);
      if (*(uint *)(lVar16 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
        param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar5 & 0x3f);
        goto LAB_03aa00e8;
      }
    }
    if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar17 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar17 = 0x11;
    }
    if ((*(uint *)(lVar16 + 800) & 2) != 0) {
      uVar17 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar17);
    param_2[0x20] = 0;
  }
LAB_03aa00e8:
  iVar11 = puVar20[0x359];
  uVar21 = *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x100);
  uVar13 = *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x106);
  uVar18 = *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x108);
  uVar19 = *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x10c);
  puVar20[(long)iVar11 * 0xba + 0x72] = puVar20[(long)iVar11 * 0xba + 0xfc];
  puVar20[(long)iVar11 * 0xba + 0x73] = puVar20[(long)iVar11 * 0xba + 0xfd];
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x74) =
       *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0xfe);
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x76) = uVar21;
  uVar21 = *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x104);
  puVar20[(long)iVar11 * 0xba + 0x78] = puVar20[(long)iVar11 * 0xba + 0x102];
  uVar17 = puVar20[(long)iVar11 * 0xba + 0x103];
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x7a) = uVar21;
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x7c) = uVar13;
  puVar20[(long)iVar11 * 0xba + 0x79] = uVar17;
  *(undefined8 *)((long)puVar20 + (long)iVar11 * 0x2e8 + 0x20f) =
       *(undefined8 *)((long)puVar20 + (long)iVar11 * 0x2e8 + 0x437);
  uVar21 = *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x10a);
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x82) = uVar19;
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x7e) = uVar18;
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x80) = uVar21;
  FUN_038fd1e0(puVar20 + (long)iVar11 * 0xba + 0x86);
  FUN_038fd2f0(puVar20 + (long)iVar11 * 0xba + 0x86,puVar20 + (long)iVar11 * 0xba + 0x110);
  *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x96) =
       *(undefined8 *)(puVar20 + (long)iVar11 * 0xba + 0x120);
  puVar20[(long)iVar11 * 0xba + 0x98] = puVar20[(long)iVar11 * 0xba + 0x122];
  puVar1 = puVar20 + (long)iVar11 * 0xba + 0xa7;
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

