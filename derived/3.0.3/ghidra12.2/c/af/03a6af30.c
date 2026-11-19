
void FUN_03a6af30(long param_1,uint param_2,uint param_3,long *param_4)

{
  size_t __size;
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  undefined4 uVar10;
  ulong *puVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  int local_78;
  undefined4 local_74;
  long local_70;
  long lStack_68;
  
  lVar19 = DAT_05ae7600;
  if (0 < (int)param_2) {
    uVar14 = (ulong)param_2;
    __size = (ulong)param_2 * 0x78 + 8;
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(__size);
    }
    else {
      plVar7 = param_4;
      if (param_4 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar19 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03a6b0ac;
      }
      puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
    }
    if (puVar8 != (ulong *)0x0) {
      puVar16 = puVar8 + 1;
      *puVar8 = uVar14;
      puVar1 = PTR_DAT_04bd11b8;
      uVar13 = uVar14 * 0x78 - 0x78;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar13;
      puVar11 = puVar16;
      if ((SUB164(auVar4 * ZEXT816(0x8888888888888889),8) >> 6 & 1) == 0) {
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        *(undefined4 *)(puVar8 + 8) = 0x10001;
        *(undefined1 *)((long)puVar8 + 0x44) = 0;
        puVar8[0xf] = 0;
        puVar8[1] = (ulong)(puVar1 + 0x10);
        puVar8[2] = 0;
        puVar11 = puVar8 + 0x10;
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
        } while (puVar11 != puVar16 + uVar14 * 0xf);
      }
      *(uint *)(param_1 + 0x1d8) = param_2;
      *(ulong **)(param_1 + 0x1e0) = puVar16;
      goto joined_r0x03a6b0b4;
    }
  }
LAB_03a6b0ac:
  param_2 = *(uint *)(param_1 + 0x1d8);
  puVar16 = *(ulong **)(param_1 + 0x1e0);
