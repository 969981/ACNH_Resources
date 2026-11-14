
uint FUN_01889cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_78;
  undefined4 local_70;
  long *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined4 local_54;
  
  plVar8 = *(long **)(param_1 + 0x3d0);
  local_70 = 0;
  local_78 = 0;
  if (*(int *)(*(long *)plVar8[7] + 0x58) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = **(long **)(*(long *)plVar8[7] + 0x60);
  }
  pcVar4 = (char *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
  if (*pcVar4 == '\0') {
LAB_01889e04:
    puVar6 = (undefined8 *)(**(code **)(*(long *)(lVar9 + 0x90) + 0xf0))((long *)(lVar9 + 0x90));
    local_70 = *(undefined4 *)(puVar6 + 1);
    local_78 = *puVar6;
  }
  else {
    plVar10 = (long *)(lVar9 + 0x60);
    puVar5 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
    puVar1 = PTR_DAT_04bb5ce0;
    if ((0x3f < *puVar5 || *(long *)PTR_DAT_04bb5ce0 == 0) ||
       (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar5 * 0x14 + 0xc) == '\0'))
    goto LAB_01889e04;
    puVar5 = (uint *)(**(code **)(*plVar10 + 0xf0))(plVar10);
    uVar3 = *puVar5;
    if (((uVar3 < 0x40) && (*(long *)puVar1 != 0)) &&
       (lVar9 = *(long *)puVar1 + 0xc, *(char *)(lVar9 + (ulong)uVar3 * 0x14) != '\0')) {
      lVar9 = lVar9 + (ulong)uVar3 * 0x14;
      local_78 = *(undefined8 *)(lVar9 + 4);
      local_70 = *(undefined4 *)(lVar9 + 0xc);
    }
  }
  puStack_60 = &local_78;
  local_58 = *param_4;
  local_68 = plVar8;
  iVar2 = (**(code **)(*plVar8 + 0x158))(plVar8);
  if (iVar2 == 2) {
    lVar9 = *(long *)(plVar8[7] + 0x10);
    if (*(int *)(lVar9 + 0x58) != 0) goto LAB_01889e68;
LAB_01889e84:
    lVar9 = 0;
  }
  else {
    local_54 = 0;
    if (iVar2 != 1) goto LAB_01889e9c;
    lVar9 = *(long *)(plVar8[7] + 8);
    if (*(int *)(lVar9 + 0x58) == 0) goto LAB_01889e84;
LAB_01889e68:
    lVar9 = **(long **)(lVar9 + 0x60);
  }
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x38) + 0xf0))();
  local_54 = *puVar7;
LAB_01889e9c:
  uVar3 = FUN_01a0f320(param_3,param_2,&local_68);
  return uVar3 & 1;
}

