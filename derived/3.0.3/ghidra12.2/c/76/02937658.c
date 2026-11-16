
void FUN_02937658(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x58))();
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1[4];
    uVar2 = param_2;
    if (*(uint *)(param_1 + 3) <= param_2) {
      uVar2 = 0;
    }
    if (*(uint *)(param_1 + 1) <= param_2) {
      param_2 = 0;
    }
    lVar4 = lVar3 + (long)(int)uVar2 * 0x30;
    plVar5 = (long *)(param_1[2] + (long)(int)param_2 * 0x18);
    if ((*(long *)(lVar4 + 8) != *plVar5 || *(long *)(lVar4 + 0x10) != plVar5[1]) ||
        *(long *)(lVar4 + 0x18) != plVar5[2]) {
      lVar1 = *plVar5;
      lVar6 = plVar5[2];
      *(long *)(lVar4 + 0x10) = plVar5[1];
      *(long *)(lVar4 + 0x18) = lVar6;
      *(long *)(lVar4 + 8) = lVar1;
      *(undefined1 *)(lVar3 + (long)(int)uVar2 * 0x30 + 0x20) = 1;
    }
  }
  return;
}

