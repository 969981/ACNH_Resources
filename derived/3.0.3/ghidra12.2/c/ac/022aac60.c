
uint FUN_022aac60(long param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  short sVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  
  puVar7 = PTR_DAT_04bb27c8;
  if ((param_3 & 1) == 0) {
    iVar5 = *(int *)(param_2 + 8);
    iVar13 = *(int *)(param_2 + 0xc);
    iVar1 = iVar13 + 2;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    iVar12 = iVar5;
    do {
      if ((((*(long *)puVar7 == 0) || (lVar9 = *(long *)(*(long *)puVar7 + 0xa8), lVar9 == 0)) ||
          (local_a8 = puVar2, local_a0 = iVar12, iStack_9c = iVar13, local_98 = puVar3,
          local_90 = puVar2, local_88 = iVar12, iStack_84 = iVar13, local_80 = puVar2,
          local_78 = iVar12, iStack_74 = iVar13, uVar10 = FUN_00971f80(lVar9,&local_98,0),
          (uVar10 & 1) == 0)) || (uVar10 = FUN_00975dc0(&local_a8), (uVar10 & 1) == 0))
      goto LAB_022aadb4;
      if (iVar12 < iVar5 + 1) {
        iVar12 = iVar12 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        iVar12 = iVar5;
      }
    } while ((iVar5 != iVar12) || (iVar1 != iVar13));
    if ((param_4 & 1) != 0) goto LAB_022aacd8;
LAB_022aae7c:
    uVar8 = 1;
  }
  else {
    local_88 = *(int *)(param_2 + 8);
    iStack_84 = *(int *)(param_2 + 0xc);
    local_98 = PTR_DAT_04bbc1a0 + 0x10;
    local_90 = PTR_DAT_04bb2010 + 0x10;
    local_78 = local_88 + 1;
    iStack_74 = iStack_84 + 1;
    local_80 = local_90;
    uVar8 = FUN_0097d8e0(&local_98);
    if (((uVar8 & 1) == 0) || ((param_4 & 1) == 0)) goto LAB_022aadb8;
LAB_022aacd8:
    uVar8 = 1;
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 == -1) goto LAB_022aadb8;
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 1 & 1) == 0) goto LAB_022aadb8;
    bVar11 = *(byte *)(param_1 + 0x10);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_a8 = (undefined *)CONCAT71(local_a8._1_7_,bVar11);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,(float)*(int *)(param_2 + 0xc) * 5.0 + 5.0);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(float)*(int *)(param_2 + 8) * 5.0 + 5.0);
    lVar9 = FUN_0251b3b0(&local_a8,0);
    if ((lVar9 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
      fVar14 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_98,0);
      fVar14 = fVar14 - *(float *)(lVar9 + 4);
      if ((fVar14 <= 5.0) && (-5.0 <= fVar14)) goto LAB_022aae7c;
    }
LAB_022aadb4:
    uVar8 = 0;
  }
LAB_022aadb8:
  return uVar8 & 1;
}

