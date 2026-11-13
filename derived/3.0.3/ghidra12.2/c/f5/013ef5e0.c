
undefined8 FUN_013ef5e0(long param_1,uint param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  if (*param_3 == 1) {
    lVar6 = *(long *)(param_1 + 0x20);
    puVar4 = (undefined8 *)0x0;
    if ((param_4 & 1) == 0) {
      if ((lVar6 == 0) || (*(uint *)(param_1 + 0x18) < 4)) goto LAB_013ef6d4;
      puVar4 = *(undefined8 **)(lVar6 + 0x18);
    }
    else {
      if ((lVar6 == 0) || (*(uint *)(param_1 + 0x18) < 2)) goto LAB_013ef6d4;
      puVar4 = *(undefined8 **)(lVar6 + 8);
    }
  }
  else {
    if (*param_3 != 0) {
      return 0;
    }
    plVar5 = *(long **)(param_1 + 0x20);
    puVar4 = (undefined8 *)0x0;
    if ((param_4 & 1) == 0) {
      if ((plVar5 == (long *)0x0) || (*(uint *)(param_1 + 0x18) < 3)) goto LAB_013ef6d4;
      puVar4 = (undefined8 *)plVar5[2];
    }
    else {
      if ((plVar5 == (long *)0x0) || (*(uint *)(param_1 + 0x18) == 0)) goto LAB_013ef6d4;
      puVar4 = (undefined8 *)*plVar5;
    }
  }
  if (((DAT_051b7228 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_051b7228), iVar2 != 0)) {
    DAT_051b7220 = &PTR_LAB_04997510;
    __cxa_guard_release(&DAT_051b7228);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar4)(puVar4,&DAT_051b7220);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_013ef6d4:
  uVar1 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar4 + 0x3f);
  if (uVar1 < *(uint *)(puVar4 + 0x3b)) {
    return *(undefined8 *)(puVar4[0x3c] + (long)(int)uVar1 * 8);
  }
  return 0;
}

