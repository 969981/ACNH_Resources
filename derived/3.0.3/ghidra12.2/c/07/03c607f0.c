
void FUN_03c607f0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)PTR_DAT_04bd3380;
  if ((*PTR_DAT_04bd3388 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05aee1d0);
    puVar1 = PTR_DAT_04bd3380;
    puVar3 = (undefined8 *)PTR_DAT_04bd3380;
    if (iVar2 != 0) {
      *(undefined ***)PTR_DAT_04bd3380 = &PTR_LAB_04b81d38;
      *(undefined ***)(puVar1 + 8) = &PTR_FUN_04b81d68;
      *(undefined ***)(puVar1 + 0x28) = &PTR_FUN_04b81d90;
      *(undefined ***)(puVar1 + 0x48) = &PTR_FUN_04b81db8;
      __cxa_guard_release(&DAT_05aee1d0,param_1);
      puVar3 = &DAT_05aee168;
    }
  }
  (**(code **)puVar3[1])(puVar3 + 1,param_1);
  return;
}

