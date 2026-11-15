
uint FUN_024f712c(undefined4 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
LAB_024f7254:
    if (DAT_04cd19d8 == 0) {
      pbVar9 = &DAT_0548e140;
LAB_024f72b4:
      if (*pbVar9 < 8) goto LAB_024f732c;
LAB_024f72c0:
      if (DAT_0537d558 == (long *)0x0) {
LAB_024f7324:
        pbVar9 = &DAT_0548e168;
        goto LAB_024f732c;
      }
      lVar11 = *DAT_0537d558;
      bVar10 = *(byte *)(lVar11 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar10 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
        if (7 < bVar10) {
          puVar1 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar9 = (byte *)(lVar11 + 0x471);
        }
      }
      bVar10 = *pbVar9;
      bVar3 = 7 < bVar10;
      if (bVar3) {
        bVar10 = 0xff;
      }
      local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar10);
      if (bVar3) goto LAB_024f7324;
    }
    else {
      pbVar9 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar9) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_024f72b4;
        }
        goto LAB_024f72c0;
      }
LAB_024f732c:
      bVar10 = *pbVar9;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar10);
    }
    uVar8 = FUN_03422650(param_1,&local_58);
    if ((uVar8 & 1) != 0) {
      lVar12 = *(long *)puVar2;
      uVar4 = FUN_0277d6c4(param_1);
      lVar11 = *(long *)puVar2;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024f7444;
        local_48 = 0;
        local_50 = *param_1;
        uStack_4c = param_1[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar2 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
              if (lVar11 != 0) {
                local_48 = lVar11;
              }
            }
          }
        }
        uVar8 = FUN_01af5064(&local_58,10);
        if ((uVar8 & 1) == 0) {
          lVar11 = *(long *)puVar2;
          goto LAB_024f7444;
        }
LAB_024f7818:
        uVar6 = 1;
        goto LAB_024f7710;
      }
LAB_024f7444:
      uVar4 = FUN_0277d6c4(param_1);
      lVar12 = *(long *)puVar2;
      if (lVar12 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_48 = 0;
          local_50 = *param_1;
          uStack_4c = param_1[1];
          local_58 = &PTR_FUN_04a36b50;
          uVar4 = FUN_0277d6c4(&local_50);
          if (*(long *)puVar2 != 0) {
            lVar11 = *(long *)(lVar12 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(param_1);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
                lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
                if (lVar11 != 0) {
                  local_48 = lVar11;
                }
              }
            }
          }
          uVar8 = FUN_01af5064(&local_58,0xb);
          if (((uVar8 & 1) != 0) && (uVar8 = FUN_024f6c7c(), (uVar8 & 1) != 0)) goto LAB_024f7818;
        }
      }
      lVar11 = *(long *)puVar2;
      uVar4 = FUN_0277d6c4(param_1);
      lVar12 = *(long *)puVar2;
      if (lVar12 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
          uVar6 = 0;
          if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) goto LAB_024f7710;
          local_48 = 0;
          local_50 = *param_1;
          uStack_4c = param_1[1];
          local_58 = &PTR_FUN_04a36b50;
          uVar4 = FUN_0277d6c4(&local_50);
          if (*(long *)puVar2 != 0) {
            lVar11 = *(long *)(lVar12 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(param_1);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
                lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
                if (lVar11 != 0) {
                  local_48 = lVar11;
                }
              }
            }
          }
          uVar8 = FUN_01b045f0(&local_58);
          if ((uVar8 & 1) != 0) {
            lVar12 = *(long *)puVar2;
            uVar4 = FUN_0277d6c4(param_1);
            lVar11 = *(long *)puVar2;
            if (lVar11 != 0) {
              lVar12 = *(long *)(lVar12 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                local_48 = 0;
                local_58 = &PTR_FUN_04a36b50;
                local_50 = *param_1;
                uStack_4c = param_1[1];
                uVar4 = FUN_0277d6c4(&local_50);
                if (*(long *)puVar2 != 0) {
                  lVar11 = *(long *)(lVar11 + 0x57e58);
                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                    lVar11 = *(long *)PTR_DAT_04bc0428;
                    uVar4 = FUN_0277d6c4(param_1);
                    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                    if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
                      lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
                      if (lVar11 != 0) {
                        local_48 = lVar11;
                      }
                    }
                  }
                }
                uVar8 = FUN_01af5064(&local_58,10);
                if ((uVar8 & 1) != 0) goto LAB_024f770c;
                lVar11 = *(long *)puVar2;
              }
            }
            uVar4 = FUN_0277d6c4(param_1);
            lVar12 = *(long *)puVar2;
            if (lVar12 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                local_48 = 0;
                local_58 = &PTR_FUN_04a36b50;
                local_50 = *param_1;
                uStack_4c = param_1[1];
                uVar4 = FUN_0277d6c4(&local_50);
                if (*(long *)puVar2 != 0) {
                  lVar11 = *(long *)(lVar12 + 0x57e58);
                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                    lVar11 = *(long *)PTR_DAT_04bc0428;
                    uVar4 = FUN_0277d6c4(param_1);
                    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                    if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
                      lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
                      if (lVar11 != 0) {
                        local_48 = lVar11;
                      }
                    }
                  }
                }
                uVar6 = FUN_01af5064(&local_58,0xb);
                uVar6 = uVar6 ^ 1;
                goto LAB_024f7710;
              }
            }
            goto LAB_024f7818;
          }
        }
      }
    }
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024f7254;
    local_48 = 0;
    local_50 = *param_1;
    uStack_4c = param_1[1];
    local_58 = &PTR_FUN_04a36b50;
    uVar4 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar2 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
          lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
          if (lVar11 != 0) {
            local_48 = lVar11;
          }
        }
      }
    }
    iVar5 = FUN_01afcfa0(&local_58);
    if (((iVar5 == 0) || (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 == (ushort *)0x0)) ||
       ((*puVar7 & 0x18) != 0x10)) goto LAB_024f7254;
  }
LAB_024f770c:
  uVar6 = 0;
LAB_024f7710:
  return uVar6 & 1;
}

