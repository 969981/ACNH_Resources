
void FUN_0025ef98(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar7 = *(undefined1 **)(param_1 + 8);
  uVar4 = *(undefined1 *)(param_1 + 0x12);
  *puVar7 = 1;
  uVar3 = *(undefined2 *)(param_1 + 0x16);
  puVar7[1] = uVar4;
  *(undefined2 *)(puVar7 + 2) = uVar3;
  memset(puVar7 + 4,0,6);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 8);
  uVar1 = *(undefined4 *)(lVar5 + 0x37c);
  uVar2 = *(undefined4 *)(lVar5 + 0x1700);
  *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(lVar8 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(lVar5 + 0x1704);
  uVar6 = *(undefined8 *)(lVar5 + 0x1708);
  *(undefined4 *)(lVar8 + 0x14) = uVar2;
  *(undefined4 *)(lVar8 + 0x18) = uVar1;
  *(undefined8 *)(lVar8 + 0x20) = uVar6;
  uVar4 = FUN_0025b278();
  *(undefined1 *)(lVar8 + 0x28) = uVar4;
  memset((void *)(lVar8 + 0x29),0,7);
  return;
}

