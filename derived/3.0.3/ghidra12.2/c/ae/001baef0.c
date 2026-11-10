
bool FUN_001baef0(long param_1,undefined1 param_2,undefined1 param_3)

{
  ushort *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined2 local_34;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar5 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar5 = *(long *)(*plVar10 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar10 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  local_34 = CONCAT11(param_3,param_2);
  lVar5 = FUN_001bb2c0(param_1,&local_34);
  if (lVar5 != 0) {
    puVar7 = *(ushort **)(param_1 + 0x10);
    puVar1 = *(ushort **)(param_1 + 0x18);
    if ((long)puVar1 - (long)puVar7 != 0) {
      uVar8 = (long)puVar1 - (long)puVar7 >> 4;
      puVar6 = puVar7;
      do {
        uVar9 = uVar8 >> 1;
        puVar7 = puVar6 + uVar9 * 8 + 8;
        uVar8 = uVar8 + ~uVar9;
        if (local_34 <= puVar6[uVar9 * 8]) {
          puVar7 = puVar6;
          uVar8 = uVar9;
        }
        puVar6 = puVar7;
      } while (uVar8 != 0);
    }
    if ((puVar7 != puVar1) && (*puVar7 <= local_34)) {
      puVar6 = puVar7 + 8;
      if (puVar7 + 8 != puVar1) {
        do {
          puVar7 = puVar6;
          puVar7[-8] = *puVar7;
          *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(puVar7 + 4);
          puVar6 = puVar7 + 8;
        } while (puVar7 + 8 != puVar1);
      }
      *(ushort **)(param_1 + 0x18) = puVar7;
    }
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return lVar5 != 0;
}

