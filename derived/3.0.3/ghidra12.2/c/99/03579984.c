
void FUN_03579984(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar5 = FUN_033ffc10(param_2);
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x565b4aba) {
    bVar4 = false;
    goto LAB_03579a90;
  }
  uVar3 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
  if (uVar3 < DAT_0534f408) {
    puVar7 = *(uint **)(DAT_0534f410 + (long)(int)uVar3 * 8);
    uVar6 = 0;
    if (puVar7 != (uint *)0x0) {
      uVar3 = *puVar7;
      if (uVar3 != 0 && puVar7 != (uint *)(ulong)uVar3) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        if (((*puVar8 != 0) && (uVar3 = puVar8[1], uVar3 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0e98) &&
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar2 * 2),
               uVar6 < 3)) goto LAB_03579a80;
          }
        }
      }
      goto LAB_03579a7c;
    }
  }
  else {
LAB_03579a7c:
    uVar6 = 0;
  }
LAB_03579a80:
  bVar4 = uVar6 == 1;
LAB_03579a90:
  FUN_0261f510(*(undefined8 *)PTR_DAT_04bb46f0,param_1,param_2,1,uVar5 & 1,bVar4);
  return;
}

