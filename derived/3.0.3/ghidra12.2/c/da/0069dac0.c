
bool FUN_0069dac0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  undefined1 auStack_260 [560];
  
  memset(auStack_260,0,0x230);
  FUN_00694a2c(auStack_260);
  FUN_00694a74(auStack_260,PTR_LAB_04bdf410,param_1);
  uVar4 = FUN_00694a80(auStack_260,param_2,param_3);
  bVar3 = false;
  if ((uVar4 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 2);
    if ((int)uVar1 < 1) {
      bVar3 = true;
    }
    else if (*(char *)(*param_1 + 0x29) == '\x01') {
      pcVar5 = (char *)(*param_1 + 0x59);
      uVar4 = 1;
      do {
        uVar6 = uVar4;
        if (uVar1 == uVar6) break;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 0x30;
        uVar4 = uVar6 + 1;
      } while (cVar2 == '\x01');
      bVar3 = uVar1 <= uVar6;
    }
    else {
      bVar3 = false;
    }
  }
  FUN_00695e14(auStack_260);
  return bVar3;
}

