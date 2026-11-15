
undefined8 FUN_0207a578(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long local_70;
  undefined4 local_68;
  undefined8 local_60;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  local_44 = 0;
  local_50 = (float)FUN_02078678(param_4,&local_44);
  fStack_4c = param_2;
  local_48 = param_3;
  if (((local_50 == 0.0) && (param_2 == 0.0)) && (param_3 == 0.0)) {
    uVar10 = 3;
LAB_0207a624:
    *(undefined4 *)((long)param_4 + 0x9c) = uVar10;
LAB_0207a628:
    uVar8 = 1;
  }
  else {
    lVar12 = *param_4;
    lVar15 = *(long *)(lVar12 + 0x3b0);
    local_60 = *(long *)(*(long *)(lVar12 + 0x68) + 0x278);
    fVar3 = *(float *)(*(long *)(lVar12 + 0x68) + 0x280);
    lVar14 = local_60;
    local_58 = fVar3;
    fVar16 = (float)local_60;
    if (*(char *)((long)param_4 + 0x1d1) == '\0') {
      fVar17 = *(float *)(param_4 + 3);
    }
    else {
      fVar17 = *(float *)((long)param_4 + 0x19c) - (float)local_60;
      fVar18 = *(float *)((long)param_4 + 0x1a4) - fVar3;
      fVar18 = SQRT(fVar18 * fVar18 + fVar17 * fVar17);
      fVar17 = *(float *)(param_4 + 3);
      if (fVar18 < fVar17) {
        *(float *)(param_4 + 0x38) = fVar18;
        uVar10 = 4;
        goto LAB_0207a624;
      }
    }
    fVar20 = local_50 - (float)local_60;
    param_3 = param_3 - fVar3;
    fVar18 = SQRT(param_3 * param_3 + fVar20 * fVar20);
    *(float *)(param_4 + 0x38) = fVar18;
    if (fVar18 < fVar17) {
      uVar10 = 2;
      if (*(char *)((long)param_4 + 0x1d2) != '\0') {
        uVar10 = 4;
      }
      *(undefined4 *)((long)param_4 + 0x9c) = uVar10;
      local_60 = lVar14;
      uVar7 = FUN_006f0400(fVar20,param_3);
      uVar11 = *(uint *)(*(long *)(*param_4 + 0x68) + 0x2b4);
      if (uVar7 - uVar11 == 0) {
        uVar11 = 0;
      }
      else {
        uVar1 = uVar7 - uVar11;
        if (uVar7 <= uVar11) {
          uVar1 = uVar11 - uVar7;
        }
        uVar11 = -uVar1;
        if (uVar1 < 0x80000001) {
          uVar11 = uVar1;
        }
      }
      if (uVar11 < *(uint *)(param_4 + 0x39)) {
        iVar4 = *(int *)(lVar15 + 0x360);
        goto joined_r0x0207a728;
      }
    }
    else {
      if ((int)param_4[0xb] == 4) {
        if ((*(char *)((long)param_4 + 0x1d6) == '\0') &&
           (iVar4 = *(int *)((long)param_4 + 0x1b4) + 1, *(int *)((long)param_4 + 0x1b4) = iVar4,
           (int)param_4[0x37] <= iVar4)) {
          *(undefined4 *)((long)param_4 + 0x1b4) = 0;
          *(undefined4 *)((long)param_4 + 0x9c) = 2;
LAB_0207a8f0:
          uVar11 = *(uint *)(lVar12 + 0x288);
          *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
          uVar11 = uVar11 ^ uVar11 << 0xb;
          *(undefined4 *)(lVar12 + 0x28c) = *(undefined4 *)(lVar12 + 0x290);
          uVar7 = *(uint *)(lVar12 + 0x294);
          *(uint *)(lVar12 + 0x290) = uVar7;
          uVar11 = uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7;
          *(uint *)(lVar12 + 0x294) = uVar11;
          *(int *)((long)param_4 + 0x1bc) =
               (int)((ulong)uVar11 + (ulong)uVar11 * 4 >> 0x20) * 0x1e + 0x5a;
          if (*(char *)((long)param_4 + 0x1d2) == '\0') {
            return 3;
          }
          *(undefined1 *)((long)param_4 + 0x1d2) = 0;
          return 3;
        }
        local_60 = lVar14;
        uVar9 = FUN_01ea8d54(*(undefined8 *)(lVar12 + 0x3b8),0x96);
        if ((uVar9 & 1) != 0) {
          *(undefined4 *)((long)param_4 + 0x9c) = 2;
          lVar12 = *param_4;
          goto LAB_0207a8f0;
        }
        if ((*(char *)((long)param_4 + 0x1d1) != '\0') && (*(char *)((long)param_4 + 0x1d2) != '\0')
           ) goto LAB_0207a770;
        fVar17 = *(float *)(param_4 + 0x32) - fVar16;
        fVar18 = *(float *)(param_4 + 0x33) - fVar3;
        if (4.5 < SQRT(fVar18 * fVar18 + fVar17 * fVar17)) goto LAB_0207a86c;
        fVar18 = *(float *)(param_4 + 0x38);
        pfVar13 = (float *)(param_4 + 3);
        fVar17 = *(float *)(param_4 + 0x32);
        fVar19 = *(float *)(param_4 + 0x33);
      }
      else if (*(char *)((long)param_4 + 0x1d2) == '\0') {
        local_60._4_4_ = (undefined4)((ulong)local_60 >> 0x20);
        *(float *)(param_4 + 0x32) = (float)local_60;
        *(float *)(param_4 + 0x33) = fVar3;
        pfVar13 = (float *)((long)param_4 + 0x1c);
        *(undefined4 *)((long)param_4 + 0x194) = local_60._4_4_;
        fVar17 = (float)local_60;
        fVar19 = fVar3;
        local_60 = lVar14;
      }
      else {
        if (*(char *)((long)param_4 + 0x1d1) != '\0') {
LAB_0207a770:
          *(undefined4 *)((long)param_4 + 0x9c) = 1;
          param_4[0x32] = *(long *)((long)param_4 + 0x19c);
          *(undefined4 *)(param_4 + 0x33) = *(undefined4 *)((long)param_4 + 0x1a4);
          return 4;
        }
        pfVar13 = (float *)((long)param_4 + 0x1c);
        fVar17 = *(float *)(param_4 + 0x32);
        fVar19 = *(float *)(param_4 + 0x33);
        local_60 = lVar14;
      }
      bVar5 = false;
      if ((fVar19 == 0.0) && (bVar5 = false, !NAN(*(float *)((long)param_4 + 0x194)))) {
        bVar5 = *(float *)((long)param_4 + 0x194) == 0.0;
      }
      fVar19 = *pfVar13;
      bVar6 = false;
      if ((bVar5) && (bVar6 = false, !NAN(fVar17))) {
        bVar6 = fVar17 == 0.0;
      }
      plVar2 = &local_60;
      if (!bVar6) {
        plVar2 = param_4 + 0x32;
      }
      *(undefined4 *)((long)param_4 + 0x9c) = 2;
      local_70 = *plVar2;
      local_68 = (undefined4)plVar2[1];
      if (fVar19 <= fVar18) {
        uVar9 = FUN_0207af40(param_4,&local_70,&local_50,&local_44,1);
        if ((uVar9 & 1) == 0) {
          lVar14 = *param_4;
          *(undefined4 *)((long)param_4 + 0x9c) = 3;
          uVar11 = *(uint *)(lVar14 + 0x288);
          *(undefined4 *)(lVar14 + 0x288) = *(undefined4 *)(lVar14 + 0x28c);
          uVar11 = uVar11 ^ uVar11 << 0xb;
          *(undefined4 *)(lVar14 + 0x28c) = *(undefined4 *)(lVar14 + 0x290);
          uVar7 = *(uint *)(lVar14 + 0x294);
          *(uint *)(lVar14 + 0x290) = uVar7;
          uVar11 = uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7;
          *(uint *)(lVar14 + 0x294) = uVar11;
          *(int *)((long)param_4 + 0x1bc) =
               (int)((ulong)uVar11 + (ulong)uVar11 * 4 >> 0x20) * 0x1e + 0x5a;
          return 3;
        }
        fVar16 = *(float *)(param_4 + 0x32) - fVar16;
        if (4.5 < SQRT((*(float *)(param_4 + 0x33) - fVar3) * (*(float *)(param_4 + 0x33) - fVar3) +
                       fVar16 * fVar16)) {
LAB_0207a86c:
          *(undefined4 *)((long)param_4 + 0x9c) = 1;
          return 4;
        }
      }
      uVar7 = FUN_006f0400(fVar20,param_3);
      uVar11 = *(uint *)(*(long *)(*param_4 + 0x68) + 0x2b4);
      if (uVar7 - uVar11 == 0) {
        uVar11 = 0;
      }
      else {
        uVar1 = uVar7 - uVar11;
        if (uVar7 <= uVar11) {
          uVar1 = uVar11 - uVar7;
        }
        uVar11 = -uVar1;
        if (uVar1 < 0x80000001) {
          uVar11 = uVar1;
        }
      }
      if (uVar11 < *(uint *)(param_4 + 0x39)) {
        iVar4 = *(int *)(lVar15 + 0x360);
joined_r0x0207a728:
        if ((iVar4 != 4) || ((*(int *)(lVar15 + 0x4b8) != 0 && (*(int *)(lVar15 + 0x378) == 0x23))))
        goto LAB_0207a628;
      }
    }
    uVar8 = 2;
  }
  return uVar8;
}

