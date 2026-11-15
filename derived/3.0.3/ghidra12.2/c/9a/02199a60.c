
void FUN_02199a60(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  while (plVar6 != param_1) {
    plVar1 = (long *)plVar6[1];
    plVar8 = plVar1;
    if (*plVar6 != 0) {
      *(long **)(*plVar6 + 8) = plVar1;
      plVar8 = (long *)plVar6[1];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    plVar6[-1] = param_1[3];
    param_1[3] = (long)(plVar6 + -1);
    plVar6 = plVar1;
  }
  plVar6 = (long *)param_1[0x52];
  while (plVar6 != param_1 + 0x51) {
    plVar1 = (long *)plVar6[1];
    plVar8 = plVar1;
    if (*plVar6 != 0) {
      *(long **)(*plVar6 + 8) = plVar1;
      plVar8 = (long *)plVar6[1];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_1 + 0x53) = (int)param_1[0x53] + -1;
    plVar6[-1] = param_1[0x54];
    param_1[0x54] = (long)(plVar6 + -1);
    plVar6 = plVar1;
  }
  plVar6 = (long *)param_1[0x76];
  while (plVar6 != param_1 + 0x75) {
    plVar1 = (long *)plVar6[1];
    plVar8 = plVar1;
    if (*plVar6 != 0) {
      *(long **)(*plVar6 + 8) = plVar1;
      plVar8 = (long *)plVar6[1];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_1 + 0x77) = (int)param_1[0x77] + -1;
    plVar6[-1] = param_1[0x78];
    param_1[0x78] = (long)(plVar6 + -1);
    plVar6 = plVar1;
  }
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined2 *)((long)param_1 + 0x4ec) = 0;
  *(undefined1 *)((long)param_1 + 0x4f2) = 0;
  *(undefined2 *)((long)param_1 + 0x4f4) = 0;
  *(undefined1 *)((long)param_1 + 0x4f6) = 0;
  puVar7 = PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  *(undefined4 *)((long)param_1 + 0x4ee) = 0x101;
  uVar5 = *(undefined2 *)puVar7;
  uVar4 = puVar7[3];
  uVar2 = *(undefined4 *)(puVar7 + 4);
  *(undefined2 *)((long)param_1 + 0xb1c) = 0;
  *(undefined1 *)((long)param_1 + 0xb22) = 0;
  *(undefined2 *)((long)param_1 + 0xb5c) = 0;
  *(undefined1 *)((long)param_1 + 0xb62) = 0;
  *(undefined2 *)((long)param_1 + 0xb24) = 0;
  *(undefined1 *)((long)param_1 + 0xb2a) = 0;
  *(undefined2 *)((long)param_1 + 0xb64) = 0;
  *(undefined1 *)((long)param_1 + 0xb6a) = 0;
  *(undefined2 *)((long)param_1 + 0xb2c) = 0;
  *(undefined1 *)((long)param_1 + 0xb32) = 0;
  *(undefined2 *)((long)param_1 + 0xb6c) = 0;
  *(undefined1 *)((long)param_1 + 0xb72) = 0;
  *(undefined2 *)((long)param_1 + 0xb34) = 0;
  *(undefined2 *)(param_1 + 0x9f) = uVar5;
  *(undefined2 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0x113) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4fc) = uVar2;
  *(undefined4 *)((long)param_1 + 0x504) = uVar2;
  *(undefined1 *)((long)param_1 + 0x89c) = 0xff;
  *(undefined1 *)((long)param_1 + 0x4fa) = uVar3;
  *(undefined1 *)((long)param_1 + 0x4fb) = uVar4;
  *(undefined1 *)((long)param_1 + 0x502) = uVar3;
  *(undefined1 *)((long)param_1 + 0x503) = uVar4;
  *(undefined4 *)((long)param_1 + 0xb1e) = 0x101;
  *(undefined4 *)((long)param_1 + 0xb5e) = 0x101;
  *(undefined4 *)((long)param_1 + 0xb26) = 0x101;
  *(undefined4 *)((long)param_1 + 0xb66) = 0x101;
  *(undefined4 *)((long)param_1 + 0xb2e) = 0x101;
  *(undefined4 *)((long)param_1 + 0xb6e) = 0x101;
  *(undefined4 *)((long)param_1 + 0xb36) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb3a) = 0;
  *(undefined2 *)((long)param_1 + 0xb74) = 0;
  *(undefined4 *)((long)param_1 + 0xb76) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb7a) = 0;
  *(undefined2 *)((long)param_1 + 0xb3c) = 0;
  *(undefined4 *)((long)param_1 + 0xb3e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb42) = 0;
  *(undefined2 *)((long)param_1 + 0xb7c) = 0;
  *(undefined4 *)((long)param_1 + 0xb7e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb82) = 0;
  *(undefined2 *)((long)param_1 + 0xb44) = 0;
  *(undefined4 *)((long)param_1 + 0xb46) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb4a) = 0;
  *(undefined2 *)((long)param_1 + 0xb84) = 0;
  *(undefined4 *)((long)param_1 + 0xb86) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb8a) = 0;
  *(undefined2 *)((long)param_1 + 0xb4c) = 0;
  *(undefined4 *)((long)param_1 + 0xb4e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb52) = 0;
  *(undefined2 *)((long)param_1 + 0xb8c) = 0;
  *(undefined4 *)((long)param_1 + 0xb8e) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb92) = 0;
  *(undefined2 *)((long)param_1 + 0xb54) = 0;
  *(undefined4 *)((long)param_1 + 0xb56) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb5a) = 0;
  *(undefined2 *)((long)param_1 + 0xb94) = 0;
  *(undefined4 *)((long)param_1 + 0xb96) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb9a) = 0;
  if ((param_2 & 1) != 0) {
    FUN_02198d70(param_1,0);
    *(undefined1 *)(param_1 + 0x99) = 0;
    *(undefined8 *)((long)param_1 + 0x4cc) = 0;
    *(undefined8 *)((long)param_1 + 0x4d4) = 0;
    *(undefined8 *)((long)param_1 + 0x4da) = 0;
  }
  return;
}

