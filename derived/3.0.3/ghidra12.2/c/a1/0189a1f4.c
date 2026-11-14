
void FUN_0189a1f4(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_2c;
  float local_24;
  
  if (param_1[0x81] == 0) {
    uVar6 = 0;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*(long *)(param_1[0x81] + 0x98) + 0xf0))();
    uVar6 = *puVar1;
  }
  local_2c = 0;
  local_24 = 0.0;
  (**(code **)(*param_1 + 0x1b8))(uVar6,(int)param_1[99],param_1,&local_2c);
  local_24 = *(float *)((long)param_1 + 0x33c) + local_24 + *(float *)(param_1 + 0x69);
  local_2c = CONCAT44(*(float *)(param_1 + 0x67) + local_2c._4_4_ +
                      *(float *)((long)param_1 + 0x344),
                      *(float *)((long)param_1 + 0x334) + (float)local_2c +
                      *(float *)(param_1 + 0x68));
  lVar2 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0xa8) == 0)) || (*(char *)(lVar2 + 0x11c8) != '\0')) {
    fVar3 = -500.0;
  }
  else {
    fVar3 = (float)FUN_0093a950(lVar2 + 0x28,&local_2c,0);
  }
  fVar5 = *(float *)(param_1[0x60] + 0x27c);
  *(undefined4 *)((long)param_1 + 0x424) = 0;
  fVar3 = fVar3 - fVar5;
  uVar4 = 0;
  if (fVar3 * fVar3 <= 1.0) {
    uVar4 = uVar6;
  }
  *(undefined4 *)(param_1 + 0x61) = uVar4;
  return;
}

