
void FUN_02ce5bc0(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  uVar8 = (**(code **)(*param_2 + 0x10))(param_2);
  puVar6 = PTR_DAT_04bb43c0;
  if (((uVar8 & 1) != 0) && (uVar1 = *(uint *)(param_1 + 0xf08), 0 < (int)uVar1)) {
    uVar8 = 0;
    do {
      lVar13 = *(long *)puVar6;
      uVar7 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0xf10) + uVar8 * 8));
      if (*(long *)puVar6 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
           (uVar9 = (**(code **)*param_2)
                              (param_2,*(undefined8 *)(*(long *)(param_1 + 0xf10) + uVar8 * 8)),
           (uVar9 & 1) != 0)) {
          puVar11 = *(undefined2 **)(*(long *)(param_1 + 0xf10) + uVar8 * 8);
          uVar5 = *puVar11;
          uVar3 = *(undefined1 *)(puVar11 + 1);
          uVar4 = *(undefined1 *)((long)puVar11 + 3);
          uVar2 = *(undefined4 *)(puVar11 + 2);
          piVar10 = (int *)(**(code **)(*(long *)(param_1 + 0x3b8a8) + 0x10))();
          if (*piVar10 < piVar10[1]) {
            puVar12 = *(undefined8 **)(piVar10 + 4);
            if (puVar12 != (undefined8 *)0x0) {
              *(undefined8 *)(piVar10 + 4) = *puVar12;
            }
            *(undefined2 *)puVar12 = uVar5;
            *(undefined1 *)((long)puVar12 + 2) = uVar3;
            *(undefined1 *)((long)puVar12 + 3) = uVar4;
            *(undefined4 *)((long)puVar12 + 4) = uVar2;
            if (*piVar10 < piVar10[1]) {
              *(undefined8 **)(*(long *)(piVar10 + 2) + (long)*piVar10 * 8) = puVar12;
              *piVar10 = *piVar10 + 1;
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  return;
}

