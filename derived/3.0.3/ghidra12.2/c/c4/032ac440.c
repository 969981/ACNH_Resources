
/* WARNING: Removing unreachable block (ram,0x032ac4ac) */
/* WARNING: Removing unreachable block (ram,0x032ac480) */
/* WARNING: Removing unreachable block (ram,0x032ac4e4) */
/* WARNING: Removing unreachable block (ram,0x032ac59c) */

void FUN_032ac440(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_f8 [15];
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_50;
  undefined4 local_44;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FooterControllerIcon";
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_038c6d48(0x28000,&local_40,*param_2,8,1,1);
    local_44 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bc8e60 + 0x10;
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_38 = "";
  FUN_032e24f4(local_f8,&local_40);
  uStack_78 = 0;
  local_50 = 0;
  local_f8[0] = PTR_DAT_04bc9600 + 0x10;
  local_80 = puVar1;
  FUN_032e25f0(local_f8);
  return;
}

