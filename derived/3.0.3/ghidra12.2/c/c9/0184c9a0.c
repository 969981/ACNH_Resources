
void FUN_0184c9a0(long *param_1)

{
  float fVar1;
  byte bVar2;
  float *pfVar3;
  undefined8 uVar4;
  
  (**(code **)(*param_1 + 0x148))();
  *(float *)((long)param_1 + 0x334) =
       *(float *)((long)param_1 + 0x334) + *(float *)((long)param_1 + 0x30c);
  *(float *)(param_1 + 0x67) = *(float *)(param_1 + 0x67) + *(float *)(param_1 + 0x62);
  *(float *)((long)param_1 + 0x33c) =
       *(float *)((long)param_1 + 0x33c) + *(float *)((long)param_1 + 0x314);
  pfVar3 = (float *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
  fVar1 = *(float *)((long)param_1 + 0x33c);
  *(undefined8 *)pfVar3 = *(undefined8 *)((long)param_1 + 0x334);
  pfVar3[2] = fVar1;
  *pfVar3 = *pfVar3 + *(float *)(param_1 + 0x68);
  pfVar3[1] = pfVar3[1] + *(float *)((long)param_1 + 0x344);
  pfVar3[2] = pfVar3[2] + *(float *)(param_1 + 0x69);
  bVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  *(byte *)((long)param_1 + 0x497) = bVar2 & 1;
  if ((bVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1[0x60] + 0x278);
    *(undefined4 *)((long)param_1 + 0x33c) = *(undefined4 *)(param_1[0x60] + 0x280);
    *(undefined8 *)((long)param_1 + 0x334) = uVar4;
    *(float *)((long)param_1 + 0x334) =
         *(float *)((long)param_1 + 0x334) - *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x67) = *(float *)(param_1 + 0x67) - *(float *)((long)param_1 + 0x344);
    *(float *)((long)param_1 + 0x33c) =
         *(float *)((long)param_1 + 0x33c) - *(float *)(param_1 + 0x69);
  }
                    /* WARNING: Could not recover jumptable at 0x0184cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}

