
void FUN_025a6b60(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "growup_manpu";
  FUN_026012f4(param_1,&local_50,param_2);
  *param_1 = &PTR_LAB_04a85a98;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar9 = param_1 + 5;
  *plVar9 = 0;
  puVar2 = PTR_DAT_04bb2268;
  param_1[8] = 0;
  lVar7 = DAT_05ae7600;
  if (*(char *)(*(long *)puVar2 + 0xb1) != '\0') {
    return;
  }
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0x368);
joined_r0x025a6c8c:
    if (pvVar6 != (void *)0x0) {
      param_1[6] = 0x6d00000000;
      param_1[7] = pvVar6;
    }
  }
  else {
    plVar4 = *(long **)(*(long *)puVar2 + 0x28);
    if (plVar4 != (long *)0x0) {
LAB_025a6c14:
      pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x368,8);
      goto joined_r0x025a6c8c;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_025a6c14;
  }
  if ((((*(long *)puVar2 == 0) || (*(char *)(*(long *)puVar2 + 0xb1) != '\0')) || (param_1[1] == 0))
     || (lVar7 = *(long *)(param_1[1] + 8), lVar7 == 0)) {
LAB_025a6c44:
    *plVar9 = 0;
  }
  else {
    lVar7 = FUN_03f29260(lVar7,0x6d,0x10);
    if (lVar7 == 0) {
      *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
      goto LAB_025a6c44;
    }
    param_1[5] = lVar7;
    puVar3 = PTR_DAT_04bc3578;
    iVar10 = 0;
    do {
      lVar5 = *plVar9;
      lVar7 = FUN_03f2a10c(0x10,**(undefined8 **)puVar3,1);
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x38);
        uVar8 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          plVar4 = *(long **)(lVar5 + 0x40);
          do {
            if (*plVar4 == 0) {
              *plVar4 = lVar7;
              goto LAB_025a6d30;
            }
            plVar4 = plVar4 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        lVar7 = 0;
      }
LAB_025a6d30:
      if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
        *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar7;
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x6d);
  }
  if (param_1[1] != 0) {
    lVar5 = *(long *)(param_1[1] + 8);
    lVar7 = 0;
    if (lVar5 == 0) goto LAB_025a6c68;
    if (*(char *)(*(long *)puVar2 + 0xb1) == '\0') {
      lVar7 = FUN_03f28df0(lVar5,8);
      if (lVar7 == 0) {
        *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
      }
      goto LAB_025a6c68;
    }
  }
  lVar7 = 0;
LAB_025a6c68:
  param_1[8] = lVar7;
  return;
}

