
bool FUN_0180bc80(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
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
      if (((iVar2 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) &&
         (iVar4 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
        iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  if (DAT_05292390 == iVar4) {
    bVar1 = true;
  }
  else {
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
        if (((iVar2 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) &&
           (iVar4 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
          iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
    bVar1 = DAT_05292394 == iVar4;
  }
  return bVar1;
}

