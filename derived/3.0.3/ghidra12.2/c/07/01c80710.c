
void FUN_01c80710(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint local_48;
  uint local_44;
  
  uVar5 = *param_2;
  uVar1 = uVar5 & 0xffffff80 |
          uVar5 & 0x3f |
          (uint)(*(char *)(param_1 + 0x50) == '\0' && *(char *)(param_1 + 0x51) == '\0') << 6;
  if (((uVar5 & 1) != 0) ||
     (1 < *(uint *)(*(long *)PTR_DAT_04bb21d0 + 0x38) ||
      *(char *)(*(long *)PTR_DAT_04bb21d0 + 0x2079) != '\0')) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x44);
  }
  local_44 = uVar1;
  iVar6 = (**(code **)(*(long *)(param_1 + 0x38) + (ulong)*(byte *)(param_1 + 0x4c) * 8))
                    ((long *)(param_1 + 0x38));
  *(int *)(param_1 + 0x40) = iVar6;
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
    iVar3 = *(int *)(param_1 + 0x44);
    iVar4 = *(int *)(param_1 + 0x48);
    iVar2 = iVar3;
    if (iVar3 <= iVar4) {
      iVar2 = iVar4;
      iVar4 = iVar3;
    }
    if (iVar6 <= iVar4 || iVar2 <= iVar6) goto LAB_01c807d4;
  }
  local_44 = uVar1 | 1;
LAB_01c807d4:
  if (*(long *)(param_1 + 8) != param_1) {
    lVar9 = (long)*(int *)(param_1 + 0x14);
    plVar7 = (long *)(*(long *)(param_1 + 8) - lVar9);
    do {
      uVar8 = (**(code **)*plVar7)(plVar7,&local_44);
      if (((uVar8 & 1) != 0) && ((local_44 & 1) == 0)) {
        *(long **)(param_1 + 0x18) = plVar7;
        local_44 = local_44 | 1;
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
    } while (plVar7 != (long *)(param_1 - lVar9));
    plVar7 = *(long **)(param_1 + 0x18);
  }
  if (plVar7 != (long *)0x0) {
    local_48 = *param_2 & 1 | 2;
    if (*(char *)(param_1 + 0x50) != '\0' || *(char *)(param_1 + 0x51) != '\0') {
      local_48 = *param_2 & 1;
    }
    uVar8 = (**(code **)(*plVar7 + 8))(plVar7,&local_48);
    if ((uVar8 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}

