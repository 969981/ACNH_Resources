
/* WARNING: Removing unreachable block (ram,0x030ed428) */
/* WARNING: Removing unreachable block (ram,0x030ed370) */
/* WARNING: Removing unreachable block (ram,0x030ed378) */
/* WARNING: Removing unreachable block (ram,0x030ed430) */

void FUN_030ed310(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined **local_88;
  long lStack_80;
  undefined4 local_68 [10];
  
  FUN_030fba54();
  FUN_030fbf04(param_1);
  FUN_030fc014(param_1);
  *(undefined4 *)(param_1 + 0x1bc8) = 0;
  puVar2 = PTR_DAT_04bb27a8;
  local_68[0] = 1;
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_88 = &PTR_FUN_04affbe8;
    lStack_80 = param_1;
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))();
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        FUN_01360490(local_68,puVar1[1],iVar6);
        (*(code *)*local_88)(&local_88,local_68);
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    lVar5 = *(long *)puVar2;
  }
  *(undefined4 *)(param_1 + 0x1bc4) = 0;
  local_68[0] = 1;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_88 = &PTR_FUN_04affbc0;
    lStack_80 = param_1;
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))();
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        FUN_01360490(local_68,puVar1[1],iVar6);
        (*(code *)*local_88)(&local_88,local_68);
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
  }
  return;
}

