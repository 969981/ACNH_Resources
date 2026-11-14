
int FUN_01543958(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  int local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  local_44 = param_2;
  uVar3 = FUN_0277d6c4();
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_50 = 0;
      local_58 = *param_1;
      uStack_54 = param_1[1];
      local_60 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar6 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
            local_50 = lVar6;
          }
        }
      }
      iVar4 = FUN_01ae7550(&local_60);
      if (iVar4 == 0xd) {
        if (param_2 == 2) {
          param_2 = 2;
        }
        else {
          if ((DAT_05292338 != 0) && (DAT_04c487d4 != -1)) {
            local_60 = (undefined **)CONCAT44(local_60._4_4_,6);
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar1 >> 6 & 1) != 0) && (uVar5 = FUN_017ba064(), (uVar5 & 1) != 0)) {
              local_58 = *param_1;
              uStack_54 = param_1[1];
              lVar6 = *(long *)puVar2;
              local_60 = &PTR_FUN_04a36b50;
              local_50 = 0;
              uVar3 = FUN_0277d6c4(&local_58);
              if (*(long *)puVar2 != 0) {
                lVar6 = *(long *)(lVar6 + 0x57e58);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
                if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                  lVar6 = *(long *)PTR_DAT_04bc0428;
                  uVar3 = FUN_0277d6c4(param_1);
                  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
                  if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
                     (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0
                     )) {
                    local_50 = lVar6;
                  }
                }
              }
              iVar4 = FUN_01aee3b4(&local_60);
              if ((iVar4 == 0x19) || (iVar4 = FUN_01aee3b4(&local_60), iVar4 == 0x1a)) {
                return 5;
              }
            }
          }
          if (local_44 != 9) {
            local_44 = 4;
          }
          param_2 = local_44;
        }
      }
    }
  }
  return param_2;
}

