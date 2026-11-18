
undefined8 FUN_033fa1e0(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (DAT_05abff60 != 0) {
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar3 + 7) == -0x17df00c3) {
      return 1;
    }
    if (DAT_04c487d4 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 0x19 & 1) != 0) && ((*puVar1 >> 7 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

