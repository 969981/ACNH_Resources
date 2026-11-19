
void FUN_03a9eeb0(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar8 = PTR_DAT_04bd0f08;
  puVar7 = PTR_DAT_04bd0ea8;
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x380);
  if ((uVar3 >> 2 & 1) != 0) {
    return;
  }
  uVar17 = param_3;
  if (*(uint *)(param_1 + 0x180) <= param_3) {
    uVar17 = 0;
  }
  lVar18 = *(long *)(param_1 + 0x188) + (long)(int)uVar17 * 0xd70;
  uVar17 = 2;
  if ((uVar3 & 0x20) != 0) {
    uVar17 = 3;
  }
  lVar14 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x458) + 8);
  lVar21 = *(long *)(lVar14 + 0x28);
  if (*(uint *)(lVar14 + 0x20) <= uVar17) {
    uVar17 = 0;
  }
  uVar19 = (ulong)uVar17;
  if ((uVar3 & 0x18) != 8) {
    *(uint *)(param_1 + 0x380) = uVar3 | 8;
    local_78 = 0x3f0000003f000000;
    uStack_70 = 0x3f0000003f000000;
    lVar14 = lVar18 + (long)*(int *)(lVar18 + 0xd60) * 0x2e8;
    FUN_01560750(lVar14 + 0x2a8,lVar14 + 0x3f0,*(undefined1 *)(lVar14 + 0x366),
                 *(undefined2 *)(lVar14 + 0x364));
    uVar3 = *(uint *)(lVar14 + 0x1c4);
    *(long *)(lVar14 + 0x3a8) = lVar14 + 0x2a8;
    *(undefined8 *)(lVar14 + 1000) = 0;
    uVar17 = *(uint *)(lVar14 + 0x1c0);
    *(float *)(lVar14 + 0x394) = (float)(int)uVar3;
    *(float *)(lVar14 + 0x390) = (float)(int)uVar17;
    *(float *)(lVar14 + 0x398) = (float)(int)(uVar17 & (int)uVar17 >> 0x1f);
    *(float *)(lVar14 + 0x3a0) = (float)(int)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
    *(float *)(lVar14 + 0x39c) = (float)(int)(uVar3 & (int)uVar3 >> 0x1f);
    *(float *)(lVar14 + 0x3a4) = (float)(int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    (**(code **)(*(long *)(lVar14 + 0x388) + 0x38))(lVar14 + 0x388,param_2);
    local_d4 = 0x3f80000000000000;
    local_e8 = 0x7f7fffff7f7fffff;
    local_e0 = 0xff7fffffff7fffff;
    local_f0 = puVar8 + 0x10;
    local_d8 = *(uint *)puVar7;
    if (local_d8 < 6) {
      if ((1 << (ulong)(local_d8 & 0x1f) & 0x39U) == 0) {
        fVar24 = *(float *)(lVar14 + 0x390);
        fVar23 = *(float *)(lVar14 + 0x394);
      }
      else {
        fVar23 = *(float *)(lVar14 + 0x390);
        fVar24 = *(float *)(lVar14 + 0x394);
      }
      fVar26 = fVar23;
      fVar6 = 0.0;
      if (fVar23 <= 0.0) {
        fVar26 = 0.0;
        fVar6 = fVar23;
      }
      fVar25 = fVar24;
      fVar23 = 0.0;
      if (fVar24 <= 0.0) {
        fVar25 = 0.0;
        fVar23 = fVar24;
      }
      local_e8 = CONCAT44(fVar23,fVar6);
      local_e0 = CONCAT44(fVar25,fVar26);
    }
    FUN_038e77e4(&local_f0,param_2,lVar14 + 0x388);
    uVar3 = *(uint *)(lVar14 + 0x300);
    if (uVar3 != 0xffffffff) {
      lVar14 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
        uVar17 = uVar3 - *(ushort *)(lVar14 + 0x3da);
        if (*(uint *)(lVar14 + 0x368) <= uVar17) {
          uVar17 = 0;
        }
        if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) == 0) {
          param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar3 & 0x3f);
          goto LAB_03a9f128;
        }
      }
      if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
        uVar13 = 0x112;
        uVar15 = 0x12;
      }
      else {
        uVar13 = 0x111;
        uVar15 = 0x11;
      }
      if ((*(uint *)(lVar14 + 800) & 2) != 0) {
        uVar15 = uVar13;
      }
      (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar15);
      param_2[0x20] = 0;
    }
