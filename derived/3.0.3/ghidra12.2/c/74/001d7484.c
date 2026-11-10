
void FUN_001d7484(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined1 auStack_40 [8];
  undefined1 local_38;
  long local_30;
  long local_28;
  
  FUN_001972b0(auStack_40,param_1);
  uVar2 = *(long *)(local_30 + 0x18) - local_28;
  if (uVar2 < 4) {
    uVar1 = 0;
    local_38 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(local_30 + 0x10) + *(long *)(local_30 + 0x28) + local_28);
    local_28 = local_28 + 4;
    uVar2 = *(long *)(local_30 + 0x18) - local_28;
  }
  if (uVar2 < 2) {
    uVar3 = 0;
    local_38 = 1;
  }
  else {
    uVar3 = *(undefined2 *)(*(long *)(local_30 + 0x10) + *(long *)(local_30 + 0x28) + local_28);
    local_28 = local_28 + 2;
  }
  FUN_001e184c(param_2,uVar1);
  FUN_001e17d0(param_2,uVar3);
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined2 *)(param_3 + 0x31) = 0;
  *(byte *)(param_3 + 0x30) = *(byte *)(param_3 + 0x30) & 4;
  FUN_00193030(param_3,*(long *)(local_30 + 0x10) + *(long *)(local_30 + 0x28) + local_28,
               *(long *)(local_30 + 0x18) - local_28,0xffffffffffffffff);
  FUN_00197350(auStack_40);
  return;
}

