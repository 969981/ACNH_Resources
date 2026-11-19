
void FUN_0388eaa0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined2 *puVar16;
  long lVar17;
  undefined4 local_d0;
  undefined **local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 local_8c [20];
  undefined2 local_64;
  
  if (param_3 < *(uint *)(param_1 + 8)) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 8);
  }
  else {
    lVar17 = 0;
  }
  uVar3 = *(undefined8 *)(lVar17 + 0x18);
  uVar6 = *(undefined8 *)(lVar17 + 0x20);
  uVar12 = *(undefined8 *)(lVar17 + 0x28);
  uVar9 = *(undefined1 *)(lVar17 + 0x30);
  uVar4 = *(undefined8 *)(lVar17 + 8);
  uVar7 = *(undefined8 *)(lVar17 + 0x10);
  local_64 = 0;
  local_90 = 0x15;
  local_a0 = &PTR_LAB_04952f78;
  plVar14 = (long *)(lVar17 + 0x38);
  local_98 = local_8c;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  puVar13 = *(undefined2 **)(lVar17 + 0x40);
  if (local_8c != puVar13) {
    (**(code **)(*(long *)(lVar17 + 0x38) + 0x18))(plVar14);
    lVar10 = 0;
    do {
      if (*(short *)(*(long *)(lVar17 + 0x40) + lVar10 * 2) == 0) goto LAB_0388ebbc;
      lVar1 = *(long *)(lVar17 + 0x40) + lVar10 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar10 = lVar10 + 1;
        goto LAB_0388ebbc;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar10 = lVar10 + 2;
        goto LAB_0388ebbc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0388ebbc:
    uVar2 = (uint)lVar10;
    if (local_90 <= (int)(uint)lVar10) {
      uVar2 = local_90 - 1;
    }
    uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(local_8c,puVar13,uVar15);
    *(undefined2 *)((long)local_8c + uVar15) = 0;
  }
  local_a0 = (undefined **)(PTR_DAT_04bc13e0 + 0x10);
  if (param_3 < *(uint *)(param_1 + 8)) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 8);
  }
  else {
    lVar17 = 0;
  }
  puVar13 = *(undefined2 **)(lVar17 + 0x40);
  *(undefined4 *)(lVar17 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(lVar17 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(lVar17 + 0x18) = uVar5;
  *(undefined8 *)(lVar17 + 0x20) = uVar8;
  *(undefined8 *)(lVar17 + 0x28) = uVar11;
  plVar14 = (long *)(param_2 + 0x38);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  puVar16 = *(undefined2 **)(param_2 + 0x40);
  if (puVar13 != puVar16) {
    (**(code **)(*(long *)(param_2 + 0x38) + 0x18))(plVar14);
    lVar10 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 0x40) + lVar10 * 2) == 0) goto LAB_0388ecbc;
      lVar1 = *(long *)(param_2 + 0x40) + lVar10 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar10 = lVar10 + 1;
        goto LAB_0388ecbc;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar10 = lVar10 + 2;
        goto LAB_0388ecbc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0388ecbc:
    uVar2 = (uint)lVar10;
    if (*(int *)(lVar17 + 0x48) <= (int)(uint)lVar10) {
      uVar2 = *(int *)(lVar17 + 0x48) - 1;
    }
    uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(puVar13,puVar16,uVar15);
    *(undefined2 *)((long)puVar13 + uVar15) = 0;
    puVar13 = *(undefined2 **)(param_2 + 0x40);
  }
  local_d0 = (undefined4)uVar4;
  *(undefined4 *)(param_2 + 8) = local_d0;
  *(undefined8 *)(param_2 + 0x20) = uVar6;
  *(undefined8 *)(param_2 + 0x28) = uVar12;
  *(undefined1 *)(param_2 + 0x30) = uVar9;
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  (*(code *)local_a0[3])(&local_a0);
  puVar16 = local_98;
  if (puVar13 != local_98) {
    (*(code *)local_a0[3])(&local_a0);
    lVar17 = 0;
    do {
      if (local_98[lVar17] == 0) goto LAB_0388ed7c;
      if (local_98[lVar17 + 1] == 0) {
        lVar17 = lVar17 + 1;
        goto LAB_0388ed7c;
      }
      if (local_98[lVar17 + 2] == 0) {
        lVar17 = lVar17 + 2;
        goto LAB_0388ed7c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0388ed7c:
    uVar2 = (uint)lVar17;
    if (*(int *)(param_2 + 0x48) <= (int)(uint)lVar17) {
      uVar2 = *(int *)(param_2 + 0x48) - 1;
    }
    uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(puVar13,puVar16,uVar15);
    *(undefined2 *)((long)puVar13 + uVar15) = 0;
  }
  if (0 < (int)*(uint *)(param_1 + 8)) {
    uVar15 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x10) + uVar15 * 8) == param_2) goto LAB_0388eddc;
      uVar15 = uVar15 + 1;
    } while (*(uint *)(param_1 + 8) != uVar15);
  }
  uVar15 = 0xff;
LAB_0388eddc:
  *(char *)(param_2 + 0x21) = (char)uVar15;
  *(char *)(*(long *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 8) + 0x21) = (char)param_3;
  FUN_0388d4f0(param_1);
  (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x1d8))
            (*(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68),0);
  return;
}

