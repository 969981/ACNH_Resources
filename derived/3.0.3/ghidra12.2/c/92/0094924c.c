
undefined8
FUN_0094924c(long param_1,long param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  float local_5c [2];
  float local_54;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (-1 < (int)uVar2) {
    uVar1 = *(uint *)(param_2 + 0xc);
    uVar4 = 0;
    if ((int)uVar1 < 0) goto LAB_009492f0;
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(uint *)(lVar3 + 0x38) <= uVar2 || *(uint *)(lVar3 + 0x3c) <= uVar1) goto LAB_009492f0;
    uVar1 = uVar2 + *(uint *)(lVar3 + 0x38) * uVar1;
    if (uVar1 < *(uint *)(lVar3 + 0x48) && *(long *)(lVar3 + 0x50) != 0) {
      uVar4 = 1;
      lVar3 = *(long *)(lVar3 + 0x50) + (long)(int)uVar1 * 0x34;
      *param_3 = (uint)*(byte *)(lVar3 + 0x30);
      *param_4 = (uint)*(byte *)(lVar3 + 0x31);
      *param_5 = (uint)*(byte *)(lVar3 + 0x32);
      *param_6 = (uint)*(byte *)(lVar3 + 0x33);
      uVar2 = *(uint *)(param_2 + 8);
      goto LAB_009492f0;
    }
  }
  uVar4 = 0;
LAB_009492f0:
  local_5c[0] = (float)(int)uVar2 * 5.0 + 2.5;
  local_54 = (float)*(int *)(param_2 + 0xc) * 5.0 + 2.5 + -1.25;
  uVar2 = FUN_0097a980(local_5c);
  if (uVar2 != 7) {
    *param_3 = uVar2;
  }
  local_54 = local_54 + 1.25;
  local_5c[0] = local_5c[0] + -1.25;
  uVar2 = FUN_0097a980(local_5c);
  if (uVar2 != 7) {
    *param_4 = uVar2;
  }
  local_5c[0] = local_5c[0] + 1.25;
  local_54 = local_54 + 1.25;
  uVar2 = FUN_0097a980(local_5c);
  if (uVar2 != 7) {
    *param_5 = uVar2;
  }
  local_54 = local_54 + -1.25;
  local_5c[0] = local_5c[0] + 1.25;
  uVar2 = FUN_0097a980(local_5c);
  if (uVar2 != 7) {
    *param_6 = uVar2;
  }
  return uVar4;
}

