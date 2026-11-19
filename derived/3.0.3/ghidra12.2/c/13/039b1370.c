
void FUN_039b1370(long *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  short *psVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_003a53c0(param_4,param_3,0,0);
  uVar1 = *(uint *)(param_1 + 1);
  if ((uint)*(ushort *)((long)param_1 + 0x1c) <= *(uint *)(param_1 + 1)) {
    uVar1 = (uint)*(ushort *)((long)param_1 + 0x1c);
  }
  if (uVar1 != 0) {
    lVar6 = param_1[2];
    uVar5 = 0;
    uVar7 = 0;
    do {
      psVar4 = (short *)(**(code **)(*param_1 + 0x20))(param_1,uVar5);
      sVar2 = psVar4[1];
      if ((param_2 == *psVar4 && *psVar4 != -1) && sVar2 != -1) {
        bVar3 = *(byte *)(lVar6 + (int)uVar7);
        if ((char)bVar3 < '\0') {
          FUN_003a53c0(param_4,param_3,(int)sVar2,bVar3 & 0x7f);
        }
        else {
          FUN_003a979c(param_4,(int)sVar2);
        }
      }
      uVar5 = uVar7 + 1;
      uVar7 = uVar5 & 0xffffffff;
    } while (uVar1 != (uint)uVar5);
  }
  return;
}

