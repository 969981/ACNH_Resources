
char * FUN_008aedc0(void)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bb2640;
  uVar5 = (ulong)(short)DAT_04c487d4;
  if (uVar5 != 0xffffffffffffffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) != 0) {
      return "PlayerHouse";
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((puVar1[1] >> 2 & 1) != 0) && ((*puVar1 & 1) != 0)) {
        return "IdrHotelRoom";
      }
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 7 & 1) != 0) {
        return "NpcHouse";
      }
    }
    else if ((*puVar1 & 1) != 0) {
      return "WherearenEditIndoor";
    }
  }
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar3 = FUN_006bd550(*puVar4,0);
    if ((iVar3 == 0x758f7eaf) && (DAT_05aed670 != 0)) {
      plVar6 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)puVar2 + 0x18))
                           (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        plVar6 = (long *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          plVar6 = &DAT_055c04a0;
        }
      }
      goto LAB_008aeff0;
    }
  }
  plVar6 = &DAT_055c04a0;
LAB_008aeff0:
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return (char *)plVar6[1];
}

