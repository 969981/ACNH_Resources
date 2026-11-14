
bool FUN_0180c830(void)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar3 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      iVar3 = 0;
      if (((iVar1 == 0x758f7eaf) && (iVar3 = 0, DAT_05aed670 != 0)) &&
         (iVar3 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
        iVar3 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  return DAT_05292414 == iVar3;
}

