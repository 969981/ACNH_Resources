
undefined1 * FUN_036289f0(long param_1)

{
  long *plVar1;
  short sVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(*(ushort *)(param_1 + 0x10c8) + 1);
  if ((ulong)*(ushort *)(param_1 + 0x174) <= (uVar4 & 0xffff) - (ulong)*(ushort *)(param_1 + 0x172))
  {
    FUN_0361e944(param_1,uVar4);
  }
  pcVar3 = *(code **)(param_1 + 0x180);
  plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x188) >> 1) + 0xec0);
  if ((*(ulong *)(param_1 + 0x188) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  sVar2 = (*pcVar3)(plVar1,uVar4,*(undefined4 *)(param_1 + 0x178));
  FUN_03638610(param_1);
  *(ushort *)(param_1 + 0x1a2) = (ushort)*(byte *)(param_1 + 0x1a0) | sVar2 << 8;
  return &LAB_03628a80;
}

