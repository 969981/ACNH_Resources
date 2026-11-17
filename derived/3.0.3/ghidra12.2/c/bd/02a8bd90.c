
/* WARNING: Removing unreachable block (ram,0x02a8c11c) */
/* WARNING: Removing unreachable block (ram,0x02a8c04c) */
/* WARNING: Removing unreachable block (ram,0x02a8bfcc) */
/* WARNING: Removing unreachable block (ram,0x02a8c054) */

void FUN_02a8bd90(long param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  char cVar12;
  uint *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined4 local_68 [3];
  int local_5c;
  int local_48;
  ushort local_44;
  
  puVar3 = PTR_DAT_04bb4270;
  puVar2 = PTR_DAT_04bb4268;
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0x2c8) != '\0') {
      *(undefined1 *)(param_1 + 0x2c8) = 0;
    }
    *(undefined8 *)(param_1 + 0x2a8) = 0x100000007;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
      FUN_007a9614(PTR_DAT_04bb4268);
      __cxa_guard_release(PTR_DAT_04bb4270);
    }
    if (0 < (int)*(uint *)puVar2) {
      uVar8 = 0;
      do {
        if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == 0) goto LAB_02a8be28;
        uVar8 = uVar8 + 1;
      } while (*(uint *)puVar2 != uVar8);
    }
    uVar8 = 0;
LAB_02a8be28:
    *(int *)(param_1 + 0x2c0) = (int)uVar8;
    *(undefined1 *)(param_1 + 0x2c8) = 1;
    *(undefined4 *)(param_1 + 0x2ac) = 1;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 1;
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x20c);
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x204);
    return;
  }
  if (*(char *)(param_1 + 0x2a4) != '\0') {
    *(undefined1 *)(param_1 + 0x2a4) = 0;
  }
  *(undefined8 *)(param_1 + 0x284) = 0x100000007;
  *(undefined8 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x29c) = 0;
  puVar15 = (undefined8 *)(param_1 + 0x28c);
  *puVar15 = 0;
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
    FUN_007a9614(PTR_DAT_04bb4268);
    __cxa_guard_release(PTR_DAT_04bb4270);
  }
  if (0 < (int)*(uint *)puVar2) {
    uVar8 = 0;
    do {
      if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == 0) goto LAB_02a8beb8;
      uVar8 = uVar8 + 1;
    } while (*(uint *)puVar2 != uVar8);
  }
  uVar8 = 0;
LAB_02a8beb8:
  *(int *)(param_1 + 0x29c) = (int)uVar8;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined1 *)(param_1 + 0x2a4) = 1;
  *(int *)(param_1 + 0x284) = param_2;
  switch(param_2) {
  case 0:
  case 2:
    *(undefined4 *)(param_1 + 0x288) = 1;
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x28c) = *(undefined8 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x1c4);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x288) = 4;
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x28c) = *(undefined8 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x298) = *param_4;
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
      FUN_007a9614(PTR_DAT_04bb4268);
      __cxa_guard_release(PTR_DAT_04bb4270);
    }
    if (0 < (int)*(uint *)puVar2) {
      uVar8 = 0;
      do {
        if (*(uint *)(*(long *)(puVar2 + 8) + uVar8 * 4) == (param_3 & 0xff)) {
          *(int *)(param_1 + 0x29c) = (int)uVar8;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)puVar2 != uVar8);
    }
    if (*(char *)(param_1 + 0xe8) != '\0') {
      if (*(char *)(param_1 + 0x2a4) == '\0') {
        *puVar15 = 0;
        *(undefined8 *)(param_1 + 0x294) = 0;
        *(undefined8 *)(param_1 + 0x284) = 0x100000007;
        *(undefined8 *)(param_1 + 0x29c) = 0;
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
          FUN_007a9614(PTR_DAT_04bb4268);
          __cxa_guard_release(PTR_DAT_04bb4270);
        }
        if (0 < (int)*(uint *)puVar2) {
          uVar8 = 0;
          do {
            if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == 0) goto LAB_02a8c340;
            uVar8 = uVar8 + 1;
          } while (*(uint *)puVar2 != uVar8);
        }
        uVar8 = 0;
LAB_02a8c340:
        *(int *)(param_1 + 0x29c) = (int)uVar8;
      }
      *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0xdc);
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x288) = 4;
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x28c) = *(undefined8 *)(param_1 + 0x1bc);
    local_68[0] = 0x32;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
    }
    FUN_02a58ea0(local_68,puVar1,puVar15);
    if (local_5c != 0x1a) {
      return;
    }
    if (*(char *)(param_1 + 0x2a4) == '\0') {
      *puVar15 = 0;
      *(undefined8 *)(param_1 + 0x294) = 0;
      *(undefined8 *)(param_1 + 0x284) = 0x100000007;
      *(undefined8 *)(param_1 + 0x29c) = 0;
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
        FUN_007a9614(PTR_DAT_04bb4268);
        __cxa_guard_release(PTR_DAT_04bb4270);
      }
      if (0 < (int)*(uint *)puVar2) {
        uVar8 = 0;
        do {
          if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == 0) goto LAB_02a8c1d4;
          uVar8 = uVar8 + 1;
        } while (*(uint *)puVar2 != uVar8);
      }
      uVar8 = 0;
