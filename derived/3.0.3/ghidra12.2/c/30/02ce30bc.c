
void FUN_02ce30bc(long param_1,uint param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x68a64);
  piVar3 = piVar1 + (ulong)param_2 * 4;
  if (9 < param_2) {
    piVar3 = piVar1;
  }
  if (*piVar3 == 3) {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = 0;
    if (param_2 != 0) {
      if (param_2 == 3) {
        uVar5 = 2;
      }
      else {
        if (param_2 != 4) goto LAB_02ce3180;
        uVar5 = 1;
      }
    }
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | (byte)(1 << (ulong)uVar5);
    puVar2 = (undefined2 *)(param_1 + 0x58) + (ulong)uVar5 * 4;
    if (2 < uVar5) {
      puVar2 = (undefined2 *)(param_1 + 0x58);
    }
    *puVar2 = DAT_05586008;
    *(undefined1 *)(puVar2 + 1) = DAT_0558600a;
    *(undefined1 *)((long)puVar2 + 3) = DAT_0558600b;
    *(undefined4 *)(puVar2 + 2) = DAT_0558600c;
    FUN_02ce119c(param_1 + 0x10,uVar4);
  }
LAB_02ce3180:
  piVar3 = piVar1 + (ulong)param_2 * 4;
  if (9 < param_2) {
    piVar3 = piVar1;
  }
  *(undefined1 **)piVar3 = &DAT_ffffffff00000006;
  *(undefined1 *)(piVar3 + 3) = 0;
  piVar3[2] = -1;
  return;
}

