
long * FUN_0014f04c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_00147178();
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)0x0;
    iVar4 = -1;
    do {
      plVar5 = (long *)*puVar3;
      if ((plVar5[0x9c] + plVar5[0xa0] == 0) && (*plVar5 == 0)) {
        iVar1 = FUN_001471a8(auVar6._0_8_,auVar6._8_8_,plVar5[0x47],plVar5[0x48]);
        if (iVar1 <= iVar4) {
          iVar1 = iVar4;
          plVar5 = plVar2;
        }
        plVar2 = plVar5;
        iVar4 = iVar1;
      }
      puVar3 = (undefined8 *)puVar3[2];
    } while (puVar3 != (undefined8 *)0x0);
    if (plVar2 != (long *)0x0) {
      FUN_0014ed38(param_2,plVar2);
      *(long *)(*(long *)(param_1 + 0x1120) + 0x30) =
           *(long *)(*(long *)(param_1 + 0x1120) + 0x30) + -1;
      *plVar2 = param_1;
    }
  }
  return plVar2;
}

