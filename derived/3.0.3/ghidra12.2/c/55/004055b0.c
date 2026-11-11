
void FUN_004055b0(long *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  
  lVar10 = param_1[2];
  puVar15 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar10 - (long)puVar15 >> 3) * 0x6db6db6db6db6db7)) {
    puVar11 = (undefined8 *)param_1[1];
    lVar10 = (long)puVar11 - (long)puVar15 >> 3;
    if (param_4 <= (ulong)(lVar10 * 0x6db6db6db6db6db7)) {
      if (param_2 != param_3) {
        lVar10 = 0;
        do {
          lVar14 = param_2 + lVar10;
          lVar12 = lVar10 + 0x38;
          *(undefined2 *)((long)puVar15 + lVar10 + 8) = *(undefined2 *)(lVar14 + 8);
          *(undefined4 *)((long)puVar15 + lVar10 + 0x18) = *(undefined4 *)(lVar14 + 0x18);
          *(undefined8 *)((long)puVar15 + lVar10 + 0x20) = *(undefined8 *)(lVar14 + 0x20);
          uVar6 = *(undefined4 *)(lVar14 + 0x2c);
          *(undefined4 *)((long)puVar15 + lVar10 + 0x28) = *(undefined4 *)(lVar14 + 0x28);
          *(undefined4 *)((long)puVar15 + lVar10 + 0x2c) = uVar6;
          uVar7 = *(undefined1 *)(lVar14 + 0x30);
          *(undefined2 *)((long)puVar15 + lVar10 + 0x32) = *(undefined2 *)(lVar14 + 0x32);
          *(undefined1 *)((long)puVar15 + lVar10 + 0x30) = uVar7;
          lVar10 = lVar12;
        } while (param_2 + lVar12 != param_3);
        puVar15 = (undefined8 *)((long)puVar15 + lVar12);
      }
      while (puVar11 != puVar15) {
        puVar11 = puVar11 + -7;
        (**(code **)*puVar11)(puVar11);
      }
      param_1[1] = (long)puVar15;
      return;
    }
    lVar12 = param_2 + lVar10 * 8;
    if (puVar11 != puVar15) {
      lVar14 = 0;
      do {
        lVar5 = param_2 + lVar14;
        lVar3 = lVar14 + 0x38;
        *(undefined2 *)((long)puVar15 + lVar14 + 8) = *(undefined2 *)(lVar5 + 8);
        *(undefined4 *)((long)puVar15 + lVar14 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
        *(undefined8 *)((long)puVar15 + lVar14 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
        uVar6 = *(undefined4 *)(lVar5 + 0x2c);
        *(undefined4 *)((long)puVar15 + lVar14 + 0x28) = *(undefined4 *)(lVar5 + 0x28);
        *(undefined4 *)((long)puVar15 + lVar14 + 0x2c) = uVar6;
        uVar8 = *(undefined2 *)(lVar5 + 0x32);
        *(undefined1 *)((long)puVar15 + lVar14 + 0x30) = *(undefined1 *)(lVar5 + 0x30);
        *(undefined2 *)((long)puVar15 + lVar14 + 0x32) = uVar8;
        lVar14 = lVar3;
      } while (lVar10 * 8 != lVar3);
    }
    if (lVar12 != param_3) {
      lVar10 = 0;
      puVar1 = PTR_DAT_04bc0f60 + 0x10;
      puVar2 = PTR_DAT_04bc0f50 + 0x10;
      do {
        lVar14 = lVar12 + lVar10;
        plVar4 = (long *)((long)puVar11 + lVar10);
        lVar10 = lVar10 + 0x38;
        *(undefined2 *)(plVar4 + 1) = *(undefined2 *)(lVar14 + 8);
        uVar6 = *(undefined4 *)(lVar14 + 0x18);
        plVar4[2] = (long)puVar1;
        *plVar4 = (long)puVar2;
        *(undefined4 *)(plVar4 + 3) = uVar6;
        plVar4[4] = *(long *)(lVar14 + 0x20);
        uVar6 = *(undefined4 *)(lVar14 + 0x2c);
        *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(lVar14 + 0x28);
        *(undefined4 *)((long)plVar4 + 0x2c) = uVar6;
        uVar7 = *(undefined1 *)(lVar14 + 0x30);
        *(undefined2 *)((long)plVar4 + 0x32) = *(undefined2 *)(lVar14 + 0x32);
        *(undefined1 *)(plVar4 + 6) = uVar7;
      } while (lVar12 + lVar10 != param_3);
      puVar11 = (undefined8 *)((long)puVar11 + lVar10);
    }
    param_1[1] = (long)puVar11;
    return;
  }
  if (puVar15 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)param_1[1];
    puVar9 = puVar15;
    if (puVar11 != puVar15) {
      do {
        puVar11 = puVar11 + -7;
        (**(code **)*puVar11)(puVar11);
      } while (puVar11 != puVar15);
      puVar9 = (undefined8 *)*param_1;
    }
    param_1[1] = (long)puVar15;
    FUN_00187e4c(puVar9);
    lVar10 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_4 < 0x492492492492493) {
    uVar13 = (lVar10 >> 3) * -0x2492492492492492;
    if (uVar13 <= param_4) {
      uVar13 = param_4;
    }
    if (0x249249249249248 < (ulong)((lVar10 >> 3) * 0x6db6db6db6db6db7)) {
      uVar13 = 0x492492492492492;
    }
    if (uVar13 < 0x492492492492493) {
      lVar10 = FUN_00187df4(uVar13 * 0x38);
      *param_1 = lVar10;
      param_1[2] = lVar10 + uVar13 * 0x38;
      if (param_2 != param_3) {
        lVar12 = 0;
        puVar1 = PTR_DAT_04bc0f60 + 0x10;
        puVar2 = PTR_DAT_04bc0f50 + 0x10;
        do {
          lVar14 = param_2 + lVar12;
          plVar4 = (long *)(lVar10 + lVar12);
          lVar12 = lVar12 + 0x38;
          *(undefined2 *)(plVar4 + 1) = *(undefined2 *)(lVar14 + 8);
          uVar6 = *(undefined4 *)(lVar14 + 0x18);
          plVar4[2] = (long)puVar1;
          *plVar4 = (long)puVar2;
          *(undefined4 *)(plVar4 + 3) = uVar6;
          plVar4[4] = *(long *)(lVar14 + 0x20);
          uVar6 = *(undefined4 *)(lVar14 + 0x2c);
          *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(lVar14 + 0x28);
          *(undefined4 *)((long)plVar4 + 0x2c) = uVar6;
          uVar7 = *(undefined1 *)(lVar14 + 0x30);
          *(undefined2 *)((long)plVar4 + 0x32) = *(undefined2 *)(lVar14 + 0x32);
          *(undefined1 *)(plVar4 + 6) = uVar7;
        } while (param_2 + lVar12 != param_3);
        lVar10 = lVar10 + lVar12;
      }
      param_1[1] = lVar10;
      return;
    }
  }
  FUN_01c692c0(param_1);
  return;
}

