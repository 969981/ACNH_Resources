
void FUN_0173a0dc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *__dest;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x2a8);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_3 = (long *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_0173a158;
      }
    }
    plVar4 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2a8,8);
  }
LAB_0173a158:
  FUN_00705c50(plVar4);
  *(undefined4 *)(plVar4 + 0x51) = 0;
  puVar2 = PTR_DAT_04bb35d0;
  __dest = (char *)plVar4[0xc];
  *(undefined4 *)(plVar4 + 0x52) = 0;
  plVar4[0x53] = 0;
  *(undefined2 *)(plVar4 + 0x54) = 0;
  plVar4[0x50] = (long)(plVar4 + 0x4f);
  plVar4[0x4f] = (long)(plVar4 + 0x4f);
  *plVar4 = (long)(puVar2 + 0x10);
  if (__dest != "ModelResLoader") {
    iVar1 = 0xe;
    if ((int)plVar4[0xd] < 0xf) {
      iVar1 = (int)plVar4[0xd] + -1;
    }
    memcpy(__dest,"ModelResLoader",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(undefined4 *)((long)plVar4 + 0x28c) = 8;
  *(uint *)(plVar4 + 0x4c) = *(uint *)(plVar4 + 0x4c) & 0xfffffff0 | 1;
  FUN_006f9fc0(param_1,plVar4,0xffffffff);
  return;
}

