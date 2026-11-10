
int FUN_001677d4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  bVar4 = (*(byte *)((long)param_2 + 0xd) & 0x20) != 0;
  lVar2 = 0;
  if (bVar4) {
    lVar2 = -5;
  }
  lVar3 = 0;
  if (bVar4) {
    lVar3 = 5;
  }
  lVar3 = *(long *)(lVar7 + 0x18) + lVar3;
  *(long *)(lVar7 + 0x18) = lVar3;
  *(long *)(lVar7 + 0x20) = lVar3;
  iVar5 = FUN_00168e40(param_3,param_1,param_2[5],param_2[6]);
  iVar1 = -0x20b;
  if (iVar5 != -0x1f6) {
    iVar1 = iVar5;
  }
  lVar2 = *(long *)(lVar7 + 0x18) + lVar2;
  *(long *)(lVar7 + 0x18) = lVar2;
  if (iVar1 == 0) {
    if ((*(byte *)((long)param_2 + 0xd) >> 5 & 1) != 0) {
      FUN_0016788c(lVar2,param_2 + 3);
    }
    param_2[2] = 0;
    uVar6 = FUN_0016b4d4(param_1);
    *param_2 = uVar6;
    FUN_001678d4(param_1,param_2);
  }
  return iVar1;
}

