
undefined8 FUN_00800ac0(undefined8 param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_48 [2];
  undefined1 auStack_46 [2];
  byte local_44 [2];
  undefined1 auStack_42 [2];
  byte local_40 [2];
  undefined1 auStack_3e [2];
  byte local_3c [2];
  undefined1 auStack_3a [2];
  byte local_38 [2];
  undefined1 auStack_36 [2];
  undefined1 auStack_34 [2];
  undefined1 auStack_32 [2];
  
  FUN_007ef010(auStack_36,param_1);
  local_38[0] = *param_2;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  uVar3 = FUN_00800cc0(auStack_36,local_38);
  if ((uVar3 & 1) == 0) {
    FUN_007ef010(auStack_3a,param_1);
    local_3c[0] = *param_2;
    if (7 < local_3c[0]) {
      local_3c[0] = 0xff;
    }
    uVar3 = FUN_00801330(auStack_3a,local_3c);
    if ((uVar3 & 1) == 0) {
      FUN_007ef010(auStack_3e,param_1);
      local_40[0] = *param_2;
      if (7 < local_40[0]) {
        local_40[0] = 0xff;
      }
      uVar3 = FUN_00801770(auStack_3e,local_40);
      if ((uVar3 & 1) == 0) {
        FUN_007ef010(auStack_42,param_1);
        local_44[0] = *param_2;
        if (7 < local_44[0]) {
          local_44[0] = 0xff;
        }
        uVar3 = FUN_00802070(auStack_42,local_44);
        if ((uVar3 & 1) == 0) {
          if ((DAT_053e0208 != 0) && (lVar4 = *(long *)(DAT_053e0208 + 0x175a0), lVar4 != 0)) {
            FUN_007ef010(auStack_46,param_1);
            FUN_007ef010(auStack_32,auStack_46);
            uVar3 = FUN_008036b0(auStack_32,lVar4 + 0x100,*(undefined4 *)(lVar4 + 0xf8));
            if ((uVar3 & 1) != 0) {
              return 1;
            }
            if (*(int *)(lVar4 + 0x1e8) != 0) {
              plVar5 = *(long **)(lVar4 + 0x1f0);
              lVar4 = (long)*(int *)(lVar4 + 0x1e8) << 3;
              do {
                lVar6 = *plVar5;
                FUN_007ef010(auStack_34,auStack_46);
                uVar3 = FUN_008036b0(auStack_34,lVar6 + 0xf8,*(undefined4 *)(lVar6 + 0xf0));
                if ((uVar3 & 1) != 0) {
                  return 1;
                }
                plVar5 = plVar5 + 1;
                lVar4 = lVar4 + -8;
              } while (lVar4 != 0);
            }
          }
          lVar4 = DAT_05abbc58;
          if (DAT_05abbc58 != 0) {
            FUN_007ef010(auStack_48,param_1);
            puVar2 = PTR_DAT_04bc3a48;
            iVar1 = *(int *)(lVar4 + 0xe0);
            if (iVar1 != 0) {
              plVar5 = *(long **)(lVar4 + 0xe8);
              lVar4 = (long)iVar1 << 3;
              do {
                lVar6 = *plVar5;
                if ((((*(ushort *)(lVar6 + 0x114) & 1) != 0) ||
                    (*(ushort **)puVar2 == (ushort *)0x0)) || ((**(ushort **)puVar2 & 1) == 0)) {
                  FUN_007ef010(auStack_32,auStack_48);
                  uVar3 = FUN_008061a0(auStack_32,lVar6 + 0x10);
                  if ((uVar3 & 1) != 0) {
                    return 1;
                  }
                }
                plVar5 = plVar5 + 1;
                lVar4 = lVar4 + -8;
              } while (lVar4 != 0);
            }
          }
          return 0;
        }
      }
    }
  }
  return 1;
}

