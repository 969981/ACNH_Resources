
ulong FUN_004705d0(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar5 < (int)param_1[1] * 2) {
    FUN_0044b920(param_1,param_2,uVar5 * 2 + 2);
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  lVar4 = *param_3;
  uVar1 = (int)lVar4 * -0x61c8864f;
  uVar2 = (int)((ulong)lVar4 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar3 = (ulong)((uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar5);
  plVar6 = (long *)(*param_1 + uVar3 * 0x10);
  if (*plVar6 == -1) {
LAB_00470698:
    *plVar6 = lVar4;
    *(undefined8 *)(*param_1 + uVar3 * 0x10 + 8) = *param_4;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return uVar3;
  }
  if (*plVar6 != lVar4) {
    do {
      uVar3 = (ulong)((int)uVar3 + 1U & uVar5);
      plVar6 = (long *)(*param_1 + uVar3 * 0x10);
      if (*plVar6 == -1) goto LAB_00470698;
    } while (*plVar6 != lVar4);
  }
  return uVar3;
}

