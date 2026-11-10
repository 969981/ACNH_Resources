
void FUN_002c6af4(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,uint param_5,
                 uint param_6,undefined1 *param_7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_190;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 auStack_168 [152];
  undefined4 local_d0 [32];
  undefined4 local_44;
  
  puVar8 = &local_190;
  iVar2 = FUN_002b43fc(param_3);
  if ((iVar2 == 0) || (param_7 == (undefined1 *)0x0)) {
    local_d0[0] = 0;
    local_170 = (undefined **)CONCAT44(local_170._4_4_,0x10c07);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_170 + 4),(Result *)local_d0);
    FUN_002296c4(param_1,&local_170);
    return;
  }
  FUN_002b4018(local_d0,param_3);
  lVar4 = FUN_002bd3f0();
  bVar1 = *(byte *)(lVar4 + ((ulong)~param_6 & 1));
  uVar5 = FUN_0028d5ac(&DAT_04c612b8);
  if (((uint)((uVar5 & 0xffffffff) * 100 >> 0x20) < (uint)bVar1) && ((param_5 & 1) == 0)) {
    uVar3 = FUN_002b4404(local_d0);
    FUN_002b454c(local_d0,uVar3 | 0xffffff80);
  }
  FUN_002cb298(&local_170,local_d0,1,param_5 & 1,param_4);
  local_178 = 0;
  local_180 = 0x40000;
  FUN_002cb364(&local_170,&local_180);
  lVar4 = param_2 + 0x180;
  local_178 = 0;
  local_180 = 0x80000;
  FUN_002caa58(lVar4,&local_180);
  lVar6 = FUN_002ca200(lVar4,param_3);
  if (lVar6 == 0) {
    lVar6 = FUN_002ca260(lVar4,param_3);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x99) != '\0')) goto LAB_002c6c48;
  }
  else if (*(int *)(lVar6 + 0x9c) != -1) {
LAB_002c6c48:
    lVar4 = (long)DAT_04be24f4;
    plVar7 = (long *)FUN_00228380();
    lVar9 = *plVar7;
    local_180 = 0;
    FUN_002282f0(&local_180);
    *(undefined4 *)(lVar6 + 0xa4) = 0;
    *(undefined1 *)(lVar6 + 0x99) = 0;
    lVar4 = local_180 + lVar9 * lVar4;
    local_180 = 0;
    *(long *)(lVar6 + 0x90) = lVar4;
    FUN_002282f0(&local_180);
    local_178 = 0;
    *(ulong *)(lVar6 + 0x88) = local_180;
    local_180 = 0x80000;
    (**(code **)(*param_3 + 0x20))(param_3,&local_180);
    local_180 = local_180 & 0xffffffff00000000;
    *param_7 = 1;
    local_190._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_180 + 4),(Result *)&local_190);
    puVar8 = &local_180;
    goto LAB_002c6d18;
  }
  FUN_002c6d60(&local_180,param_2,&local_170);
  if ((int)local_180 == 0) {
    *param_7 = 0;
    local_190._0_4_ = 0;
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_190 + 4),(Result *)&local_44);
  }
  else {
    puVar8 = &local_180;
  }
LAB_002c6d18:
  FUN_002296c4(param_1,puVar8);
  local_170 = &PTR_LAB_04848880;
  FUN_002b4104(auStack_168);
  FUN_002b4104(local_d0);
  return;
}

