
long * FUN_03efc054(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (DAT_05b05378 != (long *)0x0) {
    return DAT_05b05378;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0xc0);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03efc0dc;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc0,8);
  }
LAB_03efc0dc:
  FUN_038c69f0(plVar4 + 0x14,param_1,3);
  puVar2 = PTR_DAT_04bdef98;
  puVar1 = PTR_DAT_04bdef90;
  DAT_05b05370 = plVar4 + 0x14;
  plVar4[0x14] = (long)&PTR_FUN_04ba75b0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0;
  plVar4[2] = (long)(puVar2 + 0x10);
  lVar5 = nn::os::GetSystemTick();
  plVar4[3] = lVar5;
  plVar4[4] = 0;
  DAT_05b05378 = plVar4;
  plVar4[0xf] = 0;
  plVar4[0x10] = 1;
  plVar4[0x11] = -0x100000000;
  *(undefined4 *)(plVar4 + 0x12) = 0xffffffff;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  return plVar4;
}

