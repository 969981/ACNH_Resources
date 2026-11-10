
void FUN_00375fd4(undefined8 param_1,ushort *param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_4 + 0x30);
  iVar1 = FUN_0036b7f0(*(undefined8 *)(param_4 + 0xa0));
  uVar3 = FUN_0038cf10(param_5);
  if (lVar7 == param_3) {
    iVar6 = iVar1;
  }
  else {
    iVar6 = *(int *)(param_4 + 0x94);
    iVar2 = FUN_0038cfa0(param_5);
    iVar6 = iVar2 + iVar6;
  }
  uVar4 = FUN_0036b7e4(*(undefined8 *)(param_4 + 0xa0),iVar6);
  lVar7 = FUN_0036b420(uVar4,uVar3);
  if (lVar7 == 0) {
    FUN_0036afec(uVar4,uVar3);
    uVar5 = *param_2 | 0x100;
  }
  else {
    uVar5 = *param_2;
  }
  *param_2 = uVar5 & 0xf1ff | ((short)iVar1 - (short)iVar6) * 0x200 & 0xe00U;
  return;
}

