
ulong FUN_00171874(long param_1,long param_2,ulong param_3,ulong *param_4,long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint local_54;
  
  lVar8 = *(long *)(param_2 + 8);
  if (*(code **)(param_1 + 0x850) == (code *)0x0) {
LAB_00171934:
    local_54 = 0;
    uVar6 = (**(code **)(param_5 + 8))
                      (param_1,(int)param_4[1],*(undefined8 *)(lVar8 + 0x18),param_3,&local_54,
                       param_5,*(undefined8 *)(param_1 + 0x8b8));
    if (uVar6 + 0x20e < 0x13 && (1L << (uVar6 + 0x20e & 0x3f) & 0x40021U) != 0) {
      return uVar6 & 0xffffffff;
    }
    if ((long)uVar6 < 0) {
      return 0xfffffc7a;
    }
    if (param_3 < uVar6) {
      return 0xfffffc7a;
    }
    lVar7 = *(long *)(lVar8 + 0x18);
    *(long *)(lVar8 + 0x18) = lVar7 + -9;
    *(ulong *)(lVar8 + 0x20) = lVar7 + uVar6;
    *(undefined1 *)((long)param_4 + 0xd) = 0;
    if ((((local_54 & 1) != 0) && (*(undefined1 *)(param_5 + 0x11) = 1, (local_54 >> 1 & 1) == 0))
       && ((*(byte *)(param_5 + 0x10) & 1) != 0)) {
      *(byte *)((long)param_4 + 0xd) = *(byte *)((long)param_4 + 0xd) | 1;
    }
    if ((local_54 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x860) == 0) goto LAB_00171a74;
      *(undefined1 *)(param_5 + 0x12) = 1;
    }
    *param_4 = uVar6;
    param_4[2] = 0;
    if (uVar6 + 0x100 <= param_3) {
      param_3 = uVar6 + 0x100;
    }
    uVar5 = FUN_00171a9c(param_1,param_4,param_3);
    if (-0x385 < (int)uVar5) {
      param_4[2] = uVar5 - uVar6;
      FUN_001674fc(*(undefined8 *)(lVar8 + 0x18),param_4);
      uVar5 = FUN_00168418(param_2,param_4,param_4[2],*(undefined1 *)(param_5 + 0x12));
      if ((int)uVar5 == 0) {
        *(undefined8 *)(param_6 + 0xb0) = **(undefined8 **)(param_6 + 0xa8);
        FUN_001728b4(param_6);
        if ((*param_4 == 0) && (((local_54 ^ 0xffffffff) & 3) == 0)) {
          uVar5 = 0xfffffde9;
        }
        else {
          uVar5 = 0;
        }
      }
    }
  }
  else {
    uVar5 = (**(code **)(param_1 + 0x850))
                      (param_1,*(undefined1 *)((long)param_4 + 0xc),*(undefined4 *)(param_6 + 0xb8),
                       *(undefined4 *)(param_1 + 0x94c),*(undefined4 *)(param_6 + 0xbc),
                       *(undefined4 *)(param_1 + 0x974),*(undefined8 *)(param_1 + 0x8b8));
    iVar4 = *(int *)(param_1 + 0x94c);
    iVar3 = *(int *)(param_1 + 0x974);
    uVar6 = (long)*(int *)(param_6 + 0xbc);
    if ((long)uVar5 <= (long)*(int *)(param_6 + 0xbc)) {
      uVar6 = uVar5;
    }
    iVar1 = iVar4;
    if (iVar3 <= iVar4) {
      iVar1 = iVar3;
    }
    uVar5 = uVar6;
    if ((long)iVar3 <= (long)uVar6) {
      uVar5 = (long)iVar3;
    }
    uVar2 = (long)iVar1;
    if ((long)uVar6 < (long)iVar4) {
      uVar2 = uVar5;
    }
    if (0 < (long)uVar2) {
      if ((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 0x20)) < uVar2) {
        iVar4 = FUN_0016b3e4(param_1 + 0x158,uVar2 + 10);
        if (iVar4 != 0) goto LAB_00171934;
        lVar8 = *(long *)(param_2 + 8);
      }
      param_3 = uVar2;
      goto LAB_00171934;
    }
LAB_00171a74:
    uVar5 = 0xfffffc7a;
  }
  return uVar5;
}

