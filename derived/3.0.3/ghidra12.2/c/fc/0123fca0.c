
uint FUN_0123fca0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_18;
  
  lVar3 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar1 = FUN_0277d6c4();
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      iVar2 = FUN_0277d6c4(param_1);
      if ((iVar2 == 0xec9a) || (iVar2 = FUN_0277d6c4(param_1), iVar2 == 0xec97)) {
        if (param_2 == (undefined4 *)0x0) goto LAB_0123fe4c;
        local_48 = 0x373d;
        FUN_0277d4ac(&local_48);
LAB_0123fe48:
        *param_2 = (undefined4)local_48;
        param_2[1] = local_48._4_4_;
      }
      else {
        FUN_0124c030(&local_48,param_1);
        iVar2 = FUN_0123db50(auStack_40,local_38);
        if (iVar2 == 0x2e) {
          if (param_2 != (undefined4 *)0x0) {
            local_18 = 0x3738;
            goto LAB_0123fe3c;
          }
        }
        else {
          iVar2 = FUN_0277d6c4(param_1);
          if (iVar2 == 0xea9f) {
            lVar3 = 0;
          }
          else {
            iVar2 = FUN_0277d6c4(param_1);
            if (iVar2 == 0xeab4) {
              lVar3 = 1;
            }
            else {
              iVar2 = FUN_0277d6c4(param_1);
              if (iVar2 == 0xeabe) {
                lVar3 = 2;
              }
              else {
                iVar2 = FUN_0277d6c4(param_1);
                if (iVar2 != 0xeac3) {
                  iVar2 = FUN_0277d6c4(param_1);
                  if (iVar2 != 0xecbf) {
                    local_50 = *param_1;
                    uStack_4c = param_1[1];
                    FUN_0124c1e8(&local_18,&local_50,1);
                    uVar1 = FUN_0277d9a8(&local_18);
                    if ((param_2 != (undefined4 *)0x0) && ((uVar1 & 1) != 0)) {
                      *param_2 = (undefined4)local_18;
                      param_2[1] = local_18._4_4_;
                    }
                    goto LAB_0123fd68;
                  }
                  local_18 = 0x3739;
                  goto LAB_0123fe3c;
                }
                lVar3 = 3;
              }
            }
          }
          if (param_2 != (undefined4 *)0x0) {
            local_18 = (ulong)(ushort)(&DAT_041021e0)[lVar3];
LAB_0123fe3c:
            FUN_0277d4ac(&local_18);
            local_48._0_4_ = (undefined4)local_18;
            local_48._4_4_ = local_18._4_4_;
            goto LAB_0123fe48;
          }
        }
      }
LAB_0123fe4c:
      uVar1 = 1;
      goto LAB_0123fd68;
    }
  }
  uVar1 = 0;
LAB_0123fd68:
  return uVar1 & 1;
}

