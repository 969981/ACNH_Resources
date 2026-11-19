
bool FUN_039a7770(long param_1,undefined8 param_2,int param_3,long *param_4,undefined8 param_5)

{
  uint *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  undefined *local_128;
  char *pcStack_120;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_94;
  
  cVar10 = *(char *)(param_1 + 0x4e8);
  if (cVar10 == param_3) {
    lVar17 = param_4[4];
    *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(lVar17 + 8);
    *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(lVar17 + 0xc);
    *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(lVar17 + 0x10);
    *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(lVar17 + 0x18);
    *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(lVar17 + 0x20);
    *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(lVar17 + 0x24);
    *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(lVar17 + 0x30);
    uVar3 = *(undefined8 *)(lVar17 + 0x38);
    uVar4 = *(undefined8 *)(lVar17 + 0x40);
    uVar16 = *(undefined8 *)(lVar17 + 0x48);
    *(undefined8 *)(param_1 + 0x54f) = *(undefined8 *)(lVar17 + 0x4f);
    *(undefined8 *)(param_1 + 0x548) = uVar16;
    *(undefined8 *)(param_1 + 0x540) = uVar4;
    *(undefined8 *)(param_1 + 0x538) = uVar3;
    FUN_038fd1e0(param_1 + 0x558);
    FUN_038fd2f0(param_1 + 0x558,lVar17 + 0x58);
    uVar5 = *(undefined4 *)(lVar17 + 0xa0);
    *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(lVar17 + 0x98);
    puVar1 = (uint *)(param_1 + 0x5dc);
    *(undefined4 *)(param_1 + 0x5a0) = uVar5;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = *puVar1 | 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    lVar17 = *(long *)PTR_DAT_04bbd510;
    if ((ulong)*(ushort *)(param_1 + 0x4d8) - 0x2f < 0x2a) {
      uVar6 = *(ushort *)(param_1 + 0x470);
      local_128 = PTR_DAT_04bb2020 + 0x10;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar7 = *(ushort *)(param_1 + 0x472);
      pcStack_120 = "copy_temp";
      uVar8 = uVar7;
      if (*(short *)(param_1 + 0x47a) != 3) {
        uVar8 = 1;
      }
      if (uVar8 <= uVar7) {
        uVar8 = uVar7;
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar14 == 0) {
        iVar13 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar13 = (int)lVar14 + -1;
      }
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar13);
      lVar14 = FUN_03948e10(lVar17,param_2,lVar17 + (long)iVar13 * 0x290 + 0x10,&local_128,0x1d,1,
                            uVar6,uVar8,1,0,1,0,1,0,0,0);
      lVar15 = *(long *)(param_1 + 0x40);
      FUN_01560750(lVar15,lVar14,*(undefined1 *)(lVar15 + 0xbe),*(undefined2 *)(lVar15 + 0xbc));
    }
    else {
      lVar14 = 0;
    }
    plVar18 = (long *)(param_1 + 0x20);
    (**(code **)(*plVar18 + 0x38))(plVar18,param_2);
    local_a0 = 0xff7fffffff7fffff;
    local_b0 = PTR_DAT_04bd0f08 + 0x10;
    local_a8 = 0x7f7fffff7f7fffff;
    local_98 = *(uint *)PTR_DAT_04bd0ea8;
    local_94 = 0x3f80000000000000;
    if (local_98 < 6) {
      if ((1 << (ulong)(local_98 & 0x1f) & 0x39U) == 0) {
        fVar20 = *(float *)(param_1 + 0x28);
        fVar19 = *(float *)(param_1 + 0x2c);
      }
      else {
        fVar19 = *(float *)(param_1 + 0x28);
        fVar20 = *(float *)(param_1 + 0x2c);
      }
      fVar23 = fVar19;
      fVar21 = 0.0;
      if (fVar19 <= 0.0) {
        fVar23 = 0.0;
        fVar21 = fVar19;
      }
      fVar24 = fVar20;
      fVar19 = 0.0;
      if (fVar20 <= 0.0) {
        fVar24 = 0.0;
        fVar19 = fVar20;
      }
      local_a8 = CONCAT44(fVar19,fVar21);
      local_a0 = CONCAT44(fVar24,fVar23);
    }
    FUN_038e77e4(&local_b0,param_2,plVar18);
    FUN_038e4cec(&local_128);
    local_128 = (undefined *)((ulong)local_128 & 0xfffffffeffff0000);
    FUN_038e4d90(&local_128,param_2);
    fVar24 = *(float *)((long)param_4 + 0x1c) - *(float *)((long)param_4 + 0x14);
    fVar23 = *(float *)(param_4 + 3) - *(float *)(param_4 + 2);
    fVar20 = *(float *)(param_1 + 0x5f8) - *(float *)(param_1 + 0x5f0);
    fVar21 = *(float *)(param_1 + 0x5fc) - *(float *)(param_1 + 0x5f4);
    fVar19 = fVar21;
    if (1 < *(int *)(param_1 + 0x600) - 1U) {
      fVar19 = fVar20;
      fVar20 = fVar21;
    }
    fVar21 = *(float *)(param_4 + 1);
    fVar22 = *(float *)((long)param_4 + 0xc);
    FUN_038e79bc(param_1 + 0x5e8,&local_130,param_4);
    fStack_134 = (fVar24 * (fVar20 / fVar22)) / fVar24;
    uVar6 = *(ushort *)(param_1 + 0x470);
    uVar8 = *(ushort *)(param_1 + 0x472);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    local_138 = (fVar23 * (fVar19 / fVar21)) / fVar23;
    fStack_13c = -(0.5 - (0.5 - fStack_12c / fVar24) / fStack_134);
    uVar7 = *(ushort *)(param_1 + 0x538);
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    local_140 = 0.5 - (0.5 - local_130 / fVar23) / local_138;
    uVar2 = uVar8;
    if (*(short *)(param_1 + 0x47a) != 3) {
      uVar2 = 1;
    }
    if (uVar2 <= uVar8) {
      uVar2 = uVar8;
    }
    uVar9 = *(ushort *)(param_1 + 0x53a);
    uVar8 = uVar9;
    if (*(short *)(param_1 + 0x542) != 3) {
      uVar8 = 1;
    }
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    local_148 = (float)uVar6 / (float)uVar7;
    fStack_144 = (float)uVar2 / (float)uVar8;
    FUN_0394a8e0(0,param_2,param_1 + 0x508,&local_b0,&local_138,&local_140,&local_148,
                 PTR_DAT_04bb2f48);
    *(undefined1 *)(param_1 + 0x4e8) = 0xff;
    if (lVar14 != 0) {
      FUN_0390b240(lVar14,param_2,param_1 + 0x440);
      FUN_039499cc(lVar17,lVar14);
    }
    (**(code **)(*param_4 + 0x38))(param_4,param_2);
    FUN_038e77e4(param_5,param_2,param_4);
  }
  return cVar10 == param_3;
}

