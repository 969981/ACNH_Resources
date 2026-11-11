
int FUN_004e41b0(long param_1,long *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined4 local_54;
  byte *local_48;
  
  local_48 = param_3;
  if (param_3 != (byte *)0x0) {
    for (; (*local_48 & 1) == 0; local_48 = *(byte **)(local_48 + 8)) {
    }
  }
  local_54 = 0xffffffff;
  uVar3 = FUN_0047b410(param_2,&local_48,&local_54);
  pbVar9 = local_48;
  iVar4 = *(int *)(*param_2 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8);
  if (iVar4 != -1) {
    return iVar4;
  }
  iVar1 = *(int *)(param_1 + 0x220);
  iVar4 = iVar1 + 1;
  if ((int)(*(uint *)(param_1 + 0x224) & 0x3fffffff) <= iVar1) {
    uVar8 = FUN_00426720(PTR_DAT_048607b8,iVar4,8,*(undefined8 *)(param_1 + 0x218),iVar1,
                         param_1 + 0x224);
    *(undefined8 *)(param_1 + 0x218) = uVar8;
    if ((iVar1 < *(int *)(param_1 + 0x220)) && (*(int *)(param_1 + 0x220) <= iVar4))
    goto LAB_004e42a4;
  }
  *(int *)(param_1 + 0x220) = iVar4;
LAB_004e42a4:
  pbVar2 = local_48;
  *(byte **)(*(long *)(param_1 + 0x218) + (long)iVar1 * 8) = pbVar9;
  *(int *)(*param_2 + (long)(int)uVar3 * 0x10 + 8) = iVar1;
  uVar6 = FUN_00428440(local_48);
  pbVar9 = local_48;
  if ((pbVar2 == (byte *)0x0) || ((uVar6 & 0x1f) != 7)) {
    uVar6 = FUN_00428440(local_48);
    pbVar2 = local_48;
    if (((pbVar9 != (byte *)0x0) && ((uVar6 & 0x1f) == 8)) ||
       ((uVar6 = FUN_00428440(local_48), pbVar2 != (byte *)0x0 &&
        (pbVar9 = pbVar2, (uVar6 & 0x1f) == 6)))) {
      uVar8 = FUN_00426d90(pbVar9);
      FUN_004e41b0(param_1,param_2,uVar8);
    }
  }
  else {
    iVar4 = FUN_004284f0(pbVar2);
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        lVar7 = FUN_004285f0(pbVar2,iVar4);
        FUN_004e41b0(param_1,param_2,*(undefined8 *)(lVar7 + 8));
        iVar4 = iVar4 + 1;
        iVar5 = FUN_004284f0(pbVar2);
      } while (iVar4 < iVar5);
    }
  }
  return iVar1;
}

