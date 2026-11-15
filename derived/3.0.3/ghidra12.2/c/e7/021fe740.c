
undefined8 FUN_021fe740(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_1;
  if ((uVar1 < 10) && ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] != '\0')) {
    uVar2 = (ulong)uVar1;
    puVar4 = (undefined *)(&DAT_053fec00)[uVar2 * 0x174];
    if (puVar4 != &DAT_053febf8 + uVar2 * 0xba0) {
      puVar6 = (undefined4 *)(puVar4 + -0x10);
      uVar3 = (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x20);
      uVar5 = uVar3 >> 8 & 0xff;
      uVar1 = uVar3 + 0x18;
      if ('\x04' < (char)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x20)) {
        uVar1 = uVar3;
      }
      do {
        if ((((uint)(byte)puVar4[-0x10] <= (uVar1 & 0xff)) &&
            (((uint)(byte)puVar4[-0x10] != (uVar1 & 0xff) || (*(byte *)((long)puVar6 + 1) <= uVar5))
            )) && (((uVar1 & 0xff) < (uint)*(byte *)((long)puVar6 + 2) ||
                   (((uint)*(byte *)((long)puVar6 + 2) == (uVar1 & 0xff) &&
                    (uVar5 < *(byte *)((long)puVar6 + 3))))))) {
          return 1;
        }
        puVar4 = *(undefined **)(puVar4 + 8);
        puVar6 = (undefined4 *)(puVar4 + -0x10);
      } while (puVar6 != &DAT_053febe8 + uVar2 * 0x2e8);
    }
  }
  return 0;
}

