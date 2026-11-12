
undefined4 FUN_0097a980(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  if (DAT_05292338 == 0) {
    return 7;
  }
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar1 = FUN_006bd550(*puVar3,0);
    if ((iVar1 == 0x758f7eaf) &&
       (((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
         (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
        uVar2 = 7;
      }
      else {
        uVar2 = FUN_0093b9a4(DAT_04cfae30 + 0x28,param_1);
      }
      return uVar2;
    }
  }
  return 7;
}

