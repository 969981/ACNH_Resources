
bool FUN_0097be30(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  lVar1 = DAT_04cfae30;
  if (DAT_04cfae30 != 0) {
    if (*(char *)(DAT_04cfae30 + 0x1198) == '\0') {
      return true;
    }
    if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
       (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      if (((iVar2 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
         ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
          (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
        return true;
      }
    }
    if ((*(int *)(lVar1 + 0x11b0) <= *(int *)(param_1 + 8) &&
         *(int *)(param_1 + 8) <= *(int *)(lVar1 + 0x11c0)) &&
       (*(int *)(lVar1 + 0x11b4) <= *(int *)(param_1 + 0xc))) {
      return *(int *)(param_1 + 0xc) <= *(int *)(lVar1 + 0x11c4);
    }
  }
  return false;
}

