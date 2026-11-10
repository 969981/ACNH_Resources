
void FUN_00219460(undefined1 *param_1,ushort param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_0021f454();
  uVar6 = (ulong)param_2;
  lVar4 = FUN_00285d10(uVar6 * 0x5ac,uVar3);
  if ((param_2 != 0) && (lVar4 != 0)) {
    lVar5 = lVar4;
    do {
      FUN_00219434(lVar5);
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + 0x5ac;
    } while (uVar6 != 0);
  }
  *(long *)(param_1 + 0x28) = lVar4;
  *(ushort *)(param_1 + 0x20) = param_2;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  memset(param_1 + 8,0xff,4);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(short *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    lVar4 = 0x5aa;
    do {
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x28) + lVar4);
      *(undefined2 *)(puVar1 + -0x5aa) = 0;
      memset(puVar1 + -0x5a8,0,0x5a0);
      *(undefined2 *)(puVar1 + -2) = 0;
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x5ac;
      uVar2 = *(ushort *)(param_1 + 0x20);
      *(undefined4 *)(puVar1 + -6) = 0;
      *puVar1 = 0;
    } while (uVar6 < uVar2);
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0;
  return;
}

