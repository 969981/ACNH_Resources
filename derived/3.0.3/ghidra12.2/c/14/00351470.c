
void FUN_00351470(undefined8 *param_1,code *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  *param_1 = 0;
  *(uint *)(param_1 + 3) = param_4;
  lVar2 = (*param_2)((ulong)param_4 * 0x58,8);
  uVar1 = param_4 - 1;
  param_1[1] = lVar2;
  if (1 < (int)param_4) {
    if (uVar1 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      plVar4 = (long *)(lVar2 + 0x58);
      do {
        uVar3 = uVar3 + 2;
        plVar4[-0xb] = (long)plVar4;
        *plVar4 = (long)(plVar4 + 0xb);
        plVar4 = plVar4 + 0x16;
      } while (((ulong)uVar1 & 0xfffffffe) != uVar3);
    }
    if ((uVar1 & 1) != 0) {
      plVar4 = (long *)(lVar2 + uVar3 * 0x58);
      *plVar4 = (long)(plVar4 + 0xb);
    }
  }
  *(undefined8 *)(lVar2 + (long)(int)(uVar1 * 0xb) * 8) = 0;
  param_1[2] = lVar2;
  return;
}

