
void FUN_00282c10(undefined8 param_1,long param_2,uint param_3,byte param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x3c);
  if (((param_3 & 0xff) < (uint)*(ushort *)(param_2 + 0x3c) && param_4 < uVar1) &&
     (param_5 != (uint *)0x0)) {
    *param_5 = 0;
    uVar2 = 0;
    lVar4 = *(long *)(param_2 + 8);
    uVar6 = 0;
    uVar3 = 0;
    uVar5 = 1;
    do {
      if (*(byte *)(lVar4 + (ulong)uVar1 * (ulong)(param_3 & 0xff) + (ulong)uVar6) == param_4) {
        uVar2 = uVar2 | uVar5;
        *param_5 = uVar2;
      }
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 << 1;
      uVar6 = uVar3 & 0xff;
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