joined_r0x03a6b0b4:
  if (param_2 != 0) {
    uVar18 = 0;
    do {
      puVar8 = puVar16 + (long)(int)uVar18 * 0xf;
      if (uVar18 == 0) {
        FUN_0390d714(puVar8,8,param_4);
        piVar12 = (int *)(*(long *)puVar8[1] + (ulong)*(ushort *)((long)puVar8[1] + 10) * 0xc);
        *(undefined1 *)(piVar12 + 2) = 3;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 1;
        uVar5 = (int)puVar8[6] + 3U & 0xfffffffc;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        plVar7 = (long *)puVar8[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 3;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 1;
        uVar5 = (int)puVar8[6] + 3U & 0xfffffffc;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        plVar7 = (long *)puVar8[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 3;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 1;
        uVar5 = (int)puVar8[6] + 3U & 0xfffffffc;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        plVar7 = (long *)puVar8[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 3;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 1;
        uVar5 = (int)puVar8[6] + 3U & 0xfffffffc;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        plVar7 = (long *)puVar8[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 4;
        *piVar12 = 1;
        *(undefined2 *)((long)piVar12 + 6) = 2;
        uVar5 = (int)puVar8[6] + 7U & 0xfffffff8;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        plVar7 = (long *)puVar8[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 4;
        uVar5 = (**(code **)(*puVar8 + 0x18))(puVar8,6);
        *(ushort *)((long)piVar12 + 6) = (ushort)uVar5 & 0xff;
        uVar5 = ((uVar5 & 0xff) * 4 + (int)puVar8[6]) - 1 & (uVar5 & 0xff) * -4;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        plVar7 = (long *)puVar8[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 4;
        uVar5 = (**(code **)(*puVar8 + 0x18))(puVar8,6);
        *(ushort *)((long)piVar12 + 6) = (ushort)uVar5 & 0xff;
        uVar5 = ((uVar5 & 0xff) * 4 + (int)puVar8[6]) - 1 & (uVar5 & 0xff) * -4;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        plVar7 = (long *)puVar8[1];
        uVar3 = *(ushort *)((long)plVar7 + 10);
        if (uVar3 == *(ushort *)(plVar7 + 1)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar7 + 10);
        }
        piVar12 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar12 + 2) = 6;
        *piVar12 = 4;
        uVar5 = (**(code **)(*puVar8 + 0x18))(puVar8,6);
        *(ushort *)((long)piVar12 + 6) = (ushort)uVar5 & 0xff;
        uVar5 = ((uVar5 & 0xff) * 4 + (int)puVar8[6]) - 1 & (uVar5 & 0xff) * -4;
        *(uint *)(puVar8 + 6) = uVar5;
        *(short *)(piVar12 + 1) = (short)uVar5;
        *(uint *)(puVar8 + 6) = (int)puVar8[6] + (uint)*(ushort *)((long)piVar12 + 6) * *piVar12 * 4
        ;
        *(short *)(puVar8[1] + 10) = *(short *)(puVar8[1] + 10) + 1;
        if (*(short *)(puVar8[1] + 10) == *(short *)(puVar8[1] + 8)) {
          *(uint *)(puVar8 + 6) = (int)puVar8[6] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar19 = *(long *)(param_1 + 0x1e0);
        puVar8[1] = *(ulong *)(lVar19 + 8);
        *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(lVar19 + 0x30);
        *(byte *)((long)puVar8 + 0x3c) = *(byte *)((long)puVar8 + 0x3c) & 0xfe;
      }
      FUN_0390d990(puVar8,param_4,2,1);
      uVar18 = uVar18 + 1;
    } while (param_2 != uVar18);
  }
  lVar17 = 0;
  *(undefined8 *)(param_1 + 0xc54) = 0;
  lVar6 = 0;
  lVar19 = 0;
  lVar20 = 0x708;
  uVar10 = 1;
  if ((param_3 & 1) != 0) {
    uVar10 = 2;
  }
  *(undefined4 *)(param_1 + 0xc50) = uVar10;
  do {
    lVar2 = DAT_05ae7600;
    plVar7 = param_4;
    if (param_4 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar2 + 8);
      if (lVar9 != 0) {
        plVar7 = (long *)(lVar9 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    lVar2 = param_1 + lVar17;
    *(undefined8 *)(lVar2 + 0x488) = 0;
    *(undefined8 *)(lVar2 + 0x460) = 0;
    *(undefined8 *)(lVar2 + 0x468) = 0;
    *(undefined8 *)(lVar2 + 0x470) = 0;
    *(undefined8 *)(lVar2 + 0x478) = 0;
    *(undefined2 *)(lVar2 + 0x482) = 0;
    *(byte *)(lVar2 + 0x480) = *(byte *)(lVar2 + 0x480) & 0xfe;
    FUN_038f8590(DAT_05ae78d0,lVar2 + 0x458,plVar7,0x2580,8,0);
    *(undefined2 *)(lVar2 + 0x482) = 0;
    local_70 = *(long *)(lVar2 + 0x470);
    local_78 = 0;
    if (*(long *)(lVar2 + 0x478) != 0) {
      local_78 = *(int *)(lVar2 + 0x460) - *(int *)(*(long *)(lVar2 + 0x478) + 0x10);
    }
    local_74 = 0;
    if (local_70 != 0) {
      local_74 = *(undefined4 *)(local_70 + 0x104);
    }
    lVar15 = param_1 + lVar6;
    lVar9 = lVar15 + 0x4c8;
    lStack_68 = lVar2 + 0x458;
    FUN_0390ebc0(lVar9,&local_78,0x60,0x2580);
    *(undefined2 *)(lVar15 + 0x508) = 0x101;
    *(undefined8 *)(lVar15 + 0x500) = 0x2e;
    *(undefined8 *)(lVar15 + 0x50c) = 0x100000002e;
    *(undefined2 *)(lVar15 + 0x514) = 0x101;
    *(undefined8 *)(lVar15 + 0x518) = 0x200000002e;
    *(undefined8 *)(lVar15 + 0x524) = 0x300000002e;
    *(undefined2 *)(lVar15 + 0x520) = 0x101;
    *(undefined8 *)(lVar15 + 0x530) = 0x400000002e;
    *(undefined2 *)(lVar15 + 0x52c) = 0x101;
    *(undefined2 *)(lVar15 + 0x538) = 0x101;
    *(undefined8 *)(lVar15 + 0x53c) = 0x500000002e;
    *(undefined2 *)(lVar15 + 0x544) = 0x101;
    lVar2 = param_1 + lVar20;
    lVar15 = *(long *)PTR_DAT_04bbd7e8;
    FUN_0390e390(lVar2,2,param_4);
    FUN_0390e4c0(lVar2,0,lVar15 + 0x5c0,0);
    FUN_0390e4c0(lVar2,1,lVar9,0);
    FUN_0390e4c0(lVar2,2,lVar9,1);
    FUN_0390e4c0(lVar2,3,lVar9,2);
    FUN_0390e4c0(lVar2,4,lVar9,3);
    FUN_0390e4c0(lVar2,5,lVar9,4);
    FUN_0390e4c0(lVar2,6,lVar9,5);
    FUN_0390e640(lVar2);
    lVar19 = lVar19 + 1;
    lVar6 = lVar6 + 0x120;
    lVar17 = lVar17 + 0x38;
    lVar20 = lVar20 + 0x1e0;
  } while (lVar19 < *(int *)(param_1 + 0xc50));
  return;
}

