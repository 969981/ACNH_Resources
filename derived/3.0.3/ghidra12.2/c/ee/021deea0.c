
void FUN_021deea0(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 local_18;
  undefined2 local_a;
  undefined6 uStack_8;
  
  if (((param_1 != 0) && (uVar3 = *(uint *)(param_1 + 0x508), uVar3 < 10)) &&
     ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] != '\0')) {
    if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
      (&DAT_053fea2c)[(ulong)uVar3 * 0x2e8] = *param_2;
      return;
    }
    lVar5 = *(long *)PTR_DAT_04bb3968;
    lVar6 = lVar5 + 0xe18 + (ulong)uVar3 * 0x28;
    pbVar7 = (byte *)(lVar6 + 8);
    if (*pbVar7 < 100) {
      uStack_8 = (undefined6)((ulong)*(undefined8 *)(lVar6 + 0x16) >> 0x10);
      lVar1 = *(long *)pbVar7;
      lVar2 = *(long *)(lVar6 + 0x10);
      local_a = (undefined2)((ulong)lVar2 >> 0x30);
      local_18._3_1_ = (byte)((ulong)lVar1 >> 0x18);
      bVar4 = local_18._3_1_ & 0xf3;
      local_18._4_4_ = (undefined4)((ulong)lVar1 >> 0x20);
      local_18._0_4_ = CONCAT13((byte)((*param_2 & 3) << 2) | bVar4,(int3)lVar1);
      if ((*(long *)pbVar7 != local_18 || *(long *)(lVar6 + 0x10) != lVar2) ||
          *(long *)(lVar6 + 0x16) != CONCAT62(uStack_8,local_a)) {
        *(long *)pbVar7 = local_18;
        *(long *)(lVar6 + 0x10) = lVar2;
        *(ulong *)(lVar6 + 0x16) = CONCAT62(uStack_8,local_a);
        *(undefined1 *)(lVar5 + 0xe18 + (ulong)uVar3 * 0x28 + 0x1e) = 1;
      }
    }
  }
  return;
}

