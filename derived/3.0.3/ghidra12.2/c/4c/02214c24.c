
void FUN_02214c24(long *param_1,undefined2 *param_2,int param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int local_74;
  undefined8 local_70;
  char *pcStack_68;
  
  lVar2 = *param_1;
  lVar13 = param_1[2];
  plVar1 = param_1 + 3;
  lVar3 = param_1[1];
  if (param_3 != 0) {
    plVar1 = param_1 + 4;
    lVar3 = lVar13;
  }
  lVar12 = *plVar1;
  local_74 = param_3;
  FUN_02215aa8(lVar2,lVar12);
  puVar4 = PTR_DAT_04bb2020;
  if (param_3 == 2) {
LAB_02214e50:
    *param_2 = 0x23;
    *(undefined1 *)(param_2 + 1) = 8;
    FUN_03777ea0(&local_74,param_4);
  }
  else {
    if ((param_3 == 0) || ((*(byte *)(lVar2 + 0x1e4) >> 2 & 1) != 0)) {
LAB_02214e28:
      uVar8 = FUN_02216480(param_2,lVar12,lVar3);
      if ((uVar8 & 1) == 0) goto LAB_02214e50;
    }
    else {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "NewBuildCount";
      iVar6 = FUN_02758850(&local_70);
      puVar5 = PTR_DAT_04bb27f8;
      lVar11 = *(long *)PTR_DAT_04bb27f8;
      uVar10 = 0;
      if (lVar11 == 0) {
LAB_02214d0c:
        if (uVar10 + iVar6 != 3) goto LAB_02214d24;
        puVar9 = &DAT_0545a3f0;
      }
      else {
        if (*(int *)(lVar11 + 0x18) == 1) {
          local_70 = (undefined *)
                     (CONCAT44(local_70._4_4_,(uint)*(ushort *)(lVar11 + 0xc0)) & 0xffffffff0000000f
                     );
          uVar10 = *(ushort *)(lVar11 + 0xc0) & 0xf;
          if ((int)local_70 == 1) goto LAB_02214d0c;
        }
        local_70 = puVar4 + 0x10;
        pcStack_68 = "IsOrderedNewNpcHouse";
        iVar7 = FUN_02758850(&local_70);
        if (iVar7 == 0) {
          uVar10 = 0;
          goto LAB_02214d0c;
        }
LAB_02214d24:
        local_70 = puVar4 + 0x10;
        pcStack_68 = "NewBuildCount";
        iVar6 = FUN_02758850(&local_70);
        lVar11 = *(long *)puVar5;
        uVar10 = 0;
        if (lVar11 == 0) {
LAB_02214d84:
          if (uVar10 + iVar6 == 7) {
            puVar9 = &DAT_0545a3f4;
            goto LAB_02214e10;
          }
        }
        else {
          if (*(int *)(lVar11 + 0x18) == 1) {
            local_70 = (undefined *)
                       (CONCAT44(local_70._4_4_,(uint)*(ushort *)(lVar11 + 0xc0)) &
                       0xffffffff0000000f);
            uVar10 = *(ushort *)(lVar11 + 0xc0) & 0xf;
            if ((int)local_70 == 1) goto LAB_02214d84;
          }
          local_70 = puVar4 + 0x10;
          pcStack_68 = "IsOrderedNewNpcHouse";
          iVar7 = FUN_02758850(&local_70);
          if (iVar7 == 0) {
            uVar10 = 0;
            goto LAB_02214d84;
          }
        }
        local_70 = puVar4 + 0x10;
        pcStack_68 = "NewBuildCount";
        iVar6 = FUN_02758850(&local_70);
        lVar11 = *(long *)puVar5;
        uVar10 = 0;
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x18) == 1) {
            local_70 = (undefined *)
                       (CONCAT44(local_70._4_4_,(uint)*(ushort *)(lVar11 + 0xc0)) &
                       0xffffffff0000000f);
            uVar10 = *(ushort *)(lVar11 + 0xc0) & 0xf;
            if ((int)local_70 == 1) goto LAB_02214dfc;
          }
          local_70 = puVar4 + 0x10;
          pcStack_68 = "IsOrderedNewNpcHouse";
          iVar7 = FUN_02758850(&local_70);
          if (iVar7 != 0) goto LAB_02214e28;
          uVar10 = 0;
        }
LAB_02214dfc:
        if (uVar10 + iVar6 != 8) goto LAB_02214e28;
        puVar9 = &DAT_0545a3f8;
      }
LAB_02214e10:
      uVar8 = FUN_02210ae0(lVar2,param_2,lVar13,puVar9,param_4);
      if ((uVar8 & 1) == 0) goto LAB_02214e28;
    }
    FUN_03777c00(param_2,&local_74,param_4);
  }
  return;
}

