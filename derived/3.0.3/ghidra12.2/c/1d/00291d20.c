
undefined8 FUN_00291d20(long param_1,long *param_2,ushort param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  param_1 = param_1 + 8;
  if (lVar1 != param_1) {
    if (param_3 == 0) {
      do {
        lVar1 = *(long *)(lVar1 + 8);
      } while (lVar1 != param_1);
    }
    else {
      do {
        uVar2 = (ulong)param_3;
        plVar3 = param_2;
        do {
          if (*(long *)(lVar1 + 0x20) == *plVar3) {
            if (*(char *)(lVar1 + 0x18) == '\0') {
              return 0;
            }
            break;
          }
          uVar2 = uVar2 - 1;
          plVar3 = plVar3 + 1;
        } while (uVar2 != 0);
        lVar1 = *(long *)(lVar1 + 8);
      } while (lVar1 != param_1);
    }
  }
  return 1;
}

