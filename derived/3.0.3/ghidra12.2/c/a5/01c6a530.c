
undefined8 FUN_01c6a530(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined **)(param_1 + 0xe8) = PTR_DAT_04bc0ec8 + 0x10;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(long *)(param_1 + 0x100) = param_1 + 0xf0;
    *(undefined8 *)(param_1 + 0x108) = 0x10;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined **)(param_1 + 0xd8) = PTR_DAT_04bc0fa0 + 0x10;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else if (*(long *)(param_1 + 0x148) != 0) {
    FUN_003fd8e4(param_1 + 0x170,param_1 + 0xd8);
    return 1;
  }
  if (*(char *)(DAT_053589d8 + 0x11) == '\0') {
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    *(undefined4 *)(param_1 + 8) = 3;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x200);
  lVar3 = DAT_053589d8;
  if (*(char *)(param_1 + 0x248) == '\0') {
    nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x88));
    if ((*(char *)(param_1 + 0x248) != '\0') && (*plVar1 != 0)) {
      *(long *)(param_1 + 0x208) = *plVar1;
      FUN_00187e4c();
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined ***)(param_1 + 0x220) = &PTR_LAB_04a42b08;
    *(undefined1 *)(param_1 + 0x240) = 1;
    *(undefined1 *)(param_1 + 0x248) = 1;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    if (*(char *)(param_1 + 0x168) == '\0') {
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined **)(param_1 + 0xe8) = PTR_DAT_04bc0ec8 + 0x10;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(long *)(param_1 + 0x100) = param_1 + 0xf0;
      *(undefined8 *)(param_1 + 0x108) = 0x10;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined **)(param_1 + 0xd8) = PTR_DAT_04bc0fa0 + 0x10;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    puVar2 = (undefined8 *)FUN_00187df4(8);
    puVar6 = puVar2 + 1;
    *puVar2 = *(undefined8 *)(param_1 + 0xd0);
    puVar5 = *(undefined8 **)(param_1 + 0x208);
    puVar7 = *(undefined8 **)(param_1 + 0x200);
    if (puVar5 != puVar7) {
      do {
        puVar5 = puVar5 + -1;
        puVar2 = puVar2 + -1;
        *puVar2 = *puVar5;
      } while (puVar5 != puVar7);
      puVar5 = (undefined8 *)*plVar1;
    }
    *(undefined8 **)(param_1 + 0x200) = puVar2;
    *(undefined8 **)(param_1 + 0x208) = puVar6;
    *(undefined8 **)(param_1 + 0x210) = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar5);
    }
    *(long *)(param_1 + 0x228) = param_1;
    *(long *)(param_1 + 0x218) = param_1 + 0x1e8;
    *(undefined ***)(param_1 + 0x220) = &PTR_LAB_04a42c28;
    *(undefined1 **)(param_1 + 0x230) = &LAB_01c6b170;
    lVar3 = DAT_053589d8;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x248) == '\0') {
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined ***)(param_1 + 0x220) = &PTR_LAB_04a42b08;
      *(undefined1 *)(param_1 + 0x240) = 1;
      *(undefined8 *)(param_1 + 0x208) = 0;
      *(undefined8 *)(param_1 + 0x210) = 0;
    }
  }
  uVar4 = FUN_01cad2d4(lVar3,plVar1);
  return uVar4;
}

