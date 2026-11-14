
undefined8 FUN_01d88750(long param_1,long *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x18) == param_1 + 0x10) {
    return 0;
  }
  lVar5 = (long)*(int *)(param_1 + 0x24);
  lVar6 = *(long *)(param_1 + 0x18) - lVar5;
  do {
    if (((*(byte *)(lVar6 + 0x98) >> 3 & 1) != 0) &&
       (((param_3 ^ (*(byte *)(lVar6 + 0x98) & 4) >> 2) & 1) == 0)) {
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = param_2[1];
      (**(code **)(*(long *)(lVar6 + 8) + 0x18))((long *)(lVar6 + 8));
      lVar3 = *(long *)(lVar6 + 0x10);
      if (lVar7 == lVar3) {
        return 1;
      }
      uVar4 = 0;
      bVar2 = true;
      do {
        lVar7 = param_2[1] + 2 + uVar4;
        cVar1 = *(char *)(lVar7 + -2);
        if (cVar1 != *(char *)(lVar3 + uVar4)) break;
        if (cVar1 == '\0') {
          if (bVar2) {
            return 1;
          }
          break;
        }
        cVar1 = *(char *)(lVar7 + -1);
        if (cVar1 != *(char *)(lVar3 + uVar4 + 1)) break;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = *(char *)(param_2[1] + 2 + uVar4);
        if (cVar1 != *(char *)(lVar3 + uVar4 + 2)) break;
        if (cVar1 == '\0') {
          return 1;
        }
        bVar2 = uVar4 < 0x7fffe;
        uVar4 = uVar4 + 3;
      } while (uVar4 != 0x80001);
    }
    lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
    if (lVar6 == (param_1 + 0x10) - lVar5) {
      return 0;
    }
  } while( true );
}

