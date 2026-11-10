
undefined8 FUN_001ab0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined1 auStack_80 [8];
  undefined8 *local_78;
  undefined8 **local_70;
  long local_68;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar6 = *puVar7;
    if (uVar6 != 0) {
      lVar9 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar9 + (ulong)uVar6 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  plVar12 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  FUN_001bb8cc(auStack_80);
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 != param_1 + 0x78) {
    puVar1 = PTR_DAT_04bcc3f8 + 0x10;
    do {
      iVar4 = FUN_001b8fa0(lVar9 + 0x18,"RVCID",0);
      iVar5 = FUN_001b8fa0(param_2,"RVCID",0);
      if ((iVar4 == iVar5) && (*(int *)(lVar9 + 0x90) != -1)) {
        puVar8 = (undefined8 *)FUN_00187df4(0xb0);
        *puVar8 = 0;
        puVar8[2] = puVar1;
        FUN_001b8358(puVar8 + 3,lVar9 + 0x18);
        puVar8[0x11] = *(undefined8 *)(lVar9 + 0x88);
        uVar10 = *(undefined8 *)(lVar9 + 0xa0);
        uVar11 = *(undefined8 *)(lVar9 + 0x90);
        uVar2 = *(undefined8 *)(lVar9 + 0x98);
        uVar3 = *(undefined4 *)(lVar9 + 0xa8);
        puVar8[1] = &local_78;
        puVar8[0x12] = uVar11;
        *(undefined4 *)(puVar8 + 0x15) = uVar3;
        puVar8[0x13] = uVar2;
        puVar8[0x14] = uVar10;
        *puVar8 = local_78;
        local_78[1] = puVar8;
        local_68 = local_68 + 1;
        local_78 = puVar8;
      }
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar9 != param_1 + 0x78);
  }
  for (ppuVar14 = local_70; ppuVar14 != &local_78; ppuVar14 = (undefined8 **)ppuVar14[1]) {
    ppuVar13 = ppuVar14 + 3;
    uVar6 = FUN_001b8fa0(ppuVar13,&DAT_0410a6b7,0);
    if ((uVar6 >> 1 & 1) == 0) goto LAB_001ab2a8;
  }
  if (local_68 == 0) {
    uVar11 = 0;
  }
  else {
    ppuVar13 = local_70 + 3;
LAB_001ab2a8:
    FUN_001b83dc(param_3,ppuVar13);
    uVar11 = 1;
  }
  FUN_001bb8f0(auStack_80);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return uVar11;
}

