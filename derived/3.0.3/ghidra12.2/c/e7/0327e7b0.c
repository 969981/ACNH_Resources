
/* WARNING: Removing unreachable block (ram,0x0327e85c) */
/* WARNING: Removing unreachable block (ram,0x0327e7e0) */
/* WARNING: Removing unreachable block (ram,0x0327e90c) */

void FUN_0327e7b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__ptr;
  
  plVar1 = (long *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0xe8,8);
  *plVar1 = (long)(PTR_DAT_04bd0d18 + 0x10);
  FUN_00347d68(plVar1 + 1);
  lVar4 = *(long *)(DAT_05ae77d8 + 0x48);
  plVar1[0x17] = 0;
  plVar1[2] = lVar4;
  *(undefined1 *)(plVar1 + 1) = 2;
  plVar2 = *(long **)(param_1 + 8);
  *(long **)(param_1 + 8) = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  puVar3 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0xa0,8);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 10) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x13) = 0x10000;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = "agl::TextureData";
  __ptr = *(void **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (__ptr != (void *)0x0) {
    FUN_038fd0e0((long)__ptr + 0x50);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  plVar1 = (long *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0xe0,8);
  plVar1[1] = 0;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 0xb) = 0xffffffff;
  *(undefined4 *)(plVar1 + 0x14) = 0x10000;
  plVar1[3] = 0;
  plVar1[4] = 0;
  plVar1[5] = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[10] = 0;
  plVar1[0xc] = 0;
  plVar1[0xd] = 0;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  plVar1[0x10] = 0;
  plVar1[0x11] = 0;
  plVar1[0x12] = 0;
  plVar1[0x13] = (long)"agl::TextureData";
  *(undefined4 *)(plVar1 + 0x17) = 0xff;
  *(undefined4 *)((long)plVar1 + 0xbc) = 0;
  *plVar1 = (long)(PTR_DAT_04bd1198 + 0x10);
  plVar1[0x1a] = 0;
  plVar1[0x1b] = 0;
  plVar1[0x18] = 0x80000000000;
  plVar1[0x19] = 0;
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0327e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))();
  return;
}

