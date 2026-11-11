
void FUN_003d2f30(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  uVar3 = FUN_003c5c08();
  lVar4 = FUN_003cbb70(uVar3,0x28,0);
  *(undefined4 *)(lVar4 + 8) = 0x42;
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(long *)(lVar4 + 0x20) = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x10);
  FUN_003cc15c(uVar3,lVar4);
  FUN_003cbf90(uVar3,0,0);
  plVar5 = *(long **)(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
  if (plVar5 != plVar1) {
    do {
      if ((code *)plVar5[2] != (code *)0x0) {
        (*(code *)plVar5[2])(plVar5[3]);
      }
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != plVar1);
    while (plVar5 = *(long **)(param_1 + 0x48), plVar5 != plVar1) {
      plVar2 = (long *)plVar5[1];
      lVar4 = *plVar2;
      *(long **)(*plVar5 + 8) = plVar2;
      *plVar2 = *plVar5;
      *(long **)(lVar4 + 8) = plVar5;
      *plVar5 = lVar4;
    }
  }
  return;
}

