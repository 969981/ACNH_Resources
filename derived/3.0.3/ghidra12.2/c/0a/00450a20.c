
void FUN_00450a20(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (((long *)*param_1 == (long *)0x0) || (*(long *)*param_1 == 0)) {
LAB_00450a8c:
    plVar1 = (long *)param_1[1];
  }
  else {
    plVar1 = (long *)FUN_00426e90(param_2,0x40);
    if (plVar1 == (long *)0x0) {
      *(undefined8 *)*param_1 = 0;
      goto LAB_00450a8c;
    }
    plVar2 = (long *)*param_1;
    if (*plVar1 == 0) {
      *plVar2 = 0;
      plVar1 = (long *)param_1[1];
    }
    else {
      if (*plVar1 == *plVar2) goto LAB_00450a8c;
      *plVar2 = (long)&LAB_00456ec0;
      plVar1 = (long *)param_1[1];
    }
  }
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    plVar1 = (long *)FUN_00426e90(param_2,0x80);
    if (plVar1 == (long *)0x0) {
      *(undefined8 *)param_1[1] = 0;
      plVar1 = (long *)param_1[2];
      goto joined_r0x00450ae8;
    }
    plVar2 = (long *)param_1[1];
    if (*plVar1 == 0) {
      *plVar2 = 0;
    }
    else if (*plVar1 != *plVar2) {
      *plVar2 = (long)&LAB_00457180;
      plVar1 = (long *)param_1[2];
      goto joined_r0x00450ae8;
    }
  }
  plVar1 = (long *)param_1[2];
joined_r0x00450ae8:
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    plVar1 = (long *)FUN_00426e90(param_2,0x200);
    if (plVar1 == (long *)0x0) {
      *(undefined8 *)param_1[2] = 0;
      return;
    }
    plVar2 = (long *)param_1[2];
    if (*plVar1 == 0) {
      *plVar2 = 0;
      return;
    }
    if (*plVar1 != *plVar2) {
      *plVar2 = (long)&LAB_00457490;
    }
  }
  return;
}

