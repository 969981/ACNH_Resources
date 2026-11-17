
void FUN_03134ef0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x250);
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)((long)plVar3 + 0x2c) = 0;
    if ((param_2 & 1) != 0) {
      uVar2 = FUN_03c83810(plVar3);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(undefined4 *)((long)plVar3 + 0x24);
        *(int *)((long)plVar3 + 0x24) = (int)plVar3[5];
        *(undefined4 *)(plVar3 + 5) = uVar1;
        *(byte *)((long)plVar3 + 0x21) = *(byte *)((long)plVar3 + 0x21) ^ 1;
        (**(code **)(*plVar3 + 0x48))(plVar3);
        if ((long *)plVar3[10] != plVar3 + 9) {
          lVar5 = (long)*(int *)((long)plVar3 + 0x5c);
          plVar4 = (long *)(plVar3[10] - lVar5);
          do {
            (**(code **)(*plVar4 + 0x18))
                      (plVar4,(int)plVar3[5],*(undefined4 *)((long)plVar3 + 0x24));
            plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
          } while (plVar4 != (long *)((long)(plVar3 + 9) - lVar5));
        }
      }
      FUN_03c835a0(plVar3);
      return;
    }
    do {
      if ((char)plVar3[4] == '\0') {
        FUN_03c83a50(plVar3,1);
      }
      FUN_03c835a0(plVar3);
    } while (*(int *)((long)plVar3 + 0x2c) != -0x80000000);
  }
  return;
}

