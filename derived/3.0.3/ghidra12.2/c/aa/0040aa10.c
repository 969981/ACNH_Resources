
void FUN_0040aa10(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  lVar8 = (long)puVar6 - (long)puVar12 >> 3;
  uVar1 = lVar8 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
    plVar7 = (long *)FUN_00405918(param_1);
    *plVar7 = (long)(PTR_DAT_04bd28f8 + 0x10);
    FUN_0019d600(PTR_DAT_04bcc280,plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    FUN_001f79a0(plVar7 + 7);
    FUN_001f79a0(plVar7 + 3);
    FUN_0019d6e0(plVar7);
    FUN_00185ac4(plVar7);
    return;
  }
  lVar9 = param_1[2] - (long)puVar12 >> 3;
  uVar10 = lVar9 * -0x2492492492492492;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x249249249249248 < (ulong)(lVar9 * 0x6db6db6db6db6db7)) {
    uVar10 = 0x492492492492492;
  }
  if (uVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_00187df4(uVar10 * 0x38);
    puVar12 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
  }
  puVar4 = PTR_DAT_04bd26e0;
  plVar7 = (long *)(lVar9 + lVar8 * 8);
  lVar9 = lVar9 + uVar10 * 0x38;
  *(undefined2 *)(plVar7 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)(plVar7 + 3) = *(undefined1 *)(param_2 + 0x18);
  puVar5 = PTR_DAT_04bd28a0;
  plVar7[4] = *(long *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *plVar7 = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar7 + 5) = uVar2;
  lVar8 = *(long *)(param_2 + 0x30);
  plVar7[2] = (long)(puVar4 + 0x10);
  plVar7[6] = lVar8;
  if (puVar6 == puVar12) {
    *param_1 = (long)plVar7;
    param_1[1] = (long)(plVar7 + 7);
    param_1[2] = lVar9;
  }
  else {
    lVar8 = 0;
    do {
      uVar3 = *(undefined2 *)((long)puVar6 + lVar8 + -0x30);
      lVar11 = lVar8 + -0x38;
      *(undefined **)((long)plVar7 + lVar8 + -0x28) = puVar4 + 0x10;
      *(undefined **)((long)plVar7 + lVar8 + -0x38) = puVar5 + 0x10;
      *(undefined2 *)((long)plVar7 + lVar8 + -0x30) = uVar3;
      *(undefined1 *)((long)plVar7 + lVar8 + -0x20) = *(undefined1 *)((long)puVar6 + lVar8 + -0x20);
      *(undefined8 *)((long)plVar7 + lVar8 + -0x18) = *(undefined8 *)((long)puVar6 + lVar8 + -0x18);
      uVar2 = *(undefined4 *)((long)puVar6 + lVar8 + -0x10);
      *(undefined8 *)((long)plVar7 + lVar8 + -8) = *(undefined8 *)((long)puVar6 + lVar8 + -8);
      *(undefined4 *)((long)plVar7 + lVar8 + -0x10) = uVar2;
      lVar8 = lVar11;
    } while ((undefined8 *)((long)puVar6 + lVar11) != puVar12);
    param_1[2] = lVar9;
    *param_1 = (long)plVar7 + lVar11;
    param_1[1] = (long)(plVar7 + 7);
    do {
      puVar6 = puVar6 + -7;
      (**(code **)*puVar6)(puVar6);
    } while (puVar6 != puVar12);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar12);
  return;
}

