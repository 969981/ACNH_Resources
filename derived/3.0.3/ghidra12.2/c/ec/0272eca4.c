
ulong FUN_0272eca4(ushort *param_1,ulong param_2)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = nn::time::IsValidDate
                    ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
  if ((uVar2 & 1) == 0) {
    uVar2 = 0x10107d0;
  }
  else {
    uVar3 = nn::time::IsValidDate
                      ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
    uVar7 = (ulong)*param_1;
    uVar4 = nn::time::IsValidDate
                      ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
    uVar1 = param_1[1];
    uVar5 = nn::time::IsValidDate
                      ((uint)*param_1,(uint)(byte)uVar1,(uint)*(byte *)((long)param_1 + 3));
    uVar2 = 0x500000000;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    uVar6 = (ulong)*(byte *)((long)param_1 + 3) << 0x18;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0x1000000;
    }
    uVar5 = (ulong)(byte)uVar1 << 0x10;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0x10000;
    }
    if ((uVar3 & 1) == 0) {
      uVar7 = 2000;
    }
    uVar2 = uVar7 | uVar2 | uVar5 | uVar6;
  }
  return uVar2;
}

