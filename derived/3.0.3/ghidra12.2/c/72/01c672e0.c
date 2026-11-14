
void FUN_01c672e0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined1 *)(param_1 + 8);
  uVar1 = *puVar2;
  puVar5 = *(undefined1 **)(param_1 + 0x18);
  puVar3 = (undefined1 *)(param_2 + 8);
  puVar4 = *(undefined1 **)(param_2 + 0x18);
  *puVar2 = *puVar3;
  *puVar3 = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 9) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(param_2 + 10) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(param_2 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_2 + 0xc) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(param_2 + 0xd) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)(param_2 + 0xe) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(param_2 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_2 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_2 + 0x14) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_2 + 0x15) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_2 + 0x16) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(param_2 + 0x17) = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar6;
  if (puVar5 == puVar2) {
    *(undefined1 **)(param_2 + 0x18) = puVar3;
  }
  if (puVar4 == puVar3) {
    *(undefined1 **)(param_1 + 0x18) = puVar2;
    return;
  }
  return;
}

