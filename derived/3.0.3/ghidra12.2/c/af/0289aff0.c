
uint FUN_0289aff0(long param_1,undefined4 *param_2,int param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar6) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return 0;
  }
  local_68 = 0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  local_78 = &PTR_FUN_04a36b50;
  uVar6 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 == 0) {
LAB_0289b190:
    local_7c = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0289b190;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8), puVar9 == (uint *)0x0
       )) goto LAB_0289b190;
    uVar6 = *puVar9;
    local_7c = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_7c = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05326ec0) &&
               (local_7c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar7 * 2), local_7c < 0xbd))
            goto LAB_0289b194;
          }
        }
        local_7c = 0;
      }
    }
  }
LAB_0289b194:
  puVar5 = PTR_DAT_04bc00c8;
  switch(local_7c) {
  case 9:
    if (param_3 == 0) {
LAB_0289b220:
      lVar11 = *(long *)puVar4;
      uVar6 = 0;
      do {
        puVar1 = (undefined2 *)(param_1 + 4 + ((long)((ulong)uVar6 << 0x20) >> 0x1d));
        uVar7 = FUN_0277d6c4(puVar1);
        lVar12 = *(long *)puVar4;
        if (lVar12 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar8 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            local_90 = *puVar1;
            lVar11 = param_1 + 4 + (long)(int)uVar6 * 8;
            local_88 = 0;
            local_8e = *(undefined2 *)(lVar11 + 2);
            local_8c = *(undefined4 *)(lVar11 + 4);
            uVar7 = FUN_0277d6c4(&local_90);
            lVar11 = *(long *)puVar4;
            if (lVar11 == 0) {
              uVar8 = 0xbc;
              goto LAB_0289b3fc;
            }
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar8 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
              lVar12 = *(long *)PTR_DAT_04bc0428;
              uVar7 = FUN_0277d6c4(puVar1);
              uVar8 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              lVar11 = *(long *)puVar4;
              if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
                 (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
                 puVar9 == (uint *)0x0)) goto LAB_0289b3ec;
              uVar2 = *puVar9;
              uVar8 = 0;
              if ((uVar2 != 0) && (puVar9 != (uint *)(ulong)uVar2)) {
                puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
                uVar8 = 0;
                if (*puVar10 != 0) {
                  uVar8 = puVar10[1];
                  if ((uVar8 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                    lVar12 = 0xc;
                    if (*(char *)((long)puVar10 + 10) != '\0') {
                      lVar12 = 0x1c;
                    }
                    lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
                    if (lVar12 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar8 != 0) {
                        uVar2 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar8);
                      }
                      if (*puVar10 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if (uVar2 < *(uint *)puVar5) {
                        uVar3 = *(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2);
                        if (uVar3 < 0xbd) {
                          uVar8 = 0x10;
                          if (uVar3 != 0x11) {
                            uVar8 = (uint)uVar3;
                          }
                          goto LAB_0289b3fc;
                        }
                      }
                      uVar8 = 0;
                      goto LAB_0289b3fc;
                    }
                  }
                  uVar8 = 0;
                }
              }
            }
            else {
LAB_0289b3ec:
              uVar8 = 0xbc;
            }
LAB_0289b3fc:
            if (local_7c == uVar8) {
              uVar7 = FUN_0277d7b4(puVar1,param_2);
              uVar6 = 1;
              goto LAB_0289b428;
            }
          }
          else {
            lVar11 = lVar12;
          }
        }
        uVar6 = uVar6 + 1;
        if (uVar6 == 0x80) {
          uVar6 = 0;
LAB_0289b428:
          return uVar6 & uVar7;
        }
      } while( true );
    }
    break;
  case 10:
    if (param_3 == 2) goto LAB_0289b220;
    break;
  case 0xd:
    if (param_3 == 1) goto LAB_0289b220;
    break;
  case 0xf:
    if (param_3 == 5) goto LAB_0289b220;
    break;
  case 0x10:
  case 0x11:
    if (param_3 == 3) {
      local_7c = 0x10;
      goto LAB_0289b220;
    }
    break;
  case 0x12:
    if (param_3 == 4) goto LAB_0289b220;
  }
  return 0;
}

