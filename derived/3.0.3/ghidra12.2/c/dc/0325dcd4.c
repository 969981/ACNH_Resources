
void FUN_0325dcd4(float param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  
  if (param_3 != (long *)0x0) {
    local_48 = 8;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_50 = puVar1;
    (**(code **)(*param_3 + 0x20))(param_3,&local_50);
    puVar3 = (undefined8 *)(**(code **)(param_3[3] + 0xa0))(param_3[1]);
    local_58 = *(undefined4 *)(puVar3 + 1);
    local_48 = 8;
    fStack_5c = (float)((ulong)*puVar3 >> 0x20);
    fStack_5c = fStack_5c + param_1;
    local_60 = (undefined4)*puVar3;
    local_50 = puVar1;
    (**(code **)(*param_3 + 0x18))(param_3,&local_50);
    (**(code **)(param_3[3] + 0x98))(param_3[1],&local_60);
    local_48 = 0xb;
    local_50 = puVar1;
    (**(code **)(*param_3 + 0x20))(param_3,&local_50);
    lVar4 = (**(code **)(param_3[3] + 0xd0))(param_3[1]);
    fVar6 = *(float *)(lVar4 + 4);
    local_48 = 0xd;
    local_50 = puVar1;
    (**(code **)(*param_3 + 0x20))(param_3,&local_50);
    iVar2 = (**(code **)(param_3[3] + 0xf0))(param_3[1]);
    fVar5 = fVar6 * 0.5;
    if (iVar2 != 0) {
      fVar5 = fVar6;
    }
    *(float *)(param_2 + 0x8864) = fStack_5c - fVar5;
  }
  return;
}

