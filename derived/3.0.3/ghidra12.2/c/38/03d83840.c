
uint FUN_03d83840(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = (**(code **)(*param_1 + 0xf0))();
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x57) = 4;
    plVar4 = (long *)param_1[0x50];
    *(uint *)((long)plVar4 + 0x2c) = ((uint)*(byte *)((long)param_1 + 0x2c3) << 2 ^ 0xffffffff) & 4;
    uVar3 = FUN_03c83810(plVar4);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined4 *)((long)plVar4 + 0x24);
      *(int *)((long)plVar4 + 0x24) = (int)plVar4[5];
      *(undefined4 *)(plVar4 + 5) = uVar1;
      *(byte *)((long)plVar4 + 0x21) = *(byte *)((long)plVar4 + 0x21) ^ 1;
      (**(code **)(*plVar4 + 0x48))(plVar4);
      if ((long *)plVar4[10] != plVar4 + 9) {
        lVar6 = (long)*(int *)((long)plVar4 + 0x5c);
        plVar5 = (long *)(plVar4[10] - lVar6);
        do {
          (**(code **)(*plVar5 + 0x18))(plVar5,(int)plVar4[5],*(undefined4 *)((long)plVar4 + 0x24));
          plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
        } while (plVar5 != (long *)((long)(plVar4 + 9) - lVar6));
      }
    }
    FUN_03c835a0(plVar4);
  }
  return uVar2 & 1;
}

