
void FUN_00658e00(undefined8 *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_00651bd0();
  *param_1 = &PTR_LAB_048e4f58;
  FUN_00651c20(param_1 + 3);
  param_1[0x34] = 0;
  param_1[0x35] = 0x8000000000000000;
  FUN_0043cbe0(param_1 + 0x38);
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  FUN_00658f20(param_1,param_2);
  uVar2 = *(int *)(param_1 + 0x36) * param_3;
  uVar4 = uVar2 + 0xf & 0xfffffff0;
  if ((int)(*(uint *)((long)param_1 + 0x1ac) & 0x3fffffff) < (int)uVar4) {
    uVar3 = FUN_00426720(PTR_DAT_048607b8,uVar4,1,param_1[0x34],*(undefined4 *)(param_1 + 0x35),
                         (long)param_1 + 0x1ac);
    param_1[0x34] = uVar3;
    uVar1 = *(uint *)(param_1 + 0x35);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x35);
  }
  if (uVar1 == uVar4) {
    uVar4 = uVar1;
  }
  else {
    *(uint *)(param_1 + 0x35) = uVar4;
  }
  if (0 < (int)uVar2) {
    memset((void *)param_1[0x34],0,(ulong)(uint)((int)(uVar2 + 0xf) >> 4) << 4);
    uVar4 = *(uint *)(param_1 + 0x35);
  }
  if (uVar4 != uVar2) {
    *(uint *)(param_1 + 0x35) = uVar2;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  return;
}

