
undefined8 FUN_008d8e34(long param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *__s;
  undefined8 local_60;
  undefined4 local_58;
  
  if (*(int *)(param_1 + 0x410) == 0x21) goto LAB_008d8f14;
  iVar1 = *(int *)(param_1 + 0x31080);
  if (iVar1 < 1) goto LAB_008d8f14;
  __s = *(undefined8 **)(param_1 + 0x30780);
  *(undefined2 *)(param_1 + 0x37fac) = 0x101;
  *(undefined4 *)(param_1 + 0x307f4) = 0;
  if (__s == &DAT_0407ebb1) {
LAB_008d8ee0:
    puVar2 = *(undefined4 **)(*(long *)(param_1 + 0x31088) + (ulong)(iVar1 - 1) * 8);
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x30788) < 1) {
      iVar1 = *(int *)(param_1 + 0x30788) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
    iVar1 = *(int *)(param_1 + 0x31080);
    if (0 < iVar1) goto LAB_008d8ee0;
    puVar2 = (undefined4 *)(param_1 + 0x410);
  }
  FUN_03ebb160(param_1 + 0x408,*puVar2);
  *(undefined1 *)(param_1 + 0x37fac) = 0;
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0x30954) = (param_2 & 1) - 1;
  }
LAB_008d8f14:
  local_60 = *(undefined8 *)(param_1 + 0x2a8);
  local_58 = *(undefined4 *)(param_1 + 0x2b0);
  puVar2 = (undefined4 *)FUN_0252d9bc(0);
  if (puVar2 != (undefined4 *)0x0) {
    local_58 = puVar2[2];
    local_60 = CONCAT44((float)puVar2[1] + 0.1,*puVar2);
  }
  FUN_008ceab0(param_1,&local_60);
  return 1;
}

