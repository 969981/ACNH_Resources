
/* WARNING: Removing unreachable block (ram,0x030cdaf0) */
/* WARNING: Removing unreachable block (ram,0x030cda40) */
/* WARNING: Removing unreachable block (ram,0x030cd988) */
/* WARNING: Removing unreachable block (ram,0x030cd990) */
/* WARNING: Removing unreachable block (ram,0x030cda48) */
/* WARNING: Removing unreachable block (ram,0x030cdaf8) */

void FUN_030cd930(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined **local_98;
  undefined8 uStack_90;
  undefined4 local_78 [10];
  
  FUN_030d19e8();
  FUN_030d1d80(param_1);
  puVar2 = PTR_DAT_04bb27a8;
  local_78[0] = 0x32;
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x1c0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1c0) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_98 = &PTR_FUN_04afddd8;
    uStack_90 = param_1;
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
  local_78[0] = 0x32;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x1c0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1c0) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_98 = &PTR_FUN_04afde00;
    uStack_90 = param_1;
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
  local_78[0] = 0x32;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(lVar5 + 0x1c0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1c0) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_98 = &PTR_FUN_04afde28;
    uStack_90 = param_1;
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

