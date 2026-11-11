
int FUN_00474640(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    plVar3 = *(long **)(param_1 + 0x20);
    do {
      while( true ) {
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - plVar3[3];
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) - plVar3[3];
        plVar4 = (long *)*plVar3;
        plVar1 = *(long **)(param_1 + 0x50);
        iVar2 = iVar2 + 1;
        if (*(long *)(param_1 + 0x58) == 0) break;
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar3[1],*(undefined8 *)(param_1 + 0x28));
        (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(*(long **)(param_1 + 0x58),plVar3,0x20);
        plVar3 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_004746e8;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar3,*(undefined8 *)(param_1 + 0x28));
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_004746e8:
  *(undefined8 *)(param_1 + 0x20) = 0;
  return iVar2;
}

