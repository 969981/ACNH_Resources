
undefined4 FUN_003b9930(short *param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 uVar3;
  
  sVar2 = *param_1;
  uVar3 = 2;
  if (sVar2 == 0x220d) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (sVar2 != 0x220c) {
    uVar1 = uVar3;
  }
  uVar3 = 2;
  if (sVar2 != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}

