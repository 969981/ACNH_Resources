
/* WARNING: Removing unreachable block (ram,0x03d48c4c) */

void FUN_03d48b78(long param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  int local_30;
  undefined4 uStack_2c;
  long *local_28;
  long local_20;
  undefined4 local_14;
  
  plVar1 = (long *)(*(int *)(param_1 + 0x14) + param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + (long)param_2 * 8);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1 = (long *)(*(int *)(param_1 + 0x14) + param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  plVar3 = *(long **)(param_1 + 8);
  *(long **)(param_1 + 8) = plVar1;
  *plVar1 = param_1;
  plVar1[1] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)plVar1;
  }
  local_14 = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(undefined8 *)(lVar2 + 0x20) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x28) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x90) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x30) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x38) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x40) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x48) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x50) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x58) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x60) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x68) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x70) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x78) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x80) = 0xfffffffefffffffe;
  *(undefined8 *)(lVar2 + 0x88) = 0xfffffffefffffffe;
  *(long *)(lVar2 + 0x10) = param_3;
  *(undefined8 *)(lVar2 + 0x18) = 0xfffffffefffffffe;
  uStack_2c = *(undefined4 *)(lVar2 + 0x11c);
  local_28 = (long *)0x0;
  if (param_4 != 0) {
    local_28 = &local_20;
  }
  local_38 = param_3;
  local_30 = param_2;
  local_20 = param_4;
  (*(code *)**(undefined8 **)(param_3 + 0x20))((undefined8 *)(param_3 + 0x20),0,&local_38);
  return;
}

