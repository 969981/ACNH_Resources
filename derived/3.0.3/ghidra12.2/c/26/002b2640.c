
long * FUN_002b2640(long *param_1,uint param_2,ushort param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  char local_a0 [16];
  char acStack_90 [8];
  char acStack_88 [104];
  
  uVar7 = (uint)param_3;
  if (param_3 == 0) {
    sprintf(local_a0,"%08x",(ulong)param_4[3]);
    sprintf(local_a0 + 8,"%08x",(ulong)param_4[2]);
    sprintf(acStack_90,"%08x",(ulong)param_4[1]);
    uVar7 = sprintf(acStack_88,"%08x",(ulong)*param_4);
    plVar8 = (long *)(ulong)uVar7;
  }
  else {
    if (uVar7 == 0xffff) {
      uVar3 = *(ushort *)((long)param_1 + 0x32);
    }
    else {
      if ((int)(uVar7 - *(ushort *)(param_1 + 6)) < 0) {
        *(undefined1 *)(param_1 + 199) = 1;
        return param_1;
      }
      uVar3 = *(ushort *)((long)param_1 + 0x32);
      if ((uint)uVar3 < uVar7 - *(ushort *)(param_1 + 6)) {
        local_a0[8] = '\0';
        local_a0[9] = '\0';
        local_a0[10] = '\0';
        local_a0[0xb] = '\0';
        local_a0[0] = '\0';
        local_a0[1] = '\0';
        local_a0[2] = '\0';
        local_a0[3] = '\0';
        local_a0[4] = '\x04';
        local_a0[5] = '\0';
        local_a0[6] = '\0';
        local_a0[7] = '\0';
        plVar8 = (long *)(**(code **)(*param_1 + 0x30))(param_1,local_a0);
        return plVar8;
      }
    }
    if (uVar3 != 0) {
      lVar13 = param_1[4];
      uVar12 = (ulong)(param_2 >> 5 & 7);
      uVar6 = 1 << (ulong)(param_2 & 0x1f);
      uVar11 = 0;
      uVar1 = *(ushort *)(param_1 + 6) + 0x80;
      uVar4 = *(ushort *)(param_1 + 6);
      do {
        uVar14 = 0;
        if (*(uint *)(param_1 + 5) <= uVar11 + *(int *)((long)param_1 + 0x2c)) {
          uVar14 = *(uint *)(param_1 + 5);
        }
        uVar9 = (ulong)(uVar11 + (*(int *)((long)param_1 + 0x2c) - uVar14));
        lVar10 = lVar13 + uVar9 * 0x5d0;
        uVar5 = *(ushort *)(lVar10 + 0x24);
        uVar14 = (uint)uVar5;
        if ((uint)uVar5 < (uint)uVar4 || (uVar1 < uVar5 || uVar1 == uVar14)) break;
        if ((*(char *)(lVar10 + 0x28) == '\0') ||
           ((*(uint *)(lVar10 + uVar12 * 4 + 0x2c) & uVar6) != 0)) {
          if (uVar14 < uVar7) {
LAB_002b2750:
            lVar10 = lVar13 + uVar12 * 4 + uVar9 * 0x5d0;
            *(uint *)(lVar10 + 0x2c) = *(uint *)(lVar10 + 0x2c) & ~uVar6;
          }
          else if ((uVar7 < uVar14) && (uVar14 = uVar14 + ~uVar7, (int)uVar14 < 0x80)) {
            uVar2 = uVar14 + 0x1f;
            if (-1 < (int)uVar14) {
              uVar2 = uVar14;
            }
            if ((param_4[(int)uVar2 >> 5] >> (ulong)(uVar14 & 0x1f) & 1) != 0) goto LAB_002b2750;
          }
        }
        uVar11 = uVar11 + 1;
        uVar4 = uVar5;
      } while (uVar3 != uVar11);
    }
    plVar8 = (long *)FUN_002aec18(param_1);
    if (((ulong)plVar8 & 1) == 0) {
      plVar8 = (long *)FUN_002ae9c0(param_1);
      return plVar8;
    }
  }
  return plVar8;
}

