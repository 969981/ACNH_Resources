
ulong FUN_0363c890(long param_1,long *param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_4c [4];
  char local_48 [4];
  char local_44 [4];
  char local_40 [4];
  char local_3c [4];
  char local_38 [4];
  char local_34 [4];
  
  if (param_4 < 0x33) {
    if ((param_3 != 0xb) || (0x1a < param_4)) goto LAB_0363c914;
    plVar3 = *(long **)(param_1 + 0x28);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363c8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0xb,param_4);
      return uVar4;
    }
  }
  else {
    uVar4 = FUN_04002180(param_2,1,1,auStack_4c);
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
      goto LAB_0363cabc;
    }
LAB_0363c914:
    if ((int)param_2[1] == 0) {
      if (param_3 < 0xc && param_4 < 0x28) {
        if (*(char *)(param_1 + 8) != '\0') {
          *(undefined1 *)(param_1 + 8) = 0;
        }
      }
      else {
        local_48[0] = '\0';
        (**(code **)(*param_2 + 0x28))(param_2,local_48);
        if ((bool)*(char *)(param_1 + 8) != (local_48[0] != '\0')) {
          *(bool *)(param_1 + 8) = local_48[0] != '\0';
        }
      }
      if ((param_3 < 0xc) && (param_4 < 0x32)) {
        if (*(char *)(param_1 + 9) != '\0') {
          *(undefined1 *)(param_1 + 9) = 0;
        }
      }
      else {
        local_44[0] = '\0';
        (**(code **)(*param_2 + 0x28))(param_2,local_44);
        if ((bool)*(char *)(param_1 + 9) != (local_44[0] != '\0')) {
          *(bool *)(param_1 + 9) = local_44[0] != '\0';
        }
      }
      local_40[0] = '\0';
      (**(code **)(*param_2 + 0x28))(param_2,local_40);
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 == (long *)0x0) {
        if (local_40[0] != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)UndefinedInstructionException(0x8002,0x363cad4);
          (*pcVar1)();
        }
      }
      else if (local_40[0] != '\0') goto LAB_0363ca98;
    }
    else {
      if (param_3 >= 0xc || param_4 >= 0x28) {
        local_3c[0] = *(char *)(param_1 + 8);
        (**(code **)(*param_2 + 0x28))(param_2,local_3c);
        *(bool *)(param_1 + 8) = local_3c[0] != '\0';
      }
      if ((0xb < param_3) || (0x31 < param_4)) {
        local_38[0] = *(char *)(param_1 + 9);
        (**(code **)(*param_2 + 0x28))(param_2,local_38);
        *(bool *)(param_1 + 9) = local_38[0] != '\0';
      }
      local_34[0] = *(long *)(param_1 + 0x28) != 0;
      (**(code **)(*param_2 + 0x28))(param_2,local_34);
      if (local_34[0] != '\0') {
        plVar3 = *(long **)(param_1 + 0x28);
LAB_0363ca98:
        uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,param_4);
        goto LAB_0363cabc;
      }
    }
  }
  uVar2 = 1;
LAB_0363cabc:
  return (ulong)(uVar2 & 1);
}

