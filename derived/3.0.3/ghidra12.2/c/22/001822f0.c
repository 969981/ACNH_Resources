
undefined4 FUN_001822f0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  while ((*(int *)((long)param_1 + 0xb4) != 0 ||
         (FUN_00180670(param_1), *(int *)((long)param_1 + 0xb4) != 0))) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar1 = *(uint *)((long)param_1 + 0x170c);
    bVar3 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
    *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
    *(undefined1 *)(param_1[0x2e0] + (ulong)uVar1) = 0;
    uVar1 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
    *(undefined1 *)(param_1[0x2e0] + (ulong)uVar1) = 0;
    uVar1 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
    *(byte *)(param_1[0x2e0] + (ulong)uVar1) = bVar3;
    iVar2 = *(int *)((long)param_1 + 0x170c);
    lVar6 = param_1[0x2e2];
    *(short *)((long)param_1 + (ulong)bVar3 * 4 + 0xd4) =
         *(short *)((long)param_1 + (ulong)bVar3 * 4 + 0xd4) + 1;
    *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
    uVar1 = *(int *)((long)param_1 + 0xac) + 1;
    *(uint *)((long)param_1 + 0xac) = uVar1;
    if (iVar2 == (int)lVar6) {
      uVar5 = param_1[0x13];
      if ((long)uVar5 < 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = param_1[0xc] + (uVar5 & 0xffffffff);
      }
      FUN_00183f90(param_1,lVar6,uVar1 - uVar5,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      lVar7 = *param_1;
      lVar6 = *(long *)(lVar7 + 0x38);
      FUN_00183d90(lVar6);
      uVar1 = *(uint *)(lVar7 + 0x20);
      if (*(uint *)(lVar6 + 0x28) <= *(uint *)(lVar7 + 0x20)) {
        uVar1 = *(uint *)(lVar6 + 0x28);
      }
      uVar5 = (ulong)uVar1;
      if (uVar1 != 0) {
        memcpy(*(void **)(lVar7 + 0x18),*(void **)(lVar6 + 0x20),uVar5);
        *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + uVar5;
        *(ulong *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x20) + uVar5;
        *(ulong *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + uVar5;
        *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) - uVar1;
        lVar7 = *(long *)(lVar6 + 0x28) - uVar5;
        *(long *)(lVar6 + 0x28) = lVar7;
        if (lVar7 == 0) {
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  *(undefined4 *)((long)param_1 + 0x172c) = 0;
  if (param_2 == 4) {
    uVar5 = param_1[0x13];
    if ((long)uVar5 < 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1[0xc] + (uVar5 & 0xffffffff);
    }
    FUN_00183f90(param_1,lVar6,*(uint *)((long)param_1 + 0xac) - uVar5,1);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    lVar7 = *param_1;
    lVar6 = *(long *)(lVar7 + 0x38);
    FUN_00183d90(lVar6);
    uVar1 = *(uint *)(lVar7 + 0x20);
    if (*(uint *)(lVar6 + 0x28) <= *(uint *)(lVar7 + 0x20)) {
      uVar1 = *(uint *)(lVar6 + 0x28);
    }
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      memcpy(*(void **)(lVar7 + 0x18),*(void **)(lVar6 + 0x20),uVar5);
      *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + uVar5;
      *(ulong *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x20) + uVar5;
      *(ulong *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + uVar5;
      *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) - uVar1;
      lVar7 = *(long *)(lVar6 + 0x28) - uVar5;
      *(long *)(lVar6 + 0x28) = lVar7;
      if (lVar7 == 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
      }
    }
    uVar4 = 2;
    if (*(int *)(*param_1 + 0x20) != 0) {
      uVar4 = 3;
    }
    return uVar4;
  }
  if (*(int *)((long)param_1 + 0x170c) != 0) {
    uVar5 = param_1[0x13];
    if ((long)uVar5 < 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1[0xc] + (uVar5 & 0xffffffff);
    }
    FUN_00183f90(param_1,lVar6,*(uint *)((long)param_1 + 0xac) - uVar5,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    lVar7 = *param_1;
    lVar6 = *(long *)(lVar7 + 0x38);
    FUN_00183d90(lVar6);
    uVar1 = *(uint *)(lVar7 + 0x20);
    if (*(uint *)(lVar6 + 0x28) <= *(uint *)(lVar7 + 0x20)) {
      uVar1 = *(uint *)(lVar6 + 0x28);
    }
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      memcpy(*(void **)(lVar7 + 0x18),*(void **)(lVar6 + 0x20),uVar5);
      *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + uVar5;
      *(ulong *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x20) + uVar5;
      *(ulong *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + uVar5;
      *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) - uVar1;
      lVar7 = *(long *)(lVar6 + 0x28) - uVar5;
      *(long *)(lVar6 + 0x28) = lVar7;
      if (lVar7 == 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
      }
    }
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  }
  return 1;
}

