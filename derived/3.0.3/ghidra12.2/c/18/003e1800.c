
bool FUN_003e1800(undefined8 param_1,int param_2,byte *param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_28;
  
  if ((*param_3 & 0x3f) != 0) {
    return false;
  }
  local_28 = FUN_003cd670();
  lVar5 = FUN_003c0150(&local_28);
  lVar1 = 0x9b0;
  if (lVar5 != 0) {
    lVar1 = lVar5 * 2 + 0x9e0;
  }
  uVar6 = lVar1 * param_2 + 0x3fU & 0xffffffffffffffc0;
  lVar1 = *(long *)param_3 + uVar6;
  param_4 = lVar1 - param_4;
  if (param_4 < 1) {
    iVar4 = FUN_003e18c0(param_1,*(long *)param_3,uVar6,&local_28);
    bVar3 = iVar4 == param_2;
    *(long *)param_3 = lVar1;
  }
  else {
    bVar3 = false;
  }
  bVar2 = false;
  if (param_4 < 1) {
    bVar2 = bVar3;
  }
  return bVar2;
}

