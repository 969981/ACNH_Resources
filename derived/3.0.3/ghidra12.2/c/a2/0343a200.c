
undefined4 FUN_0343a200(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  ushort uVar11;
  long lVar12;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  uint local_68;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = (uint *)0x0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *param_1;
  uStack_74 = param_1[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_80 = puVar1;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 != (uint *)0x0)) {
        local_70 = puVar10;
      }
    }
  }
  local_90 = *param_2;
  uStack_8c = param_2[1];
  lVar12 = *(long *)puVar4;
  local_88 = (uint *)0x0;
  local_98 = puVar1;
  uVar5 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 != (uint *)0x0)) {
        local_88 = puVar10;
      }
    }
  }
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343a408;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343a408:
  if (uVar11 != 0xb) {
    if (local_88 == (uint *)0x0) {
      uVar11 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar11 < 0xbd))
              goto LAB_0343a4bc;
            }
          }
          uVar11 = 0;
        }
      }
    }
LAB_0343a4bc:
    if (uVar11 == 0xb) {
      return 1;
    }
  }
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343a574;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343a574:
  if (uVar11 == 0xb) {
    if (local_88 == (uint *)0x0) {
      uVar11 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar11 < 0xbd))
              goto LAB_0343a628;
            }
          }
          uVar11 = 0;
        }
      }
    }
LAB_0343a628:
    if (uVar11 != 0xb) {
      return 0xffffffff;
    }
  }
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343a6d8;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343a6d8:
  if (uVar11 == 0xb) {
    local_64 = 0xb;
    if (local_88 == (uint *)0x0) {
      local_68 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      local_68 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        local_68 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), local_68 < 0xbd
                 )) goto LAB_0343a78c;
            }
          }
          local_68 = 0;
        }
      }
    }
LAB_0343a78c:
    if (local_68 == 0xb) {
      iVar6 = FUN_01aed730(&local_80);
      iVar7 = FUN_01aed730(&local_98);
      if (iVar6 != iVar7) goto LAB_0343b594;
    }
  }
  puVar1 = PTR_DAT_04bc00c8;
  lVar12 = 0;
  do {
    local_64 = *(uint *)((long)&DAT_057524f0 + lVar12);
    if (local_70 == (uint *)0x0) {
      uVar5 = 0xbc;
    }
    else {
      uVar5 = *local_70;
      if (uVar5 != 0 && local_70 != (uint *)(ulong)uVar5) {
        puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
        uVar5 = 0;
        if (*puVar10 == 0) goto LAB_0343a894;
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar2) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)puVar1) &&
               (uVar5 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
               uVar5 < 0xbd)) goto LAB_0343a894;
          }
        }
      }
      uVar5 = 0;
    }
LAB_0343a894:
    if (uVar5 != local_64) {
      if (local_88 == (uint *)0x0) {
        uVar5 = 0xbc;
      }
      else {
        uVar3 = *local_88;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_88 != (uint *)(ulong)uVar3)) {
          puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar10 != 0) {
            uVar5 = puVar10[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar2 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar2 != 0) {
                uVar3 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar3 = (uint)((ulong)((long)local_88 - lVar2) / (ulong)uVar5);
                }
                if (*puVar10 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)puVar1) &&
                   (uVar5 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
                   uVar5 < 0xbd)) goto LAB_0343a938;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_0343a938:
      if (uVar5 == local_64) {
        return 1;
      }
    }
    if (local_70 == (uint *)0x0) {
      uVar5 = 0xbc;
    }
    else {
      uVar3 = *local_70;
      uVar5 = 0;
      if ((uVar3 != 0) && (local_70 != (uint *)(ulong)uVar3)) {
        puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar3);
        uVar5 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar2 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_70 - lVar2) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (uVar5 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
                 uVar5 < 0xbd)) goto LAB_0343a9d8;
            }
          }
          uVar5 = 0;
        }
      }
    }
