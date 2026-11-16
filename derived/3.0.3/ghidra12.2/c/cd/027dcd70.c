
void FUN_027dcd70(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  void *__s;
  ulong uVar11;
  
  puVar5 = PTR_DAT_04bc2a20;
  puVar4 = PTR_DAT_04bc27f0;
  puVar3 = PTR_DAT_04bb27d0;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    lVar1 = param_1 + 0x10bf30;
    uVar11 = 0;
    do {
      pbVar8 = (byte *)(lVar1 + uVar11 * 0x13230);
      uVar6 = (ulong)*pbVar8;
      if (((0x22 < uVar6) || (bVar2 = pbVar8[1], (byte)puVar4[uVar6] < bVar2)) ||
         ((*(uint *)(puVar5 + uVar6 * 4) >> (ulong)(bVar2 & 0x1f) & 1) == 0)) {
        if (1 < *(byte *)(**(long **)puVar3 + 0x476) || uVar11 == 9) {
          return;
        }
        lVar7 = uVar11 * 0x13230;
        lVar9 = uVar11 + 1;
        pbVar8 = (byte *)(param_1 + 0x11f161 + lVar7);
        __s = (void *)(param_1 + 0x11f160 + lVar7);
        uVar6 = uVar11;
        while (((uVar10 = (ulong)pbVar8[-1], 0x22 < uVar10 || ((byte)puVar4[uVar10] < *pbVar8)) ||
               ((*(uint *)(puVar5 + uVar10 * 4) >> (ulong)(*pbVar8 & 0x1f) & 1) == 0))) {
          lVar9 = lVar9 + 1;
          pbVar8 = pbVar8 + 0x13230;
          uVar6 = uVar6 + 1;
          __s = (void *)((long)__s + 0x13230);
          if (lVar9 == 10) {
            return;
          }
        }
        lVar7 = lVar1 + lVar7;
        uVar10 = uVar11;
        do {
          lVar9 = lVar7;
          if (9 < uVar10) {
            lVar9 = lVar1;
          }
          FUN_026b1890(lVar9,__s);
          memset(__s,0,0x13230);
          FUN_0268abb0(__s);
          uVar6 = uVar6 + 1;
          uVar10 = uVar10 + 1;
          lVar7 = lVar7 + 0x13230;
          __s = (void *)((long)__s + 0x13230);
        } while (uVar6 < 9);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 10);
  }
  return;
}

