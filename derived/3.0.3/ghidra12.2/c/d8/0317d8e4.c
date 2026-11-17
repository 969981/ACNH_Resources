
void FUN_0317d8e4(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  switch(param_3) {
  case 0x39:
    uVar2 = FUN_0267a9f0(param_1 + 0x1f8);
    uVar1 = uVar2 + ((uVar2 >> 2 & 0x3fff) / 0x19) * -100 & 0xffff;
    if (999 < uVar2) {
      uVar1 = uVar2 % 1000;
    }
    iVar3 = uVar2 - uVar1;
    break;
  case 0x3a:
    iVar3 = 10000;
    break;
  case 0x3b:
    iVar3 = 1000;
    break;
  case 0x3c:
    iVar3 = 100;
    break;
  default:
    iVar3 = 0;
  }
  FUN_01bafd70(param_2,iVar3,0);
  return;
}

