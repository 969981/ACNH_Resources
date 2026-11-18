
undefined4 FUN_036c9ec4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_04bb2640;
  if (DAT_05292338 == 0) {
    return 0;
  }
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar2 = FUN_006bd550(*puVar3,0);
    if (iVar2 != 0x758f7eaf) {
      return 0;
    }
    if (((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
       (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)) {
      puVar3 = (undefined8 *)
               (**(code **)(**(long **)puVar1 + 0x18))
                         (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      uVar4 = 0;
      if ((iVar2 == 0x758f7eaf) && (uVar4 = 0, DAT_05aed670 != 0)) {
        uVar4 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          uVar4 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
      }
      if (uVar4 < *(uint *)(param_1 + 0x18)) {
        return *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar4 * 8) + 0x94);
      }
    }
  }
  return 0;
}

