
void FUN_00482640(long param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  float fVar4;
  undefined8 uVar5;
  undefined1 local_60 [48];
  
  FUN_004385d0(local_60);
  FUN_0047f9c0(local_60,param_2,param_3);
  fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  fVar1 = (float)*(undefined8 *)(param_3 + 0x30);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  FUN_00438670(param_1,local_60);
  *(ulong *)(param_1 + 0x38) =
       CONCAT44((float)((ulong)uVar5 >> 0x20) -
                (local_60._44_4_ * fVar4 + local_60._12_4_ * fVar1 + local_60._28_4_ * fVar3),
                (float)uVar5 -
                (local_60._40_4_ * fVar4 + local_60._8_4_ * fVar1 + local_60._24_4_ * fVar3));
  *(ulong *)(param_1 + 0x30) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) -
                (local_60._36_4_ * fVar4 + local_60._4_4_ * fVar1 + local_60._20_4_ * fVar3),
                (float)uVar2 -
                (local_60._32_4_ * fVar4 + local_60._0_4_ * fVar1 + local_60._16_4_ * fVar3));
  FUN_004385e0(local_60);
  return;
}

