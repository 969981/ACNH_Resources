
void FUN_0033eda0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)**(undefined8 **)(param_1 + 0x19b8))();
  if ((int)*(uint *)(param_1 + 0x19d0) < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x19d8) + (long)*(int *)(param_1 + 0x19d4) * -8;
    uVar1 = 0xffffffff;
    do {
      lVar3 = lVar3 + (long)*(int *)(param_1 + 0x19d4) * 8;
      if (lVar3 == param_2) {
        uVar1 = (uint)uVar2;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_1 + 0x19d0) != uVar2);
  }
  *(uint *)(param_1 + 0x19e0) =
       *(uint *)(param_1 + 0x19e0) & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
                    /* WARNING: Could not recover jumptable at 0x0033ee40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x19b8) + 8))();
  return;
}

