
undefined8 FUN_00924eb8(long param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  
  if (((DAT_04cf1b28 == 0) || (DAT_0519d040 == 0)) ||
     ((*(ushort *)(DAT_0519d040 + 0x4b68) & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_0519d040 + 0x4b6c);
    iVar2 = *(int *)(DAT_0519d040 + 0x4b70);
    piVar6 = (int *)(**(code **)(*(long *)(DAT_04cf1b28 + 0x218) + 0xf0))(DAT_04cf1b28 + 0x218);
    uVar5 = 0;
    piVar7 = (int *)&DAT_0000000c;
    if (param_1 != 0) {
      piVar7 = piVar6 + 1;
    }
    iVar3 = *piVar7;
    piVar7 = (int *)&DAT_00000008;
    if (param_1 != 0) {
      piVar7 = piVar6;
    }
    *(int *)(param_1 + 8) = *piVar7 + iVar1 * 0x20;
    *(int *)(param_1 + 0xc) = iVar3 + iVar2 * 0x20;
    lVar4 = DAT_04cf1b28;
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(DAT_04cf1b28 + 0x3d8))) {
      plVar10 = (long *)(*(long *)(*(long *)(DAT_04cf1b28 + 0x3e0) + (ulong)param_3 * 8) + 0x30);
      piVar7 = (int *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      iVar1 = *piVar7;
      lVar8 = (**(code **)(*plVar10 + 0xf0))(plVar10);
      iVar2 = *(int *)(lVar8 + 4);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
      if (param_2 != (uint *)0x0) {
        pbVar9 = (byte *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x3e0) +
                                                         (ulong)param_3 * 8) + 0x68) + 0xf0))();
        *param_2 = (uint)*pbVar9;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

