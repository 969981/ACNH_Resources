
void FUN_01d3ce1c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  byte local_38 [4];
  byte local_34 [4];
  
  puVar8 = PTR_DAT_04bb5038;
  puVar7 = PTR_DAT_04bb21d0;
  if (**(char **)(*(long *)PTR_DAT_04bb21d0 + 0x2070) == '\0') {
    uVar11 = *(uint *)(param_1 + 0x440);
    uVar12 = (uint)DAT_0548e168;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e168;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      uVar11 = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x440) = uVar11;
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar12 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((uVar12 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
        uVar11 = *(uint *)(param_1 + 0x440);
      }
    }
    uVar12 = (uint)DAT_0548e169;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e169;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      uVar11 = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x440) = uVar11;
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar12 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((uVar12 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
        uVar11 = *(uint *)(param_1 + 0x440);
      }
    }
    uVar12 = (uint)DAT_0548e16a;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e16a;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      uVar11 = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x440) = uVar11;
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar12 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((uVar12 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
        uVar11 = *(uint *)(param_1 + 0x440);
      }
    }
    uVar12 = (uint)DAT_0548e16b;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e16b;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      uVar11 = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x440) = uVar11;
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar12 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((uVar12 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
        uVar11 = *(uint *)(param_1 + 0x440);
      }
    }
    uVar12 = (uint)DAT_0548e16c;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e16c;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      uVar11 = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x440) = uVar11;
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar12 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((uVar12 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
        uVar11 = *(uint *)(param_1 + 0x440);
      }
    }
    uVar12 = (uint)DAT_0548e16d;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e16d;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      uVar11 = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x440) = uVar11;
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar12 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((uVar12 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
        uVar11 = *(uint *)(param_1 + 0x440);
      }
    }
    uVar12 = (uint)DAT_0548e16e;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e16e;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      uVar11 = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x440) = uVar11;
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar12 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((uVar12 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
        uVar11 = *(uint *)(param_1 + 0x440);
      }
    }
    uVar12 = (uint)DAT_0548e16f;
    if ((uVar11 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar13 = (uint)DAT_0548e16f;
      if (7 < uVar12) {
        uVar13 = 0xffffffff;
      }
      *(uint *)(param_1 + 0x440) = uVar11 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
      lVar16 = param_1 + 0x444 + ((long)(char)uVar13 & 0xffffffffU) * 4;
      if (7 < uVar12) {
        lVar16 = param_1 + 0x444;
      }
      bVar6 = *(byte *)(lVar16 + 2);
      puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar11 = (uint)(byte)puVar5[0x1e];
      if (7 < uVar11) {
        uVar11 = 0xffffffff;
      }
      if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          if ((uVar11 & 0xc) == 0) {
            local_34[0] = bVar6;
            FUN_01d3cca0(param_1,local_34);
          }
          else {
            *puVar5 = uVar11 & 0xfffffffd;
          }
        }
        FUN_01d3e314(param_1);
      }
    }
  }
  else {
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88);
    bVar6 = *PTR_DAT_04bb5038;
    uVar11 = (uint)bVar6;
    if (*(int *)(lVar16 + 0x10) != *(int *)(lVar16 + 0x118)) {
      uVar12 = *(uint *)(param_1 + 0x440);
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar13 = uVar11;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar11) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if (((*plVar4 == 0) || ((char)plVar4[2] == -1)) ||
             (*plVar4 != *plVar3 || (char)plVar4[1] != (char)plVar3[1])) {
            uVar12 = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            *(uint *)(param_1 + 0x440) = uVar12;
            lVar1 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar11) {
              lVar1 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar1 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
              uVar12 = *(uint *)(param_1 + 0x440);
            }
          }
        }
      }
      bVar6 = puVar8[1];
      uVar11 = (uint)bVar6;
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar14 = (uint)bVar6;
        uVar13 = uVar14;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar14) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if (((*plVar4 == 0) || ((char)plVar4[2] == -1)) ||
             (*plVar4 != *plVar3 || (char)plVar4[1] != (char)plVar3[1])) {
            uVar12 = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            *(uint *)(param_1 + 0x440) = uVar12;
            lVar1 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar14) {
              lVar1 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar1 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
              uVar12 = *(uint *)(param_1 + 0x440);
            }
          }
        }
      }
      bVar6 = puVar8[2];
      uVar11 = (uint)bVar6;
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar14 = (uint)bVar6;
        uVar13 = uVar14;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar14) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if (((*plVar4 == 0) || ((char)plVar4[2] == -1)) ||
             (*plVar4 != *plVar3 || (char)plVar4[1] != (char)plVar3[1])) {
            uVar12 = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            *(uint *)(param_1 + 0x440) = uVar12;
            lVar1 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar14) {
              lVar1 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar1 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
              uVar12 = *(uint *)(param_1 + 0x440);
            }
          }
        }
      }
      bVar6 = puVar8[3];
      uVar11 = (uint)bVar6;
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar14 = (uint)bVar6;
        uVar13 = uVar14;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar14) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if (((*plVar4 == 0) || ((char)plVar4[2] == -1)) ||
             ((*plVar4 != *plVar3 || ((char)plVar4[1] != (char)plVar3[1])))) {
            uVar12 = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            *(uint *)(param_1 + 0x440) = uVar12;
            lVar1 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar14) {
              lVar1 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar1 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
              uVar12 = *(uint *)(param_1 + 0x440);
            }
          }
        }
      }
      bVar6 = puVar8[4];
      uVar11 = (uint)bVar6;
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar14 = (uint)bVar6;
        uVar13 = uVar14;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar14) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if ((((*plVar4 == 0) || ((char)plVar4[2] == -1)) || (*plVar4 != *plVar3)) ||
             ((char)plVar4[1] != (char)plVar3[1])) {
            uVar12 = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            *(uint *)(param_1 + 0x440) = uVar12;
            lVar1 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar14) {
              lVar1 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar1 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
              uVar12 = *(uint *)(param_1 + 0x440);
            }
          }
        }
      }
      bVar6 = puVar8[5];
      uVar11 = (uint)bVar6;
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar14 = (uint)bVar6;
        uVar13 = uVar14;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar14) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if (((*plVar4 == 0) || ((char)plVar4[2] == -1)) ||
             ((*plVar4 != *plVar3 || ((char)plVar4[1] != (char)plVar3[1])))) {
            uVar12 = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            *(uint *)(param_1 + 0x440) = uVar12;
            lVar1 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar14) {
              lVar1 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar1 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
              uVar12 = *(uint *)(param_1 + 0x440);
            }
          }
        }
      }
      bVar6 = puVar8[6];
      uVar11 = (uint)bVar6;
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar14 = (uint)bVar6;
        uVar13 = uVar14;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar14) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if ((((*plVar4 == 0) || ((char)plVar4[2] == -1)) || (*plVar4 != *plVar3)) ||
             ((char)plVar4[1] != (char)plVar3[1])) {
            uVar12 = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            *(uint *)(param_1 + 0x440) = uVar12;
            lVar1 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar14) {
              lVar1 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar1 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
              uVar12 = *(uint *)(param_1 + 0x440);
            }
          }
        }
      }
      bVar6 = puVar8[7];
      uVar11 = (uint)bVar6;
      if ((uVar12 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
        uVar14 = (uint)bVar6;
        uVar13 = uVar14;
        if (7 < uVar11) {
          uVar13 = 0xffffffff;
        }
        uVar15 = (long)(char)uVar13 & 0xffffffff;
        plVar3 = (long *)(lVar16 + 0x18) + uVar15 * 4;
        if (7 < uVar11) {
          plVar3 = (long *)(lVar16 + 0x18);
        }
        if ((*plVar3 != 0) && ((char)plVar3[2] != -1)) {
          plVar4 = (long *)(lVar16 + 0x120) + uVar15 * 4;
          if (7 < uVar14) {
            plVar4 = (long *)(lVar16 + 0x120);
          }
          if (((*plVar4 == 0) || ((char)plVar4[2] == -1)) ||
             ((*plVar4 != *plVar3 || ((char)plVar4[1] != (char)plVar3[1])))) {
            *(uint *)(param_1 + 0x440) = uVar12 & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
            lVar16 = param_1 + 0x444 + uVar15 * 4;
            if (7 < uVar14) {
              lVar16 = param_1 + 0x444;
            }
            bVar6 = *(byte *)(lVar16 + 2);
            puVar5 = (uint *)(param_1 + 0x40) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar11 = (uint)(byte)puVar5[0x1e];
            if (7 < uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 & 0xff) == (uVar13 & 0xff)) {
              uVar11 = *puVar5;
              if ((uVar11 & 1) != 0) {
                if ((uVar11 & 0xc) == 0) {
                  local_34[0] = bVar6;
                  FUN_01d3cca0(param_1,local_34);
                }
                else {
                  *puVar5 = uVar11 & 0xfffffffd;
                }
              }
              FUN_01d3e314(param_1);
            }
          }
        }
      }
      if (*(char *)(*(long *)puVar7 + 0x2078) == '\0') {
        FUN_01c9498c(*(undefined8 *)(*(long *)puVar7 + 0xf88));
        return;
      }
      FUN_01c9472c();
      return;
    }
    if ((((uVar11 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0)) &&
        (*(char *)(lVar1 + 0x28) != -1)) &&
       ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    bVar6 = puVar8[1];
    if ((((ulong)bVar6 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0))
       && ((*(char *)(lVar1 + 0x28) != -1 &&
           ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)))) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    bVar6 = puVar8[2];
    if ((((ulong)bVar6 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0))
       && ((*(char *)(lVar1 + 0x28) != -1 &&
           ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)))) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    bVar6 = puVar8[3];
    if (((((ulong)bVar6 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0)
         ) && (*(char *)(lVar1 + 0x28) != -1)) &&
       ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    bVar6 = puVar8[4];
    if ((((ulong)bVar6 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0))
       && ((*(char *)(lVar1 + 0x28) != -1 &&
           ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)))) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    bVar6 = puVar8[5];
    if ((((ulong)bVar6 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0))
       && ((*(char *)(lVar1 + 0x28) != -1 &&
           ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)))) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    bVar6 = puVar8[6];
    if (((((ulong)bVar6 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0)
         ) && (*(char *)(lVar1 + 0x28) != -1)) &&
       ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    bVar6 = puVar8[7];
    if ((((ulong)bVar6 < 8) && (lVar1 = lVar16 + (ulong)bVar6 * 0x20, *(long *)(lVar1 + 0x18) != 0))
       && ((*(char *)(lVar1 + 0x28) != -1 &&
           ((*(uint *)(param_1 + 0x440) >> (ulong)(bVar6 & 0x1f) & 1) == 0)))) {
      local_38[0] = bVar6;
      FUN_01d3de40(param_1,local_38);
    }
    if (7 < *(byte *)(param_1 + 0x469)) {
      bVar6 = *(byte *)(lVar16 + 0x225);
      if ((ulong)bVar6 < 8) {
        *(byte *)(param_1 + 0x469) = bVar6;
        *(undefined1 *)(param_1 + 0x46b) =
             *(undefined1 *)(lVar16 + 0x18 + (ulong)bVar6 * 0x20 + 0x10);
        pbVar10 = (byte *)FUN_01c94c44(lVar16);
        uVar11 = (uint)*pbVar10;
        bVar9 = 7 < uVar11;
        if (bVar9) {
          uVar11 = 0xff;
        }
        *(char *)(param_1 + 0x468) = (char)uVar11;
        puVar2 = (undefined1 *)(lVar16 + 0x18 + (ulong)uVar11 * 0x20 + 0x10);
        if (bVar9) {
          puVar2 = PTR_DAT_04bb5018;
        }
        *(undefined1 *)(param_1 + 0x46a) = *puVar2;
      }
    }
  }
  return;
}

