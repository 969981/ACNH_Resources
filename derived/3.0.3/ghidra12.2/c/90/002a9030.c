
void FUN_002a9030(undefined8 param_1,long param_2,ushort param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  *(ushort *)(param_2 + 0x10) = param_3;
  if (param_3 < 2) {
    local_44 = 0x10c07;
  }
  else {
    uVar1 = FUN_0021f454();
    uVar4 = (ulong)param_3;
    lVar2 = FUN_00285d10(uVar4 * 0x660,uVar1);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      do {
        FUN_0022b6dc(lVar3);
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + 0x660;
      } while (uVar4 != 0);
    }
    *(long *)(param_2 + 8) = lVar2;
    local_44 = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

