
void FUN_020a0f28(int param_1,byte param_2)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 local_48 [4];
  byte local_44 [4];
  undefined1 local_40;
  byte local_3f;
  undefined1 local_3e;
  byte local_3d;
  byte local_3c;
  int local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  lVar3 = DAT_053dda88;
  puVar2 = PTR_DAT_04bb27d0;
  if (DAT_053dda88 == 0) {
    return;
  }
  if (*(int *)(DAT_053dda88 + 0xc) != 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_020a0fbc:
    if (7 < *pbVar6) {
LAB_020a0fc8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_44[0] = *pbVar6;
        if (local_44[0] < 8) goto LAB_020a1050;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020a0fbc;
      }
      goto LAB_020a0fc8;
    }
  }
  local_44[0] = *pbVar6;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar8 + 0x473);
LAB_020a1050:
  pbVar6 = PTR_DAT_04bc1220;
  if (bVar5 != 0xff) {
    puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar1 = (uint *)(lVar8 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar6 = (byte *)(lVar8 + 0x473);
    }
  }
  local_3c = *pbVar6 >> 2 & 3;
  local_40 = 0x20;
  local_3f = (byte)(param_1 << 4) | param_2 & 0xf;
  local_3d = *pbVar6 << 6 | (byte)(*(ushort *)PTR_DAT_04bb6298 >> 4) & 0x3f;
  local_3e = (undefined1)(CONCAT24(*(ushort *)PTR_DAT_04bb6298,param_1 << 0x18) >> 0x1c);
  local_38 = param_1;
  uVar4 = FUN_020a11c0();
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_0255c138(local_44,1), (uVar4 & 1) != 0)) {
    lVar8 = **(long **)puVar2;
    bVar5 = *(byte *)(lVar8 + 0x473);
    puVar7 = PTR_DAT_04bc1220;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        puVar7 = (undefined1 *)(lVar8 + 0x473);
      }
    }
    local_48[0] = *puVar7;
    FUN_020a0a44(lVar3,&local_40,local_48,1);
    local_38 = 0;
    local_32 = 0;
    local_34 = 0xff00;
    if (-1 < DAT_053d0b30) {
      FUN_01db1df0(**(long **)puVar2 + 0x480,DAT_053d0b30,&local_38,&local_40,5,0);
    }
    *(byte *)(lVar3 + 4) = local_3d >> 6 | (local_3c & 3) << 2;
    *(int *)(lVar3 + 8) = param_1;
    *(undefined4 *)(lVar3 + 0xc) = 1;
  }
  return;
}

