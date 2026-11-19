
undefined8
FUN_03976a50(long param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  
  lVar21 = *(long *)(param_1 + 0x20);
  uVar4 = param_3;
  if (*(uint *)(param_1 + 0x18) <= param_3) {
    uVar4 = 0;
  }
  lVar16 = lVar21 + (long)(int)uVar4 * 0x970;
  *(undefined8 *)(lVar16 + 0x568) = 0;
  *(float *)(lVar16 + 0x560) = (float)param_4;
  *(float *)(lVar16 + 0x564) = (float)param_5;
  *(float *)(lVar16 + 0x570) = (float)param_4;
  *(float *)(lVar16 + 0x574) = (float)param_5;
  *(uint *)(lVar16 + 0x8d8) = *(uint *)(lVar16 + 0x8d8) | 1;
  uVar3 = (param_7 ^ 0xffffffff) & 1;
  if ((*(uint *)(param_1 + 8) >> 8 & 1) == 0) {
    local_88 = PTR_DAT_04bb2020 + 0x10;
    lVar20 = *(long *)PTR_DAT_04bbd510;
    local_80 = "light_prepass_light_buffer";
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar16 == 0) {
      iVar10 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar10 = (int)lVar16 + -1;
    }
    puVar12 = (undefined4 *)
              FUN_03948e10(lVar20,param_2,lVar20 + (long)iVar10 * 0x290 + 0x10,&local_88,0x1d,4,
                           param_4,param_5,1,0,1,0,1,uVar3,0,0);
    lVar20 = lVar21 + (long)(int)uVar4 * 0x970;
    *(undefined4 **)(lVar20 + 0x550) = puVar12;
    *(undefined4 *)(lVar20 + 0x2b0) = *puVar12;
    *(undefined4 *)(lVar20 + 0x2b4) = puVar12[1];
    *(undefined8 *)(lVar20 + 0x2b8) = *(undefined8 *)(puVar12 + 2);
    *(undefined8 *)(lVar20 + 0x2c0) = *(undefined8 *)(puVar12 + 4);
    *(undefined4 *)(lVar20 + 0x2c8) = puVar12[6];
    *(undefined4 *)(lVar20 + 0x2cc) = puVar12[7];
    *(undefined8 *)(lVar20 + 0x2d0) = *(undefined8 *)(puVar12 + 8);
    *(undefined8 *)(lVar20 + 0x2d8) = *(undefined8 *)(puVar12 + 10);
    uVar15 = *(undefined8 *)(puVar12 + 0xc);
    uVar13 = *(undefined8 *)(puVar12 + 0xe);
    uVar19 = *(undefined8 *)(puVar12 + 0x10);
    *(undefined8 *)(lVar20 + 0x2f7) = *(undefined8 *)((long)puVar12 + 0x47);
    *(undefined8 *)(lVar20 + 0x2f0) = uVar19;
    *(undefined8 *)(lVar20 + 0x2e8) = uVar13;
    *(undefined8 *)(lVar20 + 0x2e0) = uVar15;
    FUN_038fd1e0(lVar20 + 0x300);
    FUN_038fd2f0(lVar20 + 0x300,puVar12 + 0x14);
    uVar5 = puVar12[0x26];
    *(undefined8 *)(lVar20 + 0x340) = *(undefined8 *)(puVar12 + 0x24);
    puVar2 = (uint *)(lVar20 + 900);
    *(undefined4 *)(lVar20 + 0x348) = uVar5;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = *puVar2 | 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar17 = lVar21 + (long)(int)uVar4 * 0x970;
    lVar16 = lVar17 + 0x5c0;
    FUN_01560750(lVar16,*(undefined8 *)(lVar20 + 0x550),*(undefined1 *)(lVar17 + 0x67e),
                 *(undefined2 *)(lVar17 + 0x67c));
    lVar20 = 0;
  }
  else {
    lVar20 = lVar21 + (long)(int)uVar4 * 0x970;
    puVar1 = (undefined8 *)(lVar20 + 0x550);
    lVar16 = lVar20 + 0x5c0;
    lVar17 = *(long *)PTR_DAT_04bbd510;
    if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "light_prepass_light_buffer";
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar11 == 0) {
        iVar10 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar10 = (int)lVar11 + -1;
      }
      puVar12 = (undefined4 *)
                FUN_03948e10(lVar17,param_2,lVar17 + (long)iVar10 * 0x290 + 0x10,&local_88,0x1a,4,
                             param_4,param_5,1,0,1,0,1,uVar3,0,0);
      *puVar1 = puVar12;
      *(undefined4 *)(lVar20 + 0x2b0) = *puVar12;
      *(undefined4 *)(lVar20 + 0x2b4) = puVar12[1];
      *(undefined8 *)(lVar20 + 0x2b8) = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)(lVar20 + 0x2c0) = *(undefined8 *)(puVar12 + 4);
      *(undefined4 *)(lVar20 + 0x2c8) = puVar12[6];
      *(undefined4 *)(lVar20 + 0x2cc) = puVar12[7];
      *(undefined8 *)(lVar20 + 0x2d0) = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(lVar20 + 0x2d8) = *(undefined8 *)(puVar12 + 10);
      uVar15 = *(undefined8 *)(puVar12 + 0xc);
      uVar13 = *(undefined8 *)(puVar12 + 0xe);
      uVar19 = *(undefined8 *)(puVar12 + 0x10);
      *(undefined8 *)(lVar20 + 0x2f7) = *(undefined8 *)((long)puVar12 + 0x47);
      *(undefined8 *)(lVar20 + 0x2e0) = uVar15;
      *(undefined8 *)(lVar20 + 0x2e8) = uVar13;
      *(undefined8 *)(lVar20 + 0x2f0) = uVar19;
      FUN_038fd1e0(lVar20 + 0x300);
      FUN_038fd2f0(lVar20 + 0x300,puVar12 + 0x14);
      uVar5 = puVar12[0x26];
      *(undefined8 *)(lVar20 + 0x340) = *(undefined8 *)(puVar12 + 0x24);
      puVar2 = (uint *)(lVar20 + 900);
      *(undefined4 *)(lVar20 + 0x348) = uVar5;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = *puVar2 | 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      FUN_01560750(lVar16,*puVar1,0,0);
      lVar20 = 0;
    }
    else {
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "light_prepass_light_buffer";
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar11 == 0) {
        iVar10 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar10 = (int)lVar11 + -1;
      }
      puVar12 = (undefined4 *)
                FUN_03948e10(lVar17,param_2,lVar17 + (long)iVar10 * 0x290 + 0x10,&local_88,0x1a,4,
                             param_4,param_5,1,0,2,0,1,uVar3,0,0);
      *puVar1 = puVar12;
      *(undefined4 *)(lVar20 + 0x2b0) = *puVar12;
      *(undefined4 *)(lVar20 + 0x2b4) = puVar12[1];
      *(undefined8 *)(lVar20 + 0x2b8) = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)(lVar20 + 0x2c0) = *(undefined8 *)(puVar12 + 4);
      *(undefined4 *)(lVar20 + 0x2c8) = puVar12[6];
      *(undefined4 *)(lVar20 + 0x2cc) = puVar12[7];
      *(undefined8 *)(lVar20 + 0x2d0) = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(lVar20 + 0x2d8) = *(undefined8 *)(puVar12 + 10);
      uVar15 = *(undefined8 *)(puVar12 + 0xc);
      uVar13 = *(undefined8 *)(puVar12 + 0xe);
      uVar19 = *(undefined8 *)(puVar12 + 0x10);
      *(undefined8 *)(lVar20 + 0x2f7) = *(undefined8 *)((long)puVar12 + 0x47);
      *(undefined8 *)(lVar20 + 0x2e0) = uVar15;
      *(undefined8 *)(lVar20 + 0x2e8) = uVar13;
      *(undefined8 *)(lVar20 + 0x2f0) = uVar19;
      FUN_038fd1e0(lVar20 + 0x300);
      FUN_038fd2f0(lVar20 + 0x300,puVar12 + 0x14);
      uVar5 = puVar12[0x26];
      *(undefined8 *)(lVar20 + 0x340) = *(undefined8 *)(puVar12 + 0x24);
      puVar2 = (uint *)(lVar20 + 900);
      *(undefined4 *)(lVar20 + 0x348) = uVar5;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = *puVar2 | 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      FUN_01560750(lVar16,*puVar1,0,0);
      lVar20 = lVar21 + (long)(int)uVar4 * 0x970 + 0x6a0;
      FUN_01560750(lVar20,*puVar1,0,1);
    }
  }
  lVar17 = lVar21 + (long)(int)uVar4 * 0x970;
  *(long *)(lVar17 + 0x578) = lVar16;
  *(long *)(lVar17 + 0x580) = lVar20;
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  }
  if ((param_6 & 1) != 0) {
    if (*(uint *)(param_1 + 0x18) <= param_3) {
      param_3 = 0;
    }
    lVar20 = *(long *)(param_1 + 0x20) + (long)(int)param_3 * 0x970;
    lVar16 = 0;
    if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
      lVar16 = lVar20 + 0x780;
    }
    *(long *)(lVar20 + 0x5b8) = lVar16;
    (**(code **)(*(long *)(lVar20 + 0x558) + 0x38))(lVar20 + 0x558,param_2);
    local_78 = 0xff7fffffff7fffff;
    local_88 = PTR_DAT_04bd0f08 + 0x10;
    local_80 = (char *)0x7f7fffff7f7fffff;
    local_70 = *(uint *)PTR_DAT_04bd0ea8;
    local_6c = 0x3f80000000000000;
    if (local_70 < 6) {
      if ((1 << (ulong)(local_70 & 0x1f) & 0x39U) == 0) {
        fVar23 = *(float *)(lVar20 + 0x560);
        fVar22 = *(float *)(lVar20 + 0x564);
      }
      else {
        fVar22 = *(float *)(lVar20 + 0x560);
        fVar23 = *(float *)(lVar20 + 0x564);
      }
      fVar25 = fVar22;
      fVar8 = 0.0;
      if (fVar22 <= 0.0) {
        fVar25 = 0.0;
        fVar8 = fVar22;
      }
      fVar24 = fVar23;
      fVar22 = 0.0;
      if (fVar23 <= 0.0) {
        fVar24 = 0.0;
        fVar22 = fVar23;
      }
      local_80 = (char *)CONCAT44(fVar22,fVar8);
      local_78 = CONCAT44(fVar24,fVar25);
    }
    FUN_038e77e4(&local_88,param_2,lVar20 + 0x558);
    puVar9 = PTR_DAT_04bcfd90;
    if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x300) == 0) {
      local_88 = (undefined *)0x0;
      local_80 = (char *)0x0;
      (**(code **)PTR_DAT_04bcfd90)(param_2[0x17],0,&local_88,0xf);
      uVar13 = param_2[0x17];
      local_88 = (undefined *)0x0;
      local_80 = (char *)0x0;
      pcVar18 = *(code **)puVar9;
      uVar15 = 1;
    }
    else {
      local_88 = (undefined *)0x0;
      local_80 = (char *)0x0;
      if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd0f98);
      }
      uVar14 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
      uVar15 = 0;
      if ((uVar14 & 1) == 0) {
        param_2 = (undefined8 *)0x0;
      }
      uVar13 = param_2[0x17];
      pcVar18 = *(code **)PTR_DAT_04bcfd90;
    }
    (*pcVar18)(uVar13,uVar15,&local_88,0xf);
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    }
  }
  return *(undefined8 *)(lVar21 + (long)(int)uVar4 * 0x970 + 0x550);
}

