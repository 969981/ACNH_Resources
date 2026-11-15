
void FUN_023297c8(float param_1,float param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  undefined1 local_34;
  
  if (*(char *)(param_3 + 0x3a5) == '\0') {
    fVar5 = 0.0;
  }
  else {
    uVar2 = (**(code **)(*(long *)(param_3 + 0x390) + (ulong)*(byte *)(param_3 + 0x3a4) * 8))
                      (param_3 + 0x390);
    *(undefined4 *)(param_3 + 0x398) = uVar2;
    fVar5 = 0.0;
    if (*(char *)(param_3 + 0x3a5) != '\0') {
      iVar1 = *(int *)(param_3 + 0x3a0);
      fVar5 = 1.0;
      if ((iVar1 != 0) && (*(int *)(param_3 + 0x398) < iVar1)) {
        fVar3 = (float)*(int *)(param_3 + 0x398) / (float)iVar1;
        fVar4 = 1.0;
        if (fVar3 <= 1.0) {
          fVar4 = fVar3;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar3) {
          fVar5 = fVar4;
        }
      }
    }
  }
  fVar4 = param_1 + fVar5 * (param_2 - param_1);
  fVar5 = -((param_2 - param_1) * fVar5) - param_1;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  if (fVar5 < 1.1920929e-07) {
    local_48[0] = *(byte *)(param_3 + 0x1ee8);
    local_44 = 0;
    local_3c = 0x3dcccccd00000000;
    local_34 = 0;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
  }
  else {
    local_48[0] = *(byte *)(param_3 + 0x1ee8);
    local_44 = *param_4;
    local_34 = 1;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
    local_3c = CONCAT44(fVar4,*(undefined4 *)(param_4 + 1));
  }
  FUN_016fa230(*(undefined4 *)(param_3 + 0x388),local_48,*(undefined4 *)(param_3 + 0x230),1);
  return;
}

