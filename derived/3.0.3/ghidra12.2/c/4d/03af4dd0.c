
void FUN_03af4dd0(long param_1,uint param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  void *pvVar18;
  int *piVar19;
  long lVar20;
  ulong *puVar21;
  ulong __size;
  uint uVar22;
  undefined *local_480;
  undefined1 *puStack_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  if (0 < (int)param_2) {
    __size = (ulong)param_2 * 0x23c0 | 8;
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      puVar17 = malloc(__size);
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar20 + 8);
        if (lVar15 != 0) {
          plVar16 = (long *)(lVar15 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_03af5378;
      }
      puVar17 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,__size,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar21 = puVar17 + 1;
      *puVar17 = (ulong)param_2;
      puVar1 = PTR_DAT_04bd0f08 + 0x10;
      puVar2 = PTR_DAT_04bd1178 + 0x10;
      puVar3 = PTR_DAT_04bd1198 + 0x10;
      puVar4 = PTR_DAT_04bd11b8 + 0x10;
      puVar17 = puVar21;
      do {
        *puVar17 = 0;
        *(undefined4 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar1;
        uVar9 = *(undefined4 *)PTR_DAT_04bd0ea8;
        *(undefined8 *)((long)puVar17 + 0x2c) = 0x3f80000000000000;
        puVar17[0xb] = 0;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0;
        puVar17[0xe] = 0;
        puVar17[0x13] = 0;
        puVar17[0xf] = 0;
        puVar17[0x10] = 0;
        *(undefined4 *)(puVar17 + 0x1f) = 0xffffffff;
        *(undefined4 *)(puVar17 + 5) = uVar9;
        puVar17[9] = 0;
        puVar17[10] = (ulong)&DAT_3f8000003f800000;
        puVar17[0x11] = 0;
        puVar17[0x12] = 0;
        puVar17[0x15] = 0;
        puVar17[0x16] = 0;
        puVar17[0x17] = 0;
        puVar17[0x18] = 0;
        puVar17[3] = 0x7f7fffff7f7fffff;
        puVar17[4] = 0xff7fffffff7fffff;
        *(undefined4 *)(puVar17 + 0x28) = 0x10000;
        puVar17[0x19] = 0;
        puVar17[0x1a] = 0;
        puVar17[0x1b] = 0;
        puVar17[0x1c] = 0;
        puVar17[7] = (ulong)puVar2;
        puVar17[8] = (ulong)&DAT_3f8000003f800000;
        puVar17[0x1d] = 0;
        puVar17[0x1e] = 0;
        puVar17[0x20] = 0;
        puVar17[0x21] = 0;
        puVar17[0x22] = 0;
        puVar17[0x23] = 0;
        puVar17[0x24] = 0;
        puVar17[0x25] = 0;
        puVar17[0x26] = 0;
        puVar17[0x27] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar17 + 0x2b) = 0xff;
        *(undefined4 *)((long)puVar17 + 0x15c) = 0;
        puVar17[0x14] = (ulong)puVar3;
        *(undefined4 *)(puVar17 + 0x3a) = 0xffffffff;
        puVar17[0x41] = 0;
        puVar17[0x42] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar17 + 0x43) = 0x10000;
        puVar17[0x2c] = 0x80000000000;
        puVar17[0x2d] = 0;
        puVar17[0x2e] = 0;
        puVar17[0x2f] = 0;
        puVar17[0x30] = 0;
        puVar17[0x31] = 0;
        puVar17[0x32] = 0;
        puVar17[0x33] = 0;
        puVar17[0x34] = 0;
        puVar17[0x35] = 0;
        puVar17[0x36] = 0;
        puVar17[0x37] = 0;
        puVar17[0x38] = 0;
        puVar17[0x39] = 0;
        puVar17[0x3f] = 0;
        puVar17[0x40] = 0;
        puVar17[0x3d] = 0;
        puVar17[0x3e] = 0;
        puVar17[0x3b] = 0;
        puVar17[0x3c] = 0;
        FUN_0390cee0(puVar17 + 0x44);
        FUN_03afae80(puVar17 + 0x61);
        FUN_03afae80(puVar17 + 0x159);
        FUN_03afae80();
        puVar17[0x34a] = (ulong)&DAT_3f8000003f800000;
        puVar17[0x34b] = 0;
        puVar17[0x34c] = (ulong)&DAT_3f8000003f800000;
        puVar17[0x349] = (ulong)puVar2;
        puVar17[0x34d] = 0;
        puVar17[0x34e] = 0;
        puVar17[0x34f] = 0;
        puVar17[0x350] = 0;
        puVar17[0x351] = 0;
        puVar17[0x352] = 0;
        puVar17[0x353] = 0;
        puVar17[0x354] = 0;
        puVar17[0x355] = 0;
        puVar17[0x357] = 0;
        puVar17[0x358] = 0;
        puVar17[0x359] = 0;
        puVar17[0x35a] = 0;
        puVar17[0x35b] = 0;
        puVar17[0x35c] = 0;
        puVar17[0x35d] = 0;
        puVar17[0x35e] = 0;
        puVar17[0x35f] = 0;
        puVar17[0x360] = 0;
        *(undefined4 *)(puVar17 + 0x361) = 0xffffffff;
        puVar17[0x362] = 0;
        puVar17[0x363] = 0;
        puVar17[0x364] = 0;
        puVar17[0x365] = 0;
        puVar17[0x366] = 0;
        puVar17[0x367] = 0;
        puVar17[0x368] = 0;
        puVar17[0x369] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar17 + 0x36a) = 0x10000;
        *(undefined4 *)(puVar17 + 0x36d) = 0xff;
        puVar17[0x36e] = 0x80000000000;
        *(undefined4 *)((long)puVar17 + 0x1b6c) = 0;
        puVar17[0x356] = (ulong)puVar3;
        puVar17[0x36f] = 0;
        puVar17[0x370] = 0;
        puVar17[0x371] = 0;
        FUN_0390cee0(puVar17 + 0x373);
        puVar17[0x38f] = (ulong)puVar1;
        puVar14 = PTR_DAT_04bd0ea8;
        uVar9 = *(undefined4 *)PTR_DAT_04bd0ea8;
        puVar17[0x395] = (ulong)&DAT_3f8000003f800000;
        puVar17[0x397] = (ulong)&DAT_3f8000003f800000;
        puVar17[0x394] = (ulong)puVar2;
        *(undefined8 *)((long)puVar17 + 0x1c94) = 0x3f80000000000000;
        puVar17[0x390] = 0x7f7fffff7f7fffff;
        puVar17[0x391] = 0xff7fffffff7fffff;
        puVar17[0x396] = 0;
        puVar17[0x398] = 0;
        puVar17[0x399] = 0;
        puVar17[0x39a] = 0;
        puVar17[0x39b] = 0;
        puVar17[0x39c] = 0;
        puVar17[0x39d] = 0;
        puVar17[0x39e] = 0;
        puVar17[0x39f] = 0;
        puVar17[0x3a0] = 0;
        *(undefined4 *)(puVar17 + 0x392) = uVar9;
        puVar17[0x3a2] = 0;
        *(undefined4 *)(puVar17 + 0x3b5) = 0x10000;
        puVar17[0x3a3] = 0;
        puVar17[0x3a4] = 0;
        puVar17[0x3a5] = 0;
        puVar17[0x3a6] = 0;
        puVar17[0x3a7] = 0;
        puVar17[0x3a8] = 0;
        puVar17[0x3a9] = 0;
        puVar17[0x3aa] = 0;
        puVar17[0x3ab] = 0;
        *(undefined4 *)(puVar17 + 0x3ac) = 0xffffffff;
        puVar17[0x3ad] = 0;
        puVar17[0x3ae] = 0;
        puVar17[0x3af] = 0;
        puVar17[0x3b0] = 0;
        puVar17[0x3b1] = 0;
        puVar17[0x3b2] = 0;
        puVar17[0x3b3] = 0;
        puVar17[0x3b4] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar17 + 0x3b8) = 0xff;
        puVar17[0x3b9] = 0x80000000000;
        *(undefined4 *)((long)puVar17 + 0x1dc4) = 0;
        puVar17[0x3a1] = (ulong)puVar3;
        puVar17[0x3ba] = 0;
        puVar17[0x3bb] = 0;
        puVar17[0x3bc] = 0;
        FUN_0390cee0(puVar17 + 0x3be);
        puVar17[0x3da] = (ulong)puVar1;
        uVar9 = *(undefined4 *)puVar14;
        *(undefined8 *)((long)puVar17 + 0x1eec) = 0x3f80000000000000;
        puVar17[0x3f2] = (ulong)"agl::TextureData";
        puVar17[0x419] = (ulong)"agl::TextureData";
        puVar17[0x3db] = 0x7f7fffff7f7fffff;
        puVar17[0x3dc] = 0xff7fffffff7fffff;
        puVar17[0x3e0] = 0;
        puVar17[0x3e1] = 0;
        *(undefined4 *)(puVar17 + 0x3dd) = uVar9;
        puVar17[0x3e2] = 0;
        puVar17[0x3e3] = 0;
        puVar17[0x3e4] = 0;
        puVar17[0x3e5] = 0;
        puVar17[0x3e6] = 0;
        puVar17[999] = 0;
        puVar17[1000] = 0;
        puVar17[0x3e9] = 0;
        *(undefined4 *)(puVar17 + 0x3ea) = 0xffffffff;
        puVar17[0x3eb] = 0;
        puVar17[0x3f6] = (ulong)puVar4;
        puVar17[0x3ec] = 0;
        *(undefined4 *)(puVar17 + 0x3fd) = 0x10001;
        puVar17[0x3ed] = 0;
        puVar17[0x3ee] = 0;
        puVar17[0x3ef] = 0;
        puVar17[0x3f0] = 0;
        puVar17[0x3f1] = 0;
        *(undefined4 *)(puVar17 + 0x3f3) = 0x10000;
        puVar17[0x3f7] = 0;
        puVar17[0x3f8] = 0;
        puVar17[0x3f9] = 0;
        puVar17[0x3fa] = 0;
        *(undefined1 *)((long)puVar17 + 0x1fec) = 0;
        puVar17[0x3fb] = 0;
        puVar17[0x3fc] = 0;
        puVar17[0x404] = 0;
        puVar17[0x407] = 0;
        puVar17[0x408] = 0;
        puVar17[0x409] = 0;
        puVar17[0x40a] = 0;
        puVar17[0x40b] = 0;
        puVar17[0x40c] = 0;
        puVar17[0x40d] = 0;
        puVar17[0x40e] = 0;
        puVar17[0x40f] = 0;
        puVar17[0x410] = 0;
        *(undefined4 *)(puVar17 + 0x411) = 0xffffffff;
        puVar17[0x418] = 0;
        puVar17[0x417] = 0;
        puVar17[0x416] = 0;
        puVar17[0x415] = 0;
        puVar17[0x414] = 0;
        puVar17[0x413] = 0;
        puVar17[0x412] = 0;
        *(undefined4 *)(puVar17 + 0x41a) = 0x10000;
        *(undefined4 *)(puVar17 + 0x41d) = 0xff;
        *(undefined4 *)((long)puVar17 + 0x20ec) = 0;
        puVar17[0x406] = (ulong)puVar3;
        puVar17[0x41e] = 0x80000000000;
        puVar17[0x421] = 0;
        puVar17[0x420] = 0;
        puVar17[0x41f] = 0;
        FUN_0390cee0(puVar17 + 0x422);
        puVar17[0x449] = 0;
        puVar17[0x448] = 0;
        puVar17[0x447] = 0;
        puVar17[0x446] = 0;
        puVar17[0x445] = 0;
        puVar17[0x444] = 0;
        puVar17[0x443] = 0;
        puVar17[0x442] = 0;
        puVar17[0x441] = 0;
        puVar17[0x440] = 0;
        *(undefined4 *)(puVar17 + 0x44a) = 0xffffffff;
        puVar17[1099] = 0;
        puVar17[0x44c] = 0;
        puVar17[0x44d] = 0;
        puVar17[0x44e] = 0;
        puVar17[0x44f] = 0;
        puVar17[0x450] = 0;
        puVar17[0x451] = 0;
        puVar17[0x452] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar17 + 0x453) = 0x10000;
        *(undefined4 *)(puVar17 + 0x456) = 0xff;
        *(undefined4 *)((long)puVar17 + 0x22b4) = 0;
        puVar17[0x43f] = (ulong)puVar3;
        puVar17[0x457] = 0x80000000000;
        puVar17[0x458] = 0;
        puVar17[0x459] = 0;
        puVar17[0x45a] = 0;
        FUN_0390cee0(puVar17 + 0x45b);
        puVar17 = puVar17 + 0x478;
      } while (puVar17 != puVar21 + (ulong)param_2 * 0x478);
      *(uint *)(param_1 + 8) = param_2;
      *(ulong **)(param_1 + 0x10) = puVar21;
      goto joined_r0x03af5384;
    }
  }
