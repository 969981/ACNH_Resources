
bool FUN_0180dc40(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (DAT_05292338 != 0) {
    iVar4 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar4 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        iVar4 = 0;
        if ((iVar2 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) {
          iVar4 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
          }
        }
      }
      if (DAT_05292338 == 0) {
        return false;
      }
    }
    if (DAT_04c487d4 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 7 & 1) != 0) {
        return iVar4 != 0;
      }
    }
  }
  return false;
}

