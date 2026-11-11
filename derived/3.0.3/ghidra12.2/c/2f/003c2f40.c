
void FUN_003c2f40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xd8);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar4 + 0x3c) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(lVar4 + 0x34) = uVar2;
    *(undefined8 *)(lVar4 + 0x2c) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar4 + 0x5c) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar4 + 0x54) = uVar2;
    *(undefined8 *)(lVar4 + 0x4c) = uVar3;
    *(undefined8 *)(lVar4 + 0x44) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(lVar4 + 0x7c) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar4 + 0x74) = uVar2;
    *(undefined8 *)(lVar4 + 0x6c) = uVar3;
    *(undefined8 *)(lVar4 + 100) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(lVar4 + 0x9c) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(lVar4 + 0x94) = uVar2;
    *(undefined8 *)(lVar4 + 0x8c) = uVar3;
    *(undefined8 *)(lVar4 + 0x84) = uVar1;
  }
  return;
}

