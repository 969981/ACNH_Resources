
int FUN_001f5140(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  void *__s;
  undefined8 uVar4;
  long lVar5;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_38 = PTR_LAB_0483d680;
  puStack_30 = PTR_LAB_0483d688;
  local_28 = PTR_LAB_0483d690;
  __s = (void *)FUN_001f4e40(0x1118);
  *param_1 = (long)__s;
  if (__s != (void *)0x0) {
    memset(__s,0,0x1118);
    lVar5 = *param_1;
    uVar4 = param_2[4];
    uVar2 = param_2[5];
    uVar1 = param_2[6];
    *(undefined8 *)(lVar5 + 0x10f8) = param_2[7];
    *(undefined8 *)(lVar5 + 0x10f0) = uVar1;
    *(undefined8 *)(lVar5 + 0x10e8) = uVar2;
    *(undefined8 *)(lVar5 + 0x10e0) = uVar4;
    uVar4 = *param_2;
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    *(undefined8 *)(lVar5 + 0x10d8) = param_2[3];
    *(undefined8 *)(lVar5 + 0x10d0) = uVar1;
    *(undefined8 *)(lVar5 + 0x10c8) = uVar2;
    *(undefined8 *)(lVar5 + 0x10c0) = uVar4;
    *(undefined8 *)(*param_1 + 0x1110) = param_3;
    *(long *)(*param_1 + 0x1100) = *param_1;
    *(undefined8 *)(*param_1 + 0x1108) = param_3;
    iVar3 = FUN_001f6580(*param_1 + 0x18,&local_38,*param_1 + 0x1100);
    if (iVar3 != 0) {
      FUN_001f5330();
      return iVar3;
    }
    *(undefined2 *)(*param_1 + 0x20) = 0x101;
    uVar4 = FUN_001f63f0();
    *(undefined8 *)(*param_1 + 0x80) = uVar4;
    if (*(long *)(*param_1 + 0x80) != 0) {
      uVar4 = FUN_001f63f0();
      *(undefined8 *)(*param_1 + 0x88) = uVar4;
      lVar5 = *param_1;
      if (*(long *)(lVar5 + 0x88) != 0) {
        *(undefined8 *)(lVar5 + 0x90) = 0;
        *(undefined8 *)(lVar5 + 0x98) = 0;
        FUN_001f5e10(lVar5 + 0x28);
        uVar4 = FUN_001f63f0();
        *(undefined8 *)(*param_1 + 0x30) = uVar4;
        if (*(long *)(*param_1 + 0x30) != 0) {
          FUN_001f5e10(*param_1 + 0x40);
          uVar4 = FUN_001f63f0();
          *(undefined8 *)(*param_1 + 0x48) = uVar4;
          lVar5 = *param_1;
          if (*(long *)(lVar5 + 0x48) != 0) {
            *(long *)(lVar5 + 0x58) = lVar5 + 0x28;
            lVar5 = *param_1 + 0xa0;
            *(long *)(*param_1 + 0x10a0) = lVar5;
            *(long *)(*param_1 + 0x10a8) = lVar5;
            lVar5 = *param_1;
            *(undefined4 *)(lVar5 + 0x12) = 0x3ee03ee;
            *(undefined8 *)(lVar5 + 8) = 0x7fffffff;
            return 0;
          }
        }
      }
    }
    FUN_001f5330();
  }
  return -500;
}

