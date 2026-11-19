
void FUN_039b7a80(long param_1,long param_2,int param_3,long param_4,undefined8 param_5,long param_6
                 )

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined *local_480;
  undefined1 *puStack_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  *(long *)(param_1 + 8) = param_2;
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0x28) + (long)param_3 * 0x78;
  *(long *)(param_1 + 0x10) = lVar8;
  *(long *)(lVar8 + 0x60) = param_1;
  FUN_039b18b0(param_1 + 0x28,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10));
  puVar3 = PTR_DAT_04bd1848;
  lVar8 = *(long *)(param_1 + 0x10);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x6c);
  if (uVar9 == 0) {
    uVar14 = 0;
  }
  else {
    lVar8 = 0;
    lVar16 = *(long *)(param_4 + 8) + *(long *)(param_4 + 0x10);
    puVar2 = PTR_DAT_04bd16b0 + 0x10;
    uVar14 = lVar16 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_4 + 0x10) = ((*(long *)(param_4 + 0x10) + uVar9 * 0x198) - lVar16) + uVar14;
    do {
      plVar13 = (long *)(uVar14 + lVar8);
      *plVar13 = (long)puVar2;
      plVar13[2] = 0;
      plVar13[0xd] = (long)(puVar3 + 0x10);
      *(undefined4 *)(plVar13 + 0xe) = 0x10000;
      *(undefined2 *)((long)plVar13 + 0x74) = 0;
      *(undefined4 *)(plVar13 + 0xf) = 0;
      plVar13[3] = 0x800000000;
      plVar13[4] = (long)(plVar13 + 5);
      FUN_038e4cec((long)plVar13 + 0x7c);
      lVar8 = lVar8 + 0x198;
      plVar13[0x1e] = 0;
      *(undefined2 *)(plVar13 + 0x1f) = 0;
      *(undefined1 *)((long)plVar13 + 0xfa) = 0;
      plVar13[0x22] = 0;
      *(undefined8 *)((long)plVar13 + 0x116) = 0;
      *(undefined4 *)(plVar13 + 0x32) = 0;
      *(undefined2 *)((long)plVar13 + 0x194) = 0xffff;
      plVar13[0x20] = 0;
      plVar13[0x21] = 0;
      plVar13[0x24] = 0;
      plVar13[0x25] = 0;
      plVar13[0x26] = 0;
      plVar13[0x27] = 0;
      plVar13[0x28] = 0;
      plVar13[0x29] = 0;
      plVar13[0x2a] = 0;
      plVar13[0x2b] = 0;
      plVar13[0x2c] = 0;
      plVar13[0x2d] = 0;
      plVar13[0x2e] = 0;
      plVar13[0x2f] = 0;
      plVar13[0x30] = 0;
      plVar13[0x31] = 0;
    } while (uVar9 * 0x198 != lVar8);
    lVar8 = *(long *)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x18) = uVar14;
  if (*(short *)(lVar8 + 0x6c) != 0) {
    lVar11 = 0;
    uVar9 = 0;
    lVar16 = 0x80;
    puVar3 = PTR_DAT_04bb2f40 + 0x10;
    do {
      lVar4 = *(long *)(param_1 + 0x18) + lVar11;
      plVar13 = (long *)(*(long *)(lVar8 + 0x38) + lVar16);
      *(long **)(lVar4 + 0x10) = plVar13 + -0x10;
      *plVar13 = lVar4;
      FUN_039f75e0(lVar4 + 0x68);
      if (param_6 != 0) {
        local_470 = 0x400;
        local_6d = 0;
        local_46c[0] = 0;
        local_480 = puVar3;
        puStack_478 = local_46c;
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png","NW_3DEditor3");
      }
      lVar8 = *(long *)(param_1 + 0x10);
      uVar9 = uVar9 + 1;
      lVar16 = lVar16 + 0xa8;
      lVar11 = lVar11 + 0x198;
    } while (uVar9 < *(ushort *)(lVar8 + 0x6c));
  }
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x6a);
  if (uVar9 == 0) {
    uVar14 = 0;
  }
  else {
    lVar16 = 0;
    uVar17 = 0;
    puVar3 = PTR_DAT_04bd16c0 + 0x10;
    puVar2 = PTR_DAT_04bb2d88 + 0x10;
    lVar8 = *(long *)(param_4 + 8) + *(long *)(param_4 + 0x10);
    uVar14 = lVar8 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_4 + 0x10) = ((*(long *)(param_4 + 0x10) + uVar9 * 0x1118) - lVar8) + uVar14;
    do {
      plVar13 = (long *)(uVar14 + uVar17 * 0x1118);
      *plVar13 = (long)puVar3;
      plVar13[1] = 0;
      lVar11 = 0x40;
      lVar8 = lVar16;
      do {
        lVar4 = uVar14 + lVar8;
        lVar8 = lVar8 + 0xe0;
        *(undefined1 *)(lVar4 + 0x40) = 0;
        lVar11 = lVar11 + -4;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined1 *)(lVar4 + 0x78) = 0;
        *(undefined1 *)(lVar4 + 0xb0) = 0;
        *(undefined1 *)(lVar4 + 0xe8) = 0;
        *(undefined8 *)(lVar4 + 0x50) = 0;
        *(undefined8 *)(lVar4 + 0x58) = 0;
        *(undefined8 *)(lVar4 + 0x88) = 0;
        *(undefined8 *)(lVar4 + 0x90) = 0;
        *(undefined8 *)(lVar4 + 0xc0) = 0;
        *(undefined8 *)(lVar4 + 200) = 0;
      } while (lVar11 != 0);
      plVar13[0x1c2] = 0;
      FUN_03972f10(plVar13 + 0x1c3,0xe);
      uVar7 = 0;
      *(undefined4 *)(plVar13 + 0x20d) = 0;
      plVar13[0x20c] = 0;
      plVar13[0x20b] = 0;
      *(undefined1 *)((long)plVar13 + 0x1103) = 0;
      plVar13[0x20a] = 0;
      plVar13[0x209] = 0;
      *(undefined1 *)((long)plVar13 + 0x1084) = 0;
      plVar13[0x20f] = (long)plVar13 + 0x1084;
      *(undefined4 *)(plVar13 + 0x210) = 0x80;
      plVar13[0x221] = 0;
      plVar13[0x20e] = (long)puVar2;
      *(undefined2 *)(plVar13 + 0x222) = 0x202;
      do {
        lVar8 = (long)(int)uVar7;
        lVar11 = (ulong)uVar7 << 0x20;
        uVar7 = uVar7 + 4;
        *(undefined1 *)((long)plVar13 + lVar8 * 0x38 + 0x42) = 0xff;
        *(undefined1 *)
         ((long)plVar13 + (long)(int)((ulong)(lVar11 + 0x100000000) >> 0x20) * 0x38 + 0x42) = 0xff;
        *(undefined1 *)
         ((long)plVar13 + (long)(int)((ulong)(lVar11 + 0x200000000) >> 0x20) * 0x38 + 0x42) = 0xff;
        *(undefined1 *)
         ((long)plVar13 + (long)(int)((ulong)(lVar11 + 0x300000000) >> 0x20) * 0x38 + 0x42) = 0xff;
      } while (uVar7 != 0x40);
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x1118;
    } while (uVar17 != uVar9);
    lVar8 = *(long *)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x20) = uVar14;
  if (*(short *)(lVar8 + 0x6a) != 0) {
    lVar16 = 0;
    lVar11 = 0;
    uVar9 = 0;
    do {
      lVar8 = *(long *)(lVar8 + 0x28) + lVar16;
      lVar4 = *(long *)(param_1 + 0x20) + lVar11;
      FUN_039b8a70(lVar4,param_1,lVar8,
                   *(long *)(param_1 + 0x18) + (ulong)*(ushort *)(lVar8 + 0x52) * 0x198,param_4,
                   param_6);
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x1118;
      lVar16 = lVar16 + 0x60;
      *(byte *)(lVar4 + 0x1110) =
           *(byte *)(lVar4 + 0x1110) & 0xfe | *(byte *)(*(long *)(param_1 + 8) + 0x2b4) >> 1 & 1;
      lVar8 = *(long *)(param_1 + 0x10);
    } while (uVar9 < *(ushort *)(lVar8 + 0x6a));
  }
  if (*(short *)(lVar8 + 0x6c) == 0) {
    iVar10 = 0;
    sVar5 = *(short *)(lVar8 + 0x6a);
  }
  else {
    uVar9 = 0;
    iVar10 = 0;
    lVar8 = 0x18c;
    uVar15 = *(undefined8 *)(param_2 + 0xa8);
    do {
      FUN_039b7fd0(param_1,uVar9 & 0xffffffff,0,0,0,uVar15,param_5);
      uVar9 = uVar9 + 1;
      piVar1 = (int *)(*(long *)(param_1 + 0x18) + lVar8);
      lVar8 = lVar8 + 0x198;
      iVar10 = *piVar1 + iVar10;
    } while (uVar9 < *(ushort *)(*(long *)(param_1 + 0x10) + 0x6c));
    sVar5 = *(short *)(*(long *)(param_1 + 0x10) + 0x6a);
  }
  if (sVar5 == 0) {
    iVar12 = 0;
  }
  else {
    lVar8 = 0;
    uVar9 = 0;
    iVar12 = 0;
    do {
      iVar6 = FUN_039b8750(*(long *)(param_1 + 0x20) + lVar8);
      uVar9 = uVar9 + 1;
      iVar12 = iVar6 + iVar12;
      lVar8 = lVar8 + 0x1118;
    } while (uVar9 < *(ushort *)(*(long *)(param_1 + 0x10) + 0x6a));
  }
  *(int *)(param_1 + 0x428) = iVar10;
  *(int *)(param_1 + 0x424) = iVar12;
  if (param_6 != 0) {
    local_6d = 0;
    local_470 = 0x400;
    local_46c[0] = 0;
    puStack_478 = local_46c;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png","NW_3DEditor2");
  }
  return;
}

