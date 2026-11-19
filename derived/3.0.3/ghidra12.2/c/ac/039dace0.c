
undefined8 FUN_039dace0(uint *param_1,uint *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  uint *puVar6;
  byte *pbVar7;
  
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  if (*param_1 <= *param_2) {
    puVar6 = param_1 + 2;
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    pbVar7 = *(byte **)(param_1 + 4);
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(param_2 + 2);
    if (pbVar7 != *(byte **)(param_2 + 4)) {
      pbVar7 = *(byte **)(param_2 + 4);
      pbVar4 = *(byte **)(param_1 + 4);
      lVar5 = 0x7ffff;
      while( true ) {
        bVar2 = *pbVar4;
        if (bVar2 != *pbVar7) break;
        if ((bVar2 == 0) ||
           (bVar1 = lVar5 == 0, pbVar7 = pbVar7 + 1, pbVar4 = pbVar4 + 1, lVar5 = lVar5 + -1, bVar1)
           ) goto LAB_039dad94;
      }
      if (bVar2 < *pbVar7) {
        return 0xffffffff;
      }
    }
  }
LAB_039dad94:
  if (*param_2 < *param_1) {
LAB_039dada4:
    uVar3 = 1;
  }
  else {
    if (*param_2 <= *param_1) {
      puVar6 = param_2 + 2;
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      pbVar7 = *(byte **)(param_2 + 4);
      (**(code **)(*(long *)(param_1 + 2) + 0x18))(param_1 + 2);
      if (pbVar7 != *(byte **)(param_1 + 4)) {
        pbVar7 = *(byte **)(param_1 + 4);
        pbVar4 = *(byte **)(param_2 + 4);
        lVar5 = 0x7ffff;
        while( true ) {
          bVar2 = *pbVar4;
          if (bVar2 != *pbVar7) break;
          if (bVar2 == 0) {
            return 0;
          }
          bVar1 = lVar5 == 0;
          pbVar7 = pbVar7 + 1;
          pbVar4 = pbVar4 + 1;
          lVar5 = lVar5 + -1;
          if (bVar1) {
            return 0;
          }
        }
        if (bVar2 < *pbVar7) goto LAB_039dada4;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

