
void FUN_03abfd50(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                 long param_5)

{
  uint *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_5c;
  
  uVar6 = *(ushort *)(param_4 + 0x38);
  local_78 = PTR_DAT_04bb2020 + 0x10;
  lVar18 = *(long *)PTR_DAT_04bbd510;
  local_70 = "shadow_mask_temp";
  uVar5 = *(ushort *)(param_4 + 0x3a);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar2 = uVar5;
  if (*(short *)(param_4 + 0x42) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar12 == 0) {
    iVar11 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar11 = (int)lVar12 + -1;
  }
  local_88 = CONCAT44(local_88._4_4_,iVar11);
  uVar13 = FUN_03948e10(lVar18,param_2,lVar18 + (long)iVar11 * 0x290 + 0x10,&local_78,0x1d,1,uVar6,
                        uVar2,1,0,1,0,1,0,0,0);
  *(undefined8 *)(param_5 + 0x3a0) = uVar13;
  *(long *)(param_5 + 0x358) = param_5 + 600;
  FUN_01560750(param_5 + 600,uVar13,*(undefined1 *)(param_5 + 0x316),
               *(undefined2 *)(param_5 + 0x314));
  puVar1 = (uint *)(param_5 + 0x16c);
  *(undefined1 *)(param_5 + 0x15c) = 0;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *(undefined1 *)(param_5 + 0x15d) = 0;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *(undefined4 *)(param_5 + 0x3b0) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(param_5 + 0x3b4) = *(undefined4 *)(param_4 + 0xc);
  *(undefined8 *)(param_5 + 0x3b8) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_5 + 0x3c0) = *(undefined8 *)(param_4 + 0x18);
  *(undefined4 *)(param_5 + 0x3c8) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(param_5 + 0x3cc) = *(undefined4 *)(param_4 + 0x24);
  *(undefined8 *)(param_5 + 0x3d0) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(param_5 + 0x3d8) = *(undefined8 *)(param_4 + 0x30);
  uVar13 = *(undefined8 *)(param_4 + 0x38);
  uVar3 = *(undefined8 *)(param_4 + 0x40);
  uVar17 = *(undefined8 *)(param_4 + 0x48);
  *(undefined8 *)(param_5 + 0x3f7) = *(undefined8 *)(param_4 + 0x4f);
  *(undefined8 *)(param_5 + 0x3f0) = uVar17;
  *(undefined8 *)(param_5 + 1000) = uVar3;
  *(undefined8 *)(param_5 + 0x3e0) = uVar13;
  FUN_038fd1e0(param_5 + 0x400);
  FUN_038fd2f0(param_5 + 0x400,param_4 + 0x58);
  uVar13 = *(undefined8 *)(param_4 + 0x98);
  *(undefined4 *)(param_5 + 0x448) = *(undefined4 *)(param_4 + 0xa0);
  *(undefined8 *)(param_5 + 0x440) = uVar13;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass((undefined4 *)(param_5 + 0x460),0x10);
    if (bVar8) {
      *(undefined4 *)(param_5 + 0x460) = 0x7fffffff;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *(undefined2 *)(param_5 + 0x464) = *(undefined2 *)(param_4 + 0xbc);
  *(undefined1 *)(param_5 + 0x466) = *(undefined1 *)(param_4 + 0xbe);
  *(undefined1 *)(param_5 + 0x467) = *(undefined1 *)(param_4 + 0xbf);
  uVar13 = *(undefined8 *)(param_4 + 0xa8);
  *(undefined8 *)(param_5 + 0x458) = *(undefined8 *)(param_4 + 0xb0);
  *(undefined8 *)(param_5 + 0x450) = uVar13;
  *(undefined8 *)(param_5 + 0x468) = *(undefined8 *)(param_4 + 0xc0);
  *(undefined4 *)(param_5 + 0x470) = *(undefined4 *)(param_4 + 200);
  *(undefined4 *)(param_5 + 0x474) = *(undefined4 *)(param_4 + 0xcc);
  *(undefined8 *)(param_5 + 0x478) = *(undefined8 *)(param_4 + 0xd0);
  uVar13 = *(undefined8 *)(param_4 + 0xd8);
  *(long *)(param_5 + 0x398) = param_5 + 0x3a8;
  *(float *)(param_5 + 0x340) = (float)uVar6;
  *(float *)(param_5 + 0x344) = (float)uVar2;
  *(undefined8 *)(param_5 + 0x348) = 0;
  *(float *)(param_5 + 0x350) = (float)uVar6;
  *(float *)(param_5 + 0x354) = (float)uVar2;
  *(undefined8 *)(param_5 + 0x480) = uVar13;
  (**(code **)(*(long *)(param_5 + 0x338) + 0x38))(param_5 + 0x338,param_2);
  local_68 = 0xff7fffffff7fffff;
  local_78 = PTR_DAT_04bd0f08 + 0x10;
  local_70 = (char *)0x7f7fffff7f7fffff;
  local_60 = *(uint *)PTR_DAT_04bd0ea8;
  local_5c = 0x3f80000000000000;
  if (local_60 < 6) {
    if ((1 << (ulong)(local_60 & 0x1f) & 0x39U) == 0) {
      fVar19 = *(float *)(param_5 + 0x344);
      fVar20 = *(float *)(param_5 + 0x340);
    }
    else {
      fVar19 = *(float *)(param_5 + 0x340);
      fVar20 = *(float *)(param_5 + 0x344);
    }
    fVar22 = fVar19;
    fVar10 = 0.0;
    if (fVar19 <= 0.0) {
      fVar22 = 0.0;
      fVar10 = fVar19;
    }
    fVar21 = fVar20;
    fVar19 = 0.0;
    if (fVar20 <= 0.0) {
      fVar21 = 0.0;
      fVar19 = fVar20;
    }
    local_70 = (char *)CONCAT44(fVar19,fVar10);
    local_68 = CONCAT44(fVar21,fVar22);
  }
  FUN_038e77e4(&local_78,param_2,param_5 + 0x338);
  uVar4 = *(uint *)(param_5 + 0x2b0);
  if (uVar4 != 0xffffffff) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
      uVar9 = uVar4 - *(ushort *)(lVar18 + 0x3da);
      if (*(uint *)(lVar18 + 0x368) <= uVar9) {
        uVar9 = 0;
      }
      if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0) {
        param_2[0x20] = param_2[0x20] | 1L << ((ulong)uVar4 & 0x3f);
        goto LAB_03ac00fc;
      }
    }
    if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar16 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar16 = 0x11;
    }
    if ((*(uint *)(lVar18 + 800) & 2) != 0) {
      uVar16 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar16);
    param_2[0x20] = 0;
  }
LAB_03ac00fc:
  local_88 = 0;
  uStack_80 = 0;
  if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0f98);
  }
  uVar14 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
  if ((uVar14 & 1) == 0) {
    param_2 = (undefined8 *)0x0;
  }
  (**(code **)PTR_DAT_04bcfd90)(param_2[0x17],0,&local_88,0xf);
  return;
}

