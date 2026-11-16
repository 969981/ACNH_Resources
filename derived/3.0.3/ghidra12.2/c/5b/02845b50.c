
void FUN_02845b50(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_84;
  undefined **local_80;
  undefined4 *puStack_78;
  undefined1 auStack_48 [8];
  
  (**(code **)(*param_1 + 0x20))();
  puVar2 = PTR_DAT_04bb43c0;
  local_84 = 4;
  puStack_78 = &local_84;
  local_80 = &PTR_FUN_049ff4e8;
  uVar7 = 0;
  do {
    (**(code **)(*param_1 + 0x10))(auStack_48,param_1,uVar7);
    lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
      lVar4 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(auStack_48);
      if (*(long *)puVar2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar5 = (*(code *)*local_80)(&local_80,auStack_48), (uVar5 & 1) == 0))
        goto LAB_02845be0;
      }
      lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
    }
LAB_02845be0:
    uVar7 = uVar7 + 1;
  } while (uVar7 != 15000);
  (**(code **)(*param_1 + 0x20))(param_1);
  uVar7 = 0;
  local_80 = &PTR_FUN_04a91d88;
  do {
    (**(code **)(*param_1 + 0x10))(auStack_48,param_1,uVar7);
    lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
      lVar4 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(auStack_48);
      if (*(long *)puVar2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar5 = (*(code *)*local_80)(&local_80,auStack_48), (uVar5 & 1) == 0))
        goto LAB_02845cd0;
      }
      lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
    }
LAB_02845cd0:
    uVar7 = uVar7 + 1;
    if (uVar7 == 15000) {
      return;
    }
  } while( true );
}

