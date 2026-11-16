
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02632270(undefined4 *param_1,undefined8 param_2,void *param_3,ushort param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  long local_150;
  undefined8 local_148;
  byte local_140 [256];
  
  memcpy(local_140,param_3,0x100);
  uVar7 = DAT_0558600c;
  lVar12 = 0;
  do {
    lVar1 = lVar12 + 2;
    bVar3 = ((byte *)(param_5 + lVar12))[1];
    local_140[lVar12] = *(byte *)(param_5 + lVar12) & local_140[lVar12];
    local_140[lVar12 + 1] = bVar3 & local_140[lVar12 + 1];
    lVar12 = lVar1;
  } while (lVar1 != 0x100);
  uVar9 = 0;
  uVar11 = 0;
  do {
    uVar2 = (uint)uVar11 & 6;
    uVar8 = (uint)uVar11 + 2;
    uVar9 = (local_140[uVar11 >> 3] >> (ulong)(uVar2 | 1) & 1) +
            (local_140[uVar11 >> 3] >> (ulong)uVar2 & 1) + uVar9;
    uVar11 = (ulong)uVar8;
  } while (uVar8 != 0x800);
  if ((uVar9 & 0xffff) == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar7;
  }
  else {
    uVar8 = nn::os::GetSystemTick();
    uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar5 = (uint)param_4 * 0x6c078965 + 1;
    uVar8 = 0;
    iVar10 = 0;
    uVar2 = uVar4;
    if (param_4 != 0) {
      uVar2 = uVar5;
    }
    uVar2 = uVar2 ^ uVar2 << 0xb;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = uVar4 ^ uVar4 >> 0x1e;
    if (param_4 != 0) {
      uVar4 = uVar5 ^ uVar5 >> 0x1e;
    }
    uVar4 = uVar4 * 0x6c078965 + 4;
    do {
      if ((local_140[uVar8 >> 3] >> (ulong)(uVar8 & 7) & 1) != 0) {
        if (iVar10 == (int)((ulong)(uVar4 >> 0x13 ^ uVar2 >> 8 ^ uVar4 ^ uVar2) *
                            (ulong)(uVar9 & 0xffff) >> 0x20)) goto LAB_026323fc;
        iVar10 = iVar10 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x800);
    uVar8 = 0xffffffff;
LAB_026323fc:
    local_148 = 0x16a2;
    FUN_0277d4ac(&local_148);
    puVar6 = PTR_DAT_04bb43c0;
    local_150 = 0;
    local_160 = PTR_DAT_04bc0510 + 0x10;
    local_158 = (undefined4)local_148;
    uStack_154 = local_148._4_4_;
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_158);
    if (*(long *)puVar6 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_148);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
           (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8), lVar12 != 0)) {
          local_150 = lVar12;
        }
      }
    }
    FUN_01b058c8(&local_160,uVar8);
    *param_1 = local_158;
    param_1[1] = uStack_154;
  }
  return;
}

