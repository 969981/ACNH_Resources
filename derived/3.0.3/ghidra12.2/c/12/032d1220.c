
void FUN_032d1220(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *local_50;
  undefined *puStack_48;
  long *local_30;
  undefined8 local_8;
  
  ppuVar1 = &local_50;
  if (*param_1 == 0) {
    plVar2 = *(long **)(DAT_05688e68 + 0x560);
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)(DAT_05688e68 + 0x560);
      *puVar3 = param_1;
      *param_1 = (long)puVar3;
    }
    else {
      plVar5 = plVar2;
      do {
        if ((int)plVar5[0x20] < (int)param_1[0x20]) {
          lVar4 = plVar5[1];
          plVar5[1] = (long)param_1;
          param_1[2] = (long)plVar5;
          if (lVar4 != 0) {
            param_1[1] = lVar4;
            *(long **)(lVar4 + 0x10) = param_1;
          }
          plVar5 = (long *)*plVar5;
          *param_1 = (long)plVar5;
          lVar4 = *plVar5;
          if (*plVar5 != 0) {
            do {
              lVar6 = lVar4;
              lVar4 = *(long *)(lVar6 + 8);
            } while (lVar4 != 0);
            *plVar5 = lVar6;
          }
          goto LAB_032d1238;
        }
        plVar5 = (long *)plVar5[2];
      } while (plVar5 != (long *)0x0);
      do {
        plVar5 = plVar2;
        plVar2 = (long *)plVar5[2];
      } while ((long *)plVar5[2] != (long *)0x0);
      plVar5[2] = (long)param_1;
      param_1[1] = (long)plVar5;
      *param_1 = *plVar5;
    }
  }
LAB_032d1238:
  if (*PTR_DAT_04c4b988 == '\0') {
    local_8 = *(undefined8 *)(param_1[0x1e] + 0x18);
  }
  else {
    local_50 = PTR_DAT_04bc8e68 + 0x10;
    puStack_48 = PTR_DAT_04c4b988;
    local_8 = FUN_032cb8e0(&local_8,&local_50,param_1[0x1e]);
  }
  local_50 = &DAT_04b1b658;
  puStack_48 = (undefined *)&local_50;
  local_30 = (long *)&local_50;
  FUN_032d25d0(&local_50,&local_8);
  if ((undefined **)local_30 == &local_50) {
    puVar3 = (undefined8 *)(local_50 + 0x20);
  }
  else {
    if (local_30 == (long *)0x0) {
      return;
    }
    puVar3 = (undefined8 *)(*local_30 + 0x28);
    ppuVar1 = (undefined **)local_30;
  }
  (*(code *)*puVar3)(ppuVar1);
  return;
}

