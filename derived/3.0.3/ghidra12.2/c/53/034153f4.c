
void FUN_034153f4(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined *local_40;
  undefined4 local_38;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      uVar4 = ~*(uint *)(param_1 + 0x2a) & 1;
      if ((((char)param_1[(ulong)uVar4 * 0x12 + 0x17] != '\0') &&
          (uVar2 = *(uint *)(param_1 + (ulong)uVar4 * 0x12 + 6), uVar2 < 0x10e)) &&
         (lVar1 = param_1[1] + 8, *(int *)(lVar1 + (ulong)uVar2 * 0x1a8 + 0x1a0) == 2)) {
        plVar5 = param_1 + (ulong)uVar4 * 0x12 + 0x13;
        uVar3 = FUN_03463a4c(lVar1 + (ulong)uVar2 * 0x1a8,lVar1 + (ulong)uVar2 * 0x1a8 + 0x148,
                             plVar5);
        plVar6 = (long *)*param_1;
        if ((uVar3 & 1) == 0) {
          plVar5 = param_1 + 2;
        }
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 0x208))(plVar6[1],0,0,plVar5);
        uVar2 = *(uint *)(param_1 + 0x2a);
        *(char *)(param_1 + (ulong)uVar4 * 0x12 + 0x17) = '\0';
        *(uint *)(param_1 + 0x2a) = (uVar2 ^ 0xffffffff) & 1;
      }
    }
  }
  return;
}

