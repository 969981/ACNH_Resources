
undefined1 FUN_019da620(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2640;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
    iVar3 = FUN_006bd550(*puVar4,0);
    if ((iVar3 == 0x758f7eaf) && (lVar6 = *(long *)puVar2, lVar6 != 0)) {
      plVar7 = &DAT_055c04a0;
      if (*(long *)(lVar6 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)puVar1 + 0x18))
                           (*(long **)puVar1,*(undefined4 *)(lVar6 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        plVar7 = (long *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          plVar7 = &DAT_055c04a0;
        }
      }
      goto LAB_019da6e0;
    }
  }
  plVar7 = &DAT_055c04a0;
LAB_019da6e0:
  (**(code **)(*plVar7 + 0x18))(plVar7);
  iVar3 = FUN_00b08880(plVar7[1],0,0);
  if (iVar3 == -0x477aafe0) {
    param_1 = param_1 + 0x6e8;
  }
  else if (iVar3 == -0x83ceb3d) {
    param_1 = param_1 + 0x5c8;
  }
  else {
    param_1 = param_1 + 0x4a8;
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar6 = 0;
    do {
      puVar5 = (ushort *)
               (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + lVar6 * 8) + 0x30) +
                           0xf0))();
      if (*puVar5 == param_2) {
        return 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x78));
  }
  return 0;
}

