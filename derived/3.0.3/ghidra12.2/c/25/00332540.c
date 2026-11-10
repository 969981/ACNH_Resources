
void FUN_00332540(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (0x20 < *(uint *)(param_2 + 4)) {
    uVar1 = *(uint *)(param_2 + 0x14);
    *(ulong *)(param_1 + 0xc0) = (ulong)*(uint *)(param_2 + 4);
    lVar6 = *(long *)(param_1 + 0x38);
    param_2 = param_2 + (ulong)uVar1;
    lVar3 = FUN_0034fb8c(param_2);
    *(long *)(param_1 + 0xa0) = lVar3;
    if (*(long *)(param_1 + 0x18) == 0) {
      lVar6 = *(long *)(lVar3 + 0x30);
      local_68 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      local_80 = CONCAT44(local_80._4_4_,0x21);
      local_70 = nn::util::BinaryBlockHeader::GetBlockSize();
      local_70 = local_70 + -0x10;
      local_80 = CONCAT44((int)local_70,(undefined4)local_80);
      local_78 = lVar6 + 0x10;
      FUN_003490c4(*(undefined8 *)(lVar3 + 0x40),uVar5,&local_80);
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x40);
      *(undefined8 *)(lVar3 + 0x50) = 0;
      FUN_003491ac(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x40),*(undefined8 *)(param_1 + 0x10)
                   ,"NnVfx2GfxMemoryPool");
      iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x38) + 4);
      *(int *)(param_1 + 0x98) = iVar2;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x28);
      *(long *)(lVar3 + 0x48) = *(long *)(param_1 + 0x18);
      *(long *)(lVar3 + 0x50) = *(long *)(lVar3 + 0x30) + ((param_2 - lVar6) - lVar3) + lVar4 + 0x10
      ;
      iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x38) + 4);
      *(int *)(param_1 + 0x98) = iVar2;
    }
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x28) + lVar3 * 8);
        lVar6 = *(long *)(lVar4 + 0x68);
        FUN_0034f6d4(*(undefined8 *)(lVar4 + 0x80),uVar5,lVar4 + 0x10,*(undefined8 *)(lVar6 + 0x28),
                     (*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x10)) + **(long **)(lVar4 + 0x70)
                     + -0x10,*(undefined4 *)(lVar4 + 0x50));
        local_50 = 0;
        uStack_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        local_68 = 0;
        local_80 = 0;
        local_78 = 0;
        FUN_0034fd78(&local_80);
        local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(lVar4 + 0x5c));
        local_80 = CONCAT44(*(undefined4 *)(lVar4 + 0x1c),(undefined4)local_80);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar4 + 0x58));
        local_50 = *(undefined8 *)(lVar4 + 0x80);
        local_60 = CONCAT44(*(undefined4 *)(lVar4 + 0x30),(undefined4)local_60);
        local_70._0_4_ = CONCAT22(*(undefined2 *)(lVar4 + 0x16),(undefined2)local_70);
        FUN_0034f830(*(undefined8 *)(lVar4 + 0x88),uVar5,&local_80);
        FUN_0034f7fc(*(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(param_1 + 0x10),
                     "NnVfx2GfxTexture");
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}