LAB_02a8c1d4:
      *(int *)(param_1 + 0x29c) = (int)uVar8;
      *(undefined4 *)(param_1 + 0x2a0) = 0;
    }
    *(int *)(param_1 + 0x298) = (int)(long)((float)local_48 * 90.0 * 11930465.0);
    puVar5 = PTR_DAT_04bc4580;
    puVar4 = PTR_DAT_04bc4578;
    lVar9 = *(long *)PTR_DAT_04bb5008;
    uVar11 = (uint)local_44;
    if (local_5c != 0x1a) {
      uVar11 = 0;
    }
    uVar11 = uVar11 - *(ushort *)(lVar9 + 0xff0);
    if (*(uint *)(lVar9 + 0xfd0) <= uVar11) {
      return;
    }
    puVar10 = *(uint **)(*(long *)(lVar9 + 0xfd8) + (long)(int)uVar11 * 8);
    if (puVar10 == (uint *)0x0) {
      return;
    }
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      cVar12 = *PTR_DAT_04bc4578;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          uVar11 = *puVar10;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar7) {
            if ((ushort *)((ulong)uVar7 + (long)puVar10) != (ushort *)0x0) {
              uVar11 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar10);
              goto LAB_02a8c364;
            }
            break;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)uVar11;
        uVar11 = 0;
        if ((puVar13 == (uint *)0x0) || (puVar10 == puVar13)) goto LAB_02a8c364;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar13);
        if (lVar9 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        uVar11 = 0;
        if (uVar8 == 0) goto LAB_02a8c364;
        piVar14 = (int *)(lVar9 + 4);
        while (piVar14[-1] != -0x11631973) {
          piVar14 = piVar14 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar11 = 0;
            goto LAB_02a8c364;
          }
        }
        iVar6 = 0;
        if (*piVar14 != -1) {
          iVar6 = *piVar14;
        }
        *(int *)(puVar5 + 4) = iVar6;
        uVar11 = *puVar10;
      } while (uVar11 != 0);
    }
    uVar11 = 0;
LAB_02a8c364:
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
      FUN_007a9614(PTR_DAT_04bb4268);
      __cxa_guard_release(PTR_DAT_04bb4270);
    }
    if (0 < (int)*(uint *)puVar2) {
      uVar8 = 0;
      do {
        if (*(uint *)(*(long *)(puVar2 + 8) + uVar8 * 4) == uVar11) goto LAB_02a8c39c;
        uVar8 = uVar8 + 1;
      } while (*(uint *)puVar2 != uVar8);
    }
    uVar8 = 0;
LAB_02a8c39c:
    if (*(char *)(param_1 + 0x2a4) == '\0') {
      *puVar15 = 0;
      *(undefined8 *)(param_1 + 0x294) = 0;
      *(undefined8 *)(param_1 + 0x284) = 0x100000007;
      *(undefined8 *)(param_1 + 0x29c) = 0;
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
        FUN_007a9614(PTR_DAT_04bb4268);
        __cxa_guard_release(PTR_DAT_04bb4270);
      }
      *(undefined4 *)(param_1 + 0x2a0) = 0;
    }
    *(int *)(param_1 + 0x29c) = (int)uVar8;
    uVar7 = 0;
    uVar11 = *puVar10;
    if ((uVar11 != 0) && (puVar10 != (uint *)(ulong)uVar11)) {
      puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar11);
      uVar7 = 0;
      if (*puVar13 != 0) {
        uVar11 = puVar13[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar13 + lVar9 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar9 != 0) {
            uVar7 = 0;
            if ((ulong)uVar11 != 0) {
              uVar7 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar11);
            }
            if (*puVar13 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bc4590) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar7 * 2),
               uVar7 < 6)) goto LAB_02a8c450;
          }
        }
        uVar7 = 0;
      }
    }
LAB_02a8c450:
    if (*(char *)(param_1 + 0x2a4) == '\0') {
      *puVar15 = 0;
      *(undefined8 *)(param_1 + 0x294) = 0;
      *(undefined8 *)(param_1 + 0x284) = 0x100000007;
      *(undefined8 *)(param_1 + 0x29c) = 0;
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
        FUN_007a9614(PTR_DAT_04bb4268);
        __cxa_guard_release(PTR_DAT_04bb4270);
      }
      if (0 < (int)*(uint *)puVar2) {
        uVar8 = 0;
        do {
          if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == 0) goto LAB_02a8c49c;
          uVar8 = uVar8 + 1;
        } while (*(uint *)puVar2 != uVar8);
      }
      uVar8 = 0;
LAB_02a8c49c:
      *(int *)(param_1 + 0x29c) = (int)uVar8;
    }
    *(uint *)(param_1 + 0x2a0) = uVar7;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x288) = 5;
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x28c) = *(undefined8 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x298) = *param_4;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x288) = 5;
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x28c) = *(undefined8 *)(param_1 + 0x1bc);
    local_68[0] = 0x32;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
    }
    FUN_02a58ea0(local_68,puVar1,puVar15);
    if (local_5c == 0x1b) {
      if (*(char *)(param_1 + 0x2a4) == '\0') {
        *puVar15 = 0;
        *(undefined8 *)(param_1 + 0x294) = 0;
        *(undefined8 *)(param_1 + 0x284) = 0x100000007;
        *(undefined8 *)(param_1 + 0x29c) = 0;
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar6 != 0)) {
          FUN_007a9614(PTR_DAT_04bb4268);
          __cxa_guard_release(PTR_DAT_04bb4270);
        }
        if (0 < (int)*(uint *)puVar2) {
          uVar8 = 0;
          do {
            if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == 0) goto LAB_02a8c10c;
            uVar8 = uVar8 + 1;
          } while (*(uint *)puVar2 != uVar8);
        }
        uVar8 = 0;
LAB_02a8c10c:
        *(int *)(param_1 + 0x29c) = (int)uVar8;
        *(undefined4 *)(param_1 + 0x2a0) = 0;
      }
      *(int *)(param_1 + 0x298) = (int)(long)((float)local_48 * 90.0 * 11930465.0);
    }
  }
  return;
}

