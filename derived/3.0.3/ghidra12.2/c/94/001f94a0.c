
void FUN_001f94a0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((param_3 != (long *)0x0) || ((char)param_1[0xe] == '\0')) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xd] = (long)param_3;
    if (param_3 == (long *)0x0) {
      param_1[0xf] = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      param_1[0xf] = param_3[0x13];
      *(int *)(param_1 + 0x10) = (int)param_3[0x12];
      uVar3 = (**(code **)(*param_3 + 0xf8))(param_3);
      if ((uVar3 >> 0x18 & 1) == 0) {
        *(undefined1 *)(param_2 + 0x69) = 1;
      }
    }
  }
  FUN_0018aa4c(&local_68);
  FUN_001f96c8(param_2,&local_68);
  lVar5 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if ((ulong)(*(long *)(lVar5 + 0x18) - lVar2) < 4) {
    uVar7 = 0;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    uVar7 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar2);
    *(long *)(param_2 + 0x18) = lVar2 + 4;
  }
  puVar1 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      lVar5 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar5 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  lVar5 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar8 + 0x10) + 0x18),uVar7);
  if (lVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 8) == '\0') {
    puVar1 = PTR_LAB_04bc0ee0;
    if (local_68 < 0) {
      puVar1 = (undefined *)0x0;
    }
    if (puVar1 == (undefined *)0x0) {
      local_48 = CONCAT44(uStack_64,local_68);
      uStack_40 = uStack_60;
    }
    else {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2,lVar5);
      if (*(char *)(param_2 + 8) == '\0') {
        local_4c = 0x10001;
        FUN_0018aa70(&local_48,&local_4c);
        uVar6 = 2;
        goto LAB_001f9600;
      }
      local_4c = 0x8001000f;
      FUN_0018aa70(&local_98,&local_4c);
      local_48 = local_98;
      uStack_40 = uStack_90;
    }
  }
  else {
    local_4c = 0x8001000f;
    FUN_0018aa70(&local_80,&local_4c);
    local_48 = local_80;
    uStack_40 = uStack_78;
  }
  uVar6 = 3;
LAB_001f9600:
  FUN_00197e40(lVar5,uVar6,&local_48,1);
  return;
}

