
void FUN_0098b044(long *param_1)

{
  float fVar1;
  float *pfVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_24;
  
  (**(code **)(*param_1 + 0x148))();
  *(float *)((long)param_1 + 0x334) =
       *(float *)((long)param_1 + 0x334) + *(float *)((long)param_1 + 0x30c);
  *(float *)(param_1 + 0x67) = *(float *)(param_1 + 0x67) + *(float *)(param_1 + 0x62);
  *(float *)((long)param_1 + 0x33c) =
       *(float *)((long)param_1 + 0x33c) + *(float *)((long)param_1 + 0x314);
  pfVar2 = (float *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
  fVar1 = *(float *)((long)param_1 + 0x33c);
  *(undefined8 *)pfVar2 = *(undefined8 *)((long)param_1 + 0x334);
  pfVar2[2] = fVar1;
  *pfVar2 = *pfVar2 + *(float *)(param_1 + 0x68);
  pfVar2[1] = pfVar2[1] + *(float *)((long)param_1 + 0x344);
  local_24 = 0;
  lVar3 = *(long *)PTR_DAT_04bb27c8;
  pfVar2[2] = pfVar2[2] + *(float *)(param_1 + 0x69);
  uVar4 = FUN_0093a950(lVar3 + 0x28,(undefined8 *)((long)param_1 + 0x334),&local_24);
  *(undefined4 *)(param_1 + 0x6b) = uVar4;
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}

