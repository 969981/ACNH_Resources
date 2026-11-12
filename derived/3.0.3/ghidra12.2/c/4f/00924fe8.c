
undefined8 FUN_00924fe8(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  long *plVar11;
  
  if (((DAT_04cf1b28 == 0) || (DAT_0519d040 == 0)) ||
     ((*(ushort *)(DAT_0519d040 + 0x4b68) & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_0519d040 + 0x4b6c);
    iVar10 = *(int *)(DAT_0519d040 + 0x4b70);
    piVar6 = (int *)(**(code **)(*(long *)(DAT_04cf1b28 + 0x218) + 0xf0))(DAT_04cf1b28 + 0x218);
    lVar8 = DAT_04cf1b28;
    uVar5 = 0;
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(DAT_04cf1b28 + 0x3d8))) {
      iVar2 = *piVar6;
      iVar3 = piVar6[1];
      plVar11 = (long *)(*(long *)(*(long *)(DAT_04cf1b28 + 0x3e0) + (ulong)param_3 * 8) + 0x30);
      piVar6 = (int *)(**(code **)(*plVar11 + 0xf0))(plVar11);
      iVar4 = *piVar6;
      lVar7 = (**(code **)(*plVar11 + 0xf0))(plVar11);
      iVar4 = iVar2 + iVar1 * 0x20 + iVar4;
      iVar1 = iVar3 + iVar10 * 0x20 + *(int *)(lVar7 + 4);
      *(int *)(param_1 + 0x10) = iVar4;
      *(int *)(param_1 + 0x14) = iVar1;
      *(int *)(param_1 + 0x20) = iVar4 + 3;
      *(int *)(param_1 + 0x24) = iVar1 + 3;
      if (param_3 < *(uint *)(lVar8 + 0x3d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x3e0) + (ulong)param_3 * 8);
      }
      else {
        lVar8 = 0;
      }
      pcVar9 = (char *)(**(code **)(*(long *)(lVar8 + 0x98) + 0xf0))();
      uVar5 = 1;
      iVar10 = -2;
      if (*pcVar9 != '\0') {
        iVar10 = 4;
      }
      *(int *)(param_2 + 0x10) = iVar10 + iVar4;
      *(int *)(param_2 + 0x14) = iVar1 + 2;
      *(int *)(param_2 + 0x20) = iVar10 + iVar4 + 1;
      *(int *)(param_2 + 0x24) = iVar1 + 3;
    }
  }
  return uVar5;
}

