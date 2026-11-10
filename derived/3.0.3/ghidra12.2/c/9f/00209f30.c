
long FUN_00209f30(long param_1,ushort param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
      plVar7 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) {
    plVar8 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    plVar7 = *(long **)(param_1 + 0x48);
  }
  else {
    plVar8 = (long *)(*(long *)(lVar5 + 0x10) + 0x78);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar7 = *(long **)(param_1 + 0x48);
  }
  if (plVar7 != (long *)0x0) {
    plVar6 = (long *)(param_1 + 0x48);
    do {
      plVar1 = plVar7;
      if (*(ushort *)(plVar7 + 4) < param_2) {
        plVar1 = plVar6;
        plVar7 = plVar7 + 1;
      }
      plVar7 = (long *)*plVar7;
      plVar6 = plVar1;
    } while (plVar7 != (long *)0x0);
    if ((plVar1 != (long *)(param_1 + 0x48)) && (*(ushort *)(plVar1 + 4) <= param_2)) {
      lVar5 = plVar1[5];
      goto LAB_0020a03c;
    }
  }
  lVar5 = 0;
LAB_0020a03c:
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return lVar5;
}

