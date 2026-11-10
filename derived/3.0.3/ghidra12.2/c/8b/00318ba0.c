
void FUN_00318ba0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  
  FUN_00204400(param_1,0xc);
  *param_1 = (long)(PTR_DAT_04bcece8 + 0x10);
  FUN_0031aff0(param_1 + 4,0x15);
  FUN_0031b26c(param_1 + 0x16,0x32);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_MM-4_6_11-Release");
  puVar3 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar11 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar11 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar11 = *(long *)(*plVar12 + 0x10), lVar11 == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  plVar12 = (long *)(lVar11 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  puVar3 = PTR_DAT_04bcecf0;
  (**(code **)(*(long *)PTR_DAT_04bcecf0 + 0x10))(PTR_DAT_04bcecf0);
  puVar5 = PTR_DAT_04bcecf8;
  iVar14 = *(int *)(PTR_DAT_04bcecf8 + 8);
  if (iVar14 == 0) {
    DAT_04c61758 = FUN_00185a6c(0x18);
    if (DAT_04c61758 != 0) {
      *(long *)DAT_04c61758 = DAT_04c61758;
      *(long *)(DAT_04c61758 + 8) = DAT_04c61758;
      *(undefined8 *)(DAT_04c61758 + 0x10) = 0;
    }
    iVar14 = *(int *)(puVar5 + 8);
  }
  *(undefined **)PTR_DAT_04bceb90 = puVar5;
  *(int *)(puVar5 + 8) = iVar14 + 1;
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  if (iVar14 == 0) {
    plVar8 = (long *)FUN_00185a6c(0x60);
    if (plVar8 == (long *)0x0) {
      FUN_00319100(0,0);
    }
    else {
      uVar9 = FUN_0031a400();
      uVar10 = FUN_00319100(uVar9,plVar8);
      if ((uVar10 & 1) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    plVar8 = (long *)FUN_00185a6c(200);
    puVar5 = PTR_DAT_04bced00;
    puVar3 = PTR_DAT_04bc0ec8;
    if (plVar8 == (long *)0x0) {
      FUN_00319100(0,0);
      plVar8 = (long *)FUN_00185a6c(0x68);
    }
    else {
      *(undefined1 *)(plVar8 + 1) = 0;
      puVar1 = puVar3 + 0x10;
      *(undefined4 *)((long)plVar8 + 0xc) = 0;
      *(undefined1 *)(plVar8 + 8) = 0;
      plVar8[10] = (long)(plVar8 + 8);
      plVar8[0xb] = 0x10;
      plVar8[7] = (long)puVar1;
      *plVar8 = (long)(puVar5 + 0x10);
      *(undefined4 *)(plVar8 + 4) = 0;
      *(undefined8 *)((long)plVar8 + 0x24) = 1;
      *(undefined8 *)((long)plVar8 + 0x2c) = 0x200;
      plVar8[2] = 0;
      plVar8[3] = 0;
      FUN_0018a58c(plVar8 + 7,&DAT_0407ebb1);
      puVar6 = PTR_DAT_04bced08;
      puVar4 = PTR_DAT_04bcbc48;
      *(undefined1 *)(plVar8 + 0xc) = 0;
      *plVar8 = (long)(puVar6 + 0x10);
      plVar13 = plVar8 + 0xd;
      *plVar13 = (long)(puVar4 + 0x10);
      *(undefined4 *)(plVar8 + 0xe) = 1;
      puVar4 = PTR_DAT_04bcc018;
      *(undefined1 *)((long)plVar8 + 0x74) = 0;
      *plVar13 = (long)(puVar4 + 0x10);
      uVar9 = FUN_00196a18();
      FUN_00196a24(plVar13,uVar9,0);
      plVar8[0x14] = (long)puVar1;
      *(undefined1 *)(plVar8 + 0x15) = 0;
      puVar1 = PTR_DAT_04bced10;
      plVar8[0x17] = (long)(plVar8 + 0x15);
      plVar8[0x18] = 0x10;
      *plVar8 = (long)(puVar1 + 0x10);
      uVar9 = FUN_0018b070(plVar8 + 0x14,"DynamicGathering",0xffffffffffffffff);
      uVar10 = FUN_00319100(uVar9,plVar8);
      if ((uVar10 & 1) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      plVar8 = (long *)FUN_00185a6c(0x68);
    }
    if (plVar8 == (long *)0x0) {
      FUN_00319100(0,0);
    }
    else {
      *(undefined1 *)(plVar8 + 1) = 0;
      plVar8[7] = (long)(puVar3 + 0x10);
      *(undefined4 *)((long)plVar8 + 0xc) = 0;
      *(undefined1 *)(plVar8 + 8) = 0;
      plVar8[10] = (long)(plVar8 + 8);
      plVar8[0xb] = 0x10;
      *plVar8 = (long)(puVar5 + 0x10);
      *(undefined8 *)((long)plVar8 + 0x24) = 1;
      *(undefined4 *)(plVar8 + 4) = 0;
      *(undefined8 *)((long)plVar8 + 0x2c) = 0x200;
      plVar8[2] = 0;
      plVar8[3] = 0;
      uVar9 = FUN_0018a58c(plVar8 + 7,&DAT_0407ebb1);
      puVar3 = PTR_DAT_04bced18;
      *(undefined1 *)(plVar8 + 0xc) = 0;
      *plVar8 = (long)(puVar3 + 0x10);
      uVar10 = FUN_00319100(uVar9,plVar8);
      if ((uVar10 & 1) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00318d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return;
}

