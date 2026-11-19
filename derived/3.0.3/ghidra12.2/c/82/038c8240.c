
ulong FUN_038c8240(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0xd5) == '\x01') {
LAB_038c8260:
    if (*(long *)(param_1 + 0xe0) != param_1 + 0xd8) {
      lVar7 = (long)*(int *)(param_1 + 0xec);
      uVar5 = *(long *)(param_1 + 0xe0) - lVar7;
      if (param_2 < uVar5) {
LAB_038c83f4:
        uVar3 = *(ushort *)(param_2 + 0x12);
        *(undefined2 *)(param_2 + 0x10) = 0xffff;
        lVar8 = *(long *)(param_2 + 0x18);
        plVar1 = (long *)((long)*(int *)(param_1 + 0xec) + uVar5);
        plVar2 = (long *)((long)*(int *)(param_1 + 0xec) + param_2);
        lVar7 = *plVar1;
        *plVar1 = (long)plVar2;
        *plVar2 = lVar7;
        plVar2[1] = (long)plVar1;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar2;
        }
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
        if (uVar5 != param_2 + uVar3 + lVar8 + 0x20) {
          return param_2;
        }
        lVar7 = *(long *)(param_2 + 0x18);
        uVar6 = param_2;
      }
      else {
        do {
          uVar6 = uVar5;
          uVar5 = *(long *)(uVar6 + lVar7 + 8) - lVar7;
          if (uVar5 == (param_1 + 0xd8) - lVar7) goto LAB_038c832c;
        } while (uVar5 <= param_2);
joined_r0x038c82b0:
        if (uVar6 == 0) goto LAB_038c83f4;
        lVar8 = *(ushort *)(uVar6 + 0x12) + uVar6;
        lVar7 = *(long *)(uVar6 + 0x18) + 0x20;
        if (lVar8 + lVar7 != param_2) goto LAB_038c83f4;
        lVar7 = lVar7 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
        *(long *)(uVar6 + 0x18) = lVar7;
        if (uVar5 != lVar8 + lVar7 + 0x20U) {
          return uVar6;
        }
      }
      *(ulong *)(uVar6 + 0x18) =
           lVar7 + (ulong)*(ushort *)(uVar5 + 0x12) + *(long *)(uVar5 + 0x18) + 0x20;
      plVar1 = (long *)(uVar5 + (long)*(int *)(param_1 + 0xec));
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      iVar4 = *(int *)(param_1 + 0xe8) + -1;
      param_2 = uVar6;
      goto LAB_038c849c;
    }
  }
  else {
    if (*(char *)(param_1 + 0xd5) == '\x02') {
      if (*(int *)(param_1 + 0xe8) < 2) goto LAB_038c8260;
    }
    else if (*(int *)(param_1 + 0xe8) * 3 <= *(int *)(param_1 + 0x100) + 3) goto LAB_038c8260;
    lVar7 = *(long *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x88) != 1) {
      lVar7 = *(long *)(param_1 + 0x38) + -0x108;
    }
    for (lVar8 = param_2 + *(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
        uVar5 = lVar8 + 0x20, uVar5 < (ulong)(lVar7 + *(long *)(param_1 + 0x30));
        lVar8 = uVar5 + *(ushort *)(lVar8 + 0x32) + *(long *)(lVar8 + 0x38)) {
      if (*(short *)(lVar8 + 0x30) == -1) {
        lVar7 = *(long *)(uVar5 + (long)*(int *)(param_1 + 0xec));
        if (lVar7 == param_1 + 0xd8) goto LAB_038c83f4;
        uVar6 = lVar7 - *(int *)(param_1 + 0xec);
        goto joined_r0x038c82b0;
      }
    }
  }
LAB_038c832c:
  if (*(int *)(param_1 + 0xe8) != 0) {
    lVar7 = *(long *)(param_1 + 0xd8);
    if (*(int *)(param_1 + 0xe8) < 1) {
      lVar7 = 0;
    }
    uVar6 = lVar7 - *(int *)(param_1 + 0xec);
    uVar5 = 0;
    if (lVar7 != 0) {
      uVar5 = uVar6;
    }
    lVar7 = *(long *)(uVar5 + 0x18) + 0x20;
    if (lVar7 + *(ushort *)(uVar5 + 0x12) + uVar5 == param_2) {
      *(ulong *)(uVar5 + 0x18) =
           lVar7 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
      return uVar6;
    }
  }
  *(undefined2 *)(param_2 + 0x10) = 0xffff;
  lVar7 = *(long *)(param_1 + 0xd8);
  plVar1 = (long *)((long)*(int *)(param_1 + 0xec) + param_2);
  *(long **)(param_1 + 0xd8) = plVar1;
  *plVar1 = lVar7;
  plVar1[1] = param_1 + 0xd8;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar1;
  }
  iVar4 = *(int *)(param_1 + 0xe8) + 1;
LAB_038c849c:
  *(int *)(param_1 + 0xe8) = iVar4;
  return param_2;
}

