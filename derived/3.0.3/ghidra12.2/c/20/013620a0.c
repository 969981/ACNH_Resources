
/* WARNING: Removing unreachable block (ram,0x0136216c) */

void FUN_013620a0(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_80 [12];
  int local_74;
  undefined4 local_54;
  
  if (param_2 != 0xffffffff) {
    puVar1 = (uint *)(param_1 + 0x48030);
    if ((param_2 < *puVar1) && (FUN_01360490(auStack_80,param_1,param_2), local_74 != 0)) {
      uVar6 = param_2;
      if (*puVar1 <= param_2) {
        uVar6 = 0;
      }
      FUN_02b5df60(*(long *)(param_1 + 0x48038) + (long)(int)uVar6 * 0x718,auStack_80);
      lVar8 = *(long *)(param_1 + 0x48040);
      if (lVar8 != 0) {
        lVar7 = *(long *)(param_1 + 0x48038);
        if (*puVar1 <= param_2) {
          param_2 = 0;
        }
        if ((*(byte *)(lVar7 + (long)(int)param_2 * 0x718 + 8) >> 1 & 1) == 0) {
          lVar7 = lVar7 + (long)(int)param_2 * 0x718 + 0x90;
        }
        else {
          local_54 = 4;
          lVar7 = lVar7 + (long)(int)param_2 * 0x718 + 0x2e0;
        }
        fVar11 = (float)*(int *)(lVar7 + 0x10) * 0.5;
        uVar6 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar6 = (uint)(fVar11 < 0.0);
        }
        iVar3 = (int)fVar11 - uVar6;
        fVar11 = (float)*(int *)(lVar7 + 0x14) * 0.5;
        uVar6 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar6 = (uint)(fVar11 < 0.0);
        }
        iVar9 = (int)fVar11 - uVar6;
        fVar11 = (float)*(int *)(lVar7 + 0x20) * 0.5;
        uVar6 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar6 = (uint)(fVar11 < 0.0);
        }
        iVar4 = (int)fVar11 - uVar6;
        fVar11 = (float)*(int *)(lVar7 + 0x24) * 0.5;
        uVar6 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar6 = (uint)(fVar11 < 0.0);
        }
        iVar10 = (int)fVar11 - uVar6;
        iVar2 = iVar3;
        if (iVar4 <= iVar3) {
          iVar2 = iVar4;
        }
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
        iVar4 = iVar9;
        if (iVar9 <= iVar10) {
          iVar4 = iVar10;
        }
        if (iVar10 <= iVar9) {
          iVar9 = iVar10;
        }
        if (iVar4 + 1 != iVar9) {
          iVar10 = iVar2;
          do {
            uVar6 = iVar10 - *(int *)(lVar8 + 0x28);
            uVar5 = iVar9 - *(int *)(lVar8 + 0x2c);
            if ((uVar6 < *(uint *)(lVar8 + 0x18) && uVar5 <= *(uint *)(lVar8 + 0x1c)) &&
                (*(uint *)(lVar8 + 0x18) <= uVar6 || *(uint *)(lVar8 + 0x1c) != uVar5)) {
              lVar7 = lVar8 + 0x40;
LAB_013622a8:
              FUN_0138367c(lVar7);
            }
            else if (((*(char *)(lVar8 + 0x88) != '\0') &&
                     ((uint)(iVar10 - *(int *)(lVar8 + 0x98)) < *(uint *)(lVar8 + 0xa0))) &&
                    ((uint)(iVar9 - *(int *)(lVar8 + 0x9c)) < *(uint *)(lVar8 + 0xa4))) {
              lVar7 = lVar8 + 0xa8;
              goto LAB_013622a8;
            }
            if (iVar10 < iVar3) {
              iVar10 = iVar10 + 1;
            }
            else {
              iVar9 = iVar9 + 1;
              iVar10 = iVar2;
            }
          } while ((iVar2 != iVar10) || (iVar4 + 1 != iVar9));
        }
      }
    }
  }
  return;
}

