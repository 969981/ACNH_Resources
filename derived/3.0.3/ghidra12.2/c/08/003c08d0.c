
void FUN_003c08d0(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar4 <= (int)*(uint *)(param_2 + 1)) {
    uVar2 = uVar4;
  }
  if (0 < (int)uVar2) {
    if (uVar2 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined1 *)(*param_1 + uVar5) = *(undefined1 *)(*param_2 + uVar5);
        lVar3 = *param_2 + uVar5;
        lVar1 = *param_1 + uVar5;
        uVar5 = uVar5 + 2;
        *(undefined1 *)(lVar1 + 1) = *(undefined1 *)(lVar3 + 1);
      } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
    }
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(*param_1 + uVar5) = *(undefined1 *)(*param_2 + uVar5);
    }
    uVar4 = *(uint *)(param_1 + 1);
  }
  if ((int)uVar2 < (int)uVar4) {
    lVar3 = (long)(int)uVar2;
    do {
      *(undefined1 *)(*param_1 + lVar3) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  return;
}

