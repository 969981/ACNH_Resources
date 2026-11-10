
byte FUN_00291b90(long param_1,long *param_2,ushort param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  param_1 = param_1 + 8;
  if (lVar1 == param_1) {
    return 0;
  }
  if ((param_2 == (long *)0x0) || (param_3 == 0)) {
    iVar3 = *(int *)(lVar1 + 0x10);
    if (iVar3 != 1) {
      bVar2 = 0;
      do {
        lVar1 = *(long *)(lVar1 + 8);
        bVar2 = iVar3 == 0 | bVar2;
        if (lVar1 == param_1) {
          return bVar2;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != 1);
    }
    return 2;
  }
  bVar2 = 0;
  do {
    uVar4 = (ulong)param_3;
    plVar5 = param_2;
    do {
      if (*(long *)(lVar1 + 0x20) == *plVar5) {
        if (*(int *)(lVar1 + 0x10) == 1) {
          return 2;
        }
        bVar2 = *(int *)(lVar1 + 0x10) == 0 | bVar2;
        break;
      }
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
    lVar1 = *(long *)(lVar1 + 8);
    if (lVar1 == param_1) {
      return bVar2;
    }
  } while( true );
}

