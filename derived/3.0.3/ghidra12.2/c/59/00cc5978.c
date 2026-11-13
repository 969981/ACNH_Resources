
undefined8 FUN_00cc5978(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_a8;
  int local_a0;
  undefined **local_98;
  undefined **local_78;
  ulong local_58;
  
  puVar1 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 != 0) && (uVar2 = FUN_00cc5f50(param_1), uVar2 < 8)) {
    lVar8 = *(long *)puVar1;
    if (lVar8 != 0) {
      FUN_026f3ad0(lVar8,uVar2,0);
      FUN_026f3de0(lVar8,uVar2,0);
      FUN_026f27c0(lVar8,uVar2,0);
    }
    lVar8 = DAT_055a1b78;
    if (DAT_055a1b78 != 0) {
      local_a0 = 0;
      local_98 = &PTR_LAB_04a91c98;
      local_78 = &PTR_LAB_04a91c98;
      local_58 = 0xffffffff;
      if (((*(long *)puVar1 == 0) ||
          (lVar3 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar1 + 0x10) + 0x18))(),
          lVar3 == 0)) ||
         (lVar3 = lVar3 + (ulong)uVar2 * 0x48,
         *(long *)(lVar3 + 0x1e34c0) == 0 && *(long *)(lVar3 + 0x1e34c8) == 0)) {
        local_a8 = 0x800;
      }
      else {
        local_a8 = 0x804;
        local_58 = CONCAT44(local_58._4_4_,uVar2);
      }
      FUN_0283d404(lVar8,&local_a8);
      if (((local_58 & 0x100000000) != 0) && (local_a0 == 1)) {
        local_a8 = 0;
        local_98 = &PTR_LAB_04a91c98;
        local_78 = &PTR_LAB_04a91c98;
        local_a0 = 0;
        local_58 = 0xffffffff;
        uVar5 = 0;
        if (*(long *)puVar1 != 0) {
          lVar3 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar1 + 0x10) + 0x18))();
          uVar5 = local_a8;
          if ((lVar3 != 0) &&
             (lVar3 = lVar3 + (ulong)uVar2 * 0x48,
             *(long *)(lVar3 + 0x1e34c0) != 0 || *(long *)(lVar3 + 0x1e34c8) != 0)) {
            local_58 = CONCAT44(local_58._4_4_,uVar2);
            uVar5 = local_a8 & 0xfffffffffffffff0 | 5;
          }
        }
        local_a8 = uVar5 | 0x800;
        FUN_0283d404(lVar8,&local_a8);
        if (((((local_58 & 0x100000000) != 0) && (local_a0 == 1)) && (*(long *)puVar1 != 0)) &&
           (lVar3 = FUN_026eec4c(*(long *)puVar1,uVar2), lVar3 != 0)) {
          lVar7 = lVar3 + 0x194b0;
          if (*(long *)(lVar3 + 0x194b8) == 0) {
            lVar7 = *(long *)(*(long *)puVar1 + 0x20);
          }
          if ((*(long **)(lVar7 + 0x2c558) == (long *)0x0) ||
             (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x2c558), puVar4 == (undefined8 *)0x0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)*puVar4)();
            uVar5 = uVar5 & 0xffffffff;
          }
          if ((*(byte *)(*(long *)(lVar7 + 0x2c540) + *(long *)(lVar7 + 0x2c538)) & 1) != 0) {
            lVar3 = *(long *)puVar1;
            local_a8 = 0;
            local_98 = &PTR_LAB_04a91c98;
            local_78 = &PTR_LAB_04a91c98;
            local_a0 = 0;
            local_58 = 0xffffffff;
            if (((lVar3 != 0) &&
                (lVar6 = (**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x10) + 0x18))(),
                lVar6 != 0)) &&
               ((lVar6 = lVar6 + (ulong)uVar2 * 0x48,
                *(long *)(lVar6 + 0x1e34c0) != 0 || *(long *)(lVar6 + 0x1e34c8) != 0 &&
                ((lVar3 = FUN_026ef080(lVar3,uVar2), lVar3 != 0 &&
                 ((*(byte *)(lVar3 + 0x70464) & 1) != 0)))))) {
              local_58 = CONCAT44(local_58._4_4_,uVar2);
              local_a8 = local_a8 & 0xfffffffffffffff0 | 7;
            }
            local_a8 = local_a8 | 0x800;
            FUN_0283d404(lVar8,&local_a8);
          }
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x2c558) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2c558) + 8), puVar4 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar4)();
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x110) = 1;
  return 1;
}

