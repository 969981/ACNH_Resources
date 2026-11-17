
undefined8 FUN_031165f8(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_2 < 0) {
    return 0xffffffff;
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_1 + 0x230);
  lVar8 = *(long *)puVar2;
  iVar7 = 0;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x230);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x234);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_0311671c:
        if (local_58 != (uint *)0x0) goto LAB_03116724;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0311671c;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x230);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_0311671c;
        local_58 = puVar4;
LAB_03116724:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_031167b8;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_031167b8:
      if ((uVar5 & 0xfffb) != 8) {
        if (param_2 == 0) {
          return 0;
        }
        iVar7 = 1;
        goto LAB_031167d0;
      }
    }
    iVar7 = 0;
  }
LAB_031167d0:
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x238);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x238);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x23c);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_031168bc:
        if (local_58 != (uint *)0x0) goto LAB_031168c4;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_031168bc;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x238);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_031168bc;
        local_58 = puVar4;
LAB_031168c4:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_03116964;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_03116964:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 1;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x240);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x240);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x244);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_03116a78:
        if (local_58 != (uint *)0x0) goto LAB_03116a80;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03116a78;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x240);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_03116a78;
        local_58 = puVar4;
LAB_03116a80:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_03116b14;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_03116b14:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 2;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x248);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x248);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x24c);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_03116c28:
        if (local_58 != (uint *)0x0) goto LAB_03116c30;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03116c28;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x248);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_03116c28;
        local_58 = puVar4;
LAB_03116c30:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_03116cc4;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_03116cc4:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 3;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x250);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x250);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x254);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_03116dd8:
        if (local_58 != (uint *)0x0) goto LAB_03116de0;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03116dd8;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x250);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_03116dd8;
        local_58 = puVar4;
LAB_03116de0:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_03116e74;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_03116e74:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 4;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 600);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 600);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x25c);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_03116f88:
        if (local_58 != (uint *)0x0) goto LAB_03116f90;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03116f88;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 600);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_03116f88;
        local_58 = puVar4;
LAB_03116f90:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_03117024;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_03117024:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 5;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x260);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x260);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x264);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_03117138:
        if (local_58 != (uint *)0x0) goto LAB_03117140;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03117138;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x260);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_03117138;
        local_58 = puVar4;
LAB_03117140:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_031171d4;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_031171d4:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 6;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x268);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x268);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x26c);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_031172f0:
        if (local_58 != (uint *)0x0) goto LAB_031172f8;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_031172f0;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x268);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_031172f0;
        local_58 = puVar4;
LAB_031172f8:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_0311738c;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_0311738c:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 7;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x270);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x270);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x274);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_031174a0:
        if (local_58 != (uint *)0x0) goto LAB_031174a8;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_031174a0;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x270);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_031174a0;
        local_58 = puVar4;
LAB_031174a8:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_0311753c;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_0311753c:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 8;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x278);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *(undefined4 *)(param_1 + 0x278);
      local_58 = (uint *)0x0;
      uStack_5c = *(undefined4 *)(param_1 + 0x27c);
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_03117650:
        if (local_58 != (uint *)0x0) goto LAB_03117658;
        uVar5 = 0xbc;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03117650;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0x278);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar4 == (uint *)0x0)) goto LAB_03117650;
        local_58 = puVar4;
LAB_03117658:
        uVar3 = *local_58;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
          puVar4 = (uint *)((long)local_58 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar4 != 0) {
            uVar3 = puVar4[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar4 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar3);
                }
                if (*puVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_031176ec;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_031176ec:
      if ((uVar5 & 0xfffb) != 8) {
        if (iVar7 == param_2) {
          return 9;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x280);
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    return 0xffffffff;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar3) {
    return 0xffffffff;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0xffffffff;
  }
  local_60 = *(undefined4 *)(param_1 + 0x280);
  local_58 = (uint *)0x0;
  uStack_5c = *(undefined4 *)(param_1 + 0x284);
  uVar3 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 == 0) {
LAB_03117800:
    puVar4 = local_58;
    if (local_58 == (uint *)0x0) {
      uVar5 = 0xbc;
      goto LAB_0311789c;
    }
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03117800;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1 + 0x280);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), puVar4 == (uint *)0x0)
       ) goto LAB_03117800;
  }
  uVar3 = *puVar4;
  uVar5 = 0;
  if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar4 - lVar8) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
          goto LAB_0311789c;
        }
      }
      uVar5 = 0;
    }
  }
LAB_0311789c:
  if (((uVar5 & 0xfffb) == 8) || (iVar7 != param_2)) {
    return 0xffffffff;
  }
  return 10;
}

