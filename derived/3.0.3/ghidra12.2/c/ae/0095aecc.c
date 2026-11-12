
void FUN_0095aecc(undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(char *)(*(long *)PTR_DAT_04bb4508 + 8) != '\0') && (DAT_04c487d4 != -1)) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x1c & 1) == 0) goto LAB_0095af88;
    }
    FUN_0095b030(param_1);
  }
LAB_0095af88:
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
  if (*(int *)(puVar3 + 7) == -0x10e0fba8) {
    FUN_0095b8c0(param_1);
    return;
  }
  return;
}

