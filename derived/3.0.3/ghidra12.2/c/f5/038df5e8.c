
void FUN_038df5e8(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  uint local_28;
  uint local_24;
  
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[4] = (long)&PTR_LAB_04b64f68;
  *param_1 = (long)&PTR_FUN_04b64fd8;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar6 = *(long **)(param_2 + 8);
  if (plVar6 != (long *)0x0) {
    local_28 = 0;
    uVar4 = (uint)*(byte *)(plVar6 + 0xf);
    if (*(byte *)(plVar6 + 0xf) == 0) goto LAB_038df684;
    uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6,param_2);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar6 + 0xa8))(plVar6,&local_28,param_2);
      uVar4 = local_28;
      goto LAB_038df684;
    }
  }
  uVar4 = 0;
LAB_038df684:
  *(uint *)(param_1 + 6) = uVar4;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_04bb60d8 + 0x10;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[7] = (long)puVar1;
  param_1[8] = 0;
  plVar6 = *(long **)(param_2 + 8);
  if (plVar6 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    local_24 = 0;
    uVar4 = (uint)*(byte *)(plVar6 + 0xf);
    if (*(byte *)(plVar6 + 0xf) != 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6,&local_24,param_2);
      uVar4 = local_24;
    }
  }
  puVar2 = PTR_PTR_04bd0e40;
  puVar1 = PTR_DAT_04bd0e00;
  *(uint *)((long)param_1 + 0x7c) = uVar4;
  lVar5 = *(long *)(puVar2 + (param_3 & 0xffffffff) * 8);
  param_1[0x10] = (long)(puVar1 + 0x10);
  param_1[0x11] = (long)(param_1 + 4);
  param_1[0x12] = (long)param_1 + 199U & 0xffffffffffffffe0;
  puVar1 = PTR_DAT_04bd0de8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[2] = (long)(param_1 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar5;
  param_1[0x13] = 0x100;
  return;
}

