
void FUN_018dc718(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x58))();
  if ((uVar2 & 1) != 0) {
    uVar2 = param_2;
    if (*(uint *)(param_1 + 3) <= param_2) {
      uVar2 = 0;
    }
    if (*(uint *)(param_1 + 1) <= param_2) {
      param_2 = 0;
    }
    lVar1 = param_1[4] + (long)(int)uVar2 * 0x20;
    plVar3 = (long *)(param_1[2] + (long)(int)param_2 * 10);
    if (*(long *)(lVar1 + 8) != *plVar3 || *(short *)(lVar1 + 0x10) != (short)plVar3[1]) {
      lVar4 = *plVar3;
      *(short *)(lVar1 + 0x10) = (short)plVar3[1];
      *(long *)(lVar1 + 8) = lVar4;
      *(undefined1 *)(lVar1 + 0x12) = 1;
    }
  }
  return;
}

