
undefined1 * FUN_03622b70(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x10c8);
  *(undefined1 *)(param_1 + 0x283) = 1;
  *(undefined1 *)(param_1 + 0x285) = 1;
  if ((ulong)*(ushort *)(param_1 + 0x174) <= uVar4 - *(ushort *)(param_1 + 0x172)) {
    FUN_0361ec10(param_1,uVar4);
  }
  pcVar3 = *(code **)(param_1 + 0x180);
  plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x188) >> 1) + 0xec0);
  if ((*(ulong *)(param_1 + 0x188) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  uVar2 = (*pcVar3)(plVar1,uVar4,*(undefined4 *)(param_1 + 0x178));
  FUN_0363885c(param_1);
  *(undefined1 *)(param_1 + 0x1a0) = uVar2;
  return &LAB_0362a4f0;
}

