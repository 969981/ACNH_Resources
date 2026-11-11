
ulong FUN_0040cfa8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_5c;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(param_4 + 8);
  if ((lVar4 == 0) || (uVar2 = FUN_0018b798(lVar4 + 0x30), 0x100 < uVar2)) {
LAB_0040d030:
    local_5c = 0x8001000a;
    FUN_0018aa70(auStack_58,&local_5c);
    uVar1 = FUN_00198714(param_2,auStack_58);
    return (ulong)(uVar1 & 1);
  }
  lVar3 = FUN_0040b410(lVar4);
  if (lVar3 == 0) {
    lVar3 = FUN_0040b8d0(lVar4);
    if (lVar3 != 0) {
      if ((*(long *)(lVar4 + 200) != *(long *)(lVar4 + 0xc0)) &&
         (0x200 < (uint)((int)*(long *)(lVar4 + 200) - (int)*(long *)(lVar4 + 0xc0))))
      goto LAB_0040d030;
    }
  }
  else {
    uVar2 = FUN_0018b798(lVar4 + 0xa8);
    if (0x100 < uVar2) goto LAB_0040d030;
  }
  lVar4 = *(long *)(param_4 + 8);
  FUN_001fd7ec(lVar4 + 0x80,param_3);
  *(undefined4 *)(lVar4 + 0x28) = param_6;
  *(undefined4 *)(lVar4 + 0x2c) = param_5;
  uVar2 = FUN_0040bc00(param_1 + 0x140,param_2,param_4);
  return uVar2;
}

