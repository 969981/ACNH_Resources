
void FUN_0163f53c(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_ac;
  float local_a4;
  float local_9c;
  
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x10d0) + 0xf0))(param_3 + 0x10d0);
  fVar9 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x1100) + 0xf0))(param_3 + 0x1100);
  fVar10 = *pfVar2;
  fVar7 = sinf(fVar10);
  fVar10 = cosf(fVar10);
  fVar8 = sinf(fVar9);
  fVar9 = cosf(fVar9);
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x1160) + 0xf0))(param_3 + 0x1160);
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar14 = pfVar2[2];
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x11a0) + 0xf0))(param_3 + 0x11a0);
  fVar15 = *pfVar2;
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x1130) + 0xf0))(param_3 + 0x1130);
  uVar11 = *puVar3;
  lVar5 = *(long *)(*(long *)(param_2 + 0x280) + 8);
  if (*(int *)(lVar5 + 0x1f8) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = **(long **)(lVar5 + 0x200);
  }
  pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x1c0) + 0xf0))(lVar5 + 0x1c0);
  *pfVar2 = fVar12 * fVar15;
  pfVar2[1] = fVar13 * fVar15;
  pfVar2[2] = fVar14 * fVar15;
  pfVar2[3] = 1.0;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x188) + 0xf0))(lVar5 + 0x188);
  *pfVar2 = -(fVar10 * fVar8);
  pfVar2[1] = -fVar7;
  pfVar2[2] = -(fVar10 * fVar9);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x200) + 0xf0))(lVar5 + 0x200);
  *puVar3 = uVar11;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x11d0) + 0xf0))(param_3 + 0x11d0);
  fVar9 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x1200) + 0xf0))(param_3 + 0x1200);
  fVar10 = *pfVar2;
  fVar7 = sinf(fVar10);
  fVar10 = cosf(fVar10);
  fVar8 = sinf(fVar9);
  fVar9 = cosf(fVar9);
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x1260) + 0xf0))(param_3 + 0x1260);
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar14 = pfVar2[2];
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x12a0) + 0xf0))(param_3 + 0x12a0);
  fVar15 = *pfVar2;
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)(&DAT_00001230 + param_3) + 0xf0))(&DAT_00001230 + param_3);
  uVar11 = *puVar3;
  lVar5 = *(long *)(*(long *)(param_2 + 0x280) + 8);
  if (*(uint *)(lVar5 + 0x1f8) < 2) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x200) + 8);
  }
  pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x1c0) + 0xf0))(lVar5 + 0x1c0);
  *pfVar2 = fVar12 * fVar15;
  pfVar2[1] = fVar13 * fVar15;
  pfVar2[2] = fVar14 * fVar15;
  pfVar2[3] = 1.0;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x188) + 0xf0))(lVar5 + 0x188);
  *pfVar2 = -(fVar10 * fVar8);
  pfVar2[1] = -fVar7;
  pfVar2[2] = -(fVar10 * fVar9);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x200) + 0xf0))(lVar5 + 0x200);
  *puVar3 = uVar11;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x12d0) + 0xf0))(param_3 + 0x12d0);
  fVar7 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x1300) + 0xf0))(param_3 + 0x1300);
  fVar10 = *pfVar2;
  fVar9 = sinf(fVar10);
  fVar12 = cosf(fVar10);
  fVar13 = sinf(fVar7);
  fVar14 = cosf(fVar7);
  local_ac = 0;
  local_a4 = 0.0;
  FUN_016405c0(param_1,&local_ac);
  fVar8 = local_a4;
  fVar7 = (float)local_ac;
  fVar10 = local_ac._4_4_;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x13a0) + 0xf0))(param_3 + 0x13a0);
  fVar15 = local_9c * *pfVar2;
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x1330) + 0xf0))(param_3 + 0x1330);
  lVar6 = 0;
  uVar11 = *puVar3;
  lVar5 = *(long *)(*(long *)(param_2 + 0x280) + 8);
  if (2 < *(uint *)(lVar5 + 0x1f8)) {
    lVar6 = *(long *)(*(long *)(lVar5 + 0x200) + 0x10);
  }
  pfVar2 = (float *)(**(code **)(*(long *)(lVar6 + 0x1c0) + 0xf0))(lVar6 + 0x1c0);
  *pfVar2 = fVar7 * fVar15;
  pfVar2[1] = fVar10 * fVar15;
  pfVar2[2] = fVar8 * fVar15;
  pfVar2[3] = 1.0;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar6 + 0x188) + 0xf0))(lVar6 + 0x188);
  *pfVar2 = -(fVar12 * fVar13);
  pfVar2[1] = -fVar9;
  pfVar2[2] = -(fVar12 * fVar14);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x200) + 0xf0))(lVar6 + 0x200);
  *puVar3 = uVar11;
  uVar1 = *(undefined1 *)(param_1 + 0x9c);
  lVar5 = *(long *)(*(long *)(param_2 + 0x280) + 8);
  if (*(uint *)(lVar5 + 0x1f8) < 3) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x200) + 0x10);
  }
  puVar4 = (undefined1 *)(**(code **)(*(long *)(lVar5 + 0x158) + 0xf0))(lVar5 + 0x158);
  *puVar4 = uVar1;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x13d0) + 0xf0))(param_3 + 0x13d0);
  fVar9 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x1400) + 0xf0))(param_3 + 0x1400);
  fVar10 = *pfVar2;
  fVar7 = sinf(fVar10);
  fVar10 = cosf(fVar10);
  fVar8 = sinf(fVar9);
  fVar9 = cosf(fVar9);
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x1460) + 0xf0))(param_3 + 0x1460);
  fVar13 = *pfVar2;
  fVar14 = pfVar2[1];
  fVar15 = pfVar2[2];
  pfVar2 = (float *)(**(code **)(*(long *)(param_3 + 0x14a0) + 0xf0))(param_3 + 0x14a0);
  fVar12 = *pfVar2;
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x1430) + 0xf0))(param_3 + 0x1430);
  uVar11 = *puVar3;
  lVar5 = *(long *)(*(long *)(param_2 + 0x280) + 8);
  if (*(uint *)(lVar5 + 0x1f8) < 4) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x200) + 0x18);
  }
  pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x1c0) + 0xf0))(lVar5 + 0x1c0);
  *pfVar2 = fVar13 * fVar12;
  pfVar2[1] = fVar14 * fVar12;
  pfVar2[2] = fVar15 * fVar12;
  pfVar2[3] = 1.0;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x188) + 0xf0))(lVar5 + 0x188);
  *pfVar2 = -(fVar10 * fVar8);
  pfVar2[1] = -fVar7;
  pfVar2[2] = -(fVar10 * fVar9);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x200) + 0xf0))(lVar5 + 0x200);
  *puVar3 = uVar11;
  return;
}

