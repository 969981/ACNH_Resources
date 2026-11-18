
void FUN_0344a048(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar3 = 0;
    cVar1 = cRam0000000000000dc8;
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    cVar1 = *(char *)(lVar3 + 0xdc8);
  }
  if (cVar1 == '\0') {
    bVar2 = 1;
  }
  else {
    bVar2 = (**(code **)(*(long *)(lVar3 + 0xdc0) + 0x18))(lVar3 + 0xdc0);
    *(undefined1 *)(lVar3 + 0xdc8) = 0;
  }
  *(byte *)(lVar3 + 0xdc9) = bVar2 & 1;
                    /* WARNING: Could not recover jumptable at 0x0344a0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,lVar3 + 0x1418);
  return;
}

