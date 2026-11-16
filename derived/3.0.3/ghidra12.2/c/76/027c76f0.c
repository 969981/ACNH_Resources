
bool FUN_027c76f0(long param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ushort local_70;
  undefined1 local_6e;
  undefined8 local_6c;
  ushort local_64;
  undefined1 local_62;
  
  puVar4 = PTR_DAT_04bc2a20;
  puVar3 = PTR_DAT_04bc27f0;
  uVar8 = 0;
  iVar9 = 0;
  bVar5 = true;
  do {
    local_70 = 0x23;
    local_6e = 8;
    uVar2 = *(ushort *)(param_1 + 0x2c + (long)iVar9 * 0x1c);
    if ((byte)(uVar2 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar2 >> 8,uVar2 & 0xff);
    }
    if ((local_70 & 0xff) < 0x23) {
      if ((((uint)(local_70 >> 8) <= (uint)(byte)puVar3[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(puVar4 + ((ulong)local_70 & 0xff) * 4) >> (ulong)(local_70 >> 8 & 0x1f) & 1)
           != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(local_70 >> 8 | local_70 << 8))) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          if ((uVar8 <= uVar7) && (lVar6 != 0xc4)) {
            lVar1 = param_1 + lVar6;
            local_64 = 0x23;
            uVar2 = *(ushort *)(lVar1 + 0x48);
            local_62 = 8;
            if ((byte)(uVar2 >> 8) < 0x23) {
              FUN_020fd218(&local_64,uVar2 >> 8,uVar2 & 0xff);
            }
            *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar1 + 0x4c);
            *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar1 + 0x50);
            *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar1 + 0x54);
            *(ushort *)(lVar1 + 0x2c) = local_64 >> 8 | local_64 << 8;
            *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar1 + 0x5c);
            *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(lVar1 + 0x60);
          }
          lVar6 = lVar6 + 0x1c;
          uVar7 = uVar7 + 1;
        } while (lVar6 != 0xe0);
        *(undefined2 *)(param_1 + 0xf0) = 0xffff;
        local_6c = 0xfffe;
        FUN_0277d4ac(&local_6c);
        *(undefined2 *)(param_1 + 0xf4) = (undefined2)local_6c;
        *(undefined1 *)(param_1 + 0xf6) = local_6c._2_1_;
        *(undefined1 *)(param_1 + 0xf7) = local_6c._3_1_;
        *(undefined4 *)(param_1 + 0xf8) = local_6c._4_4_;
        *(undefined2 *)(param_1 + 0xfc) = (undefined2)local_6c;
        *(undefined1 *)(param_1 + 0xfe) = local_6c._2_1_;
        *(undefined1 *)(param_1 + 0xff) = local_6c._3_1_;
        *(undefined4 *)(param_1 + 0x100) = local_6c._4_4_;
        *(undefined2 *)(param_1 + 0x104) = (undefined2)local_6c;
        *(undefined1 *)(param_1 + 0x106) = local_6c._2_1_;
        *(undefined1 *)(param_1 + 0x107) = local_6c._3_1_;
        *(undefined4 *)(param_1 + 0x108) = local_6c._4_4_;
        return bVar5;
      }
    }
    iVar9 = iVar9 + 1;
    uVar8 = uVar8 + 1;
    bVar5 = iVar9 != 8;
    if ((int)uVar8 == 8) {
      return bVar5;
    }
  } while( true );
}

