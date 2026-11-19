
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03a266a0(long param_1,uint param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short sVar10;
  ushort uVar11;
  char cVar12;
  char cVar13;
  ushort uVar14;
  ushort uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long *plVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined8 uVar30;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar31;
  long *plVar32;
  bool bVar33;
  byte bVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  uint *puVar39;
  ulong uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  uint uVar46;
  undefined8 uVar47;
  int *piVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  undefined4 *puVar52;
  long *plVar53;
  int iVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulong *local_108;
  undefined8 *local_c0;
  int local_a8;
  undefined4 local_a4;
  long local_a0;
  long lStack_98;
  int local_90;
  int iStack_8c;
  long local_88;
  long *plStack_80;
  
  plVar32 = (long *)PTR_DAT_04bb2698;
  if (0 < (int)param_2) {
    lVar49 = *(long *)PTR_DAT_04bb2698;
    __size = (ulong)param_2 * 0x548 + 8;
    if (lVar49 == 0) {
      puVar27 = malloc(__size);
      uVar40 = _DAT_04102200;
      uVar16 = _UNK_04102208;
      puVar4 = PTR_DAT_04bd11b8;
    }
    else {
      plVar26 = param_3;
      if (param_3 == (long *)0x0) {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar26 = (long *)(lVar49 + 8);
        if (lVar25 != 0) {
          plVar26 = (long *)(lVar25 + 0xa8);
        }
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) goto LAB_03a26a44;
      }
      puVar27 = (ulong *)(**(code **)(*plVar26 + 0x30))(plVar26,__size,8);
      uVar40 = _DAT_04102200;
      uVar16 = _UNK_04102208;
      puVar4 = PTR_DAT_04bd11b8;
    }
    _DAT_04102200 = uVar40;
    _UNK_04102208 = uVar16;
    PTR_DAT_04bd11b8 = puVar4;
    if (puVar27 != (ulong *)0x0) {
      local_108 = puVar27 + 1;
      *puVar27 = (ulong)param_2;
      uVar23 = _UNK_04102888;
      uVar22 = _DAT_04102880;
      uVar21 = _UNK_041023d8;
      uVar20 = _DAT_041023d0;
      uVar19 = DAT_04102218;
      uVar18 = DAT_04102210;
      uVar35 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uVar36 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      uVar41 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uVar37 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      uVar42 = *(undefined8 *)PTR_DAT_04bb2f80;
      uVar38 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      uVar43 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x10);
      uVar30 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x18);
      uVar45 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x20);
      uVar55 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x28);
      uVar47 = *(undefined8 *)PTR_DAT_04bbd558;
      uVar44 = *(undefined8 *)(PTR_DAT_04bbd558 + 8);
      uVar6 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x30);
      uVar7 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x38);
      puVar1 = PTR_DAT_04bd0f08 + 0x10;
      uVar50 = *(ulong *)PTR_DAT_04bb4bc8;
      uVar8 = *(undefined4 *)(PTR_DAT_04bb4bc8 + 8);
      puVar2 = PTR_DAT_04bd1178 + 0x10;
      puVar27 = local_108;
      do {
        puVar27[6] = 0;
        *(undefined1 *)((long)puVar27 + 0x3c) = 0;
        puVar27[2] = 0;
        puVar27[3] = 0;
        puVar27[0xe] = 0;
        puVar27[0x2d] = 0;
        *(undefined4 *)(puVar27 + 0x2e) = 0;
        *(undefined4 *)((long)puVar27 + 0x28c) = 0;
        *(undefined4 *)(puVar27 + 0x67) = uVar8;
        puVar27[0x66] = uVar50;
        *(undefined4 *)((long)puVar27 + 0x33c) = 0;
        *(undefined4 *)(puVar27 + 0x69) = uVar8;
        puVar27[0x68] = uVar50;
        *(undefined4 *)((long)puVar27 + 0x34c) = 0;
        *(undefined4 *)(puVar27 + 0x6b) = uVar8;
        puVar27[0x6a] = uVar50;
        *(undefined4 *)((long)puVar27 + 0x35c) = 0;
        *(undefined4 *)(puVar27 + 0x6d) = uVar8;
        puVar27[0x6c] = uVar50;
        *(undefined4 *)((long)puVar27 + 0x36c) = 0;
        *(undefined4 *)(puVar27 + 0x6f) = uVar8;
        puVar27[0x6e] = uVar50;
        *(undefined4 *)((long)puVar27 + 0x37c) = 0;
        *(undefined4 *)(puVar27 + 0x71) = uVar8;
        puVar27[0x70] = uVar50;
        *(undefined1 *)(puVar27 + 0x78) = 0;
        *puVar27 = (ulong)(puVar4 + 0x10);
        puVar27[1] = 0;
        *(undefined4 *)(puVar27 + 7) = 0x10001;
        *(undefined8 *)((long)puVar27 + 0x1a4) = uVar36;
        *(undefined8 *)((long)puVar27 + 0x1ac) = uVar41;
        *(undefined8 *)((long)puVar27 + 0x1d4) = uVar36;
        *(undefined8 *)((long)puVar27 + 0x1dc) = uVar41;
        *(undefined8 *)((long)puVar27 + 0x19c) = uVar35;
        *(undefined8 *)((long)puVar27 + 0x1b4) = uVar37;
        *(undefined8 *)((long)puVar27 + 0x18c) = uVar42;
        *(undefined8 *)((long)puVar27 + 0x1e4) = uVar37;
        *(undefined8 *)((long)puVar27 + 0x1cc) = uVar35;
        *(undefined8 *)((long)puVar27 + 0x1bc) = uVar42;
        *(undefined8 *)((long)puVar27 + 0x194) = uVar38;
        *(undefined8 *)((long)puVar27 + 0x1c4) = uVar38;
        puVar27[4] = 0;
        puVar27[5] = 0;
        puVar27[0x2b] = 0;
        puVar27[0x2c] = 0;
        puVar27[0x24] = uVar16;
        puVar27[0x23] = uVar40;
        puVar27[0x26] = uVar23;
        puVar27[0x25] = uVar22;
        puVar27[0x28] = uVar21;
        puVar27[0x27] = uVar20;
        puVar27[0x2a] = uVar19;
        puVar27[0x29] = uVar18;
        *(undefined8 *)((long)puVar27 + 0x1ec) = uVar47;
        *(undefined8 *)((long)puVar27 + 0x204) = uVar30;
        *(undefined8 *)((long)puVar27 + 500) = uVar44;
        *(undefined8 *)((long)puVar27 + 0x1fc) = uVar43;
        *(undefined8 *)((long)puVar27 + 0x21c) = uVar6;
        *(undefined8 *)((long)puVar27 + 0x224) = uVar7;
        *(undefined8 *)((long)puVar27 + 0x20c) = uVar45;
        *(undefined8 *)((long)puVar27 + 0x214) = uVar55;
        *(undefined8 *)((long)puVar27 + 0x23c) = uVar43;
        *(undefined8 *)((long)puVar27 + 0x244) = uVar30;
        *(undefined8 *)((long)puVar27 + 0x26c) = 0x447a00003f800000;
        *(undefined8 *)((long)puVar27 + 0x274) = 0x3fe38e393f490fdb;
        *(undefined1 **)((long)puVar27 + 0x27c) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)puVar27 + 0x284) = 0x3f800000;
        *(undefined8 *)((long)puVar27 + 0x38c) = 0x7f7fffff00000000;
        *(undefined8 *)((long)puVar27 + 0x394) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)puVar27 + 0x22c) = uVar47;
        *(undefined8 *)((long)puVar27 + 0x234) = uVar44;
        *(undefined8 *)((long)puVar27 + 0x24c) = uVar45;
        *(undefined8 *)((long)puVar27 + 0x254) = uVar55;
        *(undefined8 *)((long)puVar27 + 0x25c) = uVar6;
        *(undefined8 *)((long)puVar27 + 0x264) = uVar7;
        *(undefined8 *)((long)puVar27 + 0x39c) = 0xff7fffffff7fffff;
        *(undefined8 *)((long)puVar27 + 0x3a4) = 0x7f7fffffff7fffff;
        *(undefined8 *)((long)puVar27 + 0x3ac) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)puVar27 + 0x3b4) = 0xff7fffffff7fffff;
        *(undefined4 *)((long)puVar27 + 0x3bc) = 0xff7fffff;
        FUN_0390cee0(puVar27 + 0x79);
        puVar27[0x95] = (ulong)puVar1;
        uVar9 = *(undefined4 *)PTR_DAT_04bd0ea8;
        puVar27[0x96] = 0x7f7fffff7f7fffff;
        puVar27[0x97] = 0xff7fffffff7fffff;
        puVar27[0x9b] = (ulong)&DAT_3f8000003f800000;
        puVar27[0x9c] = 0;
        puVar27[0x9d] = (ulong)&DAT_3f8000003f800000;
        puVar27[0xa8] = 0;
        puVar27[0x9e] = 0;
        puVar27[0x9f] = 0;
        puVar27[0xa0] = 0;
        puVar27[0xa1] = 0;
        puVar27[0xa2] = 0;
        puVar27[0xa3] = 0;
        puVar27[0xa4] = 0;
        puVar27[0xa5] = 0;
        puVar27[0xa6] = 0;
        *(undefined4 *)(puVar27 + 0xa7) = 0;
        *(undefined4 *)(puVar27 + 0x98) = uVar9;
        puVar27[0x9a] = (ulong)puVar2;
        puVar3 = puVar27 + 0xa9;
        *(undefined8 *)((long)puVar27 + 0x4c4) = 0x3f80000000000000;
        puVar27 = puVar3;
      } while (puVar3 != local_108 + (ulong)param_2 * 0xa9);
      *(uint *)(param_1 + 8) = param_2;
      *(ulong **)(param_1 + 0x10) = local_108;
      plVar32 = (long *)PTR_DAT_04bb2698;
      goto LAB_03a26a50;
    }
  }
