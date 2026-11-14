
/* WARNING: Type propagation algorithm not settling */

bool FUN_0181ff68(long param_1)

{
  bool bVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  byte local_24 [4];
  undefined4 local_8 [2];
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_0182007c:
    uVar7 = 0;
    lVar9 = *(long *)(param_1 + 0x3d0);
    if (lVar9 == 0) goto LAB_0181fffc;
LAB_01820088:
    lVar10 = *(long *)(lVar9 + 0x300);
    bVar1 = false;
    if (lVar10 != 0) {
      bVar1 = *(float *)(lVar10 + 0x2b4) < *(float *)(lVar10 + 0x2b0);
    }
  }
  else {
    local_8[0] = 0x1a;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x1a & 1) == 0) goto LAB_0182007c;
    local_8[0] = 1;
    uVar7 = *puVar2 >> 1 & 1;
    lVar9 = *(long *)(param_1 + 0x3d0);
    if (lVar9 != 0) goto LAB_01820088;
LAB_0181fffc:
    bVar1 = false;
  }
  if (uVar7 != 0) {
    if (!bVar1) {
      return false;
    }
    pfVar6 = (float *)FUN_0252d9bc(0);
    if (pfVar6 == (float *)0x0) {
      return false;
    }
    goto LAB_018200b4;
  }
  if (!bVar1) {
    return false;
  }
  if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x300), lVar9 != 0)) &&
     (*(float *)(lVar9 + 0x2b8) < *(float *)(lVar9 + 0x2b0))) {
    return false;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_018200f8:
    if (*pbVar8 < 8) goto LAB_01820170;
LAB_01820104:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01820168:
      pbVar8 = &DAT_0548e168;
      goto LAB_01820170;
    }
    lVar9 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_24[0] = *pbVar8;
    if (7 < local_24[0]) goto LAB_01820168;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_018200f8;
      }
      goto LAB_01820104;
    }
LAB_01820170:
    local_24[0] = *pbVar8;
    if (7 < local_24[0]) {
      return false;
    }
  }
  FUN_0253395c(local_8,local_24,*(undefined4 *)PTR_DAT_04bb3238);
  iVar5 = FUN_01705ce0(local_8);
  if (iVar5 != 3) {
    return false;
  }
  pfVar6 = (float *)FUN_0252d9bc(0);
  if (pfVar6 == (float *)0x0) {
    return false;
  }
LAB_018200b4:
  fVar11 = *pfVar6 - *(float *)(*(long *)(param_1 + 0x300) + 0x278);
  fVar12 = pfVar6[2] - *(float *)(*(long *)(param_1 + 0x300) + 0x280);
  return SQRT(fVar12 * fVar12 + fVar11 * fVar11) < *(float *)(*(long *)(param_1 + 0x3d8) + 0x298);
}

