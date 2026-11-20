
void FUN_03eba9c0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *__src;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *__dest;
  undefined8 *__s;
  undefined **local_230;
  undefined8 *puStack_228;
  undefined **local_220;
  undefined1 *local_218;
  undefined4 local_210;
  undefined1 local_20c [255];
  undefined1 local_10d;
  undefined1 local_108;
  undefined *local_100;
  long local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8 [15];
  char local_50;
  
  FUN_006cd430(local_c8);
  __s = *(undefined8 **)(param_1 + 8);
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar1 = *(int *)(param_1 + 0x10) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  puVar2 = PTR_DAT_04bb2818;
  local_d8 = 0;
  uStack_d0 = 0;
  local_218 = local_20c;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f0 = (long *)0x0;
  local_100 = PTR_DAT_04bb2818 + 0x10;
  local_10d = 0;
  local_20c[0] = 0;
  local_f8 = 0;
  local_210 = 0x100;
  local_108 = 0;
  local_220 = &PTR_LAB_048f9a70;
  local_230 = &PTR_LAB_048f9770;
  puStack_228 = &DAT_0407ebb1;
  if (local_50 != '\0') {
    local_f8 = (**(code **)(local_c8[0] + 0xd0))(local_c8,&local_100,&local_230);
    if (local_f8 != 0) {
      local_f0 = local_c8;
    }
  }
  param_3 = param_3 + 1;
  do {
    if (local_50 == '\0') goto LAB_03ebabf4;
    uVar4 = (**(code **)(local_c8[0] + 0x48))(local_c8,&local_100);
    if ((uVar4 & 1) == 0) goto LAB_03ebabb8;
    local_230 = (undefined **)((ulong)local_230 & 0xffffffff00000000);
    (**(code **)(local_c8[0] + 0xe0))(local_c8,&local_230,&local_100,&local_220,1);
    if ((int)local_230 == 0) goto LAB_03ebabb8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  __dest = *(undefined1 **)(param_1 + 8);
  (*(code *)local_220[3])(&local_220);
  __src = local_218;
  if (__dest != local_218) {
    (*(code *)local_220[3])(&local_220);
    lVar5 = 0;
    do {
      if (local_218[lVar5] == '\0') goto LAB_03ebab90;
      if (local_218[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03ebab90;
      }
      if (local_218[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03ebab90;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03ebab90:
    iVar1 = (int)lVar5;
    if (*(int *)(param_1 + 0x10) <= (int)lVar5) {
      iVar1 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    __dest[iVar1] = 0;
  }
LAB_03ebabb8:
  if (((local_50 != '\0') &&
      (uVar4 = (**(code **)(local_c8[0] + 0x48))(local_c8,&local_100), (uVar4 & 1) != 0)) &&
     (uVar4 = (**(code **)(local_c8[0] + 0xd8))(local_c8,&local_100), (uVar4 & 1) != 0)) {
    local_f8 = 0;
    local_f0 = (long *)0x0;
  }
LAB_03ebabf4:
  plVar3 = local_f0;
  local_100 = puVar2 + 0x10;
  if (((local_f0 != (long *)0x0) && ((char)local_f0[0xf] != '\0')) &&
     (uVar4 = (**(code **)(*local_f0 + 0x48))(local_f0,&local_100), (uVar4 & 1) != 0)) {
    (**(code **)(*plVar3 + 0xd8))(plVar3,&local_100);
  }
  FUN_038b3c54(local_c8);
  return;
}

