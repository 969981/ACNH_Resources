
/* WARNING: Removing unreachable block (ram,0x01360c44) */

void FUN_01360b90(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  if (param_2 != 0xffffffff) {
    uVar4 = *(uint *)(param_1 + 0x48030);
    if (param_2 < uVar4) {
      lVar7 = *(long *)(param_1 + 0x48040);
      if (lVar7 != 0) {
        lVar6 = *(long *)(param_1 + 0x48038);
        if ((*(byte *)(lVar6 + (long)(int)param_2 * 0x718 + 8) >> 1 & 1) == 0) {
          lVar6 = lVar6 + (long)(int)param_2 * 0x718 + 0x90;
        }
        else {
          lVar6 = lVar6 + (long)(int)param_2 * 0x718 + 0x2e0;
        }
        fVar10 = (float)*(int *)(lVar6 + 0x10) * 0.5;
        uVar5 = 0;
        if (fVar10 != (float)(int)fVar10) {
          uVar5 = (uint)(fVar10 < 0.0);
        }
        iVar2 = (int)fVar10 - uVar5;
        fVar10 = (float)*(int *)(lVar6 + 0x14) * 0.5;
        uVar5 = 0;
        if (fVar10 != (float)(int)fVar10) {
          uVar5 = (uint)(fVar10 < 0.0);
        }
        iVar9 = (int)fVar10 - uVar5;
        fVar10 = (float)*(int *)(lVar6 + 0x20) * 0.5;
        uVar5 = 0;
        if (fVar10 != (float)(int)fVar10) {
          uVar5 = (uint)(fVar10 < 0.0);
        }
        iVar3 = (int)fVar10 - uVar5;
        fVar10 = (float)*(int *)(lVar6 + 0x24) * 0.5;
        uVar5 = 0;
        if (fVar10 != (float)(int)fVar10) {
          uVar5 = (uint)(fVar10 < 0.0);
        }
        iVar8 = (int)fVar10 - uVar5;
        iVar1 = iVar2;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        if (iVar2 <= iVar3) {
          iVar2 = iVar3;
        }
        iVar3 = iVar9;
        if (iVar9 <= iVar8) {
          iVar3 = iVar8;
        }
        if (iVar8 <= iVar9) {
          iVar9 = iVar8;
        }
        if (iVar3 + 1 != iVar9) {
          iVar8 = iVar1;
          do {
            uVar4 = iVar8 - *(int *)(lVar7 + 0x28);
            uVar5 = iVar9 - *(int *)(lVar7 + 0x2c);
            if ((uVar4 < *(uint *)(lVar7 + 0x18) && uVar5 <= *(uint *)(lVar7 + 0x1c)) &&
                (*(uint *)(lVar7 + 0x18) <= uVar4 || *(uint *)(lVar7 + 0x1c) != uVar5)) {
              lVar6 = lVar7 + 0x40;
LAB_01360d88:
              FUN_0138367c(lVar6);
            }
            else if (((*(char *)(lVar7 + 0x88) != '\0') &&
                     ((uint)(iVar8 - *(int *)(lVar7 + 0x98)) < *(uint *)(lVar7 + 0xa0))) &&
                    ((uint)(iVar9 - *(int *)(lVar7 + 0x9c)) < *(uint *)(lVar7 + 0xa4))) {
              lVar6 = lVar7 + 0xa8;
              goto LAB_01360d88;
            }
            if (iVar8 < iVar2) {
              iVar8 = iVar8 + 1;
            }
            else {
              iVar9 = iVar9 + 1;
              iVar8 = iVar1;
            }
          } while ((iVar1 != iVar8) || (iVar3 + 1 != iVar9));
          uVar4 = *(uint *)(param_1 + 0x48030);
        }
      }
      if (uVar4 <= param_2) {
        param_2 = 0;
      }
      lVar7 = *(long *)(param_1 + 0x48038) + (long)(int)param_2 * 0x718;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x60) = 0;
      *(undefined8 *)(lVar7 + 0xa0) = 0;
      *(undefined8 *)(lVar7 + 0xb0) = 0;
      FUN_02ad7db8(lVar7 + 0xb8);
      return;
    }
  }
  return;
}

