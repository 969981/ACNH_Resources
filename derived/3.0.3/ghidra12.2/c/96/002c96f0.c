
void FUN_002c96f0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (param_4 == 0) {
    local_54 = 0x10c07;
  }
  else {
    for (lVar3 = *(long *)(param_2 + 0x1e0); lVar3 != param_2 + 0x1d8; lVar3 = *(long *)(lVar3 + 8))
    {
      lVar2 = lVar3 + 0x18;
      lVar1 = FUN_002b43ec(lVar2);
      if (lVar1 == param_3) goto LAB_002c97dc;
    }
    for (lVar3 = *(long *)(param_2 + 0x230); lVar3 != param_2 + 0x228; lVar3 = *(long *)(lVar3 + 8))
    {
      lVar2 = lVar3 + 0x18;
      lVar1 = FUN_002b43ec(lVar2);
      if (lVar1 == param_3) goto LAB_002c97dc;
    }
    for (lVar3 = *(long *)(param_2 + 400); lVar3 != param_2 + 0x188; lVar3 = *(long *)(lVar3 + 8)) {
      lVar2 = lVar3 + 0x18;
      lVar1 = FUN_002b43ec(lVar2);
      if (lVar1 == param_3) goto LAB_002c97dc;
    }
    local_54 = 0x2c0a;
  }
LAB_002c97e4:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
LAB_002c97dc:
  FUN_002b415c(param_4,lVar2);
  local_54 = 0;
  goto LAB_002c97e4;
}

