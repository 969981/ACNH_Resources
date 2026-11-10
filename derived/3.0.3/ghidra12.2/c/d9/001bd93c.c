
undefined8 FUN_001bd93c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_30 [8];
  undefined1 local_28;
  long local_20;
  ulong local_18;
  
  if (*(ulong *)(*(long *)(param_2 + 0x138) + 0x18) < 0xc) {
    return 0;
  }
  FUN_001972b0(auStack_30);
  uVar4 = *(ulong *)(local_20 + 0x18);
  uVar1 = local_18;
  if (uVar4 != local_18) {
    lVar3 = *(long *)(local_20 + 0x10) + *(long *)(local_20 + 0x28);
    uVar1 = local_18 + 1;
    *(undefined1 *)(param_2 + 0x114) = *(undefined1 *)(lVar3 + local_18);
    if (uVar4 != uVar1) {
      *(undefined1 *)(param_2 + 0x115) = *(undefined1 *)(lVar3 + uVar1);
      uVar1 = local_18 + 4;
      if (uVar4 < uVar1) {
        local_18 = local_18 + 2;
        FUN_00197350(auStack_30);
        return 0;
      }
      if (3 < uVar4 - uVar1) {
        uVar2 = local_18 + 8;
        *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(lVar3 + uVar1);
        uVar1 = uVar2;
        if (3 < uVar4 - uVar2) {
          local_18 = local_18 + 0xc;
          *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(lVar3 + uVar2);
          FUN_00196d30(*(undefined8 *)(param_2 + 0x138),0xc);
          FUN_00197350(auStack_30);
          return 1;
        }
      }
    }
  }
  local_18 = uVar1;
  local_28 = 1;
  FUN_00197350(auStack_30);
  return 0;
}

