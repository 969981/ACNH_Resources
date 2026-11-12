
long * FUN_00948d0c(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar3 = malloc(0x128);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x128,8);
  }
  *(undefined8 *)((long)plVar3 + 0x1d) = 0;
  puVar1 = PTR_DAT_04bb5cd0;
  plVar3[5] = 0x4020000040a00000;
  *(undefined4 *)(plVar3 + 6) = 0x4162cccd;
  plVar3[10] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  plVar3[0xc] = 0;
  *(undefined4 *)(plVar3 + 0xd) = 0;
  *(undefined8 *)((long)plVar3 + 0x34) = 0;
  *(undefined8 *)((long)plVar3 + 0x3c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  plVar4 = plVar3 + 0x15;
  *plVar4 = 0;
  plVar3[0xe] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar5 = plVar3 + 0x12;
  *plVar5 = 0;
  plVar3[0xf] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  puVar1 = PTR_DAT_04bb5cd8 + 0x10;
  *(undefined1 *)(plVar3 + 0x24) = 0;
  plVar3[0x10] = (long)plVar3;
  plVar3[0x18] = (long)puVar1;
  plVar3[0x19] = (long)(plVar3 + 0xf);
  *(undefined4 *)plVar5 = 1;
  plVar3[0x13] = (long)plVar3;
  plVar3[0x16] = (long)plVar3;
  plVar3[0x1c] = (long)puVar1;
  plVar3[0x1d] = (long)plVar5;
  *(undefined4 *)plVar4 = 2;
  plVar3[0x1a] = (long)FUN_00961ad0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = (long)FUN_00961ad0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = (long)puVar1;
  plVar3[0x21] = (long)plVar4;
  plVar3[0x22] = (long)FUN_00961ad0;
  plVar3[0x23] = 0;
  FUN_0096fdd0(plVar3,param_2,*(undefined8 *)(param_1 + 0x80));
  return plVar3;
}

