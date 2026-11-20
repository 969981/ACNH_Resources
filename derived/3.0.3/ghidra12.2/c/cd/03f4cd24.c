
long FUN_03f4cd24(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long local_18;
  
  *(undefined4 *)(param_1 + 5) = 1;
  lVar3 = *param_1;
  uVar4 = (ulong)*(ushort *)(param_1 + 2);
  local_18 = 0;
  uVar6 = *(ulong *)(lVar3 + (ulong)*(byte *)((long)param_1 + 0x12) * 0x80 +
                     ((ulong)(*(ushort *)(param_1 + 2) >> 9) & 0x78) + 0x3761b8);
  if (99 < uVar6) {
    uVar6 = uVar6 + (uVar4 & 0xfff);
    goto LAB_03f4cdec;
  }
  if (*(char *)(lVar3 + 0x34710) == '\0') {
LAB_03f4cdc0:
    uVar6 = 0;
  }
  else {
    if (uVar6 == 10) {
      lVar5 = *(long *)(lVar3 + 0x346b0);
      uVar4 = uVar4 & 0x1fff;
    }
    else {
      if (uVar6 == 8) {
        uVar6 = *(long *)(lVar3 + 0x36e190) +
                ((ulong)*(uint *)(lVar3 + 0x36e198) &
                (uVar4 | ((ulong)*(byte *)((long)param_1 + 0x12) & 3) << 0x10));
        goto LAB_03f4cdec;
      }
      if (uVar6 != 7) goto LAB_03f4cdc0;
      lVar5 = *(long *)(lVar3 + 0x36e1a0);
      uVar4 = uVar4 & 0x7ff;
    }
    uVar6 = lVar5 + uVar4;
  }
LAB_03f4cdec:
  uVar4 = *(ulong *)(lVar3 + 0x34e160);
  if (uVar6 < uVar4) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (uVar6 < uVar4 + *(uint *)(lVar3 + 0x34e168)) {
      uVar1 = (int)uVar6 - (int)uVar4;
    }
    uVar6 = (ulong)uVar1;
  }
  iVar2 = (int)uVar6;
  if ((CONCAT13(*(undefined1 *)(uVar4 + (iVar2 + 3)),
                CONCAT12(*(undefined1 *)(uVar4 + (iVar2 + 2)),
                         CONCAT11(*(undefined1 *)(uVar4 + (iVar2 + 1)),
                                  *(undefined1 *)(uVar4 + uVar6)))) == 0x31444453) &&
     (*(long *)(&LAB_003cace0 + lVar3) != 0)) {
    local_18 = *(long *)(&LAB_003cace0 + lVar3) + (long)*(int *)(uVar4 + (iVar2 + 4));
  }
  (**(code **)(**(long **)(param_1[1] + 0x78) + 0x48))
            (*(long **)(param_1[1] + 0x78),uVar6,&local_18);
  return local_18;
}

