
/* WARNING: Removing unreachable block (ram,0x032d9a48) */

void FUN_032d99f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *__ptr;
  
  uVar1 = ((undefined8 *)*param_2)[1];
  *param_1 = *(undefined8 *)*param_2;
  param_1[1] = uVar1;
  if (param_2[1] != 0) {
    param_1[0xc] = param_2[1];
  }
  *(undefined4 *)((long)param_1 + 0x204) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x201) = *(undefined1 *)((long)param_2 + 0x14);
  puVar2 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0xe0,8);
  *puVar2 = &PTR_LAB_04b19db0;
  puVar2[1] = 0;
  puVar2[6] = &PTR_LAB_04b1bc08;
  puVar2[7] = 0;
  puVar2[0xc] = 0xa0000000a;
  puVar2[0xd] = 0xa0000000a;
  puVar2[0xe] = 0xa0000000a;
  puVar2[0xf] = 0xa0000000a;
  puVar2[0x10] = 0xa0000000a;
  puVar2[0x11] = 0xa0000000a;
  puVar2[0x12] = 0xa0000000a;
  puVar2[0x13] = 0xa0000000a;
  puVar2[0x14] = 0xa0000000a;
  puVar2[0x15] = 0xa0000000a;
  puVar2[0x16] = 0xa0000000a;
  puVar2[0x17] = 0xa0000000a;
  puVar2[0x18] = 0xa0000000a;
  puVar2[0x19] = 0xa0000000a;
  puVar2[0x1a] = 0xa0000000a;
  puVar2[0x1b] = 0xa0000000a;
  __ptr = (void *)param_1[0x42];
  param_1[0x42] = puVar2;
  if (__ptr != (void *)0x0) {
    if (*(long **)((long)__ptr + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 0x38) + 8))();
    }
    if (*(long **)((long)__ptr + 8) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 8) + 8))();
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d9b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      return;
    }
  }
  return;
}

