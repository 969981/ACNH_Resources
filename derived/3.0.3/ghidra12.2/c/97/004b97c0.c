
int FUN_004b97c0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long local_40;
  long local_38;
  undefined4 local_24;
  
  if (param_2 == 0 && param_3 == 0) {
    iVar9 = 0;
  }
  else {
    local_40 = param_2;
    local_38 = param_3;
    if (param_2 == 0) {
      local_24 = *(undefined4 *)(param_1 + 0x2e8);
      lVar2 = FUN_0047b410(param_1 + 0x408,&local_38,&local_24);
      lVar4 = *(long *)(param_1 + 0x408);
    }
    else {
      local_24 = *(undefined4 *)(param_1 + 0x2e8);
      lVar2 = FUN_004b9980(param_1 + 1000,&local_40,&local_24);
      lVar4 = *(long *)(param_1 + 1000);
    }
    iVar9 = *(int *)(lVar4 + ((lVar2 << 0x20) >> 0x1c) + 8);
    if (iVar9 == *(int *)(param_1 + 0x2e8)) {
      iVar8 = iVar9 + 1;
      iVar7 = iVar9;
      if ((int)(*(uint *)(param_1 + 0x2ec) & 0x3fffffff) <= iVar9) {
        uVar3 = FUN_00426720(PTR_DAT_048607b8,iVar8,0x18,*(undefined8 *)(param_1 + 0x2e0),iVar9,
                             param_1 + 0x2ec);
        iVar7 = *(int *)(param_1 + 0x2e8);
        *(undefined8 *)(param_1 + 0x2e0) = uVar3;
      }
      if (iVar9 < iVar7) {
        if (iVar8 < iVar7) {
          *(int *)(param_1 + 0x2e8) = iVar8;
        }
      }
      else {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x2e0) + (long)iVar7 * 0x18);
        uVar1 = (iVar9 + 1) - iVar7 & 3;
        *(int *)(param_1 + 0x2e8) = iVar8;
        if (2 < (uint)(iVar9 - iVar7)) {
          iVar8 = (iVar7 + uVar1 + -1) - iVar9;
          puVar5 = puVar6;
          do {
            puVar6 = puVar5 + 0xc;
            *(undefined4 *)((long)puVar5 + 0x14) = 0;
            *(undefined1 *)(puVar5 + 2) = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            iVar8 = iVar8 + 4;
            *(undefined4 *)((long)puVar5 + 0x2c) = 0;
            *(undefined1 *)(puVar5 + 5) = 0;
            *(undefined4 *)((long)puVar5 + 0x44) = 0;
            *(undefined1 *)(puVar5 + 8) = 0;
            *(undefined4 *)((long)puVar5 + 0x5c) = 0;
            *(undefined1 *)(puVar5 + 0xb) = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            puVar5 = puVar6;
          } while (iVar8 != 0);
        }
        if (uVar1 != 0) {
          iVar8 = -uVar1;
          do {
            *(undefined4 *)((long)puVar6 + 0x14) = 0;
            *(undefined1 *)(puVar6 + 2) = 0;
            iVar8 = iVar8 + 1;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6 = puVar6 + 3;
          } while (iVar8 != 0);
        }
      }
      uVar3 = **(undefined8 **)(param_1 + 0x2d0);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x2e0) + (long)iVar9 * 0x18);
      *(undefined4 *)((long)puVar6 + 0x14) = 0;
      *puVar6 = 0;
      puVar6[1] = uVar3;
      *(undefined1 *)(puVar6 + 2) = 1;
    }
  }
  return iVar9;
}

