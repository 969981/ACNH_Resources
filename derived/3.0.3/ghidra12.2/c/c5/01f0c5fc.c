
void FUN_01f0c5fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_1 + 0x540))();
  local_70 = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_60 = 0;
  local_80 = puVar1;
  puStack_78 = puVar2;
  local_68 = puVar2;
  FUN_01811430(&local_80);
  fVar6 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278) + -2.5;
  fVar8 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280) + -2.5;
  iVar3 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  iVar4 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  if ((((int)local_60 < iVar3 || iVar3 + 1 < (int)local_70) || local_60._4_4_ < iVar4) ||
      iVar4 + 1 < local_70._4_4_) {
    return;
  }
  local_8c = 0;
  local_84 = 0.0;
  (**(code **)(*param_1 + 0x5a8))(param_1,&local_8c);
  local_94 = 0;
  local_48 = 0;
  uStack_38 = 0;
  local_58 = puVar1;
  puStack_50 = puVar2;
  local_40 = puVar2;
  FUN_01811430(&local_58);
  puVar1 = PTR_DAT_04bb27c8;
  local_90 = (float)local_48._4_4_ * 5.0 + 5.0;
  local_98 = (float)(int)local_48 * 5.0 + 5.0;
  lVar5 = *(long *)PTR_DAT_04bb27c8;
  if (lVar5 == 0) {
    local_94 = 0xc3fa0000;
  }
  else {
    if ((*(long *)(lVar5 + 0xa8) == 0) || (*(char *)(lVar5 + 0x11c8) != '\0')) {
      local_94 = 0xc3fa0000;
    }
    else {
      local_94 = FUN_0093a950(lVar5 + 0x28,&local_98,0);
      lVar5 = *(long *)puVar1;
      if (lVar5 == 0) goto LAB_01f0c7a4;
    }
    if ((*(long *)(lVar5 + 0xa8) != 0) && (*(char *)(lVar5 + 0x11c8) == '\0')) {
      uVar7 = FUN_0093a950(lVar5 + 0x28,&local_8c,0);
      goto LAB_01f0c7a8;
    }
  }
LAB_01f0c7a4:
  uVar7 = 0xc3fa0000;
LAB_01f0c7a8:
  local_8c = CONCAT44(uVar7,(float)local_8c);
  local_9c = FUN_006f0400(local_98 - (float)local_8c,local_90 - local_84);
  FUN_01e39778(param_1[1],&local_8c,&local_9c,0);
  return;
}

