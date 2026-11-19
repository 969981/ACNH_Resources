
void FUN_03b1b9fc(float param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float local_34;
  
  fVar8 = *(float *)(param_2 + 0x50);
  bVar1 = *(byte *)(param_2 + 0x57);
  bVar7 = bVar1 & 0xf0;
  *(byte *)(param_2 + 0x57) = bVar7;
  if (fVar8 == 0.0) {
    return;
  }
  fVar9 = *(float *)(param_2 + 0x20) + param_1 * fVar8;
  if (fVar8 <= 0.0) {
    if (0.0 < fVar9) goto LAB_03b1bbc0;
    cVar2 = *(char *)(param_2 + 0x56);
    if (cVar2 == '\x02') {
      fVar9 = -fVar9;
      *(float *)(param_2 + 0x50) = -fVar8;
    }
    else {
      if (cVar2 != '\x01') {
        if (cVar2 != '\0') goto LAB_03b1bbc0;
        fVar9 = 0.0;
        *(undefined4 *)(param_2 + 0x50) = 0;
        *(byte *)(param_2 + 0x57) = bVar7 | 1;
        goto joined_r0x03b1bac4;
      }
      uVar3 = FUN_0035d97c(param_2);
      bVar7 = *(byte *)(param_2 + 0x57);
      fVar9 = fVar9 + (float)uVar3;
    }
    uVar6 = 6;
    *(byte *)(param_2 + 0x57) = bVar7 | 8;
    lVar5 = *(long *)(param_2 + 0x58);
  }
  else {
    uVar3 = FUN_0035d97c(param_2);
    if (fVar9 < (float)uVar3) goto LAB_03b1bbc0;
    cVar2 = *(char *)(param_2 + 0x56);
    if (cVar2 == '\x02') {
      uVar3 = FUN_0035d97c(param_2);
      uVar4 = FUN_0035d97c(param_2);
      *(byte *)(param_2 + 0x57) = *(byte *)(param_2 + 0x57) | 4;
      fVar9 = ((float)uVar4 - fVar9) + (float)uVar3;
      *(float *)(param_2 + 0x50) = -*(float *)(param_2 + 0x50);
    }
    else {
      if (cVar2 != '\x01') {
        if (cVar2 != '\0') goto LAB_03b1bbc0;
        uVar3 = FUN_0035d97c(param_2);
        *(undefined4 *)(param_2 + 0x50) = 0;
        fVar9 = (float)uVar3;
        bVar1 = *(byte *)(param_2 + 0x57);
        *(byte *)(param_2 + 0x57) = bVar1 | 1;
joined_r0x03b1bac4:
        if ((bVar1 >> 6 & 1) != 0) {
          FUN_03b1bbe0(param_2);
        }
        goto LAB_03b1bbc0;
      }
      uVar3 = FUN_0035d97c(param_2);
      bVar7 = *(byte *)(param_2 + 0x57);
      *(byte *)(param_2 + 0x57) = bVar7 | 4;
      local_34 = fVar9 - (float)uVar3;
      fVar9 = local_34;
      if (((char)bVar7 < '\0') &&
         (lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x58) + 0x88) + 0x20) + 0x400),
         lVar5 != 0)) {
        FUN_03b30770(lVar5,&local_34,(float *)(param_2 + 0x50),param_2);
        fVar9 = local_34;
      }
    }
    lVar5 = *(long *)(param_2 + 0x58);
    uVar6 = 7;
  }
  (**(code **)(**(long **)(lVar5 + 0x88) + 0x60))(*(long **)(lVar5 + 0x88),uVar6,param_2);
LAB_03b1bbc0:
  *(float *)(param_2 + 0x20) = fVar9;
  return;
}

