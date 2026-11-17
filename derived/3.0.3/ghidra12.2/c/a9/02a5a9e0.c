
long * FUN_02a5a9e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *__dest;
  undefined **local_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x2c8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_02a5aa64;
      }
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x2c8,8);
  }
LAB_02a5aa64:
  FUN_00705c50(plVar4);
  __dest = (char *)plVar4[0xc];
  *(undefined4 *)(plVar4 + 0x4f) = 1;
  if (__dest != "StructureComponent") {
    iVar1 = 0x12;
    if ((int)plVar4[0xd] < 0x13) {
      iVar1 = (int)plVar4[0xd] + -1;
    }
    memcpy(__dest,"StructureComponent",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  puVar2 = PTR_DAT_04bc4460;
  *(undefined4 *)(plVar4 + 0x58) = 0;
  plVar4[0x51] = -0x100000000;
  *(uint *)(plVar4 + 0x4c) = *(uint *)(plVar4 + 0x4c) & 0xfffffff0 | 6;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[0x50] = (long)&PTR_LAB_04a9bd78;
  local_70 = &PTR_LAB_04a9bd78;
  uStack_68 = 0xffffffff00000000;
  FUN_02a6ccf0(&local_70,param_4);
  FUN_02a6ccf0(plVar4 + 0x50,&local_70);
  return plVar4;
}

