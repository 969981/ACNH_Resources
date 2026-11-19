
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03a0def0(long param_1,uint param_2,int param_3,long *param_4)

{
  size_t __size;
  undefined *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  void *pvVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  int iVar22;
  ulong uVar23;
  
  if ((int)param_2 < 1) {
LAB_03a0e074:
    param_2 = *(uint *)(param_1 + 0x90);
    puVar21 = *(ulong **)(param_1 + 0x98);
    uVar20 = _DAT_04102200;
    uVar17 = _UNK_04102208;
    uVar4 = DAT_04102210;
    uVar5 = DAT_04102218;
    uVar6 = _DAT_041023d0;
    uVar7 = _UNK_041023d8;
    uVar8 = _DAT_04102880;
    uVar9 = _UNK_04102888;
  }
  else {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    uVar20 = (ulong)param_2;
    __size = (ulong)param_2 * 200 + 8;
    if (lVar19 == 0) {
      puVar13 = malloc(__size);
    }
    else {
      plVar12 = param_4;
      if (param_4 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar19 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_03a0e074;
      }
      puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
    }
    if (puVar13 == (ulong *)0x0) goto LAB_03a0e074;
    uVar17 = uVar20 * 200 - 200;
    puVar21 = puVar13 + 1;
    *puVar13 = uVar20;
    puVar1 = PTR_DAT_04bd11b8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17 >> 3;
    puVar15 = puVar21;
    if ((SUB164(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) >> 2 & 1) == 0) {
      puVar13[0xd] = 0;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      *(undefined4 *)(puVar13 + 0x12) = 0x10001;
      *(undefined1 *)((long)puVar13 + 0x94) = 0;
      puVar13[0x19] = 0;
      puVar13[0xb] = (ulong)(puVar1 + 0x10);
      puVar13[0xc] = 0;
      puVar15 = puVar13 + 0x1a;
    }
    if (199 < uVar17) {
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      do {
        puVar15[10] = (ulong)puVar1;
        puVar15[0xb] = 0;
        puVar15[0x10] = 0;
        *(undefined4 *)(puVar15 + 0x11) = 0x10001;
        *(undefined1 *)((long)puVar15 + 0x8c) = 0;
        puVar15[0x18] = 0;
        puVar15[0x29] = 0;
        *(undefined4 *)(puVar15 + 0x2a) = 0x10001;
        *(undefined1 *)((long)puVar15 + 0x154) = 0;
        puVar15[0x31] = 0;
        puVar15[0xc] = 0;
        puVar15[0xd] = 0;
        puVar15[0xe] = 0;
        puVar15[0xf] = 0;
        puVar15[0x23] = (ulong)puVar1;
        puVar15[0x24] = 0;
        puVar15[0x25] = 0;
        puVar15[0x26] = 0;
        puVar15[0x27] = 0;
        puVar15[0x28] = 0;
        puVar15 = puVar15 + 0x32;
      } while (puVar15 != puVar21 + uVar20 * 0x19);
    }
    *(uint *)(param_1 + 0x90) = param_2;
    *(ulong **)(param_1 + 0x98) = puVar21;
    uVar20 = _DAT_04102200;
    uVar17 = _UNK_04102208;
    uVar4 = DAT_04102210;
    uVar5 = DAT_04102218;
    uVar6 = _DAT_041023d0;
    uVar7 = _UNK_041023d8;
    uVar8 = _DAT_04102880;
    uVar9 = _UNK_04102888;
  }
  _DAT_04102200 = uVar20;
  _UNK_04102208 = uVar17;
  DAT_04102210 = uVar4;
  DAT_04102218 = uVar5;
  _DAT_041023d0 = uVar6;
  _UNK_041023d8 = uVar7;
  _DAT_04102880 = uVar8;
  _UNK_04102888 = uVar9;
  if (param_2 != 0) {
    uVar16 = 0;
    uVar23 = 0;
    do {
      iVar22 = (int)uVar23;
      if ((int)uVar16 == 0) {
        FUN_0390d714(puVar21 + uVar23 * 0x19 + 10,1,param_4);
        piVar18 = (int *)(*(long *)puVar21[uVar23 * 0x19 + 0xb] +
                         (ulong)*(ushort *)((long)puVar21[uVar23 * 0x19 + 0xb] + 10) * 0xc);
        *(undefined1 *)(piVar18 + 2) = 6;
        *piVar18 = 4;
        uVar10 = (**(code **)(puVar21[uVar23 * 0x19 + 10] + 0x18))(puVar21 + uVar23 * 0x19 + 10,6);
        *(ushort *)((long)piVar18 + 6) = (ushort)uVar10 & 0xff;
        puVar13 = puVar21 + uVar23 * 0x19 + 0x10;
        uVar10 = ((uVar10 & 0xff) * 4 + (uint)*puVar13) - 1 & (uVar10 & 0xff) * -4;
        *(uint *)puVar13 = uVar10;
        *(short *)(piVar18 + 1) = (short)uVar10;
        *(uint *)puVar13 = (uint)*puVar13 + (uint)*(ushort *)((long)piVar18 + 6) * *piVar18 * 4;
        *(short *)(puVar21[uVar23 * 0x19 + 0xb] + 10) =
             *(short *)(puVar21[uVar23 * 0x19 + 0xb] + 10) + 1;
        if (*(short *)(puVar21[uVar23 * 0x19 + 0xb] + 10) ==
            *(short *)(puVar21[uVar23 * 0x19 + 0xb] + 8)) {
          *(uint *)puVar13 = (uint)*puVar13 + 0x1f & 0xffffffe0;
        }
      }
      else {
        lVar19 = *(long *)(param_1 + 0x98);
        puVar21[(long)iVar22 * 0x19 + 0xb] = *(ulong *)(lVar19 + 0x58);
        *(undefined4 *)(puVar21 + (long)iVar22 * 0x19 + 0x10) = *(undefined4 *)(lVar19 + 0x80);
        *(byte *)((long)puVar21 + (long)iVar22 * 200 + 0x8c) =
             *(byte *)((long)puVar21 + (long)iVar22 * 200 + 0x8c) & 0xfe;
      }
      puVar13 = puVar21 + (long)iVar22 * 0x19;
      FUN_0390d990(puVar13 + 10,param_4,2,1);
      uVar16 = uVar23 + 1;
      puVar13[8] = 0;
      uVar23 = uVar16 & 0xffffffff;
      *(undefined4 *)(puVar13 + 9) = 0;
      puVar13[1] = uVar17;
      *puVar13 = uVar20;
      puVar13[3] = uVar9;
      puVar13[2] = uVar8;
      puVar13[5] = uVar7;
      puVar13[4] = uVar6;
      puVar13[7] = uVar5;
      puVar13[6] = uVar4;
    } while (param_2 != (uint)uVar16);
  }
  lVar19 = DAT_05ae7600;
  if (0 < param_3) {
    if (DAT_05ae7600 == 0) {
      pvVar14 = malloc((long)(param_3 << 3));
    }
    else {
      plVar12 = param_4;
      if (param_4 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar19 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_03a0e27c;
      }
      pvVar14 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,(long)(param_3 << 3),8);
    }
    if (pvVar14 != (void *)0x0) {
      *(void **)(param_1 + 0x10) = pvVar14;
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0xc) = param_3;
    }
  }
