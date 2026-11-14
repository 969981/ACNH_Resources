
void FUN_01b67140(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if ((*(long **)(param_2 + 0x140) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(param_2 + 0x140), puVar3 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar3)();
    uVar1 = uVar1 ^ 1;
  }
  FUN_026e85f0(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x40) = uVar2 & 0xffff;
  FUN_026ea320(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x44) = uVar2 & 0xffff;
  FUN_026ea720(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x48) = uVar2 & 0xffff;
  FUN_02814e30(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x4c) = uVar2 & 0xffff;
  FUN_028152a0(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x50) = uVar2 & 0xffff;
  FUN_026e9240(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x54) = uVar2 & 0xffff;
  FUN_026e9470(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x58) = uVar2 & 0xffff;
  FUN_026e96a0(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120));
  uVar2 = FUN_0277d6c4();
  *(uint *)(param_1 + 0x5c) = uVar2 & 0xffff;
  if ((((uVar1 & 1) == 0) && (*(long *)(param_2 + 0x140) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x140) + 8), puVar3 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01b67268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)();
    return;
  }
  return;
}

