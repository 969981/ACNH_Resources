
void FUN_01622130(long param_1,byte param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  byte *pbVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  undefined *local_50;
  char *pcStack_48;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  if (lVar9 != 0) {
    pbVar6 = (byte *)(**(code **)(*(long *)(lVar9 + 0xc80) + 0xf0))(lVar9 + 0xc80);
    *pbVar6 = param_2 & 1;
    *(uint *)(lVar9 + 0xca0) = *(uint *)(lVar9 + 0xca0) | 0x1000000;
    plVar7 = (long *)(**(code **)(*(long *)(lVar9 + 3000) + 0xf0))(lVar9 + 3000);
    (**(code **)(*plVar7 + 0x10))(plVar7,param_3);
  }
  if ((param_2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x3a8);
    cVar4 = *(char *)(param_1 + 0x398);
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x3a8);
    cVar4 = *(char *)(param_1 + 0x398);
    if ((bVar3 & 2) == 0 && cVar4 == '\0') {
      if (*(char *)param_3[1] == '\0') {
        return;
      }
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "PanoramaEnvMap";
      FUN_00818830(*(undefined8 *)PTR_DAT_04bb2110,param_1 + 0x390,param_3,0,&local_50);
      pvVar8 = *(void **)(param_1 + 0x568);
      (**(code **)(*param_3 + 0x18))(param_3);
      pvVar10 = (void *)param_3[1];
      if (pvVar8 == pvVar10) {
        return;
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar9 = 0;
      do {
        if (*(char *)(param_3[1] + lVar9) == '\0') goto LAB_016223ac;
        lVar1 = param_3[1] + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_016223ac;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_016223ac;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_016223ac:
      iVar2 = (int)lVar9;
      if (*(int *)(param_1 + 0x570) <= (int)lVar9) {
        iVar2 = *(int *)(param_1 + 0x570) + -1;
      }
      memcpy(pvVar8,pvVar10,(long)iVar2);
      *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
      return;
    }
  }
  if ((bVar3 & 2) != 0 || cVar4 != '\0') {
    plVar7 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
    nn::os::LockMutex((MutexType *)(plVar7 + 0x4d));
    (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x390);
    nn::os::UnlockMutex((MutexType *)(plVar7 + 0x4d));
    puVar5 = PTR_PTR_04bb2238;
    pvVar8 = *(void **)(param_1 + 0x568);
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    pvVar10 = *(void **)(puVar5 + 8);
    if (pvVar8 != pvVar10) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(puVar5 + 8) + lVar9) == '\0') goto LAB_0162235c;
        lVar1 = *(long *)(puVar5 + 8) + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0162235c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0162235c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0162235c:
      iVar2 = (int)lVar9;
      if (*(int *)(param_1 + 0x570) <= (int)lVar9) {
        iVar2 = *(int *)(param_1 + 0x570) + -1;
      }
      memcpy(pvVar8,pvVar10,(long)iVar2);
      *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
    }
    *(undefined1 *)(param_1 + 0x678) = 0;
  }
  return;
}

