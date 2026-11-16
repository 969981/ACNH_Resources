
undefined8 FUN_02917170(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_02915598();
  if ((uVar2 & 1) == 0) {
LAB_029171ec:
    uVar4 = 0;
  }
  else {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      if ((iVar1 == 0x758f7eaf) &&
         (((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
          (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 0)))) goto LAB_029171ec;
    }
    uVar4 = 1;
  }
  return uVar4;
}

