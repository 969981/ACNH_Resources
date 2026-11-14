
void FUN_016de820(long param_1)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long local_30;
  char local_28;
  char local_27;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x388) != 0) {
    local_4 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_30,param_1 + 0x388,&local_4,0);
    if (((local_30 != 0) && (local_28 != '\0')) && (local_27 != '\0')) {
      FUN_006fb3d0();
    }
  }
  uVar2 = *(ushort *)(param_1 + 0x284);
  uVar5 = (ulong)uVar2;
  if (uVar5 < 1000) {
    if ((&DAT_04d9fe90)[uVar5 * 4] == *(int *)(param_1 + 0x230)) {
      (&DAT_04d9fe90)[uVar5 * 4] = 0;
      puVar3 = PTR_DAT_04bb6260;
      (&DAT_04d9fe98)[uVar5 * 2] = 0xffffffffffffffff;
      if (*(uint *)puVar3 == (uint)uVar2) {
        do {
          piVar1 = &DAT_04d9fe90 + uVar5 * 4;
          uVar4 = (uint)uVar5;
          if (999 < uVar4) {
            piVar1 = &DAT_04d9fe90;
          }
          if (*piVar1 != 0) {
            return;
          }
          uVar5 = (ulong)(uVar4 - 1);
          *(uint *)puVar3 = uVar4 - 1;
        } while (0 < (int)uVar4);
        *(undefined4 *)puVar3 = 0xffffffff;
      }
    }
  }
  return;
}

