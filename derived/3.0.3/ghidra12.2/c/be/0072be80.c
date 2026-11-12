
void FUN_0072be80(long param_1,long *param_2)

{
  void *__dest;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__src;
  ulong local_50;
  long *local_48;
  
  puVar3 = PTR_DAT_04bb3058;
  uVar4 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                    (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),*(undefined8 *)(param_1 + 0xc0));
  if (((uVar4 & 1) != 0) && (*(long **)(param_1 + 0xc0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  local_50 = 0;
  local_48 = (long *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_48,&local_50);
  puVar2 = PTR_DAT_04bb2698;
  if ((param_2 < local_48) || ((long *)(local_50 + (long)local_48) <= param_2)) {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar7 = (long)DAT_05ae7550 << 3;
        puVar8 = DAT_05ae7558;
        do {
          uVar4 = (**(code **)(*(long *)*puVar8 + 0x88))((long *)*puVar8,param_2);
          if ((uVar4 & 1) != 0) goto LAB_0072bf10;
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar7 = (long)DAT_05ae7580 << 3;
        puVar8 = DAT_05ae7588;
        do {
          uVar4 = (**(code **)(*(long *)*puVar8 + 0x88))((long *)*puVar8,param_2);
          if ((uVar4 & 1) != 0) goto LAB_0072bf10;
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
  }
  else {
LAB_0072bf10:
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      plVar5 = malloc(0x98);
    }
    else {
      plVar5 = *(long **)(*(long *)puVar3 + 0x330);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar7 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x98,8);
    }
    __dest = (void *)((long)plVar5 + 0x14);
    *(undefined4 *)(plVar5 + 2) = 0x80;
    puVar3 = PTR_DAT_04bb2e90;
    *(undefined1 *)((long)plVar5 + 0x93) = 0;
    *plVar5 = (long)(puVar3 + 0x10);
    plVar5[1] = (long)__dest;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = 0;
      do {
        if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_0072c090;
        lVar6 = param_2[1] + lVar7;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_0072c090;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_0072c090;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_0072c090:
      iVar1 = (int)lVar7;
      if ((int)plVar5[2] <= (int)lVar7) {
        iVar1 = (int)plVar5[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    *plVar5 = (long)&DAT_048fc708;
    param_2 = plVar5;
  }
  *(long **)(param_1 + 0xc0) = param_2;
  return;
}

