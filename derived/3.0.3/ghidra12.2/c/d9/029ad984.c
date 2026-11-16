
void FUN_029ad984(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar5 = PTR_DAT_04bb26a8;
  lVar8 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar8 + 0xb4408));
  fVar10 = *(float *)(lVar8 + 0xb4438);
  fVar11 = *(float *)(lVar8 + 0xb443c);
  cVar4 = *(char *)(lVar8 + 0xb4428);
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0xb4408));
  if (cVar4 != '\0') {
    if (*(char *)(param_1 + 8) == '\0') {
      fVar10 = *(float *)(param_1 + 0x14);
      fVar11 = *(float *)(param_1 + 0x20);
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0;
      *(float *)(param_1 + 0x14) = fVar10;
      *(float *)(param_1 + 0x10) = fVar10;
      *(float *)(param_1 + 0x20) = fVar11;
      *(float *)(param_1 + 0x1c) = fVar11;
    }
    fVar10 = fVar10 * 0.017453292 - fVar11 * 0.017453292;
    bVar6 = false;
    bVar7 = true;
    if (-1.1920929e-07 <= fVar10) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar10)) {
        bVar6 = fVar10 == 1.1920929e-07;
        bVar7 = 1.1920929e-07 <= fVar10;
      }
    }
    if (!bVar7 || bVar6) {
      fVar11 = 1.0;
    }
    else {
      fVar10 = (*param_2 - fVar11 * 0.017453292) / fVar10;
      fVar9 = 1.0;
      if (fVar10 <= 1.0) {
        fVar9 = fVar10;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar9;
      }
    }
    lVar8 = *(long *)puVar5;
    *(float *)(param_1 + 0xc) =
         *(float *)(param_1 + 0x24) +
         fVar11 * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24));
    uVar2 = *(uint *)(FUN_0011e5e0 + lVar8);
    if ((uVar2 != 0xffffffff) && (*(long *)(lVar8 + 0x11e610) != 0)) {
      if (*(uint *)(lVar8 + 0x11e608) <= uVar2) {
        uVar2 = 0;
      }
      uVar3 = *(uint *)(*(long *)(lVar8 + 0x11e610) + (long)(int)uVar2 * 0x80 + 8);
      uVar2 = uVar3 - 0x20;
      if ((int)uVar3 < 0x20) {
        uVar2 = uVar3;
      }
      uVar1 = 0x64040;
      if ((int)uVar3 < 0x20) {
        uVar1 = 0x340116;
      }
      *(byte *)(param_1 + 9) = (byte)(uVar1 >> (ulong)(uVar2 & 0x1f)) & 1;
    }
  }
  return;
}

