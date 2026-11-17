
void FUN_02b24ac8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  short local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  short local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  FUN_0266d0a0(*(undefined4 *)(param_1 + 0xc));
  FUN_0266cf60(&local_18,*(undefined4 *)(param_1 + 0xc));
  if (local_18 != -2) {
    local_48 = local_18;
    local_46 = local_16;
    local_44 = local_14;
    fVar3 = (float)iVar2 * 10.0 + 2.5;
    fVar4 = (float)iVar1 * 10.0 + 2.5;
    iStack_34 = 5;
    if (0.0 <= fVar3) {
      iStack_34 = 6;
    }
    iStack_34 = iStack_34 + (int)((float)(int)fVar3 / 5.0);
    local_38 = (int)((float)(int)fVar4 / 5.0);
    if (0.0 <= fVar4) {
      local_38 = local_38 + 1;
    }
    local_40 = &DAT_048f9750;
    FUN_015203fc(param_1 + 0x728,&local_48);
  }
  return;
}

