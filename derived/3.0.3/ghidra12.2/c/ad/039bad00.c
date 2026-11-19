
long FUN_039bad00(long param_1,undefined8 param_2,int *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  long *plVar21;
  undefined *local_210;
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 local_158;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined2 local_117;
  undefined8 local_110;
  
  if ((*(byte *)(param_1 + 0x1110) & 1) == 0) {
    if (*(char *)(*(long *)(param_1 + 8) + 0x5b) == '\0') {
      lVar14 = 0;
      iVar8 = *(int *)(param_1 + 0x1060);
      goto joined_r0x039bafac;
    }
    uVar18 = 0;
    lVar14 = 0;
    puVar1 = PTR_DAT_04bd0d18 + 0x10;
    puVar2 = PTR_DAT_04bd0f88 + 0x10;
    plVar21 = (long *)PTR_DAT_04bbd7c0;
    do {
      lVar15 = *(long *)(param_1 + 0xe10);
      lVar16 = lVar15 + uVar18 * 0x260;
      local_210 = puVar1;
      FUN_00347d68(local_208);
      lVar11 = *plVar21;
      local_200 = *(undefined8 *)(lVar11 + 0x48);
      local_110 = 0;
      local_208[0] = 2;
      local_120 = 0;
      local_118 = 0;
      local_117 = 4;
      local_158 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar15 == 0) {
        local_158 = *(undefined8 *)(lVar11 + 0x40);
      }
      else {
        *(undefined ***)(lVar15 + uVar18 * 0x260 + 0x30) = &local_210;
      }
      lVar19 = lVar15 + uVar18 * 0x260;
      iVar8 = *param_3;
      iVar5 = param_3[1];
      lVar11 = *(long *)(param_3 + 2);
      uVar9 = *(undefined8 *)(param_3 + 4);
      uVar13 = param_4 - lVar14;
      if (0x1ffffff < uVar13) {
        uVar13 = 0x2000000;
      }
      puVar20 = (uint *)(lVar19 + 0x24);
      *puVar20 = 0;
      uVar12 = 0;
      if (lVar11 != 0) {
        uVar12 = (undefined4)uVar13;
      }
      *(int *)(lVar19 + 8) = iVar8 + (int)lVar14;
      *(int *)(lVar19 + 0xc) = iVar5;
      *(undefined4 *)(lVar19 + 0x20) = uVar12;
      *(long *)(lVar19 + 0x10) = lVar11;
      *(undefined8 *)(lVar19 + 0x18) = uVar9;
      *(byte *)(lVar19 + 600) = *(byte *)(lVar19 + 600) & 0xfc | *(int *)(lVar19 + 0x24c) != 0;
      local_210 = puVar2;
      local_128 = lVar16;
      uVar13 = FUN_038fe8f0(lVar16);
      if ((uVar13 & 1) != 0) {
        pbVar3 = (byte *)(lVar19 + 600);
        lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x18) + uVar18 * 0x38;
        FUN_003a127c(lVar11,local_208,0,*(undefined2 *)(lVar11 + 0x34),1);
        lVar15 = lVar15 + uVar18 * 0x260;
        uVar17 = *(undefined8 *)(*(long *)(lVar15 + 0x30) + 0xb8);
        uVar9 = (**(code **)PTR_DAT_04bcf108)(uVar17);
        *(undefined8 *)(lVar15 + 0x250) = uVar9;
        iVar8 = (**(code **)PTR_DAT_04bcfce8)(uVar17);
        *(int *)(lVar19 + 0x24c) = iVar8;
        lVar11 = (**(code **)PTR_DAT_04bcfcd0)(uVar17);
        plVar21 = (long *)PTR_DAT_04bbd7c0;
        if ((lVar11 == 0) && (*(int *)(lVar19 + 0x24c) == 0)) {
          bVar10 = *pbVar3 & 0xfe;
        }
        else {
          bVar10 = *pbVar3 | 1;
        }
        *pbVar3 = bVar10;
        *puVar20 = (uint)lVar11;
        lVar11 = *(long *)PTR_DAT_04bc1010;
        (**(code **)PTR_DAT_04bcf0e8)(uVar17);
        piVar4 = (int *)(lVar11 + 0x644);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = *piVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *pbVar3 = *pbVar3 & 0xfb | 2;
      }
      lVar14 = ((ulong)*puVar20 + 3 & 0x1fffffffc) + lVar14;
      FUN_038f43d0(&local_210);
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(byte *)(*(long *)(param_1 + 8) + 0x5b));
  }
  else {
    lVar14 = 0;
  }
  iVar8 = *(int *)(param_1 + 0x1060);
joined_r0x039bafac:
  if (iVar8 != 0) {
    iVar8 = *param_3;
    uVar9 = *(undefined8 *)(param_3 + 2);
    uVar17 = *(undefined8 *)(param_3 + 4);
    *(int *)(param_1 + 0x104c) = param_3[1];
    *(undefined8 *)(param_1 + 0x1050) = uVar9;
    *(undefined8 *)(param_1 + 0x1058) = uVar17;
    *(int *)(param_1 + 0x1048) = iVar8 + (int)lVar14;
    FUN_039baa70(param_1,param_2);
    lVar14 = lVar14 + (ulong)*(uint *)(param_1 + 0x1060);
  }
  return lVar14;
}

