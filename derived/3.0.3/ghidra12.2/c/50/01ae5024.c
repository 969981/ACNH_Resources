
bool FUN_01ae5024(uint param_1)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  uVar5 = *(uint *)(DAT_0532a7a0 + 0x1c0);
  if ((int)uVar5 < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) == 0) ||
         (puVar6 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar6 == (uint *)0x0)) ||
        ((param_1 < *(uint *)(DAT_0532a7a0 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)param_1) == '\0')))) ||
       (((*puVar6 <= param_1 || (uVar5 = puVar6[1], uVar5 == 0)) || ((ushort)puVar6[2] == 0))))
    goto LAB_01ae51e8;
    iVar8 = (uint)(ushort)puVar6[2] * 8;
    iVar4 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    if ((ulong)(iVar8 + uVar5 * param_1 + iVar4) + (long)puVar6 == 0) goto LAB_01ae51e8;
    if (((*(uint *)(DAT_0532a7a0 + 200) <= param_1) ||
        (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)param_1) != '\0')) &&
       (param_1 < *puVar6)) {
      puVar6 = (uint *)((ulong)(iVar8 + uVar5 * param_1 + iVar4) + (long)puVar6);
      if (puVar6 != (uint *)0x0) goto LAB_01ae508c;
      uVar5 = 0;
      goto LAB_01ae51c0;
    }
    goto LAB_01ae51bc;
  }
  if (uVar5 <= param_1) goto LAB_01ae51e8;
  uVar1 = param_1;
  if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= param_1) {
    uVar1 = 0;
  }
  if (*(long *)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar1 * 8) == 0) goto LAB_01ae51e8;
  if (param_1 < uVar5) {
    uVar5 = param_1;
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= param_1) {
      uVar5 = 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar5 * 8);
    uVar5 = 0;
    if (puVar6 != (uint *)0x0) {
LAB_01ae508c:
      uVar5 = *puVar6;
      if (uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5) {
        puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
        if (((*puVar7 != 0) && (uVar5 = puVar7[1], uVar5 != 0)) && ((ulong)(ushort)puVar7[2] != 0))
        {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar6 - lVar2) / (ulong)uVar5);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326b00) &&
               (uVar3 = *(ushort *)(DAT_05326b08 + (long)(int)uVar1 * 2), uVar5 = (uint)uVar3,
               uVar3 < 0x75)) goto LAB_01ae51c0;
          }
        }
      }
      goto LAB_01ae51bc;
    }
  }
  else {
LAB_01ae51bc:
    uVar5 = 0;
  }
LAB_01ae51c0:
  if ((uVar5 - 0x26 < 0x3f) && ((0x6010000000100001U >> ((ulong)(uVar5 - 0x26) & 0x3f) & 1) != 0)) {
    return true;
  }
LAB_01ae51e8:
  iVar4 = FUN_01ae5210(param_1);
  return iVar4 != 0;
}

