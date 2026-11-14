
undefined8
FUN_01a1ed20(float *param_1,float *param_2,code *param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  
  uVar6 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  uVar7 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  iVar8 = uVar6 - ((uVar6 & 0x80000001) == 1);
  iVar9 = uVar7 - ((uVar7 & 0x80000001) == 1);
  if (((param_5 & 1) != 0) && (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 != -1)) {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar4 >> 0x1a & 1) != 0) && ((*puVar4 >> 1 & 1) != 0)) &&
       (lVar11 = *(long *)PTR_DAT_04bb59d8, lVar11 != 0)) {
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      iVar13 = iVar8 + -2;
      do {
        iVar12 = iVar9 + -2;
        do {
          if (((*(int *)(lVar11 + 0x28) <= iVar13 && iVar13 <= *(int *)(lVar11 + 0x38)) &&
              (*(int *)(lVar11 + 0x2c) <= iVar12)) &&
             ((iVar12 <= *(int *)(lVar11 + 0x3c) &&
              (local_88 = puVar2, local_80 = iVar13, iStack_7c = iVar12, local_78 = param_4,
              iVar10 = (*param_3)(param_1,&local_88), iVar10 == 0)))) {
            if ((param_6 & 1) == 0) {
              return 1;
            }
            uVar6 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
            if (((DAT_05233970 <= (int)(uVar6 & 0xfffffffe) &&
                  (int)(uVar6 & 0xfffffffe) <= DAT_05233980) &&
                (uVar7 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0),
                uVar3 = uVar7 & 0xfffffffe, uVar7 = (uVar7 * 0x80 & 0xffffff00) + ((int)uVar6 >> 1),
                (DAT_05233974 <= (int)uVar3 && (int)uVar3 <= DAT_05233984) && uVar7 >> 0xf == 0)) &&
               ((*(uint *)(PTR_DAT_04bbbb80 + (ulong)(uVar7 >> 5) * 4 + 8) >>
                 (ulong)(uVar6 >> 1 & 0x1f) & 1) != 0)) {
              return 1;
            }
          }
          bVar1 = iVar12 <= iVar9;
          iVar12 = iVar12 + 2;
        } while (bVar1);
        bVar1 = iVar8 < iVar13;
        iVar13 = iVar13 + 2;
        if (bVar1) {
          return 0;
        }
      } while( true );
    }
  }
  if ((param_6 & 1) == 0) {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    iVar13 = iVar8 + -2;
    do {
      iVar12 = iVar9 + -2;
      do {
        local_88 = puVar2;
        local_80 = iVar13;
        iStack_7c = iVar12;
        local_78 = param_4;
        iVar10 = (*param_3)(param_1,&local_88);
        if (iVar10 == 0) {
          return 1;
        }
        bVar1 = iVar12 <= iVar9;
        iVar12 = iVar12 + 2;
      } while (bVar1);
      bVar1 = iVar13 <= iVar8;
      iVar13 = iVar13 + 2;
    } while (bVar1);
  }
  else {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    iVar13 = iVar8 + -2;
    do {
      iVar12 = iVar9 + -2;
      do {
        local_88 = puVar2;
        local_80 = iVar13;
        iStack_7c = iVar12;
        local_78 = param_4;
        iVar10 = (*param_3)(param_1,&local_88);
        if (iVar10 == 0) {
          uVar6 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
          if (((DAT_05233970 <= (int)(uVar6 & 0xfffffffe) &&
                (int)(uVar6 & 0xfffffffe) <= DAT_05233980) &&
              (uVar7 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0),
              uVar3 = uVar7 & 0xfffffffe, uVar7 = (uVar7 * 0x80 & 0xffffff00) + ((int)uVar6 >> 1),
              (DAT_05233974 <= (int)uVar3 && (int)uVar3 <= DAT_05233984) && uVar7 >> 0xf == 0)) &&
             ((*(uint *)(PTR_DAT_04bbbb80 + (ulong)(uVar7 >> 5) * 4 + 8) >>
               (ulong)(uVar6 >> 1 & 0x1f) & 1) != 0)) {
            return 1;
          }
        }
        bVar1 = iVar12 <= iVar9;
        iVar12 = iVar12 + 2;
      } while (bVar1);
      bVar1 = iVar13 <= iVar8;
      iVar13 = iVar13 + 2;
    } while (bVar1);
  }
  return 0;
}

