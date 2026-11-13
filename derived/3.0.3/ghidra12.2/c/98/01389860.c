
void FUN_01389860(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  ulong uVar17;
  
  uVar3 = *(uint *)(param_1 + 8) & 0xfffffffd | (uint)*(byte *)(param_2 + 7) << 1;
  *(uint *)(param_1 + 8) = uVar3;
  uVar3 = uVar3 & 0xfffffffb | (uint)*(byte *)((long)param_2 + 0x39) << 2;
  *(uint *)(param_1 + 8) = uVar3;
  *(uint *)(param_1 + 8) = uVar3 & 0xfffffff7 | (uint)*(byte *)(param_2 + 0xd) << 3;
  *(int *)(param_1 + 0x20) = (int)param_2[4];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  *(int *)(param_1 + 0x30) = (int)param_2[6];
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  *(int *)(param_1 + 0x48) = (int)param_2[10];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x54);
  *(int *)(param_1 + 0x58) = (int)param_2[0xc];
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 100);
  lVar4 = DAT_05ae7600;
  uVar3 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar3) {
    sVar15 = (ulong)uVar3 * 0xc;
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc(sVar15);
    }
    else {
      plVar5 = (long *)*param_2;
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar4 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_013899b4;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar15,8);
    }
    if (puVar7 != (undefined8 *)0x0) {
      puVar16 = puVar7;
      do {
        *puVar16 = 0xfffe;
        FUN_0277d4ac(puVar16);
        *(undefined4 *)(puVar16 + 1) = 0;
        puVar16 = (undefined8 *)((long)puVar16 + 0xc);
      } while (puVar16 != (undefined8 *)((long)puVar7 + (ulong)uVar3 * 0xc));
      *(uint *)(param_1 + 0x60) = uVar3;
      *(undefined8 **)(param_1 + 0x68) = puVar7;
    }
  }
LAB_013899b4:
  lVar4 = DAT_05ae7600;
  if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
    uVar3 = *(uint *)(param_2 + 1);
    if (0 < (int)uVar3) {
      sVar15 = (ulong)uVar3 * 6;
      if (DAT_05ae7600 == 0) {
        puVar8 = malloc(sVar15);
      }
      else {
        plVar5 = (long *)*param_2;
        if (plVar5 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar4 + 8);
          if (lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_01389ae4;
        }
        puVar8 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar15,8);
      }
      if (puVar8 != (undefined4 *)0x0) {
        uVar2 = ((uint)((sVar15 - 6) / 6) & 0x3fffffff) + 1;
        uVar17 = (ulong)uVar2 & 7;
        puVar11 = puVar8;
        if ((uVar2 & 7) != 0) {
          puVar13 = puVar8;
          do {
            puVar11 = (undefined4 *)((long)puVar13 + 6);
            *(undefined1 *)(puVar13 + 1) = 0;
            uVar17 = uVar17 - 1;
            *puVar13 = 0;
            puVar13 = puVar11;
          } while (uVar17 != 0);
        }
        if (0x29 < sVar15 - 6) {
          do {
            *(undefined1 *)(puVar11 + 1) = 0;
            *puVar11 = 0;
            *(undefined4 *)((long)puVar11 + 6) = 0;
            *(undefined1 *)((long)puVar11 + 10) = 0;
            puVar11[3] = 0;
            *(undefined1 *)(puVar11 + 4) = 0;
            *(undefined4 *)((long)puVar11 + 0x12) = 0;
            *(undefined1 *)((long)puVar11 + 0x16) = 0;
            puVar11[6] = 0;
            *(undefined1 *)(puVar11 + 7) = 0;
            *(undefined4 *)((long)puVar11 + 0x1e) = 0;
            *(undefined1 *)((long)puVar11 + 0x22) = 0;
            puVar11[9] = 0;
            *(undefined1 *)(puVar11 + 10) = 0;
            *(undefined1 *)((long)puVar11 + 0x2e) = 0;
            *(undefined4 *)((long)puVar11 + 0x2a) = 0;
            puVar11 = puVar11 + 0xc;
          } while (puVar11 != (undefined4 *)((long)puVar8 + sVar15));
        }
        *(uint *)(param_1 + 0x70) = uVar3;
        *(undefined4 **)(param_1 + 0x78) = puVar8;
      }
    }
  }
LAB_01389ae4:
  lVar4 = DAT_05ae7600;
  if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
    iVar1 = (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x48)) + 1;
    uVar3 = iVar1 + iVar1 * (*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x4c));
    uVar17 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      sVar15 = uVar17 * 6 + 8;
      if (DAT_05ae7600 == 0) {
        puVar9 = malloc(sVar15);
      }
      else {
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          param_2 = (long *)(lVar4 + 8);
          if (lVar6 != 0) {
            param_2 = (long *)(lVar6 + 0xa8);
          }
          param_2 = (long *)*param_2;
          if (param_2 == (long *)0x0) goto LAB_01389c14;
        }
        puVar9 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,sVar15,8);
      }
      if (puVar9 != (ulong *)0x0) {
        puVar10 = puVar9 + 1;
        *puVar9 = uVar17;
        uVar12 = uVar17 * 6 - 6;
        uVar2 = ((uint)(uVar12 / 6) & 0x3fffffff) + 1;
        uVar14 = (ulong)uVar2 & 3;
        puVar9 = puVar10;
        if ((uVar2 & 3) != 0) {
          do {
            *(undefined4 *)puVar9 = 0;
            uVar14 = uVar14 - 1;
            *(undefined1 *)((long)puVar9 + 4) = 0;
            puVar9 = (ulong *)((long)puVar9 + 6);
          } while (uVar14 != 0);
        }
        if (0x11 < uVar12) {
          do {
            *(undefined4 *)puVar9 = 0;
            *(undefined1 *)((long)puVar9 + 4) = 0;
            *(undefined4 *)((long)puVar9 + 6) = 0;
            *(undefined1 *)((long)puVar9 + 10) = 0;
            *(undefined4 *)((long)puVar9 + 0xc) = 0;
            *(undefined1 *)(puVar9 + 2) = 0;
            *(undefined4 *)((long)puVar9 + 0x12) = 0;
            *(undefined1 *)((long)puVar9 + 0x16) = 0;
            puVar9 = puVar9 + 3;
          } while (puVar9 != (ulong *)((long)puVar10 + uVar17 * 6));
        }
        *(uint *)(param_1 + 0x80) = uVar3;
        *(ulong **)(param_1 + 0x88) = puVar10;
      }
    }
  }
LAB_01389c14:
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  return;
}

