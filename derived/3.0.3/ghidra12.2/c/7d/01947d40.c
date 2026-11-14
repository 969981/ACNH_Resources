
undefined8 FUN_01947d40(long param_1,long param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  
  (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(param_1 + 0x2d8);
  puVar7 = PTR_DAT_04bbe5c0;
  puVar6 = PTR_DAT_04bbe5b8;
  lVar10 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar10 + 0x48);
    uVar11 = (long)(char)bVar5 & 0xffffffff;
    pbVar3 = pbVar1 + uVar11 * 0x80;
    if (7 < bVar5) {
      pbVar3 = pbVar1;
    }
    if ((*pbVar3 >> 3 & 1) != 0) {
      lVar10 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
      lVar4 = lVar10 + uVar11 * 0xc;
      if (0xb < bVar5) {
        lVar4 = lVar10;
      }
      if (*(char *)(lVar4 + 10) == '\0') {
        return 0;
      }
    }
  }
  iVar9 = *(int *)(param_1 + 700);
  if ((((iVar9 == 1) || (iVar9 == 3)) || (iVar9 == 4)) || ((iVar9 == 0x18 || (iVar9 == 9)))) {
    fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    fVar13 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0;
    bVar8 = false;
    if (((float)*(int *)(param_2 + 0x10) * 5.0 <= fVar14) &&
       (bVar8 = false, !NAN(fVar14) && !NAN(fVar13))) {
      bVar8 = fVar14 < fVar13;
    }
    if (bVar8) {
      fVar13 = (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0;
      fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
      bVar8 = false;
      if (((float)*(int *)(param_2 + 0x14) * 5.0 <= fVar14) &&
         (bVar8 = false, !NAN(fVar14) && !NAN(fVar13))) {
        bVar8 = fVar14 < fVar13;
      }
      if (bVar8) {
        if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
          lVar10 = (long)*(int *)(param_1 + 0xbc);
          plVar12 = (long *)(*(long *)(param_1 + 0xb0) - lVar10);
          puVar2 = PTR_DAT_04bbe5c8 + 0x10;
          do {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              *(undefined **)puVar6 = puVar2;
              __cxa_guard_release(puVar7);
            }
            if ((plVar12 != (long *)0x0) &&
               (uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar6), (uVar11 & 1) != 0)) {
              uVar11 = (**(code **)(*plVar12 + 0x1c8))(plVar12);
              if ((uVar11 & 1) == 0) {
                return 0;
              }
              FUN_006fb3d0(param_1);
              return 1;
            }
            plVar12 = (long *)(*(long *)((long)plVar12 + lVar10 + 8) - lVar10);
          } while (plVar12 != (long *)((param_1 + 0xa8) - lVar10));
        }
      }
    }
  }
  return 0;
}

