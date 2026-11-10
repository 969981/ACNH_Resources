
undefined8 FUN_00147350(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 != 0xbab1e) {
    return 1;
  }
  if ((param_2 == (undefined8 *)0x0) || (*(int *)(param_2 + 0x2e2) != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x1b] != 0) {
    return 7;
  }
  if ((char)param_1[0x3c] != '\0') {
    return 8;
  }
  FUN_00143a84(param_2 + 0x25f,0);
  if ((undefined1 *)param_2[0xcf] != (undefined1 *)0x0) {
    *(undefined1 *)param_2[0xcf] = 0;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  if (((*(byte *)((long)param_2 + 0xf64) >> 2 & 1) == 0) || (*(int *)(param_2 + 0x1a) == 1)) {
    if ((param_2[0x19] != 0) && (*(int *)(param_2 + 0x1a) != 0)) goto LAB_00147440;
    param_2[0x19] = param_1 + 0x10;
    uVar2 = 2;
  }
  else {
    lVar1 = FUN_0014a0e4();
    if (lVar1 == 0) goto LAB_00147440;
    param_2[0x19] = lVar1;
    uVar2 = 1;
  }
  *(undefined4 *)(param_2 + 0x1a) = uVar2;
LAB_00147440:
  pbVar3 = (byte *)param_2[0x1d];
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 >> 5 & 1) == 0)) {
    pbVar3 = (byte *)(param_1 + 0x1f);
  }
  else {
    pbVar3 = pbVar3 + 0x20;
  }
  param_2[0x224] = pbVar3;
  *param_2 = 0;
  param_2[0x227] = 0xffffffffffffffff;
  if (param_1[1] == 0) {
    param_2[1] = 0;
    param_1[1] = (long)param_2;
  }
  else {
    puVar4 = (undefined8 *)param_1[2];
    *puVar4 = param_2;
    param_2[1] = puVar4;
  }
  param_1[2] = (long)param_2;
  param_2[0x1b] = param_1;
  FUN_00147570(param_2,0,6);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  *(undefined8 *)(*(long *)(param_2[0x224] + 0x50) + 0x7a8) = param_2[0xf5];
  *(undefined8 *)(*(long *)(param_2[0x224] + 0x50) + 0x7c8) = param_2[0xf9];
  uVar5 = *(ulong *)(*(long *)(param_2[0x224] + 0x50) + 0xf60);
  *(ulong *)(*(long *)(param_2[0x224] + 0x50) + 0xf60) =
       uVar5 & 0xfffffffc00000000 | uVar5 & 0x1ffffffff | param_2[0x1ec] & 0x200000000;
  uVar5 = *(ulong *)(*(long *)(param_2[0x224] + 0x50) + 0xf60);
  *(ulong *)(*(long *)(param_2[0x224] + 0x50) + 0xf60) =
       uVar5 & 0xfffffffff8000000 | uVar5 & 0x3ffffff | ((ulong)param_2[0x1ec] >> 0x1a & 1) << 0x1a;
  FUN_00147738(param_1);
  return 0;
}

