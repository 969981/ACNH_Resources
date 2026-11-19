
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0390ee98(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ushort uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 uVar30;
  undefined4 uVar31;
  undefined *local_60;
  char *pcStack_58;
  
  if (*(int *)(param_1 + 0x18c) != 0) goto LAB_0390f1c4;
  lVar13 = *(long *)(*(long *)(param_1 + 0x160) + 0x10);
  if (((0x29 < (ulong)*(ushort *)(lVar13 + 0x98) - 0x2f) &&
      ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x453) >> 6 & 1) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0x160) + 0x25d0) == 0)) goto LAB_0390f0fc;
  if (3 < *(uint *)(param_1 + 0x168)) {
    lVar13 = *(long *)(param_1 + 0x170);
    goto LAB_0390f0fc;
  }
  lVar14 = *(long *)PTR_DAT_04bbd510;
  switch(*(uint *)(param_1 + 0x168)) {
  case 0:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "cubemap_render_mem1";
    uVar16 = *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x2b4);
    uVar17 = *(ushort *)(lVar13 + 0x30);
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar13 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar13 + -1;
    }
    uVar31 = 0;
    break;
  case 1:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "cubemap_render_mem2";
    uVar16 = *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x2b4);
    uVar17 = *(ushort *)(lVar13 + 0x30);
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar13 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar13 + -1;
    }
    uVar31 = 1;
    break;
  case 2:
    pcStack_58 = "cubemap_render_mem1woC";
    uVar17 = *(ushort *)(lVar13 + 0x30);
    uVar16 = *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x2b4);
    uVar31 = 0;
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    goto LAB_0390f048;
  case 3:
    pcStack_58 = "cubemap_render_mem2woC";
    uVar17 = *(ushort *)(lVar13 + 0x30);
    uVar16 = *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x2b4);
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    uVar31 = 1;
LAB_0390f048:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    uVar30 = 0;
    lVar13 = lVar14 + 0x7c0;
    goto LAB_0390f0ec;
  }
  lVar13 = lVar14 + (long)iVar12 * 0x290 + 0x10;
  uVar30 = 1;
LAB_0390f0ec:
  lVar13 = FUN_03948e10(lVar14,param_2,lVar13,&local_60,uVar16,8,uVar17,uVar17,1,0,1,0,uVar30,uVar31
                        ,0,0);
  *(long *)(param_1 + 0x170) = lVar13;
LAB_0390f0fc:
  (**(code **)(**(long **)(param_1 + 0x150) + 0x28))(*(long **)(param_1 + 0x150),lVar13);
  lVar13 = *(long *)(param_1 + 0x160);
  if ((*(int *)(lVar13 + 0x25f8) == *(int *)(lVar13 + 0x2600)) &&
     ((*(byte *)(lVar13 + 0x2a38) >> 1 & 1) != 0)) {
    lVar14 = *(long *)(lVar13 + 0x10);
    if ((ulong)*(ushort *)(lVar14 + 0x98) - 0x2f < 0x2a) {
      if ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x452) & 1) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(lVar13 + 0x100) * 6;
      }
      FUN_0390bd30(*(undefined8 *)(*(long *)PTR_DAT_04bb31c8 + 0x18),param_2,lVar14,6,
                   *(undefined1 *)(lVar14 + 0x39),iVar12,0,0,0);
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x452) & 1) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(lVar13 + 0x100);
      }
      local_60 = (undefined *)0x0;
      pcStack_58 = (char *)0x3f80000000000000;
      FUN_0391d270(lVar14,param_2,uVar16,&local_60);
    }
  }
