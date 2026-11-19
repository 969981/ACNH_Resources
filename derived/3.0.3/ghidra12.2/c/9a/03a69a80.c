
void FUN_03a69a80(long param_1,undefined8 *param_2,uint param_3,long param_4)

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
  char cVar10;
  uint uVar11;
  float fVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
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
    iVar16 = *(int *)(param_1 + 0x488);
    lVar25 = *(long *)(param_1 + 0x1d8);
    uVar4 = param_3;
    if (*(uint *)(param_1 + 0x1d0) <= param_3) {
      uVar4 = 0;
    }
    uVar19 = 2;
    if (iVar16 != 1) {
      uVar19 = (uint)(iVar16 == 0);
    }
    uVar6 = uVar19 | 4;
    if (iVar16 != 2) {
      uVar6 = uVar19;
    }
    lVar22 = lVar25 + (long)(int)uVar4 * 0x3f8;
    if (*(uint *)(lVar22 + 0x3f4) == uVar6) {
      bVar14 = *(char *)(lVar25 + (long)(int)uVar4 * 0x3f8 + 0x3f0) == '\0';
    }
    else {
      *(uint *)(lVar22 + 0x3f4) = uVar6;
      *(undefined1 *)(lVar25 + (long)(int)uVar4 * 0x3f8 + 0x3f0) = 0;
      bVar14 = true;
      iVar16 = *(int *)(param_1 + 0x488);
    }
    puVar3 = PTR_DAT_04bbd510;
    uVar9 = *(ushort *)(param_4 + 0x38);
    uVar8 = *(ushort *)(param_4 + 0x3a);
    uVar19 = (uint)uVar9;
    if (uVar9 < 2) {
      uVar19 = 1;
    }
    uVar6 = (uint)uVar8;
    if (*(short *)(param_4 + 0x42) != 3) {
      uVar6 = 1;
    }
    if (uVar6 == uVar8 || uVar6 < uVar8) {
      uVar6 = (uint)uVar8;
    }
    uVar5 = uVar6 >> 2;
    uVar11 = uVar19 >> 2;
    if (iVar16 != 2) {
      uVar5 = uVar6;
      uVar11 = uVar19;
    }
    if (bVar14) {
      lVar22 = *(long *)(param_1 + 0x1d8);
      uVar19 = param_3;
      if (*(uint *)(param_1 + 0x1d0) <= param_3) {
        uVar19 = 0;
      }
      lVar20 = lVar22 + (long)(int)uVar19 * 0x3f8;
      puVar1 = (undefined8 *)(lVar20 + 0x1c0);
      if (*(long *)(lVar20 + 0x1c0) != 0) {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
        *puVar1 = 0;
        *(undefined1 *)(lVar22 + (long)(int)uVar19 * 0x3f8 + 0x3f1) = 1;
      }
      lVar20 = lVar22 + (long)(int)uVar19 * 0x3f8;
      *(undefined1 *)(lVar20 + 0x3f0) = 1;
      *(undefined8 *)(lVar20 + 0x1d8) = 0;
      *(float *)(lVar20 + 0x1d4) = (float)uVar5;
      *(float *)(lVar20 + 0x1e4) = (float)uVar5;
      *(float *)(lVar20 + 0x1d0) = (float)uVar11;
      *(float *)(lVar20 + 0x1e0) = (float)uVar11;
      lVar24 = *(long *)puVar3;
      local_90 = PTR_DAT_04bb2020 + 0x10;
      local_88 = "decal_drawer_buffer";
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar20 == 0) {
        iVar15 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar15 = (int)lVar20 + -1;
      }
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar15);
      puVar17 = (undefined4 *)
                FUN_03948e10(lVar24,param_2,lVar24 + (long)iVar15 * 0x290 + 0x10,&local_90,0x1d,1,
                             uVar11,uVar5,1,0,1,0,1,0,0,0);
      *puVar1 = puVar17;
      lVar22 = lVar22 + (long)(int)uVar19 * 0x3f8;
      *(undefined4 *)(lVar22 + 0xe0) = *puVar17;
      *(undefined4 *)(lVar22 + 0xe4) = puVar17[1];
      *(undefined8 *)(lVar22 + 0xe8) = *(undefined8 *)(puVar17 + 2);
      *(undefined8 *)(lVar22 + 0xf0) = *(undefined8 *)(puVar17 + 4);
      *(undefined4 *)(lVar22 + 0xf8) = puVar17[6];
      *(undefined4 *)(lVar22 + 0xfc) = puVar17[7];
      *(undefined8 *)(lVar22 + 0x100) = *(undefined8 *)(puVar17 + 8);
      *(undefined8 *)(lVar22 + 0x108) = *(undefined8 *)(puVar17 + 10);
      uVar21 = *(undefined8 *)(puVar17 + 0xc);
      uVar7 = *(undefined8 *)(puVar17 + 0xe);
      uVar23 = *(undefined8 *)(puVar17 + 0x10);
      *(undefined8 *)(lVar22 + 0x127) = *(undefined8 *)((long)puVar17 + 0x47);
      *(undefined8 *)(lVar22 + 0x118) = uVar7;
      *(undefined8 *)(lVar22 + 0x120) = uVar23;
      *(undefined8 *)(lVar22 + 0x110) = uVar21;
      FUN_038fd1e0(lVar22 + 0x130);
      FUN_038fd2f0(lVar22 + 0x130,puVar17 + 0x14);
      uVar21 = *(undefined8 *)(puVar17 + 0x24);
      *(undefined4 *)(lVar22 + 0x178) = puVar17[0x26];
      *(undefined8 *)(lVar22 + 0x170) = uVar21;
      puVar2 = (uint *)(lVar22 + 0x1b4);
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar14) {
          *puVar2 = *puVar2 | 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (iVar16 == 2) {
      lVar22 = 0;
    }
    else {
      lVar20 = lVar25 + (long)(int)uVar4 * 0x3f8;
      *(undefined4 *)(lVar20 + 0x318) = *(undefined4 *)(param_4 + 8);
      lVar22 = lVar20 + 0x310;
      *(undefined4 *)(lVar20 + 0x31c) = *(undefined4 *)(param_4 + 0xc);
      *(undefined8 *)(lVar20 + 800) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(lVar20 + 0x328) = *(undefined8 *)(param_4 + 0x18);
      *(undefined4 *)(lVar20 + 0x330) = *(undefined4 *)(param_4 + 0x20);
      *(undefined4 *)(lVar20 + 0x334) = *(undefined4 *)(param_4 + 0x24);
      *(undefined8 *)(lVar20 + 0x338) = *(undefined8 *)(param_4 + 0x28);
      *(undefined8 *)(lVar20 + 0x340) = *(undefined8 *)(param_4 + 0x30);
      uVar23 = *(undefined8 *)(param_4 + 0x48);
      uVar21 = *(undefined8 *)(param_4 + 0x38);
      uVar7 = *(undefined8 *)(param_4 + 0x40);
      *(undefined8 *)(lVar20 + 0x35f) = *(undefined8 *)(param_4 + 0x4f);
      *(undefined8 *)(lVar20 + 0x358) = uVar23;
      *(undefined8 *)(lVar20 + 0x350) = uVar7;
      *(undefined8 *)(lVar20 + 0x348) = uVar21;
      FUN_038fd1e0(lVar20 + 0x368);
      FUN_038fd2f0(lVar20 + 0x368,param_4 + 0x58);
      uVar21 = *(undefined8 *)(param_4 + 0x98);
      *(undefined4 *)(lVar20 + 0x3b0) = *(undefined4 *)(param_4 + 0xa0);
      *(undefined8 *)(lVar20 + 0x3a8) = uVar21;
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass((undefined4 *)(lVar20 + 0x3c8),0x10);
        if (bVar14) {
          *(undefined4 *)(lVar20 + 0x3c8) = 0x7fffffff;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      *(undefined2 *)(lVar20 + 0x3cc) = *(undefined2 *)(param_4 + 0xbc);
      *(undefined1 *)(lVar20 + 0x3ce) = *(undefined1 *)(param_4 + 0xbe);
      *(undefined1 *)(lVar20 + 0x3cf) = *(undefined1 *)(param_4 + 0xbf);
      uVar21 = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(lVar20 + 0x3b8) = *(undefined8 *)(param_4 + 0xa8);
      *(undefined8 *)(lVar20 + 0x3c0) = uVar21;
      lVar20 = lVar25 + (long)(int)uVar4 * 0x3f8;
      *(undefined8 *)(lVar20 + 0x3d0) = *(undefined8 *)(param_4 + 0xc0);
      *(undefined4 *)(lVar20 + 0x3d8) = *(undefined4 *)(param_4 + 200);
      *(undefined4 *)(lVar20 + 0x3dc) = *(undefined4 *)(param_4 + 0xcc);
      *(undefined8 *)(lVar20 + 0x3e0) = *(undefined8 *)(param_4 + 0xd0);
      *(undefined8 *)(lVar20 + 1000) = *(undefined8 *)(param_4 + 0xd8);
    }
    lVar25 = lVar25 + (long)(int)uVar4 * 0x3f8;
    *(long *)(lVar25 + 0x228) = lVar22;
    *(undefined8 *)(lVar25 + 0x1d8) = 0;
    *(float *)(lVar25 + 0x1d4) = (float)uVar5;
    *(float *)(lVar25 + 0x1e4) = (float)uVar5;
    *(float *)(lVar25 + 0x1d0) = (float)uVar11;
    *(float *)(lVar25 + 0x1e0) = (float)uVar11;
    FUN_01560750(lVar25 + 0x230,*(undefined8 *)(lVar25 + 0x1c0),*(undefined1 *)(lVar25 + 0x2ee),
                 *(undefined2 *)(lVar25 + 0x2ec));
    *(long *)(lVar25 + 0x1e8) = lVar25 + 0x230;
    (**(code **)(*(long *)(lVar25 + 0x1c8) + 0x38))(lVar25 + 0x1c8,param_2);
    puVar13 = PTR_DAT_04bd0ea8;
    local_c0 = 0x7f7fffff7f7fffff;
    local_b8 = 0xff7fffffff7fffff;
    puVar3 = PTR_DAT_04bd0f08 + 0x10;
    local_ac = 0x3f80000000000000;
    local_b0 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_b0 < 6) {
      if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
        fVar27 = *(float *)(lVar25 + 0x1d0);
        fVar26 = *(float *)(lVar25 + 0x1d4);
      }
      else {
        fVar26 = *(float *)(lVar25 + 0x1d0);
        fVar27 = *(float *)(lVar25 + 0x1d4);
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
    FUN_038e77e4(&local_c8,param_2,lVar25 + 0x1c8);
    if (*(uint *)(param_1 + 0x1d0) <= param_3) {
      param_3 = 0;
    }
    lVar25 = *(long *)(param_1 + 0x1d8) + (long)(int)param_3 * 0x3f8;
    FUN_01560750(lVar25 + 0x230,*(undefined8 *)(lVar25 + 0x1c0),*(undefined1 *)(lVar25 + 0x2ee),
                 *(undefined2 *)(lVar25 + 0x2ec));
    *(long *)(lVar25 + 0x1e8) = lVar25 + 0x230;
    (**(code **)(*(long *)(lVar25 + 0x1c8) + 0x38))(lVar25 + 0x1c8,param_2);
    local_78 = *(uint *)puVar13;
    local_88 = (char *)0x7f7fffff7f7fffff;
    local_80 = 0xff7fffffff7fffff;
    local_74 = 0x3f80000000000000;
    if (local_78 < 6) {
      if ((1 << (ulong)(local_78 & 0x1f) & 0x39U) == 0) {
        fVar27 = *(float *)(lVar25 + 0x1d0);
        fVar26 = *(float *)(lVar25 + 0x1d4);
      }
      else {
        fVar26 = *(float *)(lVar25 + 0x1d0);
        fVar27 = *(float *)(lVar25 + 0x1d4);
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
    FUN_038e77e4(&local_90,param_2,lVar25 + 0x1c8);
    local_a0 = 0;
    uStack_98 = 0;
    if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar16 != 0)) {
      *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0f98);
    }
    uVar18 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
    if ((uVar18 & 1) == 0) {
      param_2 = (undefined8 *)0x0;
    }
    (**(code **)PTR_DAT_04bcfd90)(param_2[0x17],0,&local_a0,0xf);
  }
  return;
}

