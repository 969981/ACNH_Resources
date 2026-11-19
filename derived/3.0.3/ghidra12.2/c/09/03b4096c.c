
void FUN_03b4096c(char *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  
  if (*param_1 != '\0') {
    uVar2 = FUN_003ba54c(param_1 + 0x8c8);
    if ((uVar2 & 1) != 0) {
      FUN_003ba6b0(param_1 + 0x8c8);
    }
    puVar1 = PTR_DAT_04bb2698;
    pvVar4 = *(void **)(param_1 + 0xc78);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      param_1[0xc78] = '\0';
      param_1[0xc79] = '\0';
      param_1[0xc7a] = '\0';
      param_1[0xc7b] = '\0';
      param_1[0xc7c] = '\0';
      param_1[0xc7d] = '\0';
      param_1[0xc7e] = '\0';
      param_1[0xc7f] = '\0';
    }
    pvVar4 = *(void **)(param_1 + 0xc88);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      param_1[0xc88] = '\0';
      param_1[0xc89] = '\0';
      param_1[0xc8a] = '\0';
      param_1[0xc8b] = '\0';
      param_1[0xc8c] = '\0';
      param_1[0xc8d] = '\0';
      param_1[0xc8e] = '\0';
      param_1[0xc8f] = '\0';
    }
    uVar2 = FUN_003d0c1c(param_1 + 0x90);
    if ((uVar2 & 1) != 0) {
      FUN_003e015c(param_1 + 0x78);
    }
    pvVar4 = *(void **)(param_1 + 0xc58);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      param_1[0xc58] = '\0';
      param_1[0xc59] = '\0';
      param_1[0xc5a] = '\0';
      param_1[0xc5b] = '\0';
      param_1[0xc5c] = '\0';
      param_1[0xc5d] = '\0';
      param_1[0xc5e] = '\0';
      param_1[0xc5f] = '\0';
    }
    uVar2 = FUN_003b82fc(param_1 + 0x2b8);
    if ((uVar2 & 1) != 0) {
      FUN_003e4a04(param_1 + 0x2b8);
    }
    pvVar4 = *(void **)(param_1 + 0xc38);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      param_1[0xc38] = '\0';
      param_1[0xc39] = '\0';
      param_1[0xc3a] = '\0';
      param_1[0xc3b] = '\0';
      param_1[0xc3c] = '\0';
      param_1[0xc3d] = '\0';
      param_1[0xc3e] = '\0';
      param_1[0xc3f] = '\0';
    }
    pvVar4 = *(void **)(param_1 + 0xc48);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      param_1[0xc48] = '\0';
      param_1[0xc49] = '\0';
      param_1[0xc4a] = '\0';
      param_1[0xc4b] = '\0';
      param_1[0xc4c] = '\0';
      param_1[0xc4d] = '\0';
      param_1[0xc4e] = '\0';
      param_1[0xc4f] = '\0';
    }
    if (*(long *)(param_1 + 0xc00) != 0) {
      FUN_003e5288(param_1 + 0xbd8);
    }
    pvVar4 = *(void **)(param_1 + 0xc98);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      param_1[0xc98] = '\0';
      param_1[0xc99] = '\0';
      param_1[0xc9a] = '\0';
      param_1[0xc9b] = '\0';
      param_1[0xc9c] = '\0';
      param_1[0xc9d] = '\0';
      param_1[0xc9e] = '\0';
      param_1[0xc9f] = '\0';
    }
    if (DAT_05aebc00 == '\0') {
      FUN_003cd468();
    }
    pvVar4 = *(void **)(param_1 + 0xc28);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      param_1[0xc28] = '\0';
      param_1[0xc29] = '\0';
      param_1[0xc2a] = '\0';
      param_1[0xc2b] = '\0';
      param_1[0xc2c] = '\0';
      param_1[0xc2d] = '\0';
      param_1[0xc2e] = '\0';
      param_1[0xc2f] = '\0';
    }
    *param_1 = '\0';
  }
  return;
}