LAB_0390f1c4:
  uVar16 = DAT_05ae79f4;
  uVar3 = DAT_05ae7968;
  if (*(uint *)(param_1 + 400) != *(uint *)(param_1 + 0x18c)) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x18c);
    lVar13 = uVar1 * 0x24;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
    uVar11 = DAT_05ae79ec;
    *(undefined2 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar16;
    uVar6 = DAT_05ae7a00;
    uVar5 = DAT_05ae79f8;
    uVar15 = _DAT_05ae796c;
    *(undefined8 *)(param_1 + 0x14) = uRam0000000005ae7974;
    *(undefined8 *)(param_1 + 0xc) = uVar15;
    uVar15 = _DAT_05ae797c;
    *(undefined8 *)(param_1 + 0x24) = uRam0000000005ae7984;
    *(undefined8 *)(param_1 + 0x1c) = uVar15;
    uVar15 = _DAT_05ae798c;
    *(undefined8 *)(param_1 + 0x34) = uRam0000000005ae7994;
    *(undefined8 *)(param_1 + 0x2c) = uVar15;
    uVar4 = uRam0000000005ae79a4;
    uVar2 = _DAT_05ae799c;
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    *(undefined8 *)(param_1 + 0xa0) = uVar6;
    uVar7 = uRam0000000005ae79c4;
    uVar6 = _DAT_05ae79bc;
    uVar5 = uRam0000000005ae79b4;
    uVar15 = _DAT_05ae79ac;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x54) = uVar5;
    *(undefined8 *)(param_1 + 0x4c) = uVar15;
    uVar31 = DAT_05ae7a18;
    uVar16 = DAT_05ae7a14;
    uVar10 = uRam0000000005ae79e4;
    uVar9 = _DAT_05ae79dc;
    uVar8 = uRam0000000005ae79d4;
    uVar5 = _DAT_05ae79cc;
    *(undefined8 *)(param_1 + 100) = uVar7;
    *(undefined8 *)(param_1 + 0x5c) = uVar6;
    fVar21 = *(float *)((long)&DAT_05ae7a50 + lVar13);
    fVar22 = *(float *)((long)&DAT_05ae7a50 + lVar13 + 4);
    uVar15 = *(undefined8 *)((long)&DAT_05ae7a50 + lVar13);
    *(undefined8 *)(param_1 + 0xa8) = DAT_05ae7a08;
    *(undefined8 *)(param_1 + 0x44) = uVar4;
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
    fVar18 = *(float *)(param_1 + 0x178);
    fVar19 = *(float *)(param_1 + 0x17c);
    fVar25 = *(float *)((long)&DAT_05ae7a5c + lVar13 + 4);
    fVar26 = (float)(&DAT_05ae7a64)[uVar1 * 9];
    *(undefined4 *)(param_1 + 0xb4) = uVar16;
    *(undefined4 *)(param_1 + 0xb8) = uVar31;
    *(undefined8 *)(param_1 + 0x74) = uVar8;
    *(undefined8 *)(param_1 + 0x6c) = uVar5;
    fVar23 = (float)(&DAT_05ae7a58)[uVar1 * 9];
    fVar24 = *(float *)((long)&DAT_05ae7a5c + lVar13);
    fVar28 = *(float *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x8c) = uVar11;
    fVar27 = *(float *)((long)&DAT_05ae7a68 + lVar13);
    fVar29 = *(float *)((long)&DAT_05ae7a68 + lVar13 + 4);
    uVar2 = *(undefined8 *)((long)&DAT_05ae7a68 + lVar13);
    *(undefined8 *)(param_1 + 0x84) = uVar10;
    *(undefined8 *)(param_1 + 0x7c) = uVar9;
    fVar20 = (float)(&DAT_05ae7a70)[uVar1 * 9];
    *(undefined1 *)(param_1 + 8) = 1;
    *(ulong *)(param_1 + 0x100) =
         CONCAT44(-(fVar23 * fVar28) - (fVar22 * fVar19 + fVar18 * fVar21),fVar23);
    *(undefined8 *)(param_1 + 0xf8) = uVar15;
    *(ulong *)(param_1 + 0x110) =
         CONCAT44(-(fVar26 * fVar28) - (fVar25 * fVar19 + fVar18 * fVar24),fVar26);
    *(ulong *)(param_1 + 0x108) = CONCAT44(fVar25,fVar24);
    *(ulong *)(param_1 + 0x120) =
         CONCAT44(-(fVar20 * fVar28) - (fVar29 * fVar19 + fVar18 * fVar27),fVar20);
    *(undefined8 *)(param_1 + 0x118) = uVar2;
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))((long *)(param_1 + 0xc0),param_1 + 200);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x18c);
  }
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x150) + 0x10);
  FUN_0391c428(uVar15,param_2,*(uint *)(*(long *)(param_1 + 0x1a0) + 0x450) & 1,1);
  if ((*(long *)(param_1 + 0x170) == 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x452) & 1) != 0)) {
    uVar16 = *(undefined4 *)(*(long *)(param_1 + 0x160) + 0x100);
  }
  else {
    uVar16 = 0;
  }
  FUN_0391c654(uVar15,param_2,uVar16,*(undefined4 *)(param_1 + 0x18c),param_3);
  lVar13 = *(long *)(*(long *)(param_1 + 0x150) + 0x10);
  if (*(uint *)(param_1 + 0x140) < 6) {
    if ((1 << (ulong)(*(uint *)(param_1 + 0x140) & 0x1f) & 0x39U) == 0) {
      fVar18 = *(float *)(lVar13 + 0x334);
      fVar19 = *(float *)(lVar13 + 0x330);
    }
    else {
      fVar18 = *(float *)(lVar13 + 0x330);
      fVar19 = *(float *)(lVar13 + 0x334);
    }
    fVar21 = fVar18;
    fVar20 = 0.0;
    if (fVar18 <= 0.0) {
      fVar21 = 0.0;
      fVar20 = fVar18;
    }
    *(float *)(param_1 + 0x130) = fVar20;
    *(float *)(param_1 + 0x138) = fVar21;
    fVar20 = fVar19;
    fVar18 = 0.0;
    if (fVar19 <= 0.0) {
      fVar20 = 0.0;
      fVar18 = fVar19;
    }
    *(float *)(param_1 + 0x134) = fVar18;
    *(float *)(param_1 + 0x13c) = fVar20;
    lVar13 = *(long *)(*(long *)(param_1 + 0x150) + 0x10);
  }
  FUN_038e77e4(param_1 + 0x128,param_2,lVar13 + 0x328);
  return;
}

