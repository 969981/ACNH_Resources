
void FUN_039eba40(long param_1,uint *param_2,long *param_3)

{
  size_t sVar1;
  undefined *puVar2;
  long *plVar3;
  uint *puVar4;
  byte *pbVar5;
  ushort *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  byte bVar23;
  ushort uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  long *plVar32;
  ulong *puVar33;
  ulong *puVar34;
  long lVar35;
  int *piVar36;
  undefined8 *puVar37;
  ulong uVar38;
  undefined4 *puVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  long lVar43;
  ulong uVar44;
  uint uVar45;
  void *pvVar46;
  long lVar47;
  long lVar48;
  uint uVar49;
  undefined8 uVar50;
  undefined1 *local_80;
  undefined1 *puStack_78;
  
  lVar35 = *(long *)PTR_DAT_04bbd580;
  *(int *)(param_1 + 0x3c4) = (int)*(undefined8 *)(param_2 + 2);
  uVar45 = *param_2;
  if ((int)uVar45 < 1) {
LAB_039ebb78:
    uVar45 = *(uint *)(param_1 + 0x388);
    puVar34 = *(ulong **)(param_1 + 0x390);
  }
  else {
    lVar43 = *(long *)PTR_DAT_04bb2698;
    sVar1 = (ulong)uVar45 * 0xb8 + 8;
    if (lVar43 == 0) {
      puVar33 = malloc(sVar1);
    }
    else {
      plVar32 = param_3;
      if (param_3 == (long *)0x0) {
        lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar32 = (long *)(lVar43 + 8);
        if (lVar31 != 0) {
          plVar32 = (long *)(lVar31 + 0xa8);
        }
        plVar32 = (long *)*plVar32;
        if (plVar32 == (long *)0x0) goto LAB_039ebb78;
      }
      puVar33 = (ulong *)(**(code **)(*plVar32 + 0x30))(plVar32,sVar1,8);
    }
    if (puVar33 == (ulong *)0x0) goto LAB_039ebb78;
    puVar34 = puVar33 + 1;
    *puVar33 = (ulong)uVar45;
    puVar2 = PTR_DAT_04bd11b8 + 0x10;
    puVar33 = puVar34;
    do {
      *puVar33 = (ulong)puVar2;
      puVar33[1] = 0;
      puVar33[6] = 0;
      *(undefined4 *)(puVar33 + 7) = 0x10001;
      *(undefined1 *)((long)puVar33 + 0x3c) = 0;
      puVar33[0xe] = 0;
      puVar33[0x12] = (ulong)&PTR_LAB_04b6bc10;
      *(undefined1 *)(puVar33 + 0x16) = 0;
      puVar33[2] = 0;
      puVar33[3] = 0;
      puVar33[4] = 0;
      puVar33[5] = 0;
      puVar33 = puVar33 + 0x17;
    } while (puVar33 != puVar34 + (ulong)uVar45 * 0x17);
    *(uint *)(param_1 + 0x388) = uVar45;
    *(ulong **)(param_1 + 0x390) = puVar34;
  }
  puVar2 = PTR_DAT_04bb3ea0;
  if (uVar45 != 0) {
    uVar49 = 0;
    uVar40 = 0;
    do {
      puVar33 = puVar34 + (long)(int)uVar40 * 0x17;
      if (uVar49 == 0) {
        uVar29 = *(uint *)(param_1 + 0x3c4);
        FUN_0390d714(puVar33,0x23,param_3);
        piVar36 = (int *)(*(long *)puVar33[1] + (ulong)*(ushort *)((long)puVar33[1] + 10) * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 6;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 4;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 3;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 1;
        uVar28 = (int)puVar33[6] + 3U & 0xfffffffc;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        uVar24 = *(ushort *)((long)plVar32 + 10);
        if (uVar24 == *(ushort *)(plVar32 + 1)) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          uVar24 = *(ushort *)((long)plVar32 + 10);
        }
        piVar36 = (int *)(*plVar32 + (ulong)uVar24 * 0xc);
        *(undefined1 *)(piVar36 + 2) = 5;
        *piVar36 = 1;
        *(undefined2 *)((long)piVar36 + 6) = 3;
        uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar33 + 6) = uVar28;
        *(short *)(piVar36 + 1) = (short)uVar28;
        *(uint *)(puVar33 + 6) =
             (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
        *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
        plVar32 = (long *)puVar33[1];
        if (*(short *)((long)plVar32 + 10) == (short)plVar32[1]) {
          *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
        }
        if (uVar29 != 0) {
          piVar36 = (int *)(*plVar32 + (ulong)*(ushort *)((long)plVar32 + 10) * 0xc);
          *(undefined1 *)(piVar36 + 2) = 0x12;
          *piVar36 = 1;
          *(short *)((long)piVar36 + 6) = (short)(uVar29 >> 2);
          uVar28 = (int)puVar33[6] + 0xfU & 0xfffffff0;
          *(uint *)(puVar33 + 6) = uVar28;
          *(short *)(piVar36 + 1) = (short)uVar28;
          *(uint *)(puVar33 + 6) =
               (int)puVar33[6] + (uint)*(ushort *)((long)piVar36 + 6) * *piVar36 * 4;
          *(short *)(puVar33[1] + 10) = *(short *)(puVar33[1] + 10) + 1;
          if (*(short *)(puVar33[1] + 10) == *(short *)(puVar33[1] + 8)) {
            *(uint *)(puVar33 + 6) = (int)puVar33[6] + 0x1fU & 0xffffffe0;
          }
        }
      }
      else {
        lVar43 = *(long *)(param_1 + 0x390);
        puVar33[1] = *(ulong *)(lVar43 + 8);
        *(undefined4 *)(puVar33 + 6) = *(undefined4 *)(lVar43 + 0x30);
        *(byte *)((long)puVar33 + 0x3c) = *(byte *)((long)puVar33 + 0x3c) & 0xfe;
      }
      FUN_0390d990(puVar33,param_3,2,1);
      uVar44 = puVar33[6];
      pvVar46 = (void *)puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      if (3 < (uint)uVar44) {
        memset(pvVar46,0,(ulong)(uint)uVar44 & 0xfffffffc);
      }
      local_80 = (undefined1 *)0x3f0000003f000000;
      puStack_78 = (undefined1 *)0x3f8000003f000000;
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 8) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(uVar44 + *(ushort *)(lVar43 + 4)),&local_80,(ulong)bVar23 << 2);
      }
      local_80 = (undefined1 *)0x0;
      puStack_78 = (undefined1 *)0x3f80000000000000;
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x14) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(uVar44 + *(ushort *)(lVar43 + 0x10)),&local_80,(ulong)bVar23 << 2);
      }
      local_80 = (undefined1 *)0x0;
      puStack_78 = (undefined1 *)0x3f80000000000000;
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x20) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(uVar44 + *(ushort *)(lVar43 + 0x1c)),&local_80,(ulong)bVar23 << 2);
      }
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x2c) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if (bVar23 != 0) {
        uVar38 = (ulong)*(ushort *)(lVar43 + 0x28);
        puVar37 = (undefined8 *)puVar2;
        if (bVar23 < 8) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          puVar42 = (undefined8 *)(uVar44 + uVar38 + 0x10);
          do {
            lVar43 = lVar43 + -8;
            puVar42[-2] = *puVar37;
            puVar42[-1] = puVar37[1];
            *puVar42 = puVar37[2];
            *(undefined4 *)(puVar42 + 1) = *(undefined4 *)(puVar37 + 3);
            puVar39 = (undefined4 *)((long)puVar37 + 0x1c);
            puVar37 = puVar37 + 4;
            *(undefined4 *)((long)puVar42 + 0xc) = *puVar39;
            puVar42 = puVar42 + 4;
          } while (-lVar43 != ((ulong)bVar23 & 0xf8));
          lVar43 = -lVar43;
        }
        if ((bVar23 & 7) != 0) {
          uVar41 = (ulong)bVar23 & 7;
          puVar39 = (undefined4 *)(uVar44 + uVar38 + lVar43 * 4);
          do {
            uVar41 = uVar41 - 1;
            *puVar39 = *(undefined4 *)puVar37;
            puVar37 = (undefined8 *)((long)puVar37 + 4);
            puVar39 = puVar39 + 1;
          } while (uVar41 != 0);
        }
      }
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x38) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if (bVar23 != 0) {
        uVar38 = (ulong)*(ushort *)(lVar43 + 0x34);
        puVar37 = (undefined8 *)puVar2;
        if (bVar23 < 8) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          puVar42 = (undefined8 *)(uVar44 + uVar38 + 0x10);
          do {
            lVar43 = lVar43 + -8;
            puVar42[-2] = *puVar37;
            puVar42[-1] = puVar37[1];
            *puVar42 = puVar37[2];
            *(undefined4 *)(puVar42 + 1) = *(undefined4 *)(puVar37 + 3);
            puVar39 = (undefined4 *)((long)puVar37 + 0x1c);
            puVar37 = puVar37 + 4;
            *(undefined4 *)((long)puVar42 + 0xc) = *puVar39;
            puVar42 = puVar42 + 4;
          } while (-lVar43 != ((ulong)bVar23 & 0xf8));
          lVar43 = -lVar43;
        }
        if ((bVar23 & 7) != 0) {
          uVar41 = (ulong)bVar23 & 7;
          puVar39 = (undefined4 *)(uVar44 + uVar38 + lVar43 * 4);
          do {
            uVar41 = uVar41 - 1;
            *puVar39 = *(undefined4 *)puVar37;
            puVar37 = (undefined8 *)((long)puVar37 + 4);
            puVar39 = puVar39 + 1;
          } while (uVar41 != 0);
        }
      }
      local_80 = &DAT_3f8000003f800000;
      puStack_78 = &DAT_3f8000003f800000;
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x50) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(uVar44 + *(ushort *)(lVar43 + 0x4c)),&local_80,(ulong)bVar23 << 2);
      }
      local_80 = (undefined1 *)0x0;
      puStack_78 = (undefined1 *)0x3f80000000000000;
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x5c) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(uVar44 + *(ushort *)(lVar43 + 0x58)),&local_80,(ulong)bVar23 << 2);
      }
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x68) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if (bVar23 != 0) {
        uVar38 = (ulong)*(ushort *)(lVar43 + 100);
        puVar37 = (undefined8 *)puVar2;
        if (bVar23 < 8) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          puVar42 = (undefined8 *)(uVar44 + uVar38 + 0x10);
          do {
            lVar43 = lVar43 + -8;
            puVar42[-2] = *puVar37;
            puVar42[-1] = puVar37[1];
            *puVar42 = puVar37[2];
            *(undefined4 *)(puVar42 + 1) = *(undefined4 *)(puVar37 + 3);
            puVar39 = (undefined4 *)((long)puVar37 + 0x1c);
            puVar37 = puVar37 + 4;
            *(undefined4 *)((long)puVar42 + 0xc) = *puVar39;
            puVar42 = puVar42 + 4;
          } while (-lVar43 != ((ulong)bVar23 & 0xf8));
          lVar43 = -lVar43;
        }
        if ((bVar23 & 7) != 0) {
          uVar41 = (ulong)bVar23 & 7;
          puVar39 = (undefined4 *)(uVar44 + uVar38 + lVar43 * 4);
          do {
            uVar41 = uVar41 - 1;
            *puVar39 = *(undefined4 *)puVar37;
            puVar37 = (undefined8 *)((long)puVar37 + 4);
            puVar39 = puVar39 + 1;
          } while (uVar41 != 0);
        }
      }
      local_80 = (undefined1 *)0x0;
      puStack_78 = (undefined1 *)0x3f80000000000000;
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x74) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(uVar44 + *(ushort *)(lVar43 + 0x70)),&local_80,(ulong)bVar23 << 2);
      }
      local_80 = (undefined1 *)0x0;
      puStack_78 = (undefined1 *)0x3f80000000000000;
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x80) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(uVar44 + *(ushort *)(lVar43 + 0x7c)),&local_80,(ulong)bVar23 << 2);
      }
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x17c) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if (bVar23 != 0) {
        uVar38 = (ulong)*(ushort *)(lVar43 + 0x178);
        puVar37 = (undefined8 *)puVar2;
        if (bVar23 < 8) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          puVar42 = (undefined8 *)(uVar44 + uVar38 + 0x10);
          do {
            lVar43 = lVar43 + -8;
            puVar42[-2] = *puVar37;
            puVar42[-1] = puVar37[1];
            *puVar42 = puVar37[2];
            *(undefined4 *)(puVar42 + 1) = *(undefined4 *)(puVar37 + 3);
            puVar39 = (undefined4 *)((long)puVar37 + 0x1c);
            puVar37 = puVar37 + 4;
            *(undefined4 *)((long)puVar42 + 0xc) = *puVar39;
            puVar42 = puVar42 + 4;
          } while (-lVar43 != ((ulong)bVar23 & 0xf8));
          lVar43 = -lVar43;
        }
        if ((bVar23 & 7) != 0) {
          uVar41 = (ulong)bVar23 & 7;
          puVar39 = (undefined4 *)(uVar44 + uVar38 + lVar43 * 4);
          do {
            uVar41 = uVar41 - 1;
            *puVar39 = *(undefined4 *)puVar37;
            puVar37 = (undefined8 *)((long)puVar37 + 4);
            puVar39 = puVar39 + 1;
          } while (uVar41 != 0);
        }
      }
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x188) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if (bVar23 != 0) {
        uVar38 = (ulong)*(ushort *)(lVar43 + 0x184);
        puVar37 = (undefined8 *)puVar2;
        if (bVar23 < 8) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          puVar42 = (undefined8 *)(uVar44 + uVar38 + 0x10);
          do {
            lVar43 = lVar43 + -8;
            puVar42[-2] = *puVar37;
            puVar42[-1] = puVar37[1];
            *puVar42 = puVar37[2];
            *(undefined4 *)(puVar42 + 1) = *(undefined4 *)(puVar37 + 3);
            puVar39 = (undefined4 *)((long)puVar37 + 0x1c);
            puVar37 = puVar37 + 4;
            *(undefined4 *)((long)puVar42 + 0xc) = *puVar39;
            puVar42 = puVar42 + 4;
          } while (-lVar43 != ((ulong)bVar23 & 0xf8));
          lVar43 = -lVar43;
        }
        if ((bVar23 & 7) != 0) {
          uVar41 = (ulong)bVar23 & 7;
          puVar39 = (undefined4 *)(uVar44 + uVar38 + lVar43 * 4);
          do {
            uVar41 = uVar41 - 1;
            *puVar39 = *(undefined4 *)puVar37;
            puVar37 = (undefined8 *)((long)puVar37 + 4);
            puVar39 = puVar39 + 1;
          } while (uVar41 != 0);
        }
      }
      uVar44 = puVar33[2];
      (**(code **)(*puVar33 + 0x20))(puVar33);
      (**(code **)(*puVar33 + 0x20))(puVar33);
      lVar43 = *(long *)puVar33[1];
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar43 + 0x194) * 4];
      (**(code **)(*puVar33 + 0x18))(puVar33);
      if (bVar23 != 0) {
        uVar38 = (ulong)*(ushort *)(lVar43 + 400);
        puVar37 = (undefined8 *)puVar2;
        if (bVar23 < 8) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          puVar42 = (undefined8 *)(uVar44 + uVar38 + 0x10);
          do {
            lVar43 = lVar43 + -8;
            puVar42[-2] = *puVar37;
            puVar42[-1] = puVar37[1];
            *puVar42 = puVar37[2];
            *(undefined4 *)(puVar42 + 1) = *(undefined4 *)(puVar37 + 3);
            puVar39 = (undefined4 *)((long)puVar37 + 0x1c);
            puVar37 = puVar37 + 4;
            *(undefined4 *)((long)puVar42 + 0xc) = *puVar39;
            puVar42 = puVar42 + 4;
          } while (-lVar43 != ((ulong)bVar23 & 0xf8));
          lVar43 = -lVar43;
        }
        if ((bVar23 & 7) != 0) {
          uVar41 = (ulong)bVar23 & 7;
          puVar39 = (undefined4 *)(uVar44 + uVar38 + lVar43 * 4);
          do {
            uVar41 = uVar41 - 1;
            *puVar39 = *(undefined4 *)puVar37;
            puVar37 = (undefined8 *)((long)puVar37 + 4);
            puVar39 = puVar39 + 1;
          } while (uVar41 != 0);
        }
      }
      FUN_039edd60(0,0,0,0,puVar33,0xb);
      FUN_039edd60(0,0,0,0,puVar33,0x10);
      FUN_039edd60(0,0x3f800000,0,0,puVar33,0x15);
      FUN_039edd60(0,0,0,0,puVar33,0x1a);
      bVar23 = *(byte *)((long)puVar33 + 0x39);
      uVar24 = *(ushort *)((long)puVar33 + 0x3a);
      uVar44 = puVar33[6];
      iVar26 = (**(code **)(*puVar33 + 0x20))(puVar33);
      iVar27 = (**(code **)(*puVar33 + 0x20))(puVar33);
      uVar38 = puVar33[4];
      if (uVar38 != 0) {
        uVar41 = puVar33[6];
        uVar25 = puVar33[3];
        uVar28 = (**(code **)PTR_DAT_04bcf030)(uVar38);
        if ((uVar28 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_04bcf350)
                    (uVar38,(int)uVar25 +
                            (uint)uVar24 * (uint)bVar23 * (((int)uVar44 + iVar26) - 1U & -iVar27),
                     (int)uVar41);
        }
      }
      *(undefined1 *)(puVar34 + (long)(int)uVar40 * 0x17 + 0x16) = 0;
      uVar28 = uVar49;
      if (*(uint *)(param_1 + 0x388) <= uVar49) {
        uVar28 = 0;
      }
      *(undefined ***)(*(long *)(param_1 + 0x390) + (ulong)uVar28 * 0xb8 + 0x90) = &PTR_LAB_04b6bc10
      ;
      uVar28 = uVar49;
      if (*(uint *)(param_1 + 0x388) <= uVar49) {
        uVar28 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x390) + (ulong)uVar28 * 0xb8 + 0x80) = 0;
      uVar28 = uVar49;
      if (*(uint *)(param_1 + 0x388) <= uVar49) {
        uVar28 = 0;
      }
      uVar49 = uVar49 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x390) + (ulong)uVar28 * 0xb8 + 0x88) = 0;
      uVar40 = uVar40 + 1;
    } while (uVar45 != uVar40);
  }
  uVar45 = param_2[1];
  uVar44 = (ulong)uVar45;
  if (0 < (int)uVar45) {
    sVar1 = uVar44 * 0x410 + 0x10;
    lVar43 = *(long *)PTR_DAT_04bb2698;
    if (lVar43 == 0) {
      pvVar46 = malloc(sVar1);
      puVar37 = (undefined8 *)PTR_DAT_04bb2f80;
    }
    else {
      plVar32 = param_3;
      if (param_3 == (long *)0x0) {
        lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar32 = (long *)(lVar43 + 8);
        if (lVar31 != 0) {
          plVar32 = (long *)(lVar31 + 0xa8);
        }
        plVar32 = (long *)*plVar32;
        if (plVar32 == (long *)0x0) goto LAB_039ed914;
      }
      pvVar46 = (void *)(**(code **)(*plVar32 + 0x30))(plVar32,sVar1,0x10);
      puVar37 = (undefined8 *)PTR_DAT_04bb2f80;
    }
    PTR_DAT_04bb2f80 = (undefined *)puVar37;
    if (pvVar46 != (void *)0x0) {
      lVar43 = (long)pvVar46 + 0x10;
      *(ulong *)((long)pvVar46 + 8) = uVar44;
      uVar8 = puVar37[2];
      uVar15 = puVar37[3];
      uVar9 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x20);
      uVar16 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x28);
      uVar10 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x30);
      uVar17 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x38);
      uVar11 = *(undefined8 *)PTR_DAT_04bbd558;
      uVar18 = *(undefined8 *)(PTR_DAT_04bbd558 + 8);
      uVar12 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x10);
      uVar19 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x18);
      uVar13 = puVar37[4];
      uVar20 = puVar37[5];
      uVar22 = *(undefined4 *)(PTR_DAT_04bb4bc8 + 8);
      uVar14 = *puVar37;
      uVar21 = puVar37[1];
      uVar50 = *(undefined8 *)PTR_DAT_04bb4bc8;
      puVar2 = PTR_DAT_04bd11b8 + 0x10;
      lVar31 = 0;
      do {
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x168) = 0x3f800000;
        lVar47 = lVar31 + 0x410;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x170) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x150) = 0x447a00003f800000;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x21c) = uVar22;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x158) = 0x3fe38e393f490fdb;
        *(undefined1 **)((long)pvVar46 + lVar31 + 0x160) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x214) = uVar50;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x224) = uVar50;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x220) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x234) = uVar50;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x22c) = uVar22;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x244) = uVar50;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x230) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x254) = uVar50;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x23c) = uVar22;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x240) = 0;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x24c) = uVar22;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x250) = 0;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x25c) = uVar22;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x260) = 0;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x26c) = uVar22;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x264) = uVar50;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x270) = 0x7f7fffff00000000;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x278) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x280) = 0xff7fffffff7fffff;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x288) = 0x7f7fffffff7fffff;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x290) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x298) = 0xff7fffffff7fffff;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x2a0) = 0xff7fffff;
        *(undefined1 *)((long)pvVar46 + lVar31 + 0x2a4) = 0;
        *(undefined **)((long)pvVar46 + lVar31 + 0x3a0) = puVar2;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x3d0) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x3c8) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x3c0) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x3b8) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x3b0) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x3a8) = 0;
        *(undefined4 *)((long)pvVar46 + lVar31 + 0x3d8) = 0x10001;
        *(undefined1 *)((long)pvVar46 + lVar31 + 0x3dc) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x410) = 0;
        *(undefined2 *)((long)pvVar46 + lVar31 + 0x418) = 0;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x80) = uVar8;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x88) = uVar15;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x90) = uVar13;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x98) = uVar20;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x70) = uVar14;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x78) = uVar21;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xb0) = uVar8;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xb8) = uVar15;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xc0) = uVar13;
        *(undefined8 *)((long)pvVar46 + lVar31 + 200) = uVar20;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xa0) = uVar14;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xa8) = uVar21;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xf0) = uVar9;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xf8) = uVar16;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x100) = uVar10;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x108) = uVar17;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xd0) = uVar11;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xd8) = uVar18;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xe0) = uVar12;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0xe8) = uVar19;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x110) = uVar11;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x118) = uVar18;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x120) = uVar12;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x128) = uVar19;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x130) = uVar9;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x138) = uVar16;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x140) = uVar10;
        *(undefined8 *)((long)pvVar46 + lVar31 + 0x148) = uVar17;
        lVar31 = lVar47;
      } while (uVar44 * 0x410 != lVar47);
      *(uint *)(param_1 + 0x10) = uVar45;
      *(long *)(param_1 + 0x18) = lVar43;
      goto joined_r0x039ed920;
    }
  }
