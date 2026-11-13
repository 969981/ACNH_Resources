
void FUN_013d8914(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (**(code **)(*param_1 + 0x58))();
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1[4];
    uVar3 = param_2;
    if (*(uint *)(param_1 + 3) <= param_2) {
      uVar3 = 0;
    }
    if (*(uint *)(param_1 + 1) <= param_2) {
      param_2 = 0;
    }
    lVar5 = lVar4 + (long)(int)uVar3 * 0x28;
    plVar1 = (long *)(param_1[2] + (long)(int)param_2 * 0x10);
    if (*(long *)(lVar5 + 8) != *plVar1 || *(long *)(lVar5 + 0x10) != plVar1[1]) {
      lVar2 = plVar1[1];
      *(long *)(lVar5 + 8) = *plVar1;
      *(long *)(lVar5 + 0x10) = lVar2;
      *(undefined1 *)(lVar4 + (long)(int)uVar3 * 0x28 + 0x18) = 1;
    }
  }
  return;
}

