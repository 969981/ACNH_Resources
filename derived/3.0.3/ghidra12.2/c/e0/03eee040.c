
long * FUN_03eee040(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar4 = malloc(0xf8);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0xf8,8);
  }
  *(undefined4 *)((long)plVar4 + 0xc) = 0xffffffff;
  *plVar4 = (long)&PTR_LAB_04ba73b8;
  *(undefined8 *)((long)plVar4 + 0x2c) = 0x1ffffffff;
  *(undefined1 *)(plVar4 + 1) = 0;
  *(undefined8 *)((long)plVar4 + 0x34) = 0x200000001;
  *(undefined8 *)((long)plVar4 + 0x3c) = 0x3f80000000000000;
  *(undefined4 *)(plVar4 + 5) = 0;
  *(undefined1 **)((long)plVar4 + 0x44) = &DAT_3f8000003f800000;
  *(undefined4 *)(plVar4 + 0xe) = 0;
  *(undefined4 *)((long)plVar4 + 0x4c) = 0x3f800000;
  plVar4[0xf] = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0xffffffff00000003;
  *(undefined4 *)(plVar4 + 0x10) = 0;
  plVar4[0x11] = 0;
  *(undefined4 *)(plVar4 + 0x12) = 0;
  *(undefined4 *)(plVar4 + 0x1a) = 0x20;
  *(undefined1 *)((long)plVar4 + 0xf3) = 0;
  *(undefined1 *)((long)plVar4 + 0xd4) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = (long)&PTR_LAB_04ba7408;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined2 *)(plVar4 + 0xc) = 0;
  plVar4[0x18] = (long)puVar1;
  plVar4[0x19] = (long)plVar4 + 0xd4;
  plVar4[3] = param_2;
  plVar4[4] = 0;
  plVar4[4] = param_1;
  uVar5 = FUN_03eee270(plVar4,param_3);
  if ((uVar5 & 1) == 0) {
    if (plVar4[0x13] != 0) {
      pvVar8 = (void *)(plVar4[0x13] + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar8);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
        }
      }
      plVar4[0x13] = 0;
      *(undefined4 *)(plVar4 + 0x12) = 0;
    }
    pvVar8 = (void *)plVar4[0x11];
    if (pvVar8 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar8);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
        }
      }
      plVar4[0x11] = 0;
      *(undefined4 *)(plVar4 + 0x10) = 0;
    }
    pvVar8 = (void *)plVar4[0xf];
    if (pvVar8 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar8);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
        }
      }
      plVar4[0xf] = 0;
      *(undefined4 *)(plVar4 + 0xe) = 0;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar4 = (long *)0x0;
  }
  return plVar4;
}

