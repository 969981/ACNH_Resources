
void FUN_00283310(undefined8 param_1,long param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar1 = *(ushort *)(param_2 + 0x3c);
  if (((param_3 & 0xff) < (uint)uVar1) && (param_4 != (uint *)0x0)) {
    *param_4 = 0;
    uVar2 = 0;
    lVar4 = *(long *)(param_2 + 0x50);
    uVar6 = 0;
    bVar3 = 0;
    uVar5 = 1;
    do {
      if (*(byte *)(lVar4 + (ulong)uVar1 * (ulong)(param_3 & 0xff) + (ulong)uVar6) == bVar3) {
        uVar2 = uVar2 | uVar5;
        *param_4 = uVar2;
      }
      bVar3 = bVar3 + 1;
      uVar5 = uVar5 << 1;
      uVar6 = (uint)bVar3;
    } while (uVar6 < uVar1);
    local_24 = 0;
  }
  else {
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

