
void FUN_003486c4(long param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  local_60 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_74 = 0;
  if (lVar2 == 0) {
    local_70 = (**(code **)PTR_DAT_04bcf218)(uVar1);
    bVar3 = false;
  }
  else {
    local_78 = 0;
    (**(code **)PTR_DAT_04bcf258)(lVar2,&uStack_6c,&local_78);
    (**(code **)PTR_DAT_04bcf260)(lVar2,&local_70);
    local_7c = 0;
    cVar4 = (**(code **)PTR_DAT_04bcf268)(lVar2,&local_7c,&local_74);
    bVar3 = cVar4 == '\x01';
  }
  iVar5 = (**(code **)PTR_DAT_04bcf270)(uVar1);
  iVar6 = (**(code **)PTR_DAT_04bcf278)(uVar1);
  local_58 = iVar6;
  local_54 = (**(code **)PTR_DAT_04bcf280)(uVar1);
  local_5c = iVar5 >> (uStack_6c & 0x1f);
  if (local_5c < 2) {
    local_5c = 1;
  }
  if ((local_70 == 0) || (local_70 == 3)) {
LAB_00348824:
    if (param_4 != (undefined4 *)0x0) {
      if (local_70 == 3) {
        local_58 = param_4[1];
        uStack_68 = CONCAT44(*param_4,(undefined4)uStack_68);
      }
      else if ((local_70 & 0xfffffffd) == 4) {
        local_60 = *param_4;
        local_54 = param_4[1];
      }
      goto LAB_00348888;
    }
    if (!bVar3) goto LAB_00348888;
    if (local_70 == 3) {
      local_58 = local_74;
      goto LAB_00348888;
    }
    if ((local_70 & 0xfffffffd) != 4) goto LAB_00348888;
  }
  else {
    local_58 = iVar6 >> (uStack_6c & 0x1f);
    if (local_58 < 2) {
      local_58 = 1;
    }
    if (local_70 != 2) goto LAB_00348824;
    local_54 = local_54 >> (uStack_6c & 0x1f);
    if (local_54 < 2) {
      local_54 = 1;
    }
    if (!bVar3) goto LAB_00348888;
  }
  local_54 = local_74;
LAB_00348888:
  (**(code **)PTR_DAT_04bcf288)(*(undefined8 *)(param_1 + 0xb0),uVar1,lVar2,&uStack_68,param_3,0xf);
  return;
}

