
uint FUN_002321f8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  FUN_0022d1f4();
  FUN_0022d308();
  uVar1 = FUN_0023d260();
  if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x16e0), lVar2 != 0)) {
    local_44 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    FUN_002296c4(auStack_34,&local_44);
    FUN_00220f8c(lVar2,auStack_34);
    *(undefined8 *)(param_1 + 0x16e0) = 0;
  }
  return uVar1 & 1;
}

