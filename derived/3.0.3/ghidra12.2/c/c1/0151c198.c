
int FUN_0151c198(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_4c;
  undefined4 local_44;
  
  local_44 = 0;
  local_4c = 0xc1200000;
  iVar1 = FUN_0151d990();
  iVar2 = iVar1;
  if ((iVar1 != 2) && (iVar1 != 1)) {
    uVar3 = FUN_0151e970(param_1,param_2,param_3,&local_4c,0,param_4 & 1,param_5);
    iVar2 = 3;
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

