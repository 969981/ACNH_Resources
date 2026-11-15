
uint FUN_02496154(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  float local_68;
  uint local_64;
  byte local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined4 uStack_58;
  uint local_54;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x68);
  uVar4 = *(uint *)(lVar6 + 0x2b4);
  uVar3 = uVar4 + 0x10000000 >> 0x1d;
  uVar7 = (uint)(long)((float)uVar3 * 45.0 * 11930465.0);
  if (uVar4 == uVar7) {
LAB_02496204:
    fVar10 = *(float *)(lVar6 + 0x278);
    fVar9 = *(float *)(lVar6 + 0x280);
    local_54 = uVar3;
    uVar8 = FUN_016e026c(0,lVar6 + 0x278,0,0);
    if ((uVar3 & 1) == 0) {
      local_70._0_4_ =
           (float)(int)((int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0) & 0xfffffffe) * 5.0 +
           5.0;
      local_68 = (float)(int)((int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0) & 0xfffffffe) *
                 5.0 + 5.0;
    }
    else {
      local_68 = 0.0;
      local_70 = 0;
      uVar5 = FUN_02495be4(param_1,&local_70);
      if ((uVar5 & 1) == 0) goto LAB_024962e8;
      uVar8 = (undefined4)((ulong)local_70 >> 0x20);
    }
    local_60 = (byte)(uVar4 + 0x10000000 >> 0x1d) & 1;
    local_70 = CONCAT44(uVar8,(float)local_70);
    local_5c = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_58 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_5f = 1;
    local_64 = uVar7;
    uVar4 = FUN_0249630c(param_1,&local_70,param_2 & 1);
  }
  else {
    uVar2 = uVar7 - uVar4;
    if (uVar7 <= uVar4) {
      uVar2 = uVar4 - uVar7;
    }
    uVar1 = -uVar2;
    if (uVar2 < 0x80000001) {
      uVar1 = uVar2;
    }
    if ((float)uVar1 * 8.381903e-08 <= 45.0) goto LAB_02496204;
LAB_024962e8:
    uVar4 = 0;
  }
  return uVar4 & 1;
}

