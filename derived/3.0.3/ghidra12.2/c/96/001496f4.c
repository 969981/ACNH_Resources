
void FUN_001496f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long **)(param_4 + 0x12f8) != (long *)0x0) {
    plVar3 = *(long **)(param_4 + 0x12f8);
    do {
      lVar4 = *plVar3;
      plVar5 = (long *)plVar3[2];
      iVar1 = FUN_001471a8(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),param_1,
                           param_2);
      if (0 < iVar1) break;
      FUN_00143b00((long *)(param_4 + 0x12f8),plVar3,0);
      plVar3 = plVar5;
    } while (plVar5 != (long *)0x0);
    if (*(long *)(param_4 + 0x12f8) != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(param_4 + 0x12b0) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(param_4 + 0x12b8) = uVar2;
      uVar2 = FUN_0017adec(*(undefined8 *)(param_4 + 0x12b0),*(undefined8 *)(param_4 + 0x12b8),
                           *(undefined8 *)(param_3 + 0xb0),param_4 + 0x12c0);
      *(undefined8 *)(param_3 + 0xb0) = uVar2;
      return;
    }
  }
  *(undefined8 *)(param_4 + 0x12b0) = 0;
  *(undefined4 *)(param_4 + 0x12b8) = 0;
  return;
}

