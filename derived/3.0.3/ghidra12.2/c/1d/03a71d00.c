
void FUN_03a71d00(long param_1,undefined8 *param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort uVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  ulong uVar17;
  char cVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_74;
  
  if (*(char *)(param_1 + 0x468) != '\0') {
    iVar15 = *(int *)(param_1 + 0x488);
    lVar25 = *(long *)(param_1 + 0x1d8);
    uVar4 = param_3;
    if (*(uint *)(param_1 + 0x1d0) <= param_3) {
      uVar4 = 0;
    }
    uVar21 = 2;
    if (iVar15 != 1) {
      uVar21 = (uint)(iVar15 == 0);
    }
    uVar6 = uVar21 | 4;
    if (iVar15 != 2) {
      uVar6 = uVar21;
    }
    lVar22 = lVar25 + (long)(int)uVar4 * 0x560;
    if (*(uint *)(lVar22 + 0x55c) == uVar6) {
      cVar18 = *(char *)(lVar25 + (long)(int)uVar4 * 0x560 + 0x558);
    }
    else {
      cVar18 = '\0';
      *(uint *)(lVar22 + 0x55c) = uVar6;
      *(undefined1 *)(lVar25 + (long)(int)uVar4 * 0x560 + 0x558) = 0;
      iVar15 = *(int *)(param_1 + 0x488);
    }
    uVar9 = *(ushort *)(param_4 + 0x38);
    uVar8 = *(ushort *)(param_4 + 0x3a);
    uVar21 = (uint)uVar9;
    if (uVar9 < 2) {
      uVar21 = 1;
    }
    uVar6 = (uint)uVar8;
    if (*(short *)(param_4 + 0x42) != 3) {
      uVar6 = 1;
    }
    if (uVar6 == uVar8 || uVar6 < uVar8) {
      uVar6 = (uint)uVar8;
    }
    uVar5 = uVar6 >> 2;
    uVar11 = uVar21 >> 2;
    if (iVar15 != 2) {
      uVar5 = uVar6;
      uVar11 = uVar21;
    }
    if (cVar18 == '\0') {
      lVar22 = *(long *)(param_1 + 0x1d8);
      uVar21 = param_3;
      if (*(uint *)(param_1 + 0x1d0) <= param_3) {
        uVar21 = 0;
      }
      lVar19 = lVar22 + (long)(int)uVar21 * 0x560;
      puVar1 = (undefined8 *)(lVar19 + 800);
      if (*(long *)(lVar19 + 800) != 0) {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
        *puVar1 = 0;
        *(undefined1 *)(lVar22 + (long)(int)uVar21 * 0x560 + 0x559) = 1;
      }
      lVar19 = lVar22 + (long)(int)uVar21 * 0x560;
      if (*(long *)(lVar19 + 0x318) != 0) {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
        *(undefined8 *)(lVar19 + 0x318) = 0;
      }
      lVar19 = lVar22 + (long)(int)uVar21 * 0x560;
      *(undefined1 *)(lVar19 + 0x558) = 1;
      *(undefined8 *)(lVar19 + 0x340) = 0;
      *(float *)(lVar19 + 0x338) = (float)uVar11;
      *(float *)(lVar19 + 0x348) = (float)uVar11;
      *(float *)(lVar19 + 0x33c) = (float)uVar5;
      puVar3 = PTR_DAT_04bbd510;
      *(float *)(lVar19 + 0x34c) = (float)uVar5;
      lVar24 = *(long *)puVar3;
      local_90 = PTR_DAT_04bb2020 + 0x10;
      local_88 = "Normal_drawer_buffer";
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar19 == 0) {
        iVar14 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar14 = (int)lVar19 + -1;
      }
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar14);
      puVar16 = (undefined4 *)
                FUN_03948e10(lVar24,param_2,lVar24 + (long)iVar14 * 0x290 + 0x10,&local_90,0x1d,1,
                             uVar11,uVar5,1,0,1,0,1,0,0,0);
      lVar22 = lVar22 + (long)(int)uVar21 * 0x560;
      *(undefined4 **)(lVar22 + 0x328) = puVar16;
      *puVar1 = puVar16;
      *(undefined4 *)(lVar22 + 0x158) = *puVar16;
      *(undefined4 *)(lVar22 + 0x15c) = puVar16[1];
      *(undefined8 *)(lVar22 + 0x160) = *(undefined8 *)(puVar16 + 2);
      *(undefined8 *)(lVar22 + 0x168) = *(undefined8 *)(puVar16 + 4);
      *(undefined4 *)(lVar22 + 0x170) = puVar16[6];
      *(undefined4 *)(lVar22 + 0x174) = puVar16[7];
      *(undefined8 *)(lVar22 + 0x178) = *(undefined8 *)(puVar16 + 8);
      *(undefined8 *)(lVar22 + 0x180) = *(undefined8 *)(puVar16 + 10);
      uVar20 = *(undefined8 *)(puVar16 + 0xc);
      uVar7 = *(undefined8 *)(puVar16 + 0xe);
      uVar23 = *(undefined8 *)(puVar16 + 0x10);
      *(undefined8 *)(lVar22 + 0x19f) = *(undefined8 *)((long)puVar16 + 0x47);
      *(undefined8 *)(lVar22 + 400) = uVar7;
      *(undefined8 *)(lVar22 + 0x198) = uVar23;
      *(undefined8 *)(lVar22 + 0x188) = uVar20;
      FUN_038fd1e0(lVar22 + 0x1a8);
      FUN_038fd2f0(lVar22 + 0x1a8,puVar16 + 0x14);
      uVar20 = *(undefined8 *)(puVar16 + 0x24);
      *(undefined4 *)(lVar22 + 0x1f0) = puVar16[0x26];
      *(undefined8 *)(lVar22 + 0x1e8) = uVar20;
      puVar2 = (uint *)(lVar22 + 0x22c);
      do {
        cVar18 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar10) {
          *puVar2 = *puVar2 | 1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
    }
    if ((*(byte *)(param_1 + 0x1e0) & 1) != 0) {
      lVar22 = *(long *)(param_1 + 0x1d8);
      uVar21 = param_3;
      if (*(uint *)(param_1 + 0x1d0) <= param_3) {
        uVar21 = 0;
      }
      lVar19 = lVar22 + (long)(int)uVar21 * 0x560;
      *(undefined8 *)(lVar19 + 0x340) = 0;
      *(float *)(lVar19 + 0x338) = (float)uVar11;
      *(float *)(lVar19 + 0x348) = (float)uVar11;
      *(float *)(lVar19 + 0x33c) = (float)uVar5;
      puVar3 = PTR_DAT_04bbd510;
      *(float *)(lVar19 + 0x34c) = (float)uVar5;
      lVar24 = *(long *)puVar3;
      local_90 = PTR_DAT_04bb2020 + 0x10;
      local_88 = "Normal_drawer_buffer";
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar19 == 0) {
        iVar14 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar14 = (int)lVar19 + -1;
      }
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar14);
      puVar16 = (undefined4 *)
                FUN_03948e10(lVar24,param_2,lVar24 + (long)iVar14 * 0x290 + 0x10,&local_90,0x1d,1,
                             uVar11,uVar5,1,0,1,0,1,0,0,0);
      lVar22 = lVar22 + (long)(int)uVar21 * 0x560;
      *(undefined4 **)(lVar22 + 0x318) = puVar16;
      *(undefined4 **)(lVar22 + 0x328) = puVar16;
      *(undefined4 *)(lVar22 + 0x238) = *puVar16;
      *(undefined4 *)(lVar22 + 0x23c) = puVar16[1];
      *(undefined8 *)(lVar22 + 0x240) = *(undefined8 *)(puVar16 + 2);
      *(undefined8 *)(lVar22 + 0x248) = *(undefined8 *)(puVar16 + 4);
      *(undefined4 *)(lVar22 + 0x250) = puVar16[6];
      *(undefined4 *)(lVar22 + 0x254) = puVar16[7];
      *(undefined8 *)(lVar22 + 600) = *(undefined8 *)(puVar16 + 8);
      *(undefined8 *)(lVar22 + 0x260) = *(undefined8 *)(puVar16 + 10);
      uVar20 = *(undefined8 *)(puVar16 + 0xc);
      uVar7 = *(undefined8 *)(puVar16 + 0xe);
      uVar23 = *(undefined8 *)(puVar16 + 0x10);
      *(undefined8 *)(lVar22 + 0x27f) = *(undefined8 *)((long)puVar16 + 0x47);
      *(undefined8 *)(lVar22 + 0x278) = uVar23;
      *(undefined8 *)(lVar22 + 0x270) = uVar7;
      *(undefined8 *)(lVar22 + 0x268) = uVar20;
      FUN_038fd1e0(lVar22 + 0x288);
      FUN_038fd2f0(lVar22 + 0x288,puVar16 + 0x14);
      uVar20 = *(undefined8 *)(puVar16 + 0x24);
      *(undefined4 *)(lVar22 + 0x2d0) = puVar16[0x26];
      *(undefined8 *)(lVar22 + 0x2c8) = uVar20;
      puVar2 = (uint *)(lVar22 + 0x30c);
      do {
        cVar18 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar10) {
          *puVar2 = *puVar2 | 1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
    }
    if (iVar15 == 2) {
      lVar22 = 0;
    }
    else {
      lVar19 = lVar25 + (long)(int)uVar4 * 0x560;
      *(undefined4 *)(lVar19 + 0x480) = *(undefined4 *)(param_4 + 8);
      lVar22 = lVar19 + 0x478;
      *(undefined4 *)(lVar19 + 0x484) = *(undefined4 *)(param_4 + 0xc);
      *(undefined8 *)(lVar19 + 0x488) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(lVar19 + 0x490) = *(undefined8 *)(param_4 + 0x18);
      *(undefined4 *)(lVar19 + 0x498) = *(undefined4 *)(param_4 + 0x20);
      *(undefined4 *)(lVar19 + 0x49c) = *(undefined4 *)(param_4 + 0x24);
      *(undefined8 *)(lVar19 + 0x4a0) = *(undefined8 *)(param_4 + 0x28);
      *(undefined8 *)(lVar19 + 0x4a8) = *(undefined8 *)(param_4 + 0x30);
      uVar20 = *(undefined8 *)(param_4 + 0x38);
      uVar7 = *(undefined8 *)(param_4 + 0x40);
      uVar23 = *(undefined8 *)(param_4 + 0x48);
      *(undefined8 *)(lVar19 + 0x4c7) = *(undefined8 *)(param_4 + 0x4f);
      *(undefined8 *)(lVar19 + 0x4c0) = uVar23;
      *(undefined8 *)(lVar19 + 0x4b8) = uVar7;
      *(undefined8 *)(lVar19 + 0x4b0) = uVar20;
      FUN_038fd1e0(lVar19 + 0x4d0);
      FUN_038fd2f0(lVar19 + 0x4d0,param_4 + 0x58);
      uVar20 = *(undefined8 *)(param_4 + 0x98);
      *(undefined4 *)(lVar19 + 0x518) = *(undefined4 *)(param_4 + 0xa0);
      *(undefined8 *)(lVar19 + 0x510) = uVar20;
      do {
        cVar18 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass((undefined4 *)(lVar19 + 0x530),0x10);
        if (bVar10) {
          *(undefined4 *)(lVar19 + 0x530) = 0x7fffffff;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      *(undefined2 *)(lVar19 + 0x534) = *(undefined2 *)(param_4 + 0xbc);
      *(undefined1 *)(lVar19 + 0x536) = *(undefined1 *)(param_4 + 0xbe);
      *(undefined1 *)(lVar19 + 0x537) = *(undefined1 *)(param_4 + 0xbf);
      uVar20 = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(lVar19 + 0x520) = *(undefined8 *)(param_4 + 0xa8);
      *(undefined8 *)(lVar19 + 0x528) = uVar20;
      lVar19 = lVar25 + (long)(int)uVar4 * 0x560;
      *(undefined8 *)(lVar19 + 0x538) = *(undefined8 *)(param_4 + 0xc0);
      *(undefined4 *)(lVar19 + 0x540) = *(undefined4 *)(param_4 + 200);
      *(undefined4 *)(lVar19 + 0x544) = *(undefined4 *)(param_4 + 0xcc);
      *(undefined8 *)(lVar19 + 0x548) = *(undefined8 *)(param_4 + 0xd0);
      *(undefined8 *)(lVar19 + 0x550) = *(undefined8 *)(param_4 + 0xd8);
    }
    lVar25 = lVar25 + (long)(int)uVar4 * 0x560;
    *(long *)(lVar25 + 0x390) = lVar22;
    *(undefined8 *)(lVar25 + 0x340) = 0;
    *(float *)(lVar25 + 0x338) = (float)uVar11;
    *(float *)(lVar25 + 0x348) = (float)uVar11;
    *(float *)(lVar25 + 0x33c) = (float)uVar5;
    *(float *)(lVar25 + 0x34c) = (float)uVar5;
    FUN_01560750(lVar25 + 0x398,*(undefined8 *)(lVar25 + 0x328),*(undefined1 *)(lVar25 + 0x456),
                 *(undefined2 *)(lVar25 + 0x454));
    *(long *)(lVar25 + 0x350) = lVar25 + 0x398;
    (**(code **)(*(long *)(lVar25 + 0x330) + 0x38))(lVar25 + 0x330,param_2);
    puVar13 = PTR_DAT_04bd0ea8;
    local_c0 = 0x7f7fffff7f7fffff;
    local_b8 = 0xff7fffffff7fffff;
    puVar3 = PTR_DAT_04bd0f08 + 0x10;
    local_ac = 0x3f80000000000000;
    local_b0 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_b0 < 6) {
      if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
        fVar27 = *(float *)(lVar25 + 0x338);
        fVar26 = *(float *)(lVar25 + 0x33c);
      }
      else {
        fVar26 = *(float *)(lVar25 + 0x338);
        fVar27 = *(float *)(lVar25 + 0x33c);
      }
      fVar29 = fVar26;
      fVar12 = 0.0;
      if (fVar26 <= 0.0) {
        fVar29 = 0.0;
        fVar12 = fVar26;
      }
      fVar28 = fVar27;
      fVar26 = 0.0;
      if (fVar27 <= 0.0) {
        fVar28 = 0.0;
        fVar26 = fVar27;
      }
      local_c0 = CONCAT44(fVar26,fVar12);
      local_b8 = CONCAT44(fVar28,fVar29);
    }
    local_c8 = puVar3;
    FUN_038e77e4(&local_c8,param_2,lVar25 + 0x330);
    if (*(uint *)(param_1 + 0x1d0) <= param_3) {
      param_3 = 0;
    }
    lVar25 = *(long *)(param_1 + 0x1d8) + (long)(int)param_3 * 0x560;
    FUN_01560750(lVar25 + 0x398,*(undefined8 *)(lVar25 + 0x328),*(undefined1 *)(lVar25 + 0x456),
                 *(undefined2 *)(lVar25 + 0x454));
    *(long *)(lVar25 + 0x350) = lVar25 + 0x398;
    (**(code **)(*(long *)(lVar25 + 0x330) + 0x38))(lVar25 + 0x330,param_2);
    local_78 = *(uint *)puVar13;
    local_88 = (char *)0x7f7fffff7f7fffff;
    local_80 = 0xff7fffffff7fffff;
    local_74 = 0x3f80000000000000;
    if (local_78 < 6) {
      if ((1 << (ulong)(local_78 & 0x1f) & 0x39U) == 0) {
        fVar27 = *(float *)(lVar25 + 0x338);
        fVar26 = *(float *)(lVar25 + 0x33c);
      }
      else {
        fVar26 = *(float *)(lVar25 + 0x338);
        fVar27 = *(float *)(lVar25 + 0x33c);
      }
      fVar29 = fVar26;
      fVar12 = 0.0;
      if (fVar26 <= 0.0) {
        fVar29 = 0.0;
        fVar12 = fVar26;
      }
      fVar28 = fVar27;
      fVar26 = 0.0;
      if (fVar27 <= 0.0) {
        fVar28 = 0.0;
        fVar26 = fVar27;
      }
      local_88 = (char *)CONCAT44(fVar26,fVar12);
      local_80 = CONCAT44(fVar28,fVar29);
    }
    local_90 = puVar3;
    FUN_038e77e4(&local_90,param_2,lVar25 + 0x330);
    local_a0 = 0;
    uStack_98 = 0;
    if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0f98);
    }
    uVar17 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
    if ((uVar17 & 1) == 0) {
      param_2 = (undefined8 *)0x0;
    }
    (**(code **)PTR_DAT_04bcfd90)(param_2[0x17],0,&local_a0,0xf);
  }
  return;
}

