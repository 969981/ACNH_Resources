
void FUN_01913260(float param_1,long param_2,undefined4 *param_3,undefined4 *param_4,float *param_5)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar5 = *(uint *)(param_2 + 0xe0);
  if ((int)uVar5 < 1) {
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    fVar11 = param_5[1];
    if (*(int *)(param_2 + 0xc0) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = **(long **)(param_2 + 200);
    }
    lVar1 = (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
    fVar11 = fVar11 + *(float *)(lVar1 + 4);
    uVar5 = *(uint *)(param_2 + 0xe0);
    uVar6 = (ulong)uVar5;
    if (fVar11 < param_1) {
      if (1 < (int)uVar5) {
        uVar10 = 0;
        lVar1 = 8;
        do {
          if ((long)(uVar10 + 1) < (long)(int)uVar6) {
            if ((ulong)*(uint *)(param_2 + 0xc0) <= uVar10 + 1) goto LAB_01913334;
            plVar7 = (long *)(*(long *)(param_2 + 200) + lVar1);
LAB_0191332c:
            lVar2 = *plVar7;
          }
          else {
            if (*(uint *)(param_2 + 0xc0) != 0) {
              plVar7 = *(long **)(param_2 + 200);
              goto LAB_0191332c;
            }
LAB_01913334:
            lVar2 = 0;
          }
          lVar2 = (**(code **)(*(long *)(lVar2 + 0x30) + 0xf0))();
          fVar11 = fVar11 + *(float *)(lVar2 + 4);
          if (param_1 <= fVar11) {
            uVar5 = *(uint *)(param_2 + 0xe0);
            uVar8 = (int)uVar10 + 1;
            goto joined_r0x01913394;
          }
          uVar5 = *(uint *)(param_2 + 0xe0);
          uVar6 = (ulong)(int)uVar5;
          lVar2 = uVar10 + 2;
          uVar10 = uVar10 + 1;
          lVar1 = lVar1 + 8;
        } while (lVar2 < (long)uVar6);
      }
      uVar8 = uVar5 - 1;
      uVar10 = (ulong)(uVar5 - 2);
    }
    else {
      uVar10 = 0;
      uVar8 = 1;
    }
  }
joined_r0x01913394:
  if ((param_3 != (undefined4 *)0x0) && (uVar9 = (uint)uVar10, uVar9 < uVar5)) {
    fVar11 = *param_5;
    fVar12 = param_5[1];
    lVar1 = 0;
    fVar13 = param_5[2];
    uVar6 = 0;
    do {
      if ((long)uVar6 < (long)*(int *)(param_2 + 0xe0)) {
        if (*(uint *)(param_2 + 0xc0) <= uVar6) goto LAB_019133c0;
        plVar7 = (long *)(*(long *)(param_2 + 200) + lVar1);
LAB_01913428:
        lVar2 = *plVar7;
      }
      else {
        if (*(uint *)(param_2 + 0xc0) != 0) {
          plVar7 = *(long **)(param_2 + 200);
          goto LAB_01913428;
        }
LAB_019133c0:
        lVar2 = 0;
      }
      pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x30) + 0xf0))();
      uVar6 = uVar6 + 1;
      lVar1 = lVar1 + 8;
      fVar12 = fVar12 + pfVar3[1];
      fVar11 = fVar11 + *pfVar3;
      fVar13 = fVar13 + pfVar3[2];
    } while (uVar9 + 1 != uVar6);
    param_3[1] = fVar11;
    param_3[2] = fVar12;
    param_3[3] = fVar13;
    if (((int)uVar9 < 0) || (*(int *)(param_2 + 0xe0) <= (int)uVar9)) {
      if (*(uint *)(param_2 + 0xc0) != 0) {
        plVar7 = *(long **)(param_2 + 200);
        goto LAB_01913468;
      }
LAB_01913470:
      lVar1 = 0;
    }
    else {
      if (*(uint *)(param_2 + 0xc0) <= uVar9) goto LAB_01913470;
      plVar7 = (long *)(*(long *)(param_2 + 200) + (uVar10 & 0xffffffff) * 8);
LAB_01913468:
      lVar1 = *plVar7;
    }
    puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))();
    *param_3 = *puVar4;
    uVar5 = *(uint *)(param_2 + 0xe0);
  }
  if (param_4 == (undefined4 *)0x0) {
    return;
  }
  if (uVar5 <= uVar8) {
    return;
  }
  fVar11 = *param_5;
  fVar12 = param_5[1];
  lVar1 = 0;
  fVar13 = param_5[2];
  uVar10 = 0;
  do {
    if ((long)uVar10 < (long)*(int *)(param_2 + 0xe0)) {
      if (*(uint *)(param_2 + 0xc0) <= uVar10) goto LAB_019134b0;
      plVar7 = (long *)(*(long *)(param_2 + 200) + lVar1);
LAB_01913518:
      lVar2 = *plVar7;
    }
    else {
      if (*(uint *)(param_2 + 0xc0) != 0) {
        plVar7 = *(long **)(param_2 + 200);
        goto LAB_01913518;
      }
LAB_019134b0:
      lVar2 = 0;
    }
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x30) + 0xf0))();
    uVar10 = uVar10 + 1;
    lVar1 = lVar1 + 8;
    fVar12 = fVar12 + pfVar3[1];
    fVar11 = fVar11 + *pfVar3;
    fVar13 = fVar13 + pfVar3[2];
  } while (uVar8 + 1 != uVar10);
  param_4[1] = fVar11;
  param_4[2] = fVar12;
  param_4[3] = fVar13;
  if (((int)uVar8 < 0) || (*(int *)(param_2 + 0xe0) <= (int)uVar8)) {
    if (*(uint *)(param_2 + 0xc0) != 0) {
      plVar7 = *(long **)(param_2 + 200);
      goto LAB_01913558;
    }
  }
  else if (uVar8 < *(uint *)(param_2 + 0xc0)) {
    plVar7 = (long *)(*(long *)(param_2 + 200) + (ulong)uVar8 * 8);
LAB_01913558:
    lVar1 = *plVar7;
    goto LAB_01913564;
  }
  lVar1 = 0;
LAB_01913564:
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))();
  *param_4 = *puVar4;
  return;
}