LAB_03af5378:
  param_2 = *(uint *)(param_1 + 8);
  puVar21 = *(ulong **)(param_1 + 0x10);
joined_r0x03af5384:
  if (param_2 != 0) {
    uVar22 = 0;
    do {
      puVar17 = puVar21 + (long)(int)uVar22 * 0x478;
      puVar17[0x60] = (ulong)&DAT_3f8000003f800000;
      puVar17[0x3df] = 0;
      puVar17[0x3f4] = (ulong)&DAT_3f8000003f800000;
      *(undefined4 *)puVar17 = 0;
      puVar17[0xb] = (ulong)(puVar17 + 0x14);
      if (uVar22 == 0) {
        FUN_0390d714(puVar17 + 0x3f6,4,param_3);
        piVar19 = (int *)(*(long *)puVar21[0x3f7] +
                         (ulong)*(ushort *)((long)puVar21[0x3f7] + 10) * 0xc);
        puVar5 = puVar21 + 0x3fc;
        *(undefined1 *)(piVar19 + 2) = 6;
        *piVar19 = 1;
        *(undefined2 *)((long)piVar19 + 6) = 4;
        uVar8 = (int)puVar21[0x3fc] + 0xfU & 0xfffffff0;
        *(uint *)(puVar21 + 0x3fc) = uVar8;
        *(short *)(piVar19 + 1) = (short)uVar8;
        *(uint *)(puVar21 + 0x3fc) =
             (int)puVar21[0x3fc] + (uint)*(ushort *)((long)piVar19 + 6) * *piVar19 * 4;
        *(short *)(puVar21[0x3f7] + 10) = *(short *)(puVar21[0x3f7] + 10) + 1;
        plVar16 = (long *)puVar21[0x3f7];
        uVar11 = *(ushort *)((long)plVar16 + 10);
        if (uVar11 == *(ushort *)(plVar16 + 1)) {
          *(uint *)puVar5 = (uint)*puVar5 + 0x1f & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar16 + 10);
        }
        puVar6 = puVar21 + 0x3f7;
        piVar19 = (int *)(*plVar16 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar19 + 2) = 6;
        *piVar19 = 1;
        *(undefined2 *)((long)piVar19 + 6) = 4;
        uVar8 = (uint)*puVar5 + 0xf & 0xfffffff0;
        *(uint *)puVar5 = uVar8;
        *(short *)(piVar19 + 1) = (short)uVar8;
        *(uint *)puVar5 = (uint)*puVar5 + (uint)*(ushort *)((long)piVar19 + 6) * *piVar19 * 4;
        *(short *)(*puVar6 + 10) = *(short *)(*puVar6 + 10) + 1;
        plVar16 = (long *)*puVar6;
        uVar11 = *(ushort *)((long)plVar16 + 10);
        if (uVar11 == *(ushort *)(plVar16 + 1)) {
          *(uint *)puVar5 = (uint)*puVar5 + 0x1f & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar16 + 10);
        }
        piVar19 = (int *)(*plVar16 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar19 + 2) = 6;
        *piVar19 = 1;
        *(undefined2 *)((long)piVar19 + 6) = 4;
        uVar8 = (uint)*puVar5 + 0xf & 0xfffffff0;
        *(uint *)puVar5 = uVar8;
        *(short *)(piVar19 + 1) = (short)uVar8;
        *(uint *)puVar5 = (uint)*puVar5 + (uint)*(ushort *)((long)piVar19 + 6) * *piVar19 * 4;
        *(short *)(*puVar6 + 10) = *(short *)(*puVar6 + 10) + 1;
        plVar16 = (long *)*puVar6;
        uVar11 = *(ushort *)((long)plVar16 + 10);
        if (uVar11 == *(ushort *)(plVar16 + 1)) {
          *(uint *)puVar5 = (uint)*puVar5 + 0x1f & 0xffffffe0;
          uVar11 = *(ushort *)((long)plVar16 + 10);
        }
        piVar19 = (int *)(*plVar16 + (ulong)uVar11 * 0xc);
        *(undefined1 *)(piVar19 + 2) = 6;
        *piVar19 = 1;
        *(undefined2 *)((long)piVar19 + 6) = 4;
        uVar8 = (uint)*puVar5 + 0xf & 0xfffffff0;
        *(uint *)puVar5 = uVar8;
        *(short *)(piVar19 + 1) = (short)uVar8;
        *(uint *)puVar5 = (uint)*puVar5 + (uint)*(ushort *)((long)piVar19 + 6) * *piVar19 * 4;
        *(short *)(*puVar6 + 10) = *(short *)(*puVar6 + 10) + 1;
        if (*(short *)(*puVar6 + 10) == *(short *)(*puVar6 + 8)) {
          *(uint *)puVar5 = (uint)*puVar5 + 0x1f & 0xffffffe0;
        }
      }
      else {
        lVar20 = *(long *)(param_1 + 0x10);
        bVar10 = *(byte *)((long)puVar21 + (long)(int)uVar22 * 0x23c0 + 0x1fec);
        puVar21[(long)(int)uVar22 * 0x478 + 0x3f7] = *(ulong *)(lVar20 + 0x1fb8);
        *(undefined4 *)(puVar21 + (long)(int)uVar22 * 0x478 + 0x3fc) =
             *(undefined4 *)(lVar20 + 0x1fe0);
        *(byte *)((long)puVar21 + (long)(int)uVar22 * 0x23c0 + 0x1fec) = bVar10 & 0xfe;
      }
      FUN_0390d990(puVar17 + 0x3f6,param_3,2,1);
      puVar21[(long)(int)uVar22 * 0x478 + 0x405] = 0x447a00003dcccccd;
      lVar20 = *(long *)PTR_DAT_04bb2698;
      if (lVar20 == 0) {
        pvVar18 = malloc(0x2068);
      }
      else {
        plVar16 = param_3;
        if (param_3 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar16 = (long *)(lVar20 + 8);
          if (lVar15 != 0) {
            plVar16 = (long *)(lVar15 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
        }
        pvVar18 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,0x2068,8);
      }
      FUN_039ce29c();
      puVar21[(long)(int)uVar22 * 0x478 + 0x3f5] = (ulong)pvVar18;
      FUN_039cf6e0(pvVar18,param_3);
      puVar21[(long)(int)uVar22 * 0x478 + 0x43e] = 0;
      puVar21[(long)(int)uVar22 * 0x478 + 0x477] = 0;
      puVar7 = (uint *)((long)puVar21 + (long)(int)uVar22 * 0x23c0 + 0x21e4);
      *(undefined2 *)((long)puVar21 + (long)(int)uVar22 * 0x23c0 + 0x21d4) = 0;
      *(undefined1 *)((long)puVar21 + (long)(int)uVar22 * 0x23c0 + 0x21d6) = 0;
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar13) {
          *puVar7 = *puVar7 | 4;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      uVar22 = uVar22 + 1;
    } while (param_2 != uVar22);
  }
  if (param_4 != 0) {
    local_6d = 0;
    local_470 = 0x400;
    puStack_478 = local_46c;
    local_46c[0] = 0;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040f1984);
  }
  return;
}

