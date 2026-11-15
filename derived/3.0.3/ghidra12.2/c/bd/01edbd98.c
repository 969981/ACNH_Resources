
/* WARNING: Removing unreachable block (ram,0x01edbf50) */
/* WARNING: Removing unreachable block (ram,0x01edbf60) */

void FUN_01edbd98(long *param_1,long param_2,int *param_3,long param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  int local_68;
  
  puVar14 = PTR_DAT_04bb5ce0;
  puVar13 = PTR_DAT_04bb2010;
  local_68 = *param_3;
  sVar10 = *(short *)PTR_DAT_04bb6298;
  if (sVar10 != -1) {
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < (uint)(int)sVar10) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar6 >> 1 & 1) != 0) && (local_68 == 0)) {
      local_68 = 1;
    }
  }
  lVar20 = *(long *)(param_2 + 8);
  lVar21 = *(long *)(lVar20 + 0x68);
  if (lVar21 == 0) {
    uVar8 = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
    *(undefined4 *)((long)param_1 + 0xc) = uVar8;
    *param_1 = (long)(puVar13 + 0x10);
    return;
  }
  fVar32 = *(float *)(lVar21 + 0x278) + 2.5;
  fVar31 = *(float *)(lVar21 + 0x280) + 2.5;
  uVar1 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0) & 0xffff;
  uVar2 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0) & 0xffff;
  if (local_68 == 4) {
    fVar31 = *(float *)(param_2 + 0xae64);
    fVar32 = *(float *)(param_2 + 0xae6c);
LAB_01edbefc:
    uVar29 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
    uVar30 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
  }
  else {
    if (local_68 == 3) {
      fVar31 = *(float *)(lVar20 + 0x160);
      fVar32 = *(float *)(lVar20 + 0x168);
      goto LAB_01edbefc;
    }
    uVar29 = uVar1;
    uVar30 = uVar2;
    if (local_68 == 2) {
      uVar29 = *(uint *)(param_4 + 8);
      uVar30 = *(uint *)(param_4 + 0xc);
    }
  }
  lVar20 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  uVar18 = (uint)sVar10;
  if ((uVar18 != 0xffffffff) && (*(long *)PTR_DAT_04bb5ce0 != 0)) {
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < uVar18) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 6 & 1) == 0) {
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar18 * 8);
      if (0xff < (uint)(int)sVar10) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 >> 7 & 1) == 0) goto LAB_01edc000;
    }
LAB_01edc114:
    lVar20 = *(long *)puVar14;
    if (lVar20 == 0) {
      iVar19 = 0;
      iVar22 = 0x10;
      iVar15 = 0x10;
LAB_01edc148:
      uVar18 = 0;
    }
    else {
      iVar19 = *(int *)(lVar20 + 0xd8c);
      iVar15 = *(int *)(lVar20 + 0xd98);
      iVar22 = *(int *)(lVar20 + 0xd9c);
      if (*(int *)(lVar20 + 0xd88) < 8) goto LAB_01edc148;
      uVar18 = *(int *)(lVar20 + 0xd88) - 8;
    }
    uVar26 = iVar15 + 8;
    uVar24 = iVar22 + 8;
    uVar25 = 0;
    if (7 < iVar19) {
      uVar25 = iVar19 - 8;
    }
    if (param_5 < uVar26 - uVar18) {
      lVar20 = *(long *)(param_2 + 8);
      uVar18 = *(uint *)(lVar20 + 0x288);
      *(undefined4 *)(lVar20 + 0x288) = *(undefined4 *)(lVar20 + 0x28c);
      uVar18 = uVar18 ^ uVar18 << 0xb;
      *(undefined4 *)(lVar20 + 0x28c) = *(undefined4 *)(lVar20 + 0x290);
      uVar26 = *(uint *)(lVar20 + 0x294);
      *(uint *)(lVar20 + 0x290) = uVar26;
      uVar26 = uVar18 >> 8 ^ uVar26 >> 0x13 ^ uVar18 ^ uVar26;
      *(uint *)(lVar20 + 0x294) = uVar26;
      uVar26 = uVar26 & 1;
      uVar23 = (param_5 ^ 0xffffffff) & 1;
      uVar18 = (uVar29 - (param_5 >> 1)) + uVar26 * uVar23;
      uVar26 = uVar29 + (param_5 >> 1) + (uVar26 - 1) * uVar23;
    }
    if (param_6 < uVar24 - uVar25) {
      lVar20 = *(long *)(param_2 + 8);
      uVar29 = *(uint *)(lVar20 + 0x288);
      *(undefined4 *)(lVar20 + 0x288) = *(undefined4 *)(lVar20 + 0x28c);
      uVar29 = uVar29 ^ uVar29 << 0xb;
      *(undefined4 *)(lVar20 + 0x28c) = *(undefined4 *)(lVar20 + 0x290);
      uVar24 = *(uint *)(lVar20 + 0x294);
      *(uint *)(lVar20 + 0x290) = uVar24;
      uVar29 = uVar29 >> 8 ^ uVar24 >> 0x13 ^ uVar29 ^ uVar24;
      *(uint *)(lVar20 + 0x294) = uVar29;
      uVar29 = uVar29 & 1;
      uVar24 = (param_6 ^ 0xffffffff) & 1;
      uVar25 = (uVar30 - (param_6 >> 1)) + uVar29 * uVar24;
      uVar24 = uVar30 + (param_6 >> 1) + (uVar29 - 1) * uVar24;
    }
    *(short *)(param_2 + 0x18c) = (short)uVar18;
    *(short *)(param_2 + 400) = (short)uVar26;
    uVar3 = (short)uVar18;
    if ((uVar26 & 0xffff) <= (uVar18 & 0xffff)) {
      uVar3 = (short)uVar26;
    }
    *(short *)(param_2 + 0x18e) = (short)uVar25;
    *(short *)(param_2 + 0x192) = (short)uVar24;
    *(undefined2 *)(param_2 + 0x188) = uVar3;
    puVar13 = PTR_DAT_04bb2010;
    uVar3 = (short)uVar25;
    if ((uVar24 & 0xffff) <= (uVar25 & 0xffff)) {
      uVar3 = (short)uVar24;
    }
    *(undefined2 *)(param_2 + 0x18a) = uVar3;
    *param_1 = (long)(puVar13 + 0x10);
    goto LAB_01edc274;
  }
