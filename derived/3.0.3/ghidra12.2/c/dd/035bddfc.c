
void FUN_035bddfc(ulong *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  
  if (param_3 == 0) {
    uVar2 = 0x1000000;
  }
  else {
    FUN_035bddfc(&local_28,param_2,param_3 + -1);
    uVar2 = *param_2;
    uVar3 = (local_28 & 0xffffffff) * (uVar2 & 0xffffffff);
    uVar4 = (uVar3 >> 0x20) + (local_28 & 0xffffffff) * (uVar2 >> 0x20);
    lVar1 = (local_28 >> 0x20) * (uVar2 & 0xffffffff) + (uVar4 & 0xffffffff);
    uVar2 = (uVar3 & 0xff000000 | lVar1 << 0x20) >> 0x18 |
            (ulong)(uint)((int)(uVar4 >> 0x20) + (int)(local_28 >> 0x20) * (int)(uVar2 >> 0x20) +
                         (int)((ulong)lVar1 >> 0x20)) << 0x28;
  }
  *param_1 = uVar2;
  return;
}

