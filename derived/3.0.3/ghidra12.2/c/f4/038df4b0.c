
void FUN_038df4b0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_04b64fd8;
  param_1[4] = &PTR_LAB_04b64f68;
  if (((((*(char *)(param_1 + 0xf) != '\0') && (lVar2 = param_1[5], lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0x10), plVar3 != (long *)0x0)) &&
      (((char)plVar3[0xf] != '\0' &&
       (uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,lVar2), (uVar1 & 1) != 0)))) &&
     (uVar1 = (**(code **)(*plVar3 + 0x70))(plVar3,lVar2), (uVar1 & 1) != 0)) {
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  plVar3 = param_1 + 7;
  *plVar3 = (long)(PTR_DAT_04bb60d8 + 0x10);
  plVar4 = (long *)param_1[9];
  if (((plVar4 != (long *)0x0) && ((char)plVar4[0xf] != '\0')) &&
     ((uVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,plVar3), (uVar1 & 1) != 0 &&
      (uVar1 = (**(code **)(*plVar4 + 0x70))(plVar4,plVar3), (uVar1 & 1) != 0)))) {
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038df5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

