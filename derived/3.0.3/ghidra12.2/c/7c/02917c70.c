
int FUN_02917c70(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar1 = FUN_006bd550(*puVar2,0);
    if ((iVar1 == 0x758f7eaf) &&
       (((DAT_05aed670 != 0 && (lVar5 = *(long *)(DAT_05aed670 + 0x330), lVar5 != 0)) &&
        (lVar6 = *(long *)(lVar5 + 600), lVar6 != lVar5 + 0x250)))) {
      lVar3 = lVar6 + -0x40;
      iVar1 = 0;
      if ((param_2 & 1) == 0) {
        while ((*(char *)(lVar3 + 0x3c) != '\0' ||
               (uVar4 = FUN_02932e20(lVar3,param_1), (uVar4 & 1) == 0))) {
          lVar6 = *(long *)(lVar6 + 8);
          iVar1 = iVar1 + 1;
          lVar3 = lVar6 + -0x40;
          if (lVar3 == lVar5 + 0x210) {
            return -1;
          }
        }
      }
      else {
        while (uVar4 = FUN_02932e20(lVar3,param_1), (uVar4 & 1) == 0) {
          lVar6 = *(long *)(lVar6 + 8);
          iVar1 = iVar1 + 1;
          lVar3 = lVar6 + -0x40;
          if (lVar3 == lVar5 + 0x210) {
            return -1;
          }
        }
      }
      return iVar1;
    }
  }
  return -1;
}

