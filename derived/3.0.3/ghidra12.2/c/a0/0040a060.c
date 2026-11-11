
void FUN_0040a060(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  if (param_2 != param_3) {
    puVar1 = PTR_DAT_04bd26e0 + 0x10;
    do {
      plVar3 = (long *)FUN_0040a1a0(param_1,param_1 + 1,&local_48,auStack_50,param_2 + 4);
      if (*plVar3 == 0) {
        puVar4 = (undefined8 *)FUN_00187df4(0x50);
        *(char *)(puVar4 + 4) = (char)param_2[4];
        *(char *)(puVar4 + 6) = (char)param_2[6];
        puVar4[7] = param_2[7];
        *(int *)(puVar4 + 8) = (int)param_2[8];
        lVar5 = param_2[9];
        puVar4[5] = puVar1;
        puVar4[9] = lVar5;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = local_48;
        *plVar3 = (long)puVar4;
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          puVar4 = (undefined8 *)*plVar3;
        }
        FUN_03876250(param_1[1],puVar4);
        param_1[2] = param_1[2] + 1;
        plVar3 = (long *)param_2[1];
        if ((long *)param_2[1] != (long *)0x0) goto LAB_0040a160;
LAB_0040a170:
        do {
          plVar6 = (long *)param_2[2];
          bVar2 = (long *)*plVar6 != param_2;
          param_2 = plVar6;
        } while (bVar2);
      }
      else {
        plVar3 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) goto LAB_0040a170;
LAB_0040a160:
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      param_2 = plVar6;
    } while (plVar6 != param_3);
  }
  return;
}

