
bool FUN_012eed50(undefined8 param_1,long param_2)

{
  long lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int local_64;
  
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_80 = PTR_DAT_04bb2010 + 0x10;
    sVar2 = *(short *)(lVar8 + 4);
    sVar3 = *(short *)(lVar8 + 8);
    sVar4 = *(short *)(lVar8 + 6);
    sVar5 = *(short *)(lVar8 + 10);
    iVar6 = (int)sVar2;
    if (sVar3 <= sVar2) {
      iVar6 = (int)sVar3;
    }
    iVar7 = (int)sVar2;
    if (sVar2 <= sVar3) {
      iVar7 = (int)sVar3;
    }
    iVar10 = (int)sVar4;
    if (sVar4 <= sVar5) {
      iVar10 = (int)sVar5;
    }
    iVar9 = (int)sVar4;
    if (sVar5 <= sVar4) {
      iVar9 = (int)sVar5;
    }
    fVar14 = (float)iVar6 * 10.0 + 2.5;
    fVar15 = (float)iVar9 * 10.0 + 2.5;
    fVar12 = (float)iVar7 * 10.0 + 10.0 + -2.5;
    fVar13 = (float)iVar10 * 10.0 + 10.0 + -2.5;
    local_68 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    local_64 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    local_78 = local_68;
    if (iVar6 <= local_68) {
      local_78 = iVar6;
    }
    if (local_68 <= iVar6) {
      local_68 = iVar6;
    }
    iStack_74 = local_64;
    if (iVar7 <= local_64) {
      iStack_74 = iVar7;
    }
    if (local_64 <= iVar7) {
      local_64 = iVar7;
    }
    local_70 = puStack_80;
    if (*(long *)PTR_DAT_04bb39b8 != 0) {
      FUN_0155aff0(*(long *)PTR_DAT_04bb39b8,&local_88);
    }
    iVar7 = local_78;
    iVar6 = local_64 + 1;
    if (iVar6 != iStack_74) {
      iVar10 = iStack_74;
      iVar9 = local_78;
      do {
        lVar11 = *(long *)PTR_DAT_04bb26a8;
        nn::os::LockMutex((MutexType *)(lVar11 + 0x1466a8));
        lVar1 = lVar11 + 0x146648 + (ulong)*(uint *)(lVar11 + 0x146640) * 0x20;
        if (1 < *(uint *)(lVar11 + 0x146640)) {
          lVar1 = lVar11 + 0x146648;
        }
        FUN_02a061d0(lVar1,(int)(short)iVar9,(int)(short)iVar10);
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x1466a8));
        if (iVar9 < local_68) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar10 = iVar10 + 1;
          iVar9 = local_78;
        }
      } while ((iVar7 != iVar9) || (iVar6 != iVar10));
    }
  }
  return lVar8 != 0;
}

