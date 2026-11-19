
bool FUN_03bd3e38(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  char *__s1;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  uVar7 = FUN_03be8d94(param_1,param_2,"isBlankAsset");
  if ((uVar7 & 1) == 0) {
    bVar5 = false;
  }
  else {
    uVar7 = *(ulong *)PTR_DAT_04bb38c0;
    uVar8 = *(ulong *)PTR_DAT_04bb38c8;
    puVar12 = (undefined8 *)(uVar8 | *(uint *)(param_2 + 0x18));
    puVar2 = puVar12 + 0x20000000;
    if (uVar7 <= *(uint *)(param_2 + 0x18)) {
      puVar2 = puVar12;
    }
    if (((uint)*puVar2 >> 1 & 1) == 0) {
      lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 8);
      if (*(uint *)(lVar10 + 0x534) < 2) {
        __s1 = "";
      }
      else {
        uVar11 = (ulong)*(uint *)(*(long *)(lVar10 + 0x548) + 0x14);
        pcVar9 = (char *)(uVar8 | uVar11);
        __s1 = pcVar9 + 0x100000000;
        if (uVar7 <= uVar11) {
          __s1 = pcVar9;
        }
      }
    }
    else {
      uVar1 = (uint)*puVar2 & 3;
      uVar1 = uVar1 - (uVar1 >> 1);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar3 = puVar12 + uVar4;
      if (1 < uVar4) {
        puVar3 = puVar12;
      }
      uVar11 = (ulong)((*(uint *)((long)puVar2 +
                                 (long)(int)((uVar1 + (uVar1 >> 0x10) & 0x3f) - 1) * 4 + 8) &
                       0xffffff) + *(int *)(*(long *)*puVar3 + 0x70));
      pcVar9 = (char *)(uVar8 | uVar11);
      __s1 = pcVar9 + 0x100000000;
      if (uVar7 <= uVar11) {
        __s1 = pcVar9;
      }
    }
    iVar6 = strncmp(__s1,"@Blank",6);
    bVar5 = iVar6 == 0;
  }
  return bVar5;
}

