
void FUN_03b2c7ac(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  undefined8 local_1dc;
  undefined *local_1d0;
  char *local_1c8;
  long lStack_1c0;
  undefined1 auStack_180 [138];
  short local_f6;
  uint local_f0;
  uint local_ec;
  int local_7c;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    return;
  }
  lVar14 = *(long *)(param_2 + 0x1a0);
  if (lVar14 == 0) {
    return;
  }
  lVar13 = param_1 + 0x120;
  lVar8 = FUN_03b2e5d0(param_1,param_2,(byte *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),
                       lVar13,param_1 + 0x188,*(undefined8 *)(param_1 + 0xf0),param_3);
  *(long *)(param_1 + 0x118) = lVar8;
  if (lVar8 == 0) {
    return;
  }
  lVar8 = FUN_0037e610(param_1,"CaptureScale");
  if (lVar8 == 0) goto LAB_03b2cc0c;
  fVar19 = *(float *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
  lVar16 = *(long *)PTR_DAT_04bbd510;
  fVar22 = fVar19 * *(float *)(param_1 + 0x50);
  fVar19 = fVar19 * *(float *)(param_1 + 0x54);
  uVar18 = *(undefined8 *)(lVar14 + 0x20);
  local_1d0 = PTR_DAT_04bb2020 + 0x10;
  local_1c8 = "DynamicCaptureScaled";
  uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x118) + 0x98);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar8 == 0) {
    local_f0 = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_f0 = (int)lVar8 - 1;
  }
  uVar18 = FUN_03948e10(lVar16,uVar18,lVar16 + (long)(int)local_f0 * 0x290 + 0x10,&local_1d0,uVar2,1
                        ,(int)fVar22,(int)fVar19,1,0,1,0,1,0,0,0);
  FUN_01560750(param_1 + 0x188,uVar18,*(undefined1 *)(param_1 + 0x246),
               *(undefined2 *)(param_1 + 0x244));
  *(float *)(param_1 + 0x128) = fVar22;
  *(float *)(param_1 + 300) = fVar19;
  fVar21 = fVar22;
  fVar5 = 0.0;
  if (fVar22 <= 0.0) {
    fVar21 = 0.0;
    fVar5 = fVar22;
  }
  fVar22 = 0.0;
  if (fVar19 <= 0.0) {
    fVar22 = fVar19;
  }
  *(float *)(param_1 + 0x130) = fVar5;
  *(float *)(param_1 + 0x138) = fVar21;
  *(float *)(param_1 + 0x134) = fVar22;
  *(float *)(param_1 + 0x13c) = fVar19;
  (**(code **)(*(long *)(param_1 + 0x120) + 0x38))(lVar13,*(undefined8 *)(lVar14 + 0x20));
  FUN_038e4cec(&local_f0);
  local_f0 = local_f0 & 0xffffff00;
  local_ec = local_ec & 0xfffffffe;
  FUN_038e4d90(&local_f0,*(undefined8 *)(lVar14 + 0x20));
  FUN_0390d120(&local_1d0,*(undefined8 *)(param_1 + 0x118));
  puVar6 = PTR_DAT_04bbd510;
  local_1e8 = 0xff7fffffff7fffff;
  local_1f8 = PTR_DAT_04bd0f08 + 0x10;
  local_1f0 = 0x7f7fffff7f7fffff;
  local_1e0 = *(uint *)PTR_DAT_04bd0ea8;
  local_1dc = 0x3f80000000000000;
  if (local_1e0 < 6) {
    if ((1 << (ulong)(local_1e0 & 0x1f) & 0x39U) == 0) {
      fVar19 = *(float *)(param_1 + 300);
      fVar22 = *(float *)(param_1 + 0x128);
    }
    else {
      fVar19 = *(float *)(param_1 + 0x128);
      fVar22 = *(float *)(param_1 + 300);
    }
    fVar21 = fVar19;
    fVar5 = 0.0;
    if (fVar19 <= 0.0) {
      fVar21 = 0.0;
      fVar5 = fVar19;
    }
    fVar20 = fVar22;
    fVar19 = 0.0;
    if (fVar22 <= 0.0) {
      fVar20 = 0.0;
      fVar19 = fVar22;
    }
    local_1f0 = CONCAT44(fVar19,fVar5);
    local_1e8 = CONCAT44(fVar20,fVar21);
  }
  FUN_038e77e4(&local_1f8,*(undefined8 *)(lVar14 + 0x20),lVar13);
  uVar15 = *(undefined8 *)(lVar14 + 0x20);
  uVar17 = *(undefined8 *)
            (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x28);
  FUN_03907810(uVar17,uVar15);
  FUN_0394a420(uVar15,uVar17,&local_1d0);
  puVar7 = PTR_DAT_04bc1010;
  uVar1 = *(uint *)(param_1 + 0x1e0);
  if (uVar1 != 0xffffffff) {
    lVar13 = *(long *)PTR_DAT_04bc1010;
    lVar8 = *(long *)(lVar14 + 0x20);
    if ((*(uint *)(lVar13 + 0x5c8) >> 3 & 1) == 0) {
      uVar4 = uVar1 - *(ushort *)(lVar13 + 0x3da);
      if (*(uint *)(lVar13 + 0x368) <= uVar4) {
        uVar4 = 0;
      }
      if ((*(uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar4 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar8 + 0x100) = *(ulong *)(lVar8 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
        goto LAB_03b2cb10;
      }
    }
    if ((*(uint *)(lVar13 + 0x5c8) >> 5 & 1) == 0) {
      uVar11 = 0x112;
      uVar12 = 0x12;
    }
    else {
      uVar11 = 0x111;
      uVar12 = 0x11;
    }
    if ((*(uint *)(lVar13 + 800) & 2) != 0) {
      uVar12 = uVar11;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar8 + 0xb8),uVar12);
    *(undefined8 *)(lVar8 + 0x100) = 0;
  }
LAB_03b2cb10:
  lVar13 = *(long *)(param_1 + 0xf8);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x570) == 0)) {
    FUN_039499cc(*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x118));
  }
  else {
    if ((*(byte *)(lVar13 + 0x7b8) & 1) == 0) {
      FUN_039499cc(*(undefined8 *)puVar6);
    }
    *(undefined8 *)(lVar13 + 0x570) = 0;
    lVar16 = *(long *)puVar6;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar8 == 0) {
      local_7c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_7c = (int)lVar8 + -1;
    }
    *(byte *)(lVar13 + 0x7b8) =
         *(byte *)(lVar13 + 0x7b8) & 0xfe | *(byte *)(lVar16 + (long)local_7c * 0x290 + 0x298) & 1;
  }
  *(undefined8 *)(param_1 + 0x118) = uVar18;
  if (local_f6 != -1) {
    lVar13 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar13 + 0x580));
    uVar1 = (int)local_f6 - (uint)*(ushort *)(lVar13 + 0x5c0);
    if (*(uint *)(lVar13 + 0x5a0) <= uVar1) {
      uVar1 = 0;
    }
    lVar8 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar1 * 0x80;
    sVar3 = *(short *)(lVar8 + 0x76) + -1;
    *(short *)(lVar8 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar13 + 0x580));
    local_f6 = -1;
  }
  FUN_038fd0e0(auStack_180);
