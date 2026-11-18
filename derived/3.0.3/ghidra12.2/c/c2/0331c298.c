
void FUN_0331c298(long param_1)

{
  long lVar1;
  
  *(char **)(param_1 + 0x20) = "LayoutKeyTopBase";
  if ((*(long *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0xc0) == 0)) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(long *)(param_1 + 0xa0) = param_1;
    *(undefined1 **)(param_1 + 0xa8) = &LAB_03320e90;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0x98) = &PTR_LAB_04b1e7f0;
    *(undefined8 **)(param_1 + 0x90) = (undefined8 *)(param_1 + 0x98);
    lVar1 = *(long *)(param_1 + 0x138);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x138);
  }
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x168) == 0)) {
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined ***)(param_1 + 0x140) = &PTR_LAB_04b1e7f0;
    *(long *)(param_1 + 0x148) = param_1;
    *(long *)(param_1 + 0x138) = param_1 + 0x140;
    *(undefined1 **)(param_1 + 0x150) = &LAB_03320ea0;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if ((*(long *)(param_1 + 0x1e0) == 0) && (*(long *)(param_1 + 0x210) == 0)) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined ***)(param_1 + 0x1e8) = &PTR_LAB_04b1e7f0;
    *(long *)(param_1 + 0x1f0) = param_1;
    *(long *)(param_1 + 0x1e0) = param_1 + 0x1e8;
    *(undefined1 **)(param_1 + 0x1f8) = &LAB_033213dc;
    *(undefined8 *)(param_1 + 0x200) = 0;
    lVar1 = *(long *)(param_1 + 0x288);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x288);
  }
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x2b8) == 0)) {
    *(long *)(param_1 + 0x298) = param_1;
    *(undefined ***)(param_1 + 0x290) = &PTR_LAB_04b1e7f0;
    *(undefined1 **)(param_1 + 0x2a0) = &LAB_03321430;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(long *)(param_1 + 0x288) = param_1 + 0x290;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    *(long *)(param_1 + 0x30) = param_1 + 0x40;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    return;
  }
  return;
}

