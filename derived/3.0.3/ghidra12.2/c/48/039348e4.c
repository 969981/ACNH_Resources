
void FUN_039348e4(undefined4 param_1,undefined4 param_2,long param_3,long param_4,uint param_5,
                 long param_6,undefined8 param_7,uint param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [56];
  
  if (*(char *)(param_3 + 0x12d0) == '\0') {
    return;
  }
  if ((*(uint *)(param_3 + 8) >> (ulong)(param_5 & 0x1f) & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_6 + 0x20) + 0x58);
  if (uVar1 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar1 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_4 + 0x100) = *(ulong *)(param_4 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
        goto LAB_039349e0;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar3 = 0x112;
      uVar4 = 0x12;
    }
    else {
      uVar3 = 0x111;
      uVar4 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar4 = uVar3;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_4 + 0xb8),uVar4);
    *(undefined8 *)(param_4 + 0x100) = 0;
  }
LAB_039349e0:
  if (*(int *)(param_3 + 2000) == 1) {
    FUN_03939fc0(param_1,param_2,param_3 + 0x1458,param_4,param_5,param_6);
    return;
  }
  if (*(int *)(param_3 + 2000) == 0) {
    uVar1 = param_5;
    if (*(uint *)(param_3 + 0x5b8) <= param_5) {
      uVar1 = 0;
    }
    uVar2 = *(uint *)(param_3 + 0x18) & param_5;
    if (*(uint *)(param_3 + 0x5c8) <= uVar2) {
      uVar2 = 0;
    }
    FUN_03934720(param_1,param_2,auStack_98,param_5,
                 *(long *)(param_3 + 0x5c0) + (long)(int)uVar1 * 0x6a0,
                 *(undefined8 *)(*(long *)(param_3 + 0x5d0) + (long)(int)uVar2 * 8),param_6,param_7,
                 param_8 & 1,param_9 & 1);
    FUN_03934ac0(param_3,param_4,auStack_98);
  }
  return;
}

