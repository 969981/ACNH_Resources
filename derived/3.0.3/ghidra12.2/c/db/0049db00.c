
undefined8 FUN_0049db00(ulong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined1 auStack_50 [32];
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  uVar6 = (long)pbVar2 - (long)pbVar1;
  if (0 < (int)uVar6) {
    pbVar5 = pbVar1 + 1;
    if (*pbVar1 != 0x2d) {
      pbVar5 = pbVar1;
    }
    if (pbVar5 < pbVar2) {
      bVar3 = pbVar1[*pbVar1 == 0x2d];
      while (bVar3 - 0x30 < 10) {
        pbVar5 = pbVar5 + 1;
        if (pbVar2 <= pbVar5) {
          FUN_0043a2b0(auStack_50,0x20,pbVar1,uVar6 & 0xffffffff);
          auStack_50[uVar6] = 0;
          uVar4 = FUN_0043a310(auStack_50,0);
          *param_2 = uVar4;
          return 0;
        }
        bVar3 = *pbVar5;
      }
    }
  }
  return 0x80040200;
}

