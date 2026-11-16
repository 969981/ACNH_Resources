
undefined8
FUN_02533c10(byte *param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4,int *param_5,
            undefined2 *param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  uint local_ac [16];
  byte local_6c [4];
  uint local_68;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb37e0;
  uVar3 = *(undefined2 *)PTR_DAT_04bb37e0;
  *param_3 = uVar3;
  param_3[4] = uVar3;
  param_3[8] = uVar3;
  uVar2 = puVar4[2];
  *(undefined1 *)(param_3 + 1) = uVar2;
  *(undefined1 *)(param_3 + 5) = uVar2;
  *(undefined1 *)(param_3 + 9) = uVar2;
  uVar2 = puVar4[3];
  *(undefined1 *)((long)param_3 + 3) = uVar2;
  *(undefined1 *)((long)param_3 + 0xb) = uVar2;
  *(undefined1 *)((long)param_3 + 0x13) = uVar2;
  uVar1 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(param_3 + 2) = uVar1;
  *(undefined4 *)(param_3 + 6) = uVar1;
  *(undefined4 *)(param_3 + 10) = uVar1;
  puVar5 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_2);
  if (*(long *)puVar5 == 0) {
    return 0;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar6) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return 0;
  }
  bVar12 = *param_1;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_ac[0] = CONCAT31(local_ac[0]._1_3_,bVar12);
  lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_ac,1);
  if (lVar14 == 0) {
    return 0;
  }
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  lVar13 = *(long *)puVar5;
  local_b8 = 0;
  local_c8 = PTR_DAT_04bc0510 + 0x10;
  uVar6 = FUN_0277d6c4(&local_c0);
  if (*(long *)puVar5 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8), lVar13 != 0)) {
        local_b8 = lVar13;
      }
    }
  }
  local_6c[0] = 0;
  local_6c[1] = 0;
  FUN_01adab50(&local_c8,local_6c);
  uVar6 = 0;
  do {
    local_68 = uVar6;
    if ((local_68 != 0) && (local_68 < 0xe)) {
      uVar6 = local_68 + 7;
      if (-1 < (int)local_68) {
        uVar6 = local_68;
      }
      local_ac[0] = local_68;
      if (((uint)((int)uVar6 >> 3) < 2) &&
         (local_64 = local_68, (local_6c[(uint)((int)uVar6 >> 3)] >> (ulong)(local_68 & 7) & 1) != 0
         )) goto LAB_02533e60;
    }
    uVar6 = local_68 + 1;
  } while (local_68 + 1 != 0xe);
  local_64 = 0;
