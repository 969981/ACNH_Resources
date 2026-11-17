
void FUN_03152bc0(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_30;
  undefined4 local_28;
  
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 0xa0), lVar3 != 0)) {
    if (*(long *)(lVar3 + 0x80) != lVar3 + 0x78) {
      puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x80) - (long)*(int *)(lVar3 + 0x8c));
      if (((*PTR_DAT_04bc4c80 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4c80), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4c78 = PTR_DAT_04bc4c88 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4c80);
      }
      if (((puVar4 != (undefined8 *)0x0) &&
          (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4c78), (uVar2 & 1) != 0)) &&
         (plVar5 = *(long **)puVar4[0x81], plVar5 != (long *)0x0)) {
        local_30 = PTR_DAT_04bc0cb8 + 0x10;
        local_28 = 7;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
        (**(code **)(plVar5[3] + 0x88))(plVar5[1],param_2 & 1);
      }
    }
  }
  return;
}

