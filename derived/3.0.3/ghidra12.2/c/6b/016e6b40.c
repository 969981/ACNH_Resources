
uint FUN_016e6b40(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (DAT_05aed670 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar2 = 0;
    puVar3 = DAT_055c1b60;
    do {
      if (*(int *)(puVar3 + -1) == *(int *)(puVar4 + 7)) {
        if (((uVar2 ^ 0xffffffff) & 0xffff) == 0) {
          return 0;
        }
        return uVar2;
      }
      puVar3 = (undefined8 *)puVar3[1];
      uVar2 = uVar2 + 1;
    } while (puVar3 != &DAT_055c1b58);
  }
  return 0;
}

