
void FUN_00445340(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)0x0;
  iVar3 = -1;
  do {
    if ((plVar4 == (long *)0x0) || (plVar4 = (long *)plVar4[0xc], plVar4 == (long *)0x0)) {
      iVar3 = iVar3 + 1;
      if (*(int *)(DAT_04c6f448 + 0x40) <= iVar3) {
        return;
      }
      plVar4 = (long *)**(undefined8 **)(*(long *)(DAT_04c6f448 + 0x38) + (long)iVar3 * 8);
    }
    if ((plVar4 != (long *)0x0) && (iVar1 = (int)plVar4[1], iVar1 != 0)) {
      lVar5 = -(long)iVar1;
      lVar2 = (long)iVar1 * 0x10;
      do {
        lVar2 = lVar2 + -0x10;
        if (*(long **)(*plVar4 + lVar2) != (long *)0x0) {
          (**(code **)(**(long **)(*plVar4 + lVar2) + 0x28))();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
  } while( true );
}

