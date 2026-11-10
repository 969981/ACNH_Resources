
void FUN_001d4c64(long param_1,undefined8 param_2,int param_3,uint param_4,long param_5,
                 void *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  size_t __n;
  ulong uVar7;
  undefined *puVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  *(undefined8 *)((long)param_6 + 0x10) = 0;
  puVar3 = PTR_DAT_04bcbb78;
  puVar2 = PTR_DAT_04bcb910;
  puVar1 = PTR_DAT_04bcb908;
  if (param_3 == 1) {
    FUN_001d3470(param_2,param_4,param_6);
    return;
  }
  if (param_3 == 7) {
    FUN_001d3680(param_6,param_1 + 8,param_1 + 0x9d8);
    return;
  }
  if (param_3 != 8) {
    return;
  }
  uVar7 = (ulong)param_4;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001d4d60:
    puVar8 = puVar3 + uVar7 * 0x2a8 + 0x18;
    lVar6 = *(long *)(param_5 + 0x10);
    local_60 = puVar3 + uVar7 * 0x2a8 + 0x20;
  }
  else {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar4 == 0) goto LAB_001d4d60;
    puVar8 = (undefined *)(*(long *)(puVar3 + uVar7 * 0x2a8 + 0x10) + (ulong)*puVar4 * 0x148);
    lVar6 = *(long *)(param_5 + 0x10);
    local_60 = puVar8 + 8;
  }
  if (lVar6 == 0) {
    __n = *(size_t *)(puVar8 + 0x18);
    if (__n == 0) {
      __n = 0x10;
      memset(param_6,0,0x10);
    }
    else {
      memcpy(param_6,local_60,__n);
    }
    *(size_t *)((long)param_6 + 0x10) = __n;
    return;
  }
  if (*puVar1 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)puVar2);
    if (*puVar4 != 0) {
      plVar5 = *(long **)(*(long *)(puVar3 + uVar7 * 0x2a8 + 0x10) + (ulong)*puVar4 * 0x148 + 0x100)
      ;
      goto joined_r0x001d4de0;
    }
  }
  plVar5 = *(long **)(puVar3 + uVar7 * 0x2a8 + 0x118);
joined_r0x001d4de0:
  if (plVar5 == (long *)0x0) {
    memset(param_6,0xef,0x10);
    return;
  }
  local_70 = *(undefined8 *)(puVar8 + 0x18);
  uStack_68 = *(undefined8 *)(param_5 + 0x10);
  lStack_58 = param_5;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60,&local_70,2,param_6);
  *(undefined8 *)((long)param_6 + 0x10) = 0x10;
  return;
}

