
void FUN_02fe1784(float param_1,long param_2,long param_3,float *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  FUN_030b0e48(param_3,&local_80,&local_90);
  puVar2 = PTR_DAT_04bc0cb8;
  fVar7 = local_80._4_4_ + fStack_8c;
  plVar4 = *(long **)(param_2 + 0x28);
  fVar8 = (float)local_80 + local_90;
  if (plVar4 != (long *)0x0) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_78 = 8;
    fVar9 = *(float *)(param_2 + 0x38) * param_1;
    local_80 = puVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_80);
    lVar3 = (**(code **)(plVar4[3] + 0xa0))(plVar4[1]);
    local_88 = *(undefined4 *)(lVar3 + 8);
    local_78 = 8;
    _local_90 = CONCAT44(fVar7 - fVar9,fVar8 + fVar9);
    local_80 = puVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_80);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_90);
  }
  fVar9 = *(float *)(param_2 + 0x58);
  FUN_030b0e48(param_3,&local_80,&local_90);
  plVar4 = *(long **)(param_2 + 0x48);
  if (plVar4 != (long *)0x0) {
    fVar6 = *(float *)(param_3 + 0x78);
    local_78 = 8;
    fVar10 = local_80._4_4_ + fStack_8c;
    fVar5 = (float)local_80 + local_90;
    param_1 = *(float *)(param_2 + 0x58) * param_1;
    local_80 = puVar2 + 0x10;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_80);
    lVar3 = (**(code **)(plVar4[3] + 0xa0))(plVar4[1]);
    local_88 = *(undefined4 *)(lVar3 + 8);
    local_78 = 8;
    _local_90 = CONCAT44(fVar10 - param_1,(-(fVar6 * fVar9) - fVar5) + param_1);
    local_80 = puVar2 + 0x10;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_80);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_90);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar8;
    param_4[1] = fVar7;
  }
  return;
}