LAB_01edc000:
  uVar16 = FUN_0180b7a0();
  puVar13 = PTR_DAT_04bb2720;
  if ((uVar16 & 1) != 0) {
LAB_01edc0a0:
    sVar10 = *(short *)PTR_DAT_04bb6298;
    if (sVar10 != -1) {
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
      if (0xff < (uint)(int)sVar10) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 >> 0x13 & 1) != 0) goto LAB_01edc0f0;
    }
    goto LAB_01edc114;
  }
  lVar21 = *(long *)PTR_DAT_04bb2720;
  iVar19 = 0;
  if (lVar21 != 0) {
    if (*(long *)(lVar21 + 0x330) == 0) {
      iVar19 = 0;
    }
    else {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
      iVar15 = FUN_006bd550(*puVar17,0);
      iVar19 = 0;
      if (iVar15 == 0x758f7eaf) {
        iVar19 = 0;
        if (*(long *)puVar13 != 0) {
          lVar21 = *(long *)(*(long *)puVar13 + 0x330);
          iVar19 = 0;
          if (lVar21 != 0) {
            iVar19 = *(int *)(lVar21 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) == iVar19) goto LAB_01edc0a0;
LAB_01edc0f0:
  uVar18 = *(uint *)(lVar20 + 0x20);
  if (((int)uVar29 < (int)*(uint *)(lVar20 + 0x20)) ||
     (uVar18 = *(uint *)(lVar20 + 0x30), (int)*(uint *)(lVar20 + 0x30) < (int)uVar29)) {
    uVar29 = uVar18;
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  uVar18 = *(uint *)(lVar20 + 0x24);
  if (((int)uVar30 < (int)*(uint *)(lVar20 + 0x24)) ||
     (uVar18 = *(uint *)(lVar20 + 0x34), (int)*(uint *)(lVar20 + 0x34) < (int)uVar30)) {
    uVar30 = uVar18;
    bVar12 = true;
  }
  if (local_68 == 5) {
    lVar21 = *(long *)PTR_DAT_04bb5c90;
    uVar24 = *(uint *)(lVar21 + 0x28);
    uVar26 = *(int *)(lVar21 + 0x2c) + 10;
    uVar25 = *(uint *)(lVar21 + 0x38);
    uVar18 = *(uint *)(lVar21 + 0x3c);
    goto switchD_01edc3e0_default;
  }
  if (local_68 == 0) {
    uVar24 = 0;
    if (param_5 != 0) {
      uVar24 = uVar29 / param_5;
    }
    uVar24 = uVar24 * param_5;
    uVar25 = (param_5 + uVar24) - 1;
    uVar23 = 0;
    if (param_6 != 0) {
      uVar23 = uVar30 / param_6;
    }
    uVar23 = uVar23 * param_6;
LAB_01edc2e8:
    uVar26 = uVar23;
    uVar18 = (param_6 + uVar23) - 1;
    goto switchD_01edc3e0_default;
  }
  lVar21 = *(long *)(param_2 + 8);
  uVar26 = *(uint *)(lVar21 + 0x294);
  uVar18 = *(uint *)(lVar21 + 0x288) ^ *(uint *)(lVar21 + 0x288) << 0xb;
  *(undefined4 *)(lVar21 + 0x288) = *(undefined4 *)(lVar21 + 0x28c);
  *(undefined4 *)(lVar21 + 0x28c) = *(undefined4 *)(lVar21 + 0x290);
  *(uint *)(lVar21 + 0x290) = uVar26;
  uVar18 = uVar18 >> 8 ^ uVar26 >> 0x13 ^ uVar18 ^ uVar26;
  *(uint *)(lVar21 + 0x294) = uVar18;
  uVar18 = uVar18 & 1;
  lVar21 = *(long *)(param_2 + 8);
  uVar25 = *(uint *)(lVar21 + 0x294);
  uVar24 = *(uint *)(lVar21 + 0x288) ^ *(uint *)(lVar21 + 0x288) << 0xb;
  *(undefined4 *)(lVar21 + 0x288) = *(undefined4 *)(lVar21 + 0x28c);
  *(undefined4 *)(lVar21 + 0x28c) = *(undefined4 *)(lVar21 + 0x290);
  uVar26 = (param_5 ^ 0xffffffff) & 1;
  *(uint *)(lVar21 + 0x290) = uVar25;
  uVar24 = uVar24 >> 8 ^ uVar25 >> 0x13 ^ uVar24 ^ uVar25;
  uVar23 = uVar24 & 1;
  *(uint *)(lVar21 + 0x294) = uVar24;
  uVar24 = (uVar29 - (param_5 >> 1)) + uVar18 * uVar26;
  uVar27 = (param_6 ^ 0xffffffff) & 1;
  uVar25 = uVar29 + (param_5 >> 1) + (uVar18 - 1) * uVar26;
  uVar26 = (uVar30 - (param_6 >> 1)) + uVar23 * uVar27;
  uVar27 = uVar30 + (param_6 >> 1) + (uVar23 - 1) * uVar27;
  uVar18 = uVar27;
  uVar23 = uVar26;
  switch(local_68) {
  case 6:
    lVar21 = *(long *)PTR_DAT_04bb5c90;
    uVar23 = *(int *)(lVar21 + 0x38) + 0x14;
    uVar18 = *(int *)(lVar21 + 0x3c) + 0x14;
    if ((int)uVar23 < (int)uVar25) {
      uVar24 = (*(int *)(lVar21 + 0x38) - param_5) + 0x15;
      uVar25 = uVar23;
    }
    else {
      uVar23 = *(int *)(lVar21 + 0x28) - 0x14;
      if ((int)uVar24 < (int)uVar23) {
        uVar25 = (param_5 + uVar23) - 1;
        uVar24 = uVar23;
      }
    }
    if ((int)uVar18 < (int)uVar27) {
      uVar26 = (*(int *)(lVar21 + 0x3c) - param_6) + 0x15;
    }
    else {
      uVar23 = *(int *)(lVar21 + 0x2c) - 0x14;
LAB_01edc5a4:
      uVar18 = uVar27;
      if ((int)uVar26 < (int)uVar23) goto LAB_01edc2e8;
    }
    break;
  case 7:
    lVar21 = *(long *)PTR_DAT_04bb5c90;
    uVar7 = *(uint *)(lVar21 + 0x28);
    uVar28 = *(int *)(lVar21 + 0x2c) + 6;
    uVar9 = *(uint *)(lVar21 + 0x3c);
    uVar11 = *(int *)(lVar21 + 0x38) - 6;
    if ((int)uVar26 <= (int)uVar28) {
      uVar23 = uVar28;
    }
    uVar18 = uVar9;
    if ((int)uVar28 <= (int)uVar26 && (int)uVar27 <= (int)uVar9) {
      uVar18 = uVar27;
    }
    uVar26 = uVar24;
    if ((int)uVar24 <= (int)uVar7) {
      uVar26 = uVar7;
    }
    uVar5 = uVar11;
    if ((int)uVar7 <= (int)uVar24 && (int)uVar25 <= (int)uVar11) {
      uVar5 = uVar25;
    }
    uVar24 = uVar7;
    if ((int)uVar25 <= (int)uVar11) {
      uVar24 = uVar26;
    }
    uVar25 = uVar5;
    goto LAB_01edc52c;
  case 8:
    lVar21 = *(long *)PTR_DAT_04bb5c90;
    uVar7 = *(uint *)(lVar21 + 0x28);
    uVar28 = *(int *)(lVar21 + 0x2c) + 6;
    uVar11 = *(uint *)(lVar21 + 0x38);
    uVar9 = *(uint *)(lVar21 + 0x3c);
    if ((int)uVar26 <= (int)uVar28) {
      uVar23 = uVar28;
    }
    uVar18 = uVar9;
    if ((int)uVar28 <= (int)uVar26 && (int)uVar27 <= (int)uVar9) {
      uVar18 = uVar27;
    }
    uVar26 = uVar24;
    if ((int)uVar24 <= (int)uVar7) {
      uVar26 = uVar7;
    }
    uVar5 = uVar11;
    if ((int)uVar7 <= (int)uVar24 && (int)uVar25 <= (int)uVar11) {
      uVar5 = uVar25;
    }
    uVar24 = uVar7;
    if ((int)uVar25 <= (int)uVar11) {
      uVar24 = uVar26;
    }
    uVar25 = uVar5;
LAB_01edc52c:
    uVar26 = uVar28;
    if ((int)uVar27 <= (int)uVar9) {
      uVar26 = uVar23;
    }
    break;
  case 9:
    if ((int)uVar24 < 0x7b) {
      uVar24 = 0x7a;
    }
    if (0xa2 < (int)uVar25) {
      uVar25 = 0xa3;
    }
    if ((int)uVar26 < 0x67) {
      uVar26 = 0x66;
    }
    if (0x84 < (int)uVar27) {
      uVar27 = 0x85;
    }
    uVar18 = uVar27;
    break;
  case 10:
    lVar21 = *(long *)PTR_DAT_04bb5c90;
    uVar11 = *(int *)(lVar21 + 0x28) - 4;
    uVar23 = *(int *)(lVar21 + 0x38) + 4;
    uVar18 = *(int *)(lVar21 + 0x2c) + 10;
    uVar28 = *(int *)(lVar21 + 0x3c) + 4;
    uVar7 = uVar11;
    if ((int)uVar23 <= (int)uVar11) {
      uVar7 = uVar23;
    }
    if ((int)uVar11 <= (int)uVar23) {
      uVar11 = uVar23;
    }
    uVar23 = uVar18;
    if ((int)uVar28 <= (int)uVar18) {
      uVar23 = uVar28;
    }
    if ((int)uVar18 <= (int)uVar28) {
      uVar18 = uVar28;
    }
    if ((int)uVar11 < (int)uVar25) {
      uVar24 = (uVar11 - param_5) + 1;
      uVar25 = uVar11;
    }
    else if ((int)uVar24 < (int)uVar7) {
      uVar25 = (param_5 + uVar7) - 1;
      uVar24 = uVar7;
    }
    if ((int)uVar27 <= (int)uVar18) goto LAB_01edc5a4;
    uVar26 = (uVar18 - param_6) + 1;
  }
switchD_01edc3e0_default:
  uVar23 = *(uint *)(lVar20 + 0x30);
  if ((int)uVar23 < (int)uVar25) {
    uVar27 = (uVar23 - param_5) + 1;
  }
  else {
    uVar27 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
    uVar23 = param_5 - 1;
    if (-1 < (int)uVar24) {
      uVar23 = uVar25;
    }
  }
  uVar24 = *(uint *)(lVar20 + 0x34);
  if ((int)uVar24 < (int)uVar18) {
    uVar26 = (uVar24 - param_6) + 1;
  }
  else {
    uVar24 = param_6 - 1;
    if (-1 < (int)uVar26) {
      uVar24 = uVar18;
    }
    uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
  }
  *(short *)(param_2 + 0x18c) = (short)uVar27;
  *(short *)(param_2 + 0x18e) = (short)uVar26;
  uVar3 = (short)uVar27;
  if ((uVar23 & 0xffff) <= (uVar27 & 0xffff)) {
    uVar3 = (short)uVar23;
  }
  *(short *)(param_2 + 400) = (short)uVar23;
  *(short *)(param_2 + 0x192) = (short)uVar24;
  uVar4 = (short)uVar26;
  if ((uVar24 & 0xffff) <= (uVar26 & 0xffff)) {
    uVar4 = (short)uVar24;
  }
  *(undefined2 *)(param_2 + 0x188) = uVar3;
  puVar13 = PTR_DAT_04bb2010;
  *(undefined2 *)(param_2 + 0x18a) = uVar4;
  *param_1 = (long)(puVar13 + 0x10);
  if (bVar12) {
    *(uint *)(param_1 + 1) = uVar29;
    *(uint *)((long)param_1 + 0xc) = uVar30;
  }
  else {
LAB_01edc274:
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((long)param_1 + 0xc) = uVar2;
  }
  return;
}

