
void FUN_02ac88b0(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *__src;
  undefined *local_50;
  char *pcStack_48;
  
  pvVar8 = *(void **)(param_1 + 0x70);
  *(long *)(param_1 + 0x60) = param_2[1];
  plVar4 = param_2 + 2;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = (void *)param_2[3];
  if (pvVar8 != __src) {
    (**(code **)(param_2[2] + 0x18))(plVar4);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[3] + lVar6) == '\0') goto LAB_02ac895c;
      lVar5 = param_2[3] + lVar6;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02ac895c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02ac895c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02ac895c:
    iVar2 = (int)lVar6;
    if (*(int *)(param_1 + 0x78) <= (int)lVar6) {
      iVar2 = *(int *)(param_1 + 0x78) + -1;
    }
    memcpy(pvVar8,__src,(long)iVar2);
    *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
  }
  *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)((long)param_2 + 0x4a);
  bVar3 = *(byte *)(param_1 + 8) & 0xfd | (char)param_2[9] << 1;
  *(byte *)(param_1 + 8) = bVar3;
  *(byte *)(param_1 + 8) = bVar3 & 0xfb | *(char *)((long)param_2 + 0x4c) << 2;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar8 = malloc(0xf0);
  }
  else {
    plVar4 = (long *)*param_2;
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_02ac8a18;
    }
    pvVar8 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xf0,8);
  }
  if (pvVar8 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(void **)(param_1 + 0xb0) = pvVar8;
    *(undefined8 *)(param_1 + 0xb8) = 0x14;
  }
LAB_02ac8a18:
  lVar6 = param_1 + 0x10;
  FUN_03ebac90(lVar6,3,0,*param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(lVar6,0,&local_50);
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  puVar7[2] = FUN_02ac8b68;
  puVar7[3] = 0;
  puVar7[4] = &LAB_02ac8c20;
  puVar7[5] = 0;
  *puVar7 = &PTR_LAB_04a9e9e0;
  puVar7[1] = param_1;
  puVar7[6] = &LAB_02ac8e64;
  puVar7[7] = 0;
  pcStack_48 = "State::cIn";
  local_50 = puVar1;
  FUN_03ebaf40(lVar6,1,&local_50);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)(1 < *(uint *)(param_1 + 0x38)) * 0x40)
  ;
  puVar7[4] = &LAB_02ac9008;
  puVar7[5] = 0;
  *puVar7 = &PTR_LAB_04a9e9e0;
  puVar7[1] = param_1;
  puVar7[2] = &LAB_02ac8e68;
  puVar7[3] = 0;
  puVar7[6] = &LAB_02ac9250;
  puVar7[7] = 0;
  pcStack_48 = "State::cOut";
  local_50 = puVar1;
  FUN_03ebaf40(lVar6,2,&local_50);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)(2 < *(uint *)(param_1 + 0x38)) * 0x80)
  ;
  *puVar7 = &PTR_LAB_04a9e9e0;
  puVar7[1] = param_1;
  puVar7[2] = &LAB_02ac94f0;
  puVar7[3] = 0;
  puVar7[6] = &LAB_02ac981c;
  puVar7[7] = 0;
  puVar7[4] = &LAB_02ac9680;
  puVar7[5] = 0;
  return;
}

