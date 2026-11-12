
undefined8 FUN_00977640(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_04bb46c8;
  puVar5 = PTR_DAT_04bb27c8;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  fVar12 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar11 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar14 = fVar11 + 2.5;
  fVar13 = fVar12 + 2.5;
  fVar11 = fVar11 + 10.0 + -2.5;
  fVar12 = fVar12 + 10.0 + -2.5;
  iVar3 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar9 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar4 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar2 = iVar3;
  if (iVar4 <= iVar3) {
    iVar2 = iVar4;
  }
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  iVar10 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar4 = iVar9;
  if (iVar9 <= iVar10) {
    iVar4 = iVar10;
  }
  if (iVar10 <= iVar9) {
    iVar9 = iVar10;
  }
  if (iVar4 + 1 != iVar9) {
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar10 = iVar2;
    do {
      lVar8 = *(long *)puVar5;
      if (((lVar8 == 0) || (*(long *)(lVar8 + 0xa8) == 0)) ||
         (local_70 = puVar1, local_68 = iVar10, iStack_64 = iVar9,
         uVar7 = FUN_009493f8(lVar8 + 0x28,&local_70,(long)&local_58 + 4,&local_58,&local_5c,
                              &local_60), (uVar7 & 1) == 0)) {
        return 0;
      }
      uVar7 = FUN_00980630(*(undefined8 *)puVar6,local_58._4_4_);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar7 = FUN_00980630(*(undefined8 *)puVar6,local_58 & 0xffffffff);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar7 = FUN_00980630(*(undefined8 *)puVar6,local_5c);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar7 = FUN_00980630(*(undefined8 *)puVar6,local_60);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      if (iVar10 < iVar3) {
        iVar10 = iVar10 + 1;
      }
      else {
        iVar9 = iVar9 + 1;
        iVar10 = iVar2;
      }
    } while ((iVar2 != iVar10) || (iVar4 + 1 != iVar9));
  }
  return 1;
}

