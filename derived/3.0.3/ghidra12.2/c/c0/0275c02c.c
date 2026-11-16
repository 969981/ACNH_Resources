
undefined8 FUN_0275c02c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 0x234);
  uVar3 = ~uVar2;
  uVar5 = 1 << (ulong)(param_2 << 2 & 0x1f);
  uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  DAT_05582b7c = uVar1;
  iVar6 = (int)((ulong)uVar1 *
                (ulong)((uVar3 >> (ulong)(param_2 << 2 & 0x1fU | 1) & 1) +
                        (uVar3 >> (ulong)(param_2 << 2 & 0x1f) & 1) +
                       (uVar3 >> (ulong)(param_2 << 2 & 0x1fU | 2) & 1) +
                       (uVar3 >> (ulong)(param_2 << 2 & 0x1fU | 3) & 1)) >> 0x20);
  if ((uVar2 & uVar5) == 0) {
    if (iVar6 == 0) {
      uVar4 = 0;
      goto LAB_0275c124;
    }
    iVar6 = iVar6 + -1;
  }
  uVar5 = 1 << (ulong)(param_2 << 2 & 0x1fU | 1);
  if ((uVar2 & uVar5) == 0) {
    if (iVar6 == 0) {
      uVar4 = 1;
      goto LAB_0275c124;
    }
    iVar6 = iVar6 + -1;
  }
  uVar5 = 1 << (ulong)(param_2 << 2 & 0x1fU | 2);
  if ((uVar2 & uVar5) == 0) {
    if (iVar6 == 0) {
      uVar4 = 2;
      goto LAB_0275c124;
    }
    iVar6 = iVar6 + -1;
  }
  uVar5 = 1 << (ulong)(param_2 << 2 & 0x1fU | 3);
  if ((uVar2 & uVar5) != 0 || iVar6 != 0) {
    return 0;
  }
  uVar4 = 3;
LAB_0275c124:
  *(uint *)(param_1 + 0x234) = uVar5 | uVar2;
  return uVar4;
}

