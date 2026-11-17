
void FUN_030bccec(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  puVar4 = (undefined8 *)*param_2;
  if (((*PTR_DAT_04bc4c80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4c80), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4c78 = PTR_DAT_04bc4c88 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4c80);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4c78);
    if ((uVar2 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x540) = puVar4;
  if (*(int *)(param_2 + 3) == DAT_056eaf38) {
    *(undefined4 *)(param_1 + 0x548) = 1;
  }
  else if (*(int *)(param_2 + 3) == DAT_056eaf44) {
    *(undefined4 *)(param_1 + 0x548) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x548) = 0;
  }
  lVar3 = *(long *)PTR_DAT_04bb2230;
  if (*(int *)(lVar3 + 0x410) == 1) {
    *(undefined4 *)(param_1 + 0x3b0) = 1;
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(lVar3 + 0x418);
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(lVar3 + 0x41c);
    *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(lVar3 + 0x420);
    uVar5 = *(undefined4 *)(lVar3 + 0x424);
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = uVar5;
  }
  else if (*(int *)(lVar3 + 0x410) == 0) {
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    uVar5 = *(undefined4 *)(lVar3 + 0x414);
    *(undefined8 *)(param_1 + 0x3b4) = 0;
    *(undefined8 *)(param_1 + 0x3bc) = 0;
    *(undefined4 *)(param_1 + 0x3c4) = uVar5;
  }
  return;
}

