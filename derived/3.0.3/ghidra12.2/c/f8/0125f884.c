
undefined8 FUN_0125f884(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  
  if (DAT_0519d040 == 0) {
    return 0;
  }
  if (*(char *)(DAT_0519d040 + 0x4b30) != '\0') {
    uVar1 = *(uint *)(DAT_0519d040 + 0x4b34);
    lVar6 = FUN_01260194(0xe7);
    if ((uVar1 < *(uint *)(lVar6 + 0x420)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x428) + (long)(int)uVar1 * 8), lVar6 != 0)) {
      piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 600) + 0xf0))(lVar6 + 600);
      iVar2 = *piVar7;
      lVar8 = (**(code **)(*(long *)(lVar6 + 600) + 0xf0))(lVar6 + 600);
      iVar3 = *(int *)(lVar8 + 4);
      piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x290) + 0xf0))(lVar6 + 0x290);
      iVar4 = *piVar7;
      lVar8 = (**(code **)(*(long *)(lVar6 + 0x290) + 0xf0))(lVar6 + 0x290);
      iVar5 = *(int *)(lVar8 + 4);
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0x14) = iVar3;
      *(int *)(param_1 + 0x20) = iVar2 + iVar4 + -1;
      *(int *)(param_1 + 0x24) = iVar3 + iVar5 + -1;
      piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x1e8) + 0xf0))(lVar6 + 0x1e8);
      iVar2 = *piVar7;
      lVar8 = (**(code **)(*(long *)(lVar6 + 0x1e8) + 0xf0))(lVar6 + 0x1e8);
      iVar3 = *(int *)(lVar8 + 4);
      piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x220) + 0xf0))(lVar6 + 0x220);
      iVar4 = *piVar7;
      lVar6 = (**(code **)(*(long *)(lVar6 + 0x220) + 0xf0))(lVar6 + 0x220);
      iVar5 = *(int *)(lVar6 + 4);
      *(int *)(param_2 + 0x10) = iVar2;
      *(int *)(param_2 + 0x14) = iVar3;
      *(int *)(param_2 + 0x20) = iVar2 + iVar4 + -1;
      *(int *)(param_2 + 0x24) = iVar3 + iVar5 + -1;
      return 1;
    }
  }
  return 0;
}

