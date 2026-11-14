
void FUN_01a2a1f0(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char *__dest;
  undefined *__dest_00;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar7 = malloc(0x2e8);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar8 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_01a2a27c;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x2e8,8);
  }
LAB_01a2a27c:
  FUN_00705c50(plVar7);
  puVar4 = PTR_DAT_04bb3078;
  __dest_00 = (undefined *)plVar7[0xc];
  plVar7[0x54] = (long)&DAT_3f8000003f800000;
  plVar7[0x4f] = 0;
  plVar7[0x50] = 0;
  plVar7[0x51] = 0;
  plVar7[0x52] = 0;
  plVar7[0x53] = 0;
  *(undefined4 *)(plVar7 + 0x55) = 0x3f800000;
  *plVar7 = (long)(puVar4 + 0x10);
  *(undefined8 *)((long)plVar7 + 700) = 0;
  *(undefined8 *)((long)plVar7 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar7 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar7 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar7 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar7 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar7 + 0x2d4) = 0;
  if (__dest_00 != &DAT_040afd37) {
    iVar1 = 4;
    if ((int)plVar7[0xd] < 5) {
      iVar1 = (int)plVar7[0xd] + -1;
    }
    memcpy(__dest_00,&DAT_040afd37,(long)iVar1);
    __dest_00[iVar1] = 0;
  }
  *(uint *)(plVar7 + 0x4c) = *(uint *)(plVar7 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar7,0xffffffff);
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    plVar7 = malloc(0x2e0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar8 + 8);
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      plVar7 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_01a2a398;
    }
    plVar7 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2e0,8);
  }
LAB_01a2a398:
  FUN_00705c50(plVar7);
  plVar7[0x4f] = 0;
  puVar3 = PTR_DAT_04bb3300;
  plVar7[0x50] = 0;
  plVar7[0x53] = -0x100000000;
  plVar7[0x52] = (long)(plVar7 + 0x51);
  plVar7[0x51] = (long)(plVar7 + 0x51);
  *plVar7 = (long)(puVar3 + 0x10);
  FUN_038e18e4(plVar7 + 0x54);
  __dest = (char *)plVar7[0xc];
  if (__dest != "Family") {
    iVar1 = 6;
    if ((int)plVar7[0xd] < 7) {
      iVar1 = (int)plVar7[0xd] + -1;
    }
    memcpy(__dest,"Family",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(uint *)(plVar7 + 0x4c) = *(uint *)(plVar7 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar7 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar7,0xffffffff);
  *(undefined4 *)(param_1 + 0x28c) = 6;
  *(undefined1 *)(param_1 + 0x354) = 1;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x1c);
  if (*(int *)(param_1 + 0x174) == 4) {
    *(undefined4 *)(param_1 + 0x394) = 4;
  }
  else if (*(int *)(param_1 + 0x394) < 1) {
    return;
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = param_1 + 0x288;
  uVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,lVar8,*(undefined4 *)(param_1 + 0x230),0);
  *(undefined4 *)(param_1 + 0x274) = uVar5;
  if (1 < *(int *)(param_1 + 0x394)) {
    uVar5 = FUN_007402e0(*(undefined8 *)puVar3,lVar8,*(undefined4 *)(param_1 + 0x230),0);
    *(undefined4 *)(param_1 + 0x278) = uVar5;
    if (2 < *(int *)(param_1 + 0x394)) {
      uVar5 = FUN_007402e0(*(undefined8 *)puVar3,lVar8,*(undefined4 *)(param_1 + 0x230),0);
      *(undefined4 *)(param_1 + 0x27c) = uVar5;
      if (3 < *(int *)(param_1 + 0x394)) {
        uVar5 = FUN_007402e0(*(undefined8 *)puVar3,lVar8,*(undefined4 *)(param_1 + 0x230),0);
        *(undefined4 *)(param_1 + 0x280) = uVar5;
        if (4 < *(int *)(param_1 + 0x394)) {
          lVar6 = 4;
          do {
            uVar5 = FUN_007402e0(*(undefined8 *)puVar3,lVar8,*(undefined4 *)(param_1 + 0x230),0);
            lVar6 = lVar6 + 1;
            *(undefined4 *)(param_1 + 0x274) = uVar5;
          } while (lVar6 < *(int *)(param_1 + 0x394));
        }
      }
    }
  }
  return;
}

