
undefined8 * FUN_018da87c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_052c21a0 != (undefined8 *)0x0) {
    return DAT_052c21a0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xd8);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_018da904;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xd8,8);
  }
LAB_018da904:
  FUN_038c69f0(puVar3 + 0x17,param_1,3);
  DAT_052c2178 = puVar3 + 0x17;
  *puVar3 = &PTR_FUN_049d11b0;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  puVar3[6] = &PTR_LAB_049d1238;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0xff0000;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  *(undefined1 *)((long)puVar3 + 0x7a) = 0;
  *(undefined2 *)(puVar3 + 0x12) = 0;
  *(undefined2 *)(puVar3 + 0x15) = 0;
  DAT_052c21a0 = puVar3;
  puVar3[0xc] = &PTR_LAB_049d1358;
  puVar3[0xe] = &PTR_LAB_049d12e8;
  puVar3[0x16] = 0;
  puVar3[0x17] = &PTR_FUN_049d1190;
  puVar3[0x10] = 0;
  puVar3[0x11] = &PTR_LAB_049d1258;
  puVar3[8] = &PTR_LAB_049d1330;
  puVar3[9] = puVar3;
  puVar3[0x13] = 0;
  puVar3[0x14] = &PTR_LAB_049d12a0;
  puVar3[10] = &LAB_018da9e8;
  puVar3[0xb] = 0;
  return puVar3;
}

