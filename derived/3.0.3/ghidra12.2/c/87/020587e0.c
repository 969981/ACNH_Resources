
undefined4 FUN_020587e0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  int local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
    return 4;
  }
  if (((*(byte *)(param_1 + 0x2cc) & 1) == 0) &&
     (local_34 = 1, (*(byte *)(param_1 + 0x2cc) >> 1 & 1) == 0)) {
    local_38 = 0x23;
    local_36 = 8;
    FUN_020fd3a0(&local_38);
    uVar7 = (ulong)(byte)local_38;
    if ((uVar7 < 0x23) &&
       ((local_38._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar7] &&
        ((*(uint *)(PTR_DAT_04bc2a20 + uVar7 * 4) >> (ulong)(local_38._1_1_ & 0x1f) & 1) != 0)))) {
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar9 + 0x473);
      pcVar8 = PTR_DAT_04bc1220;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pcVar8 = (char *)(lVar9 + 0x473);
        }
      }
      cVar2 = *pcVar8;
      uVar4 = CONCAT11((byte)local_38,local_38._1_1_);
      if (((*(int *)(param_1 + 0x90) == 0) || (*(char *)(param_1 + 0x97) != cVar2)) ||
         (uVar4 != (ushort)(*(ushort *)(param_1 + 0x94) >> 8 | *(ushort *)(param_1 + 0x94) << 8))) {
        if (((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xcf) != cVar2)) ||
           (uVar4 != (ushort)(*(ushort *)(param_1 + 0xcc) >> 8 | *(ushort *)(param_1 + 0xcc) << 8)))
        {
          if (((*(int *)(param_1 + 0x100) == 0) || (*(char *)(param_1 + 0x107) != cVar2)) ||
             (uVar4 != (ushort)(*(ushort *)(param_1 + 0x104) >> 8 |
                               *(ushort *)(param_1 + 0x104) << 8))) {
            if (((*(int *)(param_1 + 0x138) == 0) || (*(char *)(param_1 + 0x13f) != cVar2)) ||
               (uVar4 != (ushort)(*(ushort *)(param_1 + 0x13c) >> 8 |
                                 *(ushort *)(param_1 + 0x13c) << 8))) {
              if (((*(int *)(param_1 + 0x170) == 0) || (*(char *)(param_1 + 0x177) != cVar2)) ||
                 (uVar4 != (ushort)(*(ushort *)(param_1 + 0x174) >> 8 |
                                   *(ushort *)(param_1 + 0x174) << 8))) {
                if (((*(int *)(param_1 + 0x1a8) == 0) || (*(char *)(param_1 + 0x1af) != cVar2)) ||
                   (uVar4 != (ushort)(*(ushort *)(param_1 + 0x1ac) >> 8 |
                                     *(ushort *)(param_1 + 0x1ac) << 8))) {
                  if (((*(int *)(param_1 + 0x1e0) == 0) || (*(char *)(param_1 + 0x1e7) != cVar2)) ||
                     (uVar4 != (ushort)(*(ushort *)(param_1 + 0x1e4) >> 8 |
                                       *(ushort *)(param_1 + 0x1e4) << 8))) {
                    if (((*(int *)(param_1 + 0x218) == 0) || (*(char *)(param_1 + 0x21f) != cVar2))
                       || (uVar4 != (ushort)(*(ushort *)(param_1 + 0x21c) >> 8 |
                                            *(ushort *)(param_1 + 0x21c) << 8))) {
                      if (((*(int *)(param_1 + 0x250) == 0) || (*(char *)(param_1 + 599) != cVar2))
                         || (uVar4 != (ushort)(*(ushort *)(param_1 + 0x254) >> 8 |
                                              *(ushort *)(param_1 + 0x254) << 8))) {
                        if (*(int *)(param_1 + 0x288) == 0) {
                          return 2;
                        }
                        if (*(char *)(param_1 + 0x28f) != cVar2) {
                          return 2;
                        }
                        if (uVar4 != (ushort)(*(ushort *)(param_1 + 0x28c) >> 8 |
                                             *(ushort *)(param_1 + 0x28c) << 8)) {
                          return 2;
                        }
                        uVar10 = 9;
                      }
                      else {
                        uVar10 = 8;
                      }
                    }
                    else {
                      uVar10 = 7;
                    }
                  }
                  else {
                    uVar10 = 6;
                  }
                }
                else {
                  uVar10 = 5;
                }
              }
              else {
                uVar10 = 4;
              }
            }
            else {
              uVar10 = 3;
            }
          }
          else {
            uVar10 = 2;
          }
        }
        else {
          uVar10 = 1;
        }
      }
      else {
        uVar10 = 0;
      }
      uVar6 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,param_2,PTR_DAT_04bb3238,1);
      local_3c = (int)uVar6;
      if (local_3c != 0) {
        uVar7 = FUN_02058b5c(uVar6,&local_3c);
        if ((uVar7 & 1) == 0) {
          return 5;
        }
        *(undefined4 *)(param_1 + 0x2c8) = 1;
        *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) | 2;
        local_34 = 0x80023;
        FUN_020fd3a0(&local_34,param_2);
        FUN_020f2cb4(1,(ushort)local_34 >> 8 | (ushort)local_34 << 8,0,0,uVar10);
        return *(undefined4 *)(param_1 + 0x2c8);
      }
    }
    uVar5 = 2;
  }
  else {
    uVar5 = 3;
  }
  return uVar5;
}

