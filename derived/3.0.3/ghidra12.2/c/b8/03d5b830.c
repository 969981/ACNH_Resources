
void FUN_03d5b830(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  void *__ptr;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  char local_74 [31];
  undefined1 local_55;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "UIJob";
  local_88 = puVar1;
  FUN_038e1f88(param_1,&local_88,0,0x10,1,0x7fffffff,0x40000,0x20);
  *(undefined1 *)((long)param_1 + 0x104) = 1;
  *param_1 = &PTR_LAB_04b8f980;
  puVar2 = param_1 + 0x25;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x23) = param_3;
  param_1[0x24] = param_2;
  param_1[0x25] = puVar1;
  puVar5 = PTR_DAT_04bb2120;
  *(undefined1 *)((long)param_1 + 0x13e) = 0;
  param_1[0x26] = puVar5;
  pcStack_80 = "";
  local_88 = puVar1;
  FUN_03c5a110(puVar2,&local_88,0xffffffff,1);
  FUN_038e1bac(param_1 + 0x28,0);
  local_78 = 0x20;
  local_74[0] = '\0';
  lVar7 = 0;
  local_55 = 0;
  local_88 = PTR_DAT_04bb2028 + 0x10;
  do {
    if (local_74[lVar7] == '\0') goto LAB_03d5b96c;
    if (local_74[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03d5b96c;
    }
    if (local_74[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03d5b96c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03d5b96c:
  uVar3 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
  uVar4 = 5;
  if (0x1a < uVar3) {
    uVar4 = 0x1f - uVar3;
  }
  pcStack_80 = local_74;
  if (0 < (int)uVar4) {
    memcpy(local_74 + uVar3,"UIJob",(ulong)uVar4);
    local_74[(ulong)uVar4 + (ulong)uVar3] = '\0';
  }
  if (*(char *)((long)param_1 + 0x13e) != '\0') {
    (**(code **)(param_1[0x25] + 0x18))(puVar2);
    __ptr = (void *)param_1[0x26];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x13e) = 0;
  }
  FUN_03c5a110(puVar2,&local_88,0xffffffff,0);
  param_1[5] = param_1[0x26];
  uVar8 = 1L << ((ulong)param_3 & 0x3f);
  *(int *)(param_1 + 0x1a) = (int)uVar8;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)param_1[0x1d],-1,uVar8);
  return;
}

