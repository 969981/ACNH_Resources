
undefined8 FUN_01fb0960(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  uint *puVar11;
  char *__src;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  float fVar15;
  undefined4 local_1f4;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  undefined4 local_184;
  undefined1 local_17e;
  char *local_d0;
  int local_c8;
  
  iVar6 = *(int *)*param_2;
  if (iVar6 == 3) goto LAB_01fb0d38;
  if (iVar6 != 2) {
    if (iVar6 != 0) {
      return 0;
    }
    if (((*(int *)(param_1 + 0x12048) < 1) && (*(int *)(param_1 + 0x77f4) != 0x40)) &&
       (*(int *)(param_1 + 0x77b0) != 0x40)) {
      **(undefined1 **)(param_1 + 0x12010) = 0;
    }
    goto LAB_01fb0d38;
  }
  if ((char)((uint *)param_2[3])[1] == '\0') {
    uVar4 = FUN_03737fb0(*(undefined8 *)PTR_DAT_04bb4e28);
  }
  else {
    uVar4 = *(uint *)param_2[3];
  }
  puVar3 = PTR_DAT_04bbc1a0;
  local_1f0 = *(uint *)(*(long *)(param_1 + 8) + 0x230);
  if (local_1f0 != uVar4) {
    local_1e8 = 0;
    local_1e0 = 0.0;
    uVar8 = FUN_03773c20(&local_1e8,&local_1f0,1,1);
    if ((uVar8 & 1) == 0) {
      FUN_01faf130(param_1,&local_1e8);
    }
    puVar3 = PTR_DAT_04bb27c0;
    uVar7 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
    lVar12 = *(long *)PTR_DAT_04bb27c0;
    if (lVar12 != 0) {
      if (((uVar4 == 0) ||
          (lVar14 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8)
          , lVar14 == 0)) ||
         (((*(uint *)(lVar14 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar14 + 0x230) != uVar4)))) {
        lVar14 = 0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar3;
        iVar6 = (**(code **)(*plVar9 + 0x60))();
        if (iVar6 < 0x11) {
          uVar4 = 1;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_01fb0cd0;
          uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01fb0cd0:
        uVar4 = 0;
      }
      if (lVar14 != 0) {
        uVar4 = uVar4 ^ 1;
        if (*(int *)(lVar14 + 0x150) != 1) {
          uVar4 = 1;
        }
        if (uVar4 == 0) {
          uVar7 = FUN_006f0400(*(float *)(*(long *)(lVar14 + 0x68) + 0x278) - (float)local_1e8,
                               *(float *)(*(long *)(lVar14 + 0x68) + 0x280) - local_1e0);
        }
      }
    }
    local_1f4 = uVar7;
    FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_1e8,&local_1f4,0);
LAB_01fb0d38:
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return 1;
  }
  piVar10 = (int *)(param_1 + 0xb0c8);
  piVar2 = (int *)(param_1 + 0xcbe8);
  if (0 < *piVar10) {
    lVar12 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      puVar13 = *(undefined8 **)(*(long *)(param_1 + 0xb0d0) + lVar12 * 8);
      lVar12 = lVar12 + 1;
      puVar13[0xf] = puVar1;
      *puVar13 = *(undefined8 *)(param_1 + 0xb0d8);
      *(undefined8 **)(param_1 + 0xb0d8) = puVar13;
    } while (lVar12 < *piVar10);
  }
  *piVar10 = 0;
  if (0 < *piVar2) {
    lVar12 = 0;
    do {
      puVar13 = *(undefined8 **)(*(long *)(param_1 + 0xcbf0) + lVar12 * 8);
      lVar12 = lVar12 + 1;
      puVar13[0xf] = puVar3 + 0x10;
      *puVar13 = *(undefined8 *)(param_1 + 0xcbf8);
      *(undefined8 **)(param_1 + 0xcbf8) = puVar13;
    } while (lVar12 < *piVar2);
  }
  *piVar2 = 0;
  *(undefined1 *)(param_1 + 0xe724) = 0;
  *(undefined1 *)(param_1 + 0xaf98) = 0;
  *(undefined8 *)(param_1 + 0xe708) = 0;
  *(undefined8 *)(param_1 + 0xe710) = 0;
  *(undefined8 *)(param_1 + 0xe718) = 0;
  *(undefined1 *)(param_1 + 0xaf90) = 0;
  *(undefined1 *)(param_1 + 0xaf9c) = 0;
  *(undefined4 *)(param_1 + 0xafa4) = 0;
  puVar3 = PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0xafa8) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(param_1 + 0xafaa) = puVar3[2];
  *(undefined *)(param_1 + 0xafab) = puVar3[3];
  *(undefined4 *)(param_1 + 0xafac) = *(undefined4 *)(puVar3 + 4);
  if ((*(uint *)(param_1 + 0xafb0) >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) & 0xffffdfff;
  }
  *(undefined4 *)(param_1 + 0xaf8c) = 0;
  FUN_01e63f1c(&local_1e8);
  lVar12 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar12 + 0x288);
  *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  *(undefined4 *)(lVar12 + 0x28c) = *(undefined4 *)(lVar12 + 0x290);
  uVar5 = *(uint *)(lVar12 + 0x294);
  *(uint *)(lVar12 + 0x290) = uVar5;
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
  *(uint *)(lVar12 + 0x294) = uVar4;
  uVar5 = FUN_021d68a0(*(long *)(param_1 + 8) + 0x3e0);
  switch((int)((ulong)uVar4 + (ulong)uVar4 * 4 >> 0x20)) {
  case 1:
    local_1e8 = CONCAT44(local_1e8._4_4_,0x52);
    if (local_d0 == "NpcGreeting") goto LAB_01fb0f1c;
    __src = "NpcGreeting";
    iVar6 = 0xb;
    if (local_c8 < 0xc) {
      iVar6 = local_c8 + -1;
    }
    goto LAB_01fb0f08;
  case 2:
    local_1e8 = CONCAT44(local_1e8._4_4_,0x52);
    lVar12 = 0x180;
    if ((uVar5 & 0xfffffffe) != 2) {
      lVar12 = 8;
    }
    __src = *(char **)(PTR_s_EmotEnd_04bb4608 + lVar12 + 0x528);
    if (local_d0 == __src) goto LAB_01fb0f1c;
    lVar12 = 0;
    do {
      if (__src[lVar12] == '\0') goto LAB_01fb0ef8;
      if (__src[lVar12 + 1] == '\0') goto LAB_01fb0eec;
      if (__src[lVar12 + 2] == '\0') goto LAB_01fb0ef4;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    break;
  case 3:
    local_1e8 = CONCAT44(local_1e8._4_4_,0x52);
    lVar12 = 0x40;
    if (uVar5 != 2) {
      lVar12 = 0x15;
    }
    lVar14 = 3;
    if (uVar5 != 3) {
      lVar14 = lVar12;
    }
    __src = *(char **)(PTR_s_EmotEnd_04bb4608 + lVar14 * 8 + 0x528);
    if (local_d0 == __src) goto LAB_01fb0f1c;
    lVar12 = 0;
    do {
      if (__src[lVar12] == '\0') goto LAB_01fb0ef8;
      if (__src[lVar12 + 1] == '\0') goto LAB_01fb0eec;
      if (__src[lVar12 + 2] == '\0') goto LAB_01fb0ef4;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    break;
  case 4:
    local_1e8 = CONCAT44(local_1e8._4_4_,0x52);
    lVar12 = 5;
    if (uVar5 != 2) {
      lVar12 = 0x2f;
    }
    lVar14 = 0x1f;
    if (uVar5 != 3) {
      lVar14 = lVar12;
    }
    __src = *(char **)(PTR_s_EmotEnd_04bb4608 + lVar14 * 8 + 0x528);
    if (local_d0 == __src) goto LAB_01fb0f1c;
    lVar12 = 0;
    do {
      if (__src[lVar12] == '\0') goto LAB_01fb0ef8;
      if (__src[lVar12 + 1] == '\0') goto LAB_01fb0eec;
      if (__src[lVar12 + 2] == '\0') goto LAB_01fb0ef4;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    break;
  default:
    local_1e8 = CONCAT44(local_1e8._4_4_,0x4e);
    goto LAB_01fb0f1c;
  }
  lVar12 = 0;
  goto LAB_01fb0ef8;
LAB_01fb0eec:
  lVar12 = lVar12 + 1;
  goto LAB_01fb0ef8;
LAB_01fb0ef4:
  lVar12 = lVar12 + 2;
LAB_01fb0ef8:
  iVar6 = (int)lVar12;
  if (local_c8 <= (int)lVar12) {
    iVar6 = local_c8 + -1;
  }
LAB_01fb0f08:
  local_1e8 = CONCAT44(local_1e8._4_4_,0x52);
  memcpy(local_d0,__src,(long)iVar6);
  local_d0[iVar6] = '\0';
LAB_01fb0f1c:
  fVar15 = *(float *)param_2[4];
  if (!NAN(fVar15)) {
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_1ec = FUN_006f0400(fVar15 - *(float *)(lVar12 + 0x278),
                             ((float *)param_2[4])[2] - *(float *)(lVar12 + 0x280));
    FUN_01e39778(*(undefined8 *)(param_1 + 8),lVar12 + 0x278,&local_1ec,0);
  }
  local_17e = 1;
  local_184 = 1;
  piVar10 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17bd0) + 0xf0))();
  puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar5 = puVar11[3];
  uVar4 = *puVar11 ^ *puVar11 << 0xb;
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
  puVar11[2] = uVar5;
  puVar11[3] = uVar4;
  FUN_01fb1020(param_1,&local_1e8,
               (int)((float)*piVar10 +
                    ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * (float)(piVar10[1] - *piVar10)));
  FUN_02192850(param_1 + 0xb0b8,0,0);
  return 1;
}

