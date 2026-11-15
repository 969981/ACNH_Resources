
undefined8 FUN_023f2a2c(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  iVar6 = 0;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar7 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      iVar6 = 0;
      if (iVar2 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(*(long *)puVar1 + 0x330);
          iVar6 = 0;
          if (lVar7 != 0) {
            iVar6 = *(int *)(lVar7 + 0x244);
          }
        }
      }
    }
  }
  if ((DAT_05292428 != iVar6) &&
     (uVar5 = FUN_0180bc80(), puVar1 = PTR_DAT_04bb43c0, (uVar5 & 1) == 0)) {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1);
    lVar7 = *(long *)puVar1;
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_38 = 0;
        local_40 = *param_1;
        uStack_3c = param_1[1];
        local_48 = &PTR_FUN_04a36b50;
        uVar3 = FUN_0277d6c4(&local_40);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_1);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
              local_38 = lVar7;
            }
          }
        }
        uVar5 = FUN_01ade110(&local_48);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

