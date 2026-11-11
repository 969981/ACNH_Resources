
void FUN_003c01b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if (4 < *(int *)(param_4 + 4)) {
    *param_1 = param_2;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    iVar1 = *(int *)(param_4 + 4);
    plVar4 = (long *)*param_1;
    uVar2 = iVar1 - 4;
    *plVar4 = (long)(param_2 + 2);
    *(uint *)(plVar4 + 1) = uVar2;
    if (4 < iVar1) {
      lVar5 = 0;
      do {
        *(undefined4 *)(*plVar4 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)plVar4[1]);
    }
    param_2 = (undefined8 *)
              ((long)(param_2 + 2) +
              (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
  }
  if (*param_4 != '\0') {
    param_1[1] = param_2;
    *(undefined1 *)(param_2 + 0x18) = 0;
    param_2[0x19] = 0;
    lVar5 = FUN_003c0730(*(undefined4 *)(param_4 + 4));
    FUN_003c0740(param_1[1],param_2 + 0x1b,lVar5,*(undefined4 *)(param_4 + 4));
    param_2 = (undefined8 *)((long)(param_2 + 0x1b) + lVar5);
  }
  if (param_4[1] == '\0') {
    return;
  }
  param_1[2] = param_2;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined4 *)((long)param_2 + 0x14) = 0x3f800000;
  uVar3 = FUN_003c083c(*(undefined4 *)(param_4 + 4));
  FUN_003c0850(param_1[2],param_2 + 3,uVar3,*(undefined4 *)(param_4 + 4));
  return;
}

