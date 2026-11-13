
undefined8 FUN_0149ce8c(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (*(long *)PTR_DAT_04bb59d8 != 0) {
    if (DAT_05aed670 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar6 + 7) == -0x17df00c3) {
      return 0;
    }
  }
  uVar3 = *(uint *)(param_2 + 0xc);
  if ((((int)uVar3 < 0x40) && (uVar4 = *(uint *)(param_2 + 8), (int)uVar4 < 0x40)) &&
     (-1 < (int)(uVar3 | uVar4))) {
    pcVar1 = (char *)(param_1 + 0x280) + (ulong)uVar4 * 0x3000;
    if (0x3f < uVar4) {
      pcVar1 = (char *)(param_1 + 0x280);
    }
    pcVar2 = pcVar1 + (ulong)uVar3 * 0xc0;
    if (0x3f < uVar3) {
      pcVar2 = pcVar1;
    }
    if (((*pcVar2 != '\0') && ((byte)pcVar2[1] - 2 < 4)) ||
       ((pcVar2[0x18] != '\0' && ((byte)pcVar2[0x19] - 2 < 4)))) {
      return 1;
    }
  }
  return 0;
}

