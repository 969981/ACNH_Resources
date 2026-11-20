
bool FUN_03d4ce90(long *param_1,long *param_2)

{
  long lVar1;
  ushort *puVar2;
  void *__dest;
  uint uVar3;
  ushort uVar4;
  ushort *__src;
  undefined2 *puVar5;
  void *__src_00;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  
  lVar6 = *param_2;
  if (lVar6 == 0) goto LAB_03d4d040;
  uVar7 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)(param_1 + 2);
  if ((int)uVar7 < (int)uVar3) {
    *(undefined2 *)param_1[1] = 0;
    __src_00 = (void *)*param_2;
    uVar7 = *(uint *)(param_2 + 1);
    uVar8 = (ulong)uVar7;
    __dest = (void *)param_1[1];
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar10 = 0;
    do {
      if (*(short *)(param_1[1] + lVar10 * 2) == 0) {
LAB_03d4cff8:
        iVar9 = (int)lVar10;
        goto joined_r0x03d4d064;
      }
      lVar1 = param_1[1] + lVar10 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar10 = lVar10 + 1;
        goto LAB_03d4cff8;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        iVar9 = (int)lVar10 + 2;
        goto joined_r0x03d4d064;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    iVar9 = 0;
joined_r0x03d4d064:
    if ((int)uVar7 < 0) {
      uVar8 = 0;
      do {
        if (*(short *)((long)__src_00 + uVar8 * 2) == 0) goto LAB_03d4cffc;
        if (*(short *)((long)__src_00 + uVar8 * 2 + 2) == 0) {
          uVar8 = uVar8 + 1;
          goto LAB_03d4cffc;
        }
        if (*(short *)((long)__src_00 + uVar8 * 2 + 4) == 0) {
          uVar8 = uVar8 + 2;
          goto LAB_03d4cffc;
        }
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      uVar8 = 0;
    }
LAB_03d4cffc:
    uVar7 = (uint)uVar8;
    if ((int)param_1[2] <= (int)(uint)uVar8) {
      uVar7 = (int)param_1[2] - 1;
    }
    if ((int)uVar7 < 1) {
      uVar7 = 0;
    }
    else {
      memcpy(__dest,__src_00,(ulong)uVar7 << 1);
      if (iVar9 < (int)uVar7) {
        puVar5 = (undefined2 *)((long)__dest + (ulong)uVar7 * 2);
        goto LAB_03d4d030;
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar10 = param_1[1];
    uVar8 = 0;
    if (uVar7 != 0) {
      puVar2 = (ushort *)*param_2 + uVar7;
      __src = (ushort *)*param_2;
      do {
        while( true ) {
          uVar7 = (int)uVar8 + 1;
          if (uVar3 <= uVar7) goto LAB_03d4cfec;
          uVar4 = *__src;
          if ((uVar4 & 0xfffe) != 0xe) break;
          if (uVar4 == 0xf) {
            puVar11 = __src + 3;
          }
          else {
            if (uVar4 != 0xe) goto LAB_03d4cfec;
            puVar11 = (ushort *)((long)__src + (ulong)__src[3] + 8);
          }
          if (puVar2 < puVar11) goto LAB_03d4cfec;
          uVar7 = (int)uVar8 + (int)((ulong)((long)puVar11 - (long)__src) >> 1);
          if (uVar3 <= uVar7) goto LAB_03d4cfec;
          memcpy((void *)(lVar10 + uVar8 * 2),__src,(long)puVar11 - (long)__src & 0xffffffff);
          __src = puVar11;
          uVar8 = (ulong)uVar7;
          if (puVar2 <= puVar11) goto LAB_03d4cfec;
        }
        *(ushort *)(lVar10 + uVar8 * 2) = uVar4;
        __src = __src + 1;
        uVar8 = (ulong)uVar7;
      } while (__src < puVar2);
    }
LAB_03d4cfec:
    uVar7 = (uint)uVar8;
    puVar5 = (undefined2 *)(lVar10 + uVar8 * 2);
LAB_03d4d030:
    *puVar5 = 0;
  }
  *(uint *)(param_1 + 3) = uVar7;
LAB_03d4d040:
  return lVar6 != 0;
}

