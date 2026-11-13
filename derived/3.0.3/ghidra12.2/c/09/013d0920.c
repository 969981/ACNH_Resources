
void FUN_013d0920(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  
  puVar7 = PTR_DAT_04bb4798;
  puVar6 = PTR_DAT_04bb37e0;
  puVar5 = PTR_DAT_04bb32e0;
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    lVar15 = 0;
    lVar16 = 0;
    uVar18 = 0;
    puVar13 = (uint *)PTR_DAT_04bb3238;
    do {
      lVar1 = param_1 + lVar16;
      if (*(byte *)(lVar1 + 0x4fc) < 0x3c) {
        *(byte *)(lVar1 + 0x4fc) = *(byte *)(lVar1 + 0x4fc) + 1;
      }
      else if ((uVar18 < *(byte *)(param_1 + 0x59a)) ||
              (uVar18 < (ulong)*(byte *)(param_1 + 0x59b) + (ulong)*(byte *)(param_1 + 0x59a))) {
        lVar10 = *(long *)puVar7;
        uVar17 = (uint)uVar18;
        uVar3 = uVar18;
        if (*(uint *)(lVar10 + 0x18) <= uVar17) {
          uVar3 = 0;
        }
        lVar11 = *(long *)(lVar10 + 0x20) + uVar3 * 0x28;
        uVar3 = uVar18;
        if (*(uint *)(lVar10 + 8) <= uVar17) {
          uVar3 = 0;
        }
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x10) + uVar3 * 0x10);
        uVar12 = *(undefined8 *)(lVar11 + 8);
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar11 + 0x10);
        *puVar2 = uVar12;
        bVar14 = *(byte *)(lVar11 + 0x14);
        if (7 < bVar14) {
          bVar14 = 0xff;
        }
        *(byte *)((long)puVar2 + 0xc) = bVar14;
        bVar14 = *(byte *)(lVar11 + 0x15);
        if (7 < bVar14) {
          bVar14 = 0xff;
        }
        *(byte *)((long)puVar2 + 0xd) = bVar14;
        *(undefined2 *)((long)puVar2 + 0xe) = *(undefined2 *)(lVar11 + 0x16);
        lVar10 = *(long *)(*(long *)puVar7 + 0x10);
        uVar3 = uVar18;
        if (*(uint *)(*(long *)puVar7 + 8) <= uVar18 || lVar10 == 0) {
          uVar3 = 0;
        }
        if (*(short *)(lVar10 + uVar3 * 0x10 + 10) == -2) {
          lVar10 = param_1 + lVar15;
          *(undefined8 *)(lVar10 + 0x280) = 0;
          *(undefined2 *)(lVar10 + 0x288) = *(undefined2 *)puVar6;
          *(undefined *)(lVar10 + 0x28a) = puVar6[2];
          *(undefined *)(lVar10 + 0x28b) = puVar6[3];
          *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(puVar6 + 4);
          bVar14 = *puVar5;
          *(undefined1 *)(lVar10 + 0x291) = 0;
          if (7 < bVar14) {
            bVar14 = 0xff;
          }
          *(byte *)(lVar10 + 0x290) = bVar14;
          uVar4 = *puVar13;
          *(undefined1 *)(lVar1 + 0x4fc) = 0;
          *(uint *)(lVar1 + 0x4f8) = uVar4;
        }
        else {
          uVar4 = *(uint *)(lVar1 + 0x4f8);
        }
        if (uVar4 != 0) {
          lVar10 = *(long *)PTR_DAT_04bb27c0;
          if (lVar10 != 0) {
            lVar11 = *(long *)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8
                              );
            if (((lVar11 == 0) || ((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0)) ||
               (*(uint *)(lVar11 + 0x230) != uVar4)) {
              lVar11 = 0;
            }
            if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar10 = *(long *)PTR_DAT_04bb27c0;
              iVar8 = (**(code **)(*plVar9 + 0x60))();
              puVar13 = (uint *)PTR_DAT_04bb3238;
              if (((iVar8 < 0x11) ||
                  ((*(uint *)(lVar10 + 0x5e8) < 5 &&
                   ((1 << (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) &&
                 (lVar11 != 0)) goto LAB_013d09a8;
            }
          }
          lVar10 = *(long *)puVar7;
          uVar3 = uVar18;
          if (*(uint *)(lVar10 + 0x18) <= uVar17) {
            uVar3 = 0;
          }
          lVar11 = *(long *)(lVar10 + 0x20) + uVar3 * 0x28;
          uVar3 = uVar18;
          if (*(uint *)(lVar10 + 8) <= uVar17) {
            uVar3 = 0;
          }
          puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x10) + uVar3 * 0x10);
          uVar12 = *(undefined8 *)(lVar11 + 8);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar11 + 0x10);
          *puVar2 = uVar12;
          bVar14 = *(byte *)(lVar11 + 0x14);
          if (7 < bVar14) {
            bVar14 = 0xff;
          }
          *(byte *)((long)puVar2 + 0xc) = bVar14;
          bVar14 = *(byte *)(lVar11 + 0x15);
          if (7 < bVar14) {
            bVar14 = 0xff;
          }
          *(byte *)((long)puVar2 + 0xd) = bVar14;
          *(undefined2 *)((long)puVar2 + 0xe) = *(undefined2 *)(lVar11 + 0x16);
          lVar10 = *(long *)(*(long *)puVar7 + 0x10);
          uVar3 = uVar18;
          if (*(uint *)(*(long *)puVar7 + 8) <= uVar18 || lVar10 == 0) {
            uVar3 = 0;
          }
          bVar14 = *(byte *)(lVar10 + uVar3 * 0x10 + 8) & 0xf;
          if ((bVar14 == 0xb) || (bVar14 == 5)) {
            param_1 = param_1 + lVar15;
            *(undefined8 *)(param_1 + 0x280) = 0;
            *(undefined2 *)(param_1 + 0x288) = *(undefined2 *)puVar6;
            *(undefined *)(param_1 + 0x28a) = puVar6[2];
            *(undefined *)(param_1 + 0x28b) = puVar6[3];
            *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(puVar6 + 4);
            bVar14 = *puVar5;
            *(undefined1 *)(param_1 + 0x291) = 0;
            if (7 < bVar14) {
              bVar14 = 0xff;
            }
            *(byte *)(param_1 + 0x290) = bVar14;
            uVar17 = *puVar13;
            *(undefined1 *)(lVar1 + 0x4fc) = 0;
            *(uint *)(lVar1 + 0x4f8) = uVar17;
            return;
          }
        }
      }
LAB_013d09a8:
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 0x20;
    } while (uVar18 != 0x14);
  }
  return;
}

