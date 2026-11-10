
void FUN_002209f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 local_44;
  undefined4 local_3c;
  int local_34 [4];
  undefined4 local_24;
  
  local_44 = local_44 & 0xffffffff00000000;
  local_34[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_44 + 4),(Result *)local_34);
  FUN_002296c4(local_34,&local_44);
  if (DAT_04be2344 == '\0') {
LAB_00220afc:
    FUN_002296c4(param_1,local_34);
    return;
  }
  if (param_2[0xb4] == 0) {
    uVar3 = 0x10c08;
  }
  else {
    uVar2 = FUN_002212e4(param_2 + 0x17);
    if ((uVar2 & 1) == 0) {
      puVar1 = param_2 + 0xaf;
      uVar2 = FUN_0021f6f8(puVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0x6436;
        goto LAB_00220a84;
      }
      if (*(char *)(param_2 + 0xb3) == '\0') {
        (*(code *)param_2[0xb4])(&local_44,puVar1,*param_2,*(undefined4 *)(param_2 + 3));
        FUN_00229780(local_34,&local_44);
        if (local_34[0] == 0) {
          local_44 = 0;
          local_3c = 0x200;
          FUN_00220138(puVar1,&local_44);
        }
        goto LAB_00220afc;
      }
    }
    uVar3 = 0x4c11;
  }
LAB_00220a84:
  local_44 = CONCAT44(local_44._4_4_,uVar3);
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_44 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_44);
  return;
}

