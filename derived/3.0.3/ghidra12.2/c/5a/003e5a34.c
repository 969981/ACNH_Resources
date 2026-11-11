
ulong FUN_003e5a34(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1 + param_2 & 0xfffffffffffffffc;
  uVar3 = param_1 + 3U & 0xfffffffffffffffc;
  uVar1 = 0;
  if ((uVar3 <= uVar2) && (0x57 < (param_1 + param_2) - uVar3)) {
    *(ulong *)uVar3 = uVar3;
    *(ulong *)(uVar3 + 8) = uVar3;
    *(ulong *)(uVar3 + 0x28) = uVar3 + 0x28;
    *(ulong *)(uVar3 + 0x30) = uVar3 + 0x28;
    FUN_003e5ca0(uVar3,0x46524d48,uVar3 + 0x58,uVar2,param_3);
    *(undefined8 *)(uVar3 + 0x50) = 0;
    *(undefined8 *)(uVar3 + 0x40) = *(undefined8 *)(uVar3 + 0x10);
    *(undefined8 *)(uVar3 + 0x48) = *(undefined8 *)(uVar3 + 0x18);
    uVar1 = uVar3;
  }
  return uVar1;
}

