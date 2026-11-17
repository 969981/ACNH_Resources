
void FUN_02fe0d50(float param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  FUN_030b0e48(param_3,&local_80,&local_90);
  puVar2 = PTR_DAT_04bc0cb8;
  plVar6 = *(long **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    cVar3 = *(char *)(param_2 + 0x49);
    local_78 = 8;
    cVar4 = *(char *)(param_2 + 0x48);
    fVar10 = local_80._4_4_ + fStack_8c;
    fVar11 = (float)local_80 + local_90;
    local_80 = puVar1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_80);
    lVar5 = (**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
    local_88 = *(undefined4 *)(lVar5 + 8);
    local_78 = 8;
    fVar9 = 0.0;
    if (cVar4 != '\0') {
      fVar9 = param_1;
    }
    fVar7 = 0.0;
    if (cVar3 != '\0') {
      fVar7 = param_1;
    }
    _local_90 = CONCAT44(fVar10 - fVar7,fVar11 + fVar9);
    local_80 = puVar1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_80);
    (**(code **)(plVar6[3] + 0x98))(plVar6[1],&local_90);
  }
  FUN_030b0e48(param_3,&local_80,&local_90);
  plVar6 = *(long **)(param_2 + 0x18);
  if (plVar6 != (long *)0x0) {
    puVar1 = puVar2 + 0x10;
    cVar3 = *(char *)(param_2 + 0x49);
    local_78 = 8;
    cVar4 = *(char *)(param_2 + 0x48);
    fVar10 = local_80._4_4_ + fStack_8c;
    fVar11 = (float)local_80 + local_90;
    local_80 = puVar1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_80);
    lVar5 = (**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
    local_88 = *(undefined4 *)(lVar5 + 8);
    local_78 = 8;
    fVar9 = 0.0;
    if (cVar4 != '\0') {
      fVar9 = param_1;
    }
    fVar7 = 0.0;
    if (cVar3 != '\0') {
      fVar7 = param_1;
    }
    _local_90 = CONCAT44(fVar10 - fVar7,fVar11 + fVar9);
    local_80 = puVar1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_80);
    (**(code **)(plVar6[3] + 0x98))(plVar6[1],&local_90);
  }
  cVar3 = *(char *)(param_2 + 0x48);
  FUN_030b0e48(param_3,&local_80,&local_90);
  plVar6 = *(long **)(param_2 + 0x30);
  if (plVar6 != (long *)0x0) {
    puVar2 = puVar2 + 0x10;
    local_78 = 8;
    fVar9 = *(float *)(param_3 + 0x78);
    cVar4 = *(char *)(param_2 + 0x49);
    fVar10 = 0.0;
    if (cVar3 != '\0') {
      fVar10 = 1.0;
    }
    fVar7 = (float)local_80 + local_90;
    cVar3 = *(char *)(param_2 + 0x48);
    fVar12 = local_80._4_4_ + fStack_8c;
    local_80 = puVar2;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_80);
    lVar5 = (**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
    local_88 = *(undefined4 *)(lVar5 + 8);
    fVar11 = 0.0;
    if (cVar3 != '\0') {
      fVar11 = param_1;
    }
    fVar8 = 0.0;
    if (cVar4 != '\0') {
      fVar8 = param_1;
    }
    local_78 = 8;
    _local_90 = CONCAT44(fVar12 - fVar8,(-(fVar9 * fVar10) - fVar7) + fVar11);
    local_80 = puVar2;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_80);
    (**(code **)(plVar6[3] + 0x98))(plVar6[1],&local_90);
  }
  return;
}

