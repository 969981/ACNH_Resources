
void FUN_0205bf10(long param_1,long param_2)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte local_64 [12];
  undefined *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar7 = 0x23;
  local_34 = 0x23;
  local_32 = 8;
  uVar3 = *(ushort *)(param_2 + 2);
  piVar1 = (int *)(param_1 + 0x90) + (ulong)*(byte *)(param_2 + 8) * 0xe;
  if (9 < *(byte *)(param_2 + 8)) {
    piVar1 = (int *)(param_1 + 0x90);
  }
  if ((byte)(uVar3 >> 8) < 0x23) {
    FUN_020fd218(&local_34,uVar3 >> 8,uVar3 & 0xff);
    uVar7 = (uint)(byte)local_34;
  }
  local_48 = 8;
  local_3d = 0;
  puStack_50 = local_44;
  local_44[0] = 0;
  local_58 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_58,"-----");
  if (uVar7 < 0x23) {
    FUN_038d1270(&local_58,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)uVar7 * 8 + 0xb0),
                 local_34._1_1_);
  }
  if (((*piVar1 != 0) && (2 < *piVar1 - 4U)) &&
     (((uint)(*(ushort *)(piVar1 + 1) >> 8) | (*(ushort *)(piVar1 + 1) & 0xff00ff) << 8) ==
      ((uint)local_34._1_1_ | uVar7 << 8))) {
    *piVar1 = 4;
  }
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  bVar4 = *(byte *)(lVar8 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar2 = (byte *)(lVar8 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar4)) {
      return;
    }
  }
  *(undefined2 *)(piVar1 + 0xc) = 0xffff;
  FUN_02507c6c(local_64,7,1,0,0);
  puVar5 = PTR_DAT_04bb5038;
  uVar7 = (uint)local_64[0];
  if (local_64[0] < 8) {
    do {
      uVar9 = (ulong)uVar7;
      *(ushort *)(piVar1 + 0xc) =
           *(ushort *)(piVar1 + 0xc) & ((ushort)(1 << (ulong)(uVar7 & 0x1f)) ^ 0xffff);
      do {
        if (uVar9 == 7) {
          return;
        }
        uVar9 = uVar9 + 1;
        uVar6 = FUN_02507924(local_64,puVar5 + uVar9);
      } while ((uVar6 & 1) == 0);
      local_64[0] = puVar5[uVar9];
      uVar7 = (uint)local_64[0];
    } while (uVar7 < 8);
  }
  return;
}

