
void FUN_016a1590(long param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint local_18;
  undefined4 uStack_14;
  
  local_18 = *(uint *)(param_2 + 8);
  uStack_14 = *(undefined4 *)(param_2 + 0xc);
  lVar10 = (**(code **)(*(long *)(*(long *)(param_1 + 0xb20) + 8) + 0x20))();
  uVar9 = FUN_0277d6c4(&local_18);
  if (((uVar9 >> 3 & 0x1fff) < 0x753) &&
     ((*(uint *)(lVar10 + (ulong)((uVar9 & 0xffff) >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)) {
    return;
  }
  local_18 = FUN_01ae3210(param_2);
  uVar9 = FUN_01ae3bc0(param_2);
  *(int *)(*(long *)(param_1 + 0xb20) + 0x1608) = *(int *)(*(long *)(param_1 + 0xb20) + 0x1608) + 1;
  if (local_18 == 0xe) {
    return;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0xb20) + 0xf68);
  piVar3 = piVar1 + local_18;
  if (0xe < local_18) {
    piVar3 = piVar1;
  }
  *piVar3 = *piVar3 + 1;
  psVar2 = (short *)(*(long *)(param_1 + 0xb20) + 5000);
  psVar4 = psVar2 + (ulong)local_18 * 4;
  if (0xe < local_18) {
    psVar4 = psVar2;
  }
  if (*psVar4 != -2) {
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar5;
    if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) goto LAB_016a16c8;
  }
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  psVar4 = psVar2 + (ulong)local_18 * 4;
  if (0xe < local_18) {
    psVar4 = psVar2;
  }
  *(undefined4 *)psVar4 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(psVar4 + 2) = uVar7;
LAB_016a16c8:
  if (local_18 != uVar9) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb20) + 0xf68);
    piVar3 = piVar1 + uVar9;
    if (0xe < uVar9) {
      piVar3 = piVar1;
    }
    *piVar3 = *piVar3 + 1;
    uVar8 = DAT_05582b78;
    uVar5 = DAT_05582b74;
    psVar2 = (short *)(*(long *)(param_1 + 0xb20) + 5000);
    psVar4 = psVar2 + (ulong)uVar9 * 4;
    if (0xe < uVar9) {
      psVar4 = psVar2;
    }
    uVar6 = DAT_05582b7c;
    if (*psVar4 != -2) {
      uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      if (0x1d < (uint)((ulong)uVar6 * 100 >> 0x20)) {
        DAT_05582b70 = uVar5;
        DAT_05582b74 = uVar8;
        DAT_05582b7c = uVar6;
        return;
      }
    }
    DAT_05582b7c = uVar6;
    uVar7 = *(undefined4 *)(param_2 + 0xc);
    psVar4 = psVar2 + (ulong)uVar9 * 4;
    if (0xe < uVar9) {
      psVar4 = psVar2;
    }
    *(undefined4 *)psVar4 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(psVar4 + 2) = uVar7;
  }
  return;
}

