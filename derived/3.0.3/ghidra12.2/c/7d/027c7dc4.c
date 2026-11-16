
undefined8 FUN_027c7dc4(long param_1,ushort *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort local_24;
  undefined1 local_22;
  
  puVar2 = PTR_DAT_04bc27f0;
  uVar4 = (ulong)(byte)*param_2;
  if (0x22 < uVar4) {
    return 1;
  }
  if (((byte)PTR_DAT_04bc27f0[uVar4] < *(byte *)((long)param_2 + 1)) ||
     (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)((long)param_2 + 1) & 0x1f) & 1) == 0)) {
LAB_027c81fc:
    uVar3 = 1;
  }
  else {
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 0x2c);
    local_24 = 0x23;
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    local_24 = 0x23;
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 0x48);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    local_24 = 0x23;
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 100);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    local_24 = 0x23;
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 0x80);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    local_24 = 0x23;
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 0x9c);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    local_24 = 0x23;
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 0xb8);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    local_24 = 0x23;
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 0xd4);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    local_24 = 0x23;
    local_22 = 8;
    uVar1 = *(ushort *)(param_1 + 0xf0);
    if ((byte)(uVar1 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar1 >> 8,uVar1 & 0xff);
    }
    if ((local_24 & 0xff) < 0x23) {
      if ((((uint)(local_24 >> 8) <= (uint)(byte)puVar2[(ulong)local_24 & 0xff]) &&
          (((uint)(&DAT_053e6eb8)[(ulong)local_24 & 0xff] >> (ulong)(local_24 >> 8 & 0x1f) & 1) != 0
          )) && ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_24 >> 8 | local_24 << 8))
         ) goto LAB_027c81fc;
    }
    uVar3 = 0;
  }
  return uVar3;
}

