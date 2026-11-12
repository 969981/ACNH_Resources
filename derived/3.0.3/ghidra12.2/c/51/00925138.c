
undefined8 FUN_00925138(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = DAT_04cf1b28;
  if (DAT_0519d040 == 0) {
    return 0;
  }
  if ((*(ushort *)(DAT_0519d040 + 0x4b68) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_0519d040 + 0x4b70);
    iVar5 = *(int *)(DAT_0519d040 + 0x4b6c) * 0x20;
    piVar8 = (int *)(**(code **)(*(long *)(DAT_04cf1b28 + 0x2c0) + 0xf0))(DAT_04cf1b28 + 0x2c0);
    iVar2 = *piVar8;
    iVar1 = piVar8[1] + iVar3 * 0x20;
    piVar8 = (int *)(**(code **)(*(long *)(lVar6 + 0x2f8) + 0xf0))(lVar6 + 0x2f8);
    iVar4 = *piVar8;
    lVar9 = (**(code **)(*(long *)(lVar6 + 0x2f8) + 0xf0))(lVar6 + 0x2f8);
    iVar3 = iVar1 + *(int *)(lVar9 + 4);
    if (param_1 != 0) {
      iVar2 = iVar2 + iVar5;
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 0x20) = iVar2 + iVar4 + -1;
      *(int *)(param_1 + 0x24) = iVar3 + -1;
    }
    if (param_2 != 0) {
      piVar8 = (int *)(**(code **)(*(long *)(lVar6 + 0x330) + 0xf0))(lVar6 + 0x330);
      iVar5 = *piVar8 + iVar5;
      piVar8 = (int *)(**(code **)(*(long *)(lVar6 + 0x368) + 0xf0))(lVar6 + 0x368);
      iVar2 = *piVar8;
      (**(code **)(*(long *)(lVar6 + 0x368) + 0xf0))(lVar6 + 0x368);
      iVar1 = iVar1 + -2;
      fVar11 = (float)iVar5 * 0.5;
      fVar12 = (float)(iVar5 + iVar2 + -1) * 0.5;
      uVar10 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar10 = (uint)(fVar11 < 0.0);
      }
      iVar2 = (int)fVar11 - uVar10;
      uVar10 = 0;
      if (fVar12 != (float)(int)fVar12) {
        uVar10 = (uint)(fVar12 < 0.0);
      }
      iVar4 = (int)fVar12 - uVar10;
      iVar5 = iVar2;
      if (iVar2 <= iVar4) {
        iVar5 = iVar4;
      }
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      fVar12 = (float)iVar2 * 10.0 + 2.5;
      fVar11 = (float)iVar5 * 10.0 + 10.0 + -2.5;
      iVar5 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iVar4 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar5;
      if (iVar4 <= iVar5) {
        iVar2 = iVar4;
      }
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      iVar4 = iVar1;
      if (iVar3 <= iVar1) {
        iVar4 = iVar3;
      }
      *(int *)(param_2 + 0x10) = iVar2;
      *(int *)(param_2 + 0x14) = iVar4;
      if (iVar1 <= iVar3) {
        iVar1 = iVar3;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      *(int *)(param_2 + 0x24) = iVar1;
    }
    uVar7 = 1;
  }
  return uVar7;
}

