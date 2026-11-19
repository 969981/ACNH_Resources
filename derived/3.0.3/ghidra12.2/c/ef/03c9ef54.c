
undefined8 * FUN_03c9ef54(undefined8 param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  void *__ptr;
  long lVar11;
  undefined *local_60;
  undefined8 *puStack_58;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  uVar10 = 8;
  if (param_3 == -1) {
    uVar10 = 0xfffffff8;
  }
  if (lVar11 == 0) {
    puVar7 = malloc(0x150);
  }
  else {
    plVar5 = (long *)param_2[8];
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_03c9eff0;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x150,uVar10);
  }
LAB_03c9eff0:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_58 = &DAT_0407ebb1;
  local_60 = puVar1;
  FUN_038ca450(puVar7,&local_60,param_2,0,0,param_3,0);
  puVar2 = PTR_DAT_04bb2120;
  plVar5 = puVar7 + 0x1d;
  *plVar5 = (long)puVar1;
  *puVar7 = &PTR_FUN_04b88e78;
  *(undefined1 *)((long)puVar7 + 0xfe) = 0;
  puVar7[0x1e] = puVar2;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 0;
  puStack_58 = &DAT_0407ebb1;
  local_60 = puVar1;
  FUN_03c5a110(plVar5,&local_60,0xffffffff,1);
  *(undefined4 *)(puVar7 + 0x23) = 0;
  *(undefined8 *)((long)puVar7 + 0x11c) = 0;
  *(undefined8 *)((long)puVar7 + 0x124) = 0;
  *(undefined4 *)((long)puVar7 + 300) = 0;
  puVar7[0x20] = param_2;
  puVar7[0x21] = puVar7 + 0x21;
  puVar7[0x22] = puVar7 + 0x21;
  puVar7[0x26] = puVar7 + 0x26;
  puVar7[0x27] = puVar7 + 0x26;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  (**(code **)(*param_2 + 0xd0))(param_2,puVar7);
  puVar8 = (undefined8 *)
           (**(code **)(**(long **)(puVar7[0x20] + 0x40) + 0x30))
                     (*(long **)(puVar7[0x20] + 0x40),0x20,8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
  }
  lVar11 = *(long *)puVar4;
  puVar7[0x24] = puVar8;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)(lVar11 + 0x68));
  lVar6 = *(long *)(lVar11 + 0xa8);
  *(undefined8 **)(lVar11 + 0xa8) = puVar7;
  if (*(char *)((long)puVar7 + 0xfe) != '\0') {
    (**(code **)(puVar7[0x1d] + 0x18))(plVar5);
    __ptr = (void *)puVar7[0x1e];
    if (__ptr != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(__ptr);
      }
      else {
        plVar9 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9,__ptr);
        }
      }
    }
    *(undefined1 *)((long)puVar7 + 0xfe) = 0;
  }
  FUN_03c5a110(plVar5,param_1,0xffffffff,0);
  (**(code **)(puVar7[0x1d] + 0x18))(plVar5);
  puVar7[5] = puVar7[0x1e];
  if (lVar6 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar6;
  }
  return puVar7;
}

