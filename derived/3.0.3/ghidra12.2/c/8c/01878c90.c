
uint FUN_01878c90(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float local_3c;
  float fStack_38;
  float local_34;
  byte local_18 [4];
  undefined4 local_14;
  
  local_3c = *(float *)(param_2 + 0x334);
  local_34 = *(float *)(param_2 + 0x33c);
  uVar4 = (int)((float)(int)local_3c / 5.0) - (uint)(local_3c < 0.0);
  uVar2 = (int)((float)(int)local_34 / 5.0) - (uint)(local_34 < 0.0);
  if ((((DAT_04cfae30 == 0) || (lVar5 = *(long *)(DAT_04cfae30 + 0xa8), lVar5 == 0)) ||
      ((int)uVar4 < 0)) ||
     (((int)uVar2 < 0 || (*(uint *)(lVar5 + 0x38) <= uVar4 || *(uint *)(lVar5 + 0x3c) <= uVar2)))) {
LAB_01878d4c:
    uVar6 = (ulong)(*(uint *)(param_2 + 800) >> 0x14) & 0xff0;
    local_14 = *(undefined4 *)(param_2 + 0x4a8);
    fVar7 = (float)(*(uint *)(param_2 + 800) & 0xffffff) * 5.9604645e-08;
    local_18[0] = *(byte *)(param_2 + 0x494) ^ 1;
    local_3c = local_3c +
               (*(float *)((long)&DAT_04199798 + uVar6) +
               fVar7 * *(float *)((long)&DAT_0419979c + uVar6)) * param_1;
    fStack_38 = *(float *)(param_2 + 0x338) + 0.0;
    local_34 = local_34 +
               (*(float *)((long)&DAT_041997a0 + uVar6) +
               fVar7 * *(float *)((long)&DAT_041997a4 + uVar6)) * param_1;
    iVar3 = FUN_01a1e110(&local_3c,param_2 + 0x334,*(undefined8 *)(param_2 + 0x498),local_18);
    if (iVar3 != 1) {
      uVar4 = (**(code **)(param_2 + 0x498))(*(undefined4 *)(param_2 + 0x338),uVar4,uVar2,local_18);
      goto LAB_01878dfc;
    }
  }
  else {
    uVar1 = uVar4 + *(uint *)(lVar5 + 0x38) * uVar2;
    if ((*(uint *)(lVar5 + 0x68) <= uVar1 || *(long *)(lVar5 + 0x70) == 0) ||
       ((*(uint *)(*(long *)(lVar5 + 0x70) + (long)(int)uVar1 * 4) >> 3 & 1) == 0))
    goto LAB_01878d4c;
  }
  uVar4 = 0;
LAB_01878dfc:
  return uVar4 & 1;
}

