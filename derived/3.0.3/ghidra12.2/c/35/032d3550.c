
void FUN_032d3550(undefined8 *param_1,undefined1 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  long lStack_58;
  undefined1 local_34 [3];
  undefined1 uStack_31;
  
  local_98 = local_34;
  local_90 = &uStack_31;
  local_80 = 0;
  lStack_78 = 0;
  local_88 = 0;
  local_34[0] = param_2;
  lVar2 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,"N_BtnCnt",1);
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    lVar3 = lVar4 + -8;
    lStack_58 = lVar4 + 0xa8;
    pcStack_68 = "N_L";
    local_70 = puVar1;
    local_60 = puVar1;
    FUN_032d3820(&local_98,lVar3,&lStack_78,&local_60,&local_70);
    pcStack_68 = "N_R";
    local_70 = puVar1;
    FUN_032d3820(&local_98,lVar3,&local_88,&local_60,&local_70);
    pcStack_68 = "N_Padding";
    local_70 = puVar1;
    FUN_032d3820(&local_98,lVar3,&local_80,&local_60,&local_70);
    if (((lStack_78 != 0) && (local_88 != 0)) && (local_80 != 0)) break;
    lVar4 = *(long *)(lVar4 + 8);
  } while (lVar4 != lVar2 + 0x20);
  fVar6 = *(float *)(lStack_78 + 0x50);
  fVar7 = (*(float *)(local_88 + 0x50) + *(float *)(local_80 + 0x50) + fVar6) * -0.5;
  fVar5 = fVar6 + fVar7;
  if ((*(byte *)(lStack_78 + 0x5b) & 3) == 0) {
    fVar7 = fVar6 * 0.5 + fVar7;
  }
  fVar6 = fVar5;
  if ((*(byte *)(lStack_78 + 0x5b) & 3) != 2) {
    fVar6 = fVar7;
  }
  *(byte *)(lStack_78 + 0x58) = *(byte *)(lStack_78 + 0x58) | 0x10;
  *(float *)(lStack_78 + 0x30) = fVar6;
  if ((*(byte *)(local_80 + 0x5b) & 3) == 0) {
    fVar6 = *(float *)(local_80 + 0x50);
    fVar7 = fVar5 + fVar6 * 0.5;
  }
  else if ((*(byte *)(local_80 + 0x5b) & 3) == 2) {
    fVar6 = *(float *)(local_80 + 0x50);
    fVar7 = fVar5 + fVar6;
  }
  else {
    fVar6 = *(float *)(local_80 + 0x50);
    fVar7 = fVar5;
  }
  *(float *)(local_80 + 0x30) = fVar7;
  fVar5 = fVar5 + fVar6;
  *(byte *)(local_80 + 0x58) = *(byte *)(local_80 + 0x58) | 0x10;
  if ((*(byte *)(local_88 + 0x5b) & 3) == 2) {
    fVar7 = *(float *)(local_88 + 0x50);
  }
  else {
    if ((*(byte *)(local_88 + 0x5b) & 3) != 0) goto LAB_032d3714;
    fVar7 = *(float *)(local_88 + 0x50) * 0.5;
  }
  fVar5 = fVar5 + fVar7;
LAB_032d3714:
  *(float *)(local_88 + 0x30) = fVar5;
  *(byte *)(local_88 + 0x58) = *(byte *)(local_88 + 0x58) | 0x10;
  return;
}

