
void FUN_02fe1278(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float local_70;
  float fStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  FUN_030b0e48(param_3,&local_60,&local_70);
  puVar2 = PTR_DAT_04bc0cb8;
  fVar5 = local_60._4_4_ + fStack_6c;
  plVar4 = *(long **)(param_2 + 0x10);
  fVar6 = (float)local_60 + local_70;
  if (plVar4 != (long *)0x0) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_58 = 8;
    local_60 = puVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_60);
    lVar3 = (**(code **)(plVar4[3] + 0xa0))(plVar4[1]);
    local_68 = *(undefined4 *)(lVar3 + 8);
    local_58 = 8;
    _local_70 = CONCAT44(fVar5 - param_1,fVar6 + param_1);
    local_60 = puVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_70);
  }
  plVar4 = *(long **)(param_2 + 0x18);
  if (plVar4 != (long *)0x0) {
    local_58 = 8;
    local_60 = puVar2 + 0x10;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_60);
    lVar3 = (**(code **)(plVar4[3] + 0xa0))(plVar4[1]);
    local_68 = *(undefined4 *)(lVar3 + 8);
    local_58 = 8;
    _local_70 = CONCAT44(fVar5 - param_1,fVar6 + param_1);
    local_60 = puVar2 + 0x10;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_70);
  }
  return;
}

