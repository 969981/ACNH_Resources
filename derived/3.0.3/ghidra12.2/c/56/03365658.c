
undefined8 FUN_03365658(long param_1)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  lVar1 = param_1 + 0x48;
  if (*(int *)(param_1 + 0x3c) != 1) {
    if ((uVar2 < 0x1a) && ((0x381ffffU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      ppuVar6 = &PTR_DAT_04b20d88 + (int)uVar2;
LAB_033657b4:
      puVar4 = (undefined8 *)*ppuVar6;
    }
    else {
      if ((DAT_05ae76c0 == (int *)0x0) || ((char)DAT_05ae76c0[8] == '\0')) {
        uVar2 = FUN_038ced70();
        if (10 < uVar2) goto LAB_03365780;
LAB_03365748:
        ppuVar6 = &PTR_DAT_04b20d30 + uVar2;
        goto LAB_033657b4;
      }
      uVar5 = (ulong)(uint)(*DAT_05ae76c0 << 1) | 1;
      if (0x1f < (uint)uVar5) {
        uVar5 = 0;
      }
      uVar2 = (uint)(byte)(&DAT_04058440)[uVar5];
      if ((byte)(&DAT_04058440)[uVar5] < 0xb) goto LAB_03365748;
LAB_03365780:
      puVar4 = &DAT_0407ebb1;
    }
    pcVar3 = "Keyboard_Boy_%s";
    goto LAB_033657c0;
  }
  if ((uVar2 < 0x1a) && ((0x381ffffU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    ppuVar6 = &PTR_DAT_04b20d88 + (int)uVar2;
LAB_03365798:
    puVar4 = (undefined8 *)*ppuVar6;
  }
  else {
    if ((DAT_05ae76c0 == (int *)0x0) || ((char)DAT_05ae76c0[8] == '\0')) {
      uVar2 = FUN_038ced70();
      if (10 < uVar2) goto LAB_03365768;
LAB_033656d8:
      ppuVar6 = &PTR_DAT_04b20d30 + uVar2;
      goto LAB_03365798;
    }
    uVar5 = (ulong)(uint)(*DAT_05ae76c0 << 1) | 1;
    if (0x1f < (uint)uVar5) {
      uVar5 = 0;
    }
    uVar2 = (uint)(byte)(&DAT_04058440)[uVar5];
    if ((byte)(&DAT_04058440)[uVar5] < 0xb) goto LAB_033656d8;
LAB_03365768:
    puVar4 = &DAT_0407ebb1;
  }
  pcVar3 = "Keyboard_Girl_%s";
LAB_033657c0:
  FUN_038d1270(lVar1,pcVar3,puVar4);
  (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(lVar1);
  (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(lVar1);
  return *(undefined8 *)(param_1 + 0x50);
}

