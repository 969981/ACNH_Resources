
void FUN_001fc400(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  puVar4 = PTR_DAT_04bc0ec8;
  if (*(int *)PTR_DAT_04bcca28 == 0) {
    uVar1 = *(uint *)(param_1 + 0x48);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar2 != 0) {
        puVar4 = (undefined *)
                 (*(long *)(PTR_DAT_04bcbb78 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar2 * 0x148
                 );
        goto LAB_001fc53c;
      }
    }
    puVar4 = PTR_DAT_04bcbb78 + (ulong)uVar1 * 0x2a8 + 0x18;
LAB_001fc53c:
    local_40[0] = 0;
    puVar3 = PTR_DAT_04bc0ec8 + 0x10;
    local_30 = local_40;
    uStack_28 = 0x10;
    local_48 = puVar3;
    FUN_0018b070(&local_48,PTR_DAT_04bcca30,0xffffffffffffffff);
    FUN_001ba3a0(puVar4,&local_48);
    local_48 = puVar3;
    FUN_0018b1a0(&local_48);
    return;
  }
  local_40[0] = 0;
  local_48 = PTR_DAT_04bc0ec8 + 0x10;
  local_30 = local_40;
  uStack_28 = 0x10;
  FUN_0018619c(&local_48,&DAT_040ec793,PTR_DAT_04bcca30);
  puVar3 = PTR_DAT_04bcbb78;
  uVar1 = *(uint *)(param_1 + 0x48);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar2 != 0) {
      puVar3 = (undefined *)
               (*(long *)(puVar3 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar2 * 0x148);
      goto LAB_001fc500;
    }
  }
  puVar3 = puVar3 + (ulong)uVar1 * 0x2a8 + 0x18;
LAB_001fc500:
  FUN_001ba3a0(puVar3,&local_48);
  local_48 = puVar4 + 0x10;
  FUN_0018b1a0(&local_48);
  return;
}

