
undefined8 FUN_01a112ec(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (((param_2 == 0xfffe) || (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0)) ||
     (*(int *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
  if (((DAT_052d2590 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052d2590), iVar2 != 0)) {
    DAT_052d2588 = &PTR_LAB_049fa588;
    __cxa_guard_release(&DAT_052d2590);
  }
  if (((puVar5 == (undefined8 *)0x0) ||
      (uVar3 = (**(code **)*puVar5)(puVar5,&DAT_052d2588), (uVar3 & 1) == 0)) ||
     (uVar1 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar5 + 0x3f),
     *(uint *)(puVar5 + 0x3b) <= uVar1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(puVar5[0x3c] + (long)(int)uVar1 * 8);
  }
  return uVar4;
}

