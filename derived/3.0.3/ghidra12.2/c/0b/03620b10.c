
undefined1 * FUN_03620b10(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x10ca);
  if ((ulong)*(ushort *)(param_1 + 0x15a) <= uVar4 - *(ushort *)(param_1 + 0x158)) {
    FUN_0361e468(param_1,uVar4);
  }
  pcVar3 = *(code **)(param_1 + 0x160);
  plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x168) >> 1) + 0xec0);
  if ((*(ulong *)(param_1 + 0x168) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  uVar2 = (*pcVar3)(plVar1,uVar4,*(undefined4 *)(param_1 + 0x15c));
  FUN_03638610(param_1);
  *(undefined1 *)(param_1 + 0x152) = uVar2;
  *(short *)(param_1 + 0x10ca) = *(short *)(param_1 + 0x10ca) + 1;
  return &LAB_03628fc0;
}

