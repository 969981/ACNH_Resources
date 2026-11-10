
void FUN_0018e1a4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *__ptr;
  code *pcVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_04bcbe38 + 0x10);
  (**(code **)(DAT_04c58af8 + 0x10))(&DAT_04c58af8);
  puVar1 = PTR_DAT_04bcbd18;
  (**(code **)(*(long *)PTR_DAT_04bcbd18 + 0x10))(PTR_DAT_04bcbd18);
  puVar2 = PTR_DAT_04bcbd20;
  plVar5 = *(long **)PTR_DAT_04bcbd20;
  if (plVar5 == (long *)0x0) goto LAB_0018e244;
  lVar3 = *plVar5;
  if (lVar3 == 0) {
LAB_0018e21c:
    pcVar4 = (code *)plVar5[-2];
  }
  else {
    plVar5[1] = lVar3;
    pcVar4 = *(code **)(lVar3 + -0x10);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
      goto LAB_0018e21c;
    }
    free((undefined8 *)(lVar3 + -0x10));
    pcVar4 = (code *)plVar5[-2];
  }
  if (pcVar4 == (code *)0x0) {
    free(plVar5 + -2);
  }
  else {
    (*pcVar4)(plVar5 + -2);
  }
LAB_0018e244:
  lVar3 = *(long *)puVar1;
  *(undefined8 *)puVar2 = 0;
  (**(code **)(lVar3 + 0x20))(puVar1);
  *(undefined8 *)PTR_DAT_04bcbc88 = 0;
  nn::time::Finalize();
  (**(code **)(DAT_04c58af8 + 0x20))(&DAT_04c58af8);
  if (param_1[0x44] != 0) {
    nn::mem::StandardAllocator::Finalize();
    if (param_1[0x44] != 0) {
      __ptr = (undefined8 *)(param_1[0x44] + -0x10);
      pcVar4 = (code *)*__ptr;
      if (pcVar4 == (code *)0x0) {
        free(__ptr);
      }
      else {
        (*pcVar4)();
      }
    }
    param_1[0x44] = 0;
  }
  if ((char)param_1[0x3b] != '\0') {
    nn::mem::StandardAllocator::Finalize();
  }
  FUN_00197670(param_1 + 0x37);
  FUN_0018e340(param_1 + 0x27);
  FUN_0018e550(param_1 + 0x17);
  FUN_0018e550(param_1 + 7);
  plVar5 = (long *)param_1[5];
  param_1[2] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  if ((plVar5 != (long *)0x0) && (plVar5 != param_1 + 3)) {
    pcVar4 = *(code **)((long)plVar5 + -0x14);
    if (pcVar4 == (code *)0x0) {
      free((undefined8 *)((long)plVar5 + -0x14));
    }
    else {
      (*pcVar4)();
    }
  }
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  return;
}

