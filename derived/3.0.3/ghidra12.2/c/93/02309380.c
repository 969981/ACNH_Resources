
void FUN_02309380(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **local_60;
  char *pcStack_58;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1 + 4);
  if (*(long *)puVar3 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0 && *param_1 != '\0')) {
      pcVar1 = param_1 + 0xc;
      local_60 = &PTR_FUN_04a72ea0;
      iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      pcStack_58 = pcVar1;
      if (iVar2 != 0) {
        lVar6 = (long)iVar2 << 3;
        puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_60)(&local_60,*puVar7);
          lVar6 = lVar6 + -8;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
        if (*param_1 == '\0') {
          return;
        }
      }
      local_28 = 0x1d;
      FUN_02548b40(&local_28,pcVar1);
      if (*param_1 != '\0') {
        local_60 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        pcStack_58 = "PE_Cooking";
        uVar5 = *(undefined8 *)PTR_DAT_04bb49a0;
        local_24 = FUN_006bd550("PE_Cooking",0);
        uVar5 = FUN_01b5b4b0(uVar5,&local_24);
        FUN_01b5e0b0(&local_60,param_1 + 4,uVar5,pcVar1,0);
      }
    }
  }
  return;
}

