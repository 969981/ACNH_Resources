
void FUN_002a62e0(undefined8 param_1,long param_2,short *param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar3 = *(ushort *)(param_2 + 0x18);
  uVar2 = *(ushort *)(param_2 + 0x1a);
  uVar4 = (uint)uVar2;
  if (uVar2 != 0) {
    uVar5 = *(uint *)(param_2 + 0x14);
    uVar2 = uVar2 + uVar3;
    do {
      uVar1 = 0;
      if (*(uint *)(param_2 + 0x10) <= uVar5) {
        uVar1 = *(uint *)(param_2 + 0x10);
      }
      if (*(char *)(*(long *)(param_2 + 8) + (ulong)(uVar5 - uVar1) * 0x5b0) == '\0')
      goto LAB_002a633c;
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    uVar3 = uVar2;
  }
LAB_002a633c:
  if (uVar3 < *(ushort *)(param_2 + 0x1c)) {
    *param_3 = 0;
    local_24 = 0x10c08;
  }
  else {
    local_24 = 0;
    *param_3 = uVar3 - *(ushort *)(param_2 + 0x1c);
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

