
void FUN_005d7b80(long param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  uVar1 = *(ushort *)(param_1 + 0x20);
  if (uVar1 != 0) {
    memset(param_3,0,(ulong)uVar1 << 4);
  }
  if ((float)param_2[1] <= (float)param_2[3] &&
      ((float)*param_2 <= (float)param_2[2] &&
      (float)((ulong)*param_2 >> 0x20) <= (float)((ulong)param_2[2] >> 0x20))) {
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = FUN_0053b100(lVar4);
    fVar5 = *(float *)(lVar3 + 0x14);
    local_48 = CONCAT44(fVar5,fVar5);
    local_c0 = *(undefined8 *)(param_1 + 0x28);
    local_90 = CONCAT44(fVar5 + (float)((ulong)param_2[2] >> 0x20),fVar5 + (float)param_2[2]);
    uStack_88 = CONCAT44(fVar5 + (float)((ulong)param_2[3] >> 0x20),fVar5 + (float)param_2[3]);
    local_a0 = CONCAT44((float)((ulong)*param_2 >> 0x20) - fVar5,(float)*param_2 - fVar5);
    uStack_a8 = CONCAT44((float)((ulong)param_2[1] >> 0x20) - fVar5,(float)param_2[1] - fVar5);
    local_70 = local_a0;
    uStack_68 = uStack_a8;
    local_60 = local_90;
    local_58 = uStack_88;
    if (*(char *)(param_1 + 0x40) == '\0') {
      uStack_b8 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x40);
      local_b0 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0xe8);
      uStack_98 = uStack_a8;
      local_80 = (uint)uVar1;
      uVar2 = FUN_005d7fd0(param_1,&local_70,local_c0,*(undefined8 *)(param_1 + 0x30),uVar1,
                           &local_48,*param_4,&local_c0);
    }
    else {
      uStack_b8 = *(undefined8 *)(lVar4 + 0x18);
      local_b0 = local_a0;
      local_a0 = local_90;
      uStack_98 = uStack_88;
      uVar2 = FUN_005d7cd0(param_1,&local_70,local_c0,*(undefined8 *)(param_1 + 0x30),uVar1,
                           &local_48,*param_4,&local_c0);
    }
    *param_5 = uVar2;
  }
  else {
    *param_5 = 0;
  }
  return;
}

