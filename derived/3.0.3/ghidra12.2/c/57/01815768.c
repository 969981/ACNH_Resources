
void FUN_01815768(long *param_1)

{
  float fVar1;
  float *pfVar2;
  ulong uVar3;
  undefined8 uVar4;
  
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
  pfVar2[2] = pfVar2[2] + *(float *)(param_1 + 0x69);
  uVar3 = (**(code **)(*param_1 + 0x278))(param_1);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1[0x60] + 0x278);
    *(undefined4 *)((long)param_1 + 0x33c) = *(undefined4 *)(param_1[0x60] + 0x280);
    *(undefined8 *)((long)param_1 + 0x334) = uVar4;
    *(float *)((long)param_1 + 0x334) =
         *(float *)((long)param_1 + 0x334) - *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x67) = *(float *)(param_1 + 0x67) - *(float *)((long)param_1 + 0x344);
    *(float *)((long)param_1 + 0x33c) =
         *(float *)((long)param_1 + 0x33c) - *(float *)(param_1 + 0x69);
  }
                    /* WARNING: Could not recover jumptable at 0x01815870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}