LAB_03a26a44:
  param_2 = *(uint *)(param_1 + 8);
  local_108 = *(ulong **)(param_1 + 0x10);
LAB_03a26a50:
  if (param_2 != 0) {
    uVar46 = 0;
    puVar4 = PTR_DAT_04bd1198 + 0x10;
    puVar1 = PTR_DAT_04bb2cc8 + 0x10;
    do {
      puVar27 = local_108 + (long)(int)uVar46 * 0xa9;
      *(undefined8 *)((long)puVar27 + 0x17c) = 0;
      *(undefined8 *)((long)puVar27 + 0x184) = 0;
      *(undefined8 *)((long)puVar27 + 0x174) = 0;
      if (uVar46 == 0) {
        FUN_0390d714(puVar27,0x10,param_3);
        piVar48 = (int *)(*(long *)puVar27[1] + (ulong)*(ushort *)((long)puVar27[1] + 10) * 0xc);
        *(undefined1 *)(piVar48 + 2) = 6;
        *piVar48 = 4;
        uVar24 = (**(code **)(*puVar27 + 0x18))(puVar27,6);
        *(ushort *)((long)piVar48 + 6) = (ushort)uVar24 & 0xff;
        uVar24 = ((uVar24 & 0xff) * 4 + (int)puVar27[6]) - 1 & (uVar24 & 0xff) * -4;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 6;
        *piVar48 = 3;
        uVar24 = (**(code **)(*puVar27 + 0x18))(puVar27,6);
        *(ushort *)((long)piVar48 + 6) = (ushort)uVar24 & 0xff;
        uVar24 = ((uVar24 & 0xff) * 4 + (int)puVar27[6]) - 1 & (uVar24 & 0xff) * -4;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 6;
        *piVar48 = 3;
        uVar24 = (**(code **)(*puVar27 + 0x18))(puVar27,6);
        *(ushort *)((long)piVar48 + 6) = (ushort)uVar24 & 0xff;
        uVar24 = ((uVar24 & 0xff) * 4 + (int)puVar27[6]) - 1 & (uVar24 & 0xff) * -4;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 6;
        *piVar48 = 4;
        uVar24 = (**(code **)(*puVar27 + 0x18))(puVar27,6);
        *(ushort *)((long)piVar48 + 6) = (ushort)uVar24 & 0xff;
        uVar24 = ((uVar24 & 0xff) * 4 + (int)puVar27[6]) - 1 & (uVar24 & 0xff) * -4;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        plVar26 = (long *)puVar27[1];
        uVar11 = *(ushort *)((long)plVar26 + 10);
        if (uVar11 == *(ushort *)(plVar26 + 1)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar26 + 10);
        }
        piVar48 = (int *)(*plVar26 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar48 + 2) = 3;
        *piVar48 = 1;
        *(undefined2 *)((long)piVar48 + 6) = 1;
        uVar24 = (int)puVar27[6] + 3U & 0xfffffffc;
        *(uint *)(puVar27 + 6) = uVar24;
        *(short *)(piVar48 + 1) = (short)uVar24;
        *(uint *)(puVar27 + 6) =
             (int)puVar27[6] + (uint)*(ushort *)((long)piVar48 + 6) * *piVar48 * 4;
        *(short *)(puVar27[1] + 10) = *(short *)(puVar27[1] + 10) + 1;
        if (*(short *)(puVar27[1] + 10) == *(short *)(puVar27[1] + 8)) {
          *(uint *)(puVar27 + 6) = (int)puVar27[6] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar49 = *(long *)(param_1 + 0x10);
        puVar27[1] = *(ulong *)(lVar49 + 8);
        *(undefined4 *)(puVar27 + 6) = *(undefined4 *)(lVar49 + 0x30);
        *(byte *)((long)puVar27 + 0x3c) = *(byte *)((long)puVar27 + 0x3c) & 0xfe;
      }
      FUN_0390d990(puVar27,param_3,2,1);
      local_108[(long)(int)uVar46 * 0xa9 + 0x8e] = (ulong)&DAT_3f8000003f800000;
      local_108[(long)(int)uVar46 * 0xa9 + 0x8f] = (ulong)&DAT_3f8000003f800000;
      puVar39 = (uint *)((long)local_108 + (long)(int)uVar46 * 0x548 + 0x49c);
      do {
        cVar12 = '\x01';
        bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
        if (bVar33) {
          *puVar39 = *puVar39 & 0xffffffdf | 0x20;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      *(undefined2 *)((long)local_108 + (long)(int)uVar46 * 0x548 + 0x48f) = 0x505;
      *(undefined1 *)((long)local_108 + (long)(int)uVar46 * 0x548 + 0x491) = 5;
      do {
        cVar12 = '\x01';
        bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
        if (bVar33) {
          *puVar39 = *puVar39 & 0xfffffffd | 2;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      local_108[(long)(int)uVar46 * 0xa9 + 0xa6] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0xa5] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0xa4] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0xa3] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0xa2] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0xa1] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0xa0] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0x9f] = 0;
      local_108[(long)(int)uVar46 * 0xa9 + 0x9e] = 0;
      lVar49 = *plVar32;
      if (lVar49 == 0) {
        puVar28 = malloc(0x3c8);
        if (puVar28 == (undefined8 *)0x0) goto LAB_03a275b0;
LAB_03a27470:
        *puVar28 = 2;
        puVar28[4] = 0;
        local_c0 = puVar28 + 1;
        *local_c0 = 0;
        puVar28[2] = 0;
        puVar28[3] = 0;
        FUN_0390cee0(puVar28 + 5);
        puVar28[0x2a] = 0;
        puVar28[0x2b] = 0;
        puVar28[0x28] = 0;
        puVar28[0x29] = 0;
        *(undefined4 *)(puVar28 + 0x2c) = 0xffffffff;
        *(undefined4 *)(puVar28 + 0x35) = 0x10000;
        puVar28[0x26] = 0;
        puVar28[0x27] = 0;
        puVar28[0x24] = 0;
        puVar28[0x25] = 0;
        puVar28[0x22] = 0;
        puVar28[0x23] = 0;
        puVar28[0x2d] = 0;
        puVar28[0x2e] = 0;
        puVar28[0x2f] = 0;
        puVar28[0x30] = 0;
        puVar28[0x31] = 0;
        puVar28[0x32] = 0;
        puVar28[0x33] = 0;
        puVar28[0x34] = "agl::TextureData";
        *(undefined4 *)(puVar28 + 0x38) = 0xff;
        *(undefined4 *)((long)puVar28 + 0x1c4) = 0;
        puVar28[0x21] = puVar4;
        puVar28[0x3f] = 0;
        puVar28[0x40] = 0;
        puVar28[0x3d] = 0;
        puVar28[0x3e] = 0;
        puVar28[0x3b] = 0;
        puVar28[0x3c] = 0;
        puVar28[0x39] = 0x80000000000;
        puVar28[0x3a] = 0;
        FUN_0390cee0(puVar28 + 0x41);
        puVar28[0x67] = 0;
        puVar28[0x66] = 0;
        puVar28[0x65] = 0;
        puVar28[100] = 0;
        puVar28[99] = 0;
        puVar28[0x62] = 0;
        puVar28[0x61] = 0;
        puVar28[0x60] = 0;
        puVar28[0x5f] = 0;
        puVar28[0x5e] = 0;
        *(undefined4 *)(puVar28 + 0x68) = 0xffffffff;
        puVar28[0x69] = 0;
        puVar28[0x6a] = 0;
        puVar28[0x6b] = 0;
        puVar28[0x6c] = 0;
        puVar28[0x6d] = 0;
        puVar28[0x6e] = 0;
        puVar28[0x6f] = 0;
        puVar28[0x70] = "agl::TextureData";
        *(undefined4 *)(puVar28 + 0x71) = 0x10000;
        *(undefined4 *)(puVar28 + 0x74) = 0xff;
        iVar17 = 2;
        *(undefined4 *)((long)puVar28 + 0x3a4) = 0;
        puVar28[0x5d] = puVar4;
        puVar28[0x75] = 0x80000000000;
        puVar28[0x78] = 0;
        puVar28[0x77] = 0;
        puVar28[0x76] = 0;
        *(undefined4 *)(local_108 + (long)(int)uVar46 * 0xa9 + 0xa7) = 2;
        local_108[(long)(int)uVar46 * 0xa9 + 0xa8] = (ulong)local_c0;
LAB_03a275d4:
        iVar54 = 0;
        do {
          lVar49 = *plVar32;
          if (lVar49 == 0) {
            puVar28 = malloc(0xa0);
          }
          else {
            plVar26 = param_3;
            if (param_3 == (long *)0x0) {
              lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar26 = (long *)(lVar49 + 8);
              if (lVar25 != 0) {
                plVar26 = (long *)(lVar25 + 0xa8);
              }
              plVar26 = (long *)*plVar26;
            }
            puVar28 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0xa0,8);
          }
          plVar26 = local_c0 + (long)iVar54 * 0x3c;
          *(undefined4 *)(puVar28 + 10) = 0xffffffff;
          puVar28[8] = 0;
          puVar28[9] = 0;
          puVar28[0x11] = 0;
          puVar28[0x12] = "agl::TextureData";
          puVar28[6] = 0;
          puVar28[7] = 0;
          *(undefined4 *)(puVar28 + 0x13) = 0x10000;
          puVar28[4] = 0;
          puVar28[5] = 0;
          puVar28[2] = 0;
          puVar28[3] = 0;
          *puVar28 = 0;
          puVar28[1] = 0;
          puVar28[0xb] = 0;
          puVar28[0xc] = 0;
          puVar28[0xd] = 0;
          puVar28[0xe] = 0;
          puVar28[0xf] = 0;
          puVar28[0x10] = 0;
          *plVar26 = (long)puVar28;
          FUN_0390a734(puVar28,1,0x2e,1,1,1,1,1,0,1);
          lVar49 = *plVar32;
          uVar8 = *(undefined4 *)(*plVar26 + 0x3c);
          iVar5 = *(int *)(*plVar26 + 0x40);
          if (lVar49 == 0) {
            plVar29 = malloc(0x38);
          }
          else {
            plVar29 = param_3;
            if (param_3 == (long *)0x0) {
              lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar29 = (long *)(lVar49 + 8);
              if (lVar25 != 0) {
                plVar29 = (long *)(lVar25 + 0xa8);
              }
              plVar29 = (long *)*plVar29;
            }
            plVar29 = (long *)(**(code **)(*plVar29 + 0x30))(plVar29,0x38,8);
          }
          bVar34 = 0;
          plVar29[6] = 0;
          plVar53 = plVar29 + 1;
          *plVar53 = 0;
          *(undefined2 *)((long)plVar29 + 0x2a) = 0;
          plVar29[2] = 0;
          plVar29[3] = 0;
          plVar29[4] = 0;
          *(undefined1 *)(plVar29 + 5) = 0;
          *plVar29 = (long)puVar1;
          plVar31 = param_3;
          if (param_3 == (long *)0x0) {
            lVar25 = *plVar32;
            lVar49 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar31 = (long *)(lVar25 + 8);
            if (lVar49 != 0) {
              plVar31 = (long *)(lVar49 + 0xa8);
            }
            plVar31 = (long *)*plVar31;
            bVar34 = *(byte *)(plVar29 + 5);
          }
          plVar29[6] = 0;
          *(undefined2 *)((long)plVar29 + 0x2a) = 0;
          *(byte *)(plVar29 + 5) = bVar34 & 0xfe;
          *plVar53 = 0;
          plVar29[2] = 0;
          plVar29[3] = 0;
          plVar29[4] = 0;
          if (iVar5 == 0) {
            local_90 = 0;
            *(undefined2 *)((long)plVar29 + 0x2a) = 8;
            local_88 = 0;
            iStack_8c = 0;
          }
          else {
            FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar29,plVar31,iVar5,uVar8,8);
            *(undefined2 *)((long)plVar29 + 0x2a) = 8;
            local_88 = plVar29[3];
            local_90 = 0;
            if (plVar29[4] != 0) {
              local_90 = (int)*plVar53 - *(int *)(plVar29[4] + 0x10);
            }
            if (local_88 == 0) {
              iStack_8c = 0;
            }
            else {
              iStack_8c = *(int *)(local_88 + 0x104);
            }
          }
          *(int *)(local_c0 + (long)iVar54 * 0x3c + 1) = local_90;
          *(int *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0xc) = iStack_8c;
          local_c0[(long)iVar54 * 0x3c + 2] = local_88;
          local_c0[(long)iVar54 * 0x3c + 3] = plVar29;
          piVar48 = (int *)*plVar26;
          *piVar48 = local_90;
          piVar48[1] = iStack_8c;
          *(long *)(piVar48 + 2) = local_88;
          *(long **)(piVar48 + 4) = plVar29;
          if ((*(byte *)((long)piVar48 + 0x4e) >> 1 & 1) == 0) {
            bVar33 = false;
          }
          else {
            bVar33 = 0x11 < *(ushort *)(piVar48 + 0x26) &&
                     *(ushort *)(piVar48 + 0x26) - 0x59 < 0xffffffd6;
          }
          plStack_80 = plVar29;
          FUN_038fd3e0(piVar48 + 0x14,&local_90,piVar48 + 0xc,0,*(undefined8 *)(piVar48 + 0x24),
                       bVar33,1);
          puVar39 = (uint *)*plVar26;
          uVar24 = *puVar39;
          lVar49 = 0;
          if (*(long *)(puVar39 + 2) != 0) {
            lVar49 = (**(code **)PTR_DAT_04bb2cd8)();
            puVar39 = (uint *)*plVar26;
          }
          memset((void *)(lVar49 + (ulong)uVar24),0,(ulong)puVar39[0x10]);
          puVar52 = (undefined4 *)*plVar26;
          lVar49 = *(long *)(puVar52 + 2);
          if (lVar49 != 0) {
            uVar8 = puVar52[0x10];
            uVar9 = *puVar52;
            uVar24 = (**(code **)PTR_DAT_04bcf030)(lVar49);
            if ((uVar24 >> 2 & 1) != 0) {
              (**(code **)PTR_DAT_04bcf350)(lVar49,uVar9,uVar8);
            }
          }
          lVar49 = *(long *)(puVar52 + 8);
          if (lVar49 != 0) {
            uVar8 = puVar52[6];
            uVar9 = puVar52[0x11];
            uVar24 = (**(code **)PTR_DAT_04bcf030)(lVar49);
            if ((uVar24 >> 2 & 1) != 0) {
              (**(code **)PTR_DAT_04bcf350)(lVar49,uVar8,uVar9);
            }
          }
          puVar52 = (undefined4 *)*plVar26;
          *(undefined4 *)(local_c0 + (long)iVar54 * 0x3c + 4) = *puVar52;
          *(undefined4 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x24) = puVar52[1];
          local_c0[(long)iVar54 * 0x3c + 5] = *(undefined8 *)(puVar52 + 2);
          local_c0[(long)iVar54 * 0x3c + 6] = *(undefined8 *)(puVar52 + 4);
          *(undefined4 *)(local_c0 + (long)iVar54 * 0x3c + 7) = puVar52[6];
          *(undefined4 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x3c) = puVar52[7];
          local_c0[(long)iVar54 * 0x3c + 8] = *(undefined8 *)(puVar52 + 8);
          local_c0[(long)iVar54 * 0x3c + 9] = *(undefined8 *)(puVar52 + 10);
          uVar30 = *(undefined8 *)(puVar52 + 0xc);
          uVar6 = *(undefined8 *)(puVar52 + 0xe);
          uVar45 = *(undefined8 *)(puVar52 + 0x10);
          *(undefined8 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x67) =
               *(undefined8 *)((long)puVar52 + 0x47);
          local_c0[(long)iVar54 * 0x3c + 0xb] = uVar6;
          local_c0[(long)iVar54 * 0x3c + 0xc] = uVar45;
          local_c0[(long)iVar54 * 0x3c + 10] = uVar30;
          FUN_038fd1e0(local_c0 + (long)iVar54 * 0x3c + 0xe);
          FUN_038fd2f0(local_c0 + (long)iVar54 * 0x3c + 0xe,puVar52 + 0x14);
          uVar8 = puVar52[0x26];
          local_c0[(long)iVar54 * 0x3c + 0x16] = *(undefined8 *)(puVar52 + 0x24);
          puVar39 = (uint *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0xf4);
          *(undefined4 *)(local_c0 + (long)iVar54 * 0x3c + 0x17) = uVar8;
          do {
            cVar12 = '\x01';
            bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
            if (bVar33) {
              *puVar39 = *puVar39 | 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          *(undefined2 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0xe4) = 0;
          *(undefined1 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0xe6) = 1;
          do {
            cVar12 = '\x01';
            bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
            if (bVar33) {
              *puVar39 = *puVar39 & 0xfffffffb | 4;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          *(undefined2 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0xe7) = 0x101;
          *(undefined1 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0xe9) = 1;
          do {
            cVar12 = '\x01';
            bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
            if (bVar33) {
              *puVar39 = *puVar39 & 0xfffffffd | 2;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          puVar52 = (undefined4 *)*plVar26;
          cVar12 = *(char *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x1be);
          sVar10 = *(short *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x1bc);
          plVar26 = local_c0 + (long)iVar54 * 0x3c + 0x20;
          *(undefined4 *)(local_c0 + (long)iVar54 * 0x3c + 0x21) = *puVar52;
          *(undefined4 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x10c) = puVar52[1];
          local_c0[(long)iVar54 * 0x3c + 0x22] = *(undefined8 *)(puVar52 + 2);
          local_c0[(long)iVar54 * 0x3c + 0x23] = *(undefined8 *)(puVar52 + 4);
          *(undefined4 *)(local_c0 + (long)iVar54 * 0x3c + 0x24) = puVar52[6];
          *(undefined4 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x124) = puVar52[7];
          local_c0[(long)iVar54 * 0x3c + 0x25] = *(undefined8 *)(puVar52 + 8);
          local_c0[(long)iVar54 * 0x3c + 0x26] = *(undefined8 *)(puVar52 + 10);
          uVar45 = *(undefined8 *)(puVar52 + 0x10);
          uVar30 = *(undefined8 *)(puVar52 + 0xc);
          uVar6 = *(undefined8 *)(puVar52 + 0xe);
          *(undefined8 *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x14f) =
               *(undefined8 *)((long)puVar52 + 0x47);
          local_c0[(long)iVar54 * 0x3c + 0x28] = uVar6;
          local_c0[(long)iVar54 * 0x3c + 0x29] = uVar45;
          local_c0[(long)iVar54 * 0x3c + 0x27] = uVar30;
          FUN_038fd1e0(local_c0 + (long)iVar54 * 0x3c + 0x2b);
          FUN_038fd2f0(local_c0 + (long)iVar54 * 0x3c + 0x2b,puVar52 + 0x14);
          uVar8 = puVar52[0x26];
          local_c0[(long)iVar54 * 0x3c + 0x33] = *(undefined8 *)(puVar52 + 0x24);
          puVar39 = (uint *)(local_c0 + (long)iVar54 * 0x3c + 0x37);
          *(undefined4 *)(local_c0 + (long)iVar54 * 0x3c + 0x34) = uVar8;
          do {
            cVar13 = '\x01';
            bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
            if (bVar33) {
              *puVar39 = *puVar39 & 0xfffffffb | 4;
              cVar13 = ExclusiveMonitorsStatus();
            }
            plVar32 = (long *)PTR_DAT_04bb2698;
          } while (cVar13 != '\0');
          if (*(short *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x1bc) != sVar10) {
            do {
              cVar13 = '\x01';
              bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
              if (bVar33) {
                *puVar39 = *puVar39 & 0xfffffffd | 2;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            *(short *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x1bc) = sVar10;
          }
          if (*(char *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x1be) != cVar12) {
            do {
              cVar13 = '\x01';
              bVar33 = (bool)ExclusiveMonitorPass(puVar39,0x10);
              if (bVar33) {
                *puVar39 = *puVar39 | 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            *(char *)((long)local_c0 + (long)iVar54 * 0x1e0 + 0x1be) = cVar12;
          }
          (**(code **)(*plVar26 + 0x10))(plVar26);
          (local_108 + (long)(int)uVar46 * 0xa9 + 0x9e)[iVar54] = (ulong)plVar26;
          iVar54 = iVar54 + 1;
        } while (iVar17 != iVar54);
      }
      else {
        plVar26 = param_3;
        if (param_3 == (long *)0x0) {
          lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar26 = (long *)(lVar49 + 8);
          if (lVar25 != 0) {
            plVar26 = (long *)(lVar25 + 0xa8);
          }
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) goto LAB_03a275b0;
        }
        puVar28 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x3c8,8);
        if (puVar28 != (undefined8 *)0x0) goto LAB_03a27470;
LAB_03a275b0:
        iVar17 = (int)local_108[(long)(int)uVar46 * 0xa9 + 0xa7];
        if (iVar17 != 0) {
          local_c0 = (undefined8 *)local_108[(long)(int)uVar46 * 0xa9 + 0xa8];
          goto LAB_03a275d4;
        }
      }
      uVar40 = local_108[(long)(int)uVar46 * 0xa9 + 0x9e];
      uVar11 = *(ushort *)(uVar40 + 0x3a);
      uVar14 = *(ushort *)(uVar40 + 0x38) >> (ulong)(*(byte *)(uVar40 + 0xbe) & 0x1f);
      uVar15 = uVar11 >> (ulong)(*(byte *)(uVar40 + 0xbe) & 0x1f);
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      if (*(short *)(uVar40 + 0x42) != 3) {
        uVar11 = 1;
      }
      fVar56 = (float)uVar14;
      if (uVar11 <= uVar15) {
        uVar11 = uVar15;
      }
      fVar58 = (float)uVar11;
      local_108[(long)(int)uVar46 * 0xa9 + 0x9c] = 0;
      *(float *)(local_108 + (long)(int)uVar46 * 0xa9 + 0x9d) = fVar56;
      *(float *)((long)local_108 + (long)(int)uVar46 * 0x548 + 0x4ec) = fVar58;
      *(float *)(local_108 + (long)(int)uVar46 * 0xa9 + 0x9b) = fVar56;
      *(float *)((long)local_108 + (long)(int)uVar46 * 0x548 + 0x4dc) = fVar58;
      uVar40 = local_108[(long)(int)uVar46 * 0xa9 + 0x98];
      if ((uint)uVar40 < 6) {
        local_108[(long)(int)uVar46 * 0xa9 + 0x96] = 0;
        fVar57 = fVar58;
        if ((1 << (ulong)((uint)uVar40 & 0x1f) & 0x39U) == 0) {
          fVar57 = fVar56;
          fVar56 = fVar58;
        }
        *(float *)(local_108 + (long)(int)uVar46 * 0xa9 + 0x97) = fVar56;
        *(float *)((long)local_108 + (long)(int)uVar46 * 0x548 + 0x4bc) = fVar57;
      }
      uVar46 = uVar46 + 1;
    } while (param_2 != uVar46);
  }
  fVar56 = *(float *)(param_1 + 0x364);
  *(undefined4 *)(param_1 + 0x370) = 0x100;
  plVar32 = param_3;
  if (param_3 == (long *)0x0) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    lVar49 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar32 = (long *)(lVar25 + 8);
    if (lVar49 != 0) {
      plVar32 = (long *)(lVar49 + 0xa8);
    }
    plVar32 = (long *)*plVar32;
  }
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(byte *)(param_1 + 0x580) = *(byte *)(param_1 + 0x580) & 0xfe;
  puVar4 = PTR_DAT_04bd0fa8;
  *(undefined2 *)(param_1 + 0x582) = 0;
  FUN_038f8590(*(undefined8 *)puVar4,param_1 + 0x558,plVar32,0xc00,8,0);
  *(undefined2 *)(param_1 + 0x582) = 0;
  plVar32 = param_3;
  if (param_3 == (long *)0x0) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    lVar49 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar32 = (long *)(lVar25 + 8);
    if (lVar49 != 0) {
      plVar32 = (long *)(lVar49 + 0xa8);
    }
    plVar32 = (long *)*plVar32;
  }
  uVar30 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined2 *)(param_1 + 0x6da) = 0;
  *(byte *)(param_1 + 0x6d8) = *(byte *)(param_1 + 0x6d8) & 0xfe;
  FUN_038f8590(uVar30,param_1 + 0x6b0,plVar32,0x200,8,0);
  *(undefined2 *)(param_1 + 0x6da) = 0;
  FUN_0390e390(param_1 + 0x378,3,param_3);
  FUN_03a27fc0(fVar56 * 3.1415927,param_1 + 0x370,0x100,8);
  FUN_03a27fc0(*(float *)(param_1 + 0x364) * 3.1415927,param_1 + 0x370,
               *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x35c));
  lVar49 = param_1 + 0x748;
  plVar32 = param_3;
  if (param_3 == (long *)0x0) {
    lVar51 = *(long *)PTR_DAT_04bb2698;
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_00,0)
    ;
    plVar32 = (long *)(lVar51 + 8);
    if (lVar25 != 0) {
      plVar32 = (long *)(lVar25 + 0xa8);
    }
    plVar32 = (long *)*plVar32;
  }
  uVar30 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x958) = 0;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined8 *)(param_1 + 0x938) = 0;
  *(undefined8 *)(param_1 + 0x940) = 0;
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined2 *)(param_1 + 0x952) = 0;
  *(byte *)(param_1 + 0x950) = *(byte *)(param_1 + 0x950) & 0xfe;
  FUN_038f8590(uVar30,param_1 + 0x928,plVar32,4,4,0);
  *(undefined2 *)(param_1 + 0x952) = 0;
  plVar32 = param_3;
  if (param_3 == (long *)0x0) {
    lVar51 = *(long *)PTR_DAT_04bb2698;
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_01,0)
    ;
    plVar32 = (long *)(lVar51 + 8);
    if (lVar25 != 0) {
      plVar32 = (long *)(lVar25 + 0xa8);
    }
    plVar32 = (long *)*plVar32;
  }
  uVar30 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0xab0) = 0;
  *(undefined8 *)(param_1 + 0xa88) = 0;
  *(undefined8 *)(param_1 + 0xa90) = 0;
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0xaa0) = 0;
  *(undefined2 *)(param_1 + 0xaaa) = 0;
  *(byte *)(param_1 + 0xaa8) = *(byte *)(param_1 + 0xaa8) & 0xfe;
  FUN_038f8590(uVar30,param_1 + 0xa80,plVar32,2,4,0);
  *(undefined2 *)(param_1 + 0xaaa) = 0;
  FUN_0390e390(lVar49,1,param_3);
  lVar51 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x940));
  lVar25 = 0;
  if (*(long *)(param_1 + 0x948) != 0) {
    lVar25 = *(long *)(param_1 + 0x930) - *(long *)(*(long *)(param_1 + 0x948) + 0x10);
  }
  *(undefined4 *)(lVar51 + lVar25) = 0;
  local_a0 = *(long *)(param_1 + 0x940);
  local_a8 = 0;
  if (*(long *)(param_1 + 0x948) != 0) {
    local_a8 = *(int *)(param_1 + 0x930) - *(int *)(*(long *)(param_1 + 0x948) + 0x10);
  }
  local_a4 = 0;
  if (local_a0 != 0) {
    local_a4 = *(undefined4 *)(local_a0 + 0x104);
  }
  lStack_98 = param_1 + 0x928;
  FUN_0390ebc0(param_1 + 0x960,&local_a8,4,4);
  *(undefined8 *)(param_1 + 0x998) = 0xb;
  *(undefined2 *)(param_1 + 0x9a0) = 1;
  FUN_0390e4c0(lVar49,0,param_1 + 0x960,0);
  FUN_0390e640(lVar49);
  local_88 = *(long *)(param_1 + 0xa98);
  local_90 = 0;
  if (*(long *)(param_1 + 0xaa0) != 0) {
    local_90 = *(int *)(param_1 + 0xa88) - *(int *)(*(long *)(param_1 + 0xaa0) + 0x10);
  }
  if (local_88 == 0) {
    iStack_8c = 0;
  }
  else {
    iStack_8c = *(undefined4 *)(local_88 + 0x104);
  }
  plStack_80 = (long *)(param_1 + 0xa80);
  FUN_03901480(param_1 + 0xab8,&local_90,1,1);
  *(undefined4 *)(param_1 + 0xac4) = 0;
  return;
}

