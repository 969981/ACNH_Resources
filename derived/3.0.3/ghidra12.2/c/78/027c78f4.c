
uint FUN_027c78f4(long param_1,ushort *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ushort *puVar6;
  ushort local_44;
  undefined1 local_42;
  
  puVar2 = PTR_DAT_04bc27f0;
  uVar3 = (ulong)(byte)*param_2;
  if (0x22 < uVar3) {
    return 0xffffffff;
  }
  if ((*(byte *)((long)param_2 + 1) <= (byte)PTR_DAT_04bc27f0[uVar3]) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)((long)param_2 + 1) & 0x1f) & 1) != 0)) {
    local_42 = 8;
    puVar6 = (ushort *)(param_1 + 0x2c);
    uVar1 = *puVar6;
    local_44 = 0x23;
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 0;
        goto LAB_027c7d78;
      }
    }
    local_44 = 0x23;
    local_42 = 8;
    uVar1 = *(ushort *)(param_1 + 0x48);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 1;
        goto LAB_027c7d78;
      }
    }
    local_44 = 0x23;
    local_42 = 8;
    uVar1 = *(ushort *)(param_1 + 100);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 2;
        goto LAB_027c7d78;
      }
    }
    local_44 = 0x23;
    local_42 = 8;
    uVar1 = *(ushort *)(param_1 + 0x80);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 3;
        goto LAB_027c7d78;
      }
    }
    local_44 = 0x23;
    local_42 = 8;
    uVar1 = *(ushort *)(param_1 + 0x9c);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 4;
        goto LAB_027c7d78;
      }
    }
    local_44 = 0x23;
    local_42 = 8;
    uVar1 = *(ushort *)(param_1 + 0xb8);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 5;
        goto LAB_027c7d78;
      }
    }
    local_44 = 0x23;
    local_42 = 8;
    uVar1 = *(ushort *)(param_1 + 0xd4);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 6;
        goto LAB_027c7d78;
      }
    }
    local_44 = 0x23;
    local_42 = 8;
    uVar1 = *(ushort *)(param_1 + 0xf0);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_44,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_44 & 0xff) < 0x23) {
      if ((((uint)(local_44 >> 8) <= (uint)(byte)puVar2[(ulong)local_44 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_44 & 0xff] >> (ulong)(local_44 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_44 >> 8 | local_44 << 8))
         ) {
        lVar4 = 7;
LAB_027c7d78:
        uVar5 = (uint)(puVar6[lVar4 * 0xe + 2] != 0xfffe);
        if (puVar6[lVar4 * 0xe + 6] != 0xfffe) {
          uVar5 = uVar5 + 1;
        }
        if (puVar6[lVar4 * 0xe + 10] != 0xfffe) {
          uVar5 = uVar5 + 1;
        }
        return uVar5;
      }
    }
  }
  return 0xffffffff;
}

