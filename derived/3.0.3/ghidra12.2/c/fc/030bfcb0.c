
void FUN_030bfcb0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *local_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bc0cb8;
  iVar1 = *(int *)(param_1 + 0x3f8);
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x3f8) = iVar1 + -1;
    local_48 = 0x14;
    plVar4 = *(long **)(param_1 + 0x3e0);
    uVar2 = ~(int)(*(float *)(param_1 + 0x3fc) * (float)iVar1);
    local_50 = puVar3 + 0x10;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
    (**(code **)(plVar4[3] + 0x158))(plVar4[1],uVar2);
    plVar4 = *(long **)(param_1 + 1000);
    if (plVar4 != (long *)0x0) {
      local_48 = 0x14;
      local_50 = puVar3 + 0x10;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      (**(code **)(plVar4[3] + 0x158))(plVar4[1],uVar2);
    }
  }
  FUN_03d85130(param_1);
  return;
}

