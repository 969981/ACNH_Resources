
uint FUN_0035b510(long *param_1,long *param_2,ushort *param_3,long *param_4,long *param_5)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  puVar5 = (ushort *)*param_1;
  do {
    uVar2 = *puVar5;
    if (0x1f < uVar2) {
LAB_0035b5e4:
      *param_2 = (long)puVar5;
      *param_1 = *param_1 + 2;
      if (*param_5 != 0) {
        *param_5 = *param_5 + -1;
        return 4;
      }
      uVar7 = 0x7c2;
      uVar9 = 0;
      goto LAB_0035b63c;
    }
    lVar4 = (**(code **)(*param_4 + 8))(param_4,param_5,puVar5,param_3);
    puVar5 = (ushort *)*param_1;
    if (lVar4 == 0) goto LAB_0035b5e4;
    puVar5 = (ushort *)((long)puVar5 + lVar4);
    *param_1 = (long)puVar5;
  } while (puVar5 != param_3);
  *param_2 = (long)(param_3 + -1);
  iVar6 = 0;
  iVar8 = 0x7c2;
  do {
    while( true ) {
      iVar3 = iVar8 - iVar6;
      iVar1 = iVar3;
      if (iVar8 < iVar6) {
        iVar1 = iVar3 + 1;
      }
      iVar1 = iVar6 + (iVar1 >> 1);
      if (iVar3 + 1U < 3) {
        uVar7 = (uint)(byte)(&DAT_04130eb1)[(long)iVar1 * 4];
        goto LAB_0035b698;
      }
      if (*(short *)(&DAT_04130eae + (long)iVar1 * 4) != 0) break;
      iVar6 = iVar1;
      if (iVar8 <= iVar1) goto LAB_0035b694;
    }
    iVar8 = iVar1;
  } while (iVar6 < iVar1);
LAB_0035b694:
  uVar7 = 0xe;
LAB_0035b698:
  uVar9 = 0x1f;
  if (2 < uVar7 - 0x22) {
    uVar9 = uVar7;
  }
  uVar7 = 5;
  if (uVar9 != 0x21) {
    uVar7 = uVar9;
  }
  uVar9 = 0xc;
  if (uVar7 != 0x1e) {
    uVar9 = uVar7;
  }
  uVar7 = 0xc;
  if (uVar9 != 0x25) {
    uVar7 = uVar9;
  }
  uVar9 = 0xc;
  if (uVar7 != 0x26) {
    uVar9 = uVar7;
  }
  uVar7 = 0xe;
  if (uVar9 != 0x20) {
    uVar7 = uVar9;
  }
  return uVar7;
  while( true ) {
    if ((uint)uVar2 <
        (uint)*(ushort *)
               (&DAT_04130eae + (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2)
               )) {
      uVar7 = uVar10;
      uVar10 = uVar9;
    }
    uVar9 = uVar10;
    if ((int)uVar7 <= (int)uVar10) break;
LAB_0035b63c:
    iVar8 = uVar7 - uVar9;
    iVar6 = iVar8;
    if ((int)uVar7 < (int)uVar9) {
      iVar6 = iVar8 + 1;
    }
    uVar10 = uVar9 + (iVar6 >> 1);
    if (iVar8 + 1U < 3) {
      if ((uint)uVar2 <=
          (uint)(byte)(&DAT_04130eb0)[(long)(int)uVar10 * 4] +
          (uint)*(ushort *)
                 (&DAT_04130eae +
                 (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2))) {
        uVar7 = (uint)(byte)(&DAT_04130eb1)[(long)(int)uVar10 * 4];
        goto LAB_0035b698;
      }
      break;
    }
  }
  goto LAB_0035b694;
}

