
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036f9f54(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((_DAT_0545c454 != 2) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    iVar1 = *(int *)(puVar3 + 7);
    if ((((((((((((((DAT_05ac0a90 == iVar1 || DAT_05ac0aa0 == iVar1) || DAT_05ac0ab0 == iVar1) ||
                  DAT_05ac0ac0 == iVar1) || DAT_05ac0ad0 == iVar1) || DAT_05ac0ae0 == iVar1) ||
               DAT_05ac0af0 == iVar1) || DAT_05ac0b00 == iVar1) || DAT_05ac0b10 == iVar1) ||
            DAT_05ac0b20 == iVar1) || iVar1 == -0x6efba09b) || iVar1 == -0x21ba1d3a) ||
          iVar1 == -0x68a9a319) && (_DAT_0545c454 == 0)) &&
       (uVar2 = FUN_0290d828(), (uVar2 & 1) == 0)) {
      _DAT_0545c454 = 1;
      if (DAT_0545b2cc != '\0') {
        DAT_0545b308 = 1;
      }
      if (DAT_0545b3e4 != '\0') {
        DAT_0545b420 = 1;
      }
      if (DAT_0545b4fc != '\0') {
        DAT_0545b538 = 1;
      }
      if (DAT_0545b614 != '\0') {
        DAT_0545b650 = 1;
      }
      if (DAT_0545b72c != '\0') {
        DAT_0545b768 = 1;
      }
      if (DAT_0545b844 != '\0') {
        DAT_0545b880 = 1;
      }
      if (DAT_0545b95c != '\0') {
        DAT_0545b998 = 1;
      }
      if (DAT_0545ba74 != '\0') {
        DAT_0545bab0._0_1_ = 1;
      }
      if (DAT_0545bb8c != '\0') {
        DAT_0545bbc8 = 1;
      }
      if (DAT_0545bca4 != '\0') {
        DAT_0545bce0 = 1;
      }
      if (DAT_0545bdbc != '\0') {
        DAT_0545bdf8 = 1;
      }
      if (DAT_0545bed4 != '\0') {
        DAT_0545bf10 = 1;
      }
      if (DAT_0545bfec != '\0') {
        DAT_0545c028 = 1;
      }
      if (DAT_0545c104 != '\0') {
        DAT_0545c140 = 1;
      }
      if (DAT_0545c21c != '\0') {
        DAT_0545c258 = 1;
      }
      return;
    }
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    iVar1 = *(int *)(puVar3 + 7);
    if (((((iVar1 != -0x68a9a319) && (iVar1 != -0x21ba1d3a)) &&
         ((iVar1 != -0x6efba09b && ((DAT_05ac0a90 != iVar1 && (DAT_05ac0aa0 != iVar1)))))) &&
        (DAT_05ac0ab0 != iVar1)) &&
       (((((DAT_05ac0ac0 != iVar1 && (DAT_05ac0ad0 != iVar1)) && (DAT_05ac0ae0 != iVar1)) &&
         ((DAT_05ac0af0 != iVar1 && (DAT_05ac0b00 != iVar1)))) &&
        ((DAT_05ac0b10 != iVar1 &&
         ((DAT_05ac0b20 != iVar1 && (uVar2 = FUN_0290d828(), (uVar2 & 1) == 0)))))))) {
      FUN_036fa350();
      FUN_036fb110(param_1);
      _DAT_0545c454 = 2;
    }
  }
  return;
}

