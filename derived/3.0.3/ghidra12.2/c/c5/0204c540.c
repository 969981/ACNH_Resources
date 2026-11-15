
void FUN_0204c540(long param_1,void *param_2,undefined4 param_3)

{
  void *__dest;
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  void *__src;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *local_50;
  void *local_48;
  
  if (*(char *)(param_1 + 0x160) != '\0') {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      plVar5 = malloc(0x38);
    }
    else {
      plVar5 = *(long **)(param_1 + 0x158);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar7 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
    }
    puVar3 = PTR_DAT_04bb2020;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    __dest = (void *)((long)plVar5 + 0x14);
    *(undefined4 *)(plVar5 + 2) = 0x20;
    *(undefined1 *)((long)plVar5 + 0x33) = 0;
    *plVar5 = (long)&PTR_LAB_048fa8f8;
    plVar5[1] = (long)__dest;
    local_48 = param_2;
    (**(code **)(puVar3 + 0x28))(&local_50);
    __src = local_48;
    if (__dest != local_48) {
      (**(code **)(local_50 + 0x18))(&local_50);
      lVar7 = 0;
      do {
        if (*(char *)((long)local_48 + lVar7) == '\0') goto LAB_0204c67c;
        if (*(char *)((long)local_48 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_0204c67c;
        }
        if (*(char *)((long)local_48 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_0204c67c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_0204c67c:
      iVar2 = (int)lVar7;
      if ((int)plVar5[2] <= (int)lVar7) {
        iVar2 = (int)plVar5[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    puVar3 = PTR_DAT_04bb2028;
    *plVar5 = (long)(PTR_DAT_04bb2028 + 0x10);
    (**(code **)(puVar3 + 0x28))(plVar5);
    lVar7 = plVar5[1];
    uVar4 = FUN_006bd550(lVar7,0);
    puVar1 = (undefined4 *)(param_1 + 0x10 + (long)*(int *)(param_1 + 0x150) * 0x20);
    *puVar1 = param_3;
    *(long *)(puVar1 + 4) = lVar7;
    puVar1[6] = uVar4;
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    FUN_0204c720(param_1);
  }
  return;
}

