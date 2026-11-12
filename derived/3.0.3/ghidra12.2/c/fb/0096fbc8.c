
void FUN_0096fbc8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_b8;
  undefined ***pppuStack_b0;
  undefined8 local_a8;
  undefined **ppuStack_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  char *local_58;
  
  uVar3 = *(undefined8 *)(param_2 + 0x34);
  uVar5 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = uVar5;
  *(undefined8 *)(param_1 + 0x34) = uVar3;
  nn::os::GetSystemTick();
  lVar1 = DAT_04ccaf00;
  if (DAT_04ccaf00 == 0) {
    return;
  }
  if (*(long *)(DAT_04ccaf00 + 0x40) == 0) {
    puVar4 = *(undefined8 **)(DAT_04ccaf00 + 0x48);
    *puVar4 = &PTR_FUN_04ba9160;
    puVar4[1] = 0;
    *(undefined8 **)(lVar1 + 0x40) = puVar4;
    if (puVar4[1] == 0) {
      plVar2 = *(long **)(lVar1 + 0x20);
      puVar4[1] = plVar2;
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x88) = param_2;
  if (*(long *)(lVar1 + 0x38) != 0) {
    local_98 = 0;
    local_a8 = 0;
    ppuStack_a0 = &PTR_LAB_04917c40;
    local_60 = &PTR_LAB_048f9770;
    uStack_88 = *(undefined8 *)(lVar1 + 0x20);
    local_58 = "AsysParalellExecutor";
    local_96 = 1;
    local_80 = param_1 + 0xc0;
    local_90 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    pppuStack_b0 = &ppuStack_a0;
    local_b8 = 0;
    FUN_03f45184(*(long *)(lVar1 + 0x38),&local_b8);
  }
  *(long *)(param_1 + 0xa0) = param_2;
  if (*(long *)(lVar1 + 0x38) != 0) {
    local_98 = 0;
    local_a8 = 0;
    ppuStack_a0 = &PTR_LAB_04917c40;
    local_60 = &PTR_LAB_048f9770;
    uStack_88 = *(undefined8 *)(lVar1 + 0x20);
    local_58 = "AsysParalellExecutor";
    local_96 = 1;
    local_80 = param_1 + 0xe0;
    local_90 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    pppuStack_b0 = &ppuStack_a0;
    local_b8 = 0;
    FUN_03f45184(*(long *)(lVar1 + 0x38),&local_b8);
  }
  *(long *)(param_1 + 0xb8) = param_2;
  if (*(long *)(lVar1 + 0x38) != 0) {
    local_98 = 0;
    local_a8 = 0;
    ppuStack_a0 = &PTR_LAB_04917c40;
    local_80 = param_1 + 0x100;
    local_60 = &PTR_LAB_048f9770;
    uStack_88 = *(undefined8 *)(lVar1 + 0x20);
    local_58 = "AsysParalellExecutor";
    local_96 = 1;
    uStack_78 = 0;
    pppuStack_b0 = &ppuStack_a0;
    local_90 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_b8 = 0;
    FUN_03f45184(*(long *)(lVar1 + 0x38),&local_b8);
  }
  lVar6 = *(long *)(lVar1 + 0x40);
  if (lVar6 != 0) {
    if (*(long **)(lVar6 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 8) + 0x28))();
      *(undefined8 *)(lVar6 + 8) = 0;
    }
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  FUN_03f421e0(*(undefined8 *)(lVar1 + 0x20));
  return;
}

