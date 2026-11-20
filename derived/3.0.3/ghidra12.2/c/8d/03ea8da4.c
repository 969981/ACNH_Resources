
void FUN_03ea8da4(undefined8 *param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *__ptr;
  undefined **ppuStack_68;
  undefined8 local_60;
  undefined **local_50;
  undefined8 *puStack_48;
  
  local_60 = *(undefined8 *)(param_3 + 8);
  *param_1 = &PTR_FUN_04ba4318;
  param_1[1] = 0;
  param_1[2] = 0;
  ppuStack_68 = &PTR_LAB_048f9770;
  puVar4 = param_1 + 4;
  *puVar4 = &PTR_LAB_048f9770;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined1 *)((long)param_1 + 0x36) = 0;
  param_1[5] = &DAT_0419b684;
  local_50 = &PTR_LAB_048f9770;
  puStack_48 = &DAT_0407ebb1;
  FUN_03c5a110(puVar4,&local_50,0xffffffff,1);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(char *)((long)param_1 + 0x36) != '\0') {
    (**(code **)(param_1[4] + 0x18))(puVar4);
    __ptr = (void *)param_1[5];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x36) = 0;
  }
  FUN_03c5a110(puVar4,&ppuStack_68,0xffffffff,0);
  (**(code **)(param_1[4] + 0x18))(puVar4);
  uVar3 = (**(code **)*param_4)(param_4,param_1[5]);
  puVar1 = PTR_DAT_04bd3890;
  param_1[7] = uVar3;
  param_1[0xf] = 0;
  param_1[10] = puVar1 + 0x10;
  *param_1 = &PTR_FUN_04ba4350;
  param_1[9] = param_1 + 10;
  return;
}

