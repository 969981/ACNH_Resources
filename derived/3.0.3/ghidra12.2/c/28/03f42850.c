
void FUN_03f42850(long *param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((int)param_1[0xd] != 0) {
    plVar2 = (long *)param_1[0xe];
    lVar3 = (long)(int)param_1[0xd] << 3;
    do {
      lVar4 = *plVar2;
      if ((*(long *)(lVar4 + 0x108) != 0) && (*(char *)(*(long *)(lVar4 + 0x108) + 8) == param_2)) {
        plVar1 = *(long **)(lVar4 + 0x180);
        (**(code **)(*plVar1 + 0x20))(plVar1);
        lVar4 = *(long *)(lVar4 + 0x108);
        if (lVar4 != 0) {
          nn::os::ClearLightEvent((LightEventType *)(lVar4 + 0x78));
          *(byte *)(lVar4 + 9) = *(byte *)(lVar4 + 9) | 5;
        }
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03f4296c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

