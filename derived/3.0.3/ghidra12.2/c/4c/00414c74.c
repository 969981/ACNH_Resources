
void FUN_00414c74(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  
  lVar1 = param_1 + 0xa8;
  FUN_001984a0(lVar1);
  FUN_00194070(lVar1);
  lVar7 = FUN_00185a6c(0x230);
  if (lVar7 != 0) {
    FUN_0040ee4c(lVar7);
  }
  FUN_0040d140(lVar7,*(undefined4 *)(param_1 + 0xc0),param_1 + 0x140,param_1 + 0x188,
               *(undefined4 *)(param_1 + 0xa4));
  puVar6 = PTR_DAT_04bcb910;
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_00414d20:
    plVar10 = plVar9;
  }
  else {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar8;
    if (uVar3 == 0) goto LAB_00414d20;
    lVar2 = **(long **)(puVar4 + 0xa0);
    if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) goto LAB_00414dec;
    plVar10 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x20);
  }
  FUN_00194148(*(undefined8 *)(*(long *)(*plVar10 + 0x10) + 0x10),lVar7,0);
  if (*puVar5 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    uVar3 = *puVar8;
    if (uVar3 == 0) {
      plVar9 = (long *)(puVar4 + 0x28);
    }
    else {
      lVar7 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar3) {
LAB_00414dec:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar7 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  FUN_0019a150(*(undefined8 *)(*(long *)(*plVar9 + 0x10) + 0x18),*(undefined4 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xc0));
  FUN_0019c910(param_1,2);
  plVar9 = (long *)FUN_00185a6c(0x20);
  puVar5 = PTR_LAB_04bd2b70;
  puVar4 = PTR_DAT_04bcc0c0;
  if (plVar9 != (long *)0x0) {
    plVar9[2] = 0;
    plVar9[3] = (long)&DAT_0407ebb1;
    *plVar9 = (long)(puVar4 + 0x10);
    plVar9[1] = (long)puVar5;
  }
  FUN_0019ab80(param_1,lVar1);
  return;
}