LAB_03b2cc0c:
  if ((*(byte *)(param_1 + 0xe8) >> 3 & 1) != 0) {
    plVar10 = *(long **)(param_1 + 0x118);
    *(uint *)((long)plVar10 + 0x4a) = *(uint3 *)((long)plVar10 + 0x4a) | 0x1000000;
    if ((*(byte *)((long)plVar10 + 0x4e) >> 1 & 1) == 0) {
      bVar9 = false;
    }
    else {
      bVar9 = 0x11 < *(ushort *)(plVar10 + 0x13) && *(ushort *)(plVar10 + 0x13) - 0x59 < 0xffffffd6;
    }
    local_1d0 = (undefined *)*plVar10;
    local_1c8 = (char *)plVar10[1];
    lStack_1c0 = plVar10[2];
    FUN_038fd3e0(plVar10 + 10,&local_1d0,plVar10 + 6,0,plVar10[0x12],bVar9,0);
  }
  FUN_03b137d0(param_1 + 0x100,*(undefined8 *)(param_1 + 0x118),0);
  plVar10 = (long *)(param_1 + 0xd8);
  lVar13 = *plVar10;
  *plVar10 = *(long *)(param_2 + 0x1a8);
  *(long *)(lVar13 + 8) = param_2 + 0x1a8;
  *(long **)(*(long *)(param_2 + 0x1a8) + 8) = plVar10;
  *(long *)(param_2 + 0x1a8) = lVar13;
  FUN_03b2c1e4(lVar14);
  FUN_00365038(param_2);
  return;
}

