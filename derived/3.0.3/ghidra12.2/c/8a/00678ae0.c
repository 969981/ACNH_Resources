
void FUN_00678ae0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,ulong *param_4,
                 undefined4 param_5,ulong param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [24];
  int local_58;
  int iStack_54;
  
  uVar1 = DAT_0413f4f0;
  puVar4 = auStack_b0;
  if ((param_6 & 0xf0) == 0) {
    if ((param_6 & 0xf) == 0) {
      param_7[1] = DAT_0413f4f8;
      *param_7 = uVar1;
    }
    else {
      uVar3 = *param_4 + 1 & 0xfffffffffffffffe;
      *param_4 = uVar3;
      FUN_0067ce00(uVar3,param_7);
      *param_4 = *param_4 + 2;
    }
  }
  else {
    iVar2 = FUN_00677f50(param_4,&iStack_54,&local_58,param_5,auStack_70);
    uVar3 = *param_4 + 1 & 0xfffffffffffffffe;
    *param_4 = uVar3;
    if (-1 < local_58) {
      iVar2 = iVar2 * 2 + local_58 * -2;
      uVar5 = (ulong)(local_58 + 1);
      do {
        FUN_0067ce00(uVar3 + (long)iVar2,puVar4);
        uVar3 = *param_4;
        puVar4 = puVar4 + 0x10;
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + 2;
      } while (uVar5 != 0);
    }
    *param_4 = uVar3 + (long)(iStack_54 * 2 + 2);
    (**(code **)(&DAT_04c3ac40 + (long)local_58 * 8))
              (param_2,local_58,auStack_70,auStack_b0,param_7);
  }
  return;
}

