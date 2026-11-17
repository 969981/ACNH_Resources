
void FUN_0310a84c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x288) + 0x900);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x288) + 0x8f8);
  puVar2 = puVar1 + uVar3;
  if (0x12 < uVar3) {
    puVar2 = puVar1;
  }
  plVar9 = (long *)*puVar2;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x30))(plVar9,*(undefined8 *)(param_1 + 0x278));
    bVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
    *(byte *)(param_1 + 0x2f8) = bVar4 & 1;
    if (*(long *)(param_1 + 0x270) != 0) {
      uVar5 = (**(code **)(*plVar9 + 0x88))(plVar9);
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined4 *)(param_1 + 0x3f4);
        lVar6 = *(long *)(param_1 + 0x270);
        *(undefined4 *)(lVar6 + 0x1c) = uVar10;
        uVar11 = *(undefined4 *)(param_1 + 0x3f8);
        *(undefined4 *)(lVar6 + 0x20) = uVar11;
        *(undefined4 *)(lVar6 + 0x2c) = uVar10;
        *(undefined4 *)(lVar6 + 0x30) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x1c);
      *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x20);
    }
  }
  lVar6 = *(long *)(param_1 + 0x2f0);
  if (lVar6 != 0) {
    fVar12 = (*(float *)(*(long *)(param_1 + 0x268) + 8) / 100.0) * 0.6931472;
    iVar7 = (int)(fVar12 * 1.442695);
    fVar12 = ((fVar12 - (float)iVar7 * 0.6931472) + 0.6931472) * 23.08312;
    uVar8 = (ulong)(uint)(int)fVar12;
    uVar5 = (ulong)*(uint *)(lVar6 + 0x550);
    if (0x12 < *(uint *)(lVar6 + 0x550)) {
      uVar5 = 0;
    }
    plVar9 = *(long **)(lVar6 + uVar5 * 8);
    (**(code **)(*plVar9 + 0x18))
              (*(float *)(param_1 + 0x2e8) *
               ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar8 * 8) +
                                *(float *)((long)(PTR_DAT_04bd0d90 + uVar8 * 8) + 4) *
                                (fVar12 - (float)uVar8)) + iVar7 * 0x800000)),plVar9,
               *(undefined8 *)(param_1 + 0x270));
  }
  *(undefined2 *)(param_1 + 0x2ec) = 0x101;
  return;
}

