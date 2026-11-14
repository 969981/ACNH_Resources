
long FUN_019db0b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2640;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
    iVar3 = FUN_006bd550(*puVar4,0);
    if ((iVar3 == 0x758f7eaf) && (lVar5 = *(long *)puVar2, lVar5 != 0)) {
      plVar6 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)puVar1 + 0x18))
                           (*(long **)puVar1,*(undefined4 *)(lVar5 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        plVar6 = (long *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          plVar6 = &DAT_055c04a0;
        }
      }
      goto LAB_019db170;
    }
  }
  plVar6 = &DAT_055c04a0;
LAB_019db170:
  (**(code **)(*plVar6 + 0x18))(plVar6);
  iVar3 = FUN_00b08880(plVar6[1],0,0);
  if (iVar3 == -0x477aafe0) {
    param_1 = param_1 + 0x388;
  }
  else if (iVar3 == -0x83ceb3d) {
    param_1 = param_1 + 0x268;
  }
  else {
    param_1 = param_1 + 0x148;
  }
  return param_1;
}

