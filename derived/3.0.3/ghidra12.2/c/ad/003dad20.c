
undefined8
FUN_003dad20(long param_1,long param_2,long *param_3,long param_4,uint param_5,uint param_6)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  byte *pbVar10;
  
  puVar2 = PTR_DAT_04bd0478;
  iVar4 = *(int *)(param_1 + 0x50);
  if (0 < iVar4) {
    if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
      iVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x20) + 0xda) != '\0') {
          return 0;
        }
        uVar5 = iVar4 - iVar6;
        if (iVar6 + 2 <= iVar4) {
          uVar5 = 2;
        }
        lVar8 = *param_3 * (ulong)uVar5;
        lVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                          (*(long **)(param_1 + 0x28),puVar2,lVar8,0);
        if (lVar3 != lVar8) {
          return 0;
        }
        if (0 < (int)uVar5) {
          uVar7 = 0;
          do {
            pvVar1 = (void *)(*(long *)(param_2 + (long)iVar6 * 8 + uVar7 * 8) + param_4);
            memcpy(pvVar1,puVar2 + param_3[4] + *param_3 * uVar7,param_3[5]);
            FUN_003b6c7c(pvVar1,param_3[5]);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar5);
          iVar6 = iVar6 + (int)uVar7;
        }
        iVar4 = *(int *)(param_1 + 0x50);
      } while (iVar6 < iVar4);
    }
    else {
      iVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x20) + 0xda) != '\0') {
          return 0;
        }
        uVar5 = iVar4 - iVar6;
        if (iVar6 + 2 <= iVar4) {
          uVar5 = 2;
        }
        lVar8 = *param_3 * (ulong)uVar5;
        lVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                          (*(long **)(param_1 + 0x28),puVar2,lVar8,0);
        if (lVar3 != lVar8) {
          return 0;
        }
        if (0 < (int)uVar5) {
          uVar7 = 0;
          lVar3 = param_1 + 0x2800 + (long)iVar6 * 0xc0;
          puVar9 = (ushort *)(param_1 + 0x3c0 + (long)iVar6 * 0x40);
          do {
            pbVar10 = puVar2 + *param_3 * uVar7;
            pvVar1 = (void *)(*(long *)(param_2 + (long)iVar6 * 8 + uVar7 * 8) + param_4);
            memcpy(pvVar1,pbVar10 + param_3[4],param_3[5]);
            FUN_003b6c7c(pvVar1,param_3[5]);
            *puVar9 = (ushort)*pbVar10;
            FUN_003c2d10(puVar9,lVar3,(int)((ulong)param_3[2] / 0xe) * 0xe,pbVar10);
            uVar7 = uVar7 + 1;
            lVar3 = lVar3 + 0xc0;
            *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
            puVar9 = puVar9 + 0x20;
          } while (uVar7 < uVar5);
          iVar6 = iVar6 + (int)uVar7;
        }
        iVar4 = *(int *)(param_1 + 0x50);
      } while (iVar6 < iVar4);
    }
  }
  return 1;
}

