
undefined8 FUN_023281fc(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  long lVar15;
  undefined **local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  undefined1 local_70;
  byte local_6f;
  undefined1 local_6e;
  long local_68;
  
  uVar8 = FUN_016e6f44();
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x21ac) = 0;
    if (*(char *)(param_1 + 0x17ac) != '\0') {
      return 0;
    }
    local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
    if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
      return 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x21ac) == '\0') {
      if (*(char *)(param_1 + 0x17ac) != '\0') {
        return 0;
      }
      if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x21ac) = 1;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x21ac) = 0;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0960);
      puVar12 = &DAT_054f0958;
      if (iVar6 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar12 = &DAT_054f0958;
    }
  }
  else {
    puVar12 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar12 = (undefined8 *)(DAT_054f5738 + 0x204) + *(byte *)(param_1 + 0x1ee8);
    }
  }
  pbVar3 = PTR_DAT_04bb32e0;
  if ((*(uint *)((long)puVar12 + 4) >> 0xf & 1) == 0) {
    local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
    if ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) != 0) {
      return 0;
    }
    pbVar1 = PTR_DAT_04bb32e0;
    if (DAT_054f5738 != 0) {
      pbVar1 = (byte *)(DAT_054f5738 + 0x11a4);
    }
    if ((ulong)*pbVar1 < 8) {
      lVar11 = *DAT_0537d558;
      if (*(byte *)(lVar11 + 0x476) < 2) {
        iVar6 = FUN_02582d8c(pbVar1,2);
        if (-1 < iVar6) {
          return 0;
        }
      }
      else {
        bVar10 = *(byte *)(lVar11 + (ulong)*pbVar1 * 4 + 0x44e);
        if ((long)(char)bVar10 != 0xffffffffffffffff) {
          pbVar1 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
          if (7 < bVar10) {
            pbVar1 = (byte *)(lVar11 + 0x48);
          }
          if ((*pbVar1 >> 3 & 1) != 0) {
            return 0;
          }
        }
      }
    }
    if (DAT_04c487d4 == -1) {
      uVar14 = 0;
    }
    else {
      local_88 = (undefined **)CONCAT44(local_88._4_4_,1);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar14 = *puVar2 >> 1 & 1;
    }
    iVar6 = FUN_016f5c40(param_1);
    puVar4 = PTR_DAT_04bb43c0;
    if (*(long *)(param_1 + 0x298) == 0) {
      puVar13 = &DAT_05586008;
    }
    else {
      lVar11 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
      puVar13 = (undefined2 *)(lVar11 + ((ulong)*(uint *)(lVar11 + 0x10) & 1) * 0x20 + 0x14);
    }
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(puVar13);
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_88 = &PTR_FUN_04a36b50;
        local_80 = *puVar13;
        local_7e = *(undefined1 *)(puVar13 + 1);
        local_7d = *(undefined1 *)((long)puVar13 + 3);
        local_7c = *(undefined4 *)(puVar13 + 2);
        local_78 = 0;
        uVar7 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar4 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(puVar13);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar7 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8);
              if (lVar11 != 0) {
                local_78 = lVar11;
              }
            }
          }
        }
        lVar11 = *(long *)PTR_DAT_04bb39b0;
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x15c) == 0)) {
          bVar5 = true;
        }
        else {
          bVar10 = *(byte *)(param_1 + 0x1ee8);
          if (*(int *)(lVar11 + 0x15c) != 0) {
            pbVar3 = (byte *)(lVar11 + 0x158);
          }
          bVar9 = *pbVar3;
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          if (7 < bVar10) {
            bVar10 = 0xff;
          }
          bVar5 = bVar9 == bVar10;
        }
        local_6f = FUN_0235a9ec(param_1);
        local_6f = local_6f & 1;
        local_6e = 1;
        local_68 = *(long *)(param_1 + 0x68) + 0x278;
        local_70 = bVar5;
        FUN_01add954(&local_88,&local_70);
      }
    }
    if (uVar14 == 0) {
      if ((((iVar6 == 0x43) && (*(uint *)(param_1 + 0x1810) < 10)) &&
          ((1 << (ulong)(*(uint *)(param_1 + 0x1810) & 0x1f) & 0x282U) != 0)) &&
         (uVar8 = FUN_024d7ccc(param_1,0,1), (uVar8 & 1) != 0)) {
        return 1;
      }
    }
    else if (((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) &&
            (uVar8 = FUN_024335dc(param_1,0), (uVar8 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

