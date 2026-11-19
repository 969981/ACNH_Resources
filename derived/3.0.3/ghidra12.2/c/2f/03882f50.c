
undefined8
FUN_03882f50(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,int param_5,
            uint param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined *local_70;
  char *pcStack_68;
  
  if (DAT_05ae6bf4 != '\0') {
    return 1;
  }
  uVar4 = (ulong)param_4;
  DAT_05ae6b18 = param_4;
  if (uVar4 != 0) {
    puVar5 = &DAT_05ae6b1c;
    puVar6 = &DAT_05ae6b44;
    uVar8 = uVar4;
    puVar7 = &DAT_05ae6b6c;
    do {
      uVar8 = uVar8 - 1;
      *puVar5 = *param_2;
      uVar2 = *param_3;
      *puVar7 = 0;
      *puVar6 = uVar2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 != 0);
    uVar8 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((&DAT_05ae6b44)[uVar8] == 0) {
        uVar3 = 0;
      }
      else {
        pcStack_68 = "";
        local_70 = puVar1;
        uVar3 = FUN_038ccd58((&DAT_05ae6b1c)[uVar8],(&DAT_05ae6b44)[uVar8],&local_70,8,param_1,
                             param_6 & 1);
        uVar4 = (ulong)DAT_05ae6b18;
      }
      (&DAT_05ae6b98)[uVar8] = uVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  if (param_5 != 0) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "enl::MultiUnitHeapReserved";
    DAT_05ae6be8 = FUN_038c6d48(param_5,&local_70,param_1,8,1,param_6 & 1);
    DAT_05ae6bf0 = 1;
  }
  puVar1 = PTR_DAT_04bcba28;
  *(undefined1 **)PTR_DAT_04bcba20 = &LAB_038830f0;
  *(undefined1 **)puVar1 = &LAB_038831c8;
  DAT_05ae6bf4 = 1;
  return 1;
}

