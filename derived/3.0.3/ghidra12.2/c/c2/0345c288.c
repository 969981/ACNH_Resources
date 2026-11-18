
void FUN_0345c288(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((param_2 != 0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
    if (*(uint *)(param_1 + 0x10) < 0x10e) {
      lVar4 = param_2 + (ulong)*(uint *)(param_1 + 0x10) * 0x1a8;
      if (*(int *)(lVar4 + 0x1a8) == 1) {
        FUN_03464520(*(undefined8 *)(lVar2 + 0x250),0);
        lVar2 = *(long *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else if (*(int *)(lVar4 + 0x1a8) == 2) {
        if (1 < *(uint *)(param_1 + 0x14)) {
          return;
        }
        lVar1 = param_2 + 0x1bf38;
        if (param_3 != 0) {
          lVar1 = param_3;
        }
        uVar3 = 8;
        if (*(uint *)(param_1 + 0x14) != 0) {
          uVar3 = 0xffffffff;
        }
        FUN_030bbb3c(lVar2,lVar4 + 8,lVar4 + 0x150,uVar3,lVar1);
        FUN_03464670(*(undefined8 *)(*(long *)(param_1 + 8) + 0x250),0);
        *(undefined4 *)(param_1 + 0x14) = 2;
        return;
      }
    }
    lVar4 = *(long *)(lVar2 + 0x270);
    *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
    lVar2 = param_2 + 0x1bf38;
    if (param_3 != 0) {
      lVar2 = param_3;
    }
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
    *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
  }
  return;
}

