
void FUN_00332b70(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  *(ulong *)(param_1 + 200) = (ulong)*(uint *)(param_2 + 4);
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    uVar3 = *(undefined1 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = FUN_003a0970(param_2 + (ulong)*(uint *)(param_2 + 0x14));
    FUN_003a0450(*(undefined8 *)(lVar4 + 0x20),uVar6,0,0);
    FUN_00333430(param_1 + 0x4a0,uVar6,param_1 + 0x438,lVar4,uVar3);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    uVar2 = *(uint *)(param_2 + 8);
  }
  else {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    uVar2 = *(uint *)(param_2 + 8);
  }
  if (uVar2 != 0xffffffff) {
    piVar5 = (int *)(param_2 + (ulong)uVar2);
    do {
      if (*piVar5 == 0x43535247) {
        uVar2 = piVar5[5];
        *(ulong *)(param_1 + 0xd0) = (ulong)(uint)piVar5[1];
        if (*(char *)(param_1 + 0x4e8) == '\0') {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          lVar4 = FUN_003a0970((long)piVar5 + (ulong)uVar2);
          FUN_003a0450(*(undefined8 *)(lVar4 + 0x20),uVar6,0,0);
          FUN_00334010(param_1 + 0x4e0,uVar6,param_1 + 0x438,lVar4,0);
          return;
        }
        return;
      }
      puVar1 = (uint *)(piVar5 + 3);
      piVar5 = (int *)((long)piVar5 + (ulong)*puVar1);
    } while (*puVar1 != 0xffffffff);
  }
  return;
}

