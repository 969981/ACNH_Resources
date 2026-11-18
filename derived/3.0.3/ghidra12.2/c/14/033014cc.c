
void FUN_033014cc(long param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  void *__ptr;
  int local_24;
  
  iVar6 = 0x12;
  switch(*(undefined4 *)(param_1 + 0x1050)) {
  case 0:
  case 3:
    local_24 = *(int *)(param_1 + 0x1020);
    puVar4 = (undefined8 *)&DAT_05731f10;
    goto LAB_03301570;
  case 1:
    break;
  case 2:
    iVar6 = *(int *)(param_1 + 0x1024) + 0x12;
    if (2 < *(int *)(param_1 + 0x1024) - 2U) {
      iVar6 = 0x13;
    }
    break;
  case 4:
    local_24 = *(int *)(param_1 + 0x1028);
    puVar4 = &DAT_05731fb4;
    goto LAB_03301570;
  case 5:
    bVar1 = *(int *)(param_1 + 0x102c) == 2;
    iVar3 = 0x17;
    goto LAB_033015a8;
  case 6:
    bVar1 = *(int *)(param_1 + 0x1030) == 2;
    iVar3 = 0x18;
    goto LAB_033015a8;
  case 7:
    bVar1 = *(int *)(param_1 + 0x1034) == 2;
    iVar3 = 0x19;
LAB_033015a8:
    iVar6 = 0x11;
    if (!bVar1) {
      iVar6 = iVar3;
    }
    break;
  case 8:
  case 9:
    local_24 = *(int *)(param_1 + 0x1038);
    puVar4 = &DAT_05731f5c;
LAB_03301570:
    iVar6 = *(int *)((long)puVar4 + (long)local_24 * 4);
    break;
  default:
    iVar6 = DAT_05731f54;
  }
  switch(iVar6) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x17:
  case 0x18:
  case 0x19:
    if (*(long *)(param_1 + 0x4f8) == 0) goto switchD_033015d4_default;
    FUN_0331fe48();
    __ptr = *(void **)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    if (__ptr == (void *)0x0) goto switchD_033015d4_default;
    FUN_0332d770(__ptr);
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    if (*(long *)(param_1 + 0x4f0) == 0) goto switchD_033015d4_default;
    FUN_0331fe48();
    __ptr = *(void **)(param_1 + 0x4f0);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    if (__ptr == (void *)0x0) goto switchD_033015d4_default;
    FUN_033081e0(__ptr);
    break;
  case 0x11:
    if (*(long *)(param_1 + 0x500) == 0) goto switchD_033015d4_default;
    FUN_0331fe48();
    __ptr = *(void **)(param_1 + 0x500);
    *(undefined8 *)(param_1 + 0x500) = 0;
    if (__ptr == (void *)0x0) goto switchD_033015d4_default;
    FUN_0333abc0(__ptr);
    break;
  case 0x12:
    if (*(long *)(param_1 + 0x508) == 0) goto switchD_033015d4_default;
    FUN_0331fe48();
    __ptr = *(void **)(param_1 + 0x508);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (__ptr == (void *)0x0) goto switchD_033015d4_default;
    FUN_033270a0(__ptr);
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    if (*(long *)(param_1 + 0x510) == 0) goto switchD_033015d4_default;
    FUN_0331fe48();
    __ptr = *(void **)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x510) = 0;
    if (__ptr == (void *)0x0) goto switchD_033015d4_default;
    FUN_03313980(__ptr);
    break;
  default:
    goto switchD_033015d4_default;
  }
  if (DAT_05ae7600 == 0) {
    free(__ptr);
  }
  else {
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
switchD_033015d4_default:
  puVar5 = *(undefined4 **)(param_1 + 0x6e0);
  *puVar5 = 0x1a;
  *(undefined8 *)(puVar5 + 2) = 0;
  if (*(long *)(param_1 + 0x520) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x520) + 0xdf0) = 0;
  }
  return;
}

