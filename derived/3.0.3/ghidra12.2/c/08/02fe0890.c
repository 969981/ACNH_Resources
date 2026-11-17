
void FUN_02fe0890(float param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  FUN_030b0e48(param_3,&local_70,&local_80);
  puVar2 = PTR_DAT_04bc0cb8;
  fVar5 = local_70._4_4_ + fStack_7c;
  plVar4 = *(long **)(param_2 + 0x10);
  fVar6 = (float)local_70 + local_80;
  if (plVar4 != (long *)0x0) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_68 = 8;
    fVar8 = *(float *)(param_2 + 0x28) * param_1;
    local_70 = puVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_70);
    lVar3 = (**(code **)(plVar4[3] + 0xa0))(plVar4[1]);
    local_78 = *(undefined4 *)(lVar3 + 8);
    local_68 = 8;
    _local_80 = CONCAT44(fVar5 - fVar8,fVar6 + fVar8);
    local_70 = puVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_80);
  }
  plVar4 = *(long **)(param_2 + 0x18);
  if (plVar4 != (long *)0x0) {
    puVar1 = puVar2 + 0x10;
    local_68 = 8;
    fVar8 = *(float *)(param_2 + 0x28) * param_1;
    local_70 = puVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_70);
    lVar3 = (**(code **)(plVar4[3] + 0xa0))(plVar4[1]);
    local_78 = *(undefined4 *)(lVar3 + 8);
    local_68 = 8;
    _local_80 = CONCAT44(fVar5 - fVar8,fVar6 + fVar8);
    local_70 = puVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_80);
  }
  fVar5 = *(float *)(param_2 + 0x48);
  FUN_030b0e48(param_3,&local_70,&local_80);
  plVar4 = *(long **)(param_2 + 0x38);
  if (plVar4 != (long *)0x0) {
    fVar8 = *(float *)(param_3 + 0x78);
    local_68 = 8;
    fVar7 = local_70._4_4_ + fStack_7c;
    fVar6 = (float)local_70 + local_80;
    puVar2 = puVar2 + 0x10;
    param_1 = *(float *)(param_2 + 0x48) * param_1;
    local_70 = puVar2;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_70);
    lVar3 = (**(code **)(plVar4[3] + 0xa0))(plVar4[1]);
    local_78 = *(undefined4 *)(lVar3 + 8);
    local_68 = 8;
    _local_80 = CONCAT44(fVar7 - param_1,(-(fVar8 * fVar5) - fVar6) + param_1);
    local_70 = puVar2;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_80);
  }
  return;
}

