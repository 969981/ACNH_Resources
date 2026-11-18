
void FUN_034514f4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_30;
  undefined4 local_28;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x242) = 1;
    puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(lVar3 + 0x228) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (((puVar4 != (undefined8 *)0x0) &&
        (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) &&
       (plVar5 = *(long **)puVar4[0x45], plVar5 != (long *)0x0)) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
      (**(code **)(plVar5[3] + 0x158))(0x3f800000,plVar5[1]);
    }
  }
  return;
}

