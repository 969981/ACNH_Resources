
undefined8 FUN_03370320(long *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  short *psVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_b8 [40];
  long local_90;
  undefined4 local_78;
  
  local_90 = (**(code **)(*param_1 + 8))();
  if (local_90 != 0) {
    FUN_00358b98(auStack_b8);
    FUN_00350090(*(undefined4 *)(param_3 + 0xf8),*(undefined4 *)(param_3 + 0xfc),auStack_b8);
    local_78 = 0;
    if ((param_4 & 1) != 0) {
      local_78 = *(undefined4 *)(param_3 + 0x104);
    }
    psVar2 = (short *)param_1[0x86];
    if (*psVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 1;
        lVar3 = lVar3 + 1;
      } while (psVar2[lVar1] != 0);
    }
    fVar4 = (float)FUN_00358c40(auStack_b8,psVar2,lVar3);
    psVar2 = (short *)*param_2;
    if (*psVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 1;
        lVar3 = lVar3 + 1;
      } while (psVar2[lVar1] != 0);
    }
    fVar5 = (float)FUN_00358c40(auStack_b8,psVar2,lVar3);
    thunk_FUN_0035008c(auStack_b8);
    if (fVar4 < fVar5) {
      return 0;
    }
  }
  return 1;
}

