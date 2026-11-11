
int FUN_004642f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_b8 [16];
  ulong local_a8;
  long local_a0;
  long *local_98;
  long *plStack_90;
  long local_78 [2];
  ulong local_68;
  
  FUN_00427c30(&local_98,param_3,0);
  puVar3 = PTR_DAT_04bd7370;
  puVar2 = PTR_DAT_04bd53b8;
  puVar1 = PTR_DAT_04bd53a8;
  iVar13 = 0;
LAB_00464364:
  do {
    if (plStack_90 <= local_98 + 1) goto LAB_00464384;
    local_98 = local_98 + 1;
    uVar5 = FUN_004290b0();
  } while ((uVar5 >> 5 & 1) == 0);
  goto LAB_0046439c;
LAB_00464384:
  uVar7 = FUN_00427c40(&local_98);
  if ((uVar7 & 1) == 0) {
    return iVar13;
  }
  uVar5 = FUN_004290b0(local_98);
  if ((uVar5 >> 5 & 1) != 0) {
LAB_0046439c:
    lVar14 = *local_98;
    local_a0 = lVar14;
    uVar7 = FUN_00428440(lVar14);
    lVar4 = local_a0;
    if ((lVar14 == 0) || ((uVar7 & 0x1f) != 8)) {
      uVar7 = FUN_00428440(local_a0);
      if ((lVar4 != 0) && ((uVar7 & 0x1f) == 7)) {
        FUN_00427bc0(local_78,lVar4,puVar3);
        lVar14 = local_78[0];
        if ((local_68 & 1) != 0) {
          FUN_0043dd50(local_68 & 0xfffffffffffffffe);
        }
        if (lVar14 != 0) {
          uVar11 = FUN_00427b40(&local_a0);
          FUN_0043f220(auStack_b8,param_2,uVar11);
          iVar6 = FUN_00429050(&local_a0);
          iVar6 = FUN_004642f0(param_1,auStack_b8,lVar4,iVar6 + param_4);
          iVar13 = iVar6 + iVar13;
          if ((local_a8 & 1) != 0) {
            FUN_0043dd50(local_a8 & 0xfffffffffffffffe);
          }
        }
      }
    }
    else {
      iVar6 = FUN_00426fc0(lVar14);
      if (((iVar6 == 4) || (iVar6 = FUN_00426fc0(lVar14), iVar6 == 8)) &&
         ((puVar8 = (undefined8 *)FUN_00426e90(lVar14,1), puVar8 == (undefined8 *)0x0 ||
          ((int)((ulong)*puVar8 >> 8) < 1)))) {
        pcVar9 = (char *)FUN_00427270(lVar14);
        pcVar10 = (char *)FUN_00427270(puVar1);
        iVar6 = strcmp(pcVar9,pcVar10);
        if (iVar6 == 0) {
          uVar11 = FUN_00427b40(&local_a0);
          uVar12 = 0;
        }
        else {
          pcVar9 = (char *)FUN_00427270(lVar14);
          pcVar10 = (char *)FUN_00427270(puVar2);
          iVar6 = strcmp(pcVar9,pcVar10);
          if (iVar6 != 0) goto LAB_00464364;
          uVar11 = FUN_00427b40(&local_a0);
          uVar12 = 1;
        }
        FUN_004661e0(param_1,uVar12,param_2,param_3,uVar11,param_4);
        iVar13 = iVar13 + 1;
      }
    }
  }
  goto LAB_00464364;
}

