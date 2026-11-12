
void FUN_0094b1cc(long param_1,float *param_2,long param_3,uint param_4,undefined4 *param_5)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_6c;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  if (*(char *)(param_1 + 0xa7) == '\0') {
    fVar3 = *(float *)(param_3 + 4);
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3)) {
        bVar1 = fVar3 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar3;
      }
    }
    if (bVar2 && !bVar1) {
      return;
    }
  }
  if (*(char *)(param_1 + 0xa6) == '\0') {
    fVar3 = *(float *)(param_3 + 4);
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3)) {
        bVar1 = fVar3 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar3;
      }
    }
    if (!bVar2 || bVar1) {
      return;
    }
  }
  local_64 = 0;
  local_6c = 0x3f80000000000000;
  FUN_0094e208(&local_60,&local_6c);
  fStack_5c = fStack_5c * 0.0;
  fStack_4c = fStack_4c * 0.0;
  fStack_3c = fStack_3c * 0.0;
  local_54 = *param_2;
  local_44 = param_2[1];
  local_78 = local_54 + fStack_5c + local_60 * -7.0 + local_58 * 5.0;
  fStack_74 = local_44 + fStack_4c + local_50 * -7.0 + local_48 * 5.0;
  fStack_8c = local_44 + fStack_4c + local_50 * 5.0 + local_48 * -5.0;
  local_84 = local_54 + fStack_5c + local_60 * 7.0 + local_58 * 5.0;
  local_9c = local_54 + fStack_5c + local_60 * -5.0 + local_58 * -5.0;
  fStack_98 = local_44 + fStack_4c + local_50 * -5.0 + local_48 * -5.0;
  local_34 = param_2[2];
  fStack_80 = local_44 + fStack_4c + local_50 * 7.0 + local_48 * 5.0;
  local_70 = local_34 + fStack_3c + local_40 * -7.0 + local_38 * 5.0;
  local_7c = local_34 + fStack_3c + local_40 * 7.0 + local_38 * 5.0;
  local_90 = local_54 + fStack_5c + local_60 * 5.0 + local_58 * -5.0;
  local_88 = local_34 + fStack_3c + local_40 * 5.0 + local_38 * -5.0;
  local_94 = local_34 + fStack_3c + local_40 * -5.0 + local_38 * -5.0;
  FUN_009728fc(&local_78,&local_84,&local_90,&local_9c,param_1 + 0xa8,param_1 + 0xb0,param_4 | 0x80,
               *param_5,0);
  return;
}

