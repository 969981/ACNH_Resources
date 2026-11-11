
uint FUN_00439c40(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar5 = uVar2;
  if (uVar2 == (*(uint *)((long)param_1 + 0x24) & 0x3fffffff)) {
    FUN_00426990(*param_1,param_1 + 3,0x30);
    uVar5 = *(uint *)(param_1 + 4);
  }
  lVar6 = param_1[3];
  *(uint *)(param_1 + 4) = uVar5 + 1;
  lVar3 = lVar6 + (long)(int)uVar5 * 0x30;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  puVar4 = (uint *)(lVar3 + 0x28);
  puVar4[0] = 0;
  puVar4[1] = 0x80000000;
  FUN_0043a2b0(lVar3,0x20,param_2,0x1f);
  *(undefined1 *)(lVar3 + 0x1f) = 0;
  if (param_3 != -1) {
    plVar1 = (long *)(lVar6 + (long)(int)uVar5 * 0x30 + 0x20);
    uVar5 = *puVar4;
    if (uVar5 == (*(uint *)(lVar3 + 0x2c) & 0x3fffffff)) {
      FUN_00426990(*param_1,plVar1,4);
      uVar5 = *puVar4;
    }
    *(int *)(*plVar1 + (long)(int)uVar5 * 4) = param_3;
    *puVar4 = uVar5 + 1;
  }
  return uVar2;
}

