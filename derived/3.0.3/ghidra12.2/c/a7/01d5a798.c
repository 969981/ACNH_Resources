
void FUN_01d5a798(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  
  puVar6 = PTR_DAT_04bb27d0;
  plVar8 = *(long **)PTR_DAT_04bb27d0;
  if (*(int *)(plVar8[2] + 0xaa0) == 3) {
    if (*(long *)PTR_DAT_04bbcee0 != 0) {
      FUN_0205cb6c(*(long *)PTR_DAT_04bbcee0,(byte *)(param_1 + 0xaa4));
      plVar8 = *(long **)puVar6;
    }
  }
  else {
    DAT_05454054 = 1;
  }
  bVar3 = *(byte *)(param_1 + 0xaa4);
  bVar4 = *(byte *)(*plVar8 + 0x473);
  puVar9 = (uint *)PTR_DAT_04bb32e0;
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    puVar1 = (uint *)(*plVar8 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar2 = puVar1;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      if (bVar3 != 0xff) {
        puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = puVar1;
        }
        if ((*puVar2 & 1) != 0) {
          puVar9 = puVar2 + 0x1e;
        }
      }
      goto LAB_01d5a878;
    }
  }
  puVar9 = (uint *)PTR_DAT_04bb5038;
  if (*PTR_DAT_04bc1220 != bVar3) {
    puVar9 = (uint *)PTR_DAT_04bb32e0;
  }
LAB_01d5a878:
  if ((byte)*puVar9 < 8) {
    *(uint *)(*(long *)PTR_DAT_04bb4718 + 0x23c4) =
         *(uint *)(*(long *)PTR_DAT_04bb4718 + 0x23c4) | 1 << (ulong)((byte)*puVar9 & 0x1f);
  }
  lVar7 = *(long *)PTR_DAT_04bb27f0;
  if (lVar7 != 0) {
    *(uint *)(lVar7 + 0x43c) = *(uint *)(lVar7 + 0x43c) | 8;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar9 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar9 >> 5 & 1) != 0) {
      return;
    }
  }
  FUN_02918280();
  return;
}

