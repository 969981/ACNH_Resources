
undefined4 FUN_01709d24(long param_1)

{
  short *psVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  psVar1 = (short *)(param_1 + 0x5e8c);
  if (((*psVar1 == -2) || (*(long *)(param_1 + 0x1138) == 0)) ||
     (uVar2 = FUN_03850a90(*(long *)(param_1 + 0x1138),0x24,0,0), (uVar2 & 1) == 0)) {
    return 7;
  }
  uVar2 = FUN_0277d7b4(&DAT_05248648,psVar1);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_0277d7b4(&DAT_05248650,psVar1);
  if ((uVar2 & 1) != 0) {
    return 0x16;
  }
  uVar2 = FUN_0277d7b4(&DAT_05248658,psVar1);
  if ((uVar2 & 1) != 0) {
    return 6;
  }
  uVar2 = FUN_0277d7b4(&DAT_05248660,psVar1);
  if ((uVar2 & 1) != 0) {
    return 0x19;
  }
  uVar2 = FUN_0277d7b4(&DAT_05248668,psVar1);
  uVar3 = 0x19;
  if ((uVar2 & 1) == 0) {
    uVar3 = 7;
  }
  return uVar3;
}

