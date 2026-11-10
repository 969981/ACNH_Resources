
bool FUN_0033db00(float param_1,long param_2,uint param_3,long param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar3 = *(uint *)(param_4 + 0x24);
  if (param_1 != 0.0) {
    uVar8 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
    *(ulong *)(*(long *)(param_2 + 0x230) + uVar8) =
         *(ulong *)(*(long *)(param_2 + 0x230) + uVar8) | 1L << ((ulong)uVar3 & 0x3f);
  }
  if (*(char *)(param_4 + 0x1a) != '\x01') {
    param_1 = 0.0;
  }
  FUN_00321830(param_1,param_4,param_5,0,*(undefined8 *)(param_2 + 0x15d0),param_2 + 0x16d0);
  cVar4 = *(char *)(param_4 + 0x1c);
  bVar2 = 0 < *(int *)(param_4 + 0x18c);
  bVar1 = bVar2 && cVar4 != '\0';
  if (bVar2 && cVar4 != '\0') {
    lVar6 = ((long)(int)param_3 + (long)(int)param_3 * 8) * 8;
    lVar5 = ((long)(int)param_3 + (long)(int)param_3 * 2) * 0x100;
    *(int *)(*(long *)(param_2 + 0x16c8) + lVar6) =
         *(int *)(*(long *)(param_2 + 0x16c8) + lVar6) + 1;
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + *(int *)(param_4 + 0x18c);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + *(int *)(param_4 + 400);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + *(int *)(param_4 + 0x198);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + *(int *)(param_4 + 0x19c);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + *(int *)(param_4 + 0x1a0);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + *(int *)(param_4 + 0x194);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + *(int *)(param_4 + 0x1a4);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + *(int *)(param_4 + 0x1a8);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + *(int *)(param_4 + 0x1ac);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + *(int *)(param_4 + 0x1b0);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + *(int *)(param_4 + 0x1b4);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(long *)(lVar7 + 0x38) = *(long *)(lVar7 + 0x38) + *(long *)(param_4 + 0x1c0);
    lVar7 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + *(int *)(param_4 + 0x1b8);
    lVar6 = *(long *)(param_2 + 0x16c8) + lVar6;
    *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + *(long *)(param_4 + 0x1c8);
    lVar6 = (long)(int)uVar3 * 4;
    lVar7 = *(long *)(param_2 + 0x1b8) + lVar5;
    *(uint *)(lVar7 + lVar6) = *(uint *)(lVar7 + lVar6) | *(uint *)(param_4 + 0x240);
    lVar7 = *(long *)(param_2 + 0x1b8) + lVar5 + lVar6;
    *(uint *)(lVar7 + 0x100) = *(uint *)(lVar7 + 0x100) | *(uint *)(param_4 + 0x44);
    lVar6 = *(long *)(param_2 + 0x1b8) + lVar5 + lVar6;
    *(uint *)(lVar6 + 0x200) = *(uint *)(lVar6 + 0x200) | *(uint *)(param_4 + 0x48);
    return bVar1;
  }
  if (cVar4 == '\0') {
    FUN_0032c410("An invalid EmitterSet has been detected. Invalidates its handle.");
    *(undefined4 *)(param_4 + 0x34) = 0xffffffff;
    return bVar1;
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x1918));
  uVar8 = *(ulong *)(param_2 + 0xc40);
  if (0 < (int)uVar8) {
    uVar9 = uVar8 & 0xffffffff;
    lVar7 = 0xffffffff;
    plVar10 = *(long **)(param_2 + 0xc38);
    do {
      if (*plVar10 == param_4) {
        if (lVar7 != 0) goto LAB_0033de0c;
        break;
      }
      lVar7 = lVar7 + -1;
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 != 0);
  }
  *(ulong *)(param_2 + 0xc40) = uVar8 + 1;
  (*(long **)(param_2 + 0xc38))[uVar8] = param_4;
LAB_0033de0c:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1918));
  return bVar1;
}

