
uint FUN_02d6f360(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (DAT_05292338 == 0) {
    return 0;
  }
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar3,0);
    if (iVar2 != 0x758f7eaf) {
      return 0;
    }
    if ((((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)) && (DAT_04c487d4 != -1)) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      return *(uint *)(puVar1 + 4) & 1;
    }
  }
  return 0;
}

