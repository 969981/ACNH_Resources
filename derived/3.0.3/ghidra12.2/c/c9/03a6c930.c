
void FUN_03a6c930(long param_1,uint param_2,int param_3,long *param_4)

{
  size_t __size;
  undefined *puVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  int *piVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  long lVar16;
  
  *(uint *)(param_1 + 0x208) = param_2;
  *(int *)(param_1 + 0x1e8) = param_3;
  puVar1 = PTR_DAT_04bb2698;
  if (0 < param_3) {
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      pvVar8 = malloc((long)(param_3 << 3));
joined_r0x03a6cb8c:
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0x218) = pvVar8;
        *(undefined4 *)(param_1 + 0x210) = 0;
        *(int *)(param_1 + 0x214) = param_3;
      }
    }
    else {
      plVar7 = param_4;
      if (param_4 != (long *)0x0) {
LAB_03a6c9bc:
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)(param_3 << 3),8);
        goto joined_r0x03a6cb8c;
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar16 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_03a6c9bc;
    }
    iVar2 = *(int *)(param_1 + 0x1e8);
    if (0 < iVar2) {
      lVar16 = *(long *)puVar1;
      if (lVar16 == 0) {
        pvVar8 = malloc((long)iVar2 << 3);
      }
      else {
        plVar7 = param_4;
        if (param_4 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar16 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_03a6ca54;
        }
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar2 << 3,8);
      }
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0x228) = pvVar8;
        *(undefined4 *)(param_1 + 0x220) = 0;
        *(int *)(param_1 + 0x224) = iVar2;
      }
    }
  }
LAB_03a6ca54:
  if (0 < (int)param_2) {
    lVar16 = *(long *)puVar1;
    __size = (ulong)param_2 * 0x78 + 8;
    if (lVar16 == 0) {
      puVar9 = malloc(__size);
    }
    else {
      plVar7 = param_4;
      if (param_4 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar16 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03a6cba0;
      }
      puVar9 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
    }
    if (puVar9 != (ulong *)0x0) {
      uVar10 = (ulong)param_2;
      puVar14 = puVar9 + 1;
      *puVar9 = uVar10;
      puVar1 = PTR_DAT_04bd11b8;
      uVar13 = uVar10 * 0x78 - 0x78;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar13;
      puVar11 = puVar14;
      if ((SUB164(auVar4 * ZEXT816(0x8888888888888889),8) >> 6 & 1) == 0) {
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        *(undefined4 *)(puVar9 + 8) = 0x10001;
        *(undefined1 *)((long)puVar9 + 0x44) = 0;
        puVar9[0xf] = 0;
        puVar9[1] = (ulong)(puVar1 + 0x10);
        puVar9[2] = 0;
        puVar11 = puVar9 + 0x10;
      }
      if (0x77 < uVar13) {
        puVar1 = PTR_DAT_04bd11b8 + 0x10;
        do {
          *puVar11 = (ulong)puVar1;
          puVar11[1] = 0;
          puVar11[6] = 0;
          *(undefined4 *)(puVar11 + 7) = 0x10001;
          *(undefined1 *)((long)puVar11 + 0x3c) = 0;
          *(undefined4 *)(puVar11 + 0x16) = 0x10001;
          *(undefined1 *)((long)puVar11 + 0xb4) = 0;
          puVar11[0x1d] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[0xe] = 0;
          puVar11[0xf] = (ulong)puVar1;
          puVar11[0x10] = 0;
          puVar11[0x11] = 0;
          puVar11[0x12] = 0;
          puVar11[0x13] = 0;
          puVar11[0x14] = 0;
          puVar11[0x15] = 0;
          puVar11 = puVar11 + 0x1e;
        } while (puVar11 != puVar14 + uVar10 * 0xf);
      }
      *(uint *)(param_1 + 0x1d0) = param_2;
      *(ulong **)(param_1 + 0x1d8) = puVar14;
      goto joined_r0x03a6cba8;
    }
  }
LAB_03a6cba0:
  param_2 = *(uint *)(param_1 + 0x1d0);
  puVar14 = *(ulong **)(param_1 + 0x1d8);
joined_r0x03a6cba8:
  if (param_2 != 0) {
    uVar15 = 0;
    do {
      puVar9 = puVar14 + (long)(int)uVar15 * 0xf;
      if (uVar15 == 0) {
        FUN_0390d714(puVar9,9,param_4);
        piVar12 = (int *)(*(long *)puVar9[1] + (ulong)*(ushort *)((long)puVar9[1] + 10) * 0xc);
        *(undefined1 *)(piVar12 + 2) = 3;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 1;
        uVar5 = (int)puVar9[6] + 3U & 0xfffffffc;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 3;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 1;
        uVar5 = (int)puVar9[6] + 3U & 0xfffffffc;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 3;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 1;
        uVar5 = (int)puVar9[6] + 3U & 0xfffffffc;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 4;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 2;
        uVar5 = (int)puVar9[6] + 7U & 0xfffffff8;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 4;
        uVar5 = (**(code **)(*puVar9 + 0x18))(puVar9,6);
        *(ushort *)((long)piVar12 + 6) = (ushort)uVar5 & 0xff;
        uVar5 = ((uVar5 & 0xff) * 4 + (int)puVar9[6]) - 1 & (uVar5 & 0xff) * -4;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 4;
        uVar5 = (**(code **)(*puVar9 + 0x18))(puVar9,6);
        *(ushort *)((long)piVar12 + 6) = (ushort)uVar5 & 0xff;
        uVar5 = ((uVar5 & 0xff) * 4 + (int)puVar9[6]) - 1 & (uVar5 & 0xff) * -4;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 4;
        uVar5 = (**(code **)(*puVar9 + 0x18))(puVar9,6);
        *(ushort *)((long)piVar12 + 6) = (ushort)uVar5 & 0xff;
        uVar5 = ((uVar5 & 0xff) * 4 + (int)puVar9[6]) - 1 & (uVar5 & 0xff) * -4;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 4;
        uVar5 = (int)puVar9[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        plVar7 = (long *)puVar9[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 4;
        uVar5 = (int)puVar9[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar9 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar9 + 6) = (int)puVar9[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar9[1] + 10) = *(short *)(puVar9[1] + 10) + 1;
        if (*(short *)(puVar9[1] + 10) == *(short *)(puVar9[1] + 8)) {
          *(uint *)(puVar9 + 6) = (int)puVar9[6] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar16 = *(long *)(param_1 + 0x1d8);
        puVar9[1] = *(ulong *)(lVar16 + 8);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(lVar16 + 0x30);
        *(byte *)((long)puVar9 + 0x3c) = *(byte *)((long)puVar9 + 0x3c) & 0xfe;
      }
      FUN_0390d990(puVar9,param_4,2,1);
      uVar15 = uVar15 + 1;
    } while (param_2 != uVar15);
  }
  return;
}

