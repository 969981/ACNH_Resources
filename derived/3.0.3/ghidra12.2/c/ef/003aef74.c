
bool FUN_003aef74(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = FUN_003ae3e0();
  if (uVar1 - 1 < param_5) {
    *(undefined8 *)(param_1 + 0x10) = param_3;
    *(long *)(param_1 + 0x18) = param_4;
    FUN_003ae520(param_1,param_2,param_3,param_4);
    local_50 = 0;
    uStack_48 = 0;
    FUN_0034fb50(&local_50);
    local_50 = 0x1000000100;
    lVar2 = FUN_00347a58(param_2,&local_50);
    FUN_003ae6c0(param_1,param_2,param_3,
                 param_4 + (lVar2 + 0xffU & -lVar2) * (ulong)*(byte *)(param_1 + 0xe) *
                           (ulong)*(byte *)(param_1 + 0xf));
  }
  return uVar1 <= param_5;
}

