
int FUN_0015ea88(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char acStack_b0 [80];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xa28) == 0) {
    iVar2 = 0;
  }
  else {
    local_60 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    local_50 = 0;
    local_28 = param_2;
    memset(acStack_b0,0,0x50);
    iVar2 = FUN_0014e850(*(undefined8 *)(param_1 + 0xa30),&local_60);
    if (iVar2 == 0) {
      uVar1 = *(int *)(param_1 + 0xa28) - 1;
      if (uVar1 < 3) {
        iVar2 = 6;
        if ((int)local_48 != 0) {
          iVar2 = (int)local_48 + -1;
        }
        FUN_001460b8(acStack_b0,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                     &DAT_04102f68 + *(int *)(&DAT_04102f68 + (long)(int)uVar1 * 4),
                     *(undefined8 *)(PTR_PTR_04bcb6e8 + (long)iVar2 * 8),local_58._4_4_,
                     (&PTR_DAT_048362f8)[(int)local_50],local_50._4_4_ + 0x76c,(undefined4)local_58,
                     local_60._4_4_,(undefined4)local_60);
        sVar3 = strlen(acStack_b0);
        iVar2 = FUN_0015e4a4(&local_28,acStack_b0,sVar3);
      }
      else {
        iVar2 = 0x2b;
      }
    }
    else {
      FUN_0014d5f8(param_1,"Invalid TIMEVALUE");
    }
  }
  return iVar2;
}

