
void FUN_001d3170(long param_1,long param_2,int param_3,long param_4,uint param_5,long param_6,
                 void *param_7)

{
  ushort uVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [24];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  long lStack_68;
  long local_60;
  undefined4 local_58 [2];
  
  *(undefined8 *)((long)param_7 + 0x10) = 0x10;
  puVar4 = PTR_DAT_04bcbb78;
  puVar2 = PTR_DAT_04bcb908;
  switch(param_3) {
  case 0:
    memset(param_7,0xab,0x10);
    return;
  case 1:
    FUN_001d3470(param_2,param_5,param_7);
    return;
  default:
    goto switchD_001d31bc_caseD_2;
  case 4:
  case 5:
  case 6:
    break;
  case 7:
    FUN_001d3680(param_7,param_1 + 8,param_1 + 0x9d8);
    return;
  }
  uVar7 = (ulong)param_5;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001d322c:
    plVar6 = *(long **)(puVar4 + uVar7 * 0x2a8 + 0x118);
  }
  else {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar3 == 0) goto LAB_001d322c;
    plVar6 = *(long **)(*(long *)(puVar4 + uVar7 * 0x2a8 + 0x10) + (ulong)*puVar3 * 0x148 + 0x100);
  }
  if (plVar6 == (long *)0x0) {
    memset(param_7,0xef,0x10);
    return;
  }
  local_80 = param_2 + 0xb4;
  local_78 = 0;
  local_a8 = 8;
  local_a0 = 0;
  if ((param_3 == 5) && (param_4 != 0)) {
    local_78 = FUN_0019cd8c(param_4);
    local_a0 = FUN_001932e0(param_4);
  }
  local_b0 = 0;
  local_e8 = PTR_DAT_04bcc6e0 + 0x10;
  local_d8 = PTR_DAT_04bcc6e8 + 0x10;
  uStack_e0 = 0;
  local_d0 = 0;
  if (((*(ushort *)(param_2 + 0x60) & 0x1f) != 0x10) || ((*(byte *)(param_2 + 0xd1) & 1) == 0)) {
    if (*puVar2 == '\0') {
LAB_001d3360:
      puVar4 = puVar4 + uVar7 * 0x2a8 + 0x18;
    }
    else {
      puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar3 == 0) goto LAB_001d3360;
      puVar4 = (undefined *)(*(long *)(puVar4 + uVar7 * 0x2a8 + 0x10) + (ulong)*puVar3 * 0x148);
    }
    local_58[0] = *(undefined4 *)(puVar4 + 0x28);
    local_d0 = 4;
    memcpy(auStack_c8,local_58,4);
  }
  if ((((param_6 != 0) && (uVar1 = *(ushort *)(param_2 + 0x60), (uVar1 & 0x600) == 0)) &&
      ((uVar1 & 0xf) != 0)) && ((uVar1 & 0xf) != 5)) {
    FUN_001d3608(&local_e8,param_6,*(undefined8 *)(param_6 + 0x10));
  }
  lStack_90 = *(long *)(param_2 + 0xf0);
  local_70 = (undefined1 *)0x0;
  if (param_3 != 6) {
    local_70 = auStack_c8;
  }
  local_98 = 0;
  if (param_3 != 6) {
    local_98 = local_d0;
  }
  lVar5 = *(long *)(param_2 + 0x138);
  lStack_68 = 0;
  if (lStack_90 != 0) {
    lStack_68 = param_2 + 0xf8;
  }
  if (lVar5 == 0) {
    local_88 = 0;
    local_60 = 0;
  }
  else {
    local_88 = *(long *)(lVar5 + 0x18);
    if (local_88 == 0) {
      local_60 = 0;
    }
    else {
      local_60 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28);
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_80,&local_a8,5,param_7);
  *(undefined8 *)((long)param_7 + 0x10) = 0x10;
switchD_001d31bc_caseD_2:
  return;
}