LAB_02533e60:
  if (local_64 - 4 < 3) {
LAB_02533f08:
    if ((*(long **)(lVar14 + 0x178) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x178), puVar7 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar7)();
      uVar8 = uVar8 & 0xffffffff;
    }
    FUN_0255da20(local_ac,*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158));
    uVar9 = FUN_02668230(local_ac,param_2,1,param_3,param_4,param_5,param_6);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x178) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x178) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if ((uVar9 & 1) != 0) {
      return 2;
    }
  }
  else if (local_64 - 1 < 3) {
    if ((*(long **)(lVar14 + 0x178) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x178), puVar7 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar7)();
      uVar8 = uVar8 & 0xffffffff;
    }
    FUN_0255da20(local_ac,*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158));
    uVar9 = FUN_026669f0(local_ac,param_2,1,param_3,param_4,param_5,param_6);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x178) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x178) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    goto LAB_02533f08;
  }
  uVar3 = *(undefined2 *)puVar4;
  *param_4 = uVar3;
  param_4[4] = uVar3;
  param_4[8] = uVar3;
  uVar2 = puVar4[2];
  *(undefined1 *)(param_4 + 1) = uVar2;
  *(undefined1 *)(param_4 + 5) = uVar2;
  *(undefined1 *)(param_4 + 9) = uVar2;
  uVar2 = puVar4[3];
  *(undefined1 *)((long)param_4 + 3) = uVar2;
  *(undefined1 *)((long)param_4 + 0xb) = uVar2;
  *(undefined1 *)((long)param_4 + 0x13) = uVar2;
  uVar1 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(param_4 + 2) = uVar1;
  *(undefined4 *)(param_4 + 6) = uVar1;
  *(undefined4 *)(param_4 + 10) = uVar1;
  *param_5 = 0;
  uVar3 = *(undefined2 *)puVar4;
  *param_6 = uVar3;
  param_6[4] = uVar3;
  param_6[8] = uVar3;
  uVar2 = puVar4[2];
  *(undefined1 *)(param_6 + 1) = uVar2;
  *(undefined1 *)(param_6 + 5) = uVar2;
  *(undefined1 *)(param_6 + 9) = uVar2;
  uVar2 = puVar4[3];
  *(undefined1 *)((long)param_6 + 3) = uVar2;
  *(undefined1 *)((long)param_6 + 0xb) = uVar2;
  *(undefined1 *)((long)param_6 + 0x13) = uVar2;
  uVar1 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(param_6 + 2) = uVar1;
  *(undefined4 *)(param_6 + 6) = uVar1;
  *(undefined4 *)(param_6 + 10) = uVar1;
  if (local_64 == 10) {
    if ((*(long **)(lVar14 + 0x178) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x178), puVar7 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar7)();
      uVar6 = uVar6 ^ 1;
    }
    puVar10 = (undefined2 *)FUN_026e96a0(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158));
    uVar3 = *puVar10;
    *param_3 = uVar3;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar10 + 1);
    *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)puVar10 + 3);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar10 + 2);
    *param_4 = uVar3;
    *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_3 + 2);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar14 + 0x178) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x178) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    lVar14 = *(long *)puVar5;
    uVar6 = FUN_0277d6c4(param_4);
    if (*(long *)puVar5 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
        uVar11 = 5;
        lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
        goto joined_r0x025342d0;
      }
    }
    uVar11 = 5;
    goto LAB_025342e8;
  }
  if (local_64 == 8) {
    if ((*(long **)(lVar14 + 0x178) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x178), puVar7 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar7)();
      uVar6 = uVar6 ^ 1;
    }
    puVar10 = (undefined2 *)FUN_026e9470(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158));
    uVar3 = *puVar10;
    *param_3 = uVar3;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar10 + 1);
    *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)puVar10 + 3);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar10 + 2);
    *param_4 = uVar3;
    *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_3 + 2);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar14 + 0x178) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x178) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    lVar14 = *(long *)puVar5;
    uVar6 = FUN_0277d6c4(param_4);
    if (*(long *)puVar5 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
        uVar11 = 4;
        lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
        goto joined_r0x025342d0;
      }
    }
    uVar11 = 4;
  }
  else {
    if (local_64 != 7) {
      return 0;
    }
    if ((*(long **)(lVar14 + 0x178) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x178), puVar7 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar7)();
      uVar6 = uVar6 ^ 1;
    }
    puVar10 = (undefined2 *)FUN_026e9240(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158));
    uVar3 = *puVar10;
    *param_3 = uVar3;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar10 + 1);
    *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)puVar10 + 3);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar10 + 2);
    *param_4 = uVar3;
    *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_3 + 2);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar14 + 0x178) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x178) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    lVar14 = *(long *)puVar5;
    uVar6 = FUN_0277d6c4(param_4);
    if (*(long *)puVar5 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
        uVar11 = 3;
        lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
joined_r0x025342d0:
        if (lVar14 != 0) {
          *param_5 = *param_5 + 1;
        }
        goto LAB_025342e8;
      }
    }
    uVar11 = 3;
  }
LAB_025342e8:
  *param_6 = *(undefined2 *)param_2;
  *(undefined1 *)(param_6 + 1) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)((long)param_6 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_6 + 2) = param_2[1];
  return uVar11;
}

