
void FUN_00337110(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  lVar12 = *(long *)(param_2 + 0x4a8);
  if (*(long *)(lVar12 + 0x40) != 0) {
    lVar15 = 0;
    lVar11 = *(long *)(*(long *)(param_2 + 0x240) + 0x348);
    lVar13 = *(long *)(lVar12 + 0x40);
    do {
      fVar17 = *(float *)(param_2 + 0x48) + *(float *)(lVar13 + 0x7c);
      fVar16 = *(float *)(lVar13 + 0x88);
      uVar3 = *(uint *)(lVar13 + 0x70);
      lVar14 = *(long *)(lVar13 + 0x68);
      *(float *)(lVar13 + 0x7c) = fVar17;
      *(float *)(lVar13 + 0x88) = fVar17;
      if ((int)uVar3 < 2) {
        if (lVar15 == 0) {
          *(long *)(lVar12 + 0x40) = lVar14;
        }
        else {
          *(long *)(lVar15 + 0x68) = lVar14;
        }
        lVar4 = FUN_0031e3e8(param_2);
        lVar4 = *(long *)(lVar4 + 0x1a00);
        (**(code **)**(undefined8 **)(lVar4 + 0x20))();
        if (*(long *)(lVar13 + 0x50) != 0) {
          fVar16 = *(float *)(*(long *)(*(long *)(param_2 + 0x240) + 0x348) + 0x14);
          *(int *)(param_2 + 0x9c0) = *(int *)(param_2 + 0x9c0) + -1;
          *(ulong *)(param_2 + 0x9b8) =
               *(long *)(param_2 + 0x9b8) + (ulong)(uint)(int)fVar16 * -0x40;
          (**(code **)(**(long **)(param_2 + 0x9b0) + 0x18))();
        }
        *(undefined8 *)(lVar13 + 0x50) = 0;
        *(undefined1 *)(lVar13 + 0x84) = 0;
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + -1;
        param_1 = (**(code **)(**(long **)(lVar4 + 0x20) + 8))();
      }
      else {
        if (0.0 < (float)(int)fVar17 - (float)(int)fVar16) {
          uVar3 = uVar3 - 1;
          *(uint *)(lVar13 + 0x70) = uVar3;
        }
        lVar15 = lVar13;
        if (*(float *)(lVar11 + 0x10) == 0.0) {
          if (uVar3 < 3) {
            *(undefined4 *)(lVar13 + 0x78) = 0;
          }
          else {
            puVar7 = *(undefined8 **)(lVar13 + 0x58);
            uVar6 = 0;
            puVar8 = (undefined4 *)
                     (*(long *)(lVar12 + 0x30) +
                      (*(long *)(lVar12 + 0x38) * (ulong)*(uint *)(lVar12 + 0x5c) +
                       (long)*(int *)(lVar12 + 0x48) * (long)*(int *)(lVar13 + 0x74) * 0x30 &
                      0xfffffffffffffffc) + 0x18);
            do {
              iVar5 = (int)uVar6;
              uVar6 = uVar6 + 1;
              puVar7 = (undefined8 *)puVar7[6];
              uVar18 = *(undefined4 *)(puVar7 + 3);
              uVar19 = *(undefined4 *)(puVar7 + 5);
              uVar9 = puVar7[2];
              uVar1 = *puVar7;
              uVar2 = puVar7[1];
              uVar10 = puVar7[4];
              puVar8[5] = 0;
              *(undefined8 *)(puVar8 + -6) = uVar1;
              *(undefined8 *)(puVar8 + -4) = uVar2;
              *(undefined8 *)(puVar8 + -2) = uVar9;
              *(undefined8 *)(puVar8 + 2) = uVar10;
              puVar8[4] = uVar19;
              *puVar8 = uVar18;
              puVar8[1] = (1.0 / ((float)(int)uVar3 + -1.0)) * (float)iVar5;
              puVar8 = puVar8 + 0xc;
            } while (uVar3 != uVar6);
            *(uint *)(lVar13 + 0x78) = uVar3 << 1;
          }
        }
        else {
          param_1 = FUN_00336f00(param_1,lVar13,lVar11);
        }
      }
      lVar13 = lVar14;
    } while (lVar14 != 0);
  }
  return;
}

