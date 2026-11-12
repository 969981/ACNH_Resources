
undefined1 FUN_007b6ebc(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  
  iVar2 = param_1[6];
  if (iVar2 - 2U < 2) {
    return 1;
  }
  if ((iVar2 == 6) || (iVar2 == 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    uVar7 = *(undefined1 *)((long)param_2 + 0x15);
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)((long)param_1 + 0x15) = uVar7;
    param_1[6] = 1;
  }
  puVar3 = PTR_DAT_04bc39e8;
  if (((*(uint *)(DAT_05aec9a0 + 0x330) | *(uint *)(DAT_05aec9a0 + 0x32c)) >> 5 & 1) == 0) {
    if (DAT_0537d558 == 0) {
      bVar5 = true;
    }
    else {
      bVar5 = *(int *)(*(long *)(DAT_0537d558 + 0x10) + 0x380) - 0x25U < 0xfffffffe;
    }
    if (*DAT_055cdb40 == '\0') {
      bVar1 = false;
      if (DAT_055c11c4 != '\0') {
        bVar1 = bVar5;
      }
      uVar7 = 0;
      if ((!bVar1) && (*DAT_055c10d8 == '\0')) {
        param_1[6] = 2;
        uVar7 = 1;
        *puVar3 = 1;
        lVar4 = DAT_05694df8;
        if (DAT_05694df8 != 0) {
          lVar8 = *(long *)(DAT_05694df8 + 8);
          if (lVar8 == 0) {
LAB_007b7070:
            *(undefined4 *)(lVar4 + 0x10) = 1;
            return 1;
          }
          if (*(int *)(DAT_05694df8 + 0x10) == 0) {
            *(undefined4 *)(lVar8 + 0x338) = *param_1;
            *(undefined4 *)(lVar8 + 0x33c) = param_1[1];
            *(undefined4 *)(lVar8 + 0x340) = param_1[2];
            *(undefined4 *)(lVar8 + 0x344) = param_1[3];
            *(undefined4 *)(lVar8 + 0x348) = param_1[4];
            *(undefined1 *)(lVar8 + 0x34c) = *(undefined1 *)(param_1 + 5);
            *(undefined1 *)(lVar8 + 0x34d) = *(undefined1 *)((long)param_1 + 0x15);
            lVar8 = *(long *)(lVar4 + 8);
            if (lVar8 == 0) goto LAB_007b7070;
          }
          *(undefined1 *)(lVar8 + 0x36c) = 0;
          uVar7 = 1;
          plVar6 = *(long **)(lVar4 + 8);
          *(undefined4 *)(lVar4 + 0x10) = 1;
          if (plVar6 != (long *)0x0) {
            if ((int)plVar6[0x36] != 1) {
              return 1;
            }
            (**(code **)(*plVar6 + 0xa8))();
            uVar7 = 1;
          }
        }
      }
      return uVar7;
    }
  }
  return 0;
}

