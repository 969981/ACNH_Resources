
void FUN_0173fac4(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_90;
  char *pcStack_88;
  
  puVar13 = *(undefined2 **)(param_2 + 0xd0);
  *(undefined2 *)(param_1 + 0x27c) = *puVar13;
  *(undefined1 *)(param_1 + 0x27e) = *(undefined1 *)(puVar13 + 1);
  *(undefined1 *)(param_1 + 0x27f) = *(undefined1 *)((long)puVar13 + 3);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(puVar13 + 2);
  puVar5 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar11 = malloc(0x438);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x438,8);
  }
  puVar3 = PTR_DAT_04bb2020;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = PTR_DAT_04bb2f90 + 0x31;
  FUN_006fc0d0(pvVar11,&local_90,PTR_DAT_04bb2f80);
  FUN_006f9fc0(param_1,pvVar11,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar10 = malloc(0x2a8);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_0173fc18;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2a8,8);
  }
LAB_0173fc18:
  FUN_00705c50(plVar10);
  *(undefined4 *)(plVar10 + 0x51) = 0;
  puVar1 = PTR_DAT_04bb35d0;
  pcVar16 = (char *)plVar10[0xc];
  *(undefined4 *)(plVar10 + 0x52) = 0;
  plVar10[0x53] = 0;
  *(undefined2 *)(plVar10 + 0x54) = 0;
  plVar10[0x50] = (long)(plVar10 + 0x4f);
  plVar10[0x4f] = (long)(plVar10 + 0x4f);
  *plVar10 = (long)(puVar1 + 0x10);
  if (pcVar16 != "ModelResLoader") {
    iVar8 = 0xe;
    if ((int)plVar10[0xd] < 0xf) {
      iVar8 = (int)plVar10[0xd] + -1;
    }
    memcpy(pcVar16,"ModelResLoader",(long)iVar8);
    pcVar16[iVar8] = '\0';
  }
  *(undefined4 *)((long)plVar10 + 0x28c) = 8;
  *(uint *)(plVar10 + 0x4c) = *(uint *)(plVar10 + 0x4c) & 0xfffffff0 | 1;
  FUN_006f9fc0(param_1,plVar10,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar10 = malloc(0x2e0);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_0173fd18;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2e0,8);
  }
LAB_0173fd18:
  FUN_00705c50(plVar10);
  plVar10[0x4f] = 0;
  puVar1 = PTR_DAT_04bb3300;
  plVar10[0x50] = 0;
  plVar10[0x53] = -0x100000000;
  plVar10[0x52] = (long)(plVar10 + 0x51);
  plVar10[0x51] = (long)(plVar10 + 0x51);
  *plVar10 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar10 + 0x54);
  pcVar16 = (char *)plVar10[0xc];
  if (pcVar16 != "Family") {
    iVar8 = 6;
    if ((int)plVar10[0xd] < 7) {
      iVar8 = (int)plVar10[0xd] + -1;
    }
    memcpy(pcVar16,"Family",(long)iVar8);
    pcVar16[iVar8] = '\0';
  }
  *(uint *)(plVar10 + 0x4c) = *(uint *)(plVar10 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar10 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar10,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar10 = malloc(0x300);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_0173fe1c;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x300,8);
  }
LAB_0173fe1c:
  FUN_00705c50(plVar10);
  plVar10[0x50] = 0xffffffff;
  puVar1 = PTR_DAT_04bb38d8;
  plVar10[0x51] = 0xffffffff;
  plVar10[0x52] = 0xffffffff;
  puVar6 = PTR_DAT_04bd4738;
  pcVar16 = (char *)plVar10[0xc];
  *(undefined2 *)(plVar10 + 0x53) = 0;
  *(undefined4 *)(plVar10 + 0x54) = 0;
  plVar10[0x55] = 0;
  *(undefined4 *)(plVar10 + 0x56) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[0x57] = 0;
  plVar10[0x4f] = (long)(puVar6 + 0x10);
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  plVar10[0x58] = (long)puVar1;
  plVar10[0x5c] = (long)puVar1;
  if (pcVar16 != "StateMachine") {
    iVar8 = 0xc;
    if ((int)plVar10[0xd] < 0xd) {
      iVar8 = (int)plVar10[0xd] + -1;
    }
    memcpy(pcVar16,"StateMachine",(long)iVar8);
    pcVar16[iVar8] = '\0';
  }
  *(uint *)(plVar10 + 0x4c) = *(uint *)(plVar10 + 0x4c) & 0xfffffff0 | 2;
  FUN_006f9fc0(param_1,plVar10,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar10 = malloc(0x308);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_0173ff40;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x308,8);
  }
