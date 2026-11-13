
void FUN_0122acc0(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar3 = 0;
    puVar4 = DAT_055c1b60;
    do {
      if (*(int *)(puVar4 + -1) == 0x6622bd46) goto LAB_0122ad18;
      puVar4 = (undefined8 *)puVar4[1];
      uVar3 = uVar3 + 1;
    } while (puVar4 != &DAT_055c1b58);
  }
  uVar3 = 0xffff;
LAB_0122ad18:
  if ((uVar3 & 0xffff) == (param_2 & 0xffff)) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_0122a4e0(param_2);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  FUN_0122aaa0(param_1,uVar2);
  return;
}