LAB_0343a9d8:
    if (uVar5 == local_64) {
      if (local_88 == (uint *)0x0) {
        uVar5 = 0xbc;
      }
      else {
        uVar3 = *local_88;
        uVar5 = 0;
        if ((uVar3 != 0) && (local_88 != (uint *)(ulong)uVar3)) {
          puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar10 != 0) {
            uVar5 = puVar10[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar2 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar2 != 0) {
                uVar3 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar3 = (uint)((ulong)((long)local_88 - lVar2) / (ulong)uVar5);
                }
                if (*puVar10 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)puVar1) &&
                   (uVar5 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
                   uVar5 < 0xbd)) goto LAB_0343aa7c;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_0343aa7c:
      if (uVar5 != local_64) {
        return 0xffffffff;
      }
    }
    if (local_70 == (uint *)0x0) {
      uVar5 = 0xbc;
    }
    else {
      uVar3 = *local_70;
      uVar5 = 0;
      if ((uVar3 != 0) && (local_70 != (uint *)(ulong)uVar3)) {
        puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar3);
        uVar5 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar2 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_70 - lVar2) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (uVar5 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
                 uVar5 < 0xbd)) goto LAB_0343ab24;
            }
          }
          uVar5 = 0;
        }
      }
    }
LAB_0343ab24:
    if (uVar5 == local_64) {
      if (local_88 == (uint *)0x0) {
        local_68 = 0xbc;
      }
      else {
        uVar5 = *local_88;
        local_68 = 0;
        if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
          puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
          local_68 = 0;
          if (*puVar10 != 0) {
            uVar5 = puVar10[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar2 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar2 != 0) {
                uVar3 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar3 = (uint)((ulong)((long)local_88 - lVar2) / (ulong)uVar5);
                }
                if (*puVar10 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)puVar1) &&
                   (local_68 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
                   local_68 < 0xbd)) goto LAB_0343abc8;
              }
            }
            local_68 = 0;
          }
        }
      }
LAB_0343abc8:
      if (local_68 == local_64) {
        iVar6 = FUN_01aed730(&local_80);
        iVar7 = FUN_01aed730(&local_98);
        if (iVar6 != iVar7) goto LAB_0343b594;
      }
    }
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x2c);
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)puVar1) &&
               (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343ac98;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343ac98:
  if (uVar11 != 0x2d) {
    if (local_88 == (uint *)0x0) {
      uVar11 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd)
                 ) goto LAB_0343ad44;
            }
          }
          uVar11 = 0;
        }
      }
    }
LAB_0343ad44:
    if (uVar11 == 0x2d) {
      return 1;
    }
  }
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)puVar1) &&
               (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343adec;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343adec:
  if (uVar11 == 0x2d) {
    if (local_88 == (uint *)0x0) {
      uVar11 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd)
                 ) goto LAB_0343ae98;
            }
          }
          uVar11 = 0;
        }
      }
    }
LAB_0343ae98:
    if (uVar11 != 0x2d) {
      return 0xffffffff;
    }
  }
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)puVar1) &&
               (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343af40;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343af40:
  if (uVar11 == 0x2d) {
    local_64 = 0x2d;
    if (local_88 == (uint *)0x0) {
      local_68 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      local_68 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        local_68 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (local_68 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
                 local_68 < 0xbd)) goto LAB_0343afec;
            }
          }
          local_68 = 0;
        }
      }
    }
LAB_0343afec:
    if (local_68 == 0x2d) {
      iVar6 = FUN_01aed730(&local_80);
      iVar7 = FUN_01aed730(&local_98);
      if (iVar6 != iVar7) goto LAB_0343b594;
    }
  }
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)puVar1) &&
               (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343b0b8;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343b0b8:
  if (uVar11 != 0x34) {
    if (local_88 == (uint *)0x0) {
      uVar11 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd)
                 ) goto LAB_0343b164;
            }
          }
          uVar11 = 0;
        }
      }
    }
