
void FUN_0020c3fc(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  piVar1 = (int *)(param_1 + 0x2a0);
  FUN_0018ab44(piVar1);
  puVar3 = PTR_LAB_04bc0ee0;
  puVar2 = PTR_LAB_04bc0ee0;
  if (*(int *)(param_1 + 0x2a0) < 0) {
    puVar2 = (undefined *)0x0;
  }
  if ((puVar2 == (undefined *)0x0) && (*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) != 0)) {
    lVar6 = param_1 + 0x138;
    FUN_001984a0(lVar6);
    uVar7 = FUN_00208f40(*(long *)(param_1 + 0x2f0),lVar6,
                         *(undefined8 *)(*(long *)(param_1 + 0x2f0) + 0xc0));
    if ((uVar7 & 1) != 0) {
      FUN_0019c910(param_1,2);
      plVar8 = (long *)FUN_00185a6c(0x20);
      puVar3 = PTR_LAB_04bccc80;
      puVar2 = PTR_DAT_04bcc0c0;
      if (plVar8 != (long *)0x0) {
        plVar8[2] = 0;
        plVar8[3] = (long)&DAT_0407ebb1;
        *plVar8 = (long)(puVar2 + 0x10);
        plVar8[1] = (long)puVar3;
      }
      FUN_0019ab80(param_1,lVar6);
      return;
    }
  }
  puVar2 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar6 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  lVar6 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar8 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 0xa0));
  if (lVar6 != 0) {
    if (*(long *)(param_1 + 0x478) != 0) {
      FUN_0018ab44(*(long *)(param_1 + 0x478),piVar1);
    }
    if (*piVar1 < 0) {
      puVar3 = (undefined *)0x0;
    }
    if (puVar3 == (undefined *)0x0) {
      local_48 = *(undefined8 *)piVar1;
      uStack_40 = *(undefined8 *)(param_1 + 0x2a8);
      uVar9 = 3;
    }
    else {
      uVar9 = 2;
      **(undefined8 **)(param_1 + 0x130) = *(undefined8 *)(*(long *)(param_1 + 0x2f0) + 0xc0);
      local_48 = *(undefined8 *)piVar1;
      uStack_40 = *(undefined8 *)(param_1 + 0x2a8);
    }
    local_38 = *(undefined8 *)(param_1 + 0x2b0);
    FUN_00197e40(lVar6,uVar9,&local_48,1);
  }
  FUN_00194970(param_1);
  return;
}

