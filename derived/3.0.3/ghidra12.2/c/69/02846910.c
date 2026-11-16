
void FUN_02846910(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **local_80;
  undefined4 *puStack_78;
  undefined4 local_48 [2];
  
  local_48[0] = 2;
  local_80 = &PTR_FUN_049ff4e8;
  puStack_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 5;
  local_80 = &PTR_FUN_049ff4e8;
  puStack_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 7;
  local_80 = &PTR_FUN_049ff4e8;
  puStack_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 3;
  local_80 = &PTR_FUN_049ff4e8;
  puStack_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  local_48[0] = 0x4f;
  local_80 = &PTR_FUN_049ff4e8;
  puStack_78 = local_48;
  FUN_008a1ba0(param_1,&local_80);
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar5 == 0) goto LAB_02846a94;
      lVar5 = lVar5 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar5 == 0)) goto LAB_02846a94;
    if ((*(long **)(lVar5 + 0x1a0da0) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar5 + 0x1a0da0), puVar7 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar7)();
      uVar3 = uVar3 ^ 1;
    }
    uVar1 = *(uint *)(*(long *)(lVar5 + 0x1a0d88) + *(long *)(lVar5 + 0x1a0d80));
    if (2 < uVar1) {
      uVar1 = 0;
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar1);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x1a0da0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x1a0da0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (1 < (int)uVar1) {
      local_48[0] = 0x50;
      puStack_78 = local_48;
      local_80 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(param_1,&local_80);
    }
  }
LAB_02846a94:
  puVar2 = PTR_DAT_04bb43c0;
  local_80 = &PTR_FUN_04a91d38;
  uVar3 = 0;
  do {
    (**(code **)(*param_1 + 0x10))(local_48,param_1,uVar3);
    lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar1 = 1 << (ulong)(uVar3 & 0x1f);
    if ((*(uint *)(lVar5 + (ulong)(uVar3 >> 5) * 4) & uVar1) != 0) {
      lVar5 = *(long *)puVar2;
      uVar4 = FUN_0277d6c4(local_48);
      if (*(long *)puVar2 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar6 = (*(code *)*local_80)(&local_80,local_48), (uVar6 & 1) != 0)) goto LAB_02846ae0;
      }
      lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar8 = (ulong)(uVar3 >> 5) * 4;
      *(uint *)(lVar5 + lVar8) = *(uint *)(lVar5 + lVar8) & (uVar1 ^ 0xffffffff);
    }
LAB_02846ae0:
    uVar3 = uVar3 + 1;
    if (uVar3 == 15000) {
      return;
    }
  } while( true );
}

