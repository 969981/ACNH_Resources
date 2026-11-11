
void FUN_006789b0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,ulong param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [24];
  int local_58;
  int iStack_54;
  
  uVar1 = DAT_0413f4f0;
  puVar3 = auStack_b0;
  if ((param_6 & 0xf0) == 0) {
    if ((param_6 & 0xf) == 0) {
      param_7[1] = DAT_0413f4f8;
      *param_7 = uVar1;
    }
    else {
      FUN_0067ce90(*param_4,param_7);
      *param_4 = *param_4 + 3;
    }
  }
  else {
    iVar2 = FUN_00677f50(param_4,&iStack_54,&local_58,param_5,auStack_70);
    if (-1 < local_58) {
      uVar4 = (ulong)(local_58 + 1);
      iVar2 = iVar2 * 3 + local_58 * -3;
      do {
        FUN_0067ce90(*param_4 + (long)iVar2,puVar3);
        puVar3 = puVar3 + 0x10;
        uVar4 = uVar4 - 1;
        iVar2 = iVar2 + 3;
      } while (uVar4 != 0);
    }
    *param_4 = *param_4 + (long)(iStack_54 * 3 + 3);
    (**(code **)(&DAT_04c3ac40 + (long)local_58 * 8))
              (param_2,local_58,auStack_70,auStack_b0,param_7);
  }
  return;
}

