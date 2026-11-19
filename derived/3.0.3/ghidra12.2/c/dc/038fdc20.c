
void FUN_038fdc20(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ushort uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined2 local_62;
  
  puVar2 = PTR_DAT_04bc1010;
  FUN_0039c5a0(param_1,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
  lVar4 = FUN_038fde10(param_1);
  if (lVar4 != 0) {
    if (*(char *)(*(long *)(lVar4 + 0x40) + 0x110) == '\x01') {
      return;
    }
    local_70 = 0;
    uStack_6c = 0;
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar9 = *(undefined8 *)(*(long *)puVar2 + 0x30);
    local_88 = CONCAT44(local_88._4_4_,0x21);
    local_78 = nn::util::BinaryBlockHeader::GetBlockSize();
    local_78 = local_78 + -0x10;
    local_88 = CONCAT44((int)local_78,(undefined4)local_88);
    local_80 = lVar5 + 0x10;
    FUN_003490c4(*(undefined8 *)(lVar4 + 0x40),uVar9,&local_88);
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x38) + 4);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      do {
        FUN_038fdf04(*(undefined8 *)(*(long *)(lVar4 + 0x28) + lVar5));
        lVar5 = lVar5 + 8;
      } while ((ulong)uVar1 * 8 != lVar5);
    }
  }
  uVar6 = (ulong)*(ushort *)(param_1 + 0xdc);
  if (*(ushort *)(param_1 + 0xdc) != 0) {
    uVar8 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x28) + uVar8 * 0x78;
      uVar7 = *(ushort *)(lVar4 + 0x6c);
      if (uVar7 != 0) {
        uVar6 = 0;
        do {
          lVar5 = *(long *)(lVar4 + 0x38) + uVar6 * 0xa8;
          if (*(char *)(lVar5 + 0x9c) != '\0') {
            uVar11 = 0;
            lVar10 = 8;
            do {
              uVar9 = *(undefined8 *)puVar2;
              local_78 = 0x4170000000000000;
              local_88 = 0;
              local_80 = 0x3f80000000000000;
              local_70 = 0;
              uStack_6c = 0x7020101;
              uStack_68 = 0x1010707;
              local_64 = 0;
              local_62 = 0;
              FUN_038f94d0(&local_88,*(undefined8 *)(*(long *)(lVar5 + 0x38) + lVar10));
              sVar3 = FUN_038fbe40(uVar9,&local_88,"nn::g3d");
              lVar10 = lVar10 + 0x78;
              *(long *)(*(long *)(lVar5 + 0x88) + uVar11 * 8) = (long)sVar3;
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(byte *)(lVar5 + 0x9c));
            uVar7 = *(ushort *)(lVar4 + 0x6c);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
        uVar6 = (ulong)*(ushort *)(param_1 + 0xdc);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  return;
}

