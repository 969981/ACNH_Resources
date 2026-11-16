
undefined8 FUN_02953cfc(long param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (*param_3 == 1) {
    puVar4 = (undefined8 *)0x0;
    if ((*(long *)(param_1 + 0x20) == 0) || (*(uint *)(param_1 + 0x18) < 2)) goto LAB_02953da0;
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
    if (((DAT_055d6e10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_055d6e10), iVar2 != 0)) {
      DAT_055d6e08 = &PTR_LAB_04a950b0;
      __cxa_guard_release(&DAT_055d6e10);
    }
  }
  else {
    if (*param_3 != 0) {
      return 0;
    }
    puVar4 = (undefined8 *)0x0;
    if ((*(long **)(param_1 + 0x20) == (long *)0x0) || (*(int *)(param_1 + 0x18) == 0))
    goto LAB_02953da0;
    puVar4 = (undefined8 *)**(long **)(param_1 + 0x20);
    if (((DAT_055d6e10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_055d6e10), iVar2 != 0)) {
      DAT_055d6e08 = &PTR_LAB_04a950b0;
      __cxa_guard_release(&DAT_055d6e10);
    }
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar4)(puVar4,&DAT_055d6e08);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_02953da0:
  uVar1 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar4 + 0x3f);
  if (uVar1 < *(uint *)(puVar4 + 0x3b)) {
    return *(undefined8 *)(puVar4[0x3c] + (long)(int)uVar1 * 8);
  }
  return 0;
}

