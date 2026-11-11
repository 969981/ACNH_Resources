
void FUN_0053b120(long param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = *(long *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  fVar9 = *(float *)(lVar2 + 0x30);
  local_40 = *(undefined8 *)(lVar2 + 0x34);
  local_38 = *(undefined4 *)(lVar2 + 0x3c);
  puVar3 = *(undefined8 **)(param_1 + 0x240);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    FUN_0053c8d0();
    *(undefined8 **)(param_1 + 0x240) = puVar3;
  }
  uVar5 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar5;
  *(undefined4 *)(*(long *)(param_1 + 0x240) + 0x10) = *(undefined4 *)(param_2 + 2);
  if (*(float *)(param_1 + 0x50) != 0.0) {
    fVar6 = *(float *)(*(long *)(param_1 + 0x240) + 0x10);
    fVar4 = 1.0;
    if (1.0 <= fVar6) {
      fVar4 = 0.0;
    }
    else if (fVar6 != 0.0) {
      fVar4 = powf(1.0 - fVar6,*(float *)(param_1 + 0x50));
    }
    *(float *)(param_1 + 0x54) = fVar4;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x240);
  local_74 = local_38;
  local_7c = local_40;
  local_68 = puVar3[1];
  uStack_58 = puVar3[3];
  local_60 = puVar3[2];
  local_70 = *puVar3;
  bVar1 = ((float)((ulong)uVar7 >> 0x20) != (float)((ulong)*puVar3 >> 0x20) ||
          (float)uVar7 != (float)*puVar3) || (float)uVar8 != (float)puVar3[1];
  local_50 = bVar1 | 2;
  if (fVar9 == *(float *)(puVar3 + 2)) {
    local_50 = bVar1;
  }
  local_90 = uVar7;
  uStack_88 = uVar8;
  local_80 = fVar9;
  FUN_0053b280(*(long *)(param_1 + 0x270) + 0xe0,param_1,&local_90);
  return;
}