LAB_03a0e27c:
  FUN_0390d714(param_1 + 0x18,2,param_4);
  piVar18 = (int *)(**(long **)(param_1 + 0x20) +
                   (ulong)*(ushort *)((long)*(long **)(param_1 + 0x20) + 10) * 0xc);
  *(undefined1 *)(piVar18 + 2) = 6;
  *piVar18 = 1;
  *(undefined2 *)((long)piVar18 + 6) = 4;
  uVar10 = *(int *)(param_1 + 0x48) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x48) = uVar10;
  *(short *)(piVar18 + 1) = (short)uVar10;
  *(uint *)(param_1 + 0x48) =
       *(int *)(param_1 + 0x48) + (uint)*(ushort *)((long)piVar18 + 6) * *piVar18 * 4;
  *(short *)(*(long *)(param_1 + 0x20) + 10) = *(short *)(*(long *)(param_1 + 0x20) + 10) + 1;
  plVar12 = *(long **)(param_1 + 0x20);
  uVar2 = *(ushort *)((long)plVar12 + 10);
  if (uVar2 == *(ushort *)(plVar12 + 1)) {
    *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x1fU & 0xffffffe0;
    uVar2 = *(ushort *)((long)plVar12 + 10);
  }
  piVar18 = (int *)(*plVar12 + (ulong)uVar2 * 0xc);
  *(undefined1 *)(piVar18 + 2) = 6;
  *piVar18 = 1;
  *(undefined2 *)((long)piVar18 + 6) = 4;
  uVar10 = *(int *)(param_1 + 0x48) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x48) = uVar10;
  *(short *)(piVar18 + 1) = (short)uVar10;
  *(uint *)(param_1 + 0x48) =
       *(int *)(param_1 + 0x48) + (uint)*(ushort *)((long)piVar18 + 6) * *piVar18 * 4;
  *(short *)(*(long *)(param_1 + 0x20) + 10) = *(short *)(*(long *)(param_1 + 0x20) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x20) + 10) == *(short *)(*(long *)(param_1 + 0x20) + 8)) {
    *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(param_1 + 0x18,param_4,2,param_3);
  return;
}

