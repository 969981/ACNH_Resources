
void FUN_039b78e0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_04b6a7c8;
  lVar2 = param_1[2];
  if (*(short *)(lVar2 + 0x6c) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    lVar5 = 0x80;
    do {
      uVar4 = uVar4 + 1;
      plVar1 = (long *)(*(long *)(lVar2 + 0x38) + lVar5);
      lVar2 = param_1[3] + lVar3;
      lVar5 = lVar5 + 0xa8;
      lVar3 = lVar3 + 0x198;
      *(long **)(lVar2 + 0x10) = plVar1 + -0x10;
      *plVar1 = lVar2;
      lVar2 = param_1[2];
    } while (uVar4 < *(ushort *)(lVar2 + 0x6c));
  }
  if (*(short *)(lVar2 + 0x6a) != 0) {
    lVar5 = 0;
    uVar4 = 0;
    lVar3 = 8;
    do {
      uVar4 = uVar4 + 1;
      plVar1 = (long *)(param_1[4] + lVar3);
      lVar2 = *(long *)(lVar2 + 0x28) + lVar5;
      lVar5 = lVar5 + 0x60;
      lVar3 = lVar3 + 0x1118;
      *(long **)(lVar2 + 0x48) = plVar1 + -1;
      *plVar1 = lVar2;
      lVar2 = param_1[2];
    } while (uVar4 < *(ushort *)(lVar2 + 0x6a));
  }
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x6c);
  if (uVar4 != 0) {
    puVar6 = (undefined8 *)param_1[3];
    do {
      (**(code **)*puVar6)(puVar6);
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 0x33;
    } while (uVar4 != 0);
    lVar2 = param_1[2];
  }
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x6a);
  if (uVar4 != 0) {
    puVar6 = (undefined8 *)param_1[4];
    do {
      (**(code **)*puVar6)(puVar6);
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 0x223;
    } while (uVar4 != 0);
    lVar2 = param_1[2];
  }
  *(undefined8 *)(lVar2 + 0x60) = 0;
  FUN_038e1a84(param_1 + 0x7c);
  return;
}

