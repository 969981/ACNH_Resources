
/* WARNING: Removing unreachable block (ram,0x030ed694) */
/* WARNING: Removing unreachable block (ram,0x030ed5e8) */
/* WARNING: Removing unreachable block (ram,0x030ed534) */
/* WARNING: Removing unreachable block (ram,0x030ed53c) */
/* WARNING: Removing unreachable block (ram,0x030ed5f0) */
/* WARNING: Removing unreachable block (ram,0x030ed69c) */

void FUN_030ed4d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined **local_88;
  undefined8 uStack_80;
  undefined4 local_68 [10];
  
  FUN_030fa6e8();
  FUN_030faf70(param_1);
  FUN_030fb1e0(param_1);
  FUN_030fb450(param_1);
  puVar2 = PTR_DAT_04bb27a8;
  local_68[0] = 1;
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_88 = &PTR_FUN_04affb48;
    uStack_80 = param_1;
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
  local_68[0] = 1;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_88 = &PTR_FUN_04affb70;
    uStack_80 = param_1;
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
  local_68[0] = 1;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_88 = &PTR_FUN_04affb98;
    uStack_80 = param_1;
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

