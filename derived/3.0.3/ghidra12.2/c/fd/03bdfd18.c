
undefined8 FUN_03bdfd18(long param_1)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined4 uVar10;
  float fVar11;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_03bdfe24:
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x8c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x7c) = 0xbf8000003f800000;
    *(undefined8 *)(param_1 + 0x94) = 0;
    lVar2 = FUN_03be1390();
    *(long *)(param_1 + 0x60) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    sVar1 = *(short *)(*(long *)(param_1 + 0x28) + 4);
    puVar9 = *(uint **)(lVar2 + ((ulong)*(byte *)(lVar2 + 0xd8) & 1) * 8 + 0x20);
    iVar6 = (int)sVar1;
    if (*puVar9 <= (uint)(int)sVar1) {
      iVar6 = 0;
    }
    lVar7 = *(long *)(puVar9 + 2) + (long)iVar6 * 0x18;
    *(long *)(param_1 + 0x58) = lVar7;
    lVar8 = *(long *)(lVar7 + 8);
    if (*(char *)(lVar7 + 0x10) == '\0') {
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar8 + 0xc);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar8 + 0x1c);
      uVar10 = *(undefined4 *)(lVar8 + 0x2c);
    }
    else {
      uVar5 = *(undefined8 *)(lVar8 + 0x38);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar8 + 0x30);
      uVar10 = (undefined4)uVar5;
    }
    *(undefined4 *)(param_1 + 0x98) = uVar10;
    plVar3 = (long *)(**(code **)(**(long **)(*(long *)(lVar2 + 0x30) + 0x18) + 0x18))();
    fVar11 = (float)(**(code **)(*plVar3 + 0x40))
                              (plVar3,*(undefined8 *)(param_1 + 0x28),
                               *(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    *(float *)(param_1 + 0x34) = fVar11;
    if (fVar11 <= 0.0) {
      uVar4 = FUN_03bde320(param_1);
      if ((uVar4 & 1) == 0) goto LAB_03bdfe24;
      uVar10 = 3;
    }
    else {
      uVar10 = 2;
    }
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x30) = uVar10;
  }
  return uVar5;
}

