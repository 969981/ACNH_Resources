
void FUN_002a6de0(char *param_1,uint *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char acStack_130 [256];
  
  if ((*param_1 != '\0') && (*param_2 != 0)) {
    sprintf(acStack_130,"%08x");
    plVar1 = (long *)FUN_002ba790(DAT_04c61168);
    uVar3 = 0;
    do {
      if (((*param_2 >> (ulong)(uVar3 & 0x1f) & 1) != 0) &&
         (lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar3), lVar2 != 0)) {
        *(undefined8 *)(lVar2 + 0x80) = *param_3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x20);
  }
  return;
}