LAB_03a9f128:
    if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0f98);
    }
    uVar10 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
    puVar2 = param_2;
    if ((uVar10 & 1) == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    (**(code **)PTR_DAT_04bcfd90)(puVar2[0x17],0,&local_78,0xf);
  }
  lVar14 = lVar21 + uVar19 * 0x150;
  lVar22 = lVar18 + (long)*(int *)(lVar18 + 0xd64) * 0x2e8;
  FUN_01560750(lVar22 + 0x2a8,lVar22 + 0x3f0,*(undefined1 *)(lVar22 + 0x366),
               *(undefined2 *)(lVar22 + 0x364));
  uVar3 = *(uint *)(lVar22 + 0x1c4);
  *(long *)(lVar22 + 0x3a8) = lVar22 + 0x2a8;
  *(undefined8 *)(lVar22 + 1000) = 0;
  uVar17 = *(uint *)(lVar22 + 0x1c0);
  *(float *)(lVar22 + 0x394) = (float)(int)uVar3;
  *(float *)(lVar22 + 0x390) = (float)(int)uVar17;
  *(float *)(lVar22 + 0x398) = (float)(int)(uVar17 & (int)uVar17 >> 0x1f);
  *(float *)(lVar22 + 0x3a0) = (float)(int)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
  *(float *)(lVar22 + 0x39c) = (float)(int)(uVar3 & (int)uVar3 >> 0x1f);
  *(float *)(lVar22 + 0x3a4) = (float)(int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  (**(code **)(*(long *)(lVar22 + 0x388) + 0x38))(lVar22 + 0x388,param_2);
  local_d4 = 0x3f80000000000000;
  local_e8 = 0x7f7fffff7f7fffff;
  local_e0 = 0xff7fffffff7fffff;
  local_f0 = puVar8 + 0x10;
  local_d8 = *(uint *)puVar7;
  if (local_d8 < 6) {
    if ((1 << (ulong)(local_d8 & 0x1f) & 0x39U) == 0) {
      fVar24 = *(float *)(lVar22 + 0x390);
      fVar23 = *(float *)(lVar22 + 0x394);
    }
    else {
      fVar23 = *(float *)(lVar22 + 0x390);
      fVar24 = *(float *)(lVar22 + 0x394);
    }
    fVar26 = fVar23;
    fVar6 = 0.0;
    if (fVar23 <= 0.0) {
      fVar26 = 0.0;
      fVar6 = fVar23;
    }
    fVar25 = fVar24;
    fVar23 = 0.0;
    if (fVar24 <= 0.0) {
      fVar25 = 0.0;
      fVar23 = fVar24;
    }
    local_e8 = CONCAT44(fVar23,fVar6);
    local_e0 = CONCAT44(fVar25,fVar26);
  }
  FUN_038e77e4(&local_f0,param_2,lVar22 + 0x388);
  uVar3 = *(uint *)(lVar22 + 0x300);
  if (uVar3 != 0xffffffff) {
    lVar22 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar22 + 0x5c8) >> 3 & 1) == 0) {
      uVar17 = uVar3 - *(ushort *)(lVar22 + 0x3da);
      if (*(uint *)(lVar22 + 0x368) <= uVar17) {
        uVar17 = 0;
      }
      if ((*(uint *)(*(long *)(lVar22 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) == 0) {
        param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar3 & 0x3f);
        goto LAB_03a9f33c;
      }
    }
    if ((*(uint *)(lVar22 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar15 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar15 = 0x11;
    }
    if ((*(uint *)(lVar22 + 800) & 2) != 0) {
      uVar15 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar15);
    param_2[0x20] = 0;
  }
LAB_03a9f33c:
  FUN_038e4cec(&local_f0);
  local_f0 = (undefined *)((ulong)local_f0 & 0xfffffffeffff0000);
  FUN_038e4d90(&local_f0,param_2);
  FUN_03907810(lVar14,param_2);
  FUN_03a9e2f0(param_1,param_2,param_3,lVar14);
  puVar1 = (uint *)(lVar18 + 0x1b4);
  *(undefined1 *)(lVar18 + 0x1a4) = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined1 *)(lVar18 + 0x1a5) = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined4 *)(lVar18 + 0xe0) = *param_5;
  *(undefined4 *)(lVar18 + 0xe4) = param_5[1];
  *(undefined8 *)(lVar18 + 0xe8) = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)(lVar18 + 0xf0) = *(undefined8 *)(param_5 + 4);
  *(undefined4 *)(lVar18 + 0xf8) = param_5[6];
  *(undefined4 *)(lVar18 + 0xfc) = param_5[7];
  *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(lVar18 + 0x108) = *(undefined8 *)(param_5 + 10);
  uVar12 = *(undefined8 *)(param_5 + 0xc);
  uVar11 = *(undefined8 *)(param_5 + 0xe);
  uVar16 = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(lVar18 + 0x127) = *(undefined8 *)((long)param_5 + 0x47);
  *(undefined8 *)(lVar18 + 0x118) = uVar11;
  *(undefined8 *)(lVar18 + 0x120) = uVar16;
  *(undefined8 *)(lVar18 + 0x110) = uVar12;
  FUN_038fd1e0(lVar18 + 0x130);
  FUN_038fd2f0(lVar18 + 0x130,param_5 + 0x14);
  uVar12 = *(undefined8 *)(param_5 + 0x24);
  *(undefined4 *)(lVar18 + 0x178) = param_5[0x26];
  *(undefined8 *)(lVar18 + 0x170) = uVar12;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar1 = (uint *)(lVar21 + uVar19 * 0x150 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar22 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar22 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar20 = (long *)(lVar21 + uVar19 * 0x150 + 0x68);
  FUN_0390d290((undefined4 *)(lVar18 + 0xe0),param_2,*plVar20,0xffffffff,0);
  iVar9 = *(int *)(lVar18 + 0xd60);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0390d290(lVar18 + (long)iVar9 * 0x2e8 + 0x1c8,param_2,
               *plVar20 + (ulong)(1 < *(uint *)(lVar21 + uVar19 * 0x150 + 0x60)) * 0x18,0xffffffff,0
              );
  uVar12 = param_2[0x17];
  lVar14 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar12,0x10,lVar14 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar12,0x10,lVar14 + 0x1068);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar9 = *(int *)(lVar14 + 0x1010);
  if (iVar9 != 0) {
    lVar14 = *(long *)(lVar14 + 0x1018);
    uVar19 = 0;
    uVar10 = 0;
    do {
      lVar21 = *(long *)(lVar14 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3));
      if (lVar21 != 0) {
        uVar11 = (**(code **)puVar7)(lVar21 + 8);
        (**(code **)puVar8)(uVar12,uVar19 & 0xffffffff,uVar11,*(undefined4 *)(lVar21 + 0x118));
      }
      uVar19 = uVar10 + 1;
      uVar10 = uVar19 & 0xffffffff;
    } while (iVar9 != (int)uVar19);
  }
  lVar14 = *(long *)PTR_DAT_04bbd7e8;
  iVar9 = *(int *)(lVar14 + 0x480);
  if (iVar9 != 0) {
    uVar15 = *(undefined4 *)(lVar14 + 0x464);
    uVar11 = param_2[0x17];
    uVar12 = (**(code **)puVar7)(lVar14 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar11,uVar15,*(undefined4 *)(lVar14 + 0x460),iVar9,uVar12);
  }
  uVar3 = *(uint *)(lVar18 + (long)*(int *)(lVar18 + 0xd64) * 0x2e8 + 0x300);
  if (uVar3 != 0xffffffff) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
      uVar17 = uVar3 - *(ushort *)(lVar14 + 0x3da);
      if (*(uint *)(lVar14 + 0x368) <= uVar17) {
        uVar17 = 0;
      }
      if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) == 0) {
        param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar3 & 0x3f);
        goto LAB_03a9f788;
      }
    }
    if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar15 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar15 = 0x11;
    }
    if ((*(uint *)(lVar14 + 800) & 2) != 0) {
      uVar15 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar15);
    param_2[0x20] = 0;
  }
