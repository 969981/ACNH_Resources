
void FUN_037b2a90(uint *param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  fStack_9c = param_2[1];
  local_90 = 0;
  local_80 = -1;
  uStack_78 = 0;
  local_88 = 7;
  local_a0 = *param_2 + 1.875;
  local_98 = param_2[2] + 3.75;
  local_84 = 0;
  FUN_0359c3d4(&local_80,&local_a0);
  lVar6 = local_80;
  fStack_9c = param_2[1];
  uVar7 = local_80._4_4_;
  local_90 = 0;
  local_80 = -1;
  uStack_78 = 0;
  local_88 = 7;
  local_84 = 0;
  local_a0 = *param_2 + 3.125;
  local_98 = param_2[2] + 1.25;
  FUN_0359c3d4(&local_80,&local_a0);
  lVar2 = local_80;
  fStack_9c = param_2[1];
  local_90 = 0;
  uVar8 = local_80._4_4_;
  local_80 = -1;
  uStack_78 = 0;
  local_88 = 7;
  local_a0 = *param_2 + 1.25;
  local_98 = param_2[2] + 1.875;
  local_84 = 0;
  FUN_0359c3d4(&local_80,&local_a0);
  lVar4 = local_80;
  fStack_9c = param_2[1];
  local_90 = 0;
  uVar5 = local_80._4_4_;
  local_80 = -1;
  uStack_78 = 0;
  local_88 = 7;
  local_a0 = *param_2 + 3.75;
  local_98 = param_2[2] + 3.125;
  local_84 = 0;
  FUN_0359c3d4(&local_80,&local_a0);
  lVar3 = DAT_04cfab78;
  if (DAT_04cfab78 == 0) {
    return;
  }
  uVar7 = uVar7 & 0xffff;
  if (lVar6 < 0) {
    uVar7 = 2;
  }
  uVar8 = uVar8 & 0xffff;
  uVar7 = uVar7 - *(ushort *)(DAT_04cfab78 + 0x600);
  if (((((uVar7 < *(uint *)(DAT_04cfab78 + 0x5e0)) &&
        (lVar6 = *(long *)(*(long *)(DAT_04cfab78 + 0x5e8) + (long)(int)uVar7 * 8), lVar6 != 0)) &&
       (*(long *)(DAT_04cfab78 + 0x4b8) != 0)) &&
      ((puVar10 = *(uint **)(*(long *)(DAT_04cfab78 + 0x4b8) + 8), puVar10 != (uint *)0x0 &&
       (*puVar10 != 0)))) && ((uVar7 = puVar10[1], uVar7 != 0 && ((ulong)(ushort)puVar10[2] != 0))))
  {
    lVar1 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar1 == 0) goto LAB_037b2c74;
    uVar9 = 0;
    if ((ulong)uVar7 != 0) {
      uVar9 = (uint)((ulong)(lVar6 - lVar1) / (ulong)uVar7);
    }
    if (*puVar10 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if ((0 < *(int *)(DAT_04cfab78 + 0x5c8)) && (uVar9 < *(uint *)(DAT_04cfab78 + 0x5d0))) {
      uVar9 = (uint)*(short *)(*(long *)(DAT_04cfab78 + 0x5d8) + (long)(int)uVar9 * 2);
    }
  }
  else {
LAB_037b2c74:
    uVar9 = 0xffffffff;
  }
  *param_1 = uVar9;
  uVar5 = uVar5 & 0xffff;
  if (lVar2 < 0) {
    uVar8 = 2;
  }
  uVar8 = uVar8 - *(ushort *)(lVar3 + 0x600);
  if ((((uVar8 < *(uint *)(lVar3 + 0x5e0)) &&
       (lVar6 = *(long *)(*(long *)(lVar3 + 0x5e8) + (long)(int)uVar8 * 8), lVar6 != 0)) &&
      (*(long *)(lVar3 + 0x4b8) != 0)) &&
     (((puVar10 = *(uint **)(*(long *)(lVar3 + 0x4b8) + 8), puVar10 != (uint *)0x0 &&
       (*puVar10 != 0)) && ((uVar7 = puVar10[1], uVar7 != 0 && ((ulong)(ushort)puVar10[2] != 0))))))
  {
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar2 == 0) goto LAB_037b2d24;
    uVar8 = 0;
    if ((ulong)uVar7 != 0) {
      uVar8 = (uint)((ulong)(lVar6 - lVar2) / (ulong)uVar7);
    }
    if (*puVar10 <= uVar8) {
      uVar8 = 0xffffffff;
    }
    if ((0 < *(int *)(lVar3 + 0x5c8)) && (uVar8 < *(uint *)(lVar3 + 0x5d0))) {
      uVar8 = (uint)*(short *)(*(long *)(lVar3 + 0x5d8) + (long)(int)uVar8 * 2);
    }
  }
  else {
LAB_037b2d24:
    uVar8 = 0xffffffff;
  }
  param_1[1] = uVar8;
  if (lVar4 < 0) {
    uVar5 = 2;
  }
  uVar7 = local_80._4_4_ & 0xffff;
  uVar5 = uVar5 - *(ushort *)(lVar3 + 0x600);
  if ((((uVar5 < *(uint *)(lVar3 + 0x5e0)) &&
       (lVar6 = *(long *)(*(long *)(lVar3 + 0x5e8) + (long)(int)uVar5 * 8), lVar6 != 0)) &&
      (*(long *)(lVar3 + 0x4b8) != 0)) &&
     (((puVar10 = *(uint **)(*(long *)(lVar3 + 0x4b8) + 8), puVar10 != (uint *)0x0 &&
       (*puVar10 != 0)) && ((uVar8 = puVar10[1], uVar8 != 0 && ((ulong)(ushort)puVar10[2] != 0))))))
  {
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar2 == 0) goto LAB_037b2dd8;
    uVar5 = 0;
    if ((ulong)uVar8 != 0) {
      uVar5 = (uint)((ulong)(lVar6 - lVar2) / (ulong)uVar8);
    }
    if (*puVar10 <= uVar5) {
      uVar5 = 0xffffffff;
    }
    if ((0 < *(int *)(lVar3 + 0x5c8)) && (uVar5 < *(uint *)(lVar3 + 0x5d0))) {
      uVar5 = (uint)*(short *)(*(long *)(lVar3 + 0x5d8) + (long)(int)uVar5 * 2);
    }
  }
  else {
LAB_037b2dd8:
    uVar5 = 0xffffffff;
  }
  param_1[2] = uVar5;
  if (local_80 < 0) {
    uVar7 = 2;
  }
  uVar7 = uVar7 - *(ushort *)(lVar3 + 0x600);
  if (((((uVar7 < *(uint *)(lVar3 + 0x5e0)) &&
        (lVar6 = *(long *)(*(long *)(lVar3 + 0x5e8) + (long)(int)uVar7 * 8), lVar6 != 0)) &&
       (*(long *)(lVar3 + 0x4b8) != 0)) &&
      ((puVar10 = *(uint **)(*(long *)(lVar3 + 0x4b8) + 8), puVar10 != (uint *)0x0 &&
       (*puVar10 != 0)))) && ((uVar7 = puVar10[1], uVar7 != 0 && ((ulong)(ushort)puVar10[2] != 0))))
  {
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar2 != 0) {
      uVar8 = 0;
      if ((ulong)uVar7 != 0) {
        uVar8 = (uint)((ulong)(lVar6 - lVar2) / (ulong)uVar7);
      }
      if (*puVar10 <= uVar8) {
        uVar8 = 0xffffffff;
      }
      if ((0 < *(int *)(lVar3 + 0x5c8)) && (uVar8 < *(uint *)(lVar3 + 0x5d0))) {
        uVar8 = (uint)*(short *)(*(long *)(lVar3 + 0x5d8) + (long)(int)uVar8 * 2);
      }
      goto LAB_037b2e88;
    }
  }
  uVar8 = 0xffffffff;
LAB_037b2e88:
  param_1[3] = uVar8;
  return;
}

