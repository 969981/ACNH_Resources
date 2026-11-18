
long FUN_0338faf0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *pvVar13;
  long *plVar14;
  ulong uVar15;
  
  pvVar12 = *(void **)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  plVar14 = (long *)(param_2 + 0x10);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pvVar13 = *(void **)(param_2 + 0x18);
  if (pvVar12 != pvVar13) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar14);
    lVar8 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 0x18) + lVar8 * 2) == 0) goto LAB_0338fb9c;
      lVar1 = *(long *)(param_2 + 0x18) + lVar8 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar8 = lVar8 + 1;
        goto LAB_0338fb9c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar8 = lVar8 + 2;
        goto LAB_0338fb9c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0338fb9c:
    uVar2 = (uint)lVar8;
    if (*(int *)(param_1 + 0x20) <= (int)(uint)lVar8) {
      uVar2 = *(int *)(param_1 + 0x20) - 1;
    }
    uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(pvVar12,pvVar13,uVar15);
    *(undefined2 *)((long)pvVar12 + uVar15) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0x230);
  (**(code **)(*(long *)(param_2 + 0x228) + 0x18))(param_2 + 0x228);
  pvVar13 = *(void **)(param_2 + 0x230);
  if (pvVar12 != pvVar13) {
    (**(code **)(*(long *)(param_2 + 0x228) + 0x18))(param_2 + 0x228);
    lVar8 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 0x230) + lVar8 * 2) == 0) goto LAB_0338fc3c;
      lVar1 = *(long *)(param_2 + 0x230) + lVar8 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar8 = lVar8 + 1;
        goto LAB_0338fc3c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar8 = lVar8 + 2;
        goto LAB_0338fc3c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0338fc3c:
    uVar2 = (uint)lVar8;
    if (*(int *)(param_1 + 0x238) <= (int)(uint)lVar8) {
      uVar2 = *(int *)(param_1 + 0x238) - 1;
    }
    uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(pvVar12,pvVar13,uVar15);
    *(undefined2 *)((long)pvVar12 + uVar15) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0x448);
  (**(code **)(*(long *)(param_2 + 0x440) + 0x18))(param_2 + 0x440);
  pvVar13 = *(void **)(param_2 + 0x448);
  if (pvVar12 != pvVar13) {
    (**(code **)(*(long *)(param_2 + 0x440) + 0x18))(param_2 + 0x440);
    lVar8 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 0x448) + lVar8 * 2) == 0) goto LAB_0338fcdc;
      lVar1 = *(long *)(param_2 + 0x448) + lVar8 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar8 = lVar8 + 1;
        goto LAB_0338fcdc;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar8 = lVar8 + 2;
        goto LAB_0338fcdc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0338fcdc:
    uVar2 = (uint)lVar8;
    if (*(int *)(param_1 + 0x450) <= (int)(uint)lVar8) {
      uVar2 = *(int *)(param_1 + 0x450) - 1;
    }
    uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(pvVar12,pvVar13,uVar15);
    *(undefined2 *)((long)pvVar12 + uVar15) = 0;
  }
  FUN_027adf94(param_1 + 0x658,param_2 + 0x658);
  *(undefined1 *)(param_1 + 0x724) = *(undefined1 *)(param_2 + 0x724);
  uVar11 = *(undefined8 *)(param_2 + 0x73e);
  uVar9 = *(undefined8 *)(param_2 + 0x72e);
  uVar3 = *(undefined8 *)(param_2 + 0x736);
  *(undefined8 *)(param_1 + 0x726) = *(undefined8 *)(param_2 + 0x726);
  uVar10 = *(undefined8 *)(param_2 + 0x766);
  uVar4 = *(undefined8 *)(param_2 + 0x76e);
  uVar5 = *(undefined8 *)(param_2 + 0x77e);
  *(undefined8 *)(param_1 + 0x776) = *(undefined8 *)(param_2 + 0x776);
  *(undefined8 *)(param_1 + 0x77e) = uVar5;
  *(undefined8 *)(param_1 + 0x766) = uVar10;
  *(undefined8 *)(param_1 + 0x76e) = uVar4;
  uVar10 = *(undefined8 *)(param_2 + 0x746);
  uVar5 = *(undefined8 *)(param_2 + 0x74e);
  uVar4 = *(undefined8 *)(param_2 + 0x756);
  uVar6 = *(undefined8 *)(param_2 + 0x75e);
  *(undefined8 *)(param_1 + 0x72e) = uVar9;
  *(undefined8 *)(param_1 + 0x736) = uVar3;
  *(undefined8 *)(param_1 + 0x73e) = uVar11;
  *(undefined8 *)(param_1 + 0x756) = uVar4;
  *(undefined8 *)(param_1 + 0x75e) = uVar6;
  *(undefined8 *)(param_1 + 0x746) = uVar10;
  *(undefined8 *)(param_1 + 0x74e) = uVar5;
  memcpy((void *)(param_1 + 0x786),(void *)(param_2 + 0x786),0x1e0);
  uVar10 = *(undefined8 *)(param_2 + 0x97e);
  uVar9 = *(undefined8 *)(param_2 + 0x966);
  uVar4 = *(undefined8 *)(param_2 + 0x96e);
  *(undefined8 *)(param_1 + 0x976) = *(undefined8 *)(param_2 + 0x976);
  *(undefined8 *)(param_1 + 0x97e) = uVar10;
  *(undefined8 *)(param_1 + 0x966) = uVar9;
  *(undefined8 *)(param_1 + 0x96e) = uVar4;
  uVar10 = *(undefined8 *)(param_2 + 0x99e);
  uVar9 = *(undefined8 *)(param_2 + 0x986);
  uVar4 = *(undefined8 *)(param_2 + 0x98e);
  *(undefined8 *)(param_1 + 0x996) = *(undefined8 *)(param_2 + 0x996);
  *(undefined8 *)(param_1 + 0x99e) = uVar10;
  *(undefined8 *)(param_1 + 0x986) = uVar9;
  *(undefined8 *)(param_1 + 0x98e) = uVar4;
  uVar10 = *(undefined8 *)(param_2 + 0x9be);
  uVar9 = *(undefined8 *)(param_2 + 0x9a6);
  uVar4 = *(undefined8 *)(param_2 + 0x9ae);
  *(undefined8 *)(param_1 + 0x9b6) = *(undefined8 *)(param_2 + 0x9b6);
  *(undefined8 *)(param_1 + 0x9be) = uVar10;
  *(undefined8 *)(param_1 + 0x9a6) = uVar9;
  *(undefined8 *)(param_1 + 0x9ae) = uVar4;
  *(undefined2 *)(param_1 + 0x9c6) = *(undefined2 *)(param_2 + 0x9c6);
  *(undefined2 *)(param_1 + 0x9c8) = *(undefined2 *)(param_2 + 0x9c8);
  *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_2 + 0x9cc);
  *(undefined8 *)(param_1 + 0x9d0) = *(undefined8 *)(param_2 + 0x9d0);
  *(undefined8 *)(param_1 + 0x9d8) = *(undefined8 *)(param_2 + 0x9d8);
  *(undefined8 *)(param_1 + 0x9e0) = *(undefined8 *)(param_2 + 0x9e0);
  *(undefined8 *)(param_1 + 0x9e8) = *(undefined8 *)(param_2 + 0x9e8);
  *(undefined8 *)(param_1 + 0x9f0) = *(undefined8 *)(param_2 + 0x9f0);
  uVar9 = *(undefined8 *)(param_2 + 0xa00);
  uVar10 = *(undefined8 *)(param_2 + 0x9f8);
  *(undefined4 *)(param_1 + 0xa08) = *(undefined4 *)(param_2 + 0xa08);
  *(undefined8 *)(param_1 + 0x9f8) = uVar10;
  *(undefined8 *)(param_1 + 0xa00) = uVar9;
  *(undefined2 *)(param_1 + 0xa20) = *(undefined2 *)(param_2 + 0xa20);
  *(undefined1 *)(param_1 + 0xa22) = *(undefined1 *)(param_2 + 0xa22);
  *(undefined1 *)(param_1 + 0xa23) = *(undefined1 *)(param_2 + 0xa23);
  *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_2 + 0xa24);
  uVar7 = *(undefined4 *)(param_2 + 0xa28);
  *(undefined1 *)(param_1 + 0xa2c) = *(undefined1 *)(param_2 + 0xa2c);
  *(undefined4 *)(param_1 + 0xa28) = uVar7;
  *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_2 + 0xa30);
  return param_1;
}

