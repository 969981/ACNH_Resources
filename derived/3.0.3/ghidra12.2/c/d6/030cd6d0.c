
/* WARNING: Removing unreachable block (ram,0x030cd884) */
/* WARNING: Removing unreachable block (ram,0x030cd7d4) */
/* WARNING: Removing unreachable block (ram,0x030cd71c) */
/* WARNING: Removing unreachable block (ram,0x030cd724) */
/* WARNING: Removing unreachable block (ram,0x030cd7dc) */
/* WARNING: Removing unreachable block (ram,0x030cd88c) */

void FUN_030cd6d0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined **local_98;
  long lStack_90;
  undefined4 local_78 [10];
  
  puVar2 = PTR_DAT_04bb27a8;
  local_78[0] = 0x32;
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x1c0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1c0) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_98 = &PTR_FUN_04afde50;
    lStack_90 = param_1;
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))();
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        FUN_01360490(local_78,puVar1[1],iVar6);
        (*(code *)*local_98)(&local_98,local_78);
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    lVar5 = *(long *)puVar2;
  }
  *(undefined4 *)(param_1 + 0xe10) = 0;
  local_78[0] = 0x32;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x1c0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1c0) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_98 = &PTR_FUN_04afdea0;
    lStack_90 = param_1;
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))();
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        FUN_01360490(local_78,puVar1[1],iVar6);
        (*(code *)*local_98)(&local_98,local_78);
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    lVar5 = *(long *)puVar2;
  }
  *(undefined4 *)(param_1 + 0xe0c) = 0;
  local_78[0] = 0x32;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x1c0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1c0) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_98 = &PTR_FUN_04afde78;
    lStack_90 = param_1;
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))();
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        FUN_01360490(local_78,puVar1[1],iVar6);
        (*(code *)*local_98)(&local_98,local_78);
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
  }
  return;
}

