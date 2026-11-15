
void FUN_021def90(long param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 local_18;
  undefined2 local_a;
  undefined6 uStack_8;
  
  if (((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0x508), uVar2 < 10)) &&
     ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
      (&DAT_053fea30)[(ulong)uVar2 * 0xba0] =
           (&DAT_053fea30)[(ulong)uVar2 * 0xba0] & 0xfe | param_2 & 1;
      return;
    }
    lVar3 = *(long *)PTR_DAT_04bb3968;
    lVar4 = lVar3 + 0xe18 + (ulong)uVar2 * 0x28;
    pbVar5 = (byte *)(lVar4 + 8);
    if (*pbVar5 < 100) {
      lVar1 = *(long *)pbVar5;
      bVar6 = 0x10;
      if ((param_2 & 1) == 0) {
        bVar6 = 0;
      }
      uStack_8 = (undefined6)((ulong)*(long *)(lVar4 + 0x16) >> 0x10);
      local_a = (undefined2)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x30);
      local_18._4_4_ = (undefined4)((ulong)lVar1 >> 0x20);
      local_18._0_4_ = CONCAT13((byte)((ulong)lVar1 >> 0x18) & 0xcf | bVar6,(int3)lVar1);
      if (lVar1 != local_18 || *(long *)(lVar4 + 0x16) != CONCAT62(uStack_8,local_a)) {
        *(long *)pbVar5 = local_18;
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
        *(ulong *)(lVar4 + 0x16) = CONCAT62(uStack_8,local_a);
        *(undefined1 *)(lVar3 + 0xe18 + (ulong)uVar2 * 0x28 + 0x1e) = 1;
      }
    }
  }
  return;
}

