
/* WARNING: Removing unreachable block (ram,0x006dfe84) */

void FUN_006dfcf8(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_048fb3a8;
  memset(param_1 + 4,0,0x6b8);
  puVar2 = PTR_DAT_04bb29b8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xdb] = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0xe2] = 0;
  if ((int)param_3 < 1) {
LAB_006dfdd8:
    lVar6 = *(long *)puVar2;
    if (lVar6 != 0) {
      if (param_2 == (long *)0x0) {
LAB_006dfde4:
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar1 = (undefined8 *)(lVar6 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        plVar4 = (long *)0x0;
        if (param_2 == (long *)0x0) goto LAB_006dfe50;
      }
      plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x390,8);
      goto LAB_006dfe50;
    }
  }
  else {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
      pvVar5 = malloc((ulong)param_3);
joined_r0x006dfe34:
      if (pvVar5 != (void *)0x0) {
        *(uint *)(param_1 + 0xdc) = param_3;
        param_1[0xdd] = pvVar5;
      }
      goto LAB_006dfdd8;
    }
    plVar4 = param_2;
    if (param_2 != (long *)0x0) {
LAB_006dfdb8:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)param_3,8);
      goto joined_r0x006dfe34;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_006dfdb8;
    lVar6 = *(long *)puVar2;
    if (lVar6 != 0) goto LAB_006dfde4;
  }
  plVar4 = malloc(0x390);
LAB_006dfe50:
  *plVar4 = (long)(PTR_DAT_04bb29f0 + 0x10);
  *(undefined4 *)(plVar4 + 1) = 0xc3501;
  FUN_0069150c(plVar4 + 2);
  *(undefined1 *)(plVar4 + 0xb) = 0;
  *(undefined2 *)((long)plVar4 + 0x59) = 0;
  *plVar4 = (long)(PTR_DAT_04bb29d8 + 0x10);
  memset(plVar4 + 0xc,0,0x330);
  param_1[0xdf] = plVar4;
  param_1[0xe2] = plVar4;
  return;
}

