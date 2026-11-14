
undefined4 * FUN_016b3804(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if (DAT_0523a180 != (undefined4 *)0x0) {
    return DAT_0523a180;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(0x88);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined4 *)0x0;
        goto LAB_016b388c;
      }
    }
    puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x88,8);
  }
LAB_016b388c:
  FUN_038c69f0(puVar5 + 0x1a,param_1,3);
  puVar2 = PTR_DAT_04bb3238;
  DAT_0523a168 = puVar5 + 0x1a;
  *(undefined ***)(puVar5 + 0x1a) = &PTR_FUN_049bb878;
  *(undefined8 *)(puVar5 + 3) = 0;
  uVar1 = *(undefined4 *)puVar2;
  *(undefined1 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  *(undefined8 *)(puVar5 + 0xf) = 0;
  *(undefined8 *)(puVar5 + 0x11) = 0;
  *(undefined8 *)(puVar5 + 1) = 0;
  *(undefined1 *)(puVar5 + 0x14) = 0;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  *puVar5 = uVar1;
  uVar1 = *(undefined4 *)puVar2;
  puVar5[5] = 0xffffffff;
  puVar5[0xc] = 0xffffffff;
  puVar5[0x13] = 0xffffffff;
  DAT_0523a180 = puVar5;
  puVar5[7] = uVar1;
  puVar5[0xe] = uVar1;
  return puVar5;
}

