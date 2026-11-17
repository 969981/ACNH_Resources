
bool FUN_02efcdd0(void)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      return true;
    }
  }
  if (DAT_05abff60 == 0) {
    bVar2 = false;
  }
  else {
    if (DAT_05aed670 == 0) {
      puVar4 = &DAT_055c04a0;
    }
    else {
      puVar4 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar4 = &DAT_055c04a0;
        }
      }
    }
    bVar2 = *(int *)(puVar4 + 7) == -0x17df00c3;
  }
  return bVar2;
}

