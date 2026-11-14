
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_017ba064(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xee8) != 0) {
    return true;
  }
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
  if (DAT_052923e8._4_4_ == iVar4) {
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
    bVar1 = _DAT_05292424 == iVar4;
  }
  return bVar1;
}

