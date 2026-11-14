
void FUN_01c6a354(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *__ptr;
  long lVar10;
  undefined1 uStack_31;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 != 0xffffffff) {
    if (uVar3 == 1) goto LAB_01c6a3b4;
    (*(code *)(&PTR_FUN_04a42ba0)[uVar3])(&uStack_31,param_2);
  }
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 8) = 1;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_01c6a3b4:
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar8 = param_2[4];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  puVar4 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar6 = malloc(0x80);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        param_3 = (long *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x80,8);
  }
  puVar6[10] = 0;
  *puVar6 = &PTR_LAB_04a42be8;
  puVar6[1] = param_1;
  puVar6[8] = puVar6 + 10;
  puVar9 = puVar6 + 6;
  *puVar9 = puVar6 + 8;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = puVar9;
  puVar6[5] = puVar9;
  if (puVar6 + 0xc != (undefined8 *)0x0) {
    puVar6[3] = puVar6 + 0xc;
    *(undefined4 *)((long)puVar6 + 0x14) = 3;
  }
  puVar6[0xf] = 0;
  __ptr = *(void **)(param_1 + 0x300);
  *(undefined8 **)(param_1 + 0x300) = puVar6;
  if (__ptr != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
      }
    }
  }
  return;
}

