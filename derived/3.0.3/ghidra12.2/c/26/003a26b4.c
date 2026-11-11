
bool FUN_003a26b4(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  bVar1 = param_2[2] != 0 && (ulong)param_2[1] <= param_4;
  if (bVar1) {
    plVar7 = (long *)*param_2;
    bVar4 = param_3 != 0;
    lVar10 = *plVar7;
    *param_1 = (long)plVar7;
    lVar6 = 0;
    if (param_2[3] != 0 && bVar4) {
      lVar6 = param_3 + param_2[6];
    }
    param_1[1] = lVar6;
    lVar2 = 0;
    if (param_2[7] != 0 && bVar4) {
      lVar2 = param_3 + param_2[10];
    }
    param_1[2] = lVar2;
    lVar8 = param_2[0xb];
    lVar9 = param_2[0xe];
    param_1[5] = param_3;
    lVar2 = 0;
    if (lVar8 != 0 && bVar4) {
      lVar2 = param_3 + lVar9;
    }
    param_1[3] = lVar2;
    bVar3 = *(byte *)(*plVar7 + 0xeb);
    if ((ulong)bVar3 == 0) {
      iVar5 = FUN_003a0000(lVar10,plVar7 + 4,lVar6);
      lVar6 = *(long *)(lVar10 + 0x88) + (long)iVar5 * 0x40;
    }
    else {
      FUN_0039ff10(lVar10,lVar6);
      memmove((void *)param_1[2],(void *)param_1[1],(ulong)bVar3 << 2);
      FUN_0039ffe0(lVar10,param_1[3]);
      lVar6 = 0;
    }
    param_1[4] = lVar6;
  }
  return bVar1;
}

