
void FUN_03b28250(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  
  *(long *)(param_1 + 0x20) = param_3;
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) == 0) {
    lVar3 = *(long *)(param_3 + 0x30);
  }
  else {
    lVar3 = *(long *)(param_3 + 0x18) + 0xb0;
  }
  *(long *)(param_1 + 0x18) = lVar3;
  uVar1 = FUN_00364e30(param_2,"GaugeRatio");
  uVar1 = FUN_03b185ec(param_3,uVar1,1);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00364e30(param_2,"TraceRatio");
  uVar1 = FUN_03b185ec(param_3,uVar1,1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(byte *)(*(long *)(param_1 + 0x28) + 0x57) = *(byte *)(*(long *)(param_1 + 0x28) + 0x57) & 0xdf;
  *(byte *)(*(long *)(param_1 + 0x30) + 0x57) = *(byte *)(*(long *)(param_1 + 0x30) + 0x57) & 0xdf;
  pcVar2 = (char *)FUN_00364e30(param_2,"TraceColor");
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    lVar3 = FUN_03b185ec(param_3,pcVar2,1);
    *(long *)(param_1 + 0x38) = lVar3;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) & 0xdf;
    }
  }
  pcVar2 = (char *)FUN_00364e30(param_2,"Shortage");
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    lVar3 = FUN_03b185ec(param_3,pcVar2,1);
    *(long *)(param_1 + 0x40) = lVar3;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) & 0xdf;
    }
  }
  lVar3 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"TracingSpeed");
  if (((lVar3 != 0) || (lVar3 = FUN_00364ec0(param_2,"TracingSpeed"), lVar3 != 0)) &&
     (*(short *)(lVar3 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
  }
  lVar3 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"TracingFraction");
  if (((lVar3 != 0) || (lVar3 = FUN_00364ec0(param_2,"TracingFraction"), lVar3 != 0)) &&
     (*(short *)(lVar3 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
  }
  lVar3 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"TracingWait");
  if (((lVar3 != 0) || (lVar3 = FUN_00364ec0(param_2,"TracingWait"), lVar3 != 0)) &&
     (*(short *)(lVar3 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
  }
  return;
}

