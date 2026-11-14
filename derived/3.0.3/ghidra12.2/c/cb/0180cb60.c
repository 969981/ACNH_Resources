
undefined8 FUN_0180cb60(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (DAT_05292338 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar2 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      iVar2 = 0;
      if (((iVar1 == 0x758f7eaf) && (iVar2 = 0, DAT_05aed670 != 0)) &&
         (iVar2 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
        iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  if (DAT_0529238c == iVar2) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      if (((iVar2 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0))))
         && (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 0)) goto LAB_0180cc68;
    }
    uVar4 = 1;
  }
  else {
LAB_0180cc68:
    uVar4 = 0;
  }
  return uVar4;
}

