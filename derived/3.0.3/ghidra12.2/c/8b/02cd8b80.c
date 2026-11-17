
void FUN_02cd8b80(byte *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*param_1 < 8) {
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_2);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
          (uVar4 = FUN_02665700(param_2), (uVar4 & 1) == 0)) &&
         (uVar4 = FUN_02665540(param_2), (uVar4 & 1) == 0)) {
        lVar5 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(param_2);
        lVar6 = *(long *)puVar1;
        if (lVar6 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            local_48 = 0;
            local_50 = *param_2;
            uStack_4c = param_2[1];
            uVar2 = FUN_0277d6c4(&local_50);
            if (*(long *)puVar1 != 0) {
              lVar5 = *(long *)(lVar6 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
              if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
                lVar5 = *(long *)PTR_DAT_04bc0428;
                uVar2 = FUN_0277d6c4(param_2);
                uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
                if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                   (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0))
                {
                  local_48 = lVar5;
                }
              }
            }
            iVar3 = FUN_0277d6c4(&local_50);
            if (iVar3 == 0x3920) {
              return;
            }
          }
        }
        uVar4 = FUN_0277e9e0(param_2);
        if ((((uVar4 & 1) == 0) || (uVar4 = FUN_0267d630(param_1,param_2), (uVar4 & 1) == 0)) &&
           (uVar4 = FUN_02672fb0(param_1), (uVar4 & 1) != 0)) {
          FUN_026738b0(param_1,param_2,1,0);
          return;
        }
      }
    }
  }
  return;
}