LAB_03a9f788:
  lVar18 = lVar18 + (long)*(int *)(lVar18 + 0xd64) * 0x2e8;
  *(undefined4 *)(lVar18 + 0x1c8) = *(undefined4 *)(lVar18 + 0x3f0);
  *(undefined4 *)(lVar18 + 0x1cc) = *(undefined4 *)(lVar18 + 0x3f4);
  *(undefined8 *)(lVar18 + 0x1d0) = *(undefined8 *)(lVar18 + 0x3f8);
  *(undefined8 *)(lVar18 + 0x1d8) = *(undefined8 *)(lVar18 + 0x400);
  *(undefined4 *)(lVar18 + 0x1e0) = *(undefined4 *)(lVar18 + 0x408);
  *(undefined8 *)(lVar18 + 0x1e8) = *(undefined8 *)(lVar18 + 0x410);
  *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(lVar18 + 0x418);
  *(undefined4 *)(lVar18 + 0x1e4) = *(undefined4 *)(lVar18 + 0x40c);
  *(undefined8 *)(lVar18 + 0x20f) = *(undefined8 *)(lVar18 + 0x437);
  *(undefined8 *)(lVar18 + 0x208) = *(undefined8 *)(lVar18 + 0x430);
  *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(lVar18 + 0x420);
  *(undefined8 *)(lVar18 + 0x200) = *(undefined8 *)(lVar18 + 0x428);
  FUN_038fd1e0(lVar18 + 0x218);
  FUN_038fd2f0(lVar18 + 0x218,lVar18 + 0x440);
  *(undefined8 *)(lVar18 + 600) = *(undefined8 *)(lVar18 + 0x480);
  *(undefined4 *)(lVar18 + 0x260) = *(undefined4 *)(lVar18 + 0x488);
  puVar1 = (uint *)(lVar18 + 0x29c);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}

