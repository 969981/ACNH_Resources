
void FUN_0044e0a0(long param_1,char *param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *__s1;
  short *psVar6;
  long lVar7;
  undefined8 local_48;
  
  if (param_1 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_00426e90(param_1,0x800000);
      if (puVar4 == (undefined8 *)0x0) {
        psVar6 = (short *)0x0;
      }
      else {
        psVar6 = (short *)*puVar4;
      }
      sVar1 = *psVar6;
      sVar2 = psVar6[1];
      if (0 < (int)((long)sVar2 + (long)sVar1)) {
        lVar7 = 0;
        do {
          psVar6 = psVar6 + 4;
          local_48 = *(undefined8 *)psVar6;
          lVar5 = FUN_00427b40(&local_48);
          if (lVar5 != 0) {
            __s1 = (char *)FUN_00427b40(&local_48);
            iVar3 = strcmp(__s1,param_2);
            if (iVar3 == 0) {
              *(undefined8 *)psVar6 = param_3;
              return;
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < (long)sVar2 + (long)sVar1);
      }
      param_1 = *(long *)(param_1 + 8);
    } while (param_1 != 0);
  }
  return;
}

