
bool FUN_00515d10(long param_1,int param_2,undefined4 param_3,long *param_4,uint param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  
  puVar2 = PTR_DAT_048607b8;
  lVar6 = *(long *)(*(long *)(param_1 + 0x60) + (long)param_2 * 8);
  lVar1 = param_4[1];
  iVar5 = *(int *)(lVar6 + 0x28);
  if (iVar5 == 0) {
    iVar5 = (int)lVar1;
  }
  else {
    piVar8 = *(int **)(lVar6 + 0x20);
    lVar6 = (long)iVar5 << 2;
    do {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)*piVar8 * 8);
      uVar3 = FUN_00515b60(uVar7,param_3,param_5 & 1);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(uint *)(param_4 + 1);
        if (uVar4 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
          FUN_00426990(puVar2,param_4,8);
          uVar4 = *(uint *)(param_4 + 1);
        }
        *(undefined8 *)(*param_4 + (long)(int)uVar4 * 8) = uVar7;
        *(uint *)(param_4 + 1) = uVar4 + 1;
      }
      piVar8 = piVar8 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
    iVar5 = (int)param_4[1];
  }
  return (int)lVar1 < iVar5;
}

