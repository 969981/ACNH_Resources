
void FUN_021129c0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  uint3 uVar5;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar6 = PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(param_2 + 7);
  if ((bVar3 & 0x30) != 0x20) {
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x473);
      }
    }
    if ((ushort)*pbVar7 != (*(ushort *)(param_2 + 5) >> 2 & 0xff)) {
      uVar1 = (int)(((ulong)*(byte *)(param_2 + 8) << 0x20 | (ulong)bVar3 << 0x18) >> 0x1e) + 1;
      *(byte *)(param_2 + 7) = bVar3 & 0xf | (char)uVar1 * '@' | 0x10;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xc0 | (byte)(uVar1 >> 2) & 0x3f;
      FUN_020ea498(DAT_053e5c10,param_3,0,0);
      local_38 = 0;
      local_32 = 0;
      local_40._0_2_ = (ushort)(byte)(param_3 << 5);
      local_40._0_3_ = CONCAT12(*(byte *)(param_2 + 5) >> 5,(ushort)local_40) & 0x1ffff;
      local_34 = 0xff00;
      uVar5 = (uint3)local_40 >> 0x10;
      local_40._0_2_ =
           CONCAT11((*(byte *)(param_2 + 5) & 0xfc) << 3 | (byte)(param_3 >> 3) & 0x1f,
                    (undefined1)local_40);
      local_40 = (ulong)CONCAT12((char)uVar5,(ushort)local_40);
      if (-1 < *(int *)(param_1 + 8)) {
        FUN_01db1df0(**(long **)puVar6 + 0x480,*(int *)(param_1 + 8),&local_38,&local_40,8,0);
      }
    }
  }
  return;
}

