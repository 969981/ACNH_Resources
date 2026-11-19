
void FUN_03aaf074(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = *(long *)(param_1 + 8);
  if (((*(char *)(lVar6 + 0xa10) != '\0') && (*(char *)(lVar6 + 0x4d0) != '\0')) &&
     (*(char *)(lVar6 + 0x1660) == '\0')) {
    bVar5 = *(byte *)(param_2 + 8);
    if ((*(uint *)(param_1 + 0x550) >> (ulong)(bVar5 & 0x1f) & 1) != 0) {
      if ((*(ushort *)(param_1 + 0x43c) >> 0xd & 1) == 0) {
        iVar3 = *(int *)(lVar6 + 0x17c0);
        iVar4 = *(int *)(lVar6 + 0x17e0);
        uVar7 = (uint)bVar5;
        if (*(uint *)(param_1 + 0x478) < (uint)bVar5 || *(uint *)(param_1 + 0x478) == uVar7) {
          uVar7 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x480) + (ulong)uVar7 * 0xfc8;
        fVar11 = (1.0 / (float)*(int *)(lVar6 + 0x1680)) *
                 (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10));
        fVar12 = (1.0 / (float)*(int *)(lVar6 + 0x16a0)) *
                 (*(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x14));
        if (fVar11 <= fVar12) {
          fVar11 = fVar12;
        }
        iVar9 = (int)(fVar11 * (float)iVar3);
        iVar10 = (int)(fVar11 * (float)iVar4);
        iVar1 = iVar9;
        if (iVar3 <= iVar9) {
          iVar1 = iVar3;
        }
        iVar3 = iVar10;
        if (iVar4 <= iVar10) {
          iVar3 = iVar4;
        }
        uVar7 = 0x20;
        if (0x1f < iVar9) {
          uVar7 = iVar1 + 7U & 0xfffffff8;
        }
        uVar2 = 0x20;
        if (0x1f < iVar10) {
          uVar2 = iVar3 + 7U & 0xfffffff8;
        }
        *(uint *)(lVar8 + 1000) = uVar7;
        *(uint *)(lVar8 + 0x408) = uVar2;
      }
      if ((*(byte *)(param_1 + 0x558) & 1) != 0) {
        bVar5 = *(byte *)(param_2 + 8);
        if ((uint)bVar5 == (int)*(char *)(param_1 + 0x559)) {
          lVar6 = *(long *)(param_2 + 0x18) + 0x60;
          *(long *)(param_1 + 0x560) = lVar6;
          if ((uint)bVar5 == (int)*(char *)(param_1 + 0x55a)) {
            *(long *)(param_1 + 0x568) = *(long *)(param_2 + 0x18) + 0x60;
          }
          *(undefined4 *)(param_1 + 0x55c) = 0;
        }
        else {
          if ((uint)bVar5 != (int)*(char *)(param_1 + 0x55a)) {
            *(undefined4 *)(param_1 + 0x55c) = 0;
            return;
          }
          lVar6 = *(long *)(param_2 + 0x18);
          *(undefined4 *)(param_1 + 0x55c) = 0;
          *(long *)(param_1 + 0x568) = lVar6 + 0x60;
          lVar6 = *(long *)(param_1 + 0x560);
          if (lVar6 == 0) {
            return;
          }
        }
        if ((*(long *)(param_1 + 0x568) != 0) &&
           (FUN_03983ba8(param_1 + 0x570,lVar6), (*(byte *)(param_1 + 0x558) & 1) != 0)) {
          *(float *)(param_1 + 0x55c) =
               *(float *)(param_1 + 0x650) - *(float *)(*(long *)(param_1 + 0x560) + 0xe0);
        }
      }
    }
  }
  return;
}

