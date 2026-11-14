
void FUN_01d4eaa4(long param_1,byte *param_2)

{
  byte *pbVar1;
  void *pvVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = PTR_DAT_04bb5038;
  puVar5 = PTR_DAT_04bb4f78;
  puVar4 = PTR_DAT_04bb27d0;
  bVar7 = *param_2;
  if ((long)(char)bVar7 != 0xffffffffffffffff) {
    param_1 = param_1 + 0x460;
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *PTR_DAT_04bb5038;
    if (bVar3 < 8) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar10 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar10 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar10 + 0x431fc0) =
                   *(uint *)(lVar10 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
          bVar7 = *param_2;
          if (bVar7 == 0xff) {
            return;
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb4f78;
    bVar3 = puVar6[1];
    if (bVar3 < 8) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar10 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar10 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar10 + 0x431fc0) =
                   *(uint *)(lVar10 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
          bVar7 = *param_2;
          if (bVar7 == 0xff) {
            return;
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb4f78;
    bVar3 = puVar6[2];
    if (bVar3 < 8) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar10 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar10 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar10 + 0x431fc0) =
                   *(uint *)(lVar10 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
          bVar7 = *param_2;
          if (bVar7 == 0xff) {
            return;
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb4f78;
    bVar3 = puVar6[3];
    if (bVar3 < 8) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar10 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar10 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar10 + 0x431fc0) =
                   *(uint *)(lVar10 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
          bVar7 = *param_2;
          if (bVar7 == 0xff) {
            return;
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb4f78;
    bVar3 = puVar6[4];
    if (bVar3 < 8) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar10 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar10 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar10 + 0x431fc0) =
                   *(uint *)(lVar10 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
          bVar7 = *param_2;
          if (bVar7 == 0xff) {
            return;
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb4f78;
    bVar3 = puVar6[5];
    if (bVar3 < 8) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar10 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar10 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar10 + 0x431fc0) =
                   *(uint *)(lVar10 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
          bVar7 = *param_2;
          if (bVar7 == 0xff) {
            return;
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb4f78;
    bVar3 = puVar6[6];
    if (bVar3 < 8) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar10 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar10 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar10 + 0x431fc0) =
                   *(uint *)(lVar10 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
          bVar7 = *param_2;
        }
      }
    }
    puVar5 = PTR_DAT_04bb4f78;
    if ((bVar7 != 0xff) && (bVar3 = puVar6[7], bVar3 < 8)) {
      pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
      if (7 < bVar7) {
        pbVar1 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(pbVar1 + 0x7c) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
        pbVar1 = (byte *)(param_1 + (ulong)(uint)bVar3 * 2);
        if (pbVar1[1] != 0) {
          if ((ulong)*pbVar1 < 8) {
            lVar9 = *(long *)PTR_DAT_04bb4f78;
            pvVar2 = (void *)(lVar9 + (ulong)*pbVar1 * 0x37ad0 + 0x3a20);
            memset(pvVar2,0,0x37ad0);
            FUN_027ee494(pvVar2);
            if (*pbVar1 < 8) {
              *(uint *)(lVar9 + 0x431fc0) =
                   *(uint *)(lVar9 + 0x431fc0) & (1 << (ulong)(*pbVar1 & 0x1f) ^ 0xffffffffU);
            }
            puVar8 = *(undefined8 **)puVar5;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = 0xffffffffffffffff;
              puVar8[3] = 0xffffffffffffffff;
              *puVar8 = 0xffffffffffffffff;
              puVar8[1] = 0xffffffffffffffff;
            }
            if ((*(long *)puVar4 == 0) || (*(int *)(*(long *)puVar4 + 0x80) != 3)) {
              FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,pbVar1);
            }
          }
          pbVar1[1] = 0;
        }
      }
    }
  }
  return;
}

