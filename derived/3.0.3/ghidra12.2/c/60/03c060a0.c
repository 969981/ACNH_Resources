
/* WARNING: Removing unreachable block (ram,0x03c06588) */
/* WARNING: Removing unreachable block (ram,0x03c063fc) */
/* WARNING: Removing unreachable block (ram,0x03c06284) */
/* WARNING: Removing unreachable block (ram,0x03c06340) */
/* WARNING: Removing unreachable block (ram,0x03c064c0) */
/* WARNING: Removing unreachable block (ram,0x03c06700) */

void FUN_03c060a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar2 = (long *)(param_1 + 0x28);
  lVar4 = *plVar2;
  plVar5 = *(long **)(param_1 + 0x30);
  if ((plVar5 != (long *)0x0 || lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0x40), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x30);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long **)(*(long *)(param_1 + 0x28) + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x30);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x40) = param_2 + 0x70;
  lVar4 = *(long *)(param_2 + 0x70);
  *(long **)(param_2 + 0x70) = plVar2;
  *(long *)(param_1 + 0x28) = lVar4;
  *(long *)(param_1 + 0x30) = param_2 + 0x70;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  plVar2 = (long *)(param_1 + 0x88);
  lVar4 = *plVar2;
  plVar5 = *(long **)(param_1 + 0x90);
  if ((plVar5 != (long *)0x0 || lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0xa0), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x90);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (*(long *)(param_1 + 0x88) != 0) {
      *(long **)(*(long *)(param_1 + 0x88) + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x90);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0xa0) = param_2 + 0x150;
  lVar4 = *(long *)(param_2 + 0x150);
  *(long **)(param_2 + 0x150) = plVar2;
  *(long *)(param_1 + 0x88) = lVar4;
  *(long *)(param_1 + 0x90) = param_2 + 0x150;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(int *)(param_2 + 0x160) = *(int *)(param_2 + 0x160) + 1;
  plVar2 = (long *)(param_1 + 0xe8);
  lVar4 = *plVar2;
  plVar5 = *(long **)(param_1 + 0xf0);
  if ((plVar5 != (long *)0x0 || lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0x100), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0xf0);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x100);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (*(long *)(param_1 + 0xe8) != 0) {
      *(long **)(*(long *)(param_1 + 0xe8) + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0xf0);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x100) = param_2 + 0x90;
  lVar4 = *(long *)(param_2 + 0x90);
  *(long **)(param_2 + 0x90) = plVar2;
  *(long *)(param_1 + 0xe8) = lVar4;
  *(long *)(param_1 + 0xf0) = param_2 + 0x90;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x148);
  lVar4 = *(long *)(param_1 + 0x148);
  puVar6 = *(undefined8 **)(param_1 + 0x150);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x160), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x150);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x160);
  if (lVar4 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (*(long *)(param_1 + 0x148) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x148) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x150);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x160) = param_2 + 0xb0;
  lVar4 = *(long *)(param_2 + 0xb0);
  *(undefined8 **)(param_2 + 0xb0) = puVar1;
  *(long *)(param_1 + 0x148) = lVar4;
  *(long *)(param_1 + 0x150) = param_2 + 0xb0;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x1a8);
  lVar4 = *(long *)(param_1 + 0x1a8);
  puVar6 = *(undefined8 **)(param_1 + 0x1b0);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x1c0), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x1b0);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x1c0);
  if (lVar4 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (*(long *)(param_1 + 0x1a8) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x1a8) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x1b0);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x1c0) = param_2 + 0xd0;
  lVar4 = *(long *)(param_2 + 0xd0);
  *(undefined8 **)(param_2 + 0xd0) = puVar1;
  *(long *)(param_1 + 0x1a8) = lVar4;
  *(long *)(param_1 + 0x1b0) = param_2 + 0xd0;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xe0) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x208);
  puVar6 = *(undefined8 **)(param_1 + 0x210);
  lVar4 = *(long *)(param_1 + 0x208);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x220), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x210);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x220);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x210);
    if (*(long *)(param_1 + 0x208) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x208) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x210);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x220) = param_2 + 0xf0;
  lVar4 = *(long *)(param_2 + 0xf0);
  *(undefined8 **)(param_2 + 0xf0) = puVar1;
  *(long *)(param_1 + 0x210) = param_2 + 0xf0;
  *(long *)(param_1 + 0x208) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x268);
  puVar6 = *(undefined8 **)(param_1 + 0x270);
  lVar4 = *(long *)(param_1 + 0x268);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x280), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x280) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x270);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x280);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x280) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x270);
    if (*(long *)(param_1 + 0x268) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x268) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x270);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x280) = param_2 + 0x110;
  lVar4 = *(long *)(param_2 + 0x110);
  *(undefined8 **)(param_2 + 0x110) = puVar1;
  *(long *)(param_1 + 0x270) = param_2 + 0x110;
  *(long *)(param_1 + 0x268) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x2c8);
  puVar6 = *(undefined8 **)(param_1 + 0x2d0);
  lVar4 = *(long *)(param_1 + 0x2c8);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x2e0), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x2d0);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x2e0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x2d0);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x2c8) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x2d0);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x2e0) = param_2 + 0x50;
  lVar4 = *(long *)(param_2 + 0x50);
  *(undefined8 **)(param_2 + 0x50) = puVar1;
  *(long *)(param_1 + 0x2d0) = param_2 + 0x50;
  *(long *)(param_1 + 0x2c8) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x330);
  puVar6 = *(undefined8 **)(param_1 + 0x338);
  lVar4 = *(long *)(param_1 + 0x330);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x348), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x348) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x338);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x348);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x348) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x338);
    if (*(long *)(param_1 + 0x330) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x330) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x338);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x348) = param_2 + 0x170;
  lVar4 = *(long *)(param_2 + 0x170);
  *(undefined8 **)(param_2 + 0x170) = puVar1;
  *(long *)(param_1 + 0x338) = param_2 + 0x170;
  *(long *)(param_1 + 0x330) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x180) = *(int *)(param_2 + 0x180) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x3f0);
  puVar6 = *(undefined8 **)(param_1 + 0x3f8);
  lVar4 = *(long *)(param_1 + 0x3f0);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x408), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x408) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x3f8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x408);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x408) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x3f8);
    if (*(long *)(param_1 + 0x3f0) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x3f0) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x3f8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x408) = param_2 + 0x230;
  lVar4 = *(long *)(param_2 + 0x230);
  *(undefined8 **)(param_2 + 0x230) = puVar1;
  *(long *)(param_1 + 0x3f8) = param_2 + 0x230;
  *(long *)(param_1 + 0x3f0) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x240) = *(int *)(param_2 + 0x240) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x450);
  puVar6 = *(undefined8 **)(param_1 + 0x458);
  lVar4 = *(long *)(param_1 + 0x450);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x468), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x468) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x458);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x468);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x468) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x458);
    if (*(long *)(param_1 + 0x450) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x450) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x458);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x468) = param_2 + 0x250;
  lVar4 = *(long *)(param_2 + 0x250);
  *(undefined8 **)(param_2 + 0x250) = puVar1;
  *(long *)(param_1 + 0x458) = param_2 + 0x250;
  *(long *)(param_1 + 0x450) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x260) = *(int *)(param_2 + 0x260) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x4b0);
  puVar6 = *(undefined8 **)(param_1 + 0x4b8);
  lVar4 = *(long *)(param_1 + 0x4b0);
  if ((puVar6 != (undefined8 *)0x0 || lVar4 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x4c8), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x4b8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x4c8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x4b8);
    if (*(long *)(param_1 + 0x4b0) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x4b0) + 8) = puVar6;
      puVar6 = *(undefined8 **)(param_1 + 0x4b8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x4c8) = param_2 + 0x210;
  lVar4 = *(long *)(param_2 + 0x210);
  *(undefined8 **)(param_2 + 0x210) = puVar1;
  *(long *)(param_1 + 0x4b8) = param_2 + 0x210;
  *(long *)(param_1 + 0x4b0) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_2 + 0x220) = *(int *)(param_2 + 0x220) + 1;
  return;
}

