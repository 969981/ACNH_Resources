
bool FUN_033fb320(void)

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
  if (((DAT_05292434 != iVar4) || (DAT_0523adf0 == 0)) ||
     ((bVar1 = *(int *)(DAT_0523adf0 + 0x98) != 0, *(int *)(DAT_0523adf0 + 0x98) != 0 &&
      (**(char **)(DAT_0523adf0 + 0x60) == '\0')))) {
    bVar1 = false;
  }
  return bVar1;
}

