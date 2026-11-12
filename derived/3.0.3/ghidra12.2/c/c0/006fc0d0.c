
void FUN_006fc0d0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  void *__dest;
  void *__src;
  
  FUN_00705c50();
  puVar10 = (undefined *)param_1[0xc];
  param_1[0x53] = 0;
  param_1[0x54] = &DAT_3f8000003f800000;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  param_1[0x51] = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2c1) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  if (puVar10 != &DAT_040afd37) {
    iVar2 = 4;
    if (*(int *)(param_1 + 0xd) < 5) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(puVar10,&DAT_040afd37,(long)iVar2);
    puVar10[iVar2] = 0;
  }
  *(undefined4 *)((long)param_1 + 0x2e4) = 0;
  *(undefined1 *)((long)param_1 + 0x33b) = 0;
  *param_1 = &PTR_LAB_048fd128;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 5;
  __dest = (void *)((long)param_1 + 0x2fc);
  param_1[0x5d] = &PTR_LAB_048fd2d8;
  param_1[0x5e] = __dest;
  *(undefined4 *)(param_1 + 0x5f) = 0x40;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = 0;
    do {
      if (*(char *)(param_2[1] + lVar9) == '\0') goto LAB_006fc230;
      lVar1 = param_2[1] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_006fc230;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_006fc230;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_006fc230:
    iVar2 = (int)lVar9;
    if (*(int *)(param_1 + 0x5f) <= (int)lVar9) {
      iVar2 = *(int *)(param_1 + 0x5f) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  puVar10 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  param_1[0x5d] = puVar10 + 0x10;
  uVar3 = param_3[1];
  *(undefined8 *)((long)param_1 + 0x344) = *param_3;
  *(undefined8 *)((long)param_1 + 0x34c) = uVar3;
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  *(undefined8 *)((long)param_1 + 0x364) = param_3[4];
  *(undefined8 *)((long)param_1 + 0x36c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x354) = uVar3;
  *(undefined8 *)((long)param_1 + 0x35c) = uVar4;
  uVar3 = param_3[1];
  *(undefined8 *)((long)param_1 + 0x374) = *param_3;
  *(undefined8 *)((long)param_1 + 0x37c) = uVar3;
  uVar7 = DAT_0419b59c;
  uVar3 = param_3[2];
  uVar5 = param_3[3];
  uVar4 = param_3[4];
  uVar6 = param_3[5];
  *(undefined4 *)((long)param_1 + 0x3ac) = DAT_0419b5a4;
  *(undefined8 *)((long)param_1 + 0x3a4) = uVar7;
  *(undefined2 *)(param_1 + 0x76) = 0x101;
  *(undefined1 *)((long)param_1 + 0x3b2) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = uVar4;
  *(undefined8 *)((long)param_1 + 0x39c) = uVar6;
  *(undefined1 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 900) = uVar3;
  *(undefined8 *)((long)param_1 + 0x38c) = uVar5;
  uVar8 = DAT_0419b50c;
  uVar7 = DAT_0419b504;
  uVar6 = DAT_0419b4fc;
  uVar5 = DAT_0419b4f4;
  uVar4 = DAT_0419b4ec;
  uVar3 = DAT_0419b4e4;
  *(undefined8 *)((long)param_1 + 0x3b4) = DAT_0419b4e4;
  *(undefined8 *)((long)param_1 + 0x3bc) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3d4) = uVar7;
  *(undefined8 *)((long)param_1 + 0x3dc) = uVar8;
  *(undefined8 *)((long)param_1 + 0x3c4) = uVar5;
  *(undefined8 *)((long)param_1 + 0x3cc) = uVar6;
  *(undefined8 *)((long)param_1 + 0x3f4) = uVar5;
  *(undefined8 *)((long)param_1 + 0x3fc) = uVar6;
  *(undefined8 *)((long)param_1 + 0x3e4) = uVar3;
  *(undefined8 *)((long)param_1 + 0x3ec) = uVar4;
  param_1[0x84] = 0x8000000000000000;
  *(undefined8 *)((long)param_1 + 0x404) = uVar7;
  *(undefined8 *)((long)param_1 + 0x40c) = uVar8;
  *(undefined4 *)(param_1 + 0x85) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x42d) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x83] = &PTR_LAB_049c1ec0;
  return;
}

