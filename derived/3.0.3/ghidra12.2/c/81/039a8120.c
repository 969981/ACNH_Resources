
long * FUN_039a8120(long param_1,long param_2,long *param_3,long *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  char *__s;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  byte local_48;
  byte local_47;
  
  *(long *)(param_1 + 0x80) = param_2;
  lVar11 = *(long *)(param_2 + 0x20);
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar12 = *(long *)(lVar11 + 0x30);
  if (lVar12 != 0) {
    __s = (char *)param_3[1];
    if (__s == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(__s);
    }
    uVar8 = (ulong)*(ushort *)(lVar12 + 0xc);
    puVar13 = (uint *)((int *)(lVar12 + 8) + uVar8 * 4);
    uVar4 = *puVar13;
    if (*(int *)(lVar12 + 8) < (int)*puVar13) {
      do {
        uVar9 = (long)((ulong)uVar4 << 0x20) >> 0x23;
        if (uVar9 < __n) {
          uVar9 = (ulong)((byte)__s[__n + ~uVar9] >> ((ulong)uVar4 & 7)) & 1;
        }
        else {
          uVar9 = 0;
        }
        uVar8 = (ulong)*(ushort *)(lVar12 + 8 + uVar8 * 0x10 + uVar9 * 2 + 4);
        puVar13 = (uint *)(lVar12 + 8 + uVar8 * 0x10);
        bVar1 = (int)uVar4 < (int)*puVar13;
        uVar4 = *puVar13;
      } while (bVar1);
    }
    if (((__n == **(ushort **)(puVar13 + 2)) &&
        (iVar5 = memcmp(*(ushort **)(puVar13 + 2) + 1,__s,__n), iVar5 == 0)) &&
       (uVar8 = (long)puVar13 + (-0x18 - lVar12), ((uVar8 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)
       ) {
      lVar11 = *(long *)(lVar11 + 0x28) + (long)(int)(uVar8 >> 4) * 0x78;
      goto joined_r0x039a81d8;
    }
  }
  lVar11 = 0;
joined_r0x039a81d8:
  plVar6 = param_4;
  if (param_4 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar12 != 0) {
      plVar6 = (long *)(lVar12 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
  }
  plVar7 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2e8,0x20);
  plVar6 = plVar7;
  if (plVar7 != (long *)0x0) {
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[5] = 0;
    plVar7[0xe] = 0;
    plVar7[0xf] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    puVar2 = PTR_DAT_04bbda98 + 0x10;
    plVar7[4] = 0;
    *(undefined1 *)((long)plVar7 + 0xb2) = 0;
    *(undefined8 *)((long)plVar7 + 0xb4) = 0;
    plVar7[0x10] = (long)puVar2;
    plVar7[0x14] = 0xffff00000000;
    *(undefined4 *)(plVar7 + 0x15) = 0xffff;
    *(undefined2 *)((long)plVar7 + 0xac) = 0x10;
    *(undefined4 *)((long)plVar7 + 0xae) = 0xff010000;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    plVar7[6] = 0;
    plVar7[7] = (long)(plVar7 + 5);
    plVar7[10] = 0;
    plVar7[0xb] = 0;
    plVar7[0x18] = (long)puVar2;
    plVar7[0x19] = (long)&DAT_040c7886;
    puVar2 = PTR_DAT_04bd17e0 + 0x10;
    puVar3 = PTR_DAT_04bd17e0 + 0x2f8;
    *(undefined4 *)((long)plVar7 + 0x164) = 0;
    plVar7[0xc] = 0;
    plVar7[0xd] = 0;
    *(undefined4 *)(plVar7 + 0x1e) = 0;
    *(undefined4 *)(plVar7 + 0x21) = 0;
    *(undefined1 *)(plVar7 + 0x2c) = 0;
    plVar7[0x2d] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1f] = 0;
    plVar7[0x20] = 0;
    plVar7[0x22] = 0;
    plVar7[0x23] = 0;
    plVar7[0x24] = 0;
    plVar7[0x25] = 0;
    plVar7[0x26] = 0;
    plVar7[0x27] = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    plVar7[0x2a] = 0;
    plVar7[0x2b] = 0;
    *plVar7 = (long)puVar2;
    plVar7[1] = 0;
    plVar7[0x1a] = (long)puVar3;
    plVar7[0x1b] = 0;
    plVar7[0x2f] = 0;
    plVar7[0x30] = 0;
    puVar2 = PTR_DAT_04bd17e8 + 0x10;
    plVar7[0x37] = 0;
    plVar7[0x31] = (long)puVar2;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    FUN_003490b4(plVar7 + 0x38);
    local_50 = 0;
    plVar7[0x5c] = 0xff00020000;
    *(ushort *)((long)plVar7 + 0xac) = *(ushort *)((long)plVar7 + 0xac) | 6;
    local_58 = (uint)*(byte *)(param_1 + 0x282);
    uStack_54 = 0xffffffff;
    local_48 = *(byte *)(param_1 + 0x280) >> 1 & 1;
    local_47 = *(byte *)(param_1 + 0x280) >> 2 & 1;
    local_60 = lVar11;
    uVar8 = FUN_039d3d40(plVar7,&local_60,param_4);
    plVar6 = (long *)0x0;
    if ((uVar8 & 1) != 0) {
      FUN_039a8a30(param_1,plVar7,1,param_4);
      plVar6 = plVar7;
    }
  }
  return plVar6;
}

