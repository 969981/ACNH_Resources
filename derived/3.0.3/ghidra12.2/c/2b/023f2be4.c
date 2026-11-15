
undefined8 FUN_023f2be4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_0253395c(&local_18,param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_18);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar6 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar6 = 0;
        }
        else {
          puVar4 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar4,0);
          iVar6 = 0;
          if ((iVar3 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
            iVar6 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      if ((DAT_05292428 != iVar6) && (uVar5 = FUN_0180bc80(), (uVar5 & 1) == 0)) {
        lVar8 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(&local_18);
        lVar7 = *(long *)puVar1;
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            local_38 = 0;
            local_40 = local_18;
            uStack_3c = uStack_14;
            local_48 = &PTR_FUN_04a36b50;
            uVar2 = FUN_0277d6c4(&local_40);
            if (*(long *)puVar1 != 0) {
              lVar7 = *(long *)(lVar7 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
                lVar7 = *(long *)PTR_DAT_04bc0428;
                uVar2 = FUN_0277d6c4(&local_18);
                uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
                   (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0))
                {
                  local_38 = lVar7;
                }
              }
            }
            uVar5 = FUN_01ade110(&local_48);
            if ((uVar5 & 1) != 0) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

