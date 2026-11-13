
uint FUN_0143b0a4(long param_1,undefined1 param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  float local_44;
  
  local_54 = *(undefined4 *)(param_1 + 0x540);
  local_44 = 0.0;
  local_4c = 0;
  local_50 = param_2;
  if ((*(int *)(param_1 + 0x540) - 1U < 2) &&
     (uVar4 = FUN_014795c4(*(undefined8 *)(param_1 + 0x2e8)), (uVar4 & 1) == 0)) {
    local_70 = 0;
    iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x2e8) + 0x68) + 0x2b4);
    local_80 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_78 = PTR_DAT_04bb2010 + 0x10;
    local_60 = 0;
    local_68 = puStack_78;
    FUN_01470a84(*(long *)(param_1 + 0x2e8),&local_80);
    fVar12 = (float)local_60._4_4_;
    fVar10 = (float)(int)local_60;
    fVar7 = (float)(int)local_70;
    fVar8 = (float)local_70._4_4_;
    lVar5 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
    uVar4 = (ulong)((float)(iVar2 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar4 >> 0x19 & 0x7f) * 0x10);
    fVar9 = (float)((uint)uVar4 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar11 = *pfVar1 + fVar9 * pfVar1[1];
    fVar9 = pfVar1[2] + fVar9 * pfVar1[3];
    fVar13 = fVar11 * 0.0;
    fVar9 = fVar9 + fVar9;
    fVar15 = fVar11 * (fVar11 + fVar11);
    fVar16 = fVar13 * (fVar13 + fVar13);
    fVar14 = fVar13 * fVar9;
    fVar9 = fVar11 * fVar9;
    local_44 = (fVar8 * 5.0 + fVar12 * 5.0 + 5.0) * 0.5 +
               ((fVar11 + fVar11) * fVar13 + fVar14) * 0.0 + (fVar16 - fVar9) * 0.0 +
               (*pfVar6 + 5.0) * ((1.0 - fVar16) - fVar15);
    local_4c = CONCAT44(0x7fc00000,
                        (fVar7 * 5.0 + fVar10 * 5.0 + 5.0) * 0.5 +
                        (fVar11 * (fVar13 + fVar13) - fVar14) * 0.0 +
                        ((1.0 - fVar15) - fVar16) * 0.0 + (*pfVar6 + 5.0) * (fVar16 + fVar9));
  }
  uVar3 = FUN_0254dc94(param_1 + 0x3ac,&local_54);
  return uVar3 & 1;
}

