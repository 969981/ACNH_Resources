
void FUN_0024b978(undefined8 param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 local_58;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  local_44 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_58);
  local_58 = 0;
  FUN_002282f0(&local_58);
  plVar4 = (long *)FUN_00228380();
  *(ulong *)(param_2 + 0x68) = local_58 + *plVar4 * 0x1194;
  memcpy((void *)(param_2 + 0xb8),(void *)(param_4 + 8),0x1d6);
  FUN_0024a8d4(&local_58,param_2);
  FUN_00229780(&local_44,&local_58);
  if (local_44 != 0) {
    piVar5 = &local_44;
    goto LAB_0024ba94;
  }
  FUN_0025b6fc(&local_58,*(undefined8 *)(param_2 + 0x70),param_2 + 0xb0);
  FUN_00229780(&local_44,&local_58);
  if (local_44 == 0) {
    FUN_0024e644(&local_58,param_2,param_3,3);
    FUN_00229780(&local_44,&local_58);
    puVar3 = PTR_LAB_04bcd4e0;
    if (local_44 != 0) {
      uVar6 = 0x10c08;
      goto LAB_0024ba7c;
    }
    if ((param_5 & 1) == 0) {
      *(char **)(param_2 + 0x40) = "LdnBackgroundProcessJob::CreateNetworkPrivate";
      puVar2 = PTR_DAT_04bccf00;
      *(undefined **)(param_2 + 0x30) = puVar3;
      *(undefined8 *)(param_2 + 0x38) = 0;
      uVar1 = *(undefined1 *)(param_2 + 0xc2);
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(param_2 + 0xb8);
      puVar2[0x40] = uVar1;
    }
    else {
      *(undefined **)(param_2 + 0x30) = PTR_LAB_04bcd4d8;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) =
           "LdnBackgroundProcessJob::UpdateCreateNetworkSettingForFixedChannel";
    }
    local_58 = local_58 & 0xffffffff00000000;
  }
  else {
    uVar6 = 0x10c07;
LAB_0024ba7c:
    local_58 = CONCAT44(local_58._4_4_,uVar6);
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_34);
  piVar5 = (int *)&local_58;
LAB_0024ba94:
  FUN_002296c4(param_1,piVar5);
  return;
}

