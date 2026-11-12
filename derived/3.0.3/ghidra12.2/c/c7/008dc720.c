
/* WARNING: Removing unreachable block (ram,0x008dc770) */
/* WARNING: Removing unreachable block (ram,0x008dc784) */
/* WARNING: Removing unreachable block (ram,0x008dc790) */
/* WARNING: Removing unreachable block (ram,0x008dc798) */
/* WARNING: Removing unreachable block (ram,0x008dc7a0) */
/* WARNING: Removing unreachable block (ram,0x008dc7b0) */

undefined4 FUN_008dc720(long param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int *piVar15;
  
  piVar2 = (int *)(param_1 + 0x37e64);
  if (*(int *)(param_1 + 0x37e68) == 0) {
    iVar8 = 0;
    if ((*piVar2 != 0) && (0 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 0;
      iVar8 = *(int *)(param_1 + 0x37e68);
      if (iVar8 < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)iVar8 * 8) = puVar10;
        iVar8 = *(int *)(param_1 + 0x37e68) + 1;
        *(int *)(param_1 + 0x37e68) = iVar8;
      }
    }
    if ((*piVar2 != 1) && (iVar8 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 1;
      iVar8 = *(int *)(param_1 + 0x37e68);
      if (iVar8 < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)iVar8 * 8) = puVar10;
        iVar8 = *(int *)(param_1 + 0x37e68) + 1;
        *(int *)(param_1 + 0x37e68) = iVar8;
      }
    }
    if ((*piVar2 != 2) && (iVar8 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 2;
      iVar8 = *(int *)(param_1 + 0x37e68);
      if (iVar8 < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)iVar8 * 8) = puVar10;
        iVar8 = *(int *)(param_1 + 0x37e68) + 1;
        *(int *)(param_1 + 0x37e68) = iVar8;
      }
    }
    if ((*piVar2 != 3) && (iVar8 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 3;
      iVar8 = *(int *)(param_1 + 0x37e68);
      if (iVar8 < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)iVar8 * 8) = puVar10;
        iVar8 = *(int *)(param_1 + 0x37e68) + 1;
        *(int *)(param_1 + 0x37e68) = iVar8;
      }
    }
    if ((*piVar2 != 4) && (iVar8 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 4;
      iVar8 = *(int *)(param_1 + 0x37e68);
      if (iVar8 < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)iVar8 * 8) = puVar10;
        iVar8 = *(int *)(param_1 + 0x37e68) + 1;
        *(int *)(param_1 + 0x37e68) = iVar8;
      }
    }
    if ((*piVar2 != 5) && (iVar8 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 5;
      iVar8 = *(int *)(param_1 + 0x37e68);
      if (iVar8 < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)iVar8 * 8) = puVar10;
        iVar8 = *(int *)(param_1 + 0x37e68) + 1;
        *(int *)(param_1 + 0x37e68) = iVar8;
      }
    }
    if ((*piVar2 != 6) && (iVar8 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 6;
      iVar8 = *(int *)(param_1 + 0x37e68);
      if (iVar8 < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)iVar8 * 8) = puVar10;
        iVar8 = *(int *)(param_1 + 0x37e68) + 1;
        *(int *)(param_1 + 0x37e68) = iVar8;
      }
    }
    if ((*piVar2 != 7) && (iVar8 < *(int *)(param_1 + 0x37e6c))) {
      puVar10 = *(undefined8 **)(param_1 + 0x37e78);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x37e78) = *puVar10;
      }
      *(undefined4 *)puVar10 = 7;
      if (*(int *)(param_1 + 0x37e68) < *(int *)(param_1 + 0x37e6c)) {
        *(undefined8 **)(*(long *)(param_1 + 0x37e70) + (long)*(int *)(param_1 + 0x37e68) * 8) =
             puVar10;
        *(int *)(param_1 + 0x37e68) = *(int *)(param_1 + 0x37e68) + 1;
      }
    }
    puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar7 = *(uint *)(param_1 + 0x37e68);
    uVar9 = (ulong)uVar7;
    if (1 < (int)uVar7) {
      do {
        uVar3 = puVar6[3];
        uVar7 = *puVar6 ^ *puVar6 << 0xb;
        *puVar6 = puVar6[1];
        puVar6[1] = puVar6[2];
        uVar7 = uVar7 >> 8 ^ uVar3 >> 0x13 ^ uVar7 ^ uVar3;
        puVar6[2] = uVar3;
        puVar6[3] = uVar7;
        lVar12 = *(long *)(param_1 + 0x37e70);
        lVar13 = (uVar9 - 1 & 0xffffffff) * 8;
        uVar14 = *(undefined8 *)(lVar12 + lVar13);
        uVar11 = uVar9 * uVar7 >> 0x1d & 0x7fffffff8;
        *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar12 + uVar11);
        *(undefined8 *)(*(long *)(param_1 + 0x37e70) + uVar11) = uVar14;
        bVar1 = 2 < uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
      uVar7 = *(uint *)(param_1 + 0x37e68);
    }
    if (*piVar2 != -1) {
      uVar4 = puVar6[3];
      uVar3 = *puVar6 ^ *puVar6 << 0xb;
      *puVar6 = puVar6[1];
      puVar6[1] = puVar6[2];
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      puVar6[2] = uVar4;
      puVar6[3] = uVar3;
      iVar8 = (int)((ulong)uVar3 * (ulong)(uVar7 - 1) >> 0x20);
      uVar7 = iVar8 + 1;
      if (((-1 < (int)uVar7) && ((int)uVar7 <= *(int *)(param_1 + 0x37e68))) &&
         (*(int *)(param_1 + 0x37e68) < *(int *)(param_1 + 0x37e6c))) {
        piVar15 = *(int **)(param_1 + 0x37e78);
        if (piVar15 != (int *)0x0) {
          *(undefined8 *)(param_1 + 0x37e78) = *(undefined8 *)piVar15;
        }
        *piVar15 = *piVar2;
        iVar5 = *(int *)(param_1 + 0x37e68);
        if (((int)uVar7 <= iVar5) && (iVar5 < *(int *)(param_1 + 0x37e6c))) {
          if (iVar5 - uVar7 != 0 && (int)uVar7 <= iVar5) {
            memmove((void *)(*(long *)(param_1 + 0x37e70) + (ulong)(iVar8 + 2) * 8),
                    (void *)(*(long *)(param_1 + 0x37e70) + (ulong)uVar7 * 8),
                    (long)(int)((iVar5 - uVar7) * 8));
          }
          *(int **)(*(long *)(param_1 + 0x37e70) + (ulong)uVar7 * 8) = piVar15;
          *(int *)(param_1 + 0x37e68) = *(int *)(param_1 + 0x37e68) + 1;
        }
      }
    }
  }
  return *(undefined4 *)**(undefined8 **)(param_1 + 0x37e70);
}