LAB_0173ff40:
  FUN_00705c50(plVar10);
  puVar1 = PTR_DAT_04bdf1d8;
  pcVar16 = (char *)plVar10[0xc];
  *(undefined1 *)(plVar10 + 0x55) = 0;
  plVar10[0x56] = 0;
  plVar10[0x58] = 0;
  plVar10[0x59] = 0;
  plVar10[0x5a] = 0;
  plVar10[0x57] = (long)(puVar1 + 0x10);
  if (pcVar16 != "XLink") {
    iVar8 = 5;
    if ((int)plVar10[0xd] < 6) {
      iVar8 = (int)plVar10[0xd] + -1;
    }
    memcpy(pcVar16,"XLink",(long)iVar8);
    pcVar16[iVar8] = '\0';
  }
  *(undefined1 *)(plVar10 + 0x5c) = 0;
  puVar1 = PTR_DAT_04bb3d88;
  *(undefined1 *)(plVar10 + 0x5e) = 1;
  *plVar10 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb3d90;
  plVar10[0x5d] = 0;
  *(undefined4 *)((long)plVar10 + 0x2f4) = 0;
  *(undefined1 *)(plVar10 + 0x5f) = 0;
  *(undefined8 *)((long)plVar10 + 0x2fc) = 0;
  plVar10[0x5b] = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)plVar10 + 0x304) = 0xff;
  FUN_006f9fc0(param_1,plVar10,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    pvVar11 = malloc(0x12a8);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x12a8,8);
  }
  FUN_017518f4(pvVar11,param_1 + 0x27c);
  FUN_006f9fc0(param_1,pvVar11,0xffffffff);
  if (param_3 == (long *)0x0) {
    lVar15 = 1;
    lVar9 = *(long *)(param_1 + 0x70);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)(lVar9 + 0xa8);
    *(long **)(lVar9 + 0xa8) = param_3;
    lVar9 = *(long *)(param_1 + 0x70);
  }
  if (lVar9 != 0) {
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    FUN_03ebac90(lVar9 + 0x278,0xb,0,0,0);
  }
  lVar2 = lVar9 + 0x278;
  puVar3 = puVar3 + 0x10;
  pcStack_88 = "State::cWait";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,0,&local_90);
  puVar14 = *(undefined8 **)(lVar9 + 0x2a8);
  puVar14[2] = &LAB_01740690;
  puVar14[3] = 0;
  puVar14[4] = &LAB_0174069c;
  puVar14[5] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[6] = &LAB_017408dc;
  puVar14[7] = 0;
  pcStack_88 = "State::cBackSwing";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,1,&local_90);
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + (ulong)(1 < *(uint *)(lVar9 + 0x2a0)) * 0x40);
  puVar14[4] = &LAB_01740970;
  puVar14[5] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[2] = &LAB_01740964;
  puVar14[3] = 0;
  puVar14[6] = &LAB_01740980;
  puVar14[7] = 0;
  pcStack_88 = "State::cCasting";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,2,&local_90);
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + (ulong)(2 < *(uint *)(lVar9 + 0x2a0)) * 0x80);
  puVar14[4] = &LAB_01740998;
  puVar14[5] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[2] = &LAB_01740984;
  puVar14[3] = 0;
  puVar14[6] = &LAB_01740e08;
  puVar14[7] = 0;
  pcStack_88 = "State::cDrift";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,3,&local_90);
  lVar4 = 0xc0;
  if (*(uint *)(lVar9 + 0x2a0) < 4) {
    lVar4 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + lVar4);
  puVar14[2] = &LAB_01740e0c;
  puVar14[3] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[4] = &LAB_01740e18;
  puVar14[5] = 0;
  puVar14[6] = &LAB_017410d0;
  puVar14[7] = 0;
  pcStack_88 = "State::cFall";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,4,&local_90);
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + (ulong)(4 < *(uint *)(lVar9 + 0x2a0)) * 0x100)
  ;
  puVar14[4] = &LAB_017410e4;
  puVar14[5] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[2] = &LAB_017410d4;
  puVar14[3] = 0;
  puVar14[6] = &LAB_01741484;
  puVar14[7] = 0;
  pcStack_88 = "State::cPick";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,5,&local_90);
  lVar4 = 0x140;
  if (*(uint *)(lVar9 + 0x2a0) < 6) {
    lVar4 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + lVar4);
  puVar14[2] = &LAB_01741488;
  puVar14[3] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[4] = &LAB_01741494;
  puVar14[5] = 0;
  puVar14[6] = &LAB_017414a4;
  puVar14[7] = 0;
  pcStack_88 = "State::cHit";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,6,&local_90);
  lVar4 = 0x180;
  if (*(uint *)(lVar9 + 0x2a0) < 7) {
    lVar4 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + lVar4);
  puVar14[2] = &LAB_017414a8;
  puVar14[3] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[4] = &LAB_01741614;
  puVar14[5] = 0;
  puVar14[6] = &LAB_0174178c;
  puVar14[7] = 0;
  pcStack_88 = "State::cFight";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,7,&local_90);
  lVar4 = 0x1c0;
  if (*(uint *)(lVar9 + 0x2a0) < 8) {
    lVar4 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + lVar4);
  puVar14[2] = &LAB_01741790;
  puVar14[3] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[4] = &LAB_0174179c;
  puVar14[5] = 0;
  puVar14[6] = &LAB_01741b2c;
  puVar14[7] = 0;
  pcStack_88 = "State::cBack";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,8,&local_90);
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + (ulong)(8 < *(uint *)(lVar9 + 0x2a0)) * 0x200)
  ;
  puVar14[4] = &LAB_01741e20;
  puVar14[5] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[2] = &LAB_01741b30;
  puVar14[3] = 0;
  puVar14[6] = &LAB_017422b0;
  puVar14[7] = 0;
  pcStack_88 = "State::cCatch";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,9,&local_90);
  lVar4 = 0x240;
  if (*(uint *)(lVar9 + 0x2a0) < 10) {
    lVar4 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + lVar4);
  puVar14[2] = &LAB_017422b4;
  puVar14[3] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[4] = &LAB_0174275c;
  puVar14[5] = 0;
  puVar14[6] = &LAB_01742bd4;
  puVar14[7] = 0;
  pcStack_88 = "State::cCastingFail";
  local_90 = puVar3;
  FUN_03ebaf40(lVar2,10,&local_90);
  lVar2 = 0x280;
  if (*(uint *)(lVar9 + 0x2a0) < 0xb) {
    lVar2 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x2a8) + lVar2);
  puVar14[2] = &LAB_01742bd8;
  puVar14[3] = 0;
  *puVar14 = &PTR_LAB_049c1148;
  puVar14[1] = param_1;
  puVar14[4] = &LAB_01742be0;
  puVar14[5] = 0;
  puVar14[6] = &LAB_01742bf0;
  puVar14[7] = 0;
  fVar21 = (float)DAT_04c483a8 * 0.017453292;
  fVar22 = DAT_04c483a8._4_4_ * 0.017453292;
  fVar23 = DAT_04c483b0 * 0.017453292;
  fVar17 = sinf(fVar21);
  fVar18 = sinf(fVar22);
  fVar19 = sinf(fVar23);
  fVar21 = cosf(fVar21);
  fVar22 = cosf(fVar22);
  fVar23 = cosf(fVar23);
  plVar10 = *(long **)(param_1 + 0x68);
  *(float *)(param_1 + 0x2a8) = -fVar18;
  *(float *)(param_1 + 0x298) = fVar19 * fVar22;
  *(float *)(param_1 + 0x2b0) = fVar21 * fVar22;
  *(float *)(param_1 + 0x288) = fVar22 * fVar23;
  *(float *)(param_1 + 0x2ac) = fVar17 * fVar22;
  uVar7 = (undefined4)DAT_04c483b4;
  *(undefined4 *)(param_1 + 0x2a4) = DAT_04c483b4._4_4_;
  *(undefined4 *)(param_1 + 0x294) = uVar7;
  *(float *)(param_1 + 0x28c) = fVar17 * fVar18 * fVar23 - fVar19 * fVar21;
  uVar7 = DAT_04c483bc;
  *(float *)(param_1 + 0x29c) = fVar21 * fVar23 + fVar19 * fVar17 * fVar18;
  *(float *)(param_1 + 0x2a0) = -(fVar17 * fVar23) + fVar18 * fVar19 * fVar21;
  *(float *)(param_1 + 0x290) = fVar17 * fVar19 + fVar18 * fVar21 * fVar23;
  *(undefined4 *)(param_1 + 0x2b4) = uVar7;
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2f68);
    }
    uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bb2f60);
    if ((uVar12 & 1) != 0) {
      *(undefined1 *)(plVar10 + 0x76) = 0;
      uVar20 = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)((long)plVar10 + 0x34c) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)((long)plVar10 + 0x344) = uVar20;
      uVar20 = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)((long)plVar10 + 0x35c) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined8 *)((long)plVar10 + 0x354) = uVar20;
      uVar20 = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)((long)plVar10 + 0x36c) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)((long)plVar10 + 0x364) = uVar20;
    }
  }
  if (lVar15 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar15;
  }
  return;
}

