
uint FUN_039a9090(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = 0;
    lVar5 = (long)*(int *)(param_1 + 0x30) << 3;
    do {
      plVar2 = (long *)**(undefined8 **)(lVar4 + lVar3 * 8);
      iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
      if (iVar1 != -1) {
        return (uint)lVar3 & 0xffff | iVar1 << 0x10;
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}

