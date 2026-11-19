
float FUN_03bdbf84(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = FUN_03be8d94(param_1,param_2,"getVolume");
  fVar6 = 0.0;
  fVar7 = fVar6;
  if ((uVar2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
    puVar1 = puVar5 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
      puVar1 = puVar5;
    }
    uVar4 = (uint)*puVar1;
    if ((uVar4 >> 3 & 1) == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8);
      if (3 < *(uint *)(lVar3 + 0x534)) {
        fVar6 = *(float *)(*(long *)(lVar3 + 0x548) + 0x2c);
      }
    }
    else {
      uVar4 = (uVar4 & 0xf) - (uVar4 >> 1 & 5);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      fVar6 = (float)FUN_03be93d4(param_1,(long)puVar1 +
                                          (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) - 1) * 4 + 8,
                                  param_3);
    }
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
  }
  return fVar7;
}

