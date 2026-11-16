
uint FUN_0282ff28(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0xa8b0) != '\0') {
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_1 + 0xa8b4);
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_58 = 0;
        local_60 = *(undefined4 *)(param_1 + 0xa8b4);
        uStack_5c = *(undefined4 *)(param_1 + 0xa8b8);
        local_68 = &PTR_FUN_04a36b50;
        uVar2 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar1 != 0) {
          lVar4 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar4 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(param_1 + 0xa8b4);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
               (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
              local_58 = lVar4;
            }
          }
        }
        uVar3 = FUN_01b032d0(&local_68);
        if ((((uVar3 & 1) != 0) &&
            (uVar3 = nn::time::IsValidDate
                               ((uint)*(ushort *)(param_1 + 0xa8bc),
                                (uint)*(byte *)(param_1 + 0xa8be),(uint)*(byte *)(param_1 + 0xa8bf))
            , (uVar3 & 1) != 0)) && (*(char *)(param_1 + 0xa8c0) != '\0')) {
          lVar5 = *(long *)puVar1;
          uVar2 = FUN_0277d6c4(param_1 + 0xa8c4);
          lVar4 = *(long *)puVar1;
          if (lVar4 != 0) {
            lVar5 = *(long *)(lVar5 + 0x57e58);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
              local_58 = 0;
              local_68 = &PTR_FUN_04a36b50;
              local_60 = *(undefined4 *)(param_1 + 0xa8c4);
              uStack_5c = *(undefined4 *)(param_1 + 0xa8c8);
              uVar2 = FUN_0277d6c4(&local_60);
              if (*(long *)puVar1 != 0) {
                lVar4 = *(long *)(lVar4 + 0x57e58);
                uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
                if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
                  lVar4 = *(long *)PTR_DAT_04bc0428;
                  uVar2 = FUN_0277d6c4(param_1 + 0xa8c4);
                  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
                  if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
                     (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0
                     )) {
                    local_58 = lVar4;
                  }
                }
              }
              uVar3 = FUN_01b032d0(&local_68);
              if ((((uVar3 & 1) != 0) &&
                  (uVar3 = nn::time::IsValidDate
                                     ((uint)*(ushort *)(param_1 + 0xa8cc),
                                      (uint)*(byte *)(param_1 + 0xa8ce),
                                      (uint)*(byte *)(param_1 + 0xa8cf)), (uVar3 & 1) != 0)) &&
                 (*(char *)(param_1 + 0xa8d0) != '\0')) {
                uVar3 = FUN_0277d9a8(param_1 + 0xa8d4);
                if ((uVar3 & 1) != 0) {
                  FUN_01ad5d04(&local_68,param_1 + 0xa8d4);
                  uVar3 = FUN_01b032d0(&local_68);
                  if ((((uVar3 & 1) != 0) &&
                      (uVar3 = nn::time::IsValidDate
                                         ((uint)*(ushort *)(param_1 + 0xa8dc),
                                          (uint)*(byte *)(param_1 + 0xa8de),
                                          (uint)*(byte *)(param_1 + 0xa8df)), (uVar3 & 1) != 0)) &&
                     (*(char *)(param_1 + 0xa8e0) != '\0')) {
                    uVar3 = FUN_0277d9a8(param_1 + 0xa8e4);
                    if ((uVar3 & 1) != 0) {
                      FUN_01ad5d04(&local_68,param_1 + 0xa8e4);
                      uVar3 = FUN_01b032d0(&local_68);
                      if ((((uVar3 & 1) != 0) &&
                          (uVar3 = nn::time::IsValidDate
                                             ((uint)*(ushort *)(param_1 + 0xa8ec),
                                              (uint)*(byte *)(param_1 + 0xa8ee),
                                              (uint)*(byte *)(param_1 + 0xa8ef)), (uVar3 & 1) != 0))
                         && (*(char *)(param_1 + 0xa8f0) != '\0')) {
                        uVar3 = FUN_0277d9a8(param_1 + 0xa8f4);
                        if ((uVar3 & 1) != 0) {
                          FUN_01ad5d04(&local_68,param_1 + 0xa8f4);
                          uVar3 = FUN_01b032d0(&local_68);
                          if ((uVar3 & 1) != 0) {
                            uVar2 = nn::time::IsValidDate
                                              ((uint)*(ushort *)(param_1 + 0xa8fc),
                                               (uint)*(byte *)(param_1 + 0xa8fe),
                                               (uint)*(byte *)(param_1 + 0xa8ff));
                            goto LAB_02830244;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_02830244:
  return uVar2 & 1;
}