LAB_039ed914:
  uVar45 = *(uint *)(param_1 + 0x10);
  lVar43 = *(long *)(param_1 + 0x18);
joined_r0x039ed920:
  if (uVar45 != 0) {
    uVar49 = 0;
    do {
      lVar47 = lVar43 + (long)(int)uVar49 * 0x410;
      *(undefined1 *)(lVar47 + 0x409) = 0;
      plVar32 = (long *)(lVar47 + 0x390);
      *(undefined8 *)(lVar47 + 0x398) = *(undefined8 *)(lVar35 + 0x10);
      *(undefined4 *)(lVar47 + 0x3c0) = *(undefined4 *)(lVar35 + 0x38);
      *(byte *)(lVar47 + 0x3cc) = *(byte *)(lVar47 + 0x3cc) & 0xfe;
      FUN_0390d990(plVar32,param_3,2,1);
      *(undefined1 *)(lVar47 + 0x3c9) = 0;
      (**(code **)(*(long *)(lVar47 + 0x390) + 0x20))(plVar32);
      (**(code **)(*(long *)(lVar47 + 0x390) + 0x20))(plVar32);
      uVar40 = *(uint *)(lVar47 + 0x3a8);
      lVar31 = 0;
      if (*(long *)(lVar47 + 0x3b0) != 0) {
        lVar31 = (**(code **)PTR_DAT_04bb2cd8)();
      }
      plVar3 = (long *)(lVar47 + 0x3a0);
      pvVar46 = (void *)(lVar31 + (ulong)uVar40);
      *plVar3 = (long)pvVar46;
      puVar4 = (uint *)(lVar47 + 0x3c0);
      uVar40 = *puVar4;
      (**(code **)(*plVar32 + 0x20))(plVar32);
      (**(code **)(*plVar32 + 0x20))(plVar32);
      if (3 < uVar40) {
        memset(pvVar46,0,(ulong)uVar40 & 0xfffffffc);
      }
      local_80 = &DAT_3f8000003f800000;
      puStack_78 = &DAT_3f8000003f800000;
      lVar31 = *plVar3;
      (**(code **)(*plVar32 + 0x20))(plVar32);
      (**(code **)(*plVar32 + 0x20))(plVar32);
      lVar48 = **(long **)(lVar47 + 0x398);
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar48 + 0x104) * 4];
      (**(code **)(*plVar32 + 0x18))(plVar32);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(lVar31 + (ulong)*(ushort *)(lVar48 + 0x100)),&local_80,(ulong)bVar23 << 2);
      }
      pbVar5 = (byte *)(lVar47 + 0x3c9);
      puVar6 = (ushort *)(lVar47 + 0x3ca);
      uVar40 = *puVar4;
      bVar23 = *pbVar5;
      piVar36 = (int *)(lVar47 + 0x3a8);
      plVar7 = (long *)(lVar47 + 0x3b0);
      uVar24 = *puVar6;
      iVar26 = (**(code **)(*plVar32 + 0x20))(plVar32);
      iVar27 = (**(code **)(*plVar32 + 0x20))(plVar32);
      lVar31 = *plVar7;
      if (lVar31 != 0) {
        uVar28 = *puVar4;
        iVar30 = *piVar36;
        uVar29 = (**(code **)PTR_DAT_04bcf030)(lVar31);
        if ((uVar29 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_04bcf350)
                    (lVar31,iVar30 + (uint)uVar24 * (uint)bVar23 * ((uVar40 + iVar26) - 1 & -iVar27)
                     ,uVar28);
        }
      }
      uVar40 = *puVar4;
      *pbVar5 = 1;
      uVar24 = *puVar6;
      iVar27 = (**(code **)(*plVar32 + 0x20))(plVar32);
      iVar30 = (**(code **)(*plVar32 + 0x20))(plVar32);
      iVar26 = *piVar36;
      lVar31 = 0;
      if (*plVar7 != 0) {
        lVar31 = (**(code **)PTR_DAT_04bb2cd8)();
      }
      uVar28 = *puVar4;
      pvVar46 = (void *)(lVar31 + (ulong)(iVar26 + ((uVar40 + iVar27) - 1 & -iVar30) * (uint)uVar24)
                        );
      *plVar3 = (long)pvVar46;
      (**(code **)(*plVar32 + 0x20))(plVar32);
      (**(code **)(*plVar32 + 0x20))(plVar32);
      if (3 < uVar28) {
        memset(pvVar46,0,(ulong)uVar28 & 0xfffffffc);
      }
      local_80 = &DAT_3f8000003f800000;
      puStack_78 = &DAT_3f8000003f800000;
      lVar31 = *plVar3;
      (**(code **)(*plVar32 + 0x20))(plVar32);
      (**(code **)(*plVar32 + 0x20))(plVar32);
      lVar47 = **(long **)(lVar47 + 0x398);
      bVar23 = (&DAT_041b370c)[(ulong)*(byte *)(lVar47 + 0x104) * 4];
      (**(code **)(*plVar32 + 0x18))(plVar32);
      if ((ulong)bVar23 != 0) {
        memcpy((void *)(lVar31 + (ulong)*(ushort *)(lVar47 + 0x100)),&local_80,(ulong)bVar23 << 2);
      }
      uVar40 = *puVar4;
      bVar23 = *pbVar5;
      uVar24 = *puVar6;
      iVar26 = (**(code **)(*plVar32 + 0x20))(plVar32);
      iVar27 = (**(code **)(*plVar32 + 0x20))(plVar32);
      lVar31 = *plVar7;
      if (lVar31 != 0) {
        uVar28 = *puVar4;
        iVar30 = *piVar36;
        uVar29 = (**(code **)PTR_DAT_04bcf030)(lVar31);
        if ((uVar29 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_04bcf350)
                    (lVar31,iVar30 + (uint)uVar24 * (uint)bVar23 * ((uVar40 + iVar26) - 1 & -iVar27)
                     ,uVar28);
        }
      }
      uVar49 = uVar49 + 1;
    } while (uVar45 != uVar49);
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  FUN_039ee490(param_1,0);
  return;
}