LAB_0343b164:
    if (uVar11 == 0x34) {
      return 1;
    }
  }
  if (local_70 == (uint *)0x0) {
    uVar11 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    uVar11 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)puVar1) &&
               (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd))
            goto LAB_0343b20c;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0343b20c:
  if (uVar11 == 0x34) {
    if (local_88 == (uint *)0x0) {
      uVar11 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      uVar11 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (uVar11 = *(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2), uVar11 < 0xbd)
                 ) goto LAB_0343b2b8;
            }
          }
          uVar11 = 0;
        }
      }
    }
LAB_0343b2b8:
    if (uVar11 != 0x34) {
      return 0xffffffff;
    }
  }
  local_64 = 0x34;
  if (local_70 == (uint *)0x0) {
    local_68 = 0xbc;
  }
  else {
    uVar5 = *local_70;
    local_68 = 0;
    if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_70 - (long)(ulong)uVar5);
      local_68 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)puVar1) &&
               (local_68 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
               local_68 < 0xbd)) goto LAB_0343b360;
          }
        }
        local_68 = 0;
      }
    }
  }
LAB_0343b360:
  if (local_68 == 0x34) {
    local_64 = 0x34;
    if (local_88 == (uint *)0x0) {
      local_68 = 0xbc;
    }
    else {
      uVar5 = *local_88;
      local_68 = 0;
      if ((uVar5 != 0) && (local_88 != (uint *)(ulong)uVar5)) {
        puVar10 = (uint *)((long)local_88 - (long)(ulong)uVar5);
        local_68 = 0;
        if (*puVar10 != 0) {
          uVar5 = puVar10[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar5 != 0) {
                uVar3 = (uint)((ulong)((long)local_88 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)puVar1) &&
                 (local_68 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar3 * 2),
                 local_68 < 0xbd)) goto LAB_0343b40c;
            }
          }
          local_68 = 0;
        }
      }
    }
LAB_0343b40c:
    if (local_68 == 0x34) {
      iVar6 = FUN_01aed730(&local_80);
      iVar7 = FUN_01aed730(&local_98);
      if (iVar6 != iVar7) goto LAB_0343b594;
    }
  }
  iVar6 = FUN_0277d6c4(param_1);
  if ((iVar6 == 0x38f1) || (iVar6 = FUN_0277d6c4(param_2), iVar6 != 0x38f1)) {
    iVar6 = FUN_0277d6c4(param_1);
    if ((iVar6 == 0x38f1) && (iVar6 = FUN_0277d6c4(param_2), iVar6 != 0x38f1)) {
      return 0xffffffff;
    }
    iVar6 = FUN_0277d6c4(param_1);
    if ((iVar6 == 0x1774) || (iVar6 = FUN_0277d6c4(param_2), iVar6 != 0x1774)) {
      iVar6 = FUN_0277d6c4(param_1);
      if ((iVar6 == 0x1774) && (iVar6 = FUN_0277d6c4(param_2), iVar6 != 0x1774)) {
        return 0xffffffff;
      }
      iVar6 = FUN_0277d6c4(param_1);
      if ((iVar6 == 0x1775) || (iVar6 = FUN_0277d6c4(param_2), iVar6 != 0x1775)) {
        iVar6 = FUN_0277d6c4(param_1);
        if ((iVar6 == 0x1775) && (iVar6 = FUN_0277d6c4(param_2), iVar6 != 0x1775)) {
          return 0xffffffff;
        }
        uVar9 = FUN_01ad6a30(&local_80,6);
        if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad6a30(&local_98,6), (uVar9 & 1) != 0)) {
          return 0xffffffff;
        }
        uVar9 = FUN_01ad6a30(&local_80,6);
        if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad6a30(&local_98,6), (uVar9 & 1) != 0)) {
          uVar9 = FUN_01ad6a30(&local_80,6);
          if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ad6a30(&local_98,6), (uVar9 & 1) != 0)) {
            iVar6 = FUN_01aed730(&local_80);
            iVar7 = FUN_01aed730(&local_98);
            if (iVar6 != iVar7) {
LAB_0343b594:
              uVar8 = FUN_01a4e7e0(param_1,param_2);
              return uVar8;
            }
          }
          return 0;
        }
      }
    }
  }
  return 1;
}

